
#include "./make_directory.h"
#include "./search_directories.h"
#include <stdio.h>
#include <stdlib.h>
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
  make_file(path_two);
  printf("%s has been created!", path_two);

  return 0;
}

int make_file(char *file) {
  FILE *fptr;
  fptr = fopen(file, "w");
  if (fptr == NULL) {
    printf("Error!");
    exit(1);
  }
  fprintf(fptr, "%s", "question,answer");
  fclose(fptr);
  return 0;
}
