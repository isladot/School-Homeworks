import random
cont1=0
cont2=0
cont3=0
cont4=0
cont5=0
cont6=0
for x in range(100):
    b=random.randrange(0, 7)
    if(b==1):
        cont1+=1
    if(b==2):
        cont2+=1
    if(b==3):
        cont3+=1
    if(b==4):
        cont4+=1
    if(b==5):
        cont5+=1
    if(b==6):
        cont6+=1
    r1=(cont1/100)*100
    r2=(cont2/100)*100
    r3=(cont3/100)*100
    r4=(cont4/100)*100
    r5=(cont5/100)*100
    r6=(cont6/100)*100
print(f"{r1} %")
print(f"{r2} %")
print(f"{r3} %")
print(f"{r4} %")
print(f"{r5} %")
print(f"{r6} %")

    
    