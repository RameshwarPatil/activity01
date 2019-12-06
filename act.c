#include<stdio.h>

void sumarr(const int* parr, int n);
void display(const int parr,int n);

int main() {
  int i,n=10;
  int arr[10];
  fill(arr,n);
  sumarr(arr,n);
  display(arr,n);
  
  return 0;
}

void fill(int* parr,int n) 
{
  for(int i=0;i<n;i++)
    parr[i]=i*10+1; 
}

void sumarr(const int *parr, int n) {
  int sum=0;
  for(int i=0;i<n;i++)
    sum+=*parr++;  
}

void display(const int *parr,int n) {
  for(int i=0;i<n;i++)
    printf("%d\t",parr[i]);
}
