#include <stdio.h>
#include <stdlib.h>
void MultplyMatrix (int a [3][3], int  b[3][3]);
void SumMatrix (int a [3][3], int  b[3][3]);
int main()
{
    int mat1 [3][3] , mat2 [3][3];

     printf("Array 1 \n");
      //Enter the first array

     for(int row = 0 ; row < 3 ; row++)
     {
        printf("Enter 3 values for row %d \n", row);
         for(int col = 0 ; col < 3 ; col++)
         {
            scanf("%d", &mat1[row][col]);
         }
     }

 printf("\n Array 2 \n");
       //Enter the seconed array
     for(int row = 0 ; row < 3 ; row++)
     {
          printf("Enter 3 values for row %d \n", row);
         for(int col = 0 ; col < 3 ; col++)
         {
            scanf("%d", &mat2[row][col]);
         }
     }

     MultplyMatrix(mat1 , mat2);
     SumMatrix(mat1 , mat2 );


    return 0;
}

void MultplyMatrix (int a [3] [3] , int b [3] [3])
{
    int result [3] [3] ;

	// Initializing elements of matrix result to 0.
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			result[i][j] = 0;
		}
	}


	 printf("\n Multiply of two matrices: \n");
    // Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
	for(int i = 0; i <3 ; ++i)    //number of row of first array
	{
		for(int j = 0; j < 3; ++j)    //number of col of seconed array
		{
			for(int k=0; k<3; ++k) //number of col of first array
			{
				result[i][j] += a[i][k] * a[k][j];
			}
		}
	}



	//print Result
	// Initializing elements of matrix result to 0.
	for( int i = 0; i < 3; ++i)
	{
		for( int j = 0; j < 3; ++j)
		{
			printf("%d \t", result[i][j]);
		}
		printf("\n");
	}

}


void SumMatrix (int a [3][3], int  b[3][3])
{

    int result [3] [3];
  // adding two matrices
  for (int row = 0; row < 3 ; row++)
    {
      for (int col = 0; col < 3; col++) {
      result[row][col] = a[row][col] + b[row][col];
      }
    }


  // printing the result
  printf("\nSum of two matrices: \n");
  for ( int i = 0; i < 3; i++)
     {

      for (int j = 0; j < 3; j++)
      {
      printf("%d   ", result[i][j]);

      }
       printf("\n");
    }

}
