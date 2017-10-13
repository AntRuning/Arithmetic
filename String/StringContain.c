#include<stdio.h>
#include<string.h>

int StringContain(char *str1 ,char *str2){
	int hash = 0;
	for (int i=0;i<strlen(str1);i++){
		hash |=(1<<(str1[i] - 'A'));
	}

	for(int j = 0;j < strlen(str2);j++){
		
		if (hash & (1<<(str2[j]-'A'))==0){
			return 0;
		}
	}
	printf("%d",hash);
	return 1;

}

int main(){
	char a[5] = "ABCDE";
	char b[2] = "MD";
	if (StringContain(a,b)){
		printf("YES");
	}else{
		printf("NO");
	}
	printf("%d",2&4);
}
