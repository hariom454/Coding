// prime Number
bool pr[1000005];
void prime()
{
memset(pr,true,sizeof(pr));
pr[0] = false;
pr[1] = false;

for ( int i = 2 ; i < 1001 ;i++)
{
	if ( pr[i] == true)
	for ( int j = i*i ; j<=1000000;j+=i)
	{
	 pr[j] = false;	
	}
	}	
}

// GCD
int gcd(int a , int b)
{
    if ( b == 0)
    return a;
    return gcd( b, a % b);
}

// divisors
int divisors( int n)
{
    int cnt  = 0;
    int result = 1;
    while ( n % 2 == 0)
    {
        n /= 2;
        cnt++;
    }
    result *= ( cnt + 1);
    for ( int i = 3 ; i*i <= n ;i+= 2)
    {
        cnt = 0;
        while ( n % i == 0)
        {
            n /= i;
            cnt ++;
            
        }
        result *= ( cnt + 1);
        
    }
   // cout << n << " ";
    if ( n > 1)
    result *= 2;
   
    return result;

} 
 // second approach
int divisors( int n)
{
    int cnt  = 0;
    int p = sqrt(n) + 1;
    for ( int i = 1 ; i < p ;i++)
    {
        if ( n % i == 0)
        {
            if ( n / i == i)
            cnt ++;
            else
            cnt += 2;
        }
    }
    return cnt;
}

// Eulers totient function
int eulerT( int n)
{
	ll result = n;
	for ( int i = 2 ; i*i <= n ; i++)
	{
		int flag = 0;
		while( n % i == 0)
		{
			n /= i;
			flag = 1;
		}
		if ( flag == 1)
		{
			result *= (i-1);
			result /= i;
		}
	}
	if ( n > 1)
	result *= (n-1);
	result /= n;
	return result;
}

// power of two big numbers
