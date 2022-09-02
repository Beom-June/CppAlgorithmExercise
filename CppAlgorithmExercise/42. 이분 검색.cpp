//42. 이분검색
//임의의 N개의 숫자가 입력으로 주어집니다.N개의 수를 오름차순으로 정렬한 다음 N개의 수
//중 한 개의 수인 M이 주어지면 이분검색으로 M이 정렬된 상태에서 몇 번째에 있는지 구하는 프로그램을 작성하세요.

//입력설명
//첫 줄에 한 줄에 자연수 N(3 <= N <= 1, 000, 000)과 M이 주어집니다.
//두 번째 줄에 N개의 수가 공백을 사이에 두고 주어집니다.

//출력설명
//첫 줄에 정렬 후 M의 값의 위치 번호를 출력한다.

//입력 예제
//8 32
//23 87 65 12 57 32 99 81

//출력 예제 : 3

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
int main()
{
	int n, i, key, left = 0, right = 0, mid, temp;

	cin >> n >> key;

	vector<int> a(n);
	for (i = 0; i < n; i++)
	{
		//cin >> a[i];
		cin >> temp;
		a.push_back(temp);
	}

	sort(a.begin(), a.end());									// 처음부터 끝까지 자동정렬 (오름차순) 

	right = n - 1;
	// 교차되기 전 까지
	while (left <= right)
	{
		mid = (left + right) / 2;

		if (a[mid] == key)
		{
			cout << mid + 1;
			return 0;
		}
		else if (a[mid] > key)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return 0;
}
*/