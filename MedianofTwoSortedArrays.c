//run time complexity O(N)

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int n = 0,m = 0,count = 0;
    double median;
    while(count<(nums1Size+nums2Size+1)/2){
    	if(n<nums1Size){
	    	if(m<nums2Size){
	    		if(nums1[n]<nums2[m])
		    		median = nums1[n++];
		    	else
	    			median = nums2[m++];
	    	}
	    	else{
   				median = nums1[n++]; 
	    	}
	    }
	    else if(m<nums2Size){
	    	median = nums2[m++]; 		
    	}
    	count++;
    }
    if((nums1Size+nums2Size)%2 == 0){
    	if(n<nums1Size)
	    	if(m<nums2Size)
	    		median += (nums1[n]<nums2[m])?nums1[n]:nums2[m];
	    	else
	    		median += nums1[n];
    	else
    		median += nums2[m];
   		median /= 2; 
    }
    return median;
}
