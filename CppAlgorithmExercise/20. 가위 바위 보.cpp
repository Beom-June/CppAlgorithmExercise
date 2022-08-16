// 문제 20. 가위 바위 보
//A, B 두 사람이 가위바위보 게임을 합니다.총 N번의 게임을 하여 A가 이기면 A를 출력하고, B가 이기면 B를 출력합니다.비길 경우에는 D를 출력합니다.
//가위, 바위, 보의 정보는 1:가위, 2 : 바위, 3 : 보로 정하겠습니다.
//예를 들어 N = 5이면
//회수 1 2 3 4 5
//A의 정보 2 3 3 1 3
//B의 정보 1 1 2 2 3
//승자 A B A B D

// 입력 예제
//5
//2 3 3 1 3
//1 1 2 2 3

// 출력 예제
//A
//B
//A
//B
//D

#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int n = 0, i = 0, a[101], b[101];

	cin >> n;

	// a
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	// b
	for (i = 1; i <= n; i++)
	{
		cin >> b[i];
	}

	// 판별
	for (i = 1; i <= n; i++)
	{
		if (a[i] == b[i])
			cout << "D" << endl;
		else if (a[i] == 1 && b[i] == 3)
			cout << "A" << endl;
		else if (a[i] == 2 && b[i] == 1)
			cout << "A" << endl;
		else if (a[i] == 3 && b[i] == 2)
			cout << "A" << endl;
		else
			cout << "B" << endl;
	}
	return 0;
}