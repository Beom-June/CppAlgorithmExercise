// 문제 13. 가장 많이 사용된 자릿수
//N자리의 자연수가 입력되면 입력된 자연수의 자릿수 중 가장 많이 사용된 숫자를 출력하는 프로그램을 작성하세요.
//예를 들어 1230565625라는 자연수가 입력되면 5가 3번 상용되어 가장 많이 사용된 숫자입니다.답이 여러 개일 경우 그 중 가장 큰 수를 출력하세요.// 입력 예제 : 1230565625// 답 : 5#include<stdio.h>
#include<cstdio>
#include<iostream>
using namespace std;
/*
int ch[10];

int main()
{
	int i, digit, max = -2147000000, res;
	char a[101];

	cin >> a;
	for (i = 0; a[i] != '\0'; i++)
	{
		// 아스키 넘버 때문에 계산
		digit = a[i] - 48;
		ch[digit]++;
	}

	// 자릿수
	for (i = 0; i <= 9; i++)
	{
		if (ch[i] >= max)
		{
			max = ch[i];
			res = i;
		}
	}
	cout << res << endl;
	return 0;
}
*/