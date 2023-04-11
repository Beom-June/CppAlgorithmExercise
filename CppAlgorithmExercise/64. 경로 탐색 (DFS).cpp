/*
문제 64. 64. 경로 탐색(DFS)
방향그래프가 주어지면 1번 정점에서 N번 정점으로 가는 모든 경로의 가지 수를 출력하는 프로그램을 작성하세요.아래 그래프에서 1번 정점에서 5번 정점으로 가는 가지 수는
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
int map[30][30], check[30], Count = 0, n;

void DFS(int v)
{
	// 도착지점
	if (v == n)
	{
		Count++;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			// 방문 할 수 있느냐 && 방문을 안했느냐
			if (map[v][i] == 1 && check[i] == 0)
			{
				// 방문 함
				check[i] = 1;
				// 뒤로 물러난 상황
				DFS(i);

				// 체크 풀어줘야함 -> 그래야 다시 돌아갈 수 있음
				check[i] = 0;
			}
		}
	}
}


int main()
{
	int m, a, b;

	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b;

		map[a][b] = 1;
	}

	check[1] = 1;
	DFS(1);

	cout << Count;

	return 0;
}
*/