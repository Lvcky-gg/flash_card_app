
#include "./search_directories.h"
#include <stdio.h>
#include <string.h>
int make_path(char *directory) {
  char path[100];
  printf("Please input name of deck: ");
  // printf("%s\n", directory);
  scanf("%s", path);

  char path_two[150];
  path_two[0] = '\0';

  printf("..\n");
  strncat(path_two, directory, sizeof(path_two) - strlen(path_two) - 1);
  strncat(path_two, "/", sizeof(path_two) - strlen(path_two) - 1);
  strncat(path_two, path, sizeof(path_two) - strlen(path_two) - 1);
  strncat(path_two, ".csv", sizeof(path_two) - strlen(path_two) - 1);
  printf("%s", path_two);

  return 1;
}
