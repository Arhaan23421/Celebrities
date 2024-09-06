//
// Created by Arhaan Gupta-Rastogi on 8/30/24.
//
#include <iostream>
#include <vector>

#ifndef CELEBRITY_H
#define CELEBRITY_H

using namespace std;

class Celebrity {
public:
    string getName();
    string getClue();
    Celebrity (string n, string c);

private:
    vector<string> clues;
    string name;

};



#endif //CELEBRITY_H
