#include <cstdio>
#include <iostream>

using namespace std;

//class simple way... 
/*
class C1{
    int i = 0;
public:
    void setvalue(int value){i = value;}
    int getvalue(){return i;}
};
*/

//class proper way... 
class C1{
    int i = 0;
public:
    void setvalue(int value);
    int getvalue();
};

void C1::setvalue(int value){
    i = value;
}

int C1::getvalue(){
    return i;
}

// can change this to a call by reference with (int & i)
//void func(int i){
int func(int i){
    //int answer = i*i;
    return i*i;
}


int main()
{
    
    int i = 47;
    
    // class then object //
    C1 o1;

    o1.setvalue(i);
    printf("this is the value %d\n", o1.getvalue());
    
    
    //int x = 7;
    //int y = 42;
    //int *ip = &x;
    
    //printf("the value of x is %d\n", x);
    //printf("the value of y is %d\n", y);
    //printf("the value of *ip is %d\n", *ip);
    //int ans = func(x);
    //printf("the result of the func is %d\n", ans);
    return 0;

}
