#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> q;
    q.push_front(1);
    q.push_front(2);
    q.push_front(3);
    q.push_front(4);

    q.pop_front();

    for(auto i: q){
        cout << i << " ";
    }
}
