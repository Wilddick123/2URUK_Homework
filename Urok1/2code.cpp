#include <iostream>
#include <cmath>

using namespace std;





class Date // было struct 
{
private: // 
	// свойства
	int day; // поля(члены класса)
	int month;
	 int year;
	
	static int count;
public: // когда добавили class добавили и это (public спецификатор доступа)
	// создаем статическое поле

	
		
		// создаем конструктор
	
	Date() { // конструктор по-умолчанию(без параметров)
		day = 1;
		month = 1;
		year = 2000;
		count++;
	}
	Date(int d, int m, int y)  { // конструктор с параметрами(добавили чтобы использовать констранты)
		day = d;
		month = m;
		year = y;
		count--;
	}

	~Date() {  // создаем деструктор в нем использует тильда это противоположеность конструктора
		cout << "~Date" << endl;

	}

	// функции внутри класса это методы
	void print() const{ // добавили чтобы метод работал с константами (такие методы не должны изменять значения)
		cout << day << "." << month << "." << year << endl;
	}
	// три функции внизу это сеттеры
	Date& setDay(int day) { // void setDay(Date* const this, ind d) {
		this->day = day; // слово this это скрытый указатель на объект для которого был вызван метод
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
	void print1() const; // реализация метода вне класса
};

void Date::print1() const { // вынесенная реализация метода
	cout << day << "." << month << "." << year << endl;
}
int Date::count = 0; // инициализация статической переменной
int main()
{


}