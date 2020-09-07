#include <iostream>
using namespace std;

enum InventoryItem {
    ITEM_SWORD,
    ITEM_SHIELD,
    ITEM_ARMOR,
    ITEM_POWERUP
};

const char* getItem(InventoryItem x) {
    if (x == ITEM_ARMOR) {
        return "armor";
    } 
    else if (x == ITEM_POWERUP) {
        return "powerup";
    } 
    else if (x == ITEM_SHIELD) {
        return "shield";
    } 
    else if (x == ITEM_SWORD) {
        return "sword";
    } 
    else {
        return "dude what";
    }
}


int main() {
    InventoryItem inHand1(ITEM_ARMOR), inHand2(ITEM_SHIELD);
    cout << "You are carrying some " << getItem(inHand1) << " and some " << getItem(inHand2) << endl;
return 0;
}
