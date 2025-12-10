#include <iostream>
#include <string>
#include <map>
#include <fstream>

using namespace std;

int main(){
//Milestone 1:
    map<string, int> airport;
    ifstream fin("210-final-1-FA25.txt");
    if (!fin) {
        cout << "cannot open file" << endl;
        return 1;
    }

    string origin;
    string dest;
    while (fin >> origin >> dest){
        airport[origin]++;
        airport[dest]++;
    }
    fin.close();

cout << "All airports and their counts sorted naturally: " << endl;




    return 0;
}