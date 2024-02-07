#include "./make_directory.h"
#include "./scan.h"
#include "./search_directories.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
  int action = 0;
  char *build_directory = "./LvckyCards";
  check_if_directory(build_directory);
  do {
    do {
      action = welcome();
    } while (action != 1 && action != 2 && action != 3);

    switch (action) {
    case 1:
      if (make_path(build_directory) == -1) {
        return -1;
      }
      break;
    case 2:
      break;
    case 3:
      break;
    default:
      printf("Error: Invalid input!");
      break;
    }
    system("clear");
  } while (action != 3);
  // printf("%d", action);
  return 0;
}
