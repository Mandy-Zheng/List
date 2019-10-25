#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct node{int i ;struct node *next;};
void print_list(struct node *p){
  printf("[");
  struct node *temp=p;
  while (temp!=NULL) {
    if (temp==p){
      printf("%d",temp->i);
    }
    printf(", %d",temp->i);
    temp=temp->next;
  }
  printf("]\n");
}
struct node * insert_front(struct node *p, int i){
  struct node *pnew;
  pnew=malloc(sizeof(int)+sizeof(struct node *));
  pnew->i=i;
  pnew->next=p;
  return pnew;
}
struct node * free_list(struct node* p){
  struct node* sub;
  while (p!=NULL) {
    sub=p;
    printf("freeing %d\n", sub->i);
    p=p->next;
    free(sub);
  }
  return p;
}

struct node * remove_list(struct node *front, int data){
  struct node *delete=front;
  struct node *reconnect;
  if(delete->i==data&&delete!=NULL){
    front=front->next;
    free(delete);
    return front;
  }
  while (delete!=NULL && delete->i!=data) {
    reconnect=delete;
    delete=delete->next;
  }
  if(reconnect==NULL){
    front=front->next;
  }else{
    printf("%p\n",reconnect );
    printf("%p\n",delete);
    reconnect->next=delete->next;
  }
  free(delete);
  return front;
}
