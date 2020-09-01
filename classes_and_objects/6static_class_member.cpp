#include <iostream>
using namespace std;

class Chef{
    private:
        int recipe_no, cost;
        static int count;
    public:
        Chef(int, int);              // default constructor
        
        static void getCount_call(); // function to print constructor call count
        int calculate() const {      // function to calculate dish cost
            return recipe_no * cost;
        }
        void dishAbstraction();      // function to print dish cost
};

Chef::Chef(int x, int y){
    recipe_no = x; cost = y;
    count++;
}

void Chef::getCount_call(){
    cout << "The constructor count is: " << count << endl;;
}

void Chef::dishAbstraction(){
    cout << "The overall dish cost is: " << calculate() << endl;
} 

int Chef::count = 0;

int main(){
    Chef Pasta(7,6); Chef Lasagna(7,2); Chef FriedRice(3,1);

    Pasta.dishAbstraction();
    Lasagna.dishAbstraction();
    FriedRice.dishAbstraction(); 

    Chef::getCount_call();

return 0;
}

