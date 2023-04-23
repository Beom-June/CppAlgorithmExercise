/*
문제 82. 순열구하기(DFS : Depth First Search)
자연수 N과 R이 주어지면 서로 다른 N개의 자연수 중 R개를 뽑아 일렬로 나열하는 프로그램을 작성하세요.

▣ 입력설명
첫 번째 줄에 자연수 N(1 <= N <= 15)과 R(0 <= R <= 15)이 주어진다.단(N >= R)
두 번째 줄에 N개의 서로 다른 자연수가 오름차순으로 주어진다.
▣ 출력설명
순열의 각 경우를 아래와 같이 오름차순으로 출력한다.마지막 줄에 총 개수도 출력한다.

▣ 입력예제 1
4 3
1 3 6 7
▣ 출력예제 1
1 3 6
1 3 7
1 6 3
1 6 7
1 7 3
1 7 6
3 1 6
3 1 7
3 6 1
3 6 7
3 7 1
3 7 6
6 1 3
6 1 7
6 3 1
6 3 7
6 7 1
6 7 3
7 1 3
7 1 6
7 3 1
7 3 6
7 6 1
7 6 3
24
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

/*
int n, r, cnt = 0;
int a[20], result[20], check[20];

void DFS(int Level) 
{
	if (Level == r)
	{
		for (int j = 0; j < Level; j++)
		{
			cout << result[j] << " " ;
		}
		cnt++;
		puts("");
	}
	else 
	{
		// 가지가 하나씩 뻗어 나감+
		for (int i = 1; i <= n; i++) 
		{
			if (check[i] == 0) 
			{
				result[Level] = a[i];
				check[i] = 1;
				DFS(Level + 1);
				check[i] = 0;
			}
		}
	}
}

int main() 
{
	cin >> n >> r;
	for (int i = 1; i <= n; i++) 
	{
		// 배열에 입력
		cin >> a[i];
	}
	DFS(0);
	cout << cnt << endl;
	return 0;
}
*/