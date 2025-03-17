#include"testlib.h"
#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(int argc,char*argv[])
{
    registerValidation(argc,argv);
    int subtask=atoi(validator.group().c_str());

    int tc=inf.readInt(1,1000,"T");
    inf.readEoln();

    ll maxn=0,sumn=0,sumq=0;

    for(int t=1;t<=tc;t++)
    {
        setTestCase(t);
        int n=inf.readInt(1,500'000,"N");
        inf.readSpace();
        int q=inf.readInt(1,100'000,"Q");
        inf.readEoln();
        maxn=max(maxn,(ll)n);
        sumn+=n;sumq+=q;
        auto s=inf.readLine("[&-\\|]*","expr");
        ensure((int)s.size()==2*n-1);
        for(int i=0;i<2*n-1;i++)
        {
            if(i%2==0)ensure(s[i]=='0'||s[i]=='1'||s[i]=='?');
            else ensure(s[i]=='|'||s[i]=='&'||s[i]=='?');
        }
        for(int z=0;z<q;z++)
        {
            int i=inf.readInt(1,2*n-1,"ki");
            inf.readSpace();
            auto c=inf.readToken("[&-\\|]","ci");
            inf.readEoln();
            i--;
            s[i]=c[0];
            if(i%2==0)ensure(s[i]=='0'||s[i]=='1'||s[i]=='?');
            else ensure(s[i]=='|'||s[i]=='&'||s[i]=='?');
        }
    }
    inf.readEof();
    if(subtask==1)
    {
        ensure(maxn<=7);
        ensure(tc<=5);
        ensure(sumq<=50);
    }
    if(subtask==2)
    {
        ensure(sumn<=300);
        ensure(sumq<=300);
    }
    if(subtask==3)
    {
        ensure(sumn<=3000);
        ensure(sumq<=3000);
    }
}
