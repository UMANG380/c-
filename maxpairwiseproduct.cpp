
#include<iostream>
#include <cstdlib>
using namespace std;



    void maxProduct(int arr[], int n)
{
    if (n < 2)
    {
        cout << "No pairs exists\n";
        return;
    }
 

    int a = arr[0], b = arr[1];
 
   
    for (int i=0; i<n; i++)
      for (int j=i+1; j<n; j++)
         if (arr[i]*arr[j] > a*b)
            a = arr[i], b = arr[j];
 
    cout << "Max product pair is {" << a << ", "
         << b << "}";
}
 
int main()
{
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maxProduct(arr, n);
    return 0;
}


