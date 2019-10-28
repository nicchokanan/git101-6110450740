#include <iostream>
#include <string>
using namespace std;

class Hero {
public:
    string name;
    int level;
    // constructor
    Hero(string n, int l){
        name = n;
        level = l;
    }

    string getName() {
        return name;
    }

    int getLevel(){
        return level;
    }
};

