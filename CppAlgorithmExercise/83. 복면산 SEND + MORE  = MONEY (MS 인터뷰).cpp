/*
���� 83. ����� SEND + MORE = MONEY(MS���ͺ�)
SEND + MORE = MONEY ��� ������ ������� �ֽ��ϴ�.�� ������� ���ϴ� ���α׷��� �ۼ��ϼ���.
�������
9 5 6 7
+ 1 0 8 5
-------- -
1 0 6 5 2
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

/*
int a[10], check[10];

int send()
{
	return a[6] * 1000 + a[1] * 100 + a[3] * 10 + a[0];
}

int more()
{
	return a[2] * 1000 + a[4] * 100 + a[5] * 10 + a[1];
}

int money()
{
	return a[2] * 10000 + a[4] * 1000 + a[3] * 100 + a[1] * 10 + a[7];
}

void DFS(int Level)
{
	if (Level == 8)
	{
		if (send() + more() == money())
		{
			// ù �ڸ��� 0�̸� �ȵ�
			if (a[2] == 0 || a[6] == 0)
				return;

			cout << " " << a[6] << a[1] << a[3] << a[0] << "\n";
			cout << "+" << a[2] << a[4] << a[5] << a[1] << "\n";
			cout << "------------- \n";
			cout << a[2] << a[4] << a[3] << a[1] << a[7] << "\n";
		}
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			if (check[i] == 0)
			{
				a[Level] = i;
				check[i] = 1;
				DFS(Level + 1);
				check[i] = 0;
			}
		}
	}
}


int main()
{
	DFS(0);
	return 0;
}
*/