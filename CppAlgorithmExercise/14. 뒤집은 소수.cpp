// 문제 14. 뒤집은 소수
//N개의 자연수가 입력되면 각 자연수를 뒤집은 후 그 뒤집은 수가 소수이면 그 수를 출력하는 프로그램을 작성하세요.
//예를 들어 32를 뒤집으면 23이고, 23은 소수이다.그러면 23을 출력한다.단 910를 뒤집으면 19로 숫자화 해야 한다.첫 자리부터의 연속된 0은 무시한다.
//뒤집는 함수인 int reverse(int x) 와 소수인지를 확인하는 함수 bool isPrime(int x)를 반드시 작성하여 프로그래밍 한다.

// 입력 예제 : 5 
//32 55 62 3700 250
// 답 : 23 73

#include<stdio.h>
#include<cstdio>
#include<iostream>
using namespace std;
/*
int reverse(int x)
{
	int res = 0, tmp;
	while (x > 0)
	{
		tmp = x % 10;
		res = res * 10 + tmp;
		x /= 10;
	}
	return res;
}
bool isPrime(int x)
{
	int i = 0;
	bool flag = true;

	// 1은 소수가 아니므로 리턴 시킴. for문에 1넣으면 시간 더 오래걸림
	if (x == 1)
	{
		return false;
	}
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

int main()
{
	int n = 0, num = 0, i = 0, tmp = 0;

	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cin >> num;
		tmp = reverse(num);

		// 소수면
		if (isPrime(tmp))
		{
			cout << tmp << ' ';
		}
	}

	return 0;
}
*/
