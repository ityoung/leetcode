//Manacher's algorithm
char* longestPalindrome(char* s) {
    int len = 2 * strlen(s)+2, i, j, index, k, i_mirror;
    int rightcenter = 0, maxboard = 0;
    char T[len];    //Store string s's modification
	  char *result;
    int P[len];     //Store every characters' length of Palindrome
    T[0] = '$';     //Prevent overflow
    for(i = 1, j = 0;i<len; i++){   //modificate string s to '$#a#b#c#b#d#' style, makes odd and even number no different
    	T[i++] = '#';
    	T[i] = s[j++];
    }
	for(i = 1; i<len;i++){            //mark every characters' length of Palindrome
		i_mirror = 2*rightcenter - i;   //mirror with the rightest center of Palindrome
		if(maxboard>i)                  //if current codinate beyond maxboard
			P[i] = (maxboard-i)>P[i_mirror]? P[i_mirror]:maxboard - i;
		else
			P[i] = 0;
		while(T[i-P[i]-1] == T[i+P[i]+1])//T[i] extend both side till char not equal
			P[i]++;
		if(i + P[i]>maxboard	){         //remark maxboard and rightest center
			maxboard = i+P[i];
			rightcenter = i;
		}
	}
	//pick out the longest palindromic substring
	for(i = 1, j = 0; i<len; i++)
		if(j<P[i]){
			j = P[i];
			index = i;
		}
    result = (char*)malloc(sizeof(char)*j);
	for(k = 0,i=index-j;i<index+j-1;i++){
		result[k++] = T[++i];
	}
	result[k] = '\0';
	return result;
}
