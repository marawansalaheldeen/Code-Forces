// it's well known that any integer can be represeneted as a sum of distinct powers of two. for exapmle
// 63 can be represeneted as sum of powers of 2 as : 2^0 + 2^1 +2^2 + 2^3 + 2^4 + 2^5 . while 10
// 2^1 + 2^3
// given an integer n, in its representation as sum of distinct powers of two , count the number of powers of two (2^x)
//  where x is EVEN

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x,t;

    cin >> t;

    while(t--){

        cin >> x;
        vector<long int> binary_num;

        while (x > 0)
        {
            binary_num.push_back(x % 2);
            x = x / 2;
        }

        int even_counter = 0;

        for (int i = 0; i < binary_num.size(); i++)
        {
            if (binary_num[i] == 1){

                if(i % 2 == 0){
                    even_counter += 1;
                }
            }
        }
        cout << even_counter;
        cout << endl;
        }

    return 0;
}