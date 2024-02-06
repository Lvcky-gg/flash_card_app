#include <stdio.h>

int welcome() {
  int val;
  printf("Welcome to LvckyCards! What would you like to do?\n");
  printf("   1: create a deck\n");
  printf("   2: open a deck\n");
  printf("   3: exit\n");
  scanf("%d", &val);

  return val;
}
