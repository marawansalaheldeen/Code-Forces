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


int main()
{
    //#read from file in same dir of the project
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n,t,e;

    vector<int> vi;
    stack<int> s;
    bool can_be = true;
    cin >> t;

    while(t--){
        cin >> n;
        for(int i =0;i<n;i++){
            cin >> e;
            vi.push_back(e);
        }
    }

    int next_car=1;

    for(int i =0;i<vi.size();i++){

        if(next_car == vi[i]){

            next_car++;

        }else if(!s.empty() && next_car == s.top()){

            s.pop();
            next_car++;

        }else{
            if(!s.empty() && vi[i] > s.top()){

                can_be = false;

            }else{

                s.push(vi[i]);
            }
        }

    }

    if(can_be){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
