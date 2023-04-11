/*
문제. 62. 병합정렬
N개이 숫자가 입력되면 오름차순으로 정렬하여 출력하는 프로그램을 작성하세요.
정렬하는 방법은 병합정렬입니다.

▣ 입력설명
첫 번째 줄에 자연수 N(1 <= N <= 100)이 주어집니다.
두 번째 줄에 N개의 자연수가 공백을 사이에 두고 입력됩니다.각 자연수는 정수형 범위 안에
있습니다.
▣ 출력설명
오름차순으로 정렬된 수열을 출력합니다.

▣ 입력예제 1
8
7 6 3 1 5 2 4 8
▣ 출력예제 1
1 2 3 4 5 6 7 8
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
/*
int Data[10], temp[10];			// temp -> 병합

void Divide(int left, int right)
{
	int mid;
	int p1, p2, p3;				// 포인터
	if (left < right)
	{
		mid = (left + right) / 2;
		// 좌측 분할
		Divide(left, mid);
		// 우측 분할
		Divide(mid + 1, right);

		p1 = left;
		p2 = mid + 1;
		p3 = left;

		// 합침. 한 쪽이 끝나면 끝남
		while (p1 <= mid && p2 <= left)
		{
			if (Data[p1] < Data[p2])
				temp[p3++] = Data[p1++];
			else
				temp[p3++] = Data[p2++];
		}

		// 남아 있으면
		while (p1 <= mid)
		{
				temp[p3++] = Data[p1++];
		}
		while (p2 <= right)
		{
			temp[p3++] = Data[p2++];
		}

		// 복사
		for (int i = left; i <= right; i++)
		{
			Data[i] = temp[i];
		}
	}

}

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> Data[i];
	}

	Divide(1, n);
	for (int i = 1; i <= n; i++)
	{
		cout << Data[i];
	}


	return 0;
}
*/