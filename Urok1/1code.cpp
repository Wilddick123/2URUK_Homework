#include <iostream>
#include <cmath>

using namespace std;


class Power {
private:
	float a;
	float b;
public:
	void SetNum(float number,float power){
		a = 2;
		b = 3;
	}
	float Pow(float a, float b) {
		float c = pow(a, b);
		return c;
	}
};

class Time {
	// ���� �� ������� ������������ �� ��-��������� private
	int hour;
	int minute;
public:
	Time() {
		cout << "Time" << endl;
	}
	~Time() {
		cout << "~Time" << endl;
	}
};
class Date // ���� struct 
{
private: // 
	// ��������
	int day; // ����(����� ������)
	int month;
	const int year = 2000;
	Time time; // �������� ������ �� ������� ������
public: // ����� �������� class �������� � ��� (public ������������ �������)
	// ������� �����������
	Date() { // ����������� ��-���������(��� ����������)
		day = 1;
		month = 1;
	//	year = 2000;
	}
	Date(int d, int m, int y): year(y) { // ����������� � �����������(�������� ����� ������������ ����������)
		day = d;
		month = m;
		//year = y;
	}

	~Date() {  // ������� ���������� � ��� ���������� ������ ��� ������������������ ������������
		cout << "~Date" << endl;

	}
	
	// ������� ������ ������ ��� ������
	void print() {
		cout << day << "." << month << "." << year << endl;
	}
	// ��� ������� ����� ��� �������
	void setDay(int d) {
		day = d;
	}
	void setMonth(int m) {
		month= m;
	}
	void setYear(int y) {
	//	year = y;
	}
	int getDay() {
		return day;
	}
	int getMonth() {
		return month;
	}
	int getYear() {
		return year;
	}
};


int main()
{

	int x = 6;
	if (x % 2 == 0) {
		Date today(21, 6, 2021); // ������ (���� �� �������� ���������, �� ����������� ��������� ��-���������)
		today.print();
	}
	cout << x++ << endl;
	// ������ ��������� ��� ������ 
	/*	today.setDay(21);
	today.setMonth(6);
	today.setYear(2021);


	Date birthday;
	birthday.setDay(04);
	birthday.setMonth(10);
	birthday.setYear(1997);
	birthday.print();
*/	//cout << today.getDay() << endl;
}