#include<stdio.h>
#include<conio.h>

void main() {
  int A = 6;
  int *Ast = &A;

  // Printing the value of A
  printf("\n%d", A);

  // Printing the value pointed to by Ast ( value of A)
  printf("\n%d", *Ast);

  // Printing the memory address stored in Ast (address of A)
  printf("\n%d", Ast);
  
  // Printing the memory address stored in Ast (address of A) correct format specifier  
  printf("\n%p", Ast);
  
  // Printing the memory address of Ast itself ( address where Ast is stored) 
  printf("\n%d", &Ast);

  // Printing the memory address of Ast itself (i.e., the address where Ast is stored) - correct format specifier
  printf("\n%p", &Ast);


 
  printf("\n%p", *Ast); // 00000006
}
