import os
import time
os.system('cls')

#############################################################
#                  Predifined Text                          #
#############################################################
auto_compile_text='Set fso = CreateObject("Scripting.FileSystemObject")\n<>\ndo while not listFile.AtEndOfStream\n    fName =  listFile.ReadLine()\nSet oShell = CreateObject("WScript.Shell")\noShell.Run(fName)\nWScript.Sleep 2000\noShell.SendKeys "{F9}"\nWScript.Sleep 1500\noShell.SendKeys "{ENTER}"\nloop\n'

#############################################################
#                 Setup Display Messages                    #
#############################################################
print "       C++ Tester   SETUP"
print "   ---------"
print "  |  Step 1 |"
print "   ---------"
print "  Creating required files..."
time.sleep(3)

os.system('cls')
print "       C++ Tester   SETUP"
print "   ---------       --------"
print "  |  Step 1 | --> | Step 2 |"
print "   ---------       --------"

print "  Collecting Information"

my_path=raw_input("Enter the path of script folder :")
f=open(my_path+"/my_path.txt","w")
f.write(my_path)
f.close()

code_path=raw_input("Enter the path of default code folder :")
f=open(my_path+"/code_path.txt","w")
f.write(code_path)
f.close()

f=open(my_path+"/template.txt","w")
f.write("")
f.close()
time.sleep(3)
f=open(my_path+"/auto_compile.txt","w")
f.write(auto_compile_text)
f.close()

os.system('cls')
print "                 C++ Tester   SETUP"
print "   ---------       --------       --------"
print "  |  Step 1 | --> | Step 2 | --> | Step 3 |"
print "   ---------       --------       --------"

print " Now you need to do these 2 steps:\n1. Edit the C++Tester.py file to add your script path under the INITIALISING PATH VARIABLES section\n 2. Edit the template.txt file and your template code there"
print "\n\n Hit 1 when ready !!"
n=raw_input()

os.system('cls')
print "                 C++ Tester   SETUP"
print "   ---------       --------       --------       --------"
print "  |  Step 1 | --> | Step 2 | --> | Step 3 | --> | Step 4 |"
print "   ---------       --------       --------       --------"
print "  Getting the application ready"
time.sleep(2)
