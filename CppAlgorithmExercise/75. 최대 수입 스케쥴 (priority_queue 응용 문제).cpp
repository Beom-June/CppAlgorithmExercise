/*
���� 75. �ִ� ���� ������(priority_queue ���빮��)
������ ������ �������̴�.N���� ������� ���� ��û�� �ؿԴ�.�� ����� D�� �ȿ� �ͼ� ������ �� �ָ� M��ŭ�� �����Ḧ �ֱ�� �ߴ�.
�� ����� ��û�� D�� M�� �������� ���� ���� ���� �� �� �ֵ��� ���� �������� ¥�� �Ѵ�.
�� ������ Ư���� ������ �Ϸ翡 �ϳ��� ��������� ������ �� �� �ִ�.

�� �Է¼���
ù ��° �ٿ� �ڿ��� N(1 <= N <= 10, 000)�� �־�����, ���� N���� �ٿ� M(1 <= M <= 10, 000)��
D(1 <= D <= 10, 000)�� ���ʷ� �־�����.
�� ��¼���
ù ��° �ٿ� �ִ�� �� �� �ִ� ������ ����Ѵ�.

�� �Է¿��� 1
6
50 2
20 1
40 2
60 3
30 3
30 1
�� ��¿��� 1
150
*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

/*
struct Data {
	int money;
	int when;
	// ������
	Data(int a, int b)
	{
		money = a;
		when = b;
	}
	// ������ -> ����
	bool operator<(const Data& b)const
	{
		return when > b.when;			// ���� ���� ū ������ ����
	}
};
int main()
{
	int n, j, a, b, res = 0, max = -2147000000;
	vector<Data> T;
	priority_queue<int> pQ;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		T.push_back(Data(a, b));

		// ��¥�߿� ���� ū ���� ã��
		if (b > max)
			max = b;
	}

	sort(T.begin(), T.end());

	j = 0;

	// �����ϴ� ��¥
	for (int i = max; i >= 1; i--)
	{
		for (j; j < n; j++)
		{
			// �������� ��¥�� i ���� ������ ����
			if (T[j].when < i)
				break;
			pQ.push(T[j].money);
		}
		if (!pQ.empty())
		{
			res += pQ.top();
			pQ.pop();
		}
	}
	cout << res;
	return 0;
}
*/