#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter your age"<<endl;
	cin>>age;
	if(age>18)
	{
		cout<<"you are eligible for voting";
	}
	else if(age==18)
	{
		cout<<"congratulations you are eligible for voting from this year";
	}
	else
	{
		cout<<"you are not eligible";
	}
	return (0);
	
}
