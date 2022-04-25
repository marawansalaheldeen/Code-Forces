//https://codeforces.com/problemset/problem/266/A
#include <iostream>

using namespace std;

int main()
{
    int t;
    int countS = 0;
    string s;

    cin >> t ;
    cin >> s ;

    for(int i=1;i<t;i++)
        if(s[i] == s[i-1])
            countS += 1;
    cout << countS << endl;
    return 0;
}
