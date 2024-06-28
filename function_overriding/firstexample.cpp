#include<iostream>
using namespace std;

class animal {
public:
    void greet(void) {
        cout << "Hello from animal" << endl;
    }
};

class dog : public animal {
public:
    void greet(void) {
        cout << "Hello from dog" << endl;
    }
};

int main() {
    dog d;

    d.greet();           // Calls dog::greet()
    d.animal::greet();   // Calls animal::greet()

    return 0;
}
d.greet() calls the greet method of the dog class because greet is overridden in dog.
d.animal::greet() explicitly calls the greet method of the animal class, bypassing the overridden method in dog.
