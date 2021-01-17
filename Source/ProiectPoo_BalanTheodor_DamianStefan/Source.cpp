#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	try {

	}
	catch (exception* e) {
		cout << e->what() << endl;
	}
}