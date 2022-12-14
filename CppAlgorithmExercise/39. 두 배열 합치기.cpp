// 문제 39. 두 배열 합치기
//오름차순으로 정렬이 된 두 배열이 주어지면 두 배열을 오름차순으로 합쳐 출력하는 프로그램을 작성하세요.

//입력설명
//첫 번째 줄에 첫 번째 배열의 크기 N(1 <= N <= 100)이 주어집니다.
//두 번째 줄에 N개의 배열 원소가 오름차순으로 주어집니다.
//세 번째 줄에 두 번째 배열의 크기 M(1 <= M <= 100)이 주어집니다.
//네 번째 줄에 M개의 배열 원소가 오름차순으로 주어집니다.
//각 배열의 원소는 int형 변수의 크기를 넘지 않습니다.

//출력설명
//오름차순으로 정렬된 배열을 출력합니다.

//입력 예제
//3
//1 3 5
//5
//2 3 6 7 9

//출력 예제
//1 2 3 3 5 6 7 9

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
int a[101], b[101], c[300];
int main()
{
	int n, m, i, p1 = 1, p2 = 1, p3 = 1;

	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	cin >> m;
	for (i = 1; i <= m; i++)
	{
		cin >> b[i];
	}

	while (p1 <= n && p2 <= m)
	{
		// 병합 정렬
		if (a[p1] < b[p2])
		{
			c[p3++] = a[p1++];
		}
		else
		{
			c[p3++] = b[p2++];
		}
	}

	while (p1 <= n)
	{
		// 놓고 증가
		c[p3++] = a[p1++];
	}
	while (p2 <= m)
	{
		// 놓고 증가
		c[p3++] = b[p2++];
	}

	for (i = 1; i < p3; i++)
	{
		cout << c[i] << ' ';
	}

	return 0;
}
*/