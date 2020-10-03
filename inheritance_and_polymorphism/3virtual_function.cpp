#include <iostream>
#include <string>
using namespace std;

class Base {
    public:
        void callBase(){
            cout << "This is coming from base";
        }
        void test(){
            cout << "This is a test";
        }
        virtual void callChild(){
            cout << "This is coming from base";   
        }
};
class Child : public Base{
    public:
        void callBase(){
            cout << "This is coming from child";
        }
        void callChild(){
            cout << "This is coming from child";   
        }
};

int main(){
    Base* ptrbase;
    Child obj1;
    ptrbase = &obj1;

    cout << "I am calling with pointer. \nWithout virtual: "; ptrbase->callBase();
    cout << "\nWith virtual: "; ptrbase->callChild(); cout << endl;

    cout << "I am calling with obj1. \nWithout virtual: "; obj1.callBase();
    cout << "\nWith virtual: "; obj1.callChild(); cout << endl;

    obj1.test(); cout << endl;
}