# C-Competitive-Programming
**Problem Statement**:
Write a C program to swap two integers without using a temporary variable. The program should swap the values of two integers provided by the user. The program should also ensure that both integers are non-zero, as swapping zero with any number is not possible.

**Input**:
The program should prompt the user to input two integers.

**Output**:
The program should print the values of the integers before and after swapping.
If either of the integers is zero, print a message indicating that swapping is not possible.

**Algorithm**:
1. Start
2. Declare two integer variables a and b.
3. Prompt the user to enter two integers (a and b).
4. Read the values of a and b from the user.
5. Check if both a and b are non-zero.
6. If both integers are non-zero, proceed with the swapping process.
7. Swap the values of a and b using the expression: a = (a + b) - (b = a).
8. Print the values of a and b after swapping.
9. If either a or b is zero, print "not possible" indicating that swapping is not possible.
10. End
 
**Code**:
```c
#include <stdio.h>
int main()
{
  int a,b;
  printf("enter 2 numbers");
  scanf("%d%d",&a,&b);
  printf("before swapping: a=%d ,b=%d\n",a,b);
  if(a!=0 && b!=0)
  {
      //a=a*b;
      //b=a/b;
     // a=a/b;
      //printf("%d %d",a,b);
      a=(a+b)-(b=a);
      printf("after swapping:a= %d,b=%d",a,b);
      //printf("%d %d",a,b);
  }
  else
  {
      printf("not possible");
  }
  return 0;
}
```

**Sample Input and Output**:

**Input 1**:
```
enter 2 numbers
5 10
```
**Output 1**:
```
before swapping: a=5 ,b=10
after swapping: a=10,b=5
```
**Input 2**:
```
enter 2 numbers
0 7
```
**Output**:
```
not possible
```
