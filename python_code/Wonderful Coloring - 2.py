t = int(input(""))
while t :
    y , x = input().split()
    k = int(x)
    n = int(y)
    ans_arr = []


    if n % k == 0:
        
        if int(n / k) == 1 :
            for j in range(1,k+1):
                ans_arr.append(j)
        else:
            for i in range(1,n+1):
                for j in range(1,k+1):
                    ans_arr.append(j)

    elif n % k == 1:
        
        w = n - 1
        r = int(w / k)

        for i in range(1,r+1):
            for j in range(1,k+1):
                ans_arr.append(j)
            if len(ans_arr) == n-1:
                ans_arr.append(0)

    elif n % k == 2:
        w = n - 1
        r = int(w / k)

        for i in range(1,r+1):
            if i == 1:
                ans_arr.append(0)
            for j in range(1,k+1):
                ans_arr.append(j)
            if len(ans_arr) == n-1:
                ans_arr.append(0)


    print(ans_arr)
    t -= 1


        
# arr_p = [3,1,1, 1,1,10, 3,10,10  ,2] [3,1,10,2]
# ans =   [1,1,0, 2,3,2,  3,2,3,    1 ]

# n = int(input(""))