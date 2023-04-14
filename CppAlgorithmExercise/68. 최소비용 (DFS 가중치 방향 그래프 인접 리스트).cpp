/*
문제 68. 최소비용(DFS : 가중치 방향그래프 인접리스트)
가중치 방향그래프가 주어지면 1번 정점에서 N번 정점으로 가는 최소비용을 출력하는 프로그램을 작성하세요.

▣ 입력설명
첫째 줄에는 정점의 수 N(1 <= N <= 20)와 간선의 수 M가 주어진다.그 다음부터 M줄에 걸쳐 연
결정보가 주어진다.
▣ 출력설명
최소비용을 출력합니다.

▣ 입력예제 1
5 8
1 2 12
1 3 6
1 4 10
2 3 2
2 5 2
3 4 3
4 2 2
4 5 5
▣ 출력예제 1
13*/#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

/*
int check[30], n, cost = 214700000;
vector<pair<int, int> > map[30];

void DFS(int v, int sum)
{
	if (v == n)
	{
		if (sum < cost)
			cost = sum;
	}
	else
	{
		for (int i = 0; i < map[v].size(); i++)
		{
			// v에서 갈 수 있는 정점 번호 == 0 -> 방문 X
			if (check[map[v][i].first] == 0)
			{
				check[map[v][i].first] = 1;
				// 노드 번호, 가중치 값 더하기
				DFS(map[v][i].first, sum + map[v][i].second);
				check[map[v][i].first] = 0;
			}
		}
	}
}

int main()
{
	//pair<int, int> p;					// C#에서 Dictionary랑 같은 듯
	
	int m, a, b, c;						// b : 정점, c : 가중치 값

	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b >> c;
		map[a].push_back(make_pair(b, c));
	}
	check[1] = 1;
	DFS(1, 0);

	cout << cost;

	return 0;
}
*/