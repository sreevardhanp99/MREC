f=open("a.txt","r") 
n_of_lines=0
n_of_words =0
n_of_characters=0
for line in f:
    line=line.strip("\n")
    words=line.split()
    n_of_lines+=1
    n_of_words+=len(words)
    n_of_characters=len(line)
f.close()
print("lines",n_of_lines)
print("words",n_of_words)
print("characrers",n_of_characters)


