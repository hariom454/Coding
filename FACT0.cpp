/*------------------------------------\
*	Hariom Singh					  
*	SVNIT Surat						  
*									  
*------------------------------------*/

#include<bits/stdc++.h>
using namespace std;

#define pi 3.141592654
#define fix(n) cout << fixed << setprecision(n)

#define fore(i,a,b) for(i=a;i<=b;i++)
#define forl(i,a,b) for(i=a;i<b;i++)
#define si(d) scanf("%d",&d)
#define sll(d) scanf("%lld",&d)
#define pin(d) printf("%d\n",d)
#define pln(d) printf("%lld\n",d)
#define ll long long
#define ull unsigned long long
int mod=1000*1000*1000+7;
void primeFact( ll n)
{
    int cnt = 0;
    while( n % 2 == 0)
    {
        n /= 2;
        cnt ++;
    }
    if ( cnt > 0)
    {
        cout << 2 <<"^" << cnt << " ";
    }
    for ( ll i = 3 ; i *i <= n ; i+= 2)
    {
    int cnt = 0;
    while( n % i == 0)
    {
        n /= i;
        cnt ++;
    }
    if ( cnt > 0)
    {
        cout << i <<"^" << cnt << " ";
    }
    }
    if ( n > 2)
    cout << n <<"^1"; 
    cout << "\n";
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	while ( true)
	{
	    ll x;
	    cin >> x;
	    if ( x == 0)
	    return 0;
	    primeFact(x);
	}
	return 0;
}
