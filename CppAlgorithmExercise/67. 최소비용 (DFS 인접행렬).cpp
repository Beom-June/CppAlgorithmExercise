/*
���� 67. �ּҺ��(DFS : �������)
����ġ ����׷����� �־����� 1�� �������� N�� �������� ���� �ּҺ���� ����ϴ� ���α׷��� �ۼ��ϼ���.

�� �Է¼���
ù° �ٿ��� ������ �� N(1 <= N <= 20)�� ������ �� M�� �־�����.�� �������� M�ٿ� ���� ��
�������� �־�����.
�� ��¼���
�ּҺ���� ����մϴ�.

�� �Է¿��� 1
5 8
1 2 12
1 3 6
1 4 10
2 3 2
2 5 2
3 4 3
4 2 2
4 5 5
�� ��¿��� 1
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
	// ������
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