def palindrom(n):
    if(str(n)[:]==str(n)[::-1]):
        return True 
maxs=1
d=1
for i in range(100,998):
    for j in range(100,998):
        d=i*j
        if(palindrom(d)):
            if(d>maxs):
                maxs=d
print(maxs)
