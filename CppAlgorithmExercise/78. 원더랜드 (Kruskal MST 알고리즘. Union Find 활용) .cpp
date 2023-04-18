/*
문제 78. 원더랜드(Kruskal MST 알고리즘 : Union & Find 활용)
원더랜드에 문제가 생겼다.원더랜드의 각 도로를 유지보수하는 재정이 바닥난 것이다.
원더랜드는 모든 도시를 서로 연결하면서 최소의 유지비용이 들도록 도로를 선택하고 나머지 도로는 폐쇄하려고 한다.
어떤 도로는 도로를 유지보수하면 재정에 도움이 되는 도로도 존재한다.재정에 도움이 되는 도로는 비용을 음수로 표현했다.
아래의 그림은 그 한 예를 설명하는 그림이다.

위의 지도는 각 도시가 1부터 9로 표현되었고, 지도의 오른쪽은 최소비용 196으로 모든 도시를 연결하는 방법을 찾아낸 것이다.

▣ 입력설명
첫째 줄에 도시의 개수 V(1≤V≤100)와 도로의 개수 E(1≤E≤1, 000)가 주어진다.다음 E개의
줄에는 각 도로에 대한 정보를 나타내는 세 정수 A, B, C가 주어진다.이는 A번 도시와 B번
도시가 유지비용이 C인 도로로 연결되어 있다는 의미이다.C는 음수일 수도 있으며, 절댓값이
1, 000, 000을 넘지 않는다.
▣ 출력설명
모든 도시를 연결하면서 드는 최소비용을 출려한다.

▣ 입력예제 1
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
▣ 출력예제 1
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
	int value;					// 간선의 가중치

	// 생성자
	Edge(int a, int b, int c)
	{
		s = a;
		e = b;
		value = c;
	}

	// 연산자 오버로딩
	bool operator<(const Edge& b)const
	{
		return value < b.value;				// 오름차순
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
		// 자기 자신으로 초기화
		unf[i] = i;
	}

	// m -> 간선의 갯수
	for (i = 1; i <= m; i++) 
	{
		cin >> a >> b >> c;
		// 생성자 호출하여 저장
		Ed.push_back(Edge(a, b, c));
	}

	// 가중치 값에 의하여 오름차순 정렬
	sort(Ed.begin(), Ed.end());

	for (i = 0; i < m; i++) 
	{
		int fa = Find(Ed[i].s);
		int fb = Find(Ed[i].e);

		// 서로 다르면?
		if (fa != fb) 
		{
			res += Ed[i].value;			// 가중치 누적
			Union(Ed[i].s, Ed[i].e);
		}
	}

	cout << res;

	return 0;
}
*/