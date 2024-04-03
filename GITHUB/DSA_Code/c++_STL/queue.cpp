#include<iostream>
#include<queue>
using namespace std;

int main(){
   queue<int> q1;
   q1.push(44);
   q1.push(3);
   q1.push(555);
   queue<int> q2=q1; //we have taken a temporary queue. 
   while(q2.empty()==0){
      cout << q2.front() << " ";//it prints the first element of the queue
      q2.pop(); //it is used to delete first element which is printed already
   }
}
