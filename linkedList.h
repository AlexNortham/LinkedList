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