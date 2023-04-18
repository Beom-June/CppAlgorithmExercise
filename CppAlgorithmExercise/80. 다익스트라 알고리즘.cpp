/*
문제 80. 다익스트라 알고리즘
아래의 가중치 방향그래프에서 1번 정점에서 모든 정점으로의 최소 거리비용을 출력하는 프로그램을 작성하세요.
(경로가 없으면 Impossible를 출력한다)

▣ 입력설명
첫째 줄에는 정점의 수 N(1 <= N <= 20)와 간선의 수 M가 주어진다.그 다음부터 M줄에 걸쳐 연결정보와 거리비용이 주어진다.
▣ 출력설명
1번 정점에서 각 정점으로 가는 최소 비용을 2번 정점부터 차례대로 출력하세요.

▣ 입력예제 1
6 9
1 2 12
1 3 4
2 1 2
2 3 5
2 5 5
3 4 5
4 2 2
4 5 5
6 4 5
▣ 출력예제 1
2 : 11
3 : 4
4 : 9
5 : 14
6 : impossible
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#define x first
#define y second
using namespace std;

/*
int check[30], dist[30];
vector<pair<int, int> > map[30];

int main() 
{
	int n, m;					// n : 정점의 수, m : 간선의 수
	int i, j, a, b, c, min;

	cin >> n >> m;

	for (i = 1; i <= m; i++)
	{
		cin >> a >> b >> c;
		// 방향 연결
		map[a].push_back(make_pair(b, c));
	}

	// 모든 배열에 무한 값
	for (i = 0; i <= n; i++)
	{
		// 무한대로 초기화
		dist[i] = 2147000000;
	}

	// 초기화
	dist[1] = 0;

	for (i = 1; i <= n; i++)
	{
		min = 0;
		for (j = 1; j <= n; j++)
		{
			if (check[j] == 0 && dist[j] < dist[min])
			{
				min = j;
			}
		}

		check[min] = 1;

		for (j = 0; j < map[min].size(); j++)
		{
			int v = map[min][j].x;
			int cost = map[min][j].y;

			if (dist[v] > dist[min] + cost)
			{
				dist[v] = dist[min] + cost;
			}
		}
	}

	// 2번 정점부터 출력하라고 했으니
	for (i = 2; i <= n; i++)
	{
		if (dist[i] != 2147000000)
		{
			cout << i << " : " << dist[i] << endl;
		}
		else
		{
			cout << i << " : " << "impossible" << endl;
		}
	}
	return 0;
}
*/