/*
문제 87. 섬나라 아일랜드(BFS 활용)
섬나라 아일랜드의 지도가 격자판의 정보로 주어집니다.각 섬은 1로 표시되어 상하좌우와 대각선으로 연결되어 있으며, 0은 바다입니다.
섬나라 아일랜드에 몇 개의 섬이 있는지 구하는 프로그램을 작성하세요.
1 1 0 0 0 1 0
0 1 1 0 1 1 0
0 1 0 0 0 0 0
0 0 0 1 0 1 1
1 1 0 1 1 0 0
1 0 0 0 1 0 0
1 0 1 0 1 0 0
만약 위와 같다면

▣ 입력설명
첫 번째 줄에 자연수 N(1 <= N <= 20)이 주어집니다.
두 번째 줄부터 격자판 정보가 주어진다.
▣ 출력설명
첫 번째 줄에 섬의 개수를 출력한다.

▣ 입력예제 1
7
1 1 0 0 0 1 0
0 1 1 0 1 1 0
0 1 0 0 0 0 0
0 0 0 1 0 1 1
1 1 0 1 1 0 0
1 0 0 0 1 0 0
1 0 1 0 1 0 0
▣ 출력예제 1
5
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

/*
int n, map[30][30], cnt = 0;

// 8 방향으로 초기화. 시계 방향으로 회전하는 것
int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int dy[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };

struct Loc
{
	int x;
	int y;

	// 생성자 초기화
	Loc(int a, int b)
	{
		x = a;
		y = b;
	}
};

// BFS로 하기 위하여 queue 선언
queue<Loc> Q;

int main()
{
	cin >> n;

	// 이중 for문이 돌면서 map에 저장
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> map[i][j];
		}
	}

	// 이중 for문이 돌면서 1을 찾는다
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			// 1을 만나면 push
			if (map[i][j] == 1)
			{
				Q.push(Loc(i, j));
				// 그 좌표를 0으로 변경
				map[i][j] = 0;

				while (!Q.empty())
				{
					Loc tmp = Q.front();
					Q.pop();

					for (int i = 0; i < 8; i++)
					{
						int xx = tmp.x + dx[i];
						int yy = tmp.y + dy[i];

						if (map[xx][yy] == 1)
						{
							Q.push(Loc(xx, yy));
							map[xx][yy] = 0;
						}
					}
				}
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}
*/