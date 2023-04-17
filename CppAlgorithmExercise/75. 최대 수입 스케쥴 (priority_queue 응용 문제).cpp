/*
문제 75. 최대 수입 스케쥴(priority_queue 응용문제)
현수는 유명한 강연자이다.N개이 기업에서 강연 요청을 해왔다.각 기업은 D일 안에 와서 강연을 해 주면 M만큼의 강연료를 주기로 했다.
각 기업이 요청한 D와 M를 바탕으로 가장 많을 돈을 벌 수 있도록 강연 스케쥴을 짜야 한다.
단 강연의 특성상 현수는 하루에 하나의 기업에서만 강연을 할 수 있다.

▣ 입력설명
첫 번째 줄에 자연수 N(1 <= N <= 10, 000)이 주어지고, 다음 N개의 줄에 M(1 <= M <= 10, 000)과
D(1 <= D <= 10, 000)가 차례로 주어진다.
▣ 출력설명
첫 번째 줄에 최대로 벌 수 있는 수입을 출력한다.

▣ 입력예제 1
6
50 2
20 1
40 2
60 3
30 3
30 1
▣ 출력예제 1
150
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

/*
struct Data {
	int money;
	int when;
	// 생성자
	Data(int a, int b)
	{
		money = a;
		when = b;
	}
	// 기준점 -> 정렬
	bool operator<(const Data& b)const
	{
		return when > b.when;			// 앞의 것이 큰 것으로 정렬
	}
};
int main()
{
	int n, j, a, b, res = 0, max = -2147000000;
	vector<Data> T;
	priority_queue<int> pQ;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		T.push_back(Data(a, b));

		// 날짜중에 가장 큰 값을 찾음
		if (b > max)
			max = b;
	}

	sort(T.begin(), T.end());

	j = 0;

	// 강연하는 날짜
	for (int i = max; i >= 1; i--)
	{
		for (j; j < n; j++)
		{
			// 강연들의 날짜가 i 보다 작으면 멈춤
			if (T[j].when < i)
				break;
			pQ.push(T[j].money);
		}
		if (!pQ.empty())
		{
			res += pQ.top();
			pQ.pop();
		}
	}
	cout << res;
	return 0;
}
*/