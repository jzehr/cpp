#include <cstddef>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;


int main(){

    int bertha[2][3] = {{1,2,3}, {7,8,9}};
    int doug[2][3] = {{1,5,3}, {7,6,9}};

    for (int row=0; row<2; row++){
        for (int col=0; col<3; col++){

            cout << " bertha: " << bertha[row][col] << " __ " << " doug: " << doug[row][col] << endl;
        }

        cout << endl;
    }
    
}


