/*
���� 79. ��������(Prim MST �˰��� : priority_queue Ȱ��)
�������忡 ������ �����.���������� �� ���θ� ���������ϴ� ������ �ٴڳ� ���̴�.
��������� ��� ���ø� ���� �����ϸ鼭 �ּ��� ��������� �鵵�� ���θ� �����ϰ� ���������δ� ����Ϸ��� �Ѵ�.
� ���δ� ���θ� ���������ϸ� ������ ������ �Ǵ� ���ε� �����Ѵ�.������ ������ �Ǵ� ���δ� ����� ������ ǥ���ߴ�.
�Ʒ��� �׸��� �� �� ���� �����ϴ� �׸��̴�.

���� ������ �� ���ð� 1���� 9�� ǥ���Ǿ���, ������ �������� �ּҺ�� 196���� ��� ���ø� �����ϴ� ����� ã�Ƴ� ���̴�.

�� �Է¼���
ù° �ٿ� ������ ���� V(1��V��100)�� ������ ���� E(1��E��1, 000)�� �־�����.���� E�����ٿ��� �� ���ο� ���� ������ ��Ÿ���� �� ���� A, B, C�� �־�����.
�̴� A�� ���ÿ� B�� ���ð� ��������� C�� ���η� ����Ǿ� �ִٴ� �ǹ��̴�.C�� ������ ���� ������, ������ 1, 000, 000�� ���� �ʴ´�.
�� ��¼���
��� ���ø� �����ϸ鼭 ��� �ּҺ���� ����Ѵ�.

�� �Է¿��� 1
9 12
1 2 12
1 9 25
2 3 10
2 8 17
2 9 8
3 4 18
3 7 55
4 5 44
5 6 60
5 7 38
7 8 35
8 9 15
�� ��¿��� 1
196
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

/*
int check[30];

struct Edge 
{
	int e;
	int value;

	Edge(int a, int b) 
	{
		e = a;
		value = b;
	}
	bool operator<(const Edge& b)const 
	{
		return value > b.value;				// �ּ� ��
	}
};

int main() 
{
	priority_queue<Edge> Q;
	vector<pair<int, int> > map[30];
	int n, m, a, b, c, res = 0;

	cin >> n >> m;
	for (int i = 1; i <= m; i++) 
	{
		// ���� ���� �Է�
		cin >> a >> b >> c;
		// ������
		map[a].push_back(make_pair(b, c));
		map[b].push_back(make_pair(a, c));
	}

	// ������ ���� ����
	Q.push(Edge(1, 0));

	while (!Q.empty()) 
	{
		Edge tmp = Q.top();
		Q.pop();

		int v = tmp.e;				// ���� v -> 1
		int cost = tmp.value;		// ���� const -> 0

		// v��� ������ Ʈ���� �����ΰ�?
		if (check[v] == 0)
		{
			res += cost;			// ����ġ ���ϰ�
			check[v] = 1;				// üũ ����

			for (int i = 0; i < map[v].size(); i++) 
			{
				if (check[map[v][i].first] == 0)
				{
					// ���� ��ȣ, ����ġ ��
					Q.push(Edge(map[v][i].first, map[v][i].second));
				}
			}
		}
	}
	cout << res;
	return 0;
}
*/