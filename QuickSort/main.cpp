//
//  main.cpp
//  QuickSort
//
//  Created by Peicheng Wen on 2018/1/12.
//  Copyright © 2018年 Troy University. All rights reserved.
//

#include <iostream>
using namespace std;

int sort(int array[],int start,int end){
    
    int pos = start;
    int key = array[start];
    int i = start;
    int j = end;
    while(i<j){
        while(i<j&&array[j]>=key){
            j--;
        }
        array[i]=array[j];
        while(i<j&&array[i]<=key){
            i++;
        }
        array[j]=array[i];
    }
    pos = i;
    array[i]=key;
    return pos;
}


void quickSort(int array[],int start,int end){
    if(start>=end) return;
    int pos = sort(array,start,end);
    quickSort(array, start, pos-1);
    quickSort(array, pos+1, end);
}




int main() {
    int array[8]={5,6,8,3,2,4,7,1};
    quickSort(array,0,7);
    for(int i=0;i<8;i++){
        cout<<array[i];
    }
    cout<<endl;
    return 0;
}
