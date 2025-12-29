#include <iostream>
using namespace std;
int main() {
  // continue
 for(int i=0;i<5;i++){
     cout<<"Hi"<<endl;
     cout<<"Hey"<<endl;
     continue;
     cout<<"Reply"; //this is unreachable due to continue !!
 }
   return 0;
}
