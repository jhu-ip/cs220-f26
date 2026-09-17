#include <stdio.h>

int main(void) {

  // Question 6
  for (int i = 100; i > 0; i -= 20)
  switch (i % 3) {
    case 1: printf("%d ", i);
    case 2: printf("== %2d\n", i); break;
    default: printf("%03d ", i); break;
  }

  // generates warning about case 1 fall-through statement

  // output:
  // 100 == 100
  // == 80
  // 060 40 == 40
  // == 20

  //  printf("%d\n", i);  // compiler error

  // Question 9
  int num = 6;
  if ( num = 24 / 3 && 'c' > 'D' || ++num) printf("first");
  else printf("second");

  // generates warning about use of assignment w/o parentheses
  
  // output: first

  printf("\n%d\n", num); // output: 1
  
  return 0;

}
