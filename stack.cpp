struct stack{
    int arr[MAX_SIZE], ptr = 0 ;
    // push()
    void push(int x){
        arr[ptr++] = x ;
    }
    // pop()
    void pop(){
        return arr[--ptr] ;
    }
    // top()
    void(){
        return arr[ptr-1] ;
    }
    // size()
    unsigned size(){
        return ptr ;
    }
} ;
