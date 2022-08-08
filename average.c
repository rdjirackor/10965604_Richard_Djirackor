//my ID is 10965604 and name is Richard Djirackor
#include <stdio.h>
int main(){
	float sum=0,count=0,average;
	
	for(int i=2;i<6;i++){
		for(int j=2;j<=i;j++){
			if(j==i){
				sum+=i;
				count++;
				}
			else if(i%j==0){
				break;
		}
	}
}
	average=sum/count;
	printf("Average=%.2f",average);

	return 0;
}
