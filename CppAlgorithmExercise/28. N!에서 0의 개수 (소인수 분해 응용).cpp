// 문제 28. 28. N!에서 0의 개수 (소인수 분해 응용)

//자연수 N이 입력되면 N!값에서 일의 자리부터 연속적으로 ‘0’이 몇 개 있는지 구하는 프로그램을 작성하세요.
//만약 5!= �� ×�� × �� × �� ×�� = 120으로 일의자리부터 연속적된 ‘0’의 개수는 1입니다.
//만약 12!= 479001600으로 일의자리부터 연속적된 ‘0’의 개수는 2입니다

//입력설명
//첫 줄에 자연수 N(10 <= N <= 1, 000)이 입력된다

//출력설명
//일의 자리부터 연속된 0의 개수를 출력합니다.

//입력 : 12
//출력 : 2

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
	
	// 출력
	if (count1 < count2)
		cout << count1;
	else 
		cout << count2;

	return 0;
}
*/