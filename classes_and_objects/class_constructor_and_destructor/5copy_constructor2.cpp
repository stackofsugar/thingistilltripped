#include <iostream>
using namespace std;

class Chef{
    public: 
        Chef (int foo);
        Chef (const Chef &foo2);
        ~Chef();
        int getLength();
    private:
        int *ptr;
};

Chef::Chef (int foo){
    cout << "Constructor allocating memory!" << endl;
    ptr = new int;
    *ptr = foo;
}
Chef::Chef (const Chef &foo2){
    cout << "Copy constructor allocating memory!" << endl;
    ptr = new int;
    *ptr = *foo2.ptr;
}
Chef::~Chef(){
    cout << "K THX BYE!!!" << endl;
    delete ptr;
}
int Chef::getLength(){
    return *ptr;
}
void dispLength(Chef foo2){
    cout << "The length is: " << foo2.getLength() << endl;
}

int main(){
    Chef Arnold(30);     // called copy ctor
    Chef Juna(Arnold);  // also called copy ctor || Possible syntaxes include Chef Juna = Arnold; 

    dispLength(Arnold);
    dispLength(Juna);

    return 0;
}