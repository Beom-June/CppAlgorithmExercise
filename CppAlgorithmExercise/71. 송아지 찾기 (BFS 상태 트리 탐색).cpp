/*
문제 71. 송아지 찾기(BFS : 상태트리탐색)
현수는 송아지를 잃어버렸다.다행히 송아지에는 위치추적기가 달려 있다.현수의 위치와 송아지의 위치가 직선상의 좌표 점으로 주어지면
현수는 현재 위치에서 송아지의 위치까지 다음과 같은 방법으로 이동한다.
현수는 스카이 콩콩을 타고 가는데 한 번의 점프로 앞으로 1, 뒤로 1, 앞으로 5를 이동할 수 있다.
최소 몇 번의 점프로 현수가 송아지의 위치까지 갈 수 있는지 구하는 프로그램을 작성하세요.

▣ 입력설명
첫 번째 줄에 현수의 위치 S와 송아지의 위치 E가 주어진다.직선의 좌표 점은 1부터 10, 000
까지이다.
▣ 출력설명
점프의 최소횟수를 구한다.

▣ 입력예제 1
5 14
▣ 출력예제 1
3
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;
/*
int check[10001], d[3] = { 1, -1, 5 };		// d[] => 방향 배열

int main()
{
	int start, end, x, pos;					// x : 위치,  pos : 이동한 위치
	queue<int> Q;

	cin >> start >> end;

	check[start] = 1;
	Q.push(start);
	while (!Q.empty())
	{
		x = Q.front();
		Q.pop();

		for (int i = 0; i < 3; i++)
		{
			pos = x + d[i];
			if(pos <= 0 || pos > 10000)
			{
				continue;
			}
			if (pos == end)
			{
				cout << check[x];
				exit(0);						// 프로그램 자체 종료
			}
			// 한 번도 방문하지 않은 지점
			if (check[pos] == 0)
			{
				// check[x] : 최소 횟수가 들어있음
				check[pos] = check[x] + 1;
				Q.push(pos);
			}
		}
	}

	return 0;
}
*/