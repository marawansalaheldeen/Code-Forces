#include <bits/stdc++.h>

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>

using namespace std;

typedef pair <int , int> pii;
typedef pair <pii , int> piii;
typedef vector<int> vi;



#define loop(n)  for(int i=0; i < (n); i++)
#define lp(x,s,e)  for(int x=(s); x < (e); x++)
#define lpe(x,s,e)  for(int x=(s); x <= (e); x++)

#define MP make_pair
#define PB push_back
#define all(a)  a.begin,a.end()
#define endl '\n'


int main()
{


    //cin.tie(0);
    //cin.sync_with_stdio(0);
    int t;
    cin >> t;
while(t--){

    int a = 0;
    int b = 0;
    int c = 0;

    bool canbe = false;




        string s;
        cin >> s;

        cout << s << endl;
        loop(s.size()){

            if(s[i] == 'A'){
                a += 1;
            }else if(s[i] == 'B'){
                b += 1;
            }else{
                c += 1;
            }

        }

        int checkAB = b-a;

        if(checkAB == 0 && c == 0){
            canbe = true;
        }else if(checkAB > 0){

            if((checkAB-c) == 0){
                canbe = true;
            }
        }

        if(canbe){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
return 0;

}
