#include <iostream>

using namespace std;

class Item {
public:
	Item() {
		cout << "An item has been created!\n";
	}
	~Item() {
		cout << "An item has been destroyed!\n";
	}
};

void AddToCount() {
	static int count = 0;
	count++;
	cout << count << endl;
}

int main() {

	AddToCount();
	AddToCount();
	{
		static Item item;
	}

	system("pause");
}