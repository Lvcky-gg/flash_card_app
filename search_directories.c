

#include <stdbool.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
bool check_if_directory(char *path) {
  int ret = 0;
  ret = mkdir(path, 0777);
  if (ret == 0) {
    printf("Directory created successfully\n");
    return true;
  } else {
    printf("Unable to create directory %s\n", path);
  }
  return false;
}
