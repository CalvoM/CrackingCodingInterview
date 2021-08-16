#include "../includes/Llist.hpp"
#include <map>

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

unsigned int LList::removeDuplicates(){
    if(this->head == nullptr){
        return 0;
    }
    std::map<int, bool> elems;
    Node *cur = this->head;
    Node *prev = nullptr;
    while(cur != nullptr){
        if(elems.find(cur->val) != elems.end()){
            prev->next = cur->next;
            this->count--;
            cur = cur->next;
        }else{
            elems[cur->val] = true;
            prev = cur;
            cur = cur->next;
        }
    }
    return this->size();
}

unsigned int LList::size() const{
    return this->count;
}