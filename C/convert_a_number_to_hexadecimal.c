char * toHex(int num){
    char* result = malloc(10 * sizeof(char));
    
    if(num == 0){
        result[0] = '0';
        result[1] = '\0';
        return result;
    }
        
    unsigned uNum = num;
    
    char chars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    int index = 0;
        
    while(uNum > 0){
        unsigned digit = uNum % 16;
        for(int i = index-1; i >= 0; i--){
            result[i+1] = result[i];
        }
        result[0] = chars[digit];
        uNum /= 16;
        index ++;
    }
    result[index] = '\0';
    
    return result;
}
