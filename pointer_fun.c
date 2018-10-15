/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2 AHIF
 * ---------------------------------------------------------
 * Exercise Number: 4
 * Title:			Pointer Fun
 * Author:			Emina Sljivic
 * ----------------------------------------------------------
 * Description:
 * We should write two funtions. One who prints an interger and
 * a pointer the other fuctions should change the value of the
 * interger and pointer.
 * ----------------------------------------------------------
 */
 #include <stdio.h>

void print_integers(int int_value, int* int_pointer) {
  printf("Got an integer value %d and an address to an integer with value %d\n",int_value,*int_pointer);
}

void change_intergers(int int_value, int* int_pointer){
  int_value=4;
  *int_pointer=int_value;
}

int main(int argc, char const *argv[]) {
  int int_value = 5;
  int* int_pointer = &int_value;

  print_integers(int_value,int_pointer);
  change_intergers(int_value,int_pointer);
  print_integers(int_value,int_pointer);
  return 0;
}
