#include<iostream>
#include<cmath>
using namespace std;
void positiveInteger(int goal){
	int n;
	int sum;
	n=-1+sqrt(1+(8*goal));
	n=floor(n);
    n=n/2;
	sum=(n*(n+1))/2;
	if(sum<goal)
	{
        cout<<"Minimum value of n: ";
		cout<<(n+1);
        return;
	}
	else {
        cout<<"Minimum value of n: ";
		cout<<(n);
        
		return ;
	}
	
}
int main(){
	int goal;
	cout<<"Enter the value of goal"<<endl;
	cin>>goal;
    cout<<"You entered :"<<goal<<endl;
	cout<<positiveInteger(goal)<<endl;
    return 0;
}