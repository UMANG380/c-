#include<iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int m;
    int n1,n2,n3;
    cout<<"Enter the amount of money";
    cin>>m;
    int temp;
    n1=m/10;
    temp=m%10;
    n2=temp/5;
    int temp2;
    temp2=temp%5;
    n3=temp2/1;
    int s;
    s=n3+n2+n1;
    cout<<"Sum:\n "<<s;
    return 0;
    
}
