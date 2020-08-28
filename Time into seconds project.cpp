#include<iostream>
using namespace std;
class Time
{
	private:
		int hh,mm,ss;
		int seconds;
		
		public:
			void taketime(void);
			void converttimetoseconds(void);
			void display(void);
};
void Time::taketime(void)
{
	cout<<"Enter time"<<endl;
	cout<<"hours?"<<endl;
	cin>>hh;
    cout<<"minutes?"<<endl;
	cin>>mm;
    cout<<"seconds?"<<endl;
	cin>>ss;
}

void Time::converttimetoseconds(void)
{
	seconds=hh*3600+mm*60+ss;
	
}

void Time::display(void)
{
	cout<<"time is="<<hh<<":"<<mm<<":"<<ss<<endl;
	cout<<"Time in seconds="<<seconds;
}
int main()
{
	Time T;
	T.taketime();
	T.converttimetoseconds();
	T.display();
}
