/*
���� 71. �۾��� ã��(BFS : ����Ʈ��Ž��)
������ �۾����� �Ҿ���ȴ�.������ �۾������� ��ġ�����Ⱑ �޷� �ִ�.������ ��ġ�� �۾����� ��ġ�� �������� ��ǥ ������ �־�����
������ ���� ��ġ���� �۾����� ��ġ���� ������ ���� ������� �̵��Ѵ�.
������ ��ī�� ������ Ÿ�� ���µ� �� ���� ������ ������ 1, �ڷ� 1, ������ 5�� �̵��� �� �ִ�.
�ּ� �� ���� ������ ������ �۾����� ��ġ���� �� �� �ִ��� ���ϴ� ���α׷��� �ۼ��ϼ���.

�� �Է¼���
ù ��° �ٿ� ������ ��ġ S�� �۾����� ��ġ E�� �־�����.������ ��ǥ ���� 1���� 10, 000
�����̴�.
�� ��¼���
������ �ּ�Ƚ���� ���Ѵ�.

�� �Է¿��� 1
5 14
�� ��¿��� 1
3
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;
/*
int check[10001], d[3] = { 1, -1, 5 };		// d[] => ���� �迭

int main()
{
	int start, end, x, pos;					// x : ��ġ,  pos : �̵��� ��ġ
	queue<int> Q;

	cin >> start >> end;

	check[start] = 1;
	Q.push(start);
	while (!Q.empty())
	{
		x = Q.front();
		Q.pop();

		for (int i = 0; i < 3; i++)
		{
			pos = x + d[i];
			if(pos <= 0 || pos > 10000)
			{
				continue;
			}
			if (pos == end)
			{
				cout << check[x];
				exit(0);						// ���α׷� ��ü ����
			}
			// �� ���� �湮���� ���� ����
			if (check[pos] == 0)
			{
				// check[x] : �ּ� Ƚ���� �������
				check[pos] = check[x] + 1;
				Q.push(pos);
			}
		}
	}

	return 0;
}
*/