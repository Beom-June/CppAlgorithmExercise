/*
���� 70. �׷��� �ִܰŸ�(BFS)
���� �׷������� 1�� �������� �� �������� ���� �ּ� �̵� �������� ����ϼ���.
1 2 5
3 4 6

�� �Է¼���
ù° �ٿ��� ������ �� N(1 <= N <= 20)�� ������ �� M�� �־�����.�� �������� M�ٿ� ���� ��
�������� �־�����.
�� ��¼���
1�� �������� �� �������� ���� �ּ� �������� 2�� �������� ���ʴ�� ����ϼ���.

�� �Է¿��� 1
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
�� ��¿��� 1
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
	int n, m, a, b, x;		// n : ����, m : ������
	vector<int> map[30];
	queue<int> Q;

	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b;
		// ����
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

				// �湮�Ϸ��� ���. 
				dis[map[x][i]] = dis[x] + 1;
			}
		}
	}

	// 2�� �������� ���
	for (int i = 2; i <= n; i++)
	{
		cout << i << " : " << dis[i];
		puts(" ");
	}
	return 0;
}
*/