#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

#include "Time.h"

int main(){
    struct Time t1,t2,t3;
    cout<<"t1 ";
    getTime(t1);
    cout<<"t2 ";
    getTime(t2);
    t3=subtract(t2,t1);
    display(t3);
}
