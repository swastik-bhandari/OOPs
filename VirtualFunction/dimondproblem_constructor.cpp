//In regular inheritance, C cannot call A directly; it must 
//go through B. In virtual inheritance, the most derived 
//class (here workingStudent) is responsible for calling the constructor of the virtual base class (person). 
//This is why workingStudent can and must call person's constructor directly.
//When you use virtual inheritance, the virtual base class (person) is constructed by the most derived class (workingStudent). The compiler ensures that only one instance of the virtual base class is created, and the most derived class must take responsibility for initializing it.

//This is why workingStudent can (and must) call the person constructor directly:

//Virtual inheritance mandates that the constructor of the virtual base class is called by the most derived class.
//This ensures proper initialization of the virtual base class to avoid multiple instances and inconsistencies.
#include <iostream>
using namespace std;

class person {
protected:
    int age;
public:
    person(int age) {
        this->age = age;
    }

    virtual void display() {
        cout << "The age is " << age << endl;
    }
};

class student : public virtual person {
    int marks;
public:
    student(int marks, int age) : person(age) {
        this->marks = marks;
    }

    void display() override {
        person::display();
        cout << "The marks are " << marks << endl;
    }
};

class employee : public virtual person {
    int salary;
public:
    employee(int salary, int age) : person(age) {
        this->salary = salary;
    }

    void display()  override{
        person::display();
        cout << "The salary is " << salary << endl;
    }
};

class workingStudent : public student, public employee {
    int worktime;
public:
    workingStudent(int worktime, int marks, int salary, int age)
        : person(age), student(marks, age), employee(salary, age) {
        this->worktime = worktime;
    }

    void display() override{
        student::display();
        employee::display();
        cout << "The worktime is " << worktime << endl;
    }
};

int main() {
    workingStudent s(5, 77, 2500, 19);
    s.display();
    cout<<"------------------------------------------"<<endl;
    s.person::display();
    return 0;
}
