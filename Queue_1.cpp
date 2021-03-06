#include <iostream>
#include <queue>
using namespace std;

void showQueue(queue<int> queue){
    while (!queue.empty()) {
        cout << queue.front() << endl;
        queue.pop();
    }
    cout << endl;
}

int main() {
                // empty, size, push, pop, front, back                              // Queue與Stack的比較，就是 front,back 與 top 所讀的位置不同！pop出來就不同
    queue<int>numberOfQueue;
    numberOfQueue.push(1);
    numberOfQueue.push(2);
    numberOfQueue.push(3);
    
    cout << "Size is " << numberOfQueue.size() << endl;
    cout << "First number is " << numberOfQueue.front() << endl;
    cout << "Last number is " << numberOfQueue.back() << endl;
    
    cout << "This queue :  " << endl;                                                             //  queue是没有封口！
    showQueue(numberOfQueue);
};

// Console的結果：
//Size is 3
//First number is 1
//Last number is 3
//This queue :
//1
//2
//3
