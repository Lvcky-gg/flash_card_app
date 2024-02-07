#include <stdio.h>

int welcome() {
  int val;
  printf("=====================================================\n");
  printf("| Welcome to LvckyCards! What would you like to do? |\n");
  printf("=====================================================\n");
  printf("   1: create a deck\n");
  printf("   2: open a deck\n");
  printf("   3: exit\n");
  scanf("%d", &val);
  if (val == 1 || val == 2 || val == 3) {
    return val;
  }

  return 0;
}
