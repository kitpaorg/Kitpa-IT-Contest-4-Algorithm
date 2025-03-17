#include "testlib.h"
#include <iostream>
 
using namespace std;
 
int main(int argc, char* argv[]) 
{
    registerGen(argc, argv, 1);
    
    int T = 100000;
    cout << T << endl;
    for(int i=0; i<T; i++){
        cout << rnd.next(1ll, 1000000000000000000ll) << endl;
    }
    return 0;
}
