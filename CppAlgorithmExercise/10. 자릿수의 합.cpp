// ���� 10. �ڸ����� ��
//N���� �ڿ����� �ԷµǸ� �� �ڿ����� �ڸ����� ���� ���ϰ�, �� ���� �ִ��� �ڿ����� ���
//�ϴ� ���α׷��� �ۼ��ϼ���.�� �ڿ����� �ڸ����� ���� ���ϴ� �Լ��� int digit_sum(int x)��
//�� �ۼ��ؼ� ���α׷��� �ϼ���.

// �Է� ���� : 5
//125 15232 79 1325 97
// �� : 97
#include<stdio.h>
#include<cstdio>
#include<iostream>
using namespace std;

/*
int digit_sum(int x)
{
	int tmp, sum = 0;

	while (x > 0)
	{
		tmp = x % 10;
		sum += tmp;
		x = x / 10;
	}
	return sum;
}


int main()
{
	int n, num, i, sum, max = -2147000000, res = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> num;
		sum = digit_sum(num);

		if (sum > max)
		{
			max = sum;
			res = num;
		}
		else if (sum == max)
		{
			// �ڸ��� ���� ���Ƶ�, �ڿ����� ū ���� ������
			if (num > res) 
				res = num;
		}
	}
	cout << res << endl;
	return 0;
}
*/
