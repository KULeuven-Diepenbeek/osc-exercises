#include <stdlib.h>

int do_stuff() {
	malloc(sizeof(int) * 1000);
}

int main() {
    int* ptr;
    ptr = malloc(sizeof(int) * 1000);
    // we allocated 4000 bytes (since an int is usually 4 bytes)

    //free(ptr);
    return 0;
}