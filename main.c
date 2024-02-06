#include "./make_directory.h"
#include "./scan.h"
#include "./search_directories.h"
#include <stdio.h>
int main() {
  int action = 0;
  char *build_directory = "./LvckyCards";
  check_if_directory(build_directory);

  do {
    action = welcome();
  } while (action != 1 && action != 2);

  switch (action) {
  case 1:
    make_path();
    break;
  case 2:
    break;
  }
  printf("%d", action);
  return 0;
}
