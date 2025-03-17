#include"testlib.h"
#include<bits/stdc++.h>
using namespace std;

int main(int argc,char*argv[])
{
    registerGen(argc,argv,1);
    int n=atoi(argv[1]);
    int m=atoi(argv[2]);
    cout<<n<<" "<<m<<"\n";
    int v=rnd.next(n); 
    for(int i=0;i<m;i++)
    {
        cout<<(i+v)%n+1<<" "<<(i+v+1)%n+1<<" "<<i+1<<"\n";
    }
}
