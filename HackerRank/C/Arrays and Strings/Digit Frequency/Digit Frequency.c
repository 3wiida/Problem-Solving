#include <stdio.h>
#include <string.h>

int main() {
    
    char s[1000];
    scanf("%s", s);
    int freq_arr[10] = {0};
    
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='0' && s[i]<='9'){
            freq_arr[s[i]-'0']++;
        }
    }
    
    for(int i=0;i<10;i++){
        printf("%d ",freq_arr[i]);
    }
    return 0;
}
