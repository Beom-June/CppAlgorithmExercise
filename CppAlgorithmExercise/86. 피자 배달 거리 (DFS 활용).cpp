/*
���� 86. ���� ��� �Ÿ�(�Ｚ SW������ ���⹮�� : DFSȰ��)
N��N ũ���� ���������� �ֽ��ϴ�.���������� 1��1ũ���� ����ĭ���� �̷���� �ֽ��ϴ�.�� ����ĭ���� 0�� ��ĭ, 1�� ��, 2�� ���������� ǥ���˴ϴ�.
�� ����ĭ�� ��ǥ(���ȣ, �� ��ȣ)�� ǥ���˴ϴ�.���ȣ�� 1������ N�������̰�, �� ��ȣ�� 1���� N�����Դϴ�.
���ÿ��� �� ������ �����ڹ�ްŸ����� �Ҵµ� �� ���� ���ڹ�ްŸ��� �ش� ���� ������ �����ϴ� ����������� �Ÿ� �� �ּҰ��� �ش� ���� �����ڹ�ްŸ������ �Ѵ�.
���� �������� ���ڹ�ްŸ��� | x1 - x2 | +| y1 - y2 | �̴�.
���� ���, ������ ������ �Ʒ��� ���ٸ�
0 1 0 0
0 0 2 1
0 0 1 0
1 2 0 2
(1, 2)�� �ִ� ����(2, 3)�� �ִ� ���������� ���� ��� �Ÿ��� | 1 - 2 | +| 2 - 3 | = 2�� �ȴ�.
�ֱ� ���ð� �Ұ�⿡ ������ �����׼� ����� ���������� �Ļ��ϰ� �ֽ��ϴ�.���� ������ ���ÿ� �ִ� ������ �� M���� �츮�� �������� �������� �ְ� �����Ű���� �մϴ�.
������ �츮���� �ϴ� ������ M���� �����ϴ� �������� ������ ���ڹ�ްŸ��� �ּҰ� �Ǵ� M���� �������� �����Ϸ��� �մϴ�.
������ ���� ��� �Ÿ��� �� ������ ���� ��� �Ÿ��� ���� ���� ���մϴ�.

�� �Է¼���
ù° �ٿ� N(2 �� N �� 50)�� M(1 �� M �� 12)�� �־�����.
��° �ٺ��� ���� ������ �Էµȴ�.
�� ��¼���
ù° �ٿ� M���� �������� ���õǾ��� �� ������ �ּ� ���ڹ�ްŸ��� ����Ѵ�.

�� �Է¿��� 1
4 4
0 1 2 0
1 0 2 1
0 2 1 2
2 0 1 2
�� ��¿��� 1
6
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

/*
vector<pair<int, int> > pizza;
vector<pair<int, int> > house;
int check[20], m, res = 2147000000, dis, sum = 0;

void DFS(int Level, int cnt)
{
	if (Level > pizza.size())
		return;

	if (Level == m)
	{
		sum = 0;
		for (int i = 0; i < house.size(); i++)
		{
			int x1 = house[i].first;
			int y1 = house[i].second;
			dis = 2147000000;

			for (int j = 0; j < m; j++)
			{
				int x2 = pizza[check[j]].first;
				int y2 = pizza[check[j]].second;

				// ���� ������ �Ÿ��� ����. dis ���� ������ ����
				dis = min(dis, abs(x1 - x2) + abs(y1 - y2));
			}
			// ���⿡ ����
			sum += dis;
		}

		if (sum < res)
		{
			res = sum;
		}
	}
	else
	{
		// ���
		//check[cnt] = Level;
		//DFS(Level + 1, cnt + 1);
		//DFS(Level + 1, cnt);
		for (int i = cnt; i <pizza.size(); i++)
		{
			check[Level] = i;
			DFS(Level + 1, i + 1);
		}
	}
}

int main()
{
	int n, a;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a;
			if (a == 1)
			{
				house.push_back(make_pair(i, j));
			}
			else if (a == 2)
			{
				pizza.push_back(make_pair(i, j));
			}
		}
	}
	DFS(0, 0);
	cout << res << endl;
	return 0;
}
*/