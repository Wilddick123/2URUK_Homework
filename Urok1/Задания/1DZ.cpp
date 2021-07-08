#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;


class Power {
private:
	float a;
	float b;
public:
	void SetNum(float Num, float Pow) {
		a = Num;
		b = Pow;
	}
	float Pow(float a, float b) {
		float c = pow(a, b);
		return c;
	}
	void Calculate() {
		cout << Pow(a, b) << endl;
	}
};



int main()
{
	Power P;
	P.SetNum(2,3);
	P.Calculate();
}