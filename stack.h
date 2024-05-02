#pragma once

#define MAX_SIZE 20

template <typename T> //string or int

class stack{
    private:
        T data[MAX_SIZE]; //data array of max 20
        int size; //size determines how many elements there are. 
    public: 
        //empty constructor has size 0
        stack(){
            size = 0;
        }
        //add new element to stack (could be string or int)
        void push(const T& val){
            if (size == MAX_SIZE){
                throw std::overflow_error("Called push on full stack.");
            }
            data[size] = val;
            size++;
        }
        //remove last element in the stack
        void pop(){
            if (empty()){
                throw std::out_of_range("Called pop on empty stack.");
            }
            size--;
        }
        //remove the last two elements from the stack
        void pop_two(){
            if (empty()){
                throw std::out_of_range("Called pop_two on empty stack.");
            }
            else if (size == 1){
                throw std::out_of_range("Called pop_two on a stack of size 1.");
            }
            size-=2;
        }
        //return the last element in the stack
        T top() const{
            if (empty()){
                throw std::underflow_error("Called top on empty stack.");
            }
            return data[size-1];
        }
        //return true if the stack is empty
        bool empty() const{
            //data is empty if size is 0
            return size == 0;
        }
};