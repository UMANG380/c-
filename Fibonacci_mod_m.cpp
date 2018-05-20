#include<iostream>
#include <cstdlib>
using namespace std;


int fibonacci_mod_m(long long n,long long m) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current = 1;

    for (int i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous % m;
        previous = current % m;
        current = tmp_previous + current % m;
    }
    return current % m;
}



int main() {
    long long n,m;
    cout<<"Enter values for m and n \n";
    cin>>m>>n;
    int c = fibonacci_mod_m(n,m);
    cout << c << '\n';
}
