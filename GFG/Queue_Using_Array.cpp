#include <bits/stdc++.h>
using namespace std;
class myQueue {
    int *arr;
    int front, rear, size, cnt;

public:
    myQueue(int n) {
        // Define Data Structures
        size = n;
        arr = new int[n];
        front = 0;
        rear = -1;
        cnt = 0;
    }
    bool isEmpty() {
        // check if the queue is empty
        return cnt == 0;
    }
    bool isFull() {
        // check if the queue is full
        return cnt == size;
    }
    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if (isFull()) return;

        rear = (rear + 1) % size;
        arr[rear] = x;
        cnt++;
    }
    void dequeue() {
        // Removes the front element of the queue.
        if (isEmpty()) return;

        front = (front + 1) % size;
        cnt--;
    }
    int getFront() {
        // Returns the front element of the queue.
        if (isEmpty()) return -1;
        return arr[front];
    }
    int getRear() {
        // Return the last element of queue
        if (isEmpty()) return -1;
        return arr[rear];
    }
};
int main() {
    return 0;
}