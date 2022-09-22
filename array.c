//数组
#include <stdio.h>

int main()
{
	int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	for (int i=0;i<12;i++){
		if (arr[i]<31){
			arr[i] = 0;
			//printf("大于30天的月份有%d月，%d天。\n",i+1,arr[i]);
		}
		printf("%d\t",arr[i]);
		
		//printf("2022年的%d月有%d天。\n",i+1,arr[i]);
	}
	
	return 0;
}

//练习：冒泡程序算法
int main(){
	int arr[10] = {8,6,3,5,7,4,1,2,9};
	for (int i=0;i<9;i++){
		for (int j=0;j<9-i;j++){
			int a = arr[j],b=arr[j+1],c;
			if (a>b) {
				c = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = c;
			}
		}
	}
	for (int k=0;k<10;k++){
		printf("%d,",arr[k]);
	}
	return 0;
}