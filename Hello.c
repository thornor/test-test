#include <stdio.h>
#include "module.h"

int mylen(char*s) {
  int res = 0;
  while (*s++) {
     res++;
  }
  return res;
}

char*s="hello";

int main() {

  /*int a;
  a = 5;
 
  printf("Hello World\n");
  printf("a = %d\n",a);*/
  printf("len = %d\n",mylen(s));
  }
