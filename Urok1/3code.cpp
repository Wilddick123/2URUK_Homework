#include <iostream>
#include <cmath>

using namespace std;

class Human {
protected:
	string name;
	int age;
public:
	Human(string n, int a) : name(n), age(a) {

	}
	string getName() const {
		return name;
	}
	int getAge() const {
		return age;
	}
};

class Employee : public Human {
private:
	int wage;
public:
	Employee(string n, int a, int w) : wage(w), Human(n, a) { // наследование

	}
	int getWage() const {
		return wage;
	}
	void print() const{
		cout << name << " " << age << " " << wage << endl;
	}
};

class Cat {
private:
	int age;
public:
	Cat(int a) : age(a) {}
	friend void resetAge(Cat& cat); // подружили класс с функцией и теперь имеет приватный досутп
	int getAge() const {
		return age;
	}
};


void resetAge(Cat& cat) {
	cat.age = 0;
}


int main()
{
	/*
	Employee ivan("Ivan", 30, 50000);
	cout << ivan.getName() << endl;
	cout << ivan.getWage() << endl;
	ivan.print();
	*/

	Cat cat(54);
	cout << cat.getAge() << endl;
}