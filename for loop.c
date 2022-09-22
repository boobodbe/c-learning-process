//打印1000以内的水仙花数

#include <stdio.h>

int main()
{
	for(int i=100;i<1000;i++){
		int a = i%10,b=i/10%10,c=i/10/10;
		if (a*a*a + b*b*b + c*c*c == i){
			printf("%d是水仙花数！\n",i);
		}	
	}
	for(int j=1000;j<10000;j++){
		int d=j%10,e=j/10%10,f=j/100%10,g=j/10/10/10;
		if(d*d*d*d+e*e*e*e+f*f*f*f+g*g*g*g==j){
			printf("%d是水仙花数！\n",j);
		}
	}
	return 0;
}

//打印九九乘法表
int main()
{
	for (int i=1;i<10;i++){
		for (int j=1;j<i+1;j++){
			printf("%d*%d=%d\t",j,i,i*j);
			if(i==j)
				printf("\n");	
		}
	}
	
	return 0;
}

//获取斐波那契数列的任意一位
int main(){
	int aim=20 , res;
	int f1 = 1,f2 = 1,f3;
	for (int i=2;i<aim;i++){
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	res = f3;
	printf("%d\n",res);
	return 0;
}