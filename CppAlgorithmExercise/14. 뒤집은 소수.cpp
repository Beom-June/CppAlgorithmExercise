// ���� 14. ������ �Ҽ�
//N���� �ڿ����� �ԷµǸ� �� �ڿ����� ������ �� �� ������ ���� �Ҽ��̸� �� ���� ����ϴ� ���α׷��� �ۼ��ϼ���.
//���� ��� 32�� �������� 23�̰�, 23�� �Ҽ��̴�.�׷��� 23�� ����Ѵ�.�� 910�� �������� 19�� ����ȭ �ؾ� �Ѵ�.ù �ڸ������� ���ӵ� 0�� �����Ѵ�.
//������ �Լ��� int reverse(int x) �� �Ҽ������� Ȯ���ϴ� �Լ� bool isPrime(int x)�� �ݵ�� �ۼ��Ͽ� ���α׷��� �Ѵ�.

// �Է� ����
//ù �ٿ� �ڿ����� ���� N(3 <= N <= 100)�� �־�����, �� ���� �ٿ� N���� �ڿ����� �־�����.
//�� �ڿ����� ũ��� 100, 000�� ���� �ʴ´�.

// ��� ����
//ù �ٿ� ������ �Ҽ��� ����մϴ�.��¼����� �Էµ� ������� ����մϴ�.

// �Է� ���� : 5 
//32 55 62 3700 250
// �� : 23 73

#include<stdio.h>
#include<cstdio>
#include<iostream>
using namespace std;
/*
int reverse(int x)
{
	int res = 0, tmp;
	while (x > 0)
	{
		tmp = x % 10;
		res = res * 10 + tmp;
		x /= 10;
	}
	return res;
}
bool isPrime(int x)
{
	int i = 0;
	bool flag = true;

	// 1�� �Ҽ��� �ƴϹǷ� ���� ��Ŵ. for���� 1������ �ð� �� �����ɸ�
	if (x == 1)
	{
		return false;
	}
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

int main()
{
	int n = 0, num = 0, i = 0, tmp = 0;

	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cin >> num;
		tmp = reverse(num);

		// �Ҽ���
		if (isPrime(tmp))
		{
			cout << tmp << ' ';
		}
	}

	return 0;
}
*/
