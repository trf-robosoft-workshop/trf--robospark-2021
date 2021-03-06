#include<bits/stdc++.h>
using namespace std;
void reverseQueue(queue<int> &queue) {
    int n = queue.size();

    stack<int> st;
    // Remove all the elements from queue and push them to stack
    for (int i = 0; i < n; i++) {
        int curr = queue.front();
        queue.pop();
        st.push(curr);
    }

    // Pop out elements from the stack and push them back to queue
    for (int i = 0; i < n; i++) {
        int curr = st.top();
        st.pop();
        queue.push(curr);
    }

    // Print the reversed queue
    for (int i = 0; i < n; i++) {
        int curr = queue.front();
        queue.pop();
        cout<<curr<<" ";
        queue.push(curr);
    }
    cout<<endl;
}
int main() {
    // Example 1
    queue<int> q1;
    int k1 = 3;
    q1.push(10);
    q1.push(8);
    q1.push(4);
    q1.push(23);
    reverseQueue(q1);
    // Example 2
    queue<int> q2;
    int k2 = 2;
    q2.push(11);
    q2.push(98);
    q2.push(31);
    q2.push(42);
    q2.push(73);
    q2.push(6);
    reverseQueue(q2);
}
