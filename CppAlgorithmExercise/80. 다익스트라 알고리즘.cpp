/*
���� 80. ���ͽ�Ʈ�� �˰���
�Ʒ��� ����ġ ����׷������� 1�� �������� ��� ���������� �ּ� �Ÿ������ ����ϴ� ���α׷��� �ۼ��ϼ���.
(��ΰ� ������ Impossible�� ����Ѵ�)

�� �Է¼���
ù° �ٿ��� ������ �� N(1 <= N <= 20)�� ������ �� M�� �־�����.�� �������� M�ٿ� ���� ���������� �Ÿ������ �־�����.
�� ��¼���
1�� �������� �� �������� ���� �ּ� ����� 2�� �������� ���ʴ�� ����ϼ���.

�� �Է¿��� 1
6 9
1 2 12
1 3 4
2 1 2
2 3 5
2 5 5
3 4 5
4 2 2
4 5 5
6 4 5
�� ��¿��� 1
2 : 11
3 : 4
4 : 9
5 : 14
6 : impossible
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#define x first
#define y second
using namespace std;

/*
int check[30], dist[30];
vector<pair<int, int> > map[30];

int main() 
{
	int n, m;					// n : ������ ��, m : ������ ��
	int i, j, a, b, c, min;

	cin >> n >> m;

	for (i = 1; i <= m; i++)
	{
		cin >> a >> b >> c;
		// ���� ����
		map[a].push_back(make_pair(b, c));
	}

	// ��� �迭�� ���� ��
	for (i = 0; i <= n; i++)
	{
		// ���Ѵ�� �ʱ�ȭ
		dist[i] = 2147000000;
	}

	// �ʱ�ȭ
	dist[1] = 0;

	for (i = 1; i <= n; i++)
	{
		min = 0;
		for (j = 1; j <= n; j++)
		{
			if (check[j] == 0 && dist[j] < dist[min])
			{
				min = j;
			}
		}

		check[min] = 1;

		for (j = 0; j < map[min].size(); j++)
		{
			int v = map[min][j].x;
			int cost = map[min][j].y;

			if (dist[v] > dist[min] + cost)
			{
				dist[v] = dist[min] + cost;
			}
		}
	}

	// 2�� �������� ����϶�� ������
	for (i = 2; i <= n; i++)
	{
		if (dist[i] != 2147000000)
		{
			cout << i << " : " << dist[i] << endl;
		}
		else
		{
			cout << i << " : " << "impossible" << endl;
		}
	}
	return 0;
}
*/