#include <stdio.h>

int add(int a, int b) {
    int result  = a + b;
    return result;
}

int main() {
    int mynumber = 10;
    int double_size = add(mynumber, mynumber);

    printf("Hello World %i:\n", double_size);
}
