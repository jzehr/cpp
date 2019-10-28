
// these are the includes, which is basically like 'import' in python
// 'pre-processor directive'
#include <cstdio>

//this stands for standard library
using namespace std;

// all programs enter thru the main () function
int main()
{
  // this is a read only variable, it can NEVER be changed by the progrmam 
  // the variable with ALWAYS remain 7
  const int i = 7;
  // keep in mind you have to declare the TYPE of the variable
  int x = 12;
  // here is an example of a pointer 
  int *ip = &x;
  // this is example of a reference
  int &y = x;
  
  // to declare y as a new int will change what is in memory,
  // which was being pointed to by x AND y, so now the memory will 
  // change what x was pointing at
  y = 42;
  // a reference is NOT a variable, it is just a reference to memory !!
  //
  // use 'const' if you never want a variable to change
  
  puts("hello people");
  printf("the value of *ip is %d\n", *ip);
  printf("the value of x is %d\n", x);
  printf("the value of y is %d\n", y);
 
  
  // array 


  // string
  char s[] = "just something";
  printf("string is: %s\n", s);
  
  // null terminated string
  char t[] = { 'S','T', 'O', 'P', 0 };
  printf("this is the null string: %s\n", t);
  
  // for loop over the null terminated string we made 
  for(int i =0; t[i] !=0; ++i)
  { 
    printf("the char is: %c\n", t[i]);
  }

  // conditional value is either 0 (false) or 1(non-zero) (true) 
  return 0;
}



