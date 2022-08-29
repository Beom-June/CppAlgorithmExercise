//문제 34. 버블정렬
//N개이 숫자가 입력되면 오름차순으로 정렬하여 출력하는 프로그램을 작성하세요.
//정렬하는 방법은 버블정렬입니다.

//입력설명
//첫 번째 줄에 자연수 N(1 <= N <= 100)이 주어집니다.
//두 번째 줄에 N개의 자연수가 공백을 사이에 두고 입력됩니다.각 자연수는 정수형 범위 안에 있습니다.

//출력설명
//오름차순으로 정렬된 수열을 출력합니다.

//입력 예제 : 6
//13 23 11 7 5 15

//출력 예제 : 5 7 11 13 15 23

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
int main()
{
	int n, i, j, a[101], temp;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	
	for ( i = 0; i < n; i++)
	{
		cout << a[i] << ' ';
	}
	return 0;
}
*/