/*
���� 66. ��� Ž��(DFS : ��������Ʈ ���)
����׷����� �־����� 1�� �������� N�� �������� ���� ��� ����� ���� ���� ����ϴ� ���α׷��� �ۼ��ϼ���.
�Ʒ� �׷������� 1�� �������� 5�� �������� ���� ���� ����
1 2 3 4 5
1 2 5
1 3 4 2 5
1 3 4 5
1 4 2 5
1 4 5
�� 6 �����Դϴ�.

�� �Է¼���
ù° �ٿ��� ������ �� N(1 <= N <= 20)�� ������ �� M�� �־�����.�� �������� M�ٿ� ���� ��
�������� �־�����.
�� ��¼���
�� �������� ����Ѵ�.

�� �Է¿��� 1
5 9
1 2
1 3
1 4
2 1
2 3
2 5
3 4
4 2
4 5
�� ��¿��� 1
6
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

/*
int check[30], Count = 0, n, path[30];
vector<int> map[30];

void DFS(int v)
{
	if (v == n)
	{
		Count++;

	}
	else
	{
		// v -> ���� ũ��
		for (int i = 0; i < map[v].size(); i++)
		{
			// ���� �Ǿ��ִ� �� -> �湮 �ߴ��� ���ߴ��� üũ
			// 0 -> �湮 ����
			if (check[map[v][i]] == 0)
			{
				check[map[v][i]] = 1;
				DFS(map[v][i]);

				// üũ Ǯ����
				check[map[v][i]] = 0;
			}
		}
	}

}

// 
void DFS_Path(int v, int L)
{
	if (v == n)
	{
		Count++;

		for (int j = 0; j < L; j++) 
		{
			cout << path[j];
		}
		puts("");

	}
	else
	{
		// v -> ���� ũ��
		for (int i = 0; i < map[v].size(); i++)
		{
			// ���� �Ǿ��ִ� �� -> �湮 �ߴ��� ���ߴ��� üũ
			// 0 -> �湮 ����
			if (check[map[v][i]] == 0)
			{
				check[map[v][i]] = 1;
				path[L] = map[v][i];
				DFS_Path(map[v][i], L + 1);

				// üũ Ǯ����
				check[map[v][i]] = 0;
			}
		}
	}

}

int main()
{
	int m, a, b;				// ������ ��

	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		// a -> b�� �� �� �ִ�
		cin >> a >> b;

		// ���� ������
		map[a].push_back(b);
	}

	// �湮 üũ
	check[1] = 1;
	path[0] = 1;
	//DFS(1);
	DFS_Path(1, 1);
	cout << Count;

	return 0;
}
*/