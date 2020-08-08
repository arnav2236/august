#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long int arr[1000008];
    for(long long int i=0;i<1000008;i++)
    {
        arr[i]=(i/9);
    }


    while(t--)
    {
        int chef,rick,countc=0,countr=0;
        cin>>chef>>rick;

    // while(c>9&&r>9)
    // {   countc++;
    //     countr++;
    //     c-=9;
    //     r-=9;
    // }

    long long int c=arr[chef];
    long long int r=arr[rick];
    
    if(r<=c)
    {   if(rick%9==0)
        {
        cout<<"1 "<<(r)<<endl;
        }else{
            cout<<"1 "<<(r+1)<<endl;
        }
    
    }else{
        
        if(chef%9==0)
        {
        cout<<"0 "<<(c)<<endl;
        }else{
            cout<<"0 "<<(c+1)<<endl;
        }

        
    }

    // if(r<=9&&c<=9&&r<=c)
    // {
    //     cout<<"1 "<<(countr+1)<<endl;

    // }else if (c>9 &&r<=9)
    // {
    //     cout<<"1 "<<(countr+1)<<endl;
    // }else if (c<=9&&r>9)
    // {
    //     cout<<"0 "<<(countc+1)<<endl;
    // }
    // 0-> chef wins 1-> rick wins

    // 0/1 and jo jita uske length of integer



    }



    return 0;
}