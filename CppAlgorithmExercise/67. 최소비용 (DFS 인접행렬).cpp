/*
문제 67. 최소비용(DFS : 인접행렬)
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
13
*/
#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
/*
int map[30][30], check[30], n, cost = 214700000;

void DFS(int v, int sum)
{
	// 종착점
	if (v == n)
	{
		if (sum < cost)
			cost = sum;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (map[v][i] > 0 && check[i] == 0)
			{
				check[i] = 1;
				DFS(i, sum + map[v][i]);
				check[i] = 0;
			}
		}
	}

}

int main()
{
	int m, a, b, c;

	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b >> c;
		map[a][b] = c;
	}
	check[1] = 1;
	DFS(1, 0);

	cout << cost;
	return 0;
}
*/