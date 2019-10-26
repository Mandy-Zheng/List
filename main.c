#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "header.h"

int main(int argc, char const *argv[]) {
  struct node *p;
  printf("Current Linked List is Empty:\n");
  printf("Expected: []\n");
  printf("Actual: ");
  print_list(p);
  printf("\n\n");
  printf("Adding Nodes to the Linked List:\n");
  printf("Expected: [900]\n");
  printf("Actual: ");
  p=insert_front(p,900);
  print_list(p);
  printf("\n");
  printf("Expected: [800, 900]\n");
  printf("Actual: ");
  p=insert_front(p,800);
  print_list(p);
  printf("\n");
  printf("Expected: [700, 800, 900]\n");
  printf("Actual: ");
  p=insert_front(p,700);
  print_list(p);
  printf("\n\n");
  p=insert_front(p,39);
  p=insert_front(p,234);
  p=insert_front(p,439);
  p=insert_front(p,91);
  p=insert_front(p,193);
  p=insert_front(p,790);
  printf("Current List: ");
  print_list(p);
  printf("\n");
  printf("Removing Front Node: (790)\n");
  printf("Expected: [193, 91, 439, 234, 39, 700, 800, 900]\n");
  printf("Actual: ");
  p=remove_list(p,790);
  print_list(p);
  printf("\n\n");
  printf("Current List: ");
  print_list(p);
  printf("\n");
  printf("Removing Middle Node: (700)\n");
  printf("Expected: [193, 91, 439, 234, 39, 800, 900]\n");
  printf("Actual: ");
  p=remove_list(p,700);
  print_list(p);
  printf("\n\n");
  printf("Current List: ");
  print_list(p);
  printf("\n");
  printf("Removing End Node: (900)\n");
  printf("Expected: [193, 91, 439, 234, 39, 800]\n");
  printf("Actual: ");
  p=remove_list(p,900);
  print_list(p);
  printf("\n\n");
  printf("Current List: ");
  print_list(p);
  printf("\nFreeing List:\n");
  printf("Expected: []\n");
  printf("Actual: \n");
  p=free_list(p);
  print_list(p);
  printf("\n");
  return 0;
}
