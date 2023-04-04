/*
55. 기차운행(stack 응용)
A도시에서 출발한 기차는 B도시로 도착한다.그런데 도로 중간에 T자형 교차로가 있어 출발한 기차의 도착 순서를 조정할 수 있다.
교차로 A도시 B도시 교차로에서는 다음과 같은 두 개의 작업을 합니다.

P(push)작업 : A도시에서 오는 기차를 교차로에 넣는다.
O(out)작업 : 교차로에 들어온 가장 최근 기차를 B도시로 보낸다.

만약 2 1 3 기차 번호 순으로 A도시에서 출발하더라도 B도시에는 T교차로를 이용하여 1 2 3 순으로 도착하게 할 수 있습니다.
그 작업 P, P, O, O, P, O순으로 작업을 하면 B도시에 1, 2, 3 순으로 도착합니다.
1부터 N까지 번호를 가진 기차가 A도시에서 어떤 순으로 출발하든, B도시에 번호순으로 도착하도록 하는 교차로 작업을 출력합니다.
모든 기차는 교차로에 들어가야만 B도시로 갈 수 있습니다.번호순서대로 도착이 불가능하면 impossible 이라고 출력합니다.

▣ 입력설명
첫 번째 줄에 자연수 N(3 <= N <= 30)가 주어진다.
두 번째 줄에 A도시에서 출발하는 기차번호순이 차례대로 입력된다.

▣ 출력설명
교차로 작업을 순서대로 P와 O로 출력한다.

▣ 입력예제 1
3
2 1 3
▣ 출력예제 1
PPOOPO
*/
#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

//int main()
//{
//	stack<int> s;
//	int n = 0, m, i, j = 1;
//	//vector<int> a(n + 1);
//
//	// 입력
//	cin >> n;
//	/*for (i = 1; i <= n; i++)
//	{
//		a[i] = i;
//	}*/
//
//	// 문자 저장
//	vector<char> str;
//	for (i = 1; i <= n; i++)
//	{
//		// 출발하는 기차 번호
//		cin >> m;
//		s.push(m);
//		str.push_back('P');
//		while (1)
//		{
//			// 비어 있으면
//			if (s.empty())
//				break;
//
//			// 꺼냄
//			if (j == s.top())
//			{
//				s.pop();
//				j++;
//				str.push_back('O');
//			}
//			else
//				break;
//		}
//	}
//
//	if (!s.empty())
//	{
//		cout << "impossible";
//	}
//	else
//	{
//		for ( i = 0; i < str.size(); i++)
//		{
//			cout << str[i];
//		}
//	}
//
//	return 0;
//}