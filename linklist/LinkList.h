#ifndef LINKLIST_H
#define LINKLIST_H

#include "Node.h"

class LinkList
{
private:
    Node *head;
    int count;

public:
    LinkList();
    ~LinkList();

    int getCount();
    bool isEmpty();
    bool hasOneNode();
    void displayAll();

    void addFront(dataType elem);
    void addRear(dataType elem);


    void deleteFront();
    void deleteRear();
};

#endif