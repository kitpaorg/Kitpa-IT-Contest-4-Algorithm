#include"testlib.h"
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main(int argc,char*argv[])
{
    registerGen(argc,argv,1);
    int n,q;
    n=atoi(argv[1]);
    q=atoi(argv[2]);
    cout<<n<<" "<<q<<"\n";
    string s(2*n-1,'&');

    vector<int>ids[2];

    for(int i=0;i<n;i++)
    {
        s[i*2]='0'+rnd.next(2);
        ids[s[i*2]^'0'].push_back(i);
    }

    int part=rnd.next(1,n);
    auto sizes=rnd.partition(part,n);

    for(int i=0,k=0;i+1<part;i++)
    {
        k+=sizes[i];
        s[k*2-1]='|';
    }

    cout<<s<<"\n";
    
    vector<int>cnts,caps,idxs(n);int cnt=0;
    for(int i=0,id=0;i<n;)
    {
        int j=i;
        while(j+1<n&&s[j*2+1]=='&')j++;
        int cn=0,ca=j-i+1;
        for(int k=i;k<=j;k++)
        {
            idxs[k]=id;
            if(s[k*2]=='1')cn++;
        }
        id++;
        cnts.push_back(cn);
        caps.push_back(ca);
        if(cn==ca)cnt++;
        i=j+1;
    }

    vector<int>queries;

    while(q--)
    {
        int k;
        if(cnt>0)
        {
            swap(ids[1][rnd.next(ids[1].size())],ids[1].back());
            k=ids[1].back();ids[1].pop_back();
            ids[0].push_back(k);
        }
        else
        {
            swap(ids[0][rnd.next(ids[0].size())],ids[0].back());
            k=ids[0].back();ids[0].pop_back();
            ids[1].push_back(k);
        }
        if(cnts[idxs[k]]==caps[idxs[k]])cnt--;
        if(s[k*2]=='0')cnts[idxs[k]]++;
        else cnts[idxs[k]]--;
        s[k*2]^=1;
        if(cnts[idxs[k]]==caps[idxs[k]])cnt++;
        queries.push_back(k+1);
    }
    for(int i=0;i<size(queries);i++)cout<<queries[i]<<" \n"[i+1==size(queries)];
}
