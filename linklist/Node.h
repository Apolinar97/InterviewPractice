#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node;
typedef int dataType;

class Node
{
private:
    Node *nextNode;
    dataType data;

public:
    Node *getNext();
    void setNext(Node* entry);

    dataType getData();
    void setData(dataType entry);

    void printData();


    Node();
    Node(dataType entry);
    //~Node();



};

#endif