#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char password[] = "250382";

int main(int argc, char *argv[])
{
  int stackvar = 5;
  char *buf = (char *)malloc(100);
  char *secret = (char *)malloc(100);

  strcpy(secret, password);

  printf("Crackme! \n");
  printf("Password? ");

  scanf("%s", buf);

  if (!strcmp(buf, secret)) {
    printf("Password OK :)\n");
  } else {
    printf("Invalid Password! %s\n", buf);
  }

  return 0;
}