#include<string>
#include <cstdarg> 
#include<iostream>
#include "/home/genesis49/Documents/lin/Linux/include/myutils.h"
using namespace std;
int vsum(int num,...){
va_list valist;
int sum=0,i;
va_start(valist,num);
for(i=0;i<num;i++)
	sum+=va_arg(valist,int);
va_end(valist);
return sum;

}

