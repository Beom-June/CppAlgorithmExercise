/*
문제 83. 복면산 SEND + MORE = MONEY(MS인터뷰)
SEND + MORE = MONEY 라는 유명한 복면산이 있습니다.이 복면산을 구하는 프로그램을 작성하세요.
출력형태
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
			// 첫 자리가 0이면 안됨
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