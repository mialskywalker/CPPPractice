#include <iostream>

using namespace std;

class Object {
public:
	virtual void BeginPlay() {
		cout << "Object BeginPlay() called.\n";
	}
};

class Actor : public Object {
public:
	virtual void BeginPlay() override {
		cout << "Actor BeginPlay() called.\n";
	}
};


class Pawn : public Actor {
public:
	virtual void BeginPlay() override {
		cout << "Pawn BeginPlay() called.\n";
	}
};

int main() {
	Object* obj = new Object;
	obj->BeginPlay();

	Actor* act = new Actor;
	act->BeginPlay();

	Pawn* pwn = new Pawn;
	pwn->BeginPlay();

	delete obj;
	delete act;
	delete pwn;
	system("pause");
}