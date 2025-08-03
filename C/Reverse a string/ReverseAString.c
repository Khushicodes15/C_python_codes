char* reverseString(char* s) {
    
    int len = strlen(s);
    char* reversed = (char*)malloc((len + 1) * sizeof(char));

    if (reversed == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

   
    for (int i = 0; i < len; i++) {
        reversed[i] = s[len - 1 - i];
    }

    reversed[len] = '\0';  
    return reversed;
}