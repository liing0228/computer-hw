void sortColors(int* nums, int numsSize){
  int i, j, temp;
	for (i = numsSize-1; i >=0; --i)     
        for (j = 0; j < i ; ++j)  
			if (nums[j] > nums[j + 1])       {
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
}
