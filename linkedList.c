#include <stdio.h>

typedef struct nodeData{
    //node data (to be overwritten)
    int i;
}Data;

typedef struct node
{
    Data* data;
    struct node* next;
}Node;

Node* newNode(Data* data);

Node* addNodeAtHead( Node* head, Node *toadd );

void addNodeAfter( Node* location, Node *toAdd );

Node* deleteNextNode( Node* location );

void freeNode( Node* nodeOut );

void traversal(Node* node);

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
