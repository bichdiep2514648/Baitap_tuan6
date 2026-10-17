#include<stdio.h>
int printarray(int a[], int n){
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
void Merge(int a[],int m,int n,int number){
    int i=m;
    int j=n+1;
    while(i<j&&j<=number){
     if(a[i]<a[j]){
        i++;
     }
     else{
        int temp=a[j];
        for(int k=j;k>i;k--){
            a[k]=a[k-1];
        }
        a[i]=temp;
        i++;j++;
     }

    }
}
void Merge_sort(int a[], int top, int bottom, int number){
    if(top< bottom){
        int m=(top + bottom)/2;
        Merge_sort(a,top,m,number);
        Merge_sort(a,m+1,bottom,number);
        Merge(a,top,m,bottom);
        printarray(a,number);
    }
}
int main(){
    int n=13;
    int A[13]={101,23,57,13,25,121,87,36,13,204,111,89,59};
    Merge_sort(A,0,n-1,n);
    return 0;
}