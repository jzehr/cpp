#include <iostream>
using namespace std;

/*
int main() {
    try{
        int moms_age = 50;
        int sons_age = 45;

        if (sons_age > moms_age){
            throw 99;
        }
    } catch(int x){
        cout << "son cannot be older than mom, ERROR NUMBER: " << x << endl;
    }
    cout << "done" << endl;
}

*/

int main() {
    try{
        int num1;
        cout << "enter the first number: " << endl;
        cin >> num1;
        
        int num2;
        cout << "enter the second number: " << endl;
        cin >> num2;

        if (num2 ==0){
            throw 0;
        }

    cout << num1/num2 << endl;

    }catch(int x){
        cout << "cant do it!" << endl;

    }

}