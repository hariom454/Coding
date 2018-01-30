#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    while(t--)
        {
        long long int sum=0;
        long int n;
        cin>>n;
        long int a,b,c;
        a=(n-1)/3;
        b=(n-1)/5;
        c=(n-1)/15;
        sum=3*a*(a+1)/2+5*b*(b+1)/2-15*c*(c+1)/2;
        cout<<sum<<endl;
    }
    return 0;
}
