#include <stdlib.h>
#include <time.h>
/**
 * brief The function is to print output from generated variables
 * 
 * return int: 0 
 */
int main(void)
{
	int n;
/**
 * @brief print int from generated number 
 */
	if (n > 5)
	{
    		printf("Last digit %d and is greater than 5", n);
	}
	else if (n == 0)
	{
    		printf("and is 0");
	}
	else (n < 6 && n != 0)
	{
    		printf("and is less than 6 and not 0")
	}
	
	printf("\n");

	return (0);
}
