#include <iostream>
using namespace std;

class makeDish {
    private:
        int count;
    public:
        friend void getCount(makeDish dish);
        makeDish(int c);
        ~makeDish();
        
};

makeDish::makeDish(int c){
    count = c;
}
makeDish::~makeDish() {}
void getCount(makeDish dishes){
    cout << "The amount of dish is: " << dishes.count << endl;
}

int main(){
    makeDish dish1(20);
    getCount(dish1);
}