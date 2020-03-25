#include <stdio.h>

int age;
void whats_my_age() {
    age = 30;
}

int main() {
    whats_my_age();
    printf("%d\n", age);
}