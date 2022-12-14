// 문제 10. 자릿수의 합
//N개의 자연수가 입력되면 각 자연수의 자릿수의 합을 구하고, 그 합이 최대인 자연수를 출력
//하는 프로그램을 작성하세요.각 자연수의 자릿수의 합을 구하는 함수를 int digit_sum(int x)를
//꼭 작성해서 프로그래밍 하세요.

// 입력 설명
//첫 줄에 자연수의 개수 N(3 <= N <= 100)이 주어지고, 그 다음 줄에 N개의 자연수가 주어진다.
//각 자연수의 크기는 10, 000, 000를 넘지 않는다

// 출력 설명
//자릿수의 합이 최대인 자연수를 출력한다.자리수의 합이 최대인 자연수가 여러개인 경우 그중 값이 가장 큰 값을 출력합니다.

// 입력 예제 : 5
//125 15232 79 1325 97
// 답 : 97

#include<stdio.h>
#include<cstdio>
#include<iostream>
using namespace std;

/*
int digit_sum(int x)
{
	int tmp, sum = 0;

	while (x > 0)
	{
		tmp = x % 10;
		sum += tmp;
		x = x / 10;
	}
	return sum;
}


int main()
{
	int n, num, i, sum, max = -2147000000, res = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> num;
		sum = digit_sum(num);

		if (sum > max)
		{
			max = sum;
			res = num;
		}
		else if (sum == max)
		{
			// 자릿수 합이 같아도, 자연수가 큰 값이 참으로
			if (num > res) 
				res = num;
		}
	}
	cout << res << endl;
	return 0;
}
*/
