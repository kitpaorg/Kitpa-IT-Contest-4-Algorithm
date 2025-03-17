#include "testlib.h"
#include <iostream>
#include <set>
#include <cassert>
using namespace std;
typedef long long ll;

set<ll> st;

void JG(ll n){
    if(1 <= n and n <= 125000000000000000ll) st.insert(n);
    ll o = n % 10;
    for(ll i=o; i<=8; i++){
        if(1 <= n*10+i and n*10+i <= 125000000000000000ll) JG(n*10+i);
    }
}

int main(int argc, char* argv[]) 
{
    registerGen(argc, argv, 1);

    JG(0);
    cout << min(100000, (int)st.size()) << endl;
    int T = 100000;
    for(auto i:st){
        cout << 8*i << endl;
        T--;
        if(!T) break;
    }
    return 0;
}
