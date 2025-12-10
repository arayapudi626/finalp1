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

cout << "All airports traffic counts: " << endl;
for (const auto& val : airport){
    cout << val.first << " " << val.second << endl;

}

//Milestone 2:
int max = 0;
for (const auto&val : airport){
    if (val.second > max){
        max = val.second;
    }
}
cout << "Busiest airport(s) with count " << max << ": " << endl;
for (const auto&val : airport){
    if (val.second == max){
        cout << val.first << " " << val.second << endl;
    }
}


    return 0;
}