import shutil
f1=open("a.txt","w")
f1.writelines('''HELLO WORLD
1.INDIA
2.USA ''')
f1.close()
f2=open("b.txt","r")
shutil.copy("a.txt","b.txt")
f2.close()
f2=open("b.txt","r")
print(f2.read())
f2.close()