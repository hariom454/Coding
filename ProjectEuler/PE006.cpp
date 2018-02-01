#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
        {
        int n;
        cin>>n;
        long long a,b,diff;
        a=n*(n+1)/2;
        a*=a;
        b=n*(n+1);
        b*=(2*n+1);
        b/=6;
        diff=abs(a-b);
        cout<<diff<<endl;
    }
    return 0;
}
