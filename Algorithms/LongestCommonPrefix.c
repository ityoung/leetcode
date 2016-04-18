char* longestCommonPrefix(char** strs, int strsSize) {
    int i, j, lc;
    char *temp = (char*)malloc(sizeof(*strs));
	if(strsSize < 1)
        return "";
    temp = *strs;
    lc = strlen(temp);
    for(i = 1; i<strsSize; i++)
    	for(j = 0;j<lc;j++)
			if(strs[i][j]==temp[j])
				continue;
			else{
		    	lc = j+1;
		    	temp[j] ='\0';
		    	break;
			}
    return temp;
}
