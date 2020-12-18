#include <stdio.h>
#include <stdlib.h>

struct Tita{
    int data;
    struct Tita *next;
};
typedef struct Tita Tita;
Tita *head = NULL;
int g_list_fill = 0;

void insert(int data, int lnk_pos){
    Tita *objbuf1 = (Tita*) malloc(sizeof(Tita));
    if(objbuf1 == NULL){
        printf("Memori tidak cukup!!! \n");
        return;
    }
    g_list_fill++;
    objbuf1->data = data;
    if(head == NULL){
        head = objbuf1;
        objbuf1->next = NULL;
    }
    else {
        if(lnk_pos != 1){
        Tita *objbuf2 = head;
        for(int i = 1; i < (lnk_pos - 1); i++){
            objbuf2 = objbuf2->next;
        }
        objbuf1->next = objbuf2->next;
        objbuf2->next = objbuf1;
        }
        else {
            objbuf1->next = head;
            head = objbuf1;
        }
    }
}

void print(){
    Tita *objbuf1 = head;
    if(!head){
        printf("List kosong! \n");
    }
    for(int i = 1; objbuf1; i++){
        printf("data %d: %d \n", i, objbuf1->data);
        objbuf1 = objbuf1->next;
    }
}

void delete(int lnk_pos){
    Tita *objbuf1 = head, 
         *objbuf2;
    g_list_fill--;
    if(lnk_pos != 1){
        for(int i = 1; i < (lnk_pos - 1); i++){
            objbuf1 = objbuf1->next;
        }
        objbuf2 = objbuf1->next;
        objbuf1->next = objbuf2->next;
        free(objbuf2);
    }
    else {
        head = head->next;
        free(objbuf1);
    }
}

void push(int data){
    insert(data, (g_list_fill + 1));
}

void pop(){
    delete(g_list_fill);
}

void enqueue(int data){
    insert(data, 1);
}

void dequeue(){
    pop();
}

int main(){
    enqueue(5);
    enqueue(4);
    enqueue(3);
    enqueue(69);
    dequeue();
    print();
}