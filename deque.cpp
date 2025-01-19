struct Deque{
    int arr[MAX_SIZE], head = 0, tail = 0 ;
    // circular buffer 下的指標移動
    int next(int x){ return (x + 1) % MAX_SIZE ; }
    int prev(int x){ return (x - 1 + MAX_SIZE) % MAX_SIZE ; }
    
    void push_front(int x){
        head = prev(head) ;
        arr[head] = x ;
    }
    
    void push_back(int x){
        arr[tail] = x ;
        tail = next(tail) ;
    }
    
    int pop_front(){
        int ret = arr[head] ;
        head = next(head) ;
        return ret ;
    }
    
    int pop_back(){
        tail = prev(tail) ;
        return arr[tail] ;
    }
    
    unsigned size(){
        return (tail - head + MAX_SIZE) % MAX_SIZE ;
    }
} ;