#include<stdio.h>
#define size 30

// Write C code for a program that displays syllable count of an entered word by counting vowels in a word.

int main(){
	
	char word[size];
	printf("Enter a word:");
	scanf("%s",word);
	int l=strlen(word);
	int i,count=0;
	
	for(i=0;i<l;i++){
		
		if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U'){
	             
	            count++; 
	
        }
    }
    
    printf("Number of syllables in the word:%d",count);
	
	
	return 0;
}
