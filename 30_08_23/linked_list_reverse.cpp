#include<iostream>

using namespace std;


class Node{
    int data;
    Node *next;
    public:
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

int main(){

    Node head = Node(5);

}