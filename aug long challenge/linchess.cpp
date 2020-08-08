#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)  
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> v;
        for(ll i=0;i<n;i++)
        {   int a;
            cin>>a;
            v.push_back(a);
        }
       vector<ll>::iterator itr;
       vector<ll> v2;
        for(itr=v.begin();itr<v.end();itr++)
        {   
            if(*itr<k)
            {
                ll y=*itr;

                while(*itr<=k)
                {
                    *itr+=y;
                }
                *itr-=y;
                if(*itr==k)
                {
                    v2.push_back(y);
                    continue;
                }
                v2.push_back(INT16_MAX);
                continue;

            }else{
                ll y=*itr;
                while(*itr>=k)
                {
                    *itr-=y;
                }
                *itr+=y;
                if(*itr==k)
                {
                    v2.push_back(y);
                    continue;
                }
                v2.push_back(INT16_MAX);
                continue;
            }
            ll minnum=INTMAX_MAX;
            for(itr=v2.begin();itr<v2.end();itr++)
            {  
                if(minnum>*itr)
                {
                    minnum=*itr;
                }
            }
            cout<<minnum<<endl;
            
        }



    }
    return 0;
}