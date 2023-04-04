/*56. 재귀함수 분석
자연수 N이 주어지면 아래와 같이 출력하는 프로그램을 작성하세요.재귀함수를 이용해서 출력해야 합니다.

▣ 입력설명
첫 번째 줄에 자연수 N(1 <= N <= 20)이 주어집니다.
▣ 출력설명
첫 번째 줄에 재귀함수를 이용해서 출력하세요.

▣ 입력예제 1
3
▣ 출력예제 1
1 2 3
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
		recur(x - 1);
		cout << x;
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