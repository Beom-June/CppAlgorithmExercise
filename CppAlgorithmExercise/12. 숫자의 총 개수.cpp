// 문제 12. 숫자의 총 개수
//자연수 N이 입력되면 1부터 N까지의 자연수를 종이에 적을 때 각 숫자는 몇 개 쓰였을까요 ?
//예를 들어 1부터 15까지는 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 1, 1, 1, 2, 1, 3, 1, 4, 1, 5으로 총 21개가 쓰였음을 알 수 있습니다.
//자연수 N이 입력되면 1부터 N까지 각 숫자는 몇 개가 사용되었는지를 구하는 프로그램을 작성하세요

// 입력 설명
//첫 번째 줄에는 자연수 N(3 <= N <= 100, 000, 000)이 주어진다.

// 출력 설명
//첫 번째 줄에 숫자의 총개수를 출력한다.

// 입력 예제 : 15
// 답 : 21

#include<stdio.h>
#include<cstdio>
#include<iostream>
using namespace std;
/*
int main()
{
	int n, sum = 0, count = 1, digits = 9, res = 0;
	cin >> n;

	while (sum + digits < n)
	{
		res = res + (count * digits);

		sum = sum + digits;					// sum은 9가됨
		count++;
		digits *= 10;						// 다음자리 숫자의 갯수
	}
	res = res + ((n - sum) * count);

	cout << res << endl;
	return 0;
}
*/