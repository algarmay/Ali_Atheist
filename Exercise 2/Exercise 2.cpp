#include <iostream>
using namespace std;
#include <memory>
class myClass {
	int name;
	char ase;
public:
	myClass(int nm, char we) {
		cout << "Constructor is invoked" << endl;
		name = nm;
		ase = we;
	}
	void print() {
		cout << name;
	}
	~myClass() {
		cout << "Destructor is invoked" << endl;
	}
};
int main() {
	{
		shared_ptr<myClass>shpt = make_shared<myClass>();
		int ba = 3;
		char sa = 'j';
		myClass tiago(ba, sa);
		cout << shpt
	}
	system("pause>nul");
}