// Write a program in C which is a Menu-Driven Program to perform a simple calculation.

/*
#include <stdio.h>
void main()
{
  int num1, num2, opt;
  printf("Enter the first integer: ");
  scanf("%d", &num1);
  printf("Enter the second integer: ");
  scanf("%d", &num2);

  printf("Input your option: \n");
  printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n5-Exit.\n");
  scanf("%d", &opt);

  switch(opt)
    {
      case 1:
      printf("The addition of %d and %d is: %d\n", num1, num2, num1+num2);
      break;
      case 2:
        printf("The Substraction of %d  and %d is: %d\n",num1,num2,num1-num2);
        break;

      case 3:
        printf("The Multiplication of %d  and %d is: %d\n",num1,num2,num1*num2);
        break;

      case 4:
        if(num2==0) {
          printf("The second integer is zero. Devide by zero.\n");
        } else {
          printf("The Division of %d  and %d is : %d\n",num1,num2,num1/num2);
        }
        break;

      case 5:
        break;

      default:
      printf("Input correct option\n");
      break;
    }
}
*/


// Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shape.

/*
#include <stdio.h>

void main()
{
  int choice, r, l , w, b, h;
  float area;
  printf("Input 1 for area of circle\n");
  printf("Input 2 for area of rectangle\n");
  printf("Input 3 for area of triangle\n");
  printf("Input your choice: ");
  scanf("%d", &choice);

  switch(choice)
    {
      case 1:
      printf("Input radious of the circle : ");
      scanf("%d",&r);
      area=3.14*r*r;
      break;

      case 2:
      printf("Input length and width of the rectangle : ");
      scanf("%d%d",&l,&w);
      area=l*w;
      break;

      case 3:
      printf("Input the base and hight of the triangle :");
      scanf("%d%d",&b,&h);
      area=.5*b*h;
      break;
    }
  printf("The area is: %f\n", area);
}
*/


// Write a program in C to read any Month Number in integer and display the number of days for this month.

/*
#include <stdio.h>

void main()
{
  int monno;
  char monnm[15];
  printf("Input the month number: ");
  scanf("%d", &monno);

  switch(monno)
    {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        printf("the month has 31 days/\n");
        break;

      case 2:
        printf("The month is a february and have 28 days. \n");
      printf("In a leap year this month will have 29 days. \n");
      break;

      case 4:
      case 6:
      case 9:
      case 11:
        printf("This month has 30 days.\n");
        break;

      default:
        printf("Enter a valid month number and please try again: ");
        break;
    }
}
*/


// Write a program in C to read any Month Number in integer and display Month name in the word.

/*
#include <stdio.h>
void main()
{
   int monno;
   printf("Input Month No : ");
   scanf("%d",&monno);
   switch(monno)
   {
    case 1:
           printf("January\n");
           break;
    case 2:
           printf("February\n");
           break;
    case 3:
           printf("March\n");
           break;
    case 4:
           printf("April\n");
           break;
    case 5:
           printf("May\n");
           break;
    case 6:
           printf("June\n");
           break;
    case 7:
           printf("July\n");
           break;
    case 8:
           printf("August\n");
           break;
    case 9:
           printf("September\n");
           break;
    case 10:
           printf("October\n");
           break;
    case 11:
           printf("November\n");
           break;
    case 12:
           printf("December\n");
           break;
    default:
           printf("invalid Month number. \nPlease try again ....\n");
           break;
      }
}
*/


// Write a program in C to read any digit, display in the word.

/*
#include <stdio.h>
void main()
{
   int cdigit;

   printf("Input Digit(0-9) : ");
   scanf("%d",&cdigit);
   switch(cdigit)
   {
     case 0:
           printf("Zero\n");
           break;

     case 1:
           printf("one\n");
           break;
    case 2:
           printf("Two\n");
           break;
    case 3:
           printf("Three\n");
           break;
    case 4:
           printf("Four\n");
           break;
    case 5:
           printf("Five\n");
           break;
    case 6:
           printf("Six\n");
           break;
    case 7:
           printf("Seven\n");
           break;
    case 8:
           printf("Eight\n");
           break;
    case 9:
           printf("Nine\n");
           break;
    default:
           printf("invalid digit. \nPlease try again ....\n");
           break;
      }
}
*/


// Write a program in C to accept a grade and declare the equivalent description :

