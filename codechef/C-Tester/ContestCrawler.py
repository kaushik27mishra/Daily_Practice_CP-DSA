# VERSION 2.0
import urllib
from bs4 import BeautifulSoup
import urlparse
import mechanize
import requests
import re
import webbrowser
import os
import sys

from HTMLParser import HTMLParser

########################## Utility Functions #############################
class MLStripper(HTMLParser):
    def __init__(self):
        self.reset()
        self.fed = []
    def handle_data(self, d):
        self.fed.append(d)
    def get_data(self):
        return ''.join(self.fed)

def strip_tags(html):
    s = MLStripper()
    s.feed(html)
    return s.get_data()
######################## Initialising Path Variables #########################

my_path="C:/Users/Atul/Desktop/C++TesterCodechef"

######################### Opening URL for contest #########################
f=open(my_path+"/current_contest.txt")
contest_name=f.read()
contest_name.strip()
f.close()
url="http://www.codechef.com/"+contest_name
htmlfile=requests.get(url)

################## Getting all HTML content of the web-page ################
body= htmlfile.content


############ Getting the table content from the problems-table #############
start= body.find('<tr class="problemrow">')
end= body.find('</tbody>',start)
table=body[start:end]
#print table

####################### Separating rows of the table #######################
row_num=0
row_start=start
row_end=start
problem_name=[]

problem_code=[]
problem_url=[]
for i in range(0,21):
    problem_name.append("")
    problem_code.append("")
    problem_url.append("")

row_start=table.find('<b>')
row_end=table.find('</b>',row_start)
problem_name[row_num]=table[row_start+3:row_end]
row_start=row_end
#print row_start,row_end
row_start=table.find('<td >',row_start)
row_end=table.find('</td>',row_start)
problem_code[row_num]=table[row_start+5:row_end]
start_code=problem_code[row_num].find('">')
if start_code>=0:
    start_code+=2
    end_code=problem_code[row_num].find("<",start_code)
    if end_code>=0:
        problem_code[row_num]=problem_code[row_num][start_code:end_code]
row_start=row_end

problem_url[row_num]=url+"/problems/"+problem_code[row_num]

while row_start>0:
    row_num+=1
    try:
        ''' To get problem name'''
        row_start=table.find('<b>',row_start)
        row_end=table.find('</b>',row_start)
        problem_name[row_num]=table[row_start+3:row_end]
        row_start=row_end
        ''' To get problem code'''
        row_start=table.find('<td >',row_start)
        row_end=table.find('</td>',row_start)
        problem_code[row_num]=table[row_start+5:row_end]
        start_code=problem_code[row_num].find('">')
        start_code+=2
        if(start_code>=0):
            end_code=problem_code[row_num].find("<",start_code)
            if end_code>=0:
                problem_code[row_num]=problem_code[row_num][start_code:end_code]
        row_start=row_end
            
        ''' Generate problem URL'''
        problem_url[row_num]=url+"/problems/"+problem_code[row_num]
    except:
        break
######################### Make a folder for Contest ##########################
mypath = my_path+"/"+contest_name
if not os.path.isdir(mypath):
       os.makedirs(mypath)
########################## Generate template codes ###########################
fd=open(my_path+"/code_path.txt")
folder_path=fd.read()
fd.close()
folder_path=folder_path+"/"+contest_name

if not os.path.isdir(folder_path):
       os.makedirs(folder_path)
folder_path+="/"
template_path="C:/Users/Atul/Desktop/C++TesterCodechef/template.txt"
tf=open(template_path)
template_text=tf.read()
tf.close()
for i in range(0,row_num):
    try:
        file_path=folder_path+problem_code[i]+".cpp"
        f=open(file_path)
        f.close()
    except:
        f=open(file_path,"w")
        f.write(template_text)
        f.close()

########################### Display Problem List #############################
print " Problem Number             Problem Name           Problem Code"
for i in range(0,row_num):
    print '%9s' % str(i+1), '%35s' % problem_name[i],'%15s' % problem_code[i]
total_files=0
if row_num<1:
    sys.exit("\nNo Data Available for this contest !!\n Exiting ...")
print "\nProcessing...."

filepath=[]
files=[]
for i in range(0,20):
    filepath.append("")
    files.append(0)
