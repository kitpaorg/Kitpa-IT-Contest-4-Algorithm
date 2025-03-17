#include"testlib.h"
#include<bits/stdc++.h>
using namespace std;

int main(int argc,char*argv[])
{
    registerValidation(argc,argv);
    int subtask=atoi(validator.group().c_str());
    int n=inf.readInt(1,200'000,"N");
    inf.readSpace();
    int q=inf.readInt(1,200'000,"Q");
    inf.readEoln();
    auto s=inf.readLine("[&-\\|]*","expr");
    ensure((int)s.size()==2*n-1);
    for(int i=0;i<2*n-1;i++)
    {
        if(i%2==0)ensure(s[i]=='0'||s[i]=='1');
        else ensure(s[i]=='|'||s[i]=='&');
    }
    inf.readInts(q,1,n,"ki");
    inf.readEoln();
    inf.readEof();
    if(subtask==1)
    {
        ensure(n<=300);
        ensure(q<=300);
    }
    if(subtask==2)
    {
        ensure(n<=3000);
        ensure(q<=3000);
    }
}
