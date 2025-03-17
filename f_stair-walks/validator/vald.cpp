#include"testlib.h"
#include<bits/stdc++.h>
using namespace std;

int main(int argc,char*argv[])
{
    registerValidation(argc,argv);
    int subtask=atoi(validator.group().c_str());
    int N=inf.readInt(2,50'000,"N");
    inf.readSpace();
    int M=inf.readInt(1,100'000,"M");
    inf.readEoln();
    set<int>kinds;
    for(int i=0;i<M;i++)
    {
        int u=inf.readInt(1,N,"ui");
        inf.readSpace();
        int v=inf.readInt(1,N,"vi");
        inf.readSpace();
        int x=inf.readInt(1,M,"xi");
        inf.readEoln();
        kinds.insert(x);
    }
    inf.readEof();
    if(subtask==1)
    {
        ensure(N<=1000);
        ensure(M<=2000);
    }
    if(subtask==2)
    {
        ensure(kinds.size()==M);
    }
}
