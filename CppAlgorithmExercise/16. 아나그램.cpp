// 문제 16. 아나그램 : 구글 인터뷰 문제
//Anagram이란 두 문자열이 알파벳의 나열 순서를 다르지만 그 구성이 일치하면 두 단어는 아나그램이라고 합니다.
//예를 들면 AbaAeCe 와 baeeACA 는 알파벳을 나열 순서는 다르지만 그 구성을 살펴보면
//A(2), a(1), b(1), C(1), e(2)로 알파벳과 그 개수가 모두 일치합니다.즉 어느 한 단어를 재배열하면 상대편 단어가 될 수 있는 것을 아나그램이라 합니다.
//길이가 같은 두 개의 단어가 주어지면 두 단어가 아나그램인지 판별하는 프로그램을 작성하세요.아나그램 판별시 대소문자가 구분됩니다.

// 소문자는 1 ~ 부터 배정
// 대문자는 원래 97이나 -70을하여 27부터 시작

// 입력 예 
// AbaAeCe
// baeeACA

// 출력 예
// YES

#include<stdio.h>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

/*
int a[60], b[60];
int main()
{
	char str[100];
	int i = 0;

	cin >> str;

	// a[i] != '\0' : 문자열의 끝까지 탐색
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			// 대문자이니
			a[str[i] - 64]++;
		}
		// 아니면 소문자
		else
		{
			a[str[i] - 70]++;
		}
	}

	// 두 번째 입력
	cin >> str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			// 대문자이니
			b[str[i] - 64]++;
		}
		// 아니면 소문자
		else
		{
			b[str[i] - 70]++;
		}
	}

	// 아나그램인지 확인
	for ( i = 0; i <= 52 ; i++)
	{
		// 같지 않으면 아나그램이 아니다.
		if (a[i] != b[i])
		{
			cout << "NO" << endl;
			//break;
			exit(0);
		}
	}
	// 같으면 아나그램이다.
	cout << "YES" << endl;
	return 0;
}
*/