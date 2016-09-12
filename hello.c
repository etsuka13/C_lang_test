/*
// hello.c
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;
  
  printf("Hello! C-lang Test!");
  printf("\n");
  
  for ( i = 0; i < 100; i++)
  {
    printf("%d " ,i );
  } //for
  
  printf("\n");
  printf("Return ---");
  printf("\n");

  while(i = 0)
  {
    printf("%d " ,i );
    i--;
  } //while
  
  printf("\n");
  
  printf("OK! End");
  printf("\n");
  
  return 0;

} //main
