#include <iostream>
using namespace std;

class Base {
    protected:
        int a, b;
    public:
        Base(int at, int bt):
            a(at), b(bt) {}
};
class Child : public Base {
    protected:
        int x, y;
    public:
        Child(int xt, int yt, int at, int bt): Base (at, bt) {
            x = xt; y = yt; a = at; b = bt;
        }
        void printAll() {
            cout << x << y << a << b << endl;
        }
};

int main() {
    Child obj(1,2,3,4);
    obj.printAll();

return 0;
}