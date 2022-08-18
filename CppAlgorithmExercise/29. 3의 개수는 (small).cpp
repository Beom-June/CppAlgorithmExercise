// 문제 29. 3의 개수는 (small)

//자연수 N이 입력되면 1부터 N까지의 자연수를 종이에 적을 때 각 숫자 중 3의 개수가 몇 개 있는지 구하려고 합니다.
//예를 들어 1부터 15까지는 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 1, 1, 1, 2, 1, 3, 1, 4, 1, 5으로 3의 개수는 2개입니다.
//자연수 N이 입력되면 1부터 N까지 숫자를 적을 때, 3의 개수가 몇 개인지 구하여 출력하는 프로그램을 작성하세요.

//입력설명
//첫 줄에 자연수의 개수 N(3 <= N <= 100, 000)이 주어집니다.

//출력설명
//3의 개수를 출력하세요.

//입력 : 15

//출력 : 2

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
int main()
{
	int n, temp, i, count = 0, digit;

	cin >> n;

	for ( i = 1; i <= n; i++)
	{
		temp = i;

		while (temp > 0)
		{
			digit = temp % 10;

			if (digit == 3)
				count++;

			// 자릿수 분리
			temp /= 10;
		}
	}
	cout << count;

	return 0;
}
*/