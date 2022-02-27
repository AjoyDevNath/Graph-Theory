//graph theory basic
#include<bits/stdc++.h>
using namespace std;

void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int adj[100][100];

int main()
{
	init_code();
	fastIO();

	int node,edge;
	cin>>node>>edge;

	int x1,x2;

	for(int i = 0; i < edge; i++)
	{	
		cin>>x1>>x2;
		adj[x1][x2] = 1;
		adj[x2][x1] = 1;
	}

	for(int  i = 0 ; i < node; i++)
	{
		for(int j = 0;j < node;j++){

			cout<<adj[i][j]<<" ";
		}
		cout<<"\n";
	}
}