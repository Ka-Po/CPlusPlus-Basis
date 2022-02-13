#include <iostream>
using namespace std;

template<typename  T>                   //  要首先宣告泛型的型態！
void Swap(T& a, T& b){                     //   用傳址的& ，所以交換數值後，冇回傳都可以
    T temp = a;
    a=b;
    b=temp;
}

int main() {
    int a=1,b=2;                                    // 當Swap執行後，這個位置的值就會改變！
    cout << a << " - " << b << endl;
    Swap<int>(a, b);
    cout << a << " - " << b << endl;
    
    char c='c',d='d';
    cout << c << " - " << d << endl;
    Swap<char>(c, d);
    cout << c << " - " << d << endl;
    
    
};

// Console的結果：
//1 - 2
//2 - 1
//c - d
//d - c
