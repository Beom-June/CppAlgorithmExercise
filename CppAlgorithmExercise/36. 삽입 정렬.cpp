//문제 36. 삽입정렬
//N개이 숫자가 입력되면 오름차순으로 정렬하여 출력하는 프로그램을 작성하세요.
//정렬하는 방법은 삽입정렬입니다.

//입력설명
//첫 번째 줄에 자연수 N(1 <= N <= 100)이 주어집니다.
//두 번째 줄에 N개의 자연수가 공백을 사이에 두고 입력됩니다.각 자연수는 정수형 범위 안에 있습니다.

//출력설명
//오름차순으로 정렬된 수열을 출력합니다.

//입력 예제 : 6
//11 7 5 6 10 9

//출력 예제 : 5 6 7 9 10 11

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
int main()
{
	int a[100], n, i, j, temp;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	// 삽입 정렬
	for ( i = 1; i < n; i++)
	{
		temp = a[i];

		for ( j= i - 1; j >=0; j--)
		{
			// 오름 차순
			if (a[j] > temp)
				a[j + 1] = a[j];
			else
				break;
		}
		// 바로 뒤에꺼 대입
		a[j + 1] = temp;
	}

	for ( i = 0; i < n; i++)
	{
		cout << a[i] << ' ';
	}

	return 0;
}
*/