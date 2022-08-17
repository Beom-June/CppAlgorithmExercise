// 문제 8.
// 괄호가 입력 되면 올바른 고라호이면 YES, 올바르지 않으면 NO를 출력
// (())() 이것은 쌍이 올바르게 위치하는 것. (()()))은 올바른 괄호가 아님

// 첫 번쨰 줄에 괄호 문자열이 입력. 문자열의 최대 길이는 30

// 입력 설명
//첫 번째 줄에 괄호 문자열이 입력됩니다.문자열의 최대 길이는 30이다.

// 출력 설명
//첫 번째 줄에 YES, NO를 출력한다.

// 입력 예제 : (()(()))(()
// 답 : NO

#include<stdio.h>
#include<cstdio>
#include<iostream>
using namespace std;

/*
int main()
{
	char a[100];
	int i, count = 0;

	cin >> a;

	for ( i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '(') 
			count++;
		else if (a[i] == ')') 
			count--;

		if (count < 0)
			break;
	}

	if (count == 0) 
		cout << "Yes" << endl;
	else 
		cout << "NO" << endl;

	return 0;
}
*/