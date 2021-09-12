arr = [100,7,10]

ele = 0
j = 0

for i in range(len(arr)):
    if(arr[i] >= arr[i+1]):
        while(j < 9):
            arr[i+1] = str(arr[i+1]) + str(j)
            if(arr[i] >= arr[i+1]):
                break
            else:
                j++
                continue

print(arr)