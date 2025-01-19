#include <stdio.h>
int main()
{
  int A, B;
  printf("Enter percentage for Subject A: ");
  scanf("%d", &A);
  printf("Enter percentage for Subject B: ");
  scanf("%d", &B);

  if ( A>=55 && B>=45){
    printf("Passed");
  }
  else if (A>45 && B>=55){
    printf("Passed");
  }
  else if( B<45 && A>=65){
    printf("Repeat in B");
  }
  else {
    printf("Failed");
  }
  return 0;
}
