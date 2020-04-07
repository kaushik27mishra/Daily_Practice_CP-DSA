# VERSION 2.0
import urllib
import urlparse
import mechanize
import webbrowser
import os
'''os.system("script2.py 1")'''
import sys
import subprocess
''' subprocess.call(['C:\\Temp\\a b c\\Notepad.exe', 'C:\\test.txt'])
    subprocess.Popen('C:\Users\Atul\Desktop\C++TesterCodechef\ContestCrawler.py')
'''

from HTMLParser import HTMLParser

############################ Utility Functions ###############################
def file_similarity(path1, path2):
    "Return float in [0., 1.] giving some measure of file similarity."
    import difflib
    with open(path1, "rb") as f1, open(path2, "rb") as f2:
        s = difflib.SequenceMatcher(lambda ch: ch in " \t\n",f1.read(),f2.read())
    return s.ratio()

######################## Initialising Path Variables #########################
my_path="C:/Users/Atul/Desktop/C++TesterCodechef"

############################### Contest Input ################################
contest_name=raw_input("Enter Contest Name:")
current_contest = my_path+"/current_contest.txt"
f=open(current_contest,"w")
f.write(contest_name)
f.close()

######################### Check for a previous crawl ##########################
mypath = my_path+"/"+contest_name
if not os.path.isdir(mypath):
    os.system(my_path+"/ContestCrawler.py")


############################# Populate All Lists #############################
files=[int(line.strip()) for line in open(mypath+"/files.txt")]
filepath=[line.strip() for line in open(mypath+"/filepath.txt")]
problem_code=[line.strip() for line in open(mypath+"/problem_code.txt")]
problem_name=[line.strip() for line in open(mypath+"/problem_name.txt")]
problem_url=[line.strip() for line in open(mypath+"/problem_url.txt")]
row_num=len(files)


########################### Display Problem List #############################
print " Problem Number             Problem Name           Problem Code"
for i in range(0,row_num):
    print '%9s' % str(i+1), '%35s' % problem_name[i],'%15s' % problem_code[i]
if row_num<1:
    sys.exit("\nNo Data Available for this contest !!\n Exiting ...")
fd=open(my_path+"/code_path.txt")
default_path=fd.read()
fd.close()
default_path=default_path+"/"+contest_name
'''"B:/Dropbox/BIN/CodeChef/"+contest_name'''

while 1:
    ######################## Take user input for a problem #######################
    print ""
    print "Enter 99 to exit"
    problem_num=int(raw_input("Choose the problem to test :"))
    if problem_num>row_num:
        sys.exit("No such Problem !!\n Exiting ...")
    source_path=default_path+"/"+problem_code[problem_num-1]+".cpp"

    ################# Duplicate user program for each tesi file ################## 
    line='Set listFile = fso.OpenTextFile('+'"'+contest_name+"\\"+problem_code[problem_num-1]+'\\code_list.txt")'
    f1=open(my_path+"/auto_compile.txt")
    script_text=f1.read()
    f1.close()
    script_text=script_text.replace('<>',line)
    f1=open(filepath[problem_num-1]+"/auto_compile.vbs","w")
    f1.write(script_text)
    f1.close()
    f1=open(filepath[problem_num-1]+"/code_list.txt","w")
    f1.write("")
    f1.close()
    f1=open(filepath[problem_num-1]+"/code_list.txt","a")
    f=open(source_path,'r')
    source_text=f.read()
    f.close()
    before_io=source_text.find('int main()')
    after_io=before_io+12
    for j in range(0,files[problem_num-1]):
        edited_source=source_text[:before_io]
        extra_text='int main()\n{\n\tfreopen("Input'+str(j)+'.txt","r",stdin);\n\tfreopen("User_output'+str(j)+'.txt","w",stdout);\n'
        edited_source+=extra_text
        edited_source+=source_text[after_io:]
        f=open(filepath[problem_num-1]+"/"+problem_code[problem_num-1]+str(j)+".cpp",'w')
        f1.write('"'+filepath[problem_num-1]+"/"+problem_code[problem_num-1]+str(j)+'.cpp"\n')
        f.write(edited_source)
        f.close()
    f1.close()
    print "Testing code(s) generated !!\nCompiling these code(s)"


    ################## Run User program on created Test file #####################
    os.system(filepath[problem_num-1]+"/auto_compile.vbs")
    done=1
    

    ################### Compare the results with Output file #####################
    if done:
        cnt=0
        for k in range(0,files[problem_num-1]):
            print "Test file", k+1, ":"
            file1=filepath[problem_num-1]+"/User_output"+str(k)+".txt"
            file2=filepath[problem_num-1]+"/Output"+str(k)+".txt"
            f=open(file1,"r")
            text=f.read()
            text=text.rstrip('\n')
            text=text.rstrip()
            f.close()
            f=open(file1,"w")
            f.write(text)
            f.close()
            f=open(file2,"r")
            text=f.read()
            text=text.rstrip('\n')
            text=text.rstrip()
            f.close()
            f=open(file2,"w")
            f.write(text)
            f.close()
            similarity=file_similarity(file1,file2)
            print similarity
            if similarity==1.0:
                print "Matched !!  :-)"
                cnt+=1
            else:
                print "Doesn't Match :-( "
        if cnt==files[problem_num-1]:
            print "YOU NAILED IT !! ;-)\nGive it a shot!\nSubmit page is opened in the browser."
            submit_page=problem_url[problem_num-1].replace("problems","submit")
            webbrowser.open_new_tab(submit_page)
        elif cnt>0:
            print "You didn't pass some of the files :("
        else:
            print "No file(s) matched !! ;-("

###############################  END OF SCRIPT #############################
########################### VERSION 3.0 COMING SOON ########################
