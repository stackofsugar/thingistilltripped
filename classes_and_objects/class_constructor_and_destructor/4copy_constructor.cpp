#include <iostream>
using namespace std;

class Chef{
    public: 
        Chef (int foo);
        Chef (const Chef &obj);
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
Chef::Chef (const Chef &obj){
    cout << "Copy constructor allocating memory!" << endl;
    ptr = new int;
    *ptr = *obj.ptr;
}
Chef::~Chef(){
    cout << "K THX BYE!!!" << endl;
    delete ptr;
}
int Chef::getLength(){
    return *ptr;
}
void dispLength(Chef obj){
    cout << "The length is: " << obj.getLength() << endl;
}

int main(){
    Chef Arnold(30);
    dispLength(Arnold);

    return 0;
}