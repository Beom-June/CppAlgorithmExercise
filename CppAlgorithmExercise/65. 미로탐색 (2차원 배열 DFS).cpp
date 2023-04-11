/*
문제 65. 미로탐색(DFS)
7 * 7 격자판 미로를 탈출하는 경로의 가지수를 출력하는 프로그램을 작성하세요.출발점은 격자의(1, 1) 좌표이고, 탈출 도착점은(7, 7)좌표이다.격자판의 1은 벽이고, 0은 통로이다.격
자판의 움직임은 상하좌우로만 움직인다.미로가 다음과 같다면

출발 0 0 0 0 0 0
  0 1 1 1 1 1 0
  0 0 0 1 0 0 0
  1 1 0 1 0 1 1
  1 1 0 0 0 0 1
  1 1 0 1 1 0 0
  1 0 0 0 0 0 도착

위의 지도에서 출발점에서 도착점까지 갈 수 있는 방법의 수는 8가지이다.
▣ 입력설명
첫 번째 줄부터 7 * 7 격자의 정보가 주어집니다.
▣ 출력설명
첫 번째 줄에 경로의 가지수를 출력한다.

▣ 입력예제 1
0 0 0 0 0 0 0
0 1 1 1 1 1 0
0 0 0 1 0 0 0
1 1 0 1 0 1 1
1 1 0 0 0 0 1
1 1 0 1 1 0 0
1 0 0 0 0 0 0
▣ 출력예제 1
8
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
/*
int map[10][10], check[10][10];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int Count = 0;

void DFS(int x, int y)
{
	int xx, yy;						// 갈 방향

	// 종점
	if (x == 7 && y == 7)
	{
		Count++;
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			xx = x + dx[i];
			yy = y + dy[i];

			// 각 미로의 끝에서 벗어나는 경우의 수 처리 
			if (xx < 1 || xx > 7 || yy < 1 || yy > 7)
			{
				continue;
			}

			// 통로이고 두 격자가 방문 X 이면
			if (map[xx][yy] == 0 && check[xx][yy] == 0)
			{
				check[xx][yy] = 1;
				DFS(xx, yy);
				check[xx][yy] = 0;
			}

		}
	}
}

int main()
{
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			cin >> map[i][j];
		}
	}

	// 1행 1열 부터 시작
	check[1][1] = 1;

	DFS(1, 1);

	cout << Count;

	return 0;
}
*/