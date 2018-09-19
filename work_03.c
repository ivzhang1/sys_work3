#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  int randy[10];
  for(int i = 0; i < 10; i++){
    randy[i] = rand();
    //printf("%d\n", randy[i]);
  }
  
  randy[9] = 0;
  printf("Printing out the values of random array: \n\n");
  for(int i = 0; i < 10; i++){
    printf("%d\n", randy[i]);
  }

  int randy_but_back[10];
  int *point_rand = randy_but_back;
  int *point_rand_2 = randy;
  //printf("Printing out the values one by one: \n\n");
  for(int i = 9; i >= 0; i-=1){
    *(point_rand + i) = *(point_rand_2 + (9 - i));
       //printf("%d, %d\n",  *(point_rand + i), i);
  }

  printf("\nPrinting out the values of backwards random array: \n\n");
  for(int i = 0; i < 10; i++){
    printf("%d\n", randy_but_back[i]);
  }  
  
}
