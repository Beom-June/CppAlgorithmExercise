/*
���� 87. ������ ���Ϸ���(BFS Ȱ��)
������ ���Ϸ����� ������ �������� ������ �־����ϴ�.�� ���� 1�� ǥ�õǾ� �����¿�� �밢������ ����Ǿ� ������, 0�� �ٴ��Դϴ�.
������ ���Ϸ��忡 �� ���� ���� �ִ��� ���ϴ� ���α׷��� �ۼ��ϼ���.
1 1 0 0 0 1 0
0 1 1 0 1 1 0
0 1 0 0 0 0 0
0 0 0 1 0 1 1
1 1 0 1 1 0 0
1 0 0 0 1 0 0
1 0 1 0 1 0 0
���� ���� ���ٸ�

�� �Է¼���
ù ��° �ٿ� �ڿ��� N(1 <= N <= 20)�� �־����ϴ�.
�� ��° �ٺ��� ������ ������ �־�����.
�� ��¼���
ù ��° �ٿ� ���� ������ ����Ѵ�.

�� �Է¿��� 1
7
1 1 0 0 0 1 0
0 1 1 0 1 1 0
0 1 0 0 0 0 0
0 0 0 1 0 1 1
1 1 0 1 1 0 0
1 0 0 0 1 0 0
1 0 1 0 1 0 0
�� ��¿��� 1
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

// 8 �������� �ʱ�ȭ. �ð� �������� ȸ���ϴ� ��
int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int dy[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };

struct Loc
{
	int x;
	int y;

	// ������ �ʱ�ȭ
	Loc(int a, int b)
	{
		x = a;
		y = b;
	}
};

// BFS�� �ϱ� ���Ͽ� queue ����
queue<Loc> Q;

int main()
{
	cin >> n;

	// ���� for���� ���鼭 map�� ����
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> map[i][j];
		}
	}

	// ���� for���� ���鼭 1�� ã�´�
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			// 1�� ������ push
			if (map[i][j] == 1)
			{
				Q.push(Loc(i, j));
				// �� ��ǥ�� 0���� ����
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