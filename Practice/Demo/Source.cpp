#include <iostream>

using namespace std;

class Dog {
public:
	string Name;
	int Age;
	float Health;

	Dog(string name, int age, float health) {
		Name = name;
		Age = age;
		Health = health;
	}



	void Bark() {
		cout << "Woof!" << endl;
	}
};

int main() {
	
	Dog dog = Dog("Vasil", 25, 1);

	cout << dog.Name << ' ' << dog.Age << ' ' << dog.Health << endl;

	system("pause");
}

