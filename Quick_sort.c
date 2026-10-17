#include<stdio.h>
int printarray(int a[], int n){
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
void Phandoan( int a[], int top, int bottom,int number){
   
    int i=top +1;
    int j=bottom;
    int pivot=a[top];
    if (top>=bottom) return;
    while (i<=j){
        while(a[i]<pivot) i++;
        while(a[j]>pivot) j--;
        if (i<=j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;j--;
            printarray(a,number);

        }}
        int temp=a[top];
        a[top]=a[j];
        a[j]=temp;
        printarray(a,number);

    
    Phandoan(a,top,j-1,number);
    Phandoan(a,j+1,bottom,number);
}
int main(){
    int n=13;
    int A[13]={101,23,57,13,25,121,87,36,13,204,111,89,59};
    Phandoan(A,0,n-1,n);
    return 0;
}