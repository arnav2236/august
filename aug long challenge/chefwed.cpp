#include<bits/stdc++.h>
using namespace std;
map<int , int> m;
int maxnum=INT_MIN;
int count(map<int,int> &m,int maxnum)
{
    int c=0;
     for(int i=0;i<=maxnum;i++)
    {
        if(m[i]>0){c++;}
    }
    return c;

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
        if(max<arr[i])
        {maxnum=arr[i];}
        m[arr[i]]++;
    }


    int sum=0,max_val=INT_MIN,min_val=INT_MAX;
    sum+=k;
    for(int i=0;i<=maxnum;i++)
    {
        if(m[i]>0){m[i]--;}
    }
    while(count(m,maxnum)!=0)
    {
    if(k<=(2*count(m,maxnum)))
    {
        sum+=k;
    }
    else{
        



    }
    }



    
}

return 0;
}