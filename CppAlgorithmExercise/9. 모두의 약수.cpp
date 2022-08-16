// 문제 9.
// 자연수 N이 입력되면 1부터 N까지의 각 숫자들의 약수의 개수를 출력하는 프로그램을 작성
// 만약 N이 8이 입력이 된다면 1(1개), 2(2개), 3(2개), 4(3개), 5(2개), 6(4개), 7(2개), 8(4개)와 같이 각 숫자의 약수의 개수가 구해짐
// 출력은 다음과 같이 1부터 차례대로 약수의 개수만 출력하면 됨
// 1 2 2 3 2 4 2 4 와 같이 출력

// 입력 예제 : 8
// 답 : 1 2 2 3 2 4 2 4

#include<stdio.h>
#include<cstdio>
#include<iostream>
using namespace std;
/*
int cnt[50001];
int main()
{
	int n, i, j;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j = j + i)
		{
			cnt[j]++;
		}
	}

	for (i = 1; i <= n; i++)
	{
		cout << cnt[i] << ' ';
	}
	return 0;
}
*/