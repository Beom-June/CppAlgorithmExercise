/*
문제57.재귀함수 이진수 출력
10진수 N이 입력되면 2진수로 변환하여 출력하는 프로그램을 작성하세요.단 재귀함수를 이용해서 출력해야 합니다.

▣ 입력설명
첫 번째 줄에 10진수 N(1 <= N <= 1, 000)이 주어집니다.
▣ 출력설명
첫 번째 줄에 이진수를 출력하세요.

▣ 입력예제 1
11
▣ 출력예제 1
1011
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

/*
void recur(int x)
{
	if (x == 0)
	{
		return;
	}
	else
	{
		recur(x / 2);
		cout << x % 2;
	}

}

int main()
{
	int n;

	cin >> n;

	recur(n);

	return 0;
}
*/