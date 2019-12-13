#include <iostream>
#include<cstdlib>
#include<ctime>
#include "LinkList.h"


LinkList populateList(int size);

int main()
{
    std::srand(std::time(0));


    LinkList ll = populateList(10);

    return 0;
}


LinkList populateList(int size) {
    LinkList linklist = LinkList();
    for(int i=0; i<size; i++) {
        linklist.addFront(std::rand() % 100 +1);
    }

    return linklist;
}