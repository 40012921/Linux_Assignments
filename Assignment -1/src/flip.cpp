#include <bits/stdc++.h> 
using namespace std; 
#include "/home/genesis49/Documents/lin/Linux/include/bitmask.h"
int flip(int num) 
{ 
    // calculating number of bits 
    // in the number 
    int x = log2(num) + 1; 
  
    // Inverting the bits one by one 
    for (int i = 0; i < x; i++)  
       num = (num ^ (1 << i));  
   
    return num;
} 
  
