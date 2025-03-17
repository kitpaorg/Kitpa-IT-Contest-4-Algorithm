#include"testlib.h"
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
string rd[2]{"01?","&|?"};
 
int main(int argc,char*argv[])
{
    registerGen(argc,argv,1);
    int t=atoi(argv[1]);
    int sumn=atoi(argv[2]);
    int sumq=atoi(argv[3]);
    cout<<t<<"\n";
 
    auto ns=rnd.partition(t,sumn);
    auto qs=rnd.partition(t,sumq);
 
    for(int tc=0;tc<t;tc++)
    {
        int n=ns[tc],q=qs[tc];
        cout<<n<<" "<<q<<"\n";
        string s(2*n-1,'?');
        for(int i=0;i<2*n-1;i++)s[i]=rd[i%2][rnd.next(3)];
        cout<<s<<"\n";
        while(q--)
        {
            int i=rnd.next(2*n-1);
            cout<<i+1<<" ";
            char c=rd[i%2][rnd.next(3)];
            while(c==s[i])c=rd[i%2][rnd.next(3)];
            cout<<c<<"\n";
            s[i]=c;
        }
    }
}
