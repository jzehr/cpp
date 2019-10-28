#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;



int main(){

    ifstream infile;
    infile.open("list.txt");

    if (infile.fail()){
        cerr << "ooooops" << endl;
        exit(1);
    }

    string item;
    int count =0;

    // read file until the end //
    while (!infile.eof()){

        infile >> item;
        count ++;
    }

    infile.close()

    return 0;
}