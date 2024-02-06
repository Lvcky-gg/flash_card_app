

#include <stdbool.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

#include <unistd.h>
bool check_if_directory(char *path) {

  printf("%s", path);
  struct stat st = {0};

  if (stat(path, &st) == -1) {
    mkdir(path, 0700);
    return true;
  }
  return false;
}
