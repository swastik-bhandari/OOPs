#include<iostream>
using namespace std;
class grass {
public:
int minerals;
};
class goat : public grass {
};
class sheep : public grass {
};
class tiger : public goat , public sheep {
};
// compiler gets confused , which data member to call . 
int main ()
{
tiger bangol_tiger ;
bangol_tiger.minerals=0;
return 0;
}
