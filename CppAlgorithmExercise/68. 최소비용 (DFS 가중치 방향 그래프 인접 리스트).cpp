/*
���� 68. �ּҺ��(DFS : ����ġ ����׷��� ��������Ʈ)
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
13*/#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

/*
int check[30], n, cost = 214700000;
vector<pair<int, int> > map[30];

void DFS(int v, int sum)
{
	if (v == n)
	{
		if (sum < cost)
			cost = sum;
	}
	else
	{
		for (int i = 0; i < map[v].size(); i++)
		{
			// v���� �� �� �ִ� ���� ��ȣ == 0 -> �湮 X
			if (check[map[v][i].first] == 0)
			{
				check[map[v][i].first] = 1;
				// ��� ��ȣ, ����ġ �� ���ϱ�
				DFS(map[v][i].first, sum + map[v][i].second);
				check[map[v][i].first] = 0;
			}
		}
	}
}

int main()
{
	//pair<int, int> p;					// C#���� Dictionary�� ���� ��
	
	int m, a, b, c;						// b : ����, c : ����ġ ��

	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b >> c;
		map[a].push_back(make_pair(b, c));
	}
	check[1] = 1;
	DFS(1, 0);

	cout << cost;

	return 0;
}
*/