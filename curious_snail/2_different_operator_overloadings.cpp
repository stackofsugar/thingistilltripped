#include<iostream>
using namespace std;

class One {
    private:
        int x, y;
    public:
        One(int, int);
        void printOne();
        One operator++(int);
};

class Two {
    private:
        int x, y;
    public: 
        Two(int, int);
        void printTwo();
        Two operator++(int);
};

One::One(int x, int y){
    this->x = x; this->y = y;
}
void One::printOne(){
    cout << "x = " << this->x << " y = " << this->y << endl;
}
One One::operator++(int){
    x = x+2;
    y = y+2;
    return One (x, y);
}

Two Two::operator++(int){
    x = x+10;
    y = y+10;
    return Two (x, y);
}

void Two::printTwo(){
    cout << "x = " << this->x << " y = " << this->y << endl;
}
Two::Two(int x, int y){
    this->x = x; this->y = y;
}

int main(){
    Two obj1(2, 7);
    One obj2(9, 8);
    obj1.printTwo(); obj2.printOne();
    obj1++; obj2++;
    obj1.printTwo(); obj2.printOne();
}