/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main()
{
  char notes[15];
  char grd;

  printf("Input the grade: ");
  scanf("%c", &grd);

  grd = toupper(grd);

  switch(grd)
    {
      case 'E':
      strcpy(notes, "Excellent");
      break;
      case 'V':
      strcpy(notes, "Very Good");
      break;
      case 'G':
      strcpy(notes, "Good");
      break;
      case 'A':
      srtcpy(notes, "Average");
      break;
      case 'F':
      strcpy(notes, "Fails");
      break;
      default:
      strcpy(notes, "Invalid Grade Found.\n");
      break;
    }
  printf("You have chosen: %s\n", notes);
}
*/


// Write a C program to calculate profit and loss on a transaction.

/*
#include <stdio.h>
void main()
{
    int cprice,sprice, plamt; //cprice is Cost Price and sprice is Selling Price, plamt denotes total profit/loss

    printf("Input Cost Price: ");
    scanf("%d", &cprice);
    printf("Input Selling Price: ");
    scanf("%d", &sprice);

    if(sprice>cprice) //calculate profit
    {
        plamt = sprice-cprice;
        printf("\nYou can booked your profit amount : %d\n", plamt);
    }
    else if(cprice>sprice) //calculate loss
    {
        plamt = cprice-sprice;
        printf("\nYou got a loss of amount : %d\n", plamt);
    }
    else //No Profit No Loss
    {
        printf("\nYou are running in no profit no loss condition.\n");
    }
}
*/


// Write a C program to check whether an alphabet is a vowel or consonant.

/*
#include <stdio.h>
void main()
{
    char sing_ch;

    printf("Input any alphabet : ");
    scanf("%c", &sing_ch);

    if(sing_ch=='a' || sing_ch=='e' || sing_ch=='i' || sing_ch=='o' || sing_ch=='u' || sing_ch=='A' || sing_ch=='E' || sing_ch=='I' || sing_ch=='O'

|| sing_ch=='U')
    {
        printf("The alphabet is a vowel.\n");
    }
    else if((sing_ch>='a' && sing_ch<='z') || (sing_ch>='A' && sing_ch<='Z'))
    {
        printf("The alphabet is a consonant.\n");
    }
    else
    {
        printf("The character is not an alphabet.\n");
    }
}
*/


// Write a C program to check whether a character is an alphabet, digit or special character.

/*
#include <stdio.h>
int main()
{
    char sing_ch;

    printf("Input a character: ");
    scanf('%c', &sing_ch);


    if((sing_ch>='a' && sing_ch<='z') || (sing_ch>='A' && sing_ch<='Z'))
    {
        printf("This is an alphabet.\n");
    }
    else if(sing_ch>='0' && sing_ch<='9')
    {
        printf("This is a digit.\n");
    }
    else
    {
        printf("This is a special character.\n");
    }
}
*/


// demonstrate a simple 

/*
#include <stdio.h>

    int sum (int, int);//function declaration
    int main (void)
    {
        int total;
              printf("\n\n Function : a simple structure of function :\n");
              printf("------------------------------------------------\n");
        total = sum (5, 6);//function call
        printf ("The total is :  %d\n", total);
        return 0;
    }

    int sum (int a, int b) //function definition
    {
           int s;
              s=a+b;
        return s; //function returning a value
    }

*/

// Write a program in C to find the square of any number using the function.

/*
#include <stdio.h>

double square(double num)
{
  return (num*num);
}

int main()
{
  int num;
  double n;
  printf("Input any number for square: \n");
  scanf("%d", &num);
  n = square(num);
  printf("The square of %d is: %.2f\n", num, n);
  return 0;
}
*/

// Write a C program that convert a temperature from Centigrade to Fahrenheit.

/*
#include <stdio.h>

float temp_f;
float temp_c;
char line_text[50];

int main()
{
  printf("Input the temp in C: ");
  fgets(line_text, sizeof(line_text), stdin);
  sscanf(line_text, "%f", &temp_c);

  temp_f = ((9.0 / 5.0) * temp_c) + 32.0;
  printf("%f degrees farenheit:\n", temp_f);

  return 0;
}
*/


// Write a C program that calculates the volume of a sphere.

/*
#include <stdio.h>
float myradius;
float myvolume;
char line_text[50];

const float PI = 3.14;

int main()
{
  printf("Input the radius: ");
  fgets(line_text, sizeof(line_text), stdin);
  sscanf(line_text, "%f", &myradius);

  myvolume = (4.0 / 3.0) * PI * (myradius * myradius * myradius);
  printf("The volume of the sphere is %f.\m", myvolume);
  return 0;
}
*/


