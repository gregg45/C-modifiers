#include <stdio.h>
/*Remember the use of
comments is pretty good for this*/

main()
{	float create = 10;
	int step = 5;
	
	printf("This is the heading\n");
	while(step > 0)
	{	printf("%6.1f%\t%.2f%\n",create,(create*3.1));
		create = create + 1;
		step = step - 1; 
	}
}