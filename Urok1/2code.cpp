#include <iostream>
#include <cmath>

using namespace std;





class Date // ���� struct 
{
private: // 
	// ��������
	int day; // ����(����� ������)
	int month;
	 int year;
	
	static int count;
public: // ����� �������� class �������� � ��� (public ������������ �������)
	// ������� ����������� ����

	
		
		// ������� �����������
	
	Date() { // ����������� ��-���������(��� ����������)
		day = 1;
		month = 1;
		year = 2000;
		count++;
	}
	Date(int d, int m, int y)  { // ����������� � �����������(�������� ����� ������������ ����������)
		day = d;
		month = m;
		year = y;
		count--;
	}

	~Date() {  // ������� ���������� � ��� ���������� ������ ��� ������������������ ������������
		cout << "~Date" << endl;

	}

	// ������� ������ ������ ��� ������
	void print() const{ // �������� ����� ����� ������� � ����������� (����� ������ �� ������ �������� ��������)
		cout << day << "." << month << "." << year << endl;
	}
	// ��� ������� ����� ��� �������
	Date& setDay(int day) { // void setDay(Date* const this, ind d) {
		this->day = day; // ����� this ��� ������� ��������� �� ������ ��� �������� ��� ������ �����
		return *this;
	}
	Date& setMonth(int month) {
		this->month = month;
		return *this;
	}
	Date& setYear(int year) {
		this->year = year;
		return *this;
	}
	int getDay() const {
		return day;
	}
	int getMonth() const {
		return month;
	}
	int getYear() const {
		return year;
	}
	static int getcount()  {
		return count;
	}
	void print1() const; // ���������� ������ ��� ������
};

void Date::print1() const { // ���������� ���������� ������
	cout << day << "." << month << "." << year << endl;
}
int Date::count = 0; // ������������� ����������� ����������
int main()
{


}