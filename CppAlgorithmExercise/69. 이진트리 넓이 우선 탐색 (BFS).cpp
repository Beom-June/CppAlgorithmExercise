/*
문제 69. 이진트리 넓이우선탐색(BFS)
아래 그림과 같은 이진트리를 넓이우선탐색해 보세요.간선 정보 6개를 입력받아 처리해보세요.
   1
 2   3
4 5 6 7
넓이 우선 탐색 : 1 2 3 4 5 6 7

▣ 입력예제 1
1 2
1 3
2 4
2 5
3 6
3 7
▣ 출력예제 1
1 2 3 4 5 6 7
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

/*
int Queue[100], front = -1, back = -1, check[10];
vector<int> map[10];							// 인접 리스트

int main()
{
	int a, b, x;								// x : queue에서 값을 받음

	for (int i = 1; i <= 6; i++)
	{
		cin >> a >> b;

		// 연결
		map[a].push_back(b);
		map[b].push_back(a);
	}
	Queue[++back] = 1;
	check[1] = 1;
	while (front < back)
	{
		x = Queue[++front];
		// front와 back 같아지는 경우 비어있음
		cout << x << " ";

		for (int i = 0; i < map[x].size(); i++)
		{
			if (check[map[x][i]] == 0)
			{
				check[map[x][i]] = 1;
				Queue[++back] = map[x][i];
			}
		}
	}

	return 0;
}
*/