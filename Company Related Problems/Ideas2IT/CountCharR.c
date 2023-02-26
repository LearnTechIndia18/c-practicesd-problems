#include <stdio.h>
#include <string.h>
int check(char *s,char c)
{
    static int i=0,count=0;
    // If the array has empty, it returns the count
    if(!s[i])
    {
    	return count;
    }
    // Compares the each and every elements
    // Count the each items


    else
    {
        if(s[i]==c)
    	{
  			count++;
		}
        // increments the arrays
		i++;
		check(s,c);
	}
}
int main()
{
    char s[1000],c;
	int count;  
  
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();
    count=check(s,c);
    printf("character '%c' occurs %d times \n ",c,count);

	return 0;
 }