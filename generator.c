#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  // This code will generate same sequence of random numbers on every program run
  
  for(int i=0; i<6; i++)
    printf("%d", rand());
  return0;
}  
