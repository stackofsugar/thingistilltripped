#include <iostream>
using namespace std;

class Box {
    private:
        double breadth;
        double length;
        double height;

    public:
    double getvolume(){
        return length * breadth * height;
    } void setlength(double len){
        length = len;
    } void setbreadth(double bre){
        breadth = bre;
    } void setheight(double hei){
        height = hei;
    } double gbreadth(){
        return breadth;
    } double glength(){
        return length;
    } double gheight(){
        return height;
    }};

int main(){
    double volume = 0.0;
    double a, b, c, d, e, f;

    Box box1; Box box2;

    box1.setlength(8.0);
    box1.setbreadth(7.0);
    box1.setheight(9.0);

    box2.setlength(10.0);
    box2.setbreadth(9.0);
    box2.setheight(2.0);

    volume = box1.gbreadth() * box1.glength() * box1.gheight();
    cout << "The volume of box 1 is: " << volume << endl;
    volume = box2.gbreadth() * box2.glength() * box2.gheight();
    cout << "The volume of box 2 is: " << volume << endl;

return 0;
}