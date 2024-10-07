#include <iostream>
using namespace std;

class Complex {
private:
    int real, img; // real, imaginary

public:
    // Parameterized Constructor
    Complex(int r, int i) : real(r), img(i) {}

    // Assignment operator overload
    Complex& operator=(const Complex& C)
    {
        // Check for self-assignment
        if (this != &C) {
            real = C.real;
            img = C.img;
        }
        return *this;
    }

    // Function to print
    void print() const { cout << real << "+i" << img << endl; }
};

int main()
{
    // Assigning by overloading constructor
    Complex C1(2, 3), C2(4, 6), C(1,1);
  
    cout << "BEFORE OVERLOADING ASSIGNMENT OPERATOR" << endl;
    cout << "C1 complex number: ";
    C1.print();    
    cout << "C2 complex number: ";
    C2.print();     
  
    // Overloading assignment operator to copy values
    C1 = C2=C;
  
    cout << "AFTER OVERLOADING ASSIGNMENT OPERATOR" << endl;
    cout << "C1 complex number: ";
    C1.print();    
    cout << "C2 complex number: ";
    C2.print();
  
    return 0;
}

