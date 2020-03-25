// forward definition
void flow();

void flow() {  // on the stack
    int x = 5; // on the stack
    printf("go!");
    flow();    // keep on going
}

int main() {
    flow();
}