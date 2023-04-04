/*
53. K진수 출력
10진수 N이 입력되면 K진수로 변환하여 출력하는 프로그램을 작성하세요.스택 자료구조를 사용하시기 바랍니다.

▣ 입력설명
첫 번째 줄에 10진수 N(10 <= N <= 1, 000)과 K(2, 5, 8, 16)가 주어진다.

▣ 출력설명
K진수를 출력한다.

▣ 입력예제 1
11 2
▣ 출력예제 1
1011

▣ 입력예제 2
31 16
▣ 출력예제 2
1F
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

//int stack[100], top = -1;

//// 넣음
//void push(int x)
//{
//	stack[++top] = x;
//}
//
//// 꺼냄
//int pop()
//{
//	return stack[top--];
//}

//int main()
//{
//	int n, k;
//	stack<int> s;
//	char str[20] = "0123456789ABCDEF";
//
//
//	cin >> n >> k;
//
//	while (n > 0)
//	{
//		s.push(n % k);
//		n = n / k;
//	}
//
//	//while (top != -1)
//	// empty() -> 비어 있으면 참
//	while (!s.empty())
//	{
//		//cout << str[pop()];
//		cout << str[s.top()];
//		s.pop();
//	}
//
//	return 0;
//}
