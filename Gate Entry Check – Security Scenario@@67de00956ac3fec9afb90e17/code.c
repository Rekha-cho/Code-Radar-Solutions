// Your code here...
#include<stdio.h>
int gateOpen(int threshold, int entryTimes[], int n){
    for (int i=0; i<n; i++){
        if(entryTimes[i]<=0){
            threshold--;
        }
    }
    if (threshold>0){
        return 0;
    }
    else return 1;
}