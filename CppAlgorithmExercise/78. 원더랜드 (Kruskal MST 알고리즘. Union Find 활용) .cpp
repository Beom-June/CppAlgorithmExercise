/*
���� 78. ��������(Kruskal MST �˰��� : Union & Find Ȱ��)
�������忡 ������ �����.���������� �� ���θ� ���������ϴ� ������ �ٴڳ� ���̴�.
��������� ��� ���ø� ���� �����ϸ鼭 �ּ��� ��������� �鵵�� ���θ� �����ϰ� ������ ���δ� ����Ϸ��� �Ѵ�.
� ���δ� ���θ� ���������ϸ� ������ ������ �Ǵ� ���ε� �����Ѵ�.������ ������ �Ǵ� ���δ� ����� ������ ǥ���ߴ�.
�Ʒ��� �׸��� �� �� ���� �����ϴ� �׸��̴�.

���� ������ �� ���ð� 1���� 9�� ǥ���Ǿ���, ������ �������� �ּҺ�� 196���� ��� ���ø� �����ϴ� ����� ã�Ƴ� ���̴�.

�� �Է¼���
ù° �ٿ� ������ ���� V(1��V��100)�� ������ ���� E(1��E��1, 000)�� �־�����.���� E����
�ٿ��� �� ���ο� ���� ������ ��Ÿ���� �� ���� A, B, C�� �־�����.�̴� A�� ���ÿ� B��
���ð� ��������� C�� ���η� ����Ǿ� �ִٴ� �ǹ��̴�.C�� ������ ���� ������, ������
1, 000, 000�� ���� �ʴ´�.
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
int unf[10001];

struct Edge
{
	int s;
	int e;
	int value;					// ������ ����ġ

	// ������
	Edge(int a, int b, int c)
	{
		s = a;
		e = b;
		value = c;
	}

	// ������ �����ε�
	bool operator<(const Edge& b)const
	{
		return value < b.value;				// ��������
	}
};

int Find(int v)
{
	if (v == unf[v])
		return v;
	else
		return unf[v] = Find(unf[v]);
}

void Union(int a, int b) 
{
	a = Find(a);
	b = Find(b);

	if (a != b) 
		unf[a] = b;
}

int main() 
{
	vector<Edge> Ed;
	int i, n, m, a, b, c, cnt = 0, res = 0;

	cin >> n >> m;
	for (i = 1; i <= n; i++) 
	{
		// �ڱ� �ڽ����� �ʱ�ȭ
		unf[i] = i;
	}

	// m -> ������ ����
	for (i = 1; i <= m; i++) 
	{
		cin >> a >> b >> c;
		// ������ ȣ���Ͽ� ����
		Ed.push_back(Edge(a, b, c));
	}

	// ����ġ ���� ���Ͽ� �������� ����
	sort(Ed.begin(), Ed.end());

	for (i = 0; i < m; i++) 
	{
		int fa = Find(Ed[i].s);
		int fb = Find(Ed[i].e);

		// ���� �ٸ���?
		if (fa != fb) 
		{
			res += Ed[i].value;			// ����ġ ����
			Union(Ed[i].s, Ed[i].e);
		}
	}

	cout << res;

	return 0;
}
*/