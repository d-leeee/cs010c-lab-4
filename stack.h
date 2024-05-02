#pragma once

#define MAX_SIZE 20

template <typename T>
class stack{
    private:
        int data[MAX_SIZE];
        int size;
    public:
        stack(){
            size = 0;
        }
        void push(const T& val){
            if (size == MAX_SIZE){
                throw overflow_error("Called push on full stack.");
            }
            data[size] = val;
        }
        void pop(){
            if (empty()){
                throw out_of_range("Called pop on empty stack.");
            }
            //change size by 1 to remove the last element
            size--;
        }
        void pop_two(){
            if (empty()){
                throw out_of_range("Called pop_two on empty stack.");
            }
            else if (size == 1){
                throw out_of_range("Called pop_two on a stack of size 1.");
            }
            size-=2;
        }
        T top() const{
            if (empty()){
                throw underflow_error("Called top on empty stack.");
            }
            return data[size-1];
        }
        bool empty() const{
            //data is empty if size is 0
            return size == 0;
        }
};