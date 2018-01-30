#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    long long int n,sum;
    long long int f[1000000];
    int i;
    f[0]=1;
    f[1]=2;
    cin>>t;
    while(t--)
        {
        sum=2;
        cin>>n;
        i=0;
        while(f[i+1]<=n)
            {
            f[i+2]=f[i+1]+f[i];
            if(f[i+2]%2==0&&f[i+2]<=n)
                sum+=f[i+2];
            i++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
