#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

int V,E,K;
vector<vector<pair<int, int> > > map;
int dist[300001];
int main()
{
	scanf("%d%d\n%d", &V,&E,&K);
	map.resize(V*2);
	for(int i=0;i<300002;i++) dist[i] = -1;
	for(int i=0; i<E; i++)
	{
		int u, v, w;
		scanf("%d%d%d", &u, &v, &w);
		map[u].push_back(make_pair(v, w));
	}

	priority_queue<pair<int,int>, vector< pair<int,int> >, greater<pair<int,int> > > que;
	que.push(make_pair(0, K));//K부터 second까지의 최단거리: first
	dist[K] = 0;
	while(!que.empty())
	{
		int now = que.top().second;
		int dis = que.top().first;
		que.pop();
		if(dist[now] != -1 && dist[now] < dis) continue;

		for(int i=0; i<map[now].size(); i++)
		{
			int next =  map[now][i].first;
			int next_dis = map[now][i].second;
			if(dist[next] == -1 || dist[next] > dis + next_dis)
			{
				dist[next] = dis + next_dis;
				que.push(make_pair(dis+next_dis, next));
			}
		}
	}
	for(int i =1; i<=V; i++)
		if(dist[i]==-1) printf("INF\n");
		else printf("%d\n", dist[i]);
}
