#include<stdio.h>
#include <math.h>
int main(){
	int num[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,15,16};
	int length=sizeof(num)/sizeof(num[0]);
	int left=0;//���±� 
	int right=length-1;//���±�
	int mid=(left+right)/2;//�м�Ԫ���±� 
	int k,i=0;
	double s=log2(length);
	if(int(s)=s)
		s=log2(length);
	else
		s=int(s)+1;
	while(1){
	scanf("%d",&k);
	while(num[mid]!=k/*&&i<=s*/){
		if(num[mid]>k)
			mid=(left+mid)/2;
		else
			mid=(right+mid)/2;
		i++;
	}
	if(i>s)
		printf("�Ҳ���\n"); 
	else
		printf("%d\n",mid+1);
	}
	return 0;
}
