#include"testlib.h"
#include<bits/stdc++.h>
using namespace std;
 
int main(int argc,char*argv[])
{
    registerGen(argc,argv,1);
    int n=3;
    int m=atoi(argv[1]);
    cout<<n<<" "<<m<<"\n";
    cout<<1<<" "<<2<<" "<<1<<"\n";
    for(int i=2;i<m;i++)
    {
        cout<<2<<" "<<2<<" "<<i<<"\n";
    }
    cout<<2<<" "<<3<<" "<<m<<"\n";
}
