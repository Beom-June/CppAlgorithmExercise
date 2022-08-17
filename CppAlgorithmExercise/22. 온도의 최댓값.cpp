// 문제 22. 온도의 최댓 값
//매일 아침 9시에 학교에서 측정한 온도가 어떤 정수의 수열로 주어졌을 때, 연속적인 며칠 동안의 온도의 합이 가장 큰 값을 알아보고자 한다.
//예를 들어, 다음과 같이 10일 간의 온도가 주어졌을 때, 3 - 2 - 4 - 9 0 3 7 13 8 - 3 모든 연속적인 이틀간의 온도의 합은 다음과 같다.
//이때, 온도의 합이 가장 큰 값은 21이다.
//매일 측정한 온도가 정수의 수열로 주어졌을 때, 연속적인 며칠 동안의 온도의 합이 가장 큰 값을 계산하는 프로그램을 작성하시오.

// 입력 설명
// 첫째 줄에는 두 개의 정수 N과 K가 한 개의 공백을 사이에 두고 순서대로 주어진다. 첫 번째 정수 N은 온도를 측정한 전체 날짜의 수이다.
//N은 2 이상 100, 000 이하이다.두 번째 정수 K는 합을 구하기 위한 연속적인 날짜의 수이다.K는 1과 N 사이의 정수이다.
//둘째 줄에는 매일 측정한 온도를 나타내는 N개의 정수가 빈칸을 사이에 두고 주어진다.이 수들은 모두 - 100 이상 100 이하이다

// 출력 설명
// 첫째 줄에는 온도의 수열에서 연속적인 K일의 온도의 합이 최대가 되는 값을 출력한다.

// 입력 예제
//10 2
//3 -2 -4 -9 0 3 7 13 8 -3

// 출력 예제 
// 21

#include<stdio.h>
#include<iostream>
#include<vector>									// 배열
using namespace std;

/*
int main()
{
	int n = 0, k = 0, i = 0, sum = 0, max = 0;

	// 입력
	cin >> n >> k;

	vector<int> a(n);							// n 크기 만큼의 배열이 만들어짐 std::vector<int> a(n)

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < k; i++)
	{
		sum += a[i];
	}

	max = sum;

	for (i = k; i < n; i++)
	{
		sum += (a[i] - a[i - k]);

		if (sum > max) 
			max = sum;
	}
	cout << max << endl;
	return 0;
}
*/