/*
DESCRIPTION:
Given two integers a and b, which can be positive or negative, find the sum of all the integers between and including them and return it. If the two numbers are equal return a or b.

Note: a and b are not ordered!
*/

int get_sum(int a , int b) {
  if(a > b){
    a ^= b;
    b ^= a;
    a ^= b;
  }
  
  int sum = 0;
  int i = a;
  
  while(i <= b){
    sum += i;
    ++i;
  }
    

   return sum;
}
