// ���� 20. ���� ���� ��
//A, B �� ����� ���������� ������ �մϴ�.�� N���� ������ �Ͽ� A�� �̱�� A�� ����ϰ�, B�� �̱�� B�� ����մϴ�.��� ��쿡�� D�� ����մϴ�.
//����, ����, ���� ������ 1:����, 2 : ����, 3 : ���� ���ϰڽ��ϴ�.
//���� ��� N = 5�̸�
//ȸ�� 1 2 3 4 5
//A�� ���� 2 3 3 1 3
//B�� ���� 1 1 2 2 3
//���� A B A B D

// �Է� ����
//5
//2 3 3 1 3
//1 1 2 2 3

// ��� ����
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

	// �Ǻ�
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