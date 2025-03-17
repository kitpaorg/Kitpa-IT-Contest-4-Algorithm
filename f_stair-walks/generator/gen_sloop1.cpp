#include"testlib.h"
#include<bits/stdc++.h>
using namespace std;
 
int main(int argc,char*argv[])
{
    registerGen(argc,argv,1);
    int n=atoi(argv[1]);
    int m=2*n-3;
    cout<<n<<" "<<m<<"\n";
    cout<<1<<" "<<n<<" "<<1<<"\n";
    for(int i=2;i<n;i++)
    {
        cout<<i<<" "<<n<<" "<<i<<"\n";
        cout<<i<<" "<<i<<" "<<i-1<<"\n";
    }
}
