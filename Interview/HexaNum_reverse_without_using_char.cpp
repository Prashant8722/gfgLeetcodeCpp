/* Note:Texas instruments Question
Reverse a hexadecimal number without using the char data type.
Eg- Given 0xABCDE print 0xEDCBA in c++ programming wth algorithms.
*/
/*
#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>

int main() {
    unsigned int input = 0xABCDE; // Given hexadecimal number
    unsigned int reversed = 0; // Variable to store the reversed hexadecimal number

    while (input > 0) {
        reversed = (reversed << 4) | (input & 0xF); // Shift and append the rightmost 4 bits to the reversed number
        input >>= 4; // Shift the input to the right by 4 bits
    }

    std::cout << "Reversed hexadecimal number: 0x" << hex << uppercase<< reversed << std::endl;

    return 0;
}
*/
/*
int revesrseHexa(int num)
{
    int sum = 0;
while(num > 0){
    int rem = num % 16;
    sum = sum * 16 + rem;
    num = num / 16 ;
}
return sum;
}

int main(){
int result =  revesrseHexa(0xABCDE);
cout<<hex<<uppercase<<result << endl;
printf("%X" , result);
return 0;
}

*/

/*
// Reverse Byte of a hexadecimal number:
rev(int n ){
    return (( n >> 24 ) &  0xff) | ((n << 8) & 0xff0000) | ((n >> 8) & 0xff00) | (( n << 24 ) & 0xff000000);
}
int main(){
int n = 0xfedcba;
cout<<hex << n <<" is reversed to "<<rev(n)<<endl;
return 0;
}
*/

/* 
   Write a C program to find out if the underlying 
   architecture is little endian or big endian. 
 */
 
#include <stdio.h>
int main ()
{
  unsigned int x = 0x76543210;
  char *c = (char*) &x;
 
  printf ("*c is: 0x%x\n", *c);
  if (*c == 0x10)
  {
    printf ("Underlying architecture is little endian. \n");
  }
  else
  {
     printf ("Underlying architecture is big endian. \n");
  }

  //cheking value at given address
  unsigned int y = 0x24132416;
  unsigned char *p = (unsigned char *)0x12345558;
  printf("%d Bytes\n", sizeof(y));

    unsigned char *ptr = (unsigned char*)0x12345678;

    printf("Value at address %p: %d\n", ptr, *ptr);


    unsigned int address = 0x12345678;
    unsigned int* ptr1 = (unsigned int*)address;

    unsigned int content = *ptr1;

    printf("Content at address 0x%08x: %u\n", address, content);

  return 0;
}