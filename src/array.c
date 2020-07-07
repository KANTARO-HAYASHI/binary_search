#include <stdio.h>

int n;
int k;
int A[100000];



int p (int m ){
    int f ,g;
    f = 0;
    g =0 ;
    for(f =0; f < n ; f++){
        g = g + (A[f]+m-1)/m;
    }
    return g<= k;
}


int main(){
    int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
      lb = 0;
      ub = 10000;
      while (ub - lb >1){
          int mid = ( lb + ub) /2;
          if(p(mid)){
              ub=mid;
          }
          else {
              lb = mid;
          }
      }
  printf("%d \n",ub);
  return 0;
}
