/*
61. Ư�� �� �����(DFS : MS ���ͺ�)
N���� ���ҷ� ������ �ڿ��� ������ �־�����, ������ ���ҿ� �� + ��, �� - �� ������ ����Ͽ� Ư������ M�� ����� ��찡 �� ���� �ִ��� ����ϴ� ���α׷��� �ۼ��ϼ���.
�� ���Ҵ� ���꿡 �� ���� ����մϴ�.
���� ���{ 2, 4, 6, 8 }�� �Էµǰ�, M = 12�̸�
2 + 4 + 6 = 12
4 + 8 = 12
6 + 8 - 2 = 12
2 - 4 + 6 + 8 = 12
�� �� 4������ ��찡 �ֽ��ϴ�.��������� ��찡 �������� ������ - 1�� ����Ѵ�.\

�� �Է¼���
ù ��° �ٿ� �ڿ��� N(1 <= N <= 10)�� M(1 <= M <= 100) �־����ϴ�.
�� ��° �ٿ� ������ ���� N���� �־�����.�� ���Ҵ� �ߺ����� �ʴ´�.
�� ��¼���
ù ��° �ٿ� ��YES" �Ǵ� ��NO"�� ����Ѵ�.

�� �Է¿��� 1
4 12
2 4 6 8
�� ��¿��� 1
4
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

/*
int a[11], n, m, cnt = 0, path[11];

void DFS(int Level, int Value)
{
	if (Level == n + 1)	// �ϼ��� ���
	{
		if (Value == m)
		{
			cnt++;

			// ��� ���
			for (int i = 1; i < Level; i++)
			{
				cout << path[i] << " ";
			}
			puts(" ");
		}
	}
	else				// �ƴϸ�
	{
		// ����
		path[Level] = a[Level];
		DFS(Level + 1, Value + a[Level]);
		// ����
		path[Level] = -a[Level];
		DFS(Level + 1, Value - a[Level]);
		// ���
		path[Level] = 0;
		DFS(Level + 1, Value);
	}
}


int main()
{
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	DFS(1, 0);

	if (cnt == 0)
		cout << "-1\n";
	else
		cout << cnt;
	return 0;
}
*/