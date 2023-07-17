/*
문제 88. 미로의 최단거리 통로(BFS 활용)
7 * 7 격자판 미로를 탈출하는 최단경로의 경로수를 출력하는 프로그램을 작성하세요.경로수는 출발점에서 도착점까지 가는데 이동한 횟수를 의미한다.출발점은 격자의(1, 1) 좌표이고,
탈출 도착점은(7, 7)좌표이다.격자판의 1은 벽이고, 0은 도로이다.
격자판의 움직임은 상하좌우로만 움직인다.미로가 다음과 같다면
출발 0 0 0 0 0 0
0 1 1 1 1 1 0
0 0 0 1 0 0 0
1 1 0 1 0 1 1
1 1 0 1 0 0 0
1 0 0 0 1 0 0
1 0 1 0 0 0 도착
위와 같은 경로가 최단 경로이며 경로수는 12이다.

▣ 입력설명
첫 번째 줄부터 7 * 7 격자의 정보가 주어집니다.
▣ 출력설명
첫 번째 줄에 최단으로 움직인 칸의 수를 출력한다.도착할 수 없으면 - 1를 출력한다.

▣ 입력예제 1
0 0 0 0 0 0 0
0 1 1 1 1 1 0
0 0 0 1 0 0 0
1 1 0 1 0 1 1
1 1 0 1 0 0 0
1 0 0 0 1 0 0
1 0 1 0 0 0 0
▣ 출력예제 1
12
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

/*
int n, map[10][10], dist[10][10];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

struct Loc
{
	int x;
	int y;
	Loc(int a, int b)
	{
		x = a;
		y = b;
	}
};

// 최단 거리 찾을 때 queue 이용
queue<Loc> Q;

int main()
{
	// 맵 정보 입력
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			cin >> map[i][j];
		}
	}

	// 시작
	Q.push(Loc(1, 1));

	map[1][1] = 1;

	while (!Q.empty())
	{
		Loc temp = Q.front();
		Q.pop();

		// 네 방향으로 확인
		for (int i = 0; i < 4; i++)
		{
			int xx = temp.x + dx[i];
			int yy = temp.y + dy[i];

			// 0이면 갈 수 있음. 4 방향 막음
			if (map[xx][yy] == 0 && xx >= 1 && xx <= 7 && yy >= 1 && yy <= 77)
			{
				Q.push(Loc(xx, yy));
				// 체크
				map[xx][yy] = 1;
				dist[xx][yy] = dist[temp.x][temp.y] + 1;

			}
		}
	}
	cout << dist[7][7];

	return 0;
}
*/