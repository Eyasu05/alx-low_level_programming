#include "main.h"

#include <stdio.h>
/**
 * 
 * modif_my_param - set the integer to 98
 * modif_my_param - set the integer to 98
 *
 * Return: nothing
 */
void reset_to_98(int *n)

{

	   printf("Value of 'm': %p\n", m);

	      printf("Address of 'm': %p\n", &m);

	         *m = 98;

}


/**
 *
 *  * main - check the code 
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    int n;



	        n = 402;

		    printf("n=%d\n", n);

		        reset_to_98(&n);

			    printf("n=%d\n", n);

			        return (0);


