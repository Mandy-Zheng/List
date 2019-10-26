#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "header.h"

int main(int argc, char const *argv[]) {
  struct node *p;
  printf("Current List is empty:\n");
  printf("Expected: []\n");
  printf("Actual:");
  print_list(p);
  printf("\n" );
  print_list(p);
  p=insert_front(p,900);
  p=insert_front(p,800);
  p=insert_front(p,600);
  printf("%p\n",*p ); //why no address change
  print_list(p);
  p=remove_list(p,600);
  //printf("%p\n", p);
  print_list(p);
  print_list(p);
  p=free_list(p);
  p=NULL;
  print_list(p);
  return 0;
}
