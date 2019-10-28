#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;


//std::ifstream input("HXB2_prrt.fa");
int main(){
    ifstream hxb2;
    hxb2.open("HXB2_prrt.fa");

    string header;
    string sequence;
    string line;
    vector<pair<string, string> > sequences;

    while( getline (hxb2, line))
    {
        //cout << "line in the file: " << line << endl;
        if (line.rfind(">",0)==0)
        {
            if (!sequence.empty()){
                sequences.push_back(make_pair(header,sequence));
            
            }
            
            header = line;
            sequence.clear();
        }
        else
        {
            sequence += line;
        }
    }

    if (!sequence.empty()){
        sequences.push_back(make_pair(header,sequence));          
    }
    
    hxb2.close();

    vector<string> dogs;

    for (auto const& i: sequences) {
        // this is where we will encrypt the second item to make a vector 
        //cout << i.first << endl << i.second << endl;
        dogs.push_back(i.second);
    }

    for (auto const& i: dogs) {
        // this is where we will encrypt the second item to make a vector 
        //cout << i.first << endl << i.second << endl;
        cout << "within dog: " << i << endl;
    }



    // this way works, lets try a new way //

    /*
    // check for error
    if (input.fail()){
        cerr << " oooooops " << endl;
        exit(1);
    }

    string item; 
    int count = 0;

    while(!input.eof()){
        input >> item;
        cout << item << endl;
        count++;
    }
    */

    return 0;
}
