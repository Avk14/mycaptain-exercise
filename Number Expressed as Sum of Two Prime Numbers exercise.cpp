#include<iostream>
using namespace std;
int prime(int x);
int main()
{
    int x,flag=0;
    cout<<"Enter a positive integer : ";
    cin>>x;
    for(int j=2;j<=x/2;j++){
        if(prime(j)==1){
            if(prime(x-j)==1)
            {
                cout<<x<<" = "<<j<<" + "<<x-j<<"\n";
                flag=1;
            }}}
    if (flag==0){
        cout<<"cannot be expressed as the sum of two prime numbers\n";
    }


}
int prime(int x)
{   int isprime=1;
    for(int i=2;i<=x/2;i++)
        if (x%i==0){
            isprime=0;
            break;
        }{
        return isprime;
        }}
