/*
문제. 60. 합이 같은 부분집합(DFS : 아마존 인터뷰)
N개의 원소로 구성된 자연수 집합이 주어지면, 이 집합을 두 개의 부분집합으로 나누었을 때
두 부분집합의 원소의 합이 서로 같은 경우가 존재하면 “YES"를 출력하고, 그렇지 않으면 "NO"를 출력하는 프로그램을 작성하세요.
예를 들어{ 1, 3, 5, 6, 7, 10 }이 입력되면{ 1, 3, 5, 7 } = { 6, 10 } 으로 두 부분집합의 합이 16으로 같은 경우가 존재하는 것을 알 수 있다.

▣ 입력설명
첫 번째 줄에 자연수 N(1 <= N <= 10)이 주어집니다.
두 번째 줄에 집합의 원소 N개가 주어진다.각 원소는 중복되지 않으며 그 크기는 1, 000, 000
이하입니다.
▣ 출력설명
첫 번째 줄에 “YES" 또는 ”NO"를 출력한다.

▣ 입력예제 1
6
1 3 5 6 7 10
▣ 출력예제 1
YES
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

/*
int n, a[11], total = 0;
bool flag = false;

void DFS(int Level, int sum)
{
	// true 면 종료
	if (flag == true)
		return;
	if (Level == n + 1)
	{
		// (total - sum) : 남아있는 원소
		if (sum == (total - sum))
		{
			flag = true;
		}
	}
	else
	{
		// sum에 누적
		DFS(Level + 1, sum + a[Level]);

		// 사용 안하면 누적 x
		DFS(Level + 1, sum);

	}
}

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		total += a[i];
	}

	DFS(1, 0);

	if (flag == true)
	{
		cout << "Yes";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}
*/