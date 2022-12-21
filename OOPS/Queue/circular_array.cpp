#include <iostream>
using namespace std;

class Queue{
    int rear,frint;

    int size ;
    int* arr;

    Queue(int n){
        front = rear = -1;
        size = n;
        arr = new int[size];
    }

    void display()
}