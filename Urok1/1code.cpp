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
	// если не указать спецификатор то по-умолчанию private
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
class Date // было struct 
{
private: // 
	// свойства
	int day; // поля(члены класса)
	int month;
	const int year = 2000;
	Time time; // добавили объект из другого класса
public: // когда добавили class добавили и это (public спецификатор доступа)
	// создаем конструктор
	Date() { // конструктор по-умолчанию(без параметров)
		day = 1;
		month = 1;
	//	year = 2000;
	}
	Date(int d, int m, int y): year(y) { // конструктор с параметрами(добавили чтобы использовать констранты)
		day = d;
		month = m;
		//year = y;
	}

	~Date() {  // создаем деструктор в нем использует тильда это противоположеность конструктора
		cout << "~Date" << endl;

	}
	
	// функции внутри класса это методы
	void print() {
		cout << day << "." << month << "." << year << endl;
	}
	// три функции внизу это сеттеры
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
		Date today(21, 6, 2021); // объект (если не передать параметры, то конструктор выберется по-умолчанию)
		today.print();
	}
	cout << x++ << endl;
	// объект удаляется при помощи 
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