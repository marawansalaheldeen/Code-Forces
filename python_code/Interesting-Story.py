# t = int(input(""))

wordsNum = int(input(""))

words_array = []



for i in range(wordsNum):
    word = input("")
    words_array.append(word)


def getCount(wordsArray):
    count_a = 0
    count_b = 0
    count_c = 0
    count_d = 0
    count_e = 0
    
    for i in range(len(wordsArray)):
        for j in range(len(wordsArray[i])):
            if wordsArray[i][j] == "a":
                count_a += 1
            elif wordsArray[i][j] == "b":
                count_b += 1
            elif wordsArray[i][j] == "c":
                count_c += 1
            elif wordsArray[i][j] == "d":
                count_d += 1
            elif wordsArray[i][j] == "e":
                count_e += 1
    return count_a,count_b,count_c,count_d,count_e

res = getCount(words_array)

letters_count = {"a":res[0],"b":res[1],"c":res[2],"d":res[3],"e":res[4]}
getMax = max(letters_count,key=letters_count.get)
maxRepeatNum = letters_count[getMax]


def has_no_letter(wordsArr,letter):    
    w = []

    for i in range (len(wordsArr)):

        letters = len(wordsArr[i])
        count = 0
        while letters > 0:
            if wordsArr[i][letters-1] == str(letter):
                count = count + 1
            letters = letters - 1
        w.append(count)    
    return w

def count_which_not(arr,checkLetter):
    inc = 0
    
    for i in range(len(arr)):
        for j in range(len(arr[i])):
            if arr[i][j] != checkLetter:
                inc += 1

    return inc 

    
all_words_count = count_which_not(words_array,getMax)
if maxRepeatNum > all_words_count:
    print(len(words_array))
#print(has_no_letter(words_array,str(getMax)))


