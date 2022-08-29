// 문제 35. Special Sort(구글 인터뷰)
//N개의 정수가 입력되면 당신은 입력된 값을 정렬해야 한다.
//음의 정수는 앞쪽에 양의정수는 뒷쪽에 있어야 한다.또한 양의정수와 음의정수의 순서에는 변함이 없어야 한다

//입력설명
//첫 번째 줄에 정수 N(5 <= N <= 100)이 주어지고, 그 다음 줄부터 음수를 포함한 정수가 주어진다.
//숫자 0은 입력되지 않는다

//출력설명
//정렬된 결과를 출력한다.

//입력 예제 : 8
//1 2 3 - 3 - 2 5 6 - 6

//출력 예제 : -3 - 2 - 6 1 2 3 5 6

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
int main()
{
	int a[101], n, i, j, temp;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	// 버블 정렬
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > 0 && a[j + 1] < 0)
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	// 출력
	for ( i = 0; i < n; i++)
	{
		cout << a[i] << ' ';
	}

	return 0;
}
*/