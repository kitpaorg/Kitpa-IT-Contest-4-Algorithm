#include"testlib.h"
#include<bits/stdc++.h>
using namespace std;

int main(int argc,char*argv[])
{
    registerGen(argc,argv,1);
    int n=atoi(argv[1]);
    int m=atoi(argv[2]);
    cout<<n<<" "<<m<<"\n";
    int v=rnd.next(1,m);
    int a=1;
    for(int i=v;i<=m;i++)
    {
        int vv=rnd.next(1,n);
        cout<<a<<" "<<vv<<" "<<i<<"\n";
        a=vv;
    }
    a=1;
    for(int i=1;i<v;i++)
    {
        int vv=rnd.next(1,n);
        cout<<a<<" "<<vv<<" "<<v-i<<"\n";
        a=vv;
    }
}
