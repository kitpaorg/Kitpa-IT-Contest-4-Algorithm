#include"testlib.h"
#include<bits/stdc++.h>
using namespace std;

void ins(vector<int>&v,set<int>&s,int a)
{
    if(s.count(a))return;
    s.insert(a);v.push_back(a);
}

int samp(vector<int>&v)
{
    return v[rnd.next(v.size())];
}

int main(int argc,char*argv[])
{
    registerGen(argc,argv,1);
    int n=atoi(argv[1]);
    int m=atoi(argv[2]);
    int ra=atoi(argv[3]);
    vector<vector<int>>lvv(n+1);
    vector<set<int>>lvs(n+1);
    int init=rnd.wnext(m,-12)+1;
    vector<array<int,3>>vec;
    vector<int>vtv;
    set<int>vts;
    for(int i=0;i<init;i++)
    {
        int v=rnd.next(1,n);
        int w=rnd.next(1,ra);
        ins(lvv[v],lvs[v],w);
        ins(vtv,vts,v);
        vec.push_back({1,v,w});
    }
    for(int i=init;i<m;i++)
    {
        int u=rnd.next(1,n);
        int v=samp(vtv);
        int w=samp(lvv[v]);
        w+=rnd.next(2)*2-1;
        if(w<=0)w=ra;
        if(w>ra)w=1;
        ins(lvv[v],lvs[v],w);
        ins(vtv,vts,v);
        vec.push_back({u,v,w});
    }
    shuffle(begin(vec),end(vec));
    cout<<n<<" "<<m<<"\n";
    for(auto[a,b,c]:vec)cout<<a<<" "<<b<<" "<<c<<"\n";
}
