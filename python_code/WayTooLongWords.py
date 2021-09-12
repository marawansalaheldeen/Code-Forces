""" 
                                                    //// Problem ////
                                                    
Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.

Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: 

we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. 

That number is in decimal system and doesn't contain any leading zeroes.

Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".

You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.

Input
The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n lines contains one word. 

All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.

Output
Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data. 

"""




test_cases = int(input())

words_array = []

for i in range(test_cases):
    the_word = input()
    words_array.append(the_word)

for i in range(len(words_array)):
    if(len(words_array[i]) > 10):
        last_letter =  len(words_array[i]) - 1
        numbers_in_between = len(words_array[i]) - 2
        print(f'{words_array[i][0]}{numbers_in_between}{words_array[i][last_letter]}')
    else:
        print(words_array[i])
