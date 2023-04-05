/*
58. 이진트리 깊이우선탐색(DFS)
아래 그림과 같은 이진트리를 전위순회와 후위순회를 연습해보세요.
   1
 2   3
4 5 6 7
전위순회 출력 : 1 2 4 5 3 6 7 -> 기본 깊이 우선 탐색
중위순회 출력 : 4 2 5 1 6 3 7
후위순회 출력 : 4 5 2 6 7 3 1
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

/*
void DFS(int node)
{
	if (node > 7)
		return;
	else
	{
		DFS(node * 2);	// 좌측
		cout << node << " ";
		DFS(node * 2 + 1);	// 우측
	}
}

int main()
{
	DFS(1);
	return 0;
}
*/