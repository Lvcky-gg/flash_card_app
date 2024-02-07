#include <stdio.h>
static char val[100];
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

char *deck_menu() {
  printf("========================================\n");
  printf("| Which deck would you like to access? |\n");
  printf("========================================\n");
  printf("Please Input Name of Deck: ");
  scanf("%s", val);
  return val;
}

int deck_select(char *val) {
  int ret_val;
  printf("=========================================\n");
  printf("| Please select an action on %s deck. |\n", val);
  printf("=========================================\n");
  printf("   1. start quiz\n");
  printf("   2. add new question\n");
  printf("   3. delete a question\n");
  printf("   4. modify a question\n");
  scanf("%d", &ret_val);

  return ret_val;
}
