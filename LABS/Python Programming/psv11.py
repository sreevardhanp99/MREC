def ul(list):
    u=[]
    for x in list:
        if x not in u:
            u.append(x)           
                        
    
    print(u)
    
list=[1,2,3,2,2,4,5,5]
list2=[1,1,2,2,3]

print("uniquelist")
ul(list)
ul(list2)
