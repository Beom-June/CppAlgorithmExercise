/*
���� 69. ����Ʈ�� ���̿켱Ž��(BFS)
�Ʒ� �׸��� ���� ����Ʈ���� ���̿켱Ž���� ������.���� ���� 6���� �Է¹޾� ó���غ�����.
   1
 2   3
4 5 6 7
���� �켱 Ž�� : 1 2 3 4 5 6 7

�� �Է¿��� 1
1 2
1 3
2 4
2 5
3 6
3 7
�� ��¿��� 1
1 2 3 4 5 6 7
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

/*
int Queue[100], front = -1, back = -1, check[10];
vector<int> map[10];							// ���� ����Ʈ

int main()
{
	int a, b, x;								// x : queue���� ���� ����

	for (int i = 1; i <= 6; i++)
	{
		cin >> a >> b;

		// ����
		map[a].push_back(b);
		map[b].push_back(a);
	}
	Queue[++back] = 1;
	check[1] = 1;
	while (front < back)
	{
		x = Queue[++front];
		// front�� back �������� ��� �������
		cout << x << " ";

		for (int i = 0; i < map[x].size(); i++)
		{
			if (check[map[x][i]] == 0)
			{
				check[map[x][i]] = 1;
				Queue[++back] = map[x][i];
			}
		}
	}

	return 0;
}
*/