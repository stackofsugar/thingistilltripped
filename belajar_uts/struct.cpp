#include <stdio.h>

struct vertex {
    int x, y, z;
};

typedef struct {
    char *name;
    int age;
} student;

int main() {
    struct vertex coords;
    struct vertex coords2 = {10, 20, 30};

    coords.x = 1;
    coords.y = 2;
    coords.z = 3;

    printf("coords  = %d | %d | %d\n",coords.x, coords.y, coords.z);
    printf("coords2 = %d | %d | %d\n",coords2.x, coords2.y, coords2.z);

    student sarah = {"Sarah Ulayya", 18};
    student digno;

    digno.name = "Christopher Digno";
    digno.age = 19;

    printf("coords  = %s | %d\n",sarah.name, sarah.age);
    printf("coords2 = %s | %d\n",digno.name, digno.age);

}