#include<stdio.h>
int fact(int);
void main(){
    int n;
    printf("Fcatorial input:\n");
    scanf("%d",&n);
    int z = fact(n);
    printf("factorial : %d",z);
}
int fact(int a){
    int res;
    if(a==0){
        res = 1;
    }
    else
    {
        res = a*fact(a-1);

    }
    return res;
    

}