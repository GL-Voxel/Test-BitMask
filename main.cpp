#include <iostream>
#include <bitset>
using namespace std;

const unsigned int theLastRegisterMask = (1 << 31);

bool CorrectOrder(unsigned int num) {
	if (num == 0 || num == ~0) //Maximum of int and 0 are ot fitting to the task
		return false;
	for (num; num != 0; (num <<= 1)) {
		if (!(num & theLastRegisterMask))
			return false;
		cout << bitset<32>(num) << endl;
	}
	return true;
}

void main() {
	unsigned int x = 0;
	cout << "Enter number: ";
	cin >> x;
	cout << "Mask: " << bitset<32>(theLastRegisterMask) << endl;
	cout << "Number: " << x << "(" << bitset<32>(x) << ")\n";
	cout << "Result: " << CorrectOrder(x) << endl;
	system("pause");
}