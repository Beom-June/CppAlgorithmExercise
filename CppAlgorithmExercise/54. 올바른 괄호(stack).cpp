/*
문제 54. 올바른 괄호(stack)
괄호가 입력되면 올바른 괄호이면 “YES", 올바르지 않으면 ”NO"를 출력합니다.
(())() 이것은 괄호의 쌍이 올바르게 위치하는 거지만, (()()))은 올바른 괄호가 아니다.

▣ 입력설명
첫 번째 줄에 괄호 문자열이 입력됩니다.문자열의 최대 길이는 30이다.
▣ 출력설명
첫 번째 줄에 YES, NO를 출력한다.

▣ 입력예제 1
(()(()))(()
▣ 출력예제 1
NO

▣ 입력예제 2
()()(()())
▣ 출력예제 2
YES
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

//int main()
//{
//	stack<char> s;
//	char a[50];
//	int i, flag = 1;
//
//	cin >> a;
//
//	for (i = 0; a[i] != '\0'; i++)
//	{
//		if (a[i] == '(')
//		{
//			s.push(a[i]);
//		}
//		else
//		{
//			// 비어있는 경우
//			if (s.empty())
//			{
//				cout << "No";
//				flag = 0;
//				break;
//			}
//			else
//			{
//				s.pop();
//			}
//		}
//
//	}
//
//	// 정상적으로 종료
//	if (s.empty() && flag == 1)
//	{
//		cout << "Yes";
//	}
//	else if (!s.empty() &&flag == 1)
//	{
//		cout << "NO";
//	}
//
//	return 0;
//}