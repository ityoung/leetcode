int romanToInt(char* s) {
  char roma[7] = "MDCLXVI";
	int val[7] = {1000,500,100,50,10,5,1}, i, j = 0, interger = 0;
  for(i = 0;i<strlen(s);i++)
    for(; j<7; j++)
		  if(*(s+i)==roma[j]){
        if(j == 2||j == 4||j == 6)
          if(*(s+i+1)==roma[j-1]||*(s+i+1)==roma[j-2]){
            interger-=val[j];
            j -= 2;
            break;
		      }
		    interger+=val[j];
		    break;
		  }
	return interger;
}
