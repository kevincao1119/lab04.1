#include <stdio.h>
#include "ifttt.h"

int main(int argc, char *argv[])
{


  printf("Trying to connect to server\n");
  ifttt("http://red.eecs.yorku.ca:8080/trigger/event/with/key/123", "kevin", "cao", "211532710");
  return 0;
}
