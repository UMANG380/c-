
#include<iostream>
#include <cstdlib>
using namespace std;


int gcd(long long  a,long long  b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    long long  a,b;
    cout<<"Enter two number\n";
    cin>>a>>b;
    cout<<"\n GCD :"<<gcd(a,b);
}
