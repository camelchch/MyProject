#include "projects/libft/libft.h"
//#include "projects/libft/ft_isalpha.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
/*strlen function
	const char *k ="heyhey";
	int ft_len = (int)(ft_strlen(k));
	int len = (int)(strlen(k));
	printf("len=%d\n",len);
	printf("ft_len=%d\n",ft_len);
	*/
/*isalpha function
	int ft_alpha = ft_isalpha(255);
	int alpha = isalpha(255);
	printf("ft_alpha=%d\n",ft_alpha);
	printf("alpha=%d\n",alpha);
	*/
/*isdigit function
	int ft_digit = ft_isdigit('9');
	int digit = isdigit('9');
	printf("ft_digit=%d\n",ft_digit);
	printf("digit=%d\n",digit);
	*/
/*isalnum function
	int ft_alnum = ft_isalnum(-2147);
	int alnum = isalnum(-2147);
	printf("ft_alnum=%d\n",ft_alnum);
	printf("alnum=%d\n",alnum);
	*/
/*isascii function
	int ft_ascii = ft_isascii(128);
	int ascii = isascii(128);
	printf("ft_ascii=%d\n",ft_ascii);
	printf("ascii=%d\n",ascii);
	*/
/*isprint function
	int ft_print = ft_isprint(2147483647);
	int print = isprint(2147483647);
	printf("ft_print=%d\n",ft_print);
	printf("print=%d\n",print);
	*/
/*toupper function
	int ft_upper = ft_toupper(2147483649);
	int upper = toupper(2147483649);
	printf("ft_print=%d\n",ft_upper);
	printf("print=%d\n",upper);
	*/
/*atoi function
	int ft_atoi_test = ft_atoi("	hj j");
	int atoi_test = atoi("		hj j");
	printf("ft_atoi_test=%d\n",ft_atoi_test);
	printf("atoi_test=%d\n",atoi_test);
	*/
/*strdup function
	char *my_strdup = ft_strdup("");
	char *ori_strdup = strdup("");
	printf("my_strdup=%s\n",my_strdup);
	printf("ori_strdup=%s\n",ori_strdup);
	*/
/*strcpy function
	char dest[3];
	const char *src = "nihao";
	char *my_strcpy = ft_strcpy(dest,src);
	char *ori_strcpy = strcpy(dest,src);
	printf("my_strcpy=%s\n",my_strcpy);
	printf("ori_strcpy=%s\n",ori_strcpy);
	*/
/*strncpy function
	size_t n = 4;
	char dest[]="hey";
	const char *src = "nihao";
	char *my_strncpy = ft_strncpy(dest,src,n);
	char *ori_strncpy = strncpy(dest,src,n);
	printf("my_strncpy=%s\n",my_strncpy);
	printf("ori_strncpy=%s\n",ori_strncpy);
	*/
/*strcat function
	char dest1[]="hey";
	char dest2[]="hey";
	char *my_strcat = ft_strcat(dest1,"salut");
	char *ori_strcat = strcat(dest2,"salut");
	printf("my_strcat=%s\n",my_strcat);
	printf("ori_strcat=%s\n",ori_strcat);
	*/
/*strncat function
	char dest1[4]="hey";
	char dest2[4]="hey";
	char *my_strncat = ft_strncat(dest1,"salut",3);
	char *ori_strncat = strncat(dest2,"salut",3);
	printf("my_strncat=%s\n",my_strncat);
	printf("ori_strncat=%s\n",ori_strncat);
	*/
/*strlcat function
	char dest1[]="hey";
	char dest2[]="hey";
	size_t my_strlcat = ft_strlcat(dest1,"salut",8);
	size_t ori_strlcat = strlcat(dest2,"salut",8);
	printf("my_strlcat str=%s\n",dest1);
	printf("my_strlcat=%zu\n",my_strlcat);
	printf("ori_strlcat=%s\n",dest2);
	printf("ori_strlcat=%zu\n",ori_strlcat);
	*/
/*strchr function
	printf("my_strchr=%s\n",ft_strchr("nihaohhh", 'h'));
	printf("ori_strchr=%s\n",strchr("nihaohhh", 'h'));
	*/
