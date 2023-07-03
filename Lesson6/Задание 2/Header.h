#ifndef COUNTER_H
#define COUNTER_H

class Counter {
public:
    Counter(); 
    Counter(int initialValue);  
    void increase();  
    void decrease();  
    void reset();  
    int getValue();  

private:
    int value;  
};

#endif
