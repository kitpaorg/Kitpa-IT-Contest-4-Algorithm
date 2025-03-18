#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
typedef long long ll;

/*
subtask
1) N <= 87
2) (N with answer yes) can be expressed by 2 88
3) random
*/

bool isyes(ll n, int mx){
    if(n%8) return false;
    n /= 8;
    int o = n % 10;
    if(o < 1 or mx < o) return false;
    n /= 10;
    while(n){
        if(o < n % 10) return false;
        o = n % 10;
        n /= 10;
    }
    return true;
}

int main(int argc,char*argv[])
{
    registerValidation(argc,argv);

    string subtaskstr = validator.group();
	int subtask = atoi(subtaskstr.c_str());

    int T = inf.readInt(1, 100'000, "T");
    inf.readEoln();

    for (int i = 0; i < T; i++)
    {
        ll n = inf.readLong(1ll, 1'000'000'000'000'000'000ll, "n");
        inf.readEoln();
        if(subtask == 1){
            inf.ensuref(1 <= n and n <= 87, "subtask 1 wrong validation");
        }
        else if(subtask == 2){
            if(isyes(n, 8)){
                inf.ensuref(isyes(n, 2), "subtask 2 wrong validation");
            }
        }
        else{
            continue;
        }
    }
    inf.readEof();
    return 0;
}
