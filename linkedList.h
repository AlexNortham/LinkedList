typedef struct nodeData{
    //node data (to be overwritted)

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
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    return new;
}

void freeNode(Node* nodeOut){
    free(nodeOut -> data);
    free(nodeOut);
}

Node addNodeAtHead(Node* head, Node* toadd){
    toAdd->next = head;
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
