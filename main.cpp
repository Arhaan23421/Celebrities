#include <iostream>
#include "Celebrity.h"
#include <fstream>


using namespace std;

vector<Celebrity> loadfile(string filename)
{
    vector<Celebrity> celebs;
    string temp;
    ifstream file(filename);
    while(getline(file,temp )) {
        int index = temp.find(":");
        Celebrity celeb(temp.substr(0,index), temp.substr(index+1,temp.length()));
        celebs.push_back(celeb);
    }
    return celebs;
}

int main() {
    srand(time(0));
    int score =0;

    chrono:: high_resolution_clock::time_point start = chrono:: high_resolution_clock::now();
    chrono:: high_resolution_clock::time_point end = chrono:: high_resolution_clock::now();

    vector<Celebrity> celebs = loadfile("celebrities.txt");
    int random = rand()%celebs.size();
    Celebrity celeb = celebs[random];
    while(chrono::duration_cast<chrono:: seconds>(end-start).count() <30) {
        string input;
        string clue = celeb.getClue();
        string answer = celeb.getName();
        cout<<clue<<endl << "Enter your guess: ";
        getline(cin, input);
        if(input ==answer) {
            cout<< "correct! "<< endl;
            score++;
            random = rand()%celebs.size();
            celeb = celebs[random];
        }
        else {
            cout<< "Wrong"<<endl;
        }
        end =     chrono:: high_resolution_clock::now();

    }



    cout << "GAME OVER!" <<  endl;
    cout<< "your score is: " << score<<endl;
    return 0;
}
