/*
* Hariom singh
* pe04
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long

ll palindrome( ll n)
{
	ll sum=0;
	while(n>0)
	{
		int r=n%10;
		sum=sum*10+r;
		n/=10;
	}
	
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,max=0;
		cin>>n;
		ll v[100000];
		int flag=0,i,j,k=0;
		for( i=999;i>100;i--)
		{
		for( j=999;j>100;j--)
		{
		ll prod=i*j;
	//	cout<<prod<<" ";
		if(palindrome(prod)==prod)
		{
		
		if(prod<=n)
		{
		
		v[k]=prod;
		k++;
	}
		}
		}
	
		}
		
		sort(v,v+k);
		cout<<v[k-1]<<endl;
	}
	return 0;
}
