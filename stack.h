#pragma once

#define MAX_SIZE 20
class stack{
    private:
        int data[MAX_SIZE];
        int size;
    public:
        stack();
        void push(T val);
        void pop();
        void pop_two();
        stack top();
        bool empty();
}