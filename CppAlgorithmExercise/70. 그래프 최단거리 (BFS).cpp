/*
문제 70. 그래프 최단거리(BFS)
다음 그래프에서 1번 정점에서 각 정점으로 가는 최소 이동 간선수를 출력하세요.
1 2 5
3 4 6

▣ 입력설명
첫째 줄에는 정점의 수 N(1 <= N <= 20)와 간선의 수 M가 주어진다.그 다음부터 M줄에 걸쳐 연
결정보가 주어진다.
▣ 출력설명
1번 정점에서 각 정점으로 가는 최소 간선수를 2번 정점부터 차례대로 출력하세요.

▣ 입력예제 1
6 9
1 3
1 4
2 1
2 5
3 4
4 5
4 6
6 2
6 5
▣ 출력예제 1
2 : 3
3 : 1
4 : 1
5 : 2
6 : 2
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

/*
int check[30], dis[30];

int main()
{
	int n, m, a, b, x;		// n : 정점, m : 간선수
	vector<int> map[30];
	queue<int> Q;

	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b;
		// 연결
		map[a].push_back(b);
	}

	Q.push(1);
	check[1] = 1;

	while (!Q.empty())
	{
		x = Q.front();
		Q.pop();

		for (int i = 0; i < map[x].size(); i++)
		{
			if (check[map[x][i]] == 0)
			{
				check[map[x][i]] = 1;
				Q.push(map[x][i]);

				// 방문하려는 노드. 
				dis[map[x][i]] = dis[x] + 1;
			}
		}
	}

	// 2번 정점부터 출력
	for (int i = 2; i <= n; i++)
	{
		cout << i << " : " << dis[i];
		puts(" ");
	}
	return 0;
}
*/