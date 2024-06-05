#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(33);
    st.push(9);
    st.push(27);
    stack<int> temporary = st;

    while(temporary.empty()==0){
        cout << temporary.top() << endl; 
	temporary.pop();
    }
}
