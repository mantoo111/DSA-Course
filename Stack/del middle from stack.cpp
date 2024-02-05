#include <bits/stdc++.h>
using namespace std;

void deleteMid(stack<int> &st ,int N){
    int popped_elements = N-st.size();
    if(popped_elements == (N/2)){
        st.pop();
        return;
    }
    int x=st.top();
    st.pop();
    deleteMid(st,N);
    st.push(x);
}

void deleteMidElement(stack<int>& st)
{
    int N = st.size();
    deleteMid(st,N);
    
}

int main()
{
    stack<int> st;
    st.push(6);
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    

    deleteMidElement(st);
    
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}
