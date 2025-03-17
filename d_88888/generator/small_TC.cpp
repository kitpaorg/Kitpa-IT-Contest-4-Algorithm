#include "testlib.h"
#include <iostream>
 
using namespace std;
 
int main(int argc, char* argv[]) 
{
    registerGen(argc, argv, 1);
    
    int T = 100000;
    cout << T << endl;
    for(long long i=0; i<T; i++){
        cout << rnd.next(1, 10000000) << endl;
    }
    return 0;
}
