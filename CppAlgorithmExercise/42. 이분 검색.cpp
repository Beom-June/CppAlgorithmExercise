//42. �̺а˻�
//������ N���� ���ڰ� �Է����� �־����ϴ�.N���� ���� ������������ ������ ���� N���� ��
//�� �� ���� ���� M�� �־����� �̺а˻����� M�� ���ĵ� ���¿��� �� ��°�� �ִ��� ���ϴ� ���α׷��� �ۼ��ϼ���.

//�Է¼���
//ù �ٿ� �� �ٿ� �ڿ��� N(3 <= N <= 1, 000, 000)�� M�� �־����ϴ�.
//�� ��° �ٿ� N���� ���� ������ ���̿� �ΰ� �־����ϴ�.

//��¼���
//ù �ٿ� ���� �� M�� ���� ��ġ ��ȣ�� ����Ѵ�.

//�Է� ����
//8 32
//23 87 65 12 57 32 99 81

//��� ���� : 3

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

	sort(a.begin(), a.end());									// ó������ ������ �ڵ����� (��������) 

	right = n - 1;
	// �����Ǳ� �� ����
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