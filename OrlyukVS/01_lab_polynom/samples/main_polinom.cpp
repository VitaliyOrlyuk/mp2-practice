#include "polinom.h"
#include "monom.h"
#include "list.h"
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	TPolinom res;
	int flag = 1, k = 0;
	while (flag == 1)
	{
		cout << "������� ������ �������" << endl;
		string s1;
		cin >> s1;
		TPolinom S1(s1);
		cout << "������� ������ �������" << endl;
		string s2;
		cin >> s2;
		TPolinom S2(s2);
		cout << "�������� ��������" << endl;
		cout << "1) �������� ��������" << endl;
		cout << "2) �������� ���������" << endl;
		cout << "3) �������� ���������" << endl;
		cout << "4) �������� ��������� �� ���������" << endl;
		cout << "5) ���������� ��������" << endl;
		cin >> k;
		switch(k)
		{
		case 1:
		{
			res = S1 + S1;
			cout << res;
			break;
		}
		case 2:
		{
			res = S1 - S2;
			cout << res;
			break;
		}
		case 3:
		{
			res = S1 * S2;
			cout << res;
			break;
		}
		case 4:
		{
			double con;
			cout << "������� �������� ���������" << endl;
			cin >> con;
			res = S1 * con;
			cout << res;
			break;
		}
		case 5:
		{
			res.calculation();
			break;
		}
		default:
			break;
		}
	}
}