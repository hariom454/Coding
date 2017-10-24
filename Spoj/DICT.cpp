// 	DICT - Search in the dictionary!
//	http://www.spoj.com/problems/DICT/

#include<bits/stdc++.h>
using namespace std;

#define pi 3.141592654
#define fix(n) cout << fixed << setprecision(n)
#define debug(x) cerr << "val of x: " << x << endl;

#define rep(i,a,b) for(int i=a;i<b;i++)
#define ren(i,a,b) for(int i=a;i>=b;i--)

#define ll  long long
#define ull unsigned long long

#define mp make_pair
#define pb push_back
#define fi first
#define se second

#define vi      vector<int>
#define pii     pair<int,int>
#define piii    pair<pair<int,int>,int>
#define all(v)  v.begin(), v.end()

int mod = 1000000007;
const int N = 1005;

// gcd
ll gcd(ll a , ll b)
{
    if ( b == 0)
    return a;
    return gcd( b, a % b);
}
vector<string> v;
typedef struct trieNode Node;
struct trieNode {
	Node *child[26];
	vi vp;

};
Node *init()
{
	Node *new_node = new Node;
	for ( int i = 0; i < 26; i++)
		new_node -> child[i] = NULL;
	return new_node;
}
void insert(Node *root, int x)
{
	string s = v[x];
	int l = s.length();
	Node *temp = root;
	for ( int i = 0; i < l; i++)
	{
		int ind = s[i] -'a';
		if (!temp -> child[ind] )
		{
			temp -> child[ind] = init();
		}
		temp = temp -> child[ind];
		if ( i != l - 1)
		temp -> vp.pb(x);
		//cout << (temp -> vp).size() << endl;
		//cout << (temp -> vp)[(temp -> vp).size() -1] << endl;
	}
}
vi search(Node *root, string s)
{
	int l = s.length();
	Node *temp = root;
	for ( int i = 0; i < l; i++)
	{
		int ind = s[i] - 'a';
		if (!temp -> child[ind])
			return {};
		temp = temp -> child[ind];
	}
	return temp ->vp;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	
	set<string> st;
	Node *root = init();
	
	for ( int i = 1; i <= n; i++)
	{

		string s;
		cin >> s;

		//cout << s << endl;
		int l = v.size();
		st.insert(s);
		if ( st.size() == l )
			continue;
		v.pb(s);
		insert(root,l);
	}

	int q;
	cin >> q;
	int tc = 1;
	while ( q-- )
	{
		cout << "Case #" << tc <<":\n";
		tc ++;
		string s;
		cin >> s;
		vi ans = search(root, s);
		if ( ans.size() == 0)
			cout << "No match.\n";
		else
		{
			vector<string> vs;
			for ( int i = 0; i < ans.size(); i++)
				vs.pb(v[ans[i]]);
			sort(all(vs));
			for ( int i = 0; i < vs.size(); i++)
				cout << vs[i] << "\n";
		}
	}

	return 0;
}
