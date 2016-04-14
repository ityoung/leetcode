int maxArea(int* height, int heightSize) {
    int i = 0, j = heightSize-1, index;
    long large_capacity = 0,now_capacity;
    while(i<j){
        now_capacity = height[j]>height[i]?height[i]*(j-i):height[j]*(j-i);
        large_capacity = large_capacity>now_capacity?large_capacity:now_capacity;
        if(height[j]>height[i]){
            index = i;
            while(height[i]>=height[++index]);      //the left answer has no lager height,or the answer won't be the largest
            i = index;
        }
        else{
            index = j;
            while(height[j]>height[--index]);       //the same to left answer, the right's right don't exist a lager height
            j = index;
        }
    }
    return large_capacity;
}
