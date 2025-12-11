//每人写一个函数
#include<stdio.h>
int plus(int a,int b){
		return a+b;
}
int jian(int a,int b)
{ return a-b;
}
int mul(int c,int d){
		return c*d;
int div(int a,int b){
                return a/b; 	
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d %d %d",plus(a,b),jian(a,b),mul(a,b),div(a,b));
	return 0;
}
