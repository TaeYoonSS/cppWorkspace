#include <iostream>
using namespace std;

class SoSimple {
private :
	int num1;
	mutable int num2; // Const 함수에 예외를 둠
public :
	SoSimple(int n1, int n2) : num1(n1), num2(2) {}
	void ShowSimpleData() const {
		cout << num1 << ", " << num2 << endl;
	}

	void CopyToNum2() const {
		num2 = num1;
	}
};

int main() {
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();

	return 0;
}