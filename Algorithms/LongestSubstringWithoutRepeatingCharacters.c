//run time complexity O(N^2)
int lengthOfLongestSubstring(char* s) {
    int len = strlen(s), temp = 0, maxlen = 0, equal = 1;
    int index1 = 0,index2 = 1,index3;
    if(len<2)
    	return len;
    for(; index1<len-1; index1 = ++index3){
    	while(index2<len){
	    	for(index3 = index1; index3<index2; index3++){
	    		equal = s[index2] - s[index3];
	    		if(!equal){   //same characters
	    			temp = index2-index3;
	    			maxlen = maxlen>temp?maxlen:temp;
	    			break;
		    	}
	    	}
   			index2++;
	    	if(!equal){
	    		break;
	    	}
	    	else{   //no same characters bettween index1 and index2
	    		temp = index2-index1;
    			maxlen = maxlen>temp?maxlen:temp;
	    	}
	    }
    }
	return maxlen;
}
