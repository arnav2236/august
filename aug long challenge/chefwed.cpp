#include<bits/stdc++.h>
using namespace std;

map<int , int> m;

//int maxnum=INT_MIN;
int count(map<int,int> &m)
{
    int c=0;
     
for(auto i=m.begin();i!=m.end();i++)
    {
        if(i->second>0){c++;}
    }
    // cout<<"count="<<c<<endl;
    return c;
}

void  dec(map<int,int> &m)
{int x=0;
  //cout<<"decremented="<<endl;
for(auto i=m.begin();i!=m.end();i++)
    {
        if(i->second>0){
            i->second--;
       // cout<<" "<<i->second;  
         }
    }
    return;
   
}

int qu(map<int,int> &m)
{   int cost=0;
    for(auto i=m.begin();i!=m.end();i++)
    {   
        if(i->second>0){cost+=i->second;cost++;}
    }
 //  cout<<"cost="<<cost<<endl;
    return cost;
}



int main(){
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    
    
    for(int i=0;i<n;i++)
    {   
        cin>>arr[i];
        // if(max<arr[i])
        // {maxnum=arr[i];}
        m[arr[i]]++;
    }
 //cout<<endl<<"starts here"<<endl;

    int sum=0,max_val=INT_MIN,min_val=INT_MAX;
    sum+=k;
    dec(m);
  

    while(count(m)>0)
    {
    int cost=qu(m);
    if(cost<=k)
    {
        sum+=cost;break;
    }else{
        sum+=k;
        dec(m);        
    }
    }
    cout<<sum<<endl;
    
   
    m.clear();


    
}

return 0;
}