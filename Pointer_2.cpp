#include <iostream>
using namespace std;

class Windows{
public:
    void CanTyping(){
        cout << "Notes can Work!\n";
    }
};


int main() {
    Windows Wds;
    Windows* Pt = &Wds;
    Pt -> CanTyping();                     // 指標引用方法不是用Dot之後選方法，而係用 ->
};