######### Create user selected problem's Input and Output test files #########    
for n in range(0,row_num):
    filepath[n] = mypath+"/"+problem_code[n]
    if not os.path.isdir(filepath[n]):
       os.makedirs(filepath[n])
    problem_html=requests.get(problem_url[n])
    ''' Getting all HTML content of the problem-page'''
    problem_body= problem_html.content
    ''' Getting the table content from the problems-table'''
    input_start=problem_body.find('Example')
    if input_start<0:
        input_start=problem_body.find('Sample')
    file_num=0
    while input_start>0:
        input_start= problem_body.find('Input',input_start)
        if input_start<0:
            break
        input_start= problem_body.find('>',input_start)
        input_start+=1
        input_end=problem_body.find('Output',input_start)
        if input_end<0:
            break
        input_text1=strip_tags(problem_body[input_start:input_end])
        input_text1=input_text1.lstrip()
        input_text1=input_text1.rstrip('\n')

        input_end= problem_body.find('<',input_start)
        input_text2=problem_body[input_start:input_end]
        input_text2=input_text2.lstrip()
        input_text2=input_text2.rstrip('\n')
        input_text2=input_text2.replace('&lt;','<')
        input_text2=input_text2.replace('&gt;','>')
        if len(input_text1)>len(input_text2):
            input_text=input_text1
        else:
            input_text=input_text2
        ''' print "input is:"
        print input_text'''
        f=0
        if input_start==input_end:
            break
        else:
            ######################################################
            #  Generate Output file iff Input file is generated  #
            ######################################################
            output_start= problem_body.find('Output',input_start)
            if output_start<0 :
                break
            output_start= problem_body.find('>',output_start)
            output_start+=1

            output_end=problem_body.find('Input',output_start)
            if output_end<0:
                output_end=problem_body.find('pre',output_start)
                if output_end<0:
                    break
            output_text1=strip_tags(problem_body[output_start:output_end])
            output_text1=output_text1.lstrip()
            output_text1=output_text1.rstrip('\n')
            
            output_end= problem_body.find('<',output_start)
            output_text2=problem_body[output_start:output_end]
            output_text2=output_text2.lstrip()
            output_text2=output_text2.rstrip('\n')
            output_text2=output_text2.replace('&lt;','<')
            output_text2=output_text2.replace('&gt;','>')

            if len(output_text1)>len(output_text2):
                output_text=output_text1
            else:
                output_text=output_text2
            '''print "output is:"
            print output_text'''
            f=0
            if output_start==output_end:
                break
            
            # Writing into files iff both input & output files are formed
            input_text+="\n"
            f=open(filepath[n]+"/Input"+str(file_num)+".txt",'w')
            f.write(input_text)
            f.close()
            output_text+="\n"
            f=open(filepath[n]+"/Output"+str(file_num)+".txt",'w')
            f.write(output_text)
            f.close()
            file_num+=1
    print file_num, "input-ouput file(s) created for problem :"+problem_code[n]
    files[n]=file_num
    total_files+=file_num
print ""
print "All "+str(total_files)+" input & output files for the contest generated!!"


################# Build necessary files for the tester #####################

f1=open(mypath+"/files.txt","w")
f2=open(mypath+"/filepath.txt","w")
f3=open(mypath+"/problem_code.txt","w")
f4=open(mypath+"/problem_url.txt","w")
f5=open(mypath+"/problem_name.txt","w")
f1.write("")
f2.write("")
f3.write("")
f4.write("")
f1.close()
f2.close()
f3.close()
f4.close()
f1=open(mypath+"/files.txt","a")
f2=open(mypath+"/filepath.txt","a")
f3=open(mypath+"/problem_code.txt","a")
f4=open(mypath+"/problem_url.txt","a")
f5=open(mypath+"/problem_name.txt","a")
for i in range(0,row_num):
    f1.write(str(files[i])+"\n")
    f2.write(filepath[i]+"\n")
    f3.write(problem_code[i]+"\n")
    f4.write(problem_url[i]+"\n")
    f5.write(problem_name[i]+"\n")
f1.close()
f2.close()
f3.close()
f4.close()
f5.close()
    

###############################  END OF SCRIPT #############################
########################### VERSION 3.0 COMING SOON ########################
