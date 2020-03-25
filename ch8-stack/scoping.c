#include <stdio.h>

void* whats_my_age() {
    int age = 30; // I'm being generous here!
}

int main() {
    int* my_age = (int*) whats_my_age();
    age = 5;
    printf("%d\n", *my_age);
}