// Write a C program that prints the perimeter of a rectangle to take its height and width as input.

/*
#include <stdio.h>
int main()
{
  float rec_width;
  float rec_height;
  float rec_perimeter;

  printf("Input the height of the rectangle: ");
  scanf("%f", &rec_height);
  printf("Input the width of the rectangle: ");
  scanf("%f", &rec_width);
  rec_perimeter = 2.0 * (rec_height + rec_width);
  printf("Perimeter of the rectangle is: %f\n", rec_perimeter);
  return 0;
}
*/

/*

// Write a C program that converts kilometers per hour to miles per hour.

#include <stdio.h>
float kmph;
float miph;

int main()
{
  printf("Input kmph: ");
  scanf("%f", &kmph);
  miph = (kmph * 0.6213712);
  printf("%f miles per hour\n", miph);

  return 0;
}
*/


// Write a program in C that takes minutes as input, and display the total number of hours and minutes.
/*
#include <stdio.h>
int tot_mins;
int hrs;
int mins;

const int MINaHOUR = 60;
char line_text[50];

int main() {
       printf("Input minutes: ");
       fgets(line_text, sizeof(line_text), stdin);
       sscanf(line_text, "%d", &tot_mins);

       hrs = (tot_mins / MINaHOUR);
       mins = (tot_mins % MINaHOUR);

       printf("%d Hours, %d Minutes.\n", hrs, mins);

       return(0);
}
*/

// Write a C program to generate a random number.

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int number, input;
  srand(time(NULL));
  number = rand()%10+1;

  do
    {
      printf("Guess the number from 1 to 10: ");
      scanf("%d", &input);
      if (number > input)
      {
        printf("The number is higher\n");
      }
    }
    while (number != input);
    {
      printf("That is correct!\n\n");
    }
  return 0;
}
*/


// Write a C program to return the absolute value of an integer.

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  printf("Enter a positive or negative integer: ");
  scanf("%d", &num);
  printf("The absolute value of the given number is: %d\n\n", abs(num));
  return 0;
}
*/

//Write a program in C for subtraction of two Matrices.

/*
#include <stdio.h>

void main()
{
  int arr1[50][50], brr1[50][50], crr1[50][50], i, j, n;
  printf("\n\nSubtraction of two Matrices :\n");
  printf("------------------------------\n");
  printf("Input the size of the square matrix (less than 5): ");
  scanf("%d", &n);

  printf("Input elements in the first matrix: ");
  for(i = 0; i<n; i++)
    {
      for(j = 0; j<n;j++)
        {
          printf("Element- [%d][%d]: ", i, j);
          scanf("%d", &arr1[i][j]);
        }
    }
  printf("\nThe first matrix is: \n");
  for(i = 0; i<n; i++)
    {
      for(j = 0; j<n; j++)
      {
        printf("Element - [%d][%d]: ", i, j);
        scanf("%d", &arr1[i][j]);
      }
    }
  printf("Input elements in the second matrix :\n");
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        {
          printf("element - [%d],[%d] : ",i,j);
          scanf("%d",&brr1[i][j]);
        }
    }
  printf("\nThe First matrix is :\n");
  for(i = 0; i < n; i++)
    {
      printf("\n");
      for(j = 0; j < n; j++)
        {
          printf("%d\t", arr1[i][j]);
        }
    }
  printf("\nThe second matrix is: \n");
  for (i = 0; i < n; i++)
    {
      printf("\n");
      for(j = 0; j < n; j++)
        {
          printf("%d\t", brr1[i][j]);
        }
    }
  for(i = 0; i<n; i++)
    {
      for(j = 0; j<n; j++)
        {
          crr1[i][j] = arr1[i][j] - brr1[i][j];
        }
    }
  printf("\nThe subtraction of two matrix is: \n");
  for(i = 0; i<n;i++)
    {
      printf("\n");
      for(j = 0; j<n;j++)
        {
          printf("%d\t", crr1[i][j]);
        }
    }
  printf("\n\n");
}
*/

// Write a program in C to find transpose of a given matrix.


