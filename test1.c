#include <stdio.h>

int is_negative(int i);
int max(int a, int b, int c);
void print_random_letter();
int count_tens(int A[], int size);
void capitalize_e(char s[]);

int main(int argc, char *argv[]) {
  int i, x, y, z;
  int array[] = {43, -10, 9, 10, 0, 10, 0, 1, 10, 10, 5};
  char s[] = "The elephant in the room.";
  i = 7;
  if (is_negative(i))
    printf("%d is negative.\n", i);
  else
    printf("%d is not negative.\n", i);
  i = -1;
  if (is_negative(i))
    printf("%d is negative.\n", i);
  else
    printf("%d is not negative.\n", i);

  x = 4;
  y = 9;
  z = -3;
  i = max(x,y,z);
  printf("Max of %d, %d, and %d is: %d\n", x, y, z, i);

  x = 4;
  y = 4;
  z = -3;
  i = max(x,y,z);
  printf("Max of %d, %d, and %d is: %d\n", x, y, z, i);

  x = 4;
  y = 9;
  z = 4;
  i = max(x,y,z);
  printf("Max of %d, %d, and %d is: %d\n", x, y, z, i);

  x = 4;
  y = 9;
  z = 9;
  i = max(x,y,z);
  printf("Max of %d, %d, and %d is: %d\n", x, y, z, i);

  printf("Printing 4 random letters.\n");
  for(i = 0; i < 4; i++)
    print_random_letter();

  printf("Counting tens.  There should be 4:  %d\n", count_tens(array,11));

  printf("String before capitalizing e's: %s\n", s);
  capitalize_e(s);
  printf("String after capitalizing e's: %s\n", s);
}
  
  

