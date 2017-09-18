#include<stdio.h>
#include<stdlib.h>

int mult_3_5(){
  int sum = 0;
  int i;
  for(i = 0; i < 1000; i++){
    if(i % 3 == 0 || i % 5 == 0){
      sum+=i;
    }
  }
  printf("The answer to 'Multiples of 3 and 5' is %d\n", sum);
  return sum;
}

int main(){
  mult_3_5();
  return 0;
}
/*

int even_fibs(){
  int a = 1;
  int b = 2;
  int count = 0;
  int sum = 2;
  while(a + b < 4000000){
    if(count % 2 = 0){
      a = a + b;
    }
    if(count % 2 = 1){
      b = a + b
}
  
*/
