#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,minvalue=INT_MIN;
        int flag=0;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            ll x=arr[i],y=arr[i];
            
            if(x<k)
            {   while((x+y)<=k)
                {x=x+y;}
                if((x)==k)
                {
                    if(minvalue<y)
                    {
                        minvalue=y;
                    }
                    flag=1;
                    continue;
                }
            }
            else if (x==k)
            {
                if(minvalue<y)
                    {
                        minvalue=y;
                    }
                flag=1;
                continue;
            }else{
                    while((x-y)>k)
                {x=x-y;}
                if((x-y)==k)
                {
                    if(minvalue<y)
                    {
                        minvalue=y;
                    }
                    flag=1;
                    continue;
                }
            }
            
        
        
        
        }
        if(flag==0)
        {
            cout<<"-1"<<endl;
        }
        else{
            cout<<minvalue<<endl;
        }




    }


    return 0;
}