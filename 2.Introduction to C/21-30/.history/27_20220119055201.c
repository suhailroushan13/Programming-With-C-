#include <stdio.h>
int main() {
  int a;
  float f;
  printf("Enter int value :");
  scanf("%d", &a);
 f = (float)a;
  printf("The Float value is %f",(float)a);
  printf("The Float value is %f", a);

  return 0;
}