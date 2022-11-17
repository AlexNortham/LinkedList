#include <stdio.h>
#include "linkedList.h"


Node* newNode(Data* data){
    Node* new = (Node*)malloc(sizeof(Node));
    new->data = data;
    new->next = NULL;

    return new;
}

void freeNode(Node* nodeOut){
    free(nodeOut -> data);
    free(nodeOut);
}

Node* addNodeAtHead(Node* head, Node* toadd){
    toadd->next = head;
    return toadd;
}

void addNodeAfter(Node* location, Node* toadd){
    toadd->next = location->next;
    location->next = toadd;
}

Node* deleteNextNode(Node* location){
    Node* removed = location->next;
    location->next = removed->next; 
}

void traversal(Node* node){
    if(node != NULL){
        //insert operation
        traversal(node->next);
    }
    return;
}
