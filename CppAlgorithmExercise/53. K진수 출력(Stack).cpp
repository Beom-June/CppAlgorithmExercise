/*
53. K���� ���
10���� N�� �ԷµǸ� K������ ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��ϼ���.���� �ڷᱸ���� ����Ͻñ� �ٶ��ϴ�.

�� �Է¼���
ù ��° �ٿ� 10���� N(10 <= N <= 1, 000)�� K(2, 5, 8, 16)�� �־�����.

�� ��¼���
K������ ����Ѵ�.

�� �Է¿��� 1
11 2
�� ��¿��� 1
1011

�� �Է¿��� 2
31 16
�� ��¿��� 2
1F
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

//int stack[100], top = -1;

//// ����
//void push(int x)
//{
//	stack[++top] = x;
//}
//
//// ����
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
//	// empty() -> ��� ������ ��
//	while (!s.empty())
//	{
//		//cout << str[pop()];
//		cout << str[s.top()];
//		s.pop();
//	}
//
//	return 0;
//}
