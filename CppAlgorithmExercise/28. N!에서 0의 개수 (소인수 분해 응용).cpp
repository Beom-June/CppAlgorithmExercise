// ���� 28. 28. N!���� 0�� ���� (���μ� ���� ����)

//�ڿ��� N�� �ԷµǸ� N!������ ���� �ڸ����� ���������� ��0���� �� �� �ִ��� ���ϴ� ���α׷��� �ۼ��ϼ���.
//���� 5!= �� ���� �� �� �� �� ���� = 120���� �����ڸ����� �������� ��0���� ������ 1�Դϴ�.
//���� 12!= 479001600���� �����ڸ����� �������� ��0���� ������ 2�Դϴ�

//�Է¼���
//ù �ٿ� �ڿ��� N(10 <= N <= 1, 000)�� �Էµȴ�

//��¼���
//���� �ڸ����� ���ӵ� 0�� ������ ����մϴ�.

//�Է� : 12
//��� : 2

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
int main()
{
	int i = 0, j = 0, n = 0, temp = 0, count1 = 0, count2 = 0;

	cin >> n;

	for ( i = 2; i <= n; i++)
	{
		temp = i;
		j = 2;

		while (1)
		{
			if (temp % j == 0)
			{
				if (j == 2)
					count1++;
				else if (j == 5)
					count2++;
				temp /= j;
			}
			else
				j++;

			if (temp == 1)
				break;
		}
	}
	
	// ���
	if (count1 < count2)
		cout << count1;
	else 
		cout << count2;

	return 0;
}
*/