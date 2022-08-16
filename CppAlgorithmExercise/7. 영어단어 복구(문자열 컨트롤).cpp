// 문제 7.
// 컴퓨터가 바이러스에 걸려 영어 단어가 띄어쓰기와 대소문자가 혼합되어 표현이 된다
// 예를 들어 bE au T I fu L과 같이.
// 영단어를 원래의 표현대로 공백을 제거하고 소문자화 시켜 출력하는 프로그램 작성

// 입력 예제 : bE au T I fu L
// 답 : beautifu

#include<stdio.h>
#include<cstdio>
#include<iostream>
using namespace std;

/*
int main()
{
	char a[101];
	char b[101];				// 복구 담는 배열
	int i, p = 0;

	gets_s(a);

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != ' ')
		{
			if (a[i] > 65 && a[i] <= 90)
			{
				// 소문자로 변경
				b[p++] = a[i] + 32;
			}
			else
			{
				b[p++] = a[i];
			}
		}
	}

	b[p] = '\0';
	cout << b << endl;

	return 0;
}
*/