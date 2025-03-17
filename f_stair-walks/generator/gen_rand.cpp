#include"testlib.h"
#include<bits/stdc++.h>
using namespace std;

int main(int argc,char*argv[])
{
    registerGen(argc,argv,1);
    int n=atoi(argv[1]);
    int m=atoi(argv[2]);
    int ra=atoi(argv[3]);
    cout<<n<<" "<<m<<"\n";
    assert(ra<=m);
    for(int i=0;i<m;i++)
    {
        cout<<rnd.next(1,n)<<" ";
        cout<<rnd.next(1,n)<<" ";
        cout<<rnd.next(1,ra)<<"\n";
    }
}
