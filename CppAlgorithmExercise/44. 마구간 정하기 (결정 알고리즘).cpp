/* 44. ������ ���ϱ�(���� �˰���)
N���� �������� 1���� �������� �ֽ��ϴ�.�� �������� x1, x2, x3, ......, xN�� ��ǥ�� ������, ���������� ��ǥ�� �ߺ��Ǵ� ���� �����ϴ�.
������ C������ ���� ������ �ִµ�, �� ������ ���� ������ �ִ� ���� �������� �ʽ��ϴ�. �� ���������� �� ������ ���� ���� �� �ְ�, ���� ����� �� ���� �Ÿ��� �ִ밡 �ǰ� ���� �������� ��ġ�ϰ� �ͽ��ϴ�.
C������ ���� N���� �������� ��ġ���� �� ���� ����� �� ���� �Ÿ��� �ִ밡 �Ǵ� �� �ִ� ���� ����ϴ� ���α׷��� �ۼ��ϼ���.

�� �Է¼���
ù �ٿ� �ڿ��� N(3 <= N <= 200, 000)�� C(2 <= C <= N)�� ������ ���̿� �ΰ� �־����ϴ�.
��° �ٺ��� N���� �ٿ� ���� �������� ��ǥ xi(0 <= xi <= 1, 000, 000, 000)�� �� �ٿ� �ϳ��� �־����ϴ�.

�� ��¼���
ù �ٿ� ���� ����� �� ���� �ִ� �Ÿ��� ����ϼ���.

�� �Է� ���� 1
5 3
1 2 8 4 9

�� ��� ���� 1
3
*/


#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
int n;					// ������ ��ġ

int Count(int length, int x[])
{
	int i, count = 1, pos = x[1];
	for (i = 2; i <= n; i++)
	{
		if (x[i] - pos >= length)
		{
			count++;
			pos = x[i];
		}
	}

	return count;
}

int main()
{

	int m, i, left = 1, right, mid, result = 0;				// m : ���� ��

	cin >> n >> m;

	int* x = new int[n + 1];

	for (i = 1; i <= n; i++)
	{
		cin >> x[i];
	}

	sort(x + 1, x + n + 1);
	right = x[n];

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (Count(mid, x) >= m)
		{
			result = mid;
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	cout << result;
	// �޸� ����
	delete[] x;
	return 0;

}
*/