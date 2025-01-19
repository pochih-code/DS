struct Node{
    Node *next = nullptr, *prev = nullptr ;
    int data ;
    Node(int x = 0): data(x) {}
} ;

struct linkedlist{
    Node *head = nullptr, *tail = nullptr ;
    int n = 0 ;
    linkedlist(){
        head = new Node ;
        tail = new Node ;
        head -> prev = tail -> next = nullptr ;
        head -> next = tail ;
        tail -> prev = head ;
    }
    Node* insert_after(Node *Node, int data){
        // a <-> c ==> a <-> b <-> c
        Node *a = node ;
        Node *b = new Node(data) ;
        Node *c = node -> next ;
        a -> next = b -> prev = b ;
        b -> prev = a ;
        b -> next = c ;
        n++ ;
        return b ;
    }
    Node* insert_before(Node *node, int data){
        return insert_after(node -> prev, data) ;
    }
    void delete_after(Node *node){
        // a <-> b <-> c ==> a <-> c
        Node *a = node ;
        Node *b = node -> next ;
        Node *c = b -> next -> next ;
        a -> next = c ;
        c -> prev = a ;
        n-- ;
    }
    void delete_before(Node *node){
        delete_after(node -> prev) ;
    }
    Node *front(){
        return head -> next ;
    }
    Node *back(){
        return tail -> prev ;
    }
    unsigned size(){
        return n ;
    }
} ;

