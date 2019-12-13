#ifndef NODE_CPP
#define NODE_CPP

#include <iostream>
#include "Node.h"

Node *Node::getNext()
{
    return nextNode;
}

void Node::setNext(Node* entry)
{
    nextNode = entry;
}

dataType Node::getData()
{
    return data;
}

void Node::setData(dataType entry)
{
    data = entry;
}

void Node::printData()
{
    std::cout << data << "\n";
}


Node::Node() {
    nextNode = NULL;
}

Node::Node(dataType entry) {
    data = entry;
    nextNode = NULL;

}


#endif