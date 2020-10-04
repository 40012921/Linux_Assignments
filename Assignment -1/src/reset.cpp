#include<cstring>
#include<iostream>
using namespace std;
#include "/home/genesis49/Documents/lin/Linux/include/bitmask.h"




int resetBit(int n, int k) 
{ 
    return (n & (~(1 << (k - 1)))); 
} 

/*
int main() 
{ 
    int n = 5, k = 1,x;
    x=resetBit(n, k);
  
   cout<<n<<" "<<k<<" "<<x;

return 0;
}
*/
