

#include <dirent.h>
#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
int check_if_directory(char *path) {
  printf("Checking for directory...\n");
  if (mkdir(path, 0777) == 0) {
    printf("Directory %s created successfully", path);
    return 0;
  }
  printf("Directory found\n");
  return 1;
}
