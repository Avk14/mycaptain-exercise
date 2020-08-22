#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int *p=arr;
	cout<<"enter numbers:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"you entered:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<*p<<endl;
		p++;
	}
	return 0;
}
