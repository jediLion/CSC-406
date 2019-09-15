#include <stdio.h>

char random_letter();

/***************** FIX THE 5 FUNCTIONS BELOW ************************/
/*
 * IMPORTANT!!!
 * The only functions you may call are printf and random_letter
 */

/*
 * Returns 1 if i is negative and 0 otherwise
 */
int is_negative(int i) {
  if ( i < 0 ) { /*if i is less than zero*/
      return 1; /*return 1*/
  }
  else {
      return 0;
  }
}


/*
 * Returns the maximum value out of a, b, and c
 */
int max(int a, int b, int c) {
  if ( a >= b && a >= c ) {  /*if a is greater than or equal to b and c*/
      return a; /*return a*/
  }
  else if ( b >= a && b >= c ) { /*if b is greater than or equal to a and c*/
      return b; /*return b*/
  }
  else {
      return c;
  }
}


/*
 * Prints a random letter to the screen.
 * You need to fix this one.
 * Assume random_letter returns a random letter
 */
void print_random_letter() {
  char c = random_letter();
  printf("%c\n", c); /*%d is used to display an integer variable
 *%c is for characters
 */
}


/*
 * Returns the number of times the number 10 appears in the
 * array A that that has size slots.
 */
int count_tens(int A[], int size) {
  if (A[0] == 10)
    return 1;
  else
    return 0;
}


void capitalize_e(char s[]) {
/* Modifies s so that all occurrences of 'e'
 * are replaced with 'E'.
 */

}
