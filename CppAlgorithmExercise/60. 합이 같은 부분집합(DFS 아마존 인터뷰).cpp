/*
����. 60. ���� ���� �κ�����(DFS : �Ƹ��� ���ͺ�)
N���� ���ҷ� ������ �ڿ��� ������ �־�����, �� ������ �� ���� �κ��������� �������� ��
�� �κ������� ������ ���� ���� ���� ��찡 �����ϸ� ��YES"�� ����ϰ�, �׷��� ������ "NO"�� ����ϴ� ���α׷��� �ۼ��ϼ���.
���� ���{ 1, 3, 5, 6, 7, 10 }�� �ԷµǸ�{ 1, 3, 5, 7 } = { 6, 10 } ���� �� �κ������� ���� 16���� ���� ��찡 �����ϴ� ���� �� �� �ִ�.

�� �Է¼���
ù ��° �ٿ� �ڿ��� N(1 <= N <= 10)�� �־����ϴ�.
�� ��° �ٿ� ������ ���� N���� �־�����.�� ���Ҵ� �ߺ����� ������ �� ũ��� 1, 000, 000
�����Դϴ�.
�� ��¼���
ù ��° �ٿ� ��YES" �Ǵ� ��NO"�� ����Ѵ�.

�� �Է¿��� 1
6
1 3 5 6 7 10
�� ��¿��� 1
YES
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

/*
int n, a[11], total = 0;
bool flag = false;

void DFS(int Level, int sum)
{
	// true �� ����
	if (flag == true)
		return;
	if (Level == n + 1)
	{
		// (total - sum) : �����ִ� ����
		if (sum == (total - sum))
		{
			flag = true;
		}
	}
	else
	{
		// sum�� ����
		DFS(Level + 1, sum + a[Level]);

		// ��� ���ϸ� ���� x
		DFS(Level + 1, sum);

	}
}

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		total += a[i];
	}

	DFS(1, 0);

	if (flag == true)
	{
		cout << "Yes";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}
*/