#include<bits/stdc++.h>
using namespace std;
struct deque
{
    int size;
    int capacity;
    int front;
    int *arr;
    deque(int c)
        {
            capacity = c;
            size = 0 ;
            arr= new int[capacity];
        }
}
bool isFull(int cap)
    return capacity == cap;
bool isEmpty(int size)
    return size == 0;
int size(){

}
void insertFront(int data) //O(n)
    {
        if(isFull()) return;
        front = (front + capcacity -1) %  capacity;
        arr[front] = data;
        size++;
        
    }
void insertRear(int data)
{
    if(isFull())  return;
    int new_rear =(front + size -1 + 1) % capacity; 
    arr[new_rear ] = x;
    size++;
}
int deleteFront() //O(n)
{
    if(isEmpty()) return -1;
    front = (front + 1 )% capacity;
    size--;
    return arr[front];
}
int deleteRear() {
    if(isEmpty()) return -1;
    size--;
}
int getFront()
{
    if(isEmpty()) return -1;
    return front;
}
int getRear(){
    if(isEmpty())   return -1;
    return (front + size -1 )% capacity; //rear = ((front+size-1) % capacaaity)
}


int main(){

return 0;
}