/*
���� 81. ���� - ���� �˰���
N���� ���ð� �־�����, �� ���õ��� �����ϴ� ���ο� �ش� ���θ� �����ϴ� ����� �־���
�� �� ���ÿ��� �ٸ� ���÷� �̵��ϴµ� ���̴� ����� �ּҰ��� ���ϴ� ���α׷��� �ۼ��ϼ���.

�� �Է¼���
ù ��° �ٿ��� ������ ��N(N <= 100)�� ���μ� M(M <= 200)�� �־�����, M�ٿ� ���� ��������
�� ����� �־�����.���� 1�� ���ÿ� 2�����ð� ����ǰ� �� ����� 13�̸� ��1 2 13�������־�����.
�� ���� ������ �ٿ� ��ߵ��ÿ� �������ð� �־�����.
�� ��¼���
��ߵ��ÿ��� �������ñ��� ���µ� �ɸ��� �ּҺ���� ����Ѵ�.���� ����Ŭ�� ������ ��� -1 �� ����Ѵ�.

�� �Է¿��� 1
5 7
1 2 5
1 3 4
2 3 - 3
2 5 13
3 4 5
4 2 3
4 5 7
1 5
�� ��¿��� 1
14
���� : �������� �˰����� �׷����� ���� ����Ŭ�� �����ϸ� �ȵȴ�.
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

/*
int dist[101];
struct Edge
{
	int start;
	int end;
	int value;
	Edge(int a, int b, int c)
	{
		start = a;
		end = b;
		value = c;
	}
};

int main()
{
	vector<Edge> edge;
	int n, m;				// �ڿ��� n, m
	int a, b, c;			// ���� ����
	int start, end;			// ��� ����, �� ����

	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b >> c;

		// ������
		edge.push_back(Edge(a, b, c));
	}

	for (int i = 1; i <= n; i++)
	{
		dist[i] = 214700000;
	}

	cin >> start >> end;

	// ��� ���� �ʱ�ȭ
	dist[start] = 0;

	// i = 1 �̸� ���� �� �� ����, i = 2 �̸� ���� �� ������...
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < edge.size(); j++)
		{
			int u = edge[j].start;
			int v = edge[j].end;
			int w = edge[j].value;

			// ����� ���Ѵ�� ���� x && 
			if (dist[u] != 214700000 && dist[u] + w < dist[v])
			{
				// �� ����
				dist[v] = dist[u] + w;
			}
		}
	}

	// ������ ������ n�ؼ� �ּ� ����� ������, ���� ����Ŭ�� �ִ�
	for (int j = 0; j < edge.size(); j++)
	{
		int u = edge[j].start;
		int v = edge[j].end;
		int w = edge[j].value;

		// ����� ���Ѵ�� ���� x && 
		if (dist[u] != 214700000 && dist[u] + w < dist[v])
		{
			cout << -1 << endl;
			exit(0);
		}
	}
	cout << dist[end];
	return 0;
}
*/