/*
#include <stdio.h>

void main()
{
  int arr1[50][50], brr1[50][50], i, j, r, c;
  printf("\nInput the rows and columns of a matrix: ");
  scanf("%d %d",&r, &c);
  printf("Input the elements in the first matrix: \n");
  for(i = 0; i<r; i++)
    {
      for(j = 0; j<c;j++)
        {
          printf("element - [%d][%d]: ", i, j);
          scanf("%d", &arr1[i][j]);
        }
    }
  printf("\nThe matrix is: \n");
  for(i = 0; i<r; i++)
    {
      printf("\n");
      for(j = 0; j<c; j++)
        {
          printf("%d\t", arr1[i][j]);
        }
    }
  for(i = 0; i<r; i++)
    {
      for(j = 0; j<c; j++)
        {
          brr1[j][i] = arr1[i][j];
        }
    }
  printf("\n\nThe transpose of a matrix is: ");
  for(i = 0; i<c; i++)
    {
      printf("\n");
      for(j = 0; j<r;j++)
        {
          printf("%d\t", brr1[i][j]);
        }
    }
  printf("\n\n");
}
*/

// Write a program in C to find sum of right diagonals of a matrix.

/*
#include <stdio.h>

void main()
{
  int i, j, arr1[50][50], sum = 0, n;
  printf("Input the size of the square matrix: ");
  scanf("%d", &n);
  printf("Input the elements in the matrix: \n");
  for(i = 0; i<n; i++)
    {
      for(j = 0; j<n; j++)
        {
          printf("element - [%d][%d]", i, j);
          scanf("%d", &arr1[i][j]);
          if(i == j)
          {
            sum = sum+arr1[i][j];
          }
        }
    }
  printf("The matrix is: \n");
  for(i = 0; i<n; i++)
    {
      for(j = 0; j<n; j++)
        {
          printf("%d", arr1[i][j]);
        }
      printf("\n");
    }
  printf("Addition of the right diagonal elements is: %d\n", sum);
}
*/

// Write a program in C to find the sum of left diagonals of a matrix.

/*
#include <stdio.h>

void main()
{
  int i, j, arr1[50][50], sum = 0, n, m = 0;
  printf("Input the size of the square matrix ");
  scanf("%d", &n);
  m = n;
  printf("Input the elements in the first matrix: \n");
  for(i = 0; i<n;i++)
    {
      for(j = 0; j<n; j++)
        {
          printf("element = [%d][%d]: ", i, j);
          scanf("%d", &arr1[i][j]);
        }
    }
  printf("The matrix is:  \n");
  for(i = 0; i<n; i++)
    {
      for(j = 0; j<n; j++)
        {
          printf("%d", arr1[i][j]);
        }
      printf("\n");
    }
  for(i = 0; i<n; i++)
    {
      m = m-1;
      for(j = 0; j<n; j++)
        {
          if(j == m)
          {
            sum = sum + arr1[i][j];
          }
        }
    }
  printf("%d\n",sum);
}
*/

// Write a program in C to check whether a given matrix is an identity matrix.

/*
#include <stdio.h>

void main()
{
  int arr1[10][10];
  int r1, c1;
  int i, j, y, yn = 1;
  printf("\nChecking whether the given matrix is an identity matrix or not.\n");
  printf("Input rows: ");
  scanf("%d", &r1);
  printf("Input columns: ");
  scanf("%d", &c1);

  for(i = 0; i<r1; i++)
    {
      for(j = 0; j<c1; j++)
        {
          printf("%4d", arr1[i][j]);
        }
      printf("\n");
    }
  for(i = 0; i<r1; i++)
    {
      for(j = 0; j<c1; j++)
        {
          if(arr1[i][j] != 1 && arr1[j][i] != 0)
          {
            yn = 0;
            break;
          }
        }
    }
  if(yn == 1)
  {
    printf("It is an identity matrix: \n\n");
  }
  else
  {
    printf("The matrix is not an identity matrix. \n\n");
  }
}
*/

// Write a program in C to merge one sorted array into another sorted array.

