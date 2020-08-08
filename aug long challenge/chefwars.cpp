#include<bits/stdc++.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    while(n--)
    {
        int h,p;
        cin>>h>>p;
        while(h>0&&p>0)
        {
           h=h-p;
           p=floor(p/2);
        }

         if(p==0)
            {
                cout<<"0"<<endl;
            }else{
                cout<<"1"<<endl;
            }
    }

    return 0;
}