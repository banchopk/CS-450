#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
mutex mtx;

void countUp() {
    for (int i = 0; i <= 20; i++) {
        mtx.lock();
        cout << "Counting Up: " << i << endl;
        mtx.unlock();
    }
}
void countDown() {
    for (int i = 20; i >= 0; i--) {
        mtx.lock();
        cout << "Counting Down: " << i << endl;
        mtx.unlock();
    }
}
int main() {
    thread t1(countUp);
    t1.join();

    thread t2(countDown);
    t2.join();

    cout << "Program Complete." << endl;

    return 0;
}
