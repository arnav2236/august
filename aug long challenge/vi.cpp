#include<iostream>
using namespace std;
void rightRotate(int arr[],int n)
{
	int temp = arr[n-1];
	for(int i=0;i<n-1;i++)
	{
		arr[i+1]=arr[i];
		cout<<arr[i]<<endl;
	}
	arr[0]=temp;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
int main()
{
	int n,arr[100];
	cout<<"Enter the number of elements in array:"<<endl;
	cin>>n;
	cout<<"Enter the elements in array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	rightRotate(arr,n);
return 0;
}