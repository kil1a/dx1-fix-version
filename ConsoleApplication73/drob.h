#pragma once
#include <iostream>
using namespace std;
class drob {
	int chisl = rand()%100;
	int znam = rand()%100;
	int numerator{};
	unsigned int denominator{};//�����������
public:
	drob() {
		cout << "���������� ������������, �������� � ������" << endl;
		cout << "��������� ����� ��� ������ ����� �����: " << chisl<< "/" << znam << endl;
	}
	void data_entry(int a, int b) {
		cout << "������� ���������: "; cin >> numerator;
		a = numerator;
		cout << endl << "������� �����������: "; cin >> denominator;
		b = denominator;
		cout << "���� ����� ���������� �����: " << a << "/" << b << endl;
	}
	void plus(int a, int b) {
		int rk{}, rt{}, cel{};
		cout << chisl << "/" << znam << " + " << numerator << "/" << denominator<<endl;
		if (denominator != znam) {
			rk = (chisl * denominator) + (numerator * znam);
			rt = denominator * znam;
			cout << "��� �������� ����� ���������� � �����, ���������� ����� �����: " << rk << "/" << rt << endl;
			if (rk > rt) {
				cel = rk / rt;
				rk = rk % rt;
				cout << "��� �� " << cel << " ����� � " << rk << "/" << rt << endl;
			}
		}else 
			cout << "��� �������� ����� ���������� � �����, ���������� ����� �����: " << chisl+numerator << "/" << znam << endl;
	}

	void minus(int a, unsigned int b) {
		int f{}, g{};
		cout << "1.������� ����� ���������� �� �����\n2.������� ���� ����� �� ����� ����������" << endl;
		cin >> g;
		if (g == 1 || g == 2) {
			if (g == 1) {
				int rk{}, rt{}, cel{};
				cout << chisl << "/" << znam << " - " << numerator << "/" << denominator << endl;
				if (denominator != znam) {
					rk = (chisl * denominator) - (numerator * znam);
					rt = denominator * znam;
					cout << "��� ��������� ����� ���������� �� �����, ���������� ����� �����: " << rk << "/" << rt << endl;
					if (rk > rt) {
						cel = rk / rt;
						rk = rk % rt;
						cout << "��� �� " << cel << " ����� � " << rk << "/" << rt << endl;
					}
				}
				else {
				if(numerator > chisl)cout << "��� �����a��� ����� ���������� �� �����, ���������� ����� �����: -" <<  numerator - chisl<< "/" << znam << endl;
				else cout << "��� �����a��� ����� ���������� �� �����, ���������� ����� �����: " << chisl - numerator << "/" << znam << endl;
					
				}

			}
			if (g == 2) {
				int rk{}, rt{}, cel{};
				cout << chisl << "/" << znam << " - " <<numerator << "/" << denominator << endl;
				if (znam != denominator) {
					rk = (numerator * znam) +  (chisl * denominator);
					rt = denominator * znam;
					cout << "��� ��������� ����� ����� �� ����� ����������, ���������� ����� �����: " << rk << "/" << rt << endl;
					if (rk > rt) {
						cel = rk / rt;
						rk = rk % rt;
						cout << "��� �� " << cel << " ����� � " << rk << "/" << rt << endl;
					}
				}
				else
					if (chisl >  numerator)cout << "��� �����a��� ����� ����� �� ����� ����������, ���������� ����� �����: -" << chisl - numerator << "/" << znam << endl;
					else cout << "��� �����a��� ����� ����� �� ����� ����������, ���������� ����� �����: " << numerator - chisl << "/" << znam << endl;

			}
		}
		else cout << "�� ����� ����� �� ���������� ��� ����������";
	}
	void multiply(int a, unsigned int b) {
		cout << "��� ��������� ������, ���������� ����� �����: " << numerator * chisl<<"/"<< denominator* znam << endl;
	}

	void division(int a, unsigned int b) {
		int f{}, g{};
		cout << "1.������ ����� ���������� �� ����\n2.������ ����������� �� ���������" << endl;
		cin >> g;
		if (g == 1 || g == 2) {
			if (g == 1) {
				cout << "����� ����� ���������� ��� ������� ����� ���������� �� ���� : " <<chisl*denominator<<"/"<<znam*numerator << endl;
			}
			if (g == 2) {
				cout << "����� ����� ���������� ��� ������� ����� ����� �� ����� ����������: " << numerator*znam << "/" << chisl * denominator << endl;
			}
		}
		else cout << "�� ����� ����� �� ���������� ��� ����������";
	}
};
