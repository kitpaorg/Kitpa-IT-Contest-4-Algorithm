#include"testlib.h"
#include<bits/stdc++.h>
using namespace std;
 
int main(int argc,char*argv[])
{
    registerGen(argc,argv,1);
    int n=atoi(argv[1]);
    int m=atoi(argv[2]);
    cout<<n<<" "<<m<<"\n";
    int a=1;
    for(int i=1;i<=m-3;i++)
    {
        int vv=rnd.next(2,n);
        cout<<a<<" "<<vv<<" "<<i<<"\n";
        a=vv;
    }
    int v1=rnd.next(2,n);
    int v2=rnd.next(2,n);
    cout<<a<<" "<<v1<<" "<<m-2<<"\n";
    cout<<a<<" "<<v2<<" "<<m-2<<"\n";
    cout<<v1<<" "<<v2<<" "<<m-3<<"\n";
}
