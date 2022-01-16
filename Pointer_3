#include <iostream>
using namespace std;

void showText(void* pt,char type){                                      // void* 指標的泛型型態 //個switch 要用char型態 轉入，用string不可以！
    switch (type) {
        case 'i': cout << *((int*)pt) << endl; break;                   // 要顯示佢出來，就要比返個型態佢：*((int*)pt)
        case 'c': cout << *((char*)pt) << endl; break;
    }
}

int main() {
    int number = 2;
    char word = 'b';
    
    showText(&number, 'i');
    showText(&word, 'c');
};
