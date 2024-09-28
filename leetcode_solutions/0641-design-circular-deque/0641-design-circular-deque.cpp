class MyCircularDeque {
private:
    vector<int> data;
    int front;
    int rear;
    int size;
    int capacity;

public:
    MyCircularDeque(int k) : data(k), front(0), rear(0), size(0), capacity(k) {}
    
    bool insertFront(int value) {
        if (isFull()) return false;
        if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front - 1 + capacity) % capacity;
        }
        data[front] = value;
        size++;
        return true;
    }
    
    bool insertLast(int value) {
        if (isFull()) return false;
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }
        data[rear] = value;
        size++;
        return true;
    }
    
    bool deleteFront() {
        if (isEmpty()) return false;
        if (size == 1) {
            front = rear = 0;
        } else {
            front = (front + 1) % capacity;
        }
        size--;
        return true;
    }
    
    bool deleteLast() {
        if (isEmpty()) return false;
        if (size == 1) {
            front = rear = 0;
        } else {
            rear = (rear - 1 + capacity) % capacity;
        }
        size--;
        return true;
    }
    
    int getFront() {
        if (isEmpty()) return -1;
        return data[front];
    }
    
    int getRear() {
        if (isEmpty()) return -1;
        return data[rear];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};