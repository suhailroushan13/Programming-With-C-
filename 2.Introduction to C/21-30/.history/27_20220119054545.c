#include <stdio.h>
int main() {
  float d;
  int a, b, c;
  printf("Enter the float value :");
  scanf("%d", &a);

  d = (float)(a);

  printf("The Int Value now is %d\n", (int)d);
  printf("The Int Value now is %d\n", a);

  return 0;
}