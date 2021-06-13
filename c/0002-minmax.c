#include <stdio.h>
int main(){
    int n, min, max;
    scanf("%d",&n);
    int a[1001];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    min = a[0];
    max = a[0];
    for(int i=1; i<n; i++){
        if(min > a[i]){
            min = a[i];
        }
        if(max < a[i]){
            max = a[i];
        }
    }
    printf("%d \n %d \n",min, max);
}
