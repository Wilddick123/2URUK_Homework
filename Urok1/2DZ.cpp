#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;

class RGBA {
private:
	uint8_t m_red;
	uint8_t m_green;
	uint8_t m_blue;
	uint8_t m_alpha;
public:
	RGBA() {
		m_red = 0;
		m_green = 0;
		m_blue = 0;
		m_alpha = 255;
	}
	RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
		m_red = red;
		m_green = green;
		m_blue = blue;
		m_alpha = alpha;

	}
	void Print() {
		cout << "Red: " << m_red << endl;
		cout << "Green: " << m_green << endl;
		cout << "Blue: " << m_blue << endl;
		cout << "Alpha: " << m_alpha << endl;
	}

};


int main()
{
	RGBA RGBA(1, 3, 15, 25);
	RGBA.Print();
}