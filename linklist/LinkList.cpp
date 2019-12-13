#ifndef LINKLIST_CPP
#define LINKLIST_CPP

#include "LinkList.h"


LinkList::LinkList() {
    head = NULL;
    count = 0;
}


LinkList::~LinkList() {
    while(!(isEmpty())) {
        deleteFront();
    }
}

bool LinkList::isEmpty() {
    return(count == 0 && head == NULL);
}

bool LinkList::hasOneNode() {
    return (count ==1 && head->getNext() == NULL);
}

int LinkList::getCount() {
    return count;
}

/************************************
 * displayAll() has a time complexity
 * of O(n). Reason being that the
 * method iterates through each node. 
 * ***********************************/

void LinkList::displayAll() {
    
    if(isEmpty()) {
        std::cout<<"List is empty\n";
        return;
    }
    Node* p = head;
    while(p != NULL) {
        p->printData();
        p = p->getNext();

    }
}


/*********************************
Since we are adding to the front
of the link list, the run time
is constant, so it has a runtime
of O(1).
**********************************/
void LinkList::addFront(dataType elem) {
    Node* p = new Node(elem);  
    if(isEmpty()) {
        head = p;
        head->setNext(NULL);
        
        count++;
        return;
    }

    p->setNext(head);
    head = p;
    count++;    
}


//DeleteFront(...) has a time complexity of O(1). Same reasoning as addFront(...).

void LinkList::deleteFront() {
    
    Node* p = new Node();
    
    if(isEmpty())
        return;

    else if(hasOneNode()) {
        p = head;
        head = NULL;
        delete p;
        
        count--;
        
        return;
    }

    else {
        p = head;
        head = head->getNext();
        delete p;
        count--;
    }
}

/*******************************
 * This method has a 
 * time complexity of O(N).
 * The reason being that the whole
 * list must be iterated in order
 * to add to the rear.
 * Best case O(1) is the list is empty
 * to begin with.
 * ****************************/
void LinkList::addRear(dataType entry) {
    if(isEmpty()) {
        addFront(entry);
        return;
    }

    Node* p = head;
    Node* q = new Node(entry);
    
    while(p->getNext() != NULL) {
        p = p->getNext();
    }

    p->setNext(q);
    q->setNext(NULL);
}

//O(N) run time. 
void LinkList::deleteRear() {
    if(isEmpty()) {
        return;
    }
    //O(1)
    else if(hasOneNode()) {
        deleteFront();
        return;
    }
    //O(N).
    else {
        Node* p=head;
        Node* q = new Node();

        while(p->getNext() != NULL) {
            q = p;
            p = p->getNext();
        }

        delete p;
        q->setNext(NULL);
        count--;

    }





}


#endif
