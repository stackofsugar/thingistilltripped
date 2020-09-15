#include <iostream>
using namespace std;

class Stats{
    private:
        double speed, strength, powerup;
    public:
        Stats(double, double, double);
        void overwritePowerup(double);
        double getFinalResult();
        Stats operator+(Stats&);
};

Stats::Stats(double x = 0, double y = 0, double z = 0){ 
    speed = x; strength = y; powerup = z;
}
void Stats::overwritePowerup(double x){
    powerup = x;
}
double Stats::getFinalResult(){
    return (speed + strength) * powerup;
}
Stats Stats::operator+(Stats& other){
    Stats STAT;
    STAT.speed = speed + other.speed;
    STAT.strength = strength + other.strength;
    STAT.powerup = powerup * other.powerup;
    return STAT;
}

int main() {
    Stats Stat1(20, 15, 1.35), Stat2(41, 18, 0.5);
    Stats Stat3 = Stat1 + Stat2;
    cout << "The final result is: " << Stat3.getFinalResult() << endl;

    return 0;
}