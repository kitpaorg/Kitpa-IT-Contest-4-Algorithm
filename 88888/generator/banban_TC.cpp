#include "testlib.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll; 
vector<int> v(9);

int main(int argc, char* argv[]) 
{
    registerGen(argc, argv, 1);
    
    int T = 100000;
    cout << T << endl;
    for(long long i=0; i<T; i++){
        if(rnd.next(1, 100) % 2 == 0){
            cout << rnd.next(1, 10000000) << endl;
        }
        else{
            while(true){
                for(int j=1; j<=8; j++) v[j] = rnd.next(0, 2);
                if(v[8] > 0) break; 
            }
            ll o = 0;
            for(int j=1; j<=8; j++){
                while(v[j]--) o *= 10, o += j;
            }
            cout << o * 8 << endl;
        }
    }
    return 0;
}
