//
// Created by Arhaan Gupta-Rastogi on 8/30/24.
//

#include "Celebrity.h"
#include <vector>
#include <iostream>


Celebrity::Celebrity(string n, string s)
{
    name = n;
    int start=0;
    for(int i=0;i<s.length();i++) {
        if(s[i] == ',') {
            clues.push_back(s.substr(start,i-start));
            start =i+1;
        }
    }
    clues.push_back(s.substr(start, s.length()-start));
}
 string Celebrity::getName()
{
    return name;
}

 string Celebrity::getClue()
{
    int randnum = rand();
    int index = randnum % clues.size();
    string temp = clues[index];
    clues.erase(clues.begin()+index);
    return temp;
}
