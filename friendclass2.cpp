#include<iostream>
using namespace std;

// Forward declaration of the complex class
class complex;

// Rectangle class
class rectangle {
public:
    // Declare area function
    void area(complex &t); // you cannot define here 
};                          // void area(complex &t) {
                            // cout << "Area of rectangle: " << (t.num1) * (t.num2) << endl;
}                           // if you do so . num1 and num2 are still not declared . so it throws error .
                            //

// Complex class
class complex {
    int num1;
    int num2;
public:
    void set_data(int x, int y) {
        num1 = x;
        num2 = y;
    }
    // Friend function declaration
    friend void rectangle::area(complex &);
};

// Definition of area function
void rectangle::area(complex &t) {
    cout << "Area of rectangle: " << (t.num1) * (t.num2) << endl;
}

// Main function
int main() {
    complex c;
    c.set_data(2, 6);
    rectangle r;
    r.area(c);
    return 0;
}
// here member function of rectangle class (area ) is a friend function of complex class . so , area can access the private members of complex class .
