/*
���� 82. �������ϱ�(DFS : Depth First Search)
�ڿ��� N�� R�� �־����� ���� �ٸ� N���� �ڿ��� �� R���� �̾� �Ϸķ� �����ϴ� ���α׷��� �ۼ��ϼ���.

�� �Է¼���
ù ��° �ٿ� �ڿ��� N(1 <= N <= 15)�� R(0 <= R <= 15)�� �־�����.��(N >= R)
�� ��° �ٿ� N���� ���� �ٸ� �ڿ����� ������������ �־�����.
�� ��¼���
������ �� ��츦 �Ʒ��� ���� ������������ ����Ѵ�.������ �ٿ� �� ������ ����Ѵ�.

�� �Է¿��� 1
4 3
1 3 6 7
�� ��¿��� 1
1 3 6
1 3 7
1 6 3
1 6 7
1 7 3
1 7 6
3 1 6
3 1 7
3 6 1
3 6 7
3 7 1
3 7 6
6 1 3
6 1 7
6 3 1
6 3 7
6 7 1
6 7 3
7 1 3
7 1 6
7 3 1
7 3 6
7 6 1
7 6 3
24
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

/*
int n, r, cnt = 0;
int a[20], result[20], check[20];

void DFS(int Level) 
{
	if (Level == r)
	{
		for (int j = 0; j < Level; j++)
		{
			cout << result[j] << " " ;
		}
		cnt++;
		puts("");
	}
	else 
	{
		// ������ �ϳ��� ���� ����+
		for (int i = 1; i <= n; i++) 
		{
			if (check[i] == 0) 
			{
				result[Level] = a[i];
				check[i] = 1;
				DFS(Level + 1);
				check[i] = 0;
			}
		}
	}
}

int main() 
{
	cin >> n >> r;
	for (int i = 1; i <= n; i++) 
	{
		// �迭�� �Է�
		cin >> a[i];
	}
	DFS(0);
	cout << cnt << endl;
	return 0;
}
*/