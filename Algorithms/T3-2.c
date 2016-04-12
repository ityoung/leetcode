//run time complexity O(N)
int lengthOfLongestSubstring(char* s) {
    int len = strlen(s);
	int maxlen = 0;
    int index1 = 0,index2 = 0;
    bool exits[256] = {false};
    while(index2 < len){
   		if(exits[s[index2]]){
		   	while(s[index1] != s[index2]){
	   			exits[s[index1]] = false;
	   			index1++;
	   		}
			index1++;
			index2++;
		}
		else{
			exits[s[index2]] = true;
			index2++;
		}
		maxlen = maxlen>(index2-index1)?maxlen:index2-index1;
    }
	return maxlen;
}
