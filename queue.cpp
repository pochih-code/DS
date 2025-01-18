struct queue{
    int arr[MAX_SIZE], head = 0, tail = 0 ;
    // Àô§Îµ²ºc
    int next(int x){
        return (x + 1) % MAX_SIZE ;
    }
    // push()
    void push(int x){
        arr[tail] = x ;
        tail = next(tail) ;
    }
    // pop()
    int pop(){
        int ret = arr[head] ;
        head = next(head) ;
        return ret ;
    }
    // front()
    int front(){
        return arr[head] ;
    }
    // size()
    unsigned size(){
        return (tail - head + MAX_SIZE) % MAX_SIZE ;
    }
} ;
