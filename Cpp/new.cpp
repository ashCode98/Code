#include<iostream>
using namespace std;

int sum_of_four_numbers(int a, int b, int c, int d){
  return a+b+c+d;
}

int main(){

  int final_variable = 65;
  int first_variable = 77;
  int second_variable = 88;
  int third_variable = 99;

  int final_answer_to_print = sum_of_four_numbers(final_variable, first_variable, second_variable, third_variable);

  cout << "final answer is: " << final_answer_to_print << endl;

}
