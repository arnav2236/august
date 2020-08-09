#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[100001],p[100001];
        cin>>s;
        cin>>p;;
        map<char,int> m1,m2;
        int i=0;
          for(char it='a';it!='z'+1;it++)
         {
             m1[it]=0;
             m2[it]=0;
         }  
        while(s[i]!='\0')
        {
            m1[s[i]]++;
            i++;
        }
        i=0;
        while(p[i]!='\0')
        {
            m2[p[i]]++;
            i++;
        }
     
    //       for(auto i=m1.begin();i!=m1.end();i++)
    // {
    //     cout<<i->first<<"  "<<i->second<<endl;
    // }  
    // cout<<endl<<"NExt"<<endl;
    //   for(auto i=m2.begin();i!=m2.end();i++)
    // {
    //     cout<<i->first<<"  "<<i->second<<endl;
    // }




          for(auto i=m2.begin();i!=m2.end();i++)
        {
            m1[i->first]-=m2[i->first];
        
        } 
    if(p[0]=='a')
    {
        while(m1['a']>0)
             {
                 cout<<'a';
                 m1['a']--;
             }
    }


         for(char it='a';it!=p[0];it++)
         {
             while(m1[it]>0)
             {
                 cout<<it;
                 m1[it]--;
             }
         }       
         cout<<p;
          
    for(char it='a';it!='z'+1;it++)
         {
             while(m1[it]>0)
             {
                 cout<<it;
                 m1[it]--;
             }
         }        
        m1.clear();
        m2.clear();

         cout<<endl;
    }
    return 0;
}