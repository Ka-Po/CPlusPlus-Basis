#include <iostream>
using namespace std;

int main() {
    int box = 222;
    int * P1 = &box;            // 位置變數，與變數觀念不同。 等於符號並不代表右方代入左方
    
    cout<<&box<<endl;
    cout<<P1<<endl;
    cout<<*P1<<endl;
    
    cout<<box<<endl;
    *P1 = 111;
    cout<<box<<endl;
}
