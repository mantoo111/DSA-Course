// Implement Queue using Stacks
#include<iostream>
#include<stack>
using namespace std;

class QueueUsingStack{
    stack<int> s1;
    stack<int> s2;
public:

    void push(int n){      
        s1.push(n);
    }
    
    int pop(){            
        if(s1.empty() && s2.empty()){ 
            cout<<"Empty Queue ";
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
            }
        }
        int topValue=s2.top();
        s2.pop();
        return topValue;

    }

    bool empty(){ 
        if(s1.empty() && s2.empty()){
            return true;
        }
        return false;
    }


};

int main(){

    QueueUsingStack q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    cout<<q.pop()<<endl;

    q.push(5);

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    

}
