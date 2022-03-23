#pragma once
#include "monom.h"
#include "list.h"
#include <string>
using namespace std;

class TPolinom
{
private:
	TList<TMonom> listmonoms; //������ �������
	TList<TMonom> unions(TList<TMonom>& m);//����������� �������� �������
public:
	TPolinom();
	TPolinom(const TPolinom& pol);
	TPolinom(string str);
	double calculation();
	TPolinom& operator=(const TPolinom& pol);
	TPolinom operator-(const TPolinom& pol) const;//�������� �����
	TPolinom operator-() const; //������� �����
	TPolinom operator+(const TPolinom& pol) const;
	TPolinom operator*(const TPolinom& pol) const;
	TPolinom operator*(const double con) const;
	friend ostream& operator<<(ostream& ostr, const TPolinom& pm);
	friend istream& operator>>(istream& in, TPolinom& pm);
};