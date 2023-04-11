/*
문제63. 인접행렬(가중치 방향그래프)
아래 그림과 같은 그래프 정보를 인접행렬로 표현해보세요.
▣ 입력설명
첫째 줄에는 정점의 수 N(1 <= N <= 20)와 간선의 수 M가 주어진다.그 다음부터 M줄에 걸쳐 연
결정보와 거리비용이 주어진다.
▣ 출력설명
인접행렬을 출력하세요.

▣ 입력예제 1
6 9
1 2 7
1 3 4
2 1 2
2 3 5
2 5 5
3 4 5
4 2 2
4 5 5
6 4 5
▣ 출력예제 1
0 7 4 0 0 0
2 0 5 0 5 0
0 0 0 5 0 0
0 2 0 0 5 0
0 0 0 0 0 0
0 0 0 5 0 0
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

/*
int map[51][51];

int main()
{
	int n, m, i, j;		// n : 정점의 수, m : 간선의 수
	int a, b, c;

	cin >> n >> m;
	for (i = 1; i <= m; i++)
	{
		cin >> a >> b >> c;
		// 무방향일 때는 이렇게 삽입
		//map[a][b] = 1;
		//map[b][a] = 1;

		// 가중치
		map[a][b] = c;
	}
	// 출력
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << map[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
*/