#include "../includes/Llist.hpp"

LList::LList(){
    this->head = nullptr;
    this->tail = nullptr;
    this->count = 0;
}

void LList::append(int val){
    if(this->head == nullptr){
        this->head = new Node(val);
        this->tail = this->head;
    }else{
        Node *n = this->head;
        while(n->next != nullptr) n= n->next;
        n->next = new Node(val); 
        this->tail = n->next;
    }
    this->count++;
}

unsigned int LList::size() const{
    return this->count;
}