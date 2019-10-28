#include <iostream>

using namespace std;

// this is called prototyping a function
// just add this at the top if you have written the function below 
void print_something();

int main()
{
    // >,< <=, >=, ==, != 
    if(3 == 3){
      cout << "cats and dogs" << endl;
    }
    print_something();
}

// this is making a new function


// need to declare return type first!!! 
// void will return whatever..
void print_something(){
  cout << "ooo i am txt on the screen" << endl;

}


