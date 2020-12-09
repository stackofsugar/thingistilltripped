#include <iostream>
#include <memory>
#include <string>
#include <limits>
using namespace std;

void cleanbuf(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
}

template<typename Ty>
Ty input(Ty floor = 0, Ty ceil = numeric_limits<Ty>::max()){
    Ty buffer;
    while(1){
        if(cin >> buffer){
            if(buffer < floor){
                cout << "Your input was too small! Try again: ";
            } else if(buffer > ceil){
                cout << "Your input was too big! Try again: ";
            } else {
                return buffer;
            }
        } else {
            cout << "Invalid input! Please try again: ";
            cleanbuf();
        }
    }
}

enum MainOperations {
    ePrintList = 1,
    eAppendList,
    eInsertBefore,
    eDeleteElem,
    eTerminate
} mainoperation;

class ListNode {
    public:
        string data;
        ListNode* next;
};
ListNode *head = nullptr;
int g_listFillLevel = 0;

void insert(const string &value, int pos_list = -1){
    g_listFillLevel++;
    ListNode *objbuf1 = new(nothrow) ListNode;
    if(!objbuf1){
        cerr << "Unsufficient system resources for memory heap: bad_alloc \n";
        return;
    }
    else {
        objbuf1->data = value;
        objbuf1->next = nullptr;
        if(pos_list == 1){
            objbuf1->next = head;
            head = objbuf1;
            return;
        }
        ListNode *objbuf2 = head;
        if(pos_list != -1){
            for(int i = 1; i < pos_list - 1; i++){
                objbuf2 = objbuf2->next;
            }
            objbuf1->next = objbuf2->next;
            objbuf2->next = objbuf1;
        }
        else {
            if(head){
                while(objbuf2->next){
                    objbuf2 = objbuf2->next;
                }
                objbuf2->next = objbuf1;
            }
            else {
                objbuf1->next = head;
                head = objbuf1;
            }
        }
    }  
}

void print(){
    ListNode *objbuf = head;
    if(head){
        for(int i = 1; objbuf; i++){
            cout << i << ". " << objbuf->data << '\n';
            objbuf = objbuf->next;
        }
    } else {
        cout << "The Linked List is empty \n";
    }
}

void ldelete(int nElement){
    ListNode *objbuf1 = head;
    if(nElement == 1){
        if(head->next){
            head = head->next;
        }
        else {
            head = nullptr;
        }
        delete objbuf1;
        g_listFillLevel--;
    }
    else {
        for(int i = 1; i < nElement - 1; i++){
            objbuf1 = objbuf1->next;
        }
        ListNode* objbuf2 = objbuf1->next;
        objbuf1->next = objbuf2->next;
        delete objbuf2;
        g_listFillLevel--;
    }
}

void memfree(){
    if(head){
        while(g_listFillLevel){
            ldelete(1);
        }
    }
}

int main(){
    cout << "Choose your Linked List operation: \n"
         << "1. Print Linked List \n"
         << "2. Append Linked List \n"
         << "3. Insert before nth element of the Linked List \n"
         << "4. Delete the nth element of the Linked list \n"
         << "5. Exit Program \n";
    string stringbuf;
    int nValue;
    bool isDone = false;

    while(!isDone){
        cout << "Insert your choice: ";
        int choice = input<int>(1,5);

        if(choice == ePrintList){
            cout << "Elements on the Linked List are: \n";
            print();
        }
        else if(choice == eAppendList){
            cout << "Enter a word: ";
            cin >> stringbuf;
            insert(stringbuf);
        }
        else if(choice == eInsertBefore){
            cout << "Enter n: ";
            nValue = input<int>(0, g_listFillLevel);
            cout << "Enter a word: ";
            cin >> stringbuf;
            insert(stringbuf, nValue);
        }
        else if(choice == eDeleteElem){
            cout << "Enter n: ";
            nValue = input<int>(0, g_listFillLevel);
            ldelete(nValue);
        }
        else if(choice == eTerminate){
            memfree();
            isDone = true;
        }
    }
}