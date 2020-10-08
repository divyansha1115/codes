#include<bits/stdc++.h>
using namespace std;
const int inf = 100005;

vector<int> g[10001];
vector<int> dis1(10001),disu(10001);
vector<bool> visited(10001);
void dfs(int x){
	visited[x]=true;
	for(auto child : g[x]){
		if (!visited[child] and ){
			dis1[child]=dis1[x]+1;
			dfs(child);
		}
	}

}

int main(int argc, char const *argv[])
{
	int n; cin>>n;
	for(int i=1; i<=n; i++){
		int x,y; cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}


	
	return 0;
}