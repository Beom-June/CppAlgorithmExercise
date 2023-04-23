/*
문제 81. 벨만 - 포드 알고리즘
N개의 도시가 주어지고, 각 도시들을 연결하는 도로와 해당 도로를 통행하는 비용이 주어질
때 한 도시에서 다른 도시로 이동하는데 쓰이는 비용의 최소값을 구하는 프로그램을 작성하세요.

▣ 입력설명
첫 번째 줄에는 도시의 수N(N <= 100)과 도로수 M(M <= 200)가 주어지고, M줄에 걸쳐 도로정보
와 비용이 주어진다.만약 1번 도시와 2번도시가 연결되고 그 비용이 13이면 “1 2 13”으로주어진다.
그 다음 마지막 줄에 출발도시와 도착도시가 주어진다.
▣ 출력설명
출발도시에서 도착도시까지 가는데 걸리는 최소비용을 출력한다.음의 사이클이 존재할 경우 -1 를 출력한다.

▣ 입력예제 1
5 7
1 2 5
1 3 4
2 3 - 3
2 5 13
3 4 5
4 2 3
4 5 7
1 5
▣ 출력예제 1
14
참고 : 벨만포드 알고리즘은 그래프가 음의 사이클이 존재하면 안된다.
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

/*
int dist[101];
struct Edge
{
	int start;
	int end;
	int value;
	Edge(int a, int b, int c)
	{
		start = a;
		end = b;
		value = c;
	}
};

int main()
{
	vector<Edge> edge;
	int n, m;				// 자연수 n, m
	int a, b, c;			// 간선 정보
	int start, end;			// 출발 정점, 끝 정점

	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b >> c;

		// 생성자
		edge.push_back(Edge(a, b, c));
	}

	for (int i = 1; i <= n; i++)
	{
		dist[i] = 214700000;
	}

	cin >> start >> end;

	// 출발 정점 초기화
	dist[start] = 0;

	// i = 1 이면 간선 한 번 만에, i = 2 이면 간선 두 번만에...
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < edge.size(); j++)
		{
			int u = edge[j].start;
			int v = edge[j].end;
			int w = edge[j].value;

			// 출발이 무한대면 갱신 x && 
			if (dist[u] != 214700000 && dist[u] + w < dist[v])
			{
				// 값 갱신
				dist[v] = dist[u] + w;
			}
		}
	}

	// 간선의 갯수가 n해서 최소 비용이 있으면, 음의 사이클이 있다
	for (int j = 0; j < edge.size(); j++)
	{
		int u = edge[j].start;
		int v = edge[j].end;
		int w = edge[j].value;

		// 출발이 무한대면 갱신 x && 
		if (dist[u] != 214700000 && dist[u] + w < dist[v])
		{
			cout << -1 << endl;
			exit(0);
		}
	}
	cout << dist[end];
	return 0;
}
*/