#include<cmath>
#include<iostream>
#include "/home/genesis49/Documents/lin/Linux/include/myutils.h"
using namespace std;
  
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;

}