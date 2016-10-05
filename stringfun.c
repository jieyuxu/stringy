#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int mystrlen(char * str);
char * mystrcpy(char *dest, char *source);
char * mystrncat(char * dest, char * src, int n);
int mystrcmp( char *s1, char *s2 );
char * mystrchr( char *s, char c );

int main(){
	char s1[20] = "Hello";
	char s2[20] = "";
	printf("Testing regular functions:\n");
	mystrcpy(s2, s1);
	printf("Copy s1 to s2: s2 = %s, length = %d\n", s2, mystrlen(s2));
	mystrncat(s2, "mandy", 2);
	printf("Cat \"man\" to s2: %s\n", s2);
	printf("Testing strcmp:\n");
	printf("compare ab to abc: %d\n", mystrcmp("ab", "abc"));
	printf("compare abc to ab: %d\n", mystrcmp("abc", "ab"));
	printf("compare abc to abc: %d\n", mystrcmp("abc", "abc"));
	printf("Testing strchr:\n");
	printf("Looking for 1 in Hello123: %s\n", mystrchr("Hello123", 'l'));
	printf("Looking for 0 in Hello123: %s\n", mystrchr("Hello123", '0'));
	return 0;
}

int mystrlen(char *s){
	int ans = 0;
	while(*s){
		ans++;
		s++;
	}
	return ans;
}

char * mystrcpy(char *dest, char *source){
	char * ans = dest;
	while (*source){
		*dest = *source; //bus error 10
		dest++;
		source++;
	}
	return ans;
}

char * mystrncat(char * dest, char * src, int n){
	char * ans = dest;
	while (*dest){
		dest++;
	}
	while (n >= 0){
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return ans;
}

int mystrcmp(char *s1, char *s2){
	int uno = 0;
	while (*s1){
		uno += *s1;
		s1++;
	}
	while (*s2){
		uno -= *s2;
		s2++;
	}
	return uno;
}

char * mystrchr(char *s, char c){
	//char * ans = s;
	//char * cp = &c;
	while (*s){
		if (*s == c)
			return s;
		s++;
	}
	return "0";
}
