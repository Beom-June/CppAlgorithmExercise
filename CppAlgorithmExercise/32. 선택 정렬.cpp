//문제 32. 선택정렬
//N개이 숫자가 입력되면 오름차순으로 정렬하여 출력하는 프로그램을 작성하세요.
//정렬하는 방법은 선택정렬입니다.

//입력설명
//첫 번째 줄에 자연수 N(1 <= N <= 100)이 주어집니다.
//두 번째 줄에 N개의 자연수가 공백을 사이에 두고 입력됩니다.각 자연수는 정수형 범위 안에 있습니다.

//출력설명
//오름차순으로 정렬된 수열을 출력합니다.

//입력 예제 : 6
//13 5 11 7 23 15

//출력 예제 : 5 7 11 13 15 23

/*
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int a[100], n, index, i, j, temp;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < n - 1; i++)
	{
		index = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[index])
				index = j;
		}
		temp = a[i];
		a[i] = a[index];
		a[index] = temp;
	}

	// 출력
	for ( i = 0; i < n; i++)
	{
		cout << a[i] << ' ';
	}
	return 0;
}
*/