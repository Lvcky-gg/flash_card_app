#include "scan.h"
#include <stdio.h>
int main() {
  int action = 0;

  do {
    action = welcome();
  } while (action != 1 && action != 2);

  switch (action) {
  case 1:
    break;
  case 2:
    break;
  }
  printf("%d", action);
  return 0;
}
