#include <stdio.h>

int main(void) {
  //printf("Hello World\n");
 // int kk;
  int jj, mm;
  //kk=2;
  int kk=2;
  jj=4;
  mm = kk*jj;
  
  if(kk == 1) {
      //printf("%d 為奇數\n", input);
      printf("Hello World\n");
      printf("%d\n",mm);
      printf("%2d\n",mm);
    
  }
  else {
      //printf("%d 為偶數\n", input);
     printf("Hello\n");
     printf("%d\n",mm);
     printf("%3d\n",mm);

  }
  printf("==================================\n");
  
   for(int i=0; i<5; i++) {
     // printf("Hello\n");
      printf("%d\n",i);
   }

   printf("==================================\n");
  
   for(int i=0; i<5; i++) {
     // printf("Hello\n");
      printf("%d\n",4-i);
   }

   printf("==================================\n");

   for(int i=4; i>=0; i--) {
     // printf("Hello\n");
      printf("%d\n",i);
   }

   printf("==================================\n");

   for(int i=1; i<=9; i++) {
     // printf("Hello\n");
      printf("%d   %d\n",i,10-i);
   }

  
  return 0;
}
