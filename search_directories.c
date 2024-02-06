

#include <dirent.h>
#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
bool check_if_directory(char *path) {
  printf("Checking for directory...\n");
  DIR *dir = opendir(path);
  if (dir) {
    /* Directory exists. */
    closedir(dir);
    printf("Directory already exists!\n");
    return false;
  } else if (ENOENT == errno) {
    int ret = 0;
    ret = mkdir(path, 0777);
    if (ret == 0) {
      printf("Directory created successfully\n");
      return true;
    } else {
      printf("Unable to create directory %s\n", path);
    }
  }
  return false;
}
