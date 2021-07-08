#include <iostream>


using namespace std;

class Person {
protected:
	string name;
	int age;
	string sex;
	int weight;
public: 
	Person (string n, int a, string s, int w) : name(n), age(a), sex(s), weight(w) {

	}

	string getName() const {
		return name;
	}
	int getAge() const {
		return age;
	}
	string getSex() const {
		return sex;
	}
	int getWeight() const {
		return weight;
	}


};

class Student : public Person {
private: 
	int year_study;
	static int counter;


public:
	
	Student(string n, int a, string s, int w, int y) : year_study(y), Person(n, a, s, w) {
		counter++;
	}
	void print() const {
		cout << "Name: ";
		cout << name <<  endl;
		cout << "Age: ";
		cout << age << endl;
		cout << "Sex: ";
		cout << sex << endl;
		cout << "Weight: ";
		cout << weight << endl;
		cout << "Year of study: ";
		cout << year_study << endl;
	}
	
	int getCount() const {
		return counter;
	}
	void printNumSt() const {
		cout << "Number of students: " << getCount() << endl;
	}
};

int Student::counter = 0; // инициализация статической переменной
int main()
{
	
	Student st("ivan", 21, "male", 88, 6);
	Student st1("Dima", 34, "male", 54, 4);
	Student st2("Vika", 25, "female", 42, 3);
	st.print();
	st1.print();
	st.printNumSt();


}