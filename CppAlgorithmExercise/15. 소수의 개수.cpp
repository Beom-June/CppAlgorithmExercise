// 문제 15. 소수의 개수
//자연수 N이 입력되면 1부터 N까지의 소수의 개수를 출력하는 프로그램을 작성하세요.
//만약 20이 입력되면 1부터 20까지의 소수는 2, 3, 5, 7, 11, 13, 17, 19로 총 8개입니다.
//제한시간은 1초입니다.

// 입력 : 20
// 답 : 8

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
		// i 전까지 돌며 확인
		// j * j >> 제곱근일 때
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