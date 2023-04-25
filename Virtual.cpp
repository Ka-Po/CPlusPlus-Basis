#include <iostream>
using namespace std;

class OS{
public:
    virtual void CanTyping()=0;                 // 要等於 0 ，才是模版。如果没有0或者用括號括起來，佢的被繼承層，不需要有同名的方法。
//    {
//        cout << "OS can Typing!\n";
//    };
//    virtual void CanDraw(){
//        cout << "OS can Draw!\n";
//    };
};

class Windows:public OS{
public:
    void CanTyping(){
        cout << "Notes can Work!\n";
    }
//    void CanDraw(){
//        cout << "Drawing OK!\n";
//    }
};

int main() {
    
    Windows wds2;
    wds2.CanTyping();
    
    Windows* Wds = new Windows();               //OS* Wds = new Windows(); 相同作用
    Wds->CanTyping();
   // Wds->CanDraw();
};
