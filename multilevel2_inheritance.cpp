#include <iostream>

using namespace std;

class employee
{
};

class programmer : public employee
{
public:
    programmer()
    {
        cout << " and programmer";
    }
};

class datascientist : public programmer
{
public:
    datascientist(int x) : programmer()
    {
        cout << " and datascientist" << x;
    }
};

int main ()
{
    datascientist ram(1);
    return 0;
}

