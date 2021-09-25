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
    //#read from file in same dir of the project


    cin.tie(0);
    cin.sync_with_stdio(0);

    //#ifndef ONLINE_JUDGE
        //freopen("File_name","r",stdin);
    //#endif // ONLINE_JUDGE

    string s;
    long long n;
    long long a_count=0;
    cin >> s;
    cin >> n;


    for (int i=0;i<s.size();i++)
        if (s[i]=='a') a_count++;

    a_count= a_count * (n/s.size());
    int remain = n%s.size();

    for (int i=0;i< remain;i++)
        if (s[i]=='a') a_count++;

    cout << a_count << endl;


    return 0;
}

