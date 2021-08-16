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
    Node *tmp;
    while(cur != nullptr){
        if(elems.find(cur->val) != elems.end()){
            prev->next = cur->next;
            this->count--;
            tmp = cur;
            cur = cur->next;
            delete tmp;
        }else{
            elems[cur->val] = true;
            prev = cur;
            cur = cur->next;
        }
    }
    return this->size();
}

Node LList::KthToLast(unsigned int K){
    Node *last = this->head, *before = this->head;
    while(K !=0){
        last = last->next;
        K--;
    } 
    while(last->next != nullptr){
        last = last->next;
        before = before->next;
    }
    return *before;
}

unsigned int LList::size() const{
    return this->count;
}

LList::~LList(){
    Node *tmp = head;
    Node *nxt = head;
    while(tmp != nullptr){
        nxt = tmp->next;
        delete tmp;
        tmp = nxt;
    } 
}