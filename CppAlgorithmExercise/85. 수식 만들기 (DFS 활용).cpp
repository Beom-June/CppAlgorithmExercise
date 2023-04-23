/*
문제 85. 수식만들기(삼성 SW역량평가 기출문제 : DFS활용)
길이가 N인 자연수로 이루어진 수열이 주어집니다.수열의 각 항 사이에 끼워넣을 N - 1개의 연산자가 주어집니다.
연산자는 덧셈(+), 뺄셈(-), 곱셈(×), 나눗셈(÷)으로만 이루어져 있습니다.
수열의 순서는 그대로 유지한 채 각 항사이에 N - 1개의 연산자를 적절히 배치하면 다양한 수식이 나옵니다.

예를 들면
수열이 1 2 3 4 5이고 덧셈(+) 1개, 뺄셈(-) 1개, 곱셈(×) 1개, 나눗셈(÷) 1개인 일 때 만들 수 있는 수식은 많은 경우가 존재한다.
그 중 1 + 2 * 3 - 4 / 5와 같이 수식을 만들었다면 수식을 계산하는 결과는 연산자 우선순위를 따지지 않고 맨 앞쪽 연산자부터 차례로 계산한다.수식을 계산한 결과는 1이다.
N길이의 수열과 N - 1개의 연산자가 주어지면 만들 수 있는 수식들 중에서 연산한 결과가 최대인것과 최소인것을 출력하는 프로그램을 작성하세요.

▣ 입력설명
첫째 줄에 수의 개수 N(2 ≤ N ≤ 10)가 주어진다.둘째 줄에 수열이 주어진다.수열의 값은
100까지이다.셋째 줄에는 연산자의 각 개수가 차례대로 덧셈(+) 개수, 뺄셈(-) 개수, 곱셈(×)
개수, 나눗셈(÷) 개수로 주어진다.연산자의 총 개수는 N - 1이다.
▣ 출력설명
첫째 줄에는 최댓값을, 둘째 줄에는 최솟값을 출력한다.

▣ 입력예제 1
3
5 3 8
1 0 1 0
▣ 출력예제 1
64
23
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

/*
int a[20], op[5], n, maxi = -2147000000, mini = 2147000000;

// res -> 첫 번째 숫자를 들고 있음
void DFS(int Level, int res)
{
	if (Level == n)
	{
		if (res > maxi)
			maxi = res;
		if (res < mini)
			mini = res;
	}
	else
	{
		if (op[0] > 0)
		{
			op[0]--;
			DFS(Level + 1, res + a[Level]);
			op[0]++;
		}
		if (op[1] > 0)
		{
			op[1]--;
			DFS(Level + 1, res - a[Level]);
			op[1]++;
		}
		if (op[2] > 0)
		{
			op[2]--;
			DFS(Level + 1, res * a[Level]);
			op[2]++;
		}
		if (op[3] > 0)
		{
			op[3]--;
			DFS(Level + 1, res / a[Level]);
			op[3]++;
		}
	}
}


int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> op[i];
	}

	// 두 번째 숫자부터여서 1
	DFS(1, a[0]);

	cout << maxi << "\n" << mini << "\n";
	return 0;
}
*/