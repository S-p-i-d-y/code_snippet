#include <stdio.h>
int createarr();  //creating array using structure
int setarr();     // reading arrays elements
int showarr();    // traversing array

struct myarr{
  int total_size;
  int used_size;
  int *ptr;
};


int main(){
  struct myarr marks;
  createarr(&marks,10,5);
  setarr(&marks);
  showarr(&marks);
  
  return 0;
}
int createarr(struct myarr *a, int tsize, int usize){
  a->total_size = tsize;
  a->used_size = usize;
  a->ptr = (int *)malloc(tsize * sizeof(int));
  
}
int setarr(struct myarr *a){
  int n;
  for (int i = 0; i < a->used_size;i++){
    printf("enter element %d\n",i);
    scanf("%d",&n); 
    (a->ptr)[i]=n;
  }
  
}
 int showarr(struct myarr *a){
  for(int i = 0; i < a->used_size;i++){
    printf("%d\n",(a->ptr)[i]);
  }
 
}
