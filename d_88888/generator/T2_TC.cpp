#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
typedef long long ll;
 
bool isyes(ll n, int mx){
    if(n%8) return false;
    n /= 8;
    ll o = n % 10;
    if(o < 1 or mx < o) return false;
    n /= 10;
    while(n){
        if(o < n % 10) return false;
        o = n % 10;
        n /= 10;
    }
    return true;
} 
 
ll v[18];
int main(int argc, char* argv[]) 
{
    registerGen(argc, argv, 1);
    for(int i=0; i<18; i++){
        v[i] = 8;
        for(int j=0; j<i; j++) v[i] = v[i] * 10 + 8;
    }
    int T = 100000;
    cout << T << endl;
    while(T--){
        if(rnd.next(1, 100) % 2) {
            ll n;
            while(true){
                n = rnd.next(1ll, 1000000000000000000ll);
                if(!isyes(n, 8)) break;
            }
            cout << n << endl;
        }
        else{
            while(true){
                int o1 = rnd.next(0, 17), o2 = rnd.next(0, 17);
                if(v[o1] + v[o2] <= 1000000000000000000ll){
                    cout << v[o1] + v[o2] << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
