#include<stdio.h>
#include<string.h>

void ReverseString(char* s,int from, int to){
	while(from<to){
		char t = s[from-1];
		s[(from++)-1]=s[to-1];
		s[--to] = t;
	};

}

void LeftRotateString(char* s,int n,int m){
	ReverseString(s,1,m);
	ReverseString(s,m+1,n);
	ReverseString(s,1,n);
}

int main(){
	char str[10] = "abcdefghij";
	LeftRotateString(str,10,6);
	int i = 1;
	printf("%d\n",++i);
	printf("%s\n",str);
}
