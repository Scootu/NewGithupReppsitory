#include <iostream> 

using namespace std ;
//for multiple *2

int function(int n) { 
  return n*2 ;
}
int main() { 
  cout << "entre you number " <<endl ;
  cin >> int n ; 
   cout <<"the number *2 is" <<function(n)<<endl ;
   
   for(int i = 0 ;i< 100 ; i++) 
       cout << "the number is :" << function(i) <<endl ; 
       
}
  
