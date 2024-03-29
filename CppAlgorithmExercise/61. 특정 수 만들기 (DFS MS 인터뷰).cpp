/*
61. 특정 수 만들기(DFS : MS 인터뷰)
N개의 원소로 구성된 자연수 집합이 주어지면, 집합의 원소와 ‘ + ’, ‘ - ’ 연산을 사용하여 특정수인 M을 만드는 경우가 몇 가지 있는지 출력하는 프로그램을 작성하세요.
각 원소는 연산에 한 번만 사용합니다.
예를 들어{ 2, 4, 6, 8 }이 입력되고, M = 12이면
2 + 4 + 6 = 12
4 + 8 = 12
6 + 8 - 2 = 12
2 - 4 + 6 + 8 = 12
로 총 4가지의 경우가 있습니다.만들어지는 경우가 존재하지 않으면 - 1를 출력한다.\

▣ 입력설명
첫 번째 줄에 자연수 N(1 <= N <= 10)와 M(1 <= M <= 100) 주어집니다.
두 번째 줄에 집합의 원소 N개가 주어진다.각 원소는 중복되지 않는다.
▣ 출력설명
첫 번째 줄에 “YES" 또는 ”NO"를 출력한다.

▣ 입력예제 1
4 12
2 4 6 8
▣ 출력예제 1
4
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

/*
int a[11], n, m, cnt = 0, path[11];

void DFS(int Level, int Value)
{
	if (Level == n + 1)	// 완성된 경우
	{
		if (Value == m)
		{
			cnt++;

			// 경로 출력
			for (int i = 1; i < Level; i++)
			{
				cout << path[i] << " ";
			}
			puts(" ");
		}
	}
	else				// 아니면
	{
		// 좌측
		path[Level] = a[Level];
		DFS(Level + 1, Value + a[Level]);
		// 우측
		path[Level] = -a[Level];
		DFS(Level + 1, Value - a[Level]);
		// 가운데
		path[Level] = 0;
		DFS(Level + 1, Value);
	}
}


int main()
{
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	DFS(1, 0);

	if (cnt == 0)
		cout << "-1\n";
	else
		cout << cnt;
	return 0;
}
*/