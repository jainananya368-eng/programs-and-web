#include <stdio.h>
int main(){
    FILE *nums;
    nums=fopen("ananya.text","r");
    int nums1,nums2,nums3;
    fscanf(nums,"%d,%d,%d",&nums1,&nums2,&nums3);
    printf("%d,%d,%d\n",nums1,nums2,nums3);
    fclose(nums);
    return 0;
}