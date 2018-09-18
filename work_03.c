#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  int randy[10];
  for(int i = 0; i < 10; i++){
    randy[i] = rand();
    printf("%d\n", randy[i]);
  }
  
}
