/*
58. ����Ʈ�� ���̿켱Ž��(DFS)
�Ʒ� �׸��� ���� ����Ʈ���� ������ȸ�� ������ȸ�� �����غ�����.
   1
 2   3
4 5 6 7
������ȸ ��� : 1 2 4 5 3 6 7 -> �⺻ ���� �켱 Ž��
������ȸ ��� : 4 2 5 1 6 3 7
������ȸ ��� : 4 5 2 6 7 3 1
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
		DFS(node * 2);	// ����
		cout << node << " ";
		DFS(node * 2 + 1);	// ����
	}
}

int main()
{
	DFS(1);
	return 0;
}
*/