/*
#include <stdio.h>

void merge2arrs(int *bgArr, int bgArrCtr, int *smlArr, int smlArrCtr)
{
    if(bgArr == NULL || smlArr == NULL)
        return;
    int bgArrIndex = bgArrCtr-1,
    smlArrIndex = smlArrCtr-1,
    mergedArrayIndex = bgArrCtr + smlArrCtr -1;
    while(bgArrIndex >= 0 && smlArrIndex >= 0) {
 if(bgArr[bgArrIndex] >= smlArr[smlArrIndex]){
            bgArr[mergedArrayIndex] = bgArr[bgArrIndex];
            mergedArrayIndex--;
            bgArrIndex--;
        } else {
            bgArr[mergedArrayIndex] = smlArr[smlArrIndex];
            mergedArrayIndex--;
            smlArrIndex--;
        }
    }
    if(bgArrIndex < 0)
  {
        while(smlArrIndex >= 0)
    {
            bgArr[mergedArrayIndex] = smlArr[smlArrIndex];
            mergedArrayIndex--;
            smlArrIndex--;
  }
    } else if (smlArrIndex < 0)
  {
        while(bgArrIndex >= 0)
    {
            bgArr[mergedArrayIndex] = bgArr[bgArrIndex];
            mergedArrayIndex--;
            bgArrIndex--;
        }
    }
}

int main()
{
    int bigArr[13] = {10, 12, 14, 16, 18, 20, 22};
    int smlArr[6] = {11, 13, 15, 17, 19, 21};
    int i;
//--------------- print large array --------------------
    printf("The given Large Array is :  ");
  for(i = 0; i < 7; i++)
  {
    printf("%d  ", bigArr[i]);
    }
    printf("\n");
//--------------- print small array --------------------
    printf("The given Small Array is :  ");
  for(i = 0; i < 6; i++)
  {
    printf("%d  ", smlArr[i]);
    }
    printf("\n");
//--------------- print merged array --------------------
    merge2arrs(bigArr, 7, smlArr, 6);
    printf("After merged the new Array is :\n");
    for(i = 0; i<13; i++)
  {
    printf("%d ", bigArr[i]);
    }
    return 0;
}

*/

// Write a program in C to find the smallest missing element from a sorted array.

/*
#include <stdio.h>

int MissingSmallElement(int arr1[], int low_index, int high_index)
{
    if (low_index > high_index)
        return low_index;
    int mid_index = low_index + (high_index - low_index) / 2;

    if (arr1[mid_index] == mid_index)			// the mismatch lies on the right half
        return MissingSmallElement(arr1, mid_index + 1, high_index);
    else										 // mismatch lies on the left half
        return MissingSmallElement(arr1, low_index, mid_index - 1);
}

int main()
{
    int arr1[] = { 0, 1, 3, 4, 5, 6, 7, 9 };
    int ctr = sizeof(arr1) / sizeof(arr1[0]);
  int i;
//------------- print original array ------------------
  printf("The given array is :  ");
  for(i = 0; i < ctr; i++)
  {
  printf("%d  ", arr1[i]);
    }
    printf("\n");
//-----------------------------------------
    int low_index = 0, high_index = ctr - 1;
    printf("The missing smallest element is: %d",
            MissingSmallElement(arr1, low_index, high_index));
    return 0;
}
*/


// Write a program in C to print a matrix in spiral form.

/*
#include <stdio.h>
#define R 4
#define C 5
void spiralOfMatrix(int enrow, int encol, int arr1[R][C])
{
    int i, rowind = 0, colind = 0;
    while (rowind < enrow && colind < encol)
    {
        for (i = colind; i < encol; ++i)
        {
            printf("%d ", arr1[rowind][i]);
        }
        rowind++;
        for (i = rowind; i < enrow; ++i)
        {
            printf("%d ", arr1[i][encol-1]);
        }
        encol--;
        if ( rowind < enrow)
        {
            for (i = encol-1; i >= colind; --i)
            {
                printf("%d ", arr1[enrow-1][i]);
            }
            enrow--;
        }
        if (colind < encol)
        {
            for (i = enrow-1; i >= rowind; --i)
            {
                printf("%d ", arr1[i][colind]);
            }
            colind++;
        }
    }
}
int main()
{
int i,j;
    int arr1[R][C] = { {1,  2,  3,  4,  5},
        {6, 7,  8,  9,  10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };
 //------------- print original array ------------------
  printf("The given array in matrix form is :  \n");
  for(i = 0; i < R; i++)
  {
  for (j=0;j<C;j++)
  {
  printf("%d  ", arr1[i][j]);
    }
  printf("\n");
  }
//------------------------------------------------------
printf("The spiral form of above matrix is: \n");
    spiralOfMatrix(R, C, arr1);
    return 0;
}
*/