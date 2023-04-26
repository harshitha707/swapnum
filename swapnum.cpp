#include<bits/stdc++.h>
using namespace std;

void swapNum(int& x, int& y){
        int z = x;
        x = y;
        y = z;
}

int main() {
  int firstnum = 10;
  int secondnum = 20;

  cout << "Before Swapping x= " << firstnum << " and y= " <<           secondnum << "\n";

    //after swap
  swapNum(firstnum, secondnum);
  cout << "After swapping x=" << firstnum << " and y= "<< secondnum << "\n";

  return 0;
}
