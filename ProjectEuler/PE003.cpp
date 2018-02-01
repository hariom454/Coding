
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
    int t,i;
    cin>>t;
    long int n;
    while(t--)
        {
        cin>>n;
        while(n%2==0)
            {
            n/=2;
        }
        int x=0;
        for(i=3;i<=sqrt(n);i=i+2)
            {
            while(n%i==0)
                n/=i;
                x=i;
        }
        if(n>2&&n>x)
        cout<<n<<endl;
        else
        cout<<x<<endl;
        
    }
    return 0;
}