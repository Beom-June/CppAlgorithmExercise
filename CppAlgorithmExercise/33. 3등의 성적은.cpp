//문제 33. 3등의 성적은 ?
//N명의 수학성적이 주어지면 그 중 3등을 한 수학성적을 출력하는 프로그램을 작성하세요.
//만약 학생의 점수가 100점이 3명, 99점이 2명, 98점이 5명, 97점이 3명 이런식으로 점수가
//분포되면 1등은 3명이며, 2등은 2명이며 3등은 5명이 되어 98점이 3등을 한 점수가 됩니다.

//입력설명
//첫 번째 줄에 자연수 N(1 <= N <= 100)이 주어집니다.
//두 번째 줄에 N개의 수학성적 점수가 공백을 사이에 두고 입력됩니다.수학성적 점수는 100점 만점 기준으로 입력됩니다.

//출력설명
//3등을 한 점수를 출력합니다.

//입력 예제 : 7
//80 96 75 82 96 92 100

//출력 예제 : 92

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//int main()
//{
//	int n, a[101], i, j, temp, index, count = 0;
//
//	cin >> n;
//
//	// 배열 입력
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//
//	// 내림차순 정렬
//	for (i = 0; i < n - 1; i++)
//	{
//		index = i;
//
//		for (j = i + 1; j < n; j++)
//		{
//			if (a[j] > a[index])
//				index = j;
//		}
//
//		temp = a[i];
//		a[i] = a[index];
//		a[index] = temp;
//	}
//
//	for (i = 1; i < n; i++)
//	{
//		if (a[i - 1] != a[i])
//			count++;
//		if (count == 2)
//		{
//			cout << a[i] << ' ';
//			break;
//		}
//	}
//	return 0;
//}