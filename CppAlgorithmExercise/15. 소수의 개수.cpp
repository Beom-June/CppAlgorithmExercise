// ���� 15. �Ҽ��� ����
//�ڿ��� N�� �ԷµǸ� 1���� N������ �Ҽ��� ������ ����ϴ� ���α׷��� �ۼ��ϼ���.
//���� 20�� �ԷµǸ� 1���� 20������ �Ҽ��� 2, 3, 5, 7, 11, 13, 17, 19�� �� 8���Դϴ�.
//���ѽð��� 1���Դϴ�.

// �Է� : 20
// �� : 8

#include<stdio.h>
#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
	int n = 0, i = 0, j = 0, flag = 0, count = 0;

	cin >> n;

	for (i = 2; i <= n; i++)
	{
		flag = 1;
		// i ������ ���� Ȯ��
		// j * j >> �������� ��
		for (j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			count++;
	}
	cout << count << endl;

	return 0;
}