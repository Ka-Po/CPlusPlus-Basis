#include <iostream>
#include <stack>
using namespace std;

void showStack(stack<int> stack){
    while (!stack.empty()) {
        cout << stack.top() << endl;
        stack.pop();
    }
}

int main() {
                // empty, size, push, pop, top
    stack<int>numberOfStack;
    numberOfStack.push(1);
    numberOfStack.push(2);
    numberOfStack.push(3);
    numberOfStack.pop();                                //  Stack的出口等於入口！
        
    showStack(numberOfStack);
};

// Console的結果：
//  2
//  1
