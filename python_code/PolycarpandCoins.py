
t = int(input(""))

while t : 

    n = int(input(""))

    c1 = 0 ; c2 = 0

    if n % 3 == 0:
        c1 = n/3
        c2 = c1
    elif n % 3 == 1:
        n = n -1
        c2 = n/3
        c1 = c2 + 1   
    elif n % 3 == 2:
        n = n - 2
        c1 = n/3
        c2 = c1 + 1       
    t -= 1        
    print (int(c1),int(c2))
