// ���� 24. Jolly Jumpers
//N���� ������ �̷���� ������ ���� ���� ������ �ִ� �� ���� ���� 1���� N - 1������ ������� ������ �� ������ ������ ����(jolly jumper)��� �θ���.
//���� ��� ������ ���� �������� 1 4 2 3 �� �ڿ� �ִ� ���� ���� ���� ���� ���� 3, 2, 1�̹Ƿ� �� ������ ������ ���۰��ȴ�.
//� ������ ������ �������� �Ǵ��� �� �ִ� ���α׷��� �ۼ��϶�.

// �Է� ����
//ù ��° �ٿ� �ڿ��� N(3 <= N <= 100)�� �־�����.
//�� ���� �ٿ� N���� ������ �־�����.������ ũ��� int �� �����ȿ� ������, ������ �� �������� ������ ������ �ֽ��ϴ�.

// ��� ����
//������ �����̸� ��YES"�� ����ϰ�, �׷��� ������ ��NO"�� ����Ѵ�.

// �Է� : 5 
//1 4 2 3 7

// ��� YES

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
int main()
{
	int n = 0, i, pre, now, pos;

	cin >> n;
	// �迭 ����
	vector<int> check(n);

	cin >> pre;						// ù ��° ���� �Է�

	for (i = 1; i < n; i++)
	{
		cin >> now;

		pos = abs(pre - now);		// abs : ����

		if (pos > 0 && pos < n && check[pos] == 0)		// check[pos] == 0 �ߺ� üũ
		{
			check[pos] == 1;
		}
		else
		{
			// ���� ���۰� �ƴϴ�.
			cout << "NO" << endl;
			return 0;
		}

		// �а� ���鼭 üũ
		pre = now;
	}
	// ���� ���۴�
	cout << "YES" << endl;
	return 0;
}
*/