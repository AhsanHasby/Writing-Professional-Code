#include <stdio.h>
#include <string.h>

int p(char*s,int n){
int i;
for(i=0;i<n;i++){
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
printf("%c",s[i]);
}
}
}

int main(){
char str[100];
printf("Enter a string:");
scanf("%s",str);
p(str,strlen(str));
}
