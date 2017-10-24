//	PHONELST - Phone List
// http://www.spoj.com/problems/PHONELST/

#include "bits/stdc++.h"
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second

#define vi      vector<int>
#define pii     pair<int,int>
#define piii    pair<pair<int,int>,int>
#define all(v)  v.begin(), v.end()

typedef struct trieNode Node;

struct trieNode{

	Node *child[11];
	bool is_leaf;
};

Node *init()
{
	Node *new_node = new Node;
	new_node -> is_leaf = false;
	for ( int i =0; i < 10; i++)
		new_node -> child[i] = NULL;
	return new_node;
}
void insert(Node *root, string val)
{
	Node *temp = root;
	int l = val.length();
	for ( int i = 0; i < l; i++)
	{
		int ind = val[i] - '0';
		if ( !temp -> child[ind])
			temp -> child[ind] = init();
		temp = temp -> child[ind];
	}
	temp -> is_leaf = true;
}
int search(Node *root, string val)
{
	Node *temp = root;
	int l = val.length();
	for ( int i = 0; i < l; i++)
	{
		int ind = val[i] -'0';
		if ( !temp ->child[ind] )
			return 0;
		temp = temp -> child[ind];
		if ( temp -> is_leaf == true)
			return 1;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t;
	cin >> t;
	while ( t-- )
	{
		int n;
		cin >> n;
		Node *root = init();

		string s;
		vector<string> v;
		for ( int i = 0; i < n; i++)
		{
			
			cin >> s;
			v.pb(s);

		}
		sort(all(v));
		bool flag = false;
		for ( int i = 0; i < n; i++)
		{
			int x = search(root,v[i]);
			if ( x == 1)
			{
				cout << "NO\n";
				flag = true;
				break;
			}
			insert(root,v[i]);

		}
		if (flag == false)
			cout << "YES\n";
	}
	return 0;
}
