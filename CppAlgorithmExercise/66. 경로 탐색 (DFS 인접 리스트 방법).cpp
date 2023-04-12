/*
문제 66. 경로 탐색(DFS : 인접리스트 방법)
방향그래프가 주어지면 1번 정점에서 N번 정점으로 가는 모든 경로의 가지 수를 출력하는 프로그램을 작성하세요.
아래 그래프에서 1번 정점에서 5번 정점으로 가는 가지 수는
1 2 3 4 5
1 2 5
1 3 4 2 5
1 3 4 5
1 4 2 5
1 4 5
총 6 가지입니다.

▣ 입력설명
첫째 줄에는 정점의 수 N(1 <= N <= 20)와 간선의 수 M가 주어진다.그 다음부터 M줄에 걸쳐 연
결정보가 주어진다.
▣ 출력설명
총 가지수를 출력한다.

▣ 입력예제 1
5 9
1 2
1 3
1 4
2 1
2 3
2 5
3 4
4 2
4 5
▣ 출력예제 1
6
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

/*
int check[30], Count = 0, n, path[30];
vector<int> map[30];

void DFS(int v)
{
	if (v == n)
	{
		Count++;

	}
	else
	{
		// v -> 정점 크기
		for (int i = 0; i < map[v].size(); i++)
		{
			// 연결 되어있는 값 -> 방문 했느냐 안했느냐 체크
			// 0 -> 방문 안함
			if (check[map[v][i]] == 0)
			{
				check[map[v][i]] = 1;
				DFS(map[v][i]);

				// 체크 풀어줌
				check[map[v][i]] = 0;
			}
		}
	}

}

// 
void DFS_Path(int v, int L)
{
	if (v == n)
	{
		Count++;

		for (int j = 0; j < L; j++) 
		{
			cout << path[j];
		}
		puts("");

	}
	else
	{
		// v -> 정점 크기
		for (int i = 0; i < map[v].size(); i++)
		{
			// 연결 되어있는 값 -> 방문 했느냐 안했느냐 체크
			// 0 -> 방문 안함
			if (check[map[v][i]] == 0)
			{
				check[map[v][i]] = 1;
				path[L] = map[v][i];
				DFS_Path(map[v][i], L + 1);

				// 체크 풀어줌
				check[map[v][i]] = 0;
			}
		}
	}

}

int main()
{
	int m, a, b;				// 간선의 수

	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		// a -> b로 갈 수 있다
		cin >> a >> b;

		// 연결 시켜줌
		map[a].push_back(b);
	}

	// 방문 체크
	check[1] = 1;
	path[0] = 1;
	//DFS(1);
	DFS_Path(1, 1);
	cout << Count;

	return 0;
}
*/