bool isPalindrome(int x) {
    if (x==0) return true;
    if (x<0) return false;
    int i,count=0,temp;
    char* arr =(char*)malloc(10);
    while (x!=0){
        temp = x%10;
        arr[count]=temp;
        count++;
        x=x/10;
    }
    for(i=0;i<count/2;i++){
        if(arr[i]!=arr[count-1-i])
        return false;
    }
    return true;    
}