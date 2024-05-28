#include<iostream>
using namespace std;

int main(){
    string type1 = "()";
    string type2 = "[]";
    string type3 = "{}";

    string s = "(]";

    string temp;
    temp = "";
    for(int i = 0; i<s.size(); i+=2){
        temp += s[i];
        temp += s[i+1];

//        cout << temp << endl;

        if(temp[i] == type1[i]){
            if(temp[i+1] == type1[i+1]){
                cout << 1 << endl;
            }
        }
        else{
            cout << 0 << endl;
        }

        temp = "";
    }
//    cout << "true";
}