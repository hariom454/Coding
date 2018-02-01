  /*
  * Hariom singh
  * pe05
  */

#include<bits/stdc++.h>

using namespace std;
#define ll long long
int gcd(int a,int b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		ll a[n+1];
		for(i=1;i<=n;i++)
		a[i]=i;
		for(i=1;i<n;i++)
		{
			int x=gcd(a[i],a[i+1]);
		//	cout<<x<<" ";
			a[i+1]=(a[i]*a[i+1])/x;
			//a[i+1]/=x;
			//cout<<a[i]<<" ";
		}
		cout<<a[n]<<endl;
	}
	return 0;
}