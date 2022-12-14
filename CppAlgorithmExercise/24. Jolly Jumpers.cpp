// 문제 24. Jolly Jumpers
//N개의 정수로 이루어진 수열에 대해 서로 인접해 있는 두 수의 차가 1에서 N - 1까지의 값을모두 가지면 그 수열을 유쾌한 점퍼(jolly jumper)라고 부른다.
//예를 들어 다음과 같은 수열에서 1 4 2 3 앞 뒤에 있는 숫자 차의 절대 값이 각각 3, 2, 1이므로 이 수열은 유쾌한 점퍼가된다.
//어떤 수열이 유쾌한 점퍼인지 판단할 수 있는 프로그램을 작성하라.

// 입력 설명
//첫 번째 줄에 자연수 N(3 <= N <= 100)이 주어진다.
//그 다음 줄에 N개의 정수가 주어진다.정수의 크기는 int 형 범위안에 있으며, 인접한 두 수의차도 정수형 범위에 있습니다.

// 출력 설명
//유쾌한 점퍼이면 “YES"를 출력하고, 그렇지 않으면 ”NO"를 출력한다.

// 입력 : 5 
//1 4 2 3 7

// 출력 YES

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
int main()
{
	int n = 0, i, pre, now, pos;

	cin >> n;
	// 배열 선언
	vector<int> check(n);

	cin >> pre;						// 첫 번째 숫자 입력

	for (i = 1; i < n; i++)
	{
		cin >> now;

		pos = abs(pre - now);		// abs : 절댓값

		if (pos > 0 && pos < n && check[pos] == 0)		// check[pos] == 0 중복 체크
		{
			check[pos] == 1;
		}
		else
		{
			// 졸리 점퍼가 아니다.
			cout << "NO" << endl;
			return 0;
		}

		// 밀고 가면서 체크
		pre = now;
	}
	// 졸리 점퍼다
	cout << "YES" << endl;
	return 0;
}
*/