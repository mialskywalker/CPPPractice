#include <iostream>

using namespace std;

class Animal {
public:
	Animal();
	Animal(string name, int age, int numberOfLimbs);

	string Name;
	int Age;
	int NumberOfLimbs;

	void Report();
};

class Dog : public Animal {
public:
	Dog();
	Dog(string name, int age, int numberOfLimbs);

	void Speak();
};

class Corgi : public Dog {

};

int main() {

	Corgi corgi;
	corgi.Speak();

	system("pause");
}

Animal::Animal() {
	cout << "An ANIMAL is born!\n";

	Name = "DEFAULT";
	Age = 2;
	NumberOfLimbs = 4;
}

Animal::Animal(string name, int age, int numberOfLimbs) : Name(name), Age(age), NumberOfLimbs(numberOfLimbs) {
	Report();
}

void Animal::Report() {
	cout << endl;
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "Number of limbs: " << NumberOfLimbs << endl;
	cout << endl;
}

Dog::Dog() {
	cout << "A DOG is born!\n";
}

Dog::Dog(string name, int age, int numberOfLimbs) : Animal(name, age, numberOfLimbs) {}

void Dog::Speak() {
	cout << "Woof!" << endl;
}
