#include <stdio.h>
 
int main() {
 
  double weight;
  int x;
 
  printf("Please enter your current earth weight: ");
  scanf("%lf", &weight); //%Lf for long double
 
  printf("\nI have information for the following planets:\n\n");
  printf("1. Mercury\n2. Venus\n3. Mars\n4. Jupiter\n");
  printf("5. Saturn\n6. Uranus\n7. Neptune\n\n");
 
  printf("Which planet are you visiting? ");
  scanf("%d", &x);
 
  switch(x) {
    case 1:
     weight = weight * .38;
      break;
    case 2:
    weight = weight * .91;
    break;
    case 3:
    weight = weight * .38;
    break;
    case 4:
    weight = weight * 2.34;
    break;
    case 5:
    weight = weight * 1.06;
    break;
    case 6:
    weight = weight * .92;
    break;
    case 7:
    weight = weight * 1.19;
    break;
  }
  printf("\nYour weight: %lf\n", weight);
}
