/*
���� 54. �ùٸ� ��ȣ(stack)
��ȣ�� �ԷµǸ� �ùٸ� ��ȣ�̸� ��YES", �ùٸ��� ������ ��NO"�� ����մϴ�.
(())() �̰��� ��ȣ�� ���� �ùٸ��� ��ġ�ϴ� ������, (()()))�� �ùٸ� ��ȣ�� �ƴϴ�.

�� �Է¼���
ù ��° �ٿ� ��ȣ ���ڿ��� �Էµ˴ϴ�.���ڿ��� �ִ� ���̴� 30�̴�.
�� ��¼���
ù ��° �ٿ� YES, NO�� ����Ѵ�.

�� �Է¿��� 1
(()(()))(()
�� ��¿��� 1
NO

�� �Է¿��� 2
()()(()())
�� ��¿��� 2
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
//			// ����ִ� ���
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
//	// ���������� ����
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