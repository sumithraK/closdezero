#include<stdio.h>
int main(){
    int n,m,t1,t2;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    m=a[0]+a[1];
    t1=0;
    t2=1;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((a[i]+a[j])<m){
            m=a[i]+a[j];
            t1=i;
            t2=j;
            }
        }
    }
    printf("%d+%d=%d",a[t1],a[t2],m);
    return 0;
}
