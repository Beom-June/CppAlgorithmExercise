// 문제 11. 숫자의 총 갯수
// 자연수 N이 입력되면 1부터 N까지의 자연수를 종이에 적을 때 각 숫자는 몇 개 쓰였을까요 ?
// 예를 들어 1부터 15까지는 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 1, 1, 1, 2, 1, 3, 1, 4, 1, 5으로 총 21개가 쓰였음을 알 수 있습니다.
// 자연수 N이 입력되면 1부터 N까지 각 숫자는 몇 개가 사용되었는지를 구하는 프로그램을 작성하세요.

// 입력 예제 : 15
// 답 : 21

#include<stdio.h>
#include<cstdio>
#include<iostream>
using namespace std;
/*
int main()
{
	int n, i, cnt = 0, tmp;
	cin >> n;

	for ( i = 1; i <= n; i++)
	{
		tmp = i;
		while (tmp > 0)
		{
			tmp /= 10;
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
*/