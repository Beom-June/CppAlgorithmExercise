/*
����. 62. ��������
N���� ���ڰ� �ԷµǸ� ������������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��ϼ���.
�����ϴ� ����� ���������Դϴ�.

�� �Է¼���
ù ��° �ٿ� �ڿ��� N(1 <= N <= 100)�� �־����ϴ�.
�� ��° �ٿ� N���� �ڿ����� ������ ���̿� �ΰ� �Էµ˴ϴ�.�� �ڿ����� ������ ���� �ȿ�
�ֽ��ϴ�.
�� ��¼���
������������ ���ĵ� ������ ����մϴ�.

�� �Է¿��� 1
8
7 6 3 1 5 2 4 8
�� ��¿��� 1
1 2 3 4 5 6 7 8
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
/*
int Data[10], temp[10];			// temp -> ����

void Divide(int left, int right)
{
	int mid;
	int p1, p2, p3;				// ������
	if (left < right)
	{
		mid = (left + right) / 2;
		// ���� ����
		Divide(left, mid);
		// ���� ����
		Divide(mid + 1, right);

		p1 = left;
		p2 = mid + 1;
		p3 = left;

		// ��ħ. �� ���� ������ ����
		while (p1 <= mid && p2 <= left)
		{
			if (Data[p1] < Data[p2])
				temp[p3++] = Data[p1++];
			else
				temp[p3++] = Data[p2++];
		}

		// ���� ������
		while (p1 <= mid)
		{
				temp[p3++] = Data[p1++];
		}
		while (p2 <= right)
		{
			temp[p3++] = Data[p2++];
		}

		// ����
		for (int i = left; i <= right; i++)
		{
			Data[i] = temp[i];
		}
	}

}

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> Data[i];
	}

	Divide(1, n);
	for (int i = 1; i <= n; i++)
	{
		cout << Data[i];
	}


	return 0;
}
*/