/*strrchr function
	printf("my_strrchr=%s\n",ft_strrchr("nihaohhho", 'h'));
	printf("ori_strrchr=%s\n",strrchr("nihaohhho", 'h'));
	*/
/*strstr function (reading through null pointer when is null with strstr)
	printf("my_strstr=%s\n",ft_strstr("nihaohhho", "hh"));
	printf("ori_strstr=%s\n",strstr("nihaohhho", "hh"));
	*/
/*strnstr function
	printf("my_strnstr=%s\n",ft_strnstr("nihaohhho", "ih",1));
	//printf("ori_strnstr=%s\n",strnstr("nihaohhho", "hh",9));
	*/
/*strcmp function
	printf("my_strcmp=%d\n",ft_strcmp("nihaohhho", "yhh"));
	printf("ori_strcmp=%d\n",strcmp("nihaohhho", "yhh"));
	*/
/*strncmp function
	printf("my_strcmp=%d\n",ft_strncmp("nihaohhho", "nzio",1));
	printf("ori_strcmp=%d\n",strncmp("nihaohhho", "nzio",1));
	*/
/*memset function
	int test1[2] ={0,0};
	int test2[2] ={0,0};
	printf("my_memset_test1[0]=%d\n",*(int *)ft_memset(test1, 255,4));
	printf("my_memset_test1[1]=%d\n",test1[1]);
	printf("ori_memset_test2[0]=%d\n",*(int *)memset(test2, 255,4));
	printf("my_memset_test2[1]=%d\n",test2[1]);
/	*/
/*memset function
	int test1[2] ={0,0};
	int test2[2] ={0,0};
	printf("my_memset_test1[0]=%d\n",*(int *)ft_memset(test1, 255,4));
	printf("my_memset_test1[1]=%d\n",test1[1]);
	printf("ori_memset_test2[0]=%d\n",*(int *)memset(test2, 255,4));
	printf("my_memset_test2[1]=%d\n",test2[1]);
	*/
/*memcpy function --liittle endian my system
	int test1[2] ={0,0};
	const int src1[2] ={36,257};
	int test2[2] ={0,0};
	const int src2[2] ={36,257};
	printf("my_memcpy_test1[0]=%d\n",*(int *)ft_memcpy(test1, src1,5));
	printf("my_memcpy_test1[1]=%d\n",test1[1]);
	printf("ori_memcpy_test2[0]=%d\n",*(int *)memcpy(test2, src2,5));
	printf("my_memcpy_test2[1]=%d\n",test2[1]);
	*/
/*memmove function 
	char *dest1 = (char *)src1 + 1;
	const char src2[]="nihao";
	char *dest2 = (char *)src2 + 1;
	printf("my_memmove=%s\n",(char *)ft_memmove(dest1, src1,3));
	printf("ori_memmove=%s\n",(char *)memmove(dest2, src2,3));
	*/
/*memcmp function (is it the result for *char just 0,1,-1 or the differenrce
	int	a = 255;
	int b = 256;
	printcharf("my_memcmp=%d\n",ft_memcmp(&a,&b,1));
	printf("ori_memcmp=%d\n",memcmp(&a,&b,1));
	*/
/*strirer function
void foo(char *c)
{
	*c = 's';
}
char s[] = "abcde";
ft_striter(s,foo);
printf("s=%s",s);
	*/
/*striteri function
void foo_1(unsigned int position,char *c)
{
	*(c+position) = 's';
}
char s[] = "abcde";
ft_striteri(s,foo_1);
printf("s=%s",s);
	*/
/*strmap function
char foo3(char c)
{
	if(65 <= c && c <=90)
	return (c -'A' + 'a');
	else
	return (c);
}
char *s= ft_strmap("ABCD8jfk",foo3);
printf("s=%s",s);
	*/
/*strmapi function
char foo4(unsigned int index,char c)
{
	if(index <= 4 && 65 <= c && c <=90)
	return (c -'A' + 'a');
	else
	return (c);
}
char *s= ft_strmapi("ABCD8jfK",foo4);
printf("s=%s",s);
	*/
printf("differenrce = %d",ft_strequ("nihao","wobuha"));


	return (0);
}
