/* Pattern of Bagchal */
#include<stdio.h>
int main()
{
    int n=32,i,j,k; /* initialize i and j here */
     printf("\n\nPattern of Bagchal \n\n\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++) /*  j should be here */
        {

        if(i==0 || i==n-1 || j==0 ||  j==n-1 || i==n/2 || j==n/2 || i+j==n/2 || i+j==n+n/2 || j-i==n/2 || i-j==n/2 || i+j==n-1 || i-j==n/n-1 || i==n/4 || i==n-8 || j==n/4 || j==n-8 )
        {
            printf("* "); /* One star and one space */
        }
        else
        {
            printf("  "); /* Two space */
        }

    }
    printf("\n"); /* And must common thing is that this must be here */

    }

  return 0;
}
/*
Output:
Pattern of Bagchal


* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* *             *             * * *             *           * *
*   *           *           *   *   *           *         *   *
*     *         *         *     *     *         *       *     *
*       *       *       *       *       *       *     *       *
*         *     *     *         *         *     *   *         *
*           *   *   *           *           *   * *           *
*             * * *             *             * *             *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*             * * *             *           *   * *           *
*           *   *   *           *         *     *   *         *
*         *     *     *         *       *       *     *       *
*       *       *       *       *     *         *       *     *
*     *         *         *     *   *           *         *   *
*   *           *           *   * *             *           * *
* *             *             * *               *             *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* *             *           *   * *             *             *
*   *           *         *     *   *           *           * *
*     *         *       *       *     *         *         *   *
*       *       *     *         *       *       *       *     *
*         *     *   *           *         *     *     *       *
*           *   * *             *           *   *   *         *
*             * *               *             * * *           *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*           *   * *             *             * * *           *
*         *     *   *           *           *   *   *         *
*       *       *     *         *         *     *     *       *
*     *         *       *       *       *       *       *     *
*   *           *         *     *     *         *         *   *
* *             *           *   *   *           *           * *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

*/
