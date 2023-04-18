/*
문제 79. 원더랜드(Prim MST 알고리즘 : priority_queue 활용)
원더랜드에 문제가 생겼다.원더랜드의 각 도로를 유지보수하는 재정이 바닥난 것이다.
원더랜드는 모든 도시를 서로 연결하면서 최소의 유지비용이 들도록 도로를 선택하고 나머지도로는 폐쇄하려고 한다.
어떤 도로는 도로를 유지보수하면 재정에 도움이 되는 도로도 존재한다.재정에 도움이 되는 도로는 비용을 음수로 표현했다.
아래의 그림은 그 한 예를 설명하는 그림이다.

위의 지도는 각 도시가 1부터 9로 표현되었고, 지도의 오른쪽은 최소비용 196으로 모든 도시를 연결하는 방법을 찾아낸 것이다.

▣ 입력설명
첫째 줄에 도시의 개수 V(1≤V≤100)와 도로의 개수 E(1≤E≤1, 000)가 주어진다.다음 E개의줄에는 각 도로에 대한 정보를 나타내는 세 정수 A, B, C가 주어진다.
이는 A번 도시와 B번 도시가 유지비용이 C인 도로로 연결되어 있다는 의미이다.C는 음수일 수도 있으며, 절댓값이 1, 000, 000을 넘지 않는다.
▣ 출력설명
모든 도시를 연결하면서 드는 최소비용을 출려한다.

▣ 입력예제 1
9 12
1 2 12
1 9 25
2 3 10
2 8 17
2 9 8
3 4 18
3 7 55
4 5 44
5 6 60
5 7 38
7 8 35
8 9 15
▣ 출력예제 1
196
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

/*
int check[30];

struct Edge 
{
	int e;
	int value;

	Edge(int a, int b) 
	{
		e = a;
		value = b;
	}
	bool operator<(const Edge& b)const 
	{
		return value > b.value;				// 최소 힙
	}
};

int main() 
{
	priority_queue<Edge> Q;
	vector<pair<int, int> > map[30];
	int n, m, a, b, c, res = 0;

	cin >> n >> m;
	for (int i = 1; i <= m; i++) 
	{
		// 간선 정보 입력
		cin >> a >> b >> c;
		// 무방향
		map[a].push_back(make_pair(b, c));
		map[b].push_back(make_pair(a, c));
	}

	// 임의의 시작 지점
	Q.push(Edge(1, 0));

	while (!Q.empty()) 
	{
		Edge tmp = Q.top();
		Q.pop();

		int v = tmp.e;				// 현재 v -> 1
		int cost = tmp.value;		// 현재 const -> 0

		// v라는 정점이 트리의 원소인가?
		if (check[v] == 0)
		{
			res += cost;			// 가중치 더하고
			check[v] = 1;				// 체크 걸음

			for (int i = 0; i < map[v].size(); i++) 
			{
				if (check[map[v][i].first] == 0)
				{
					// 정점 번호, 가중치 값
					Q.push(Edge(map[v][i].first, map[v][i].second));
				}
			}
		}
	}
	cout << res;
	return 0;
}
*/