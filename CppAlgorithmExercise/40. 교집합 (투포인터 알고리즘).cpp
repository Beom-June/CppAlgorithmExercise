// 문제 40. 교집합 (투포인터 알고리즘)
//두 집합 A, B가 주어지면 두 집합의 교집합을 출력하는 프로그램을 작성하세요.

//입력설명
//첫 번째 줄에 집합 A의 크기 N(1 <= N <= 30, 000)이 주어집니다.
//두 번째 줄에 N개의 원소가 주어집니다.원소가 중복되어 주어지지 않습니다.
//세 번째 줄에 집합 B의 크기 M(1 <= M <= 30, 000)이 주어집니다.
//네 번째 줄에 M개의 원소가 주어집니다.원소가 중복되어 주어지지 않습니다.
//각 집합의 원소는 int형 변수의 크기를 넘지 않습니다

//출력설명
//두 집합의 교집합을 오름차순 정렬하여 출력합니다.

//입력 예제
//5
//2 7 10 5 3
//5
//3 10 5 17 12

//출력 예제
//3 5 10

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
int main()
{
	int n, m, i, p1 = 0, p2 = 0, p3 = 0;

	cin >> n;
	vector<int> a(n);								// 배열 선언
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	// 자동으로 오름차순 정렬 해줌. #include<algorithm>에서 제공함
	sort(a.begin(), a.end());

	cin >> m;
	vector<int> b(m), c(n + m);
	for (i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	sort(b.begin(), b.end());

	while (p1 < n && p2 < m)
	{
		if (a[p1] == b[p2])
		{
			c[p3++] = a[p1++];
			p2++;
		}
		else if (a[p1] < b[p2])
			p1++;					// 작은 쪽 증가
		else
			p2++;
	}

	for (i = 0; i < p3; i++)
		cout << c[i] << ' ';

	return 0;
}
*/