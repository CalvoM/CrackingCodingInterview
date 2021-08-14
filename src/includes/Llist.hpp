#ifndef LLIST_H_
#define LLIST_H_
class Node{
public:
    Node(int val):val(val),next(nullptr),prev(nullptr){}
    int val;
    Node *next;
    Node *prev;
};

class LList{
public:
    LList();
    void append(int val);
    unsigned int size() const;
private:
    Node *head;
    Node *tail;
    unsigned int count;
};
#endif