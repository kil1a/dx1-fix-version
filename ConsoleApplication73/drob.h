#pragma once
#include <iostream>
using namespace std;
class drob {
	int chisl = rand()%100;
	int znam = rand()%100;
	int numerator{};
	unsigned int denominator{};//знаменатель
public:
	drob() {
		cout << "Здравствуй пользователь, работаем с дробью" << endl;
		cout << "Компьютер выдал для работы такую дробь: " << chisl<< "/" << znam << endl;
	}
	void data_entry(int a, int b) {
		cout << "Введите числитель: "; cin >> numerator;
		a = numerator;
		cout << endl << "Введите знаменатель: "; cin >> denominator;
		b = denominator;
		cout << "Ваша дробь получилась такой: " << a << "/" << b << endl;
	}
	void plus(int a, int b) {
		int rk{}, rt{}, cel{};
		cout << chisl << "/" << znam << " + " << numerator << "/" << denominator<<endl;
		if (denominator != znam) {
			rk = (chisl * denominator) + (numerator * znam);
			rt = denominator * znam;
			cout << "При сложении дроби компьютера и вашей, получилось такая дробь: " << rk << "/" << rt << endl;
			if (rk > rt) {
				cel = rk / rt;
				rk = rk % rt;
				cout << "Или же " << cel << " целых и " << rk << "/" << rt << endl;
			}
		}else 
			cout << "При сложении дроби компьютера и вашей, получилось такая дробь: " << chisl+numerator << "/" << znam << endl;
	}

	void minus(int a, unsigned int b) {
		int f{}, g{};
		cout << "1.Вычесть дробь компьютера из вашей\n2.Вычесть вашу дробь из дроби компьютера" << endl;
		cin >> g;
		if (g == 1 || g == 2) {
			if (g == 1) {
				int rk{}, rt{}, cel{};
				cout << chisl << "/" << znam << " - " << numerator << "/" << denominator << endl;
				if (denominator != znam) {
					rk = (chisl * denominator) - (numerator * znam);
					rt = denominator * znam;
					cout << "При вычетании дроби компьютера из вашей, получилось такая дробь: " << rk << "/" << rt << endl;
					if (rk > rt) {
						cel = rk / rt;
						rk = rk % rt;
						cout << "Или же " << cel << " целых и " << rk << "/" << rt << endl;
					}
				}
				else {
				if(numerator > chisl)cout << "При вычитaнии дроби компьютера из вашей, получилось такая дробь: -" <<  numerator - chisl<< "/" << znam << endl;
				else cout << "При вычитaнии дроби компьютера из вашей, получилось такая дробь: " << chisl - numerator << "/" << znam << endl;
					
				}

			}
			if (g == 2) {
				int rk{}, rt{}, cel{};
				cout << chisl << "/" << znam << " - " <<numerator << "/" << denominator << endl;
				if (znam != denominator) {
					rk = (numerator * znam) +  (chisl * denominator);
					rt = denominator * znam;
					cout << "При вычетании вашей дроби из дроби компьютера, получилось такая дробь: " << rk << "/" << rt << endl;
					if (rk > rt) {
						cel = rk / rt;
						rk = rk % rt;
						cout << "Или же " << cel << " целых и " << rk << "/" << rt << endl;
					}
				}
				else
					if (chisl >  numerator)cout << "При вычитaнии вашей дроби из дроби компьютера, получилось такая дробь: -" << chisl - numerator << "/" << znam << endl;
					else cout << "При вычитaнии вашей дроби из дроби компьютера, получилось такая дробь: " << numerator - chisl << "/" << znam << endl;

			}
		}
		else cout << "Вы ввели число не подходящее пот требование";
	}
	void multiply(int a, unsigned int b) {
		cout << "При умножении дробей, получилось такое число: " << numerator * chisl<<"/"<< denominator* znam << endl;
	}

	void division(int a, unsigned int b) {
		int f{}, g{};
		cout << "1.Делить дробь компьютера на вашу\n2.Делить знаменатель на числитель" << endl;
		cin >> g;
		if (g == 1 || g == 2) {
			if (g == 1) {
				cout << "Такое число получилось при делении дроби компьютера на вашу : " <<chisl*denominator<<"/"<<znam*numerator << endl;
			}
			if (g == 2) {
				cout << "Такое число получилось при делении вашей дроби на дробь компьютера: " << numerator*znam << "/" << chisl * denominator << endl;
			}
		}
		else cout << "Вы ввели число не подходящее пот требование";
	}
};
