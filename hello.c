#include <stdio.h>

int main() {
  int x = 12;
  float y = 3.14;
  char* s = "Hello, world!";
  printf("%d\n", x);
  printf("%f\n", y);
  printf("%s\n", s);
  for (int i = 0; i < 5; i++) {
    int product = i * 5;
    printf("%d x 5 = %d\n", i, product);
  }
  return 0;
}
