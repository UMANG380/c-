
#include<iostream>
#include <cstdlib>
using namespace std;



int fib(int n)
{
    if(n<=1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    cout<<"Enter the nth term";
    cin>>n;
    cout<<"\n Result :"<<fib(n);
}