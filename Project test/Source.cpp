#include <iostream>
using namespace std;


class point {
	int x, y , z;
public:
	point() { x = y = z = 0; }

	void print() {
		cout << x << y << z;
	}
};

class test {

};

int main() {

	point p;
	p.print();

	cout << "vadum";

	return 0;
}