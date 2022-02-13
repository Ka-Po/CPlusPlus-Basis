#include <iostream>
using namespace std;

int main() {
    int numberArray[5];
    
    int Sum = 0;
    for (int i=0; i <= 4; i++) {
        cout << "Enter Number " << i+1 << " : " ;
        cin >>numberArray[i];
        Sum += numberArray[i];
    }

    cout << "Sum = " << Sum << endl;
};
