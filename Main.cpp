#include <iostream>
using namespace std;
int main() {
   /* Type your code here. */
   int row;
   int column;
   int arrowHead = 0;
   
   cin >> row;
   cin >> column;
   while(arrowHead <= column){
      cin >> arrowHead;
   }
   for( int i = 0; i < row; i++){
      for(int j = 0; j < column; j++){
         cout << "*";
      }
      cout << endl;
   }
   for(int k = arrowHead; k > 0; k--){
      for(int l = 0; l < k; l ++){
         cout << "*";
      }
      cout << endl;
   }
   return 0;
}
