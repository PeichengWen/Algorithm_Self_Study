//
//  main.cpp
//  MergeSort
//
//  Created by Peicheng Wen on 2018/1/12.
//  Copyright © 2018年 Troy University. All rights reserved.
//

#include <iostream>
using namespace std;

void merge(int ori[],int res[],int low,int mid, int high){
    int i = low;
    int j = mid+1;
    int k = low;
    while(i<=mid&&j<=high){
        if(ori[i]<ori[j])
            res[k++]=ori[i++];
        else
            res[k++]=ori[j++];
    }
    //if(i>mid){
        while(j<=high)
            res[k++]=ori[j++];
     //   }
    //else if(j>high){
        while(i<=mid)
            res[k++]=ori[i++];
    //}
    for(int m=low;m<=high;m++){
        ori[m]=res[m];
    }
}



void mergeSort(int ori[],int res[],int low,int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    mergeSort(ori,res,low,mid);
    mergeSort(ori,res,mid+1,high);
    merge(ori,res,low,mid,high);
}





int main() {
    int ori[8]={5,6,8,4,3,2,1,7};
    int lenth = 8;
    int res[8]={0};
    mergeSort(ori,res,0,7);
    for(int i = 0;i<lenth;i++){
        cout<<res[i];
    }
    cout<<endl;
    return 0;
}
