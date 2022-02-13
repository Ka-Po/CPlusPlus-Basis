#include <iostream>
#include <list>
using namespace std;

class OS{
public:
    int x;
    list<string> ShowName;
};

int main() {
    OS macOS;
    OS windows;
    macOS.x = 2;
    windows.ShowName={"KaPo","Saldina"};
    
    cout  << macOS.x << endl;
    for (string showname : windows.ShowName) {              // C#没有這個for的用法！
        cout << showname <<endl;
    }
};
