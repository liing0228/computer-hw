#include<stdio.h>
int main(){
  int i, j, temp;
  int nums[9]={0,1,1,1,2,2,2,0,1,0};
	for (i = numsSize-1; i >=0; --i){     
        for (j = 0; j < i ; ++j)  
			if (nums[j] > nums[j + 1])       {
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
 	}
}
