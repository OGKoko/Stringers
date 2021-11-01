#include "Stringers.h"

	Stringers GetMeAString() { return Stringers("another string"); }

	int main() {

		Stringers a("Hello");

		Stringers b(a);

	Stringers c = a + b;
	
	
	cout << "(a) Value is: " << a.getValue() << endl;

	cout << "(b) Value is: " << b.getValue() << endl;

	cout << "(c) Value is: " << c.getValue() << endl;

	cout << "(c) lenght is: " << c.lenght() << endl;

	cout << "If (c) is HelloHello we got 1 else is 0: " << (c == "HelloHello") << endl;

	b.clear();
	cout << "(b) got deleted, his value is now: " << b.getValue() << endl;
	

	a = move(GetMeAString());
	cout << "(a) is now: " << a.getValue();

}