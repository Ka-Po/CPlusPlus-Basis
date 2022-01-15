#include <iostream>
using namespace std;

int main() {
    
    int number;
    cout << "Number : ";
    cin >> number;
    
    bool isEvenNumber = false;
    for (int i = 2; i < number; i++) {              // 這個時候的for回圈是没有用，但如果改成要Check一個範圍的值，就會用到for回圈。
        if (number % i == 0) {
            isEvenNumber = true ;
            break;
        }
    }
    
    if (isEvenNumber == true) {
        cout << "Even Number"<<endl;
    }else{
        cout<<"Not Even Number"<<endl;
    }
}
