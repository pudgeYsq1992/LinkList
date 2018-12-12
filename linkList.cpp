#include "stdio.h"
#include <iostream>
#include <termios.h>

using namespace std;
struct LinkedListNode{
    LinkedListNode* nextNode;
    int value;
};

class SinglyLinkedList{
public:
    SinglyLinkedList(){
        headNode.nextNode = NULL;
        headNode.value = 0;
        nodeNumber = 1;
    }
    ~SinglyLinkedList(){

    }
    void addNode(LinkedListNode* node);         // add
    void deleteNode(int index);                 // delete
    void updateNode(int index, int newValue);   // update
    void queryNode(int index);                  // query
    int queryNodeNumber();
    void showAllNodes();
private:
    int nodeNumber;                             // how many nodes SinglyLinkedList has
    LinkedListNode headNode;
};

void SinglyLinkedList::addNode(LinkedListNode* newComingNode){
    int i;
/* find last node in List */
    if(newComingNode != NULL)
    {
        LinkedListNode* lastNode = &headNode;
        LinkedListNode* temp = NULL;
        for(i = 1; i < nodeNumber ; i++)
        {
            temp = lastNode->nextNode;
            lastNode = temp;
        }
/* last node point to New coming node */
        lastNode->nextNode = newComingNode;
        nodeNumber ++;
    }
    else
    {
        cout<<"add Node fail, new coming node Error";
    }
}

void SinglyLinkedList::deleteNode(int index){
    int i;
    LinkedListNode* indexNode = &headNode;
    LinkedListNode* preNode = &headNode;
    LinkedListNode* temp = NULL;

    for(i = 0; i < index-1 ; i++)
    {
        temp = preNode->nextNode;
        preNode = temp;
    }
    for(i = 0; i < index ; i++)
    {
        temp = indexNode->nextNode;
        indexNode = temp;
    }
    preNode->nextNode = indexNode->nextNode;
    indexNode->nextNode =NULL;
    nodeNumber--;
}
void SinglyLinkedList::updateNode(int index, int newValue){
    int i;
    LinkedListNode* indexNode = &headNode;
    LinkedListNode* temp = NULL;
    for(i = 0; i < index ; i++)
    {
        temp = indexNode->nextNode;
        indexNode = temp;
    }
    indexNode->value= newValue;
}
void SinglyLinkedList::queryNode(int index){
    int i;
    LinkedListNode* indexNode = &headNode;
    LinkedListNode* temp = NULL;
    for(i = 0; i < index ; i++)
    {
        temp = indexNode->nextNode;
        indexNode = temp;
    }
    cout << "node " << index << ": " << indexNode->value << endl;
}
int SinglyLinkedList::queryNodeNumber(){
    return nodeNumber;
}
void SinglyLinkedList::showAllNodes(){
    int i;
    LinkedListNode* thisNode = &headNode;
    LinkedListNode* temp = NULL;
    cout << "print out all nodes content in LinkList" << endl;
    cout << "there are " << nodeNumber <<" nodes in link list" << endl;
    for(i = 0; i < nodeNumber ; i++){
        cout << "node " << i << ": " << thisNode->value << endl;
        temp = thisNode->nextNode;
        thisNode = temp;
    }
}


class BayesHandlerBase
{
public:
    void acquireParameter();

private:

};

int main(){


    /*
    printf("Helloworld\n");
    int a;
    cout << "please input int number:";
    cin >> a;
    cout << "Your input number is " << a << endl;
    */
}
