#include "./make_directory.h"
#include "./scan.h"
#include "./search_directories.h"
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
      make_path(build_directory);
      break;
    case 2:
      break;
    }
    system("clear");
  } while (action != 3);
  // printf("%d", action);
  return 0;
}
