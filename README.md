# C-Competitive-Programming
**Problem Statement 1**:

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
**Problem Statement 2:**

**"Candy Craze: Distribute Wisely!"**

You are the owner of a candy shop with a total of 10 candies in stock. Customers can take up to 5 candies at a time. If a customer requests more than 5 candies or enters an invalid value (less than 1 or greater than 5), the system will reject the input as "INVALID INPUT" and display the total number of candies remaining in stock without any change. Your task is to design a program that processes a customer’s candy request and updates the candy count accordingly.

**Algorithm:**
1. Initialize Variables:
   
   Set n = 10 (total candies in stock).
   
   Set k = 5 (maximum candies a customer can take).
2. Take Input:
   Prompt the user to enter the number of candies they want (m).
3. Check Input Validity:
   
   If m is between 1 and k (inclusive):
   Deduct m from n.
   Display the number of candies taken (m) and the remaining candies (n - m).
5. Else:
   
   Print "INVALID INPUT".
   Display the remaining candies (n) without deduction.
7. End the Program

**Code :**
```c
#include<stdio.h>
int main()
{
    int n=10,k=5,m;
    //printf("n value and k value");
    //scanf("%d %d",&n,&k);
    printf("input value");
    scanf("%d",&m);
    if(m>=1 && m<=5)
    {
        printf("no. of candies:%d\n",m);
        printf("no. of candies left:%d\n",n-m);
    }
    else
    {
        printf("INVALID INPUT\n");
        printf("no. of candies left:%d\n",n);
    }
    return 0;
}
```
**Sample Input and Output:**

**Input 1:**
```
3
```
**Output 1:**
```
Input value: 3
Number of candies: 3
Number of candies left: 7
```

**Input 2:**
```
6
```
**Output 2:**
```
Input value: 6
INVALID INPUT
Number of candies left: 10
```
**Problem Statement 3**:

**"Delivery Time Estimator"**

A logistics company needs an automated system to estimate the delivery processing time based on package weight. Given the weight of a package, determine the estimated time required for processing before dispatch.

Processing Criteria:
1 ≤ weight ≤ 2000 → Estimated Time: 25 Minutes
2001 ≤ weight ≤ 4000 → Estimated Time: 35 Minutes
4001 ≤ weight ≤ 7000 → Estimated Time: 45 Minutes
weight > 7000 → "Maximum capacity reached" (Package cannot be processed)
weight < 1 → "INVALID INPUT"

**Algorithm:**

1. Initialize a variable w to store the package weight.
2. Prompt the user to enter the weight.
3. Check the weight range:
4. If 1 ≤ w ≤ 2000, print "Time Estimated: 25 Minutes".
5. Else if 2001 ≤ w ≤ 4000, print "Time Estimated: 35 Minutes".
6. Else if 4001 ≤ w ≤ 7000, print "Time Estimated: 45 Minutes".
7. Else if w > 7000, print "Maximum capacity reached".
8. Else, print "INVALID INPUT".
9. End the program.

**Code:**
```c
#include <stdio.h>
int main()
{
	int w;//w--weight
	printf("weight given:");
	scanf("%d",&w);
	if(w>=1 && w<=2000)
	{
		printf("Time Estimated: 25 Minutes\n");
	}
	else if(w>=2001 && w<=4000)
	{
		printf("Time Estimated: 35 Minutes\n");
	}
	else if(w>=4000 && w<=7000)
	{
		printf("Time Estimated: 45 Minutes\n");
	} 
	else if(w>7000)
	{
		printf("maximum capacity reached\n");
	}
	else
	{
		printf("INVALID INPUT\n");
	}
	return 0;
}
```
**Sample Input and Output:**

**Input 1:**
```
1800
```
**Output:**
```
Weight given: 1800
Time Estimated: 25 Minutes
```
**Input 2:**
```
3000
```
**Output 2:**
```
Weight given: 3000
Time Estimated: 35 Minutes
```
**Input 3:**
```
-5
```
**Output:**
```
Weight given: -5
INVALID INPUT
```
**Problem Statement 4:**

**"Mirror of Time"**

In an ancient civilization, scholars used a special "Mirror of Time" to decode hidden messages within numbers. The mirror reveals the reverse of a given number, helping historians decipher lost numerical sequences.

Your task is to write a program that simulates the Mirror of Time by reversing a given integer.

**Algorithm:**

1. Start by taking an integer input n from the user.
2. Initialize rev = 0 to store the reversed number.
3. Store the original value of n in a temporary variable temp for future reference.
4. While n is not zero:

   Extract the last digit using rem = n % 10.
   
   Append this digit to rev by computing rev = rev * 10 + rem.
   
   Remove the last digit from n by performing integer division n = n / 10.
5. After the loop terminates, print the reversed number.

**Code:**
```c
#include <stdio.h>

int main()
{
    int n,rev=0,rem;
    printf("enter number:");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reversed number:%d\n",rev);
    return 0;
}
```

**Sample Input and Output:**

**Input 1:**
```
enter number: 12345
```
**Output 1:**
```
reversed number: 54321
```
**Problem Statement 5**:

**"Counting Even Numbers in a Range"**

A teacher wants to help students understand even numbers by counting and displaying all even numbers within a given range. Your task is to write a program that takes two numbers as input (start and end values) and prints all even numbers within that range. Additionally, the program should count the number of even numbers between 21 and 60.

**Algorithm:**

1. Start by taking two integers, m and n, as input from the user (representing the start and end of the range).
2. Initialize a counter variable c = 0 to keep track of even numbers between 21 and 60.
3. Use a for loop to iterate from m to n.
    
 	If the current number i is even (i % 2 == 0), print it.

	If i is within the range [21, 60], increment the counter c.

4. After exiting the loop, print the total count of even numbers between 21 and 60.


**Code:**
```c
#include<stdio.h>
int main()
{
    int i,c=0,m,n;
    printf("enter start and end value:");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            c++;
        }
    }
    /*for(i=21;i<=60;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            c++;
        }
    }*/
    printf("total number of even numbers btw 21 and 60 are %d",c);
}
```
**Sample Input:**
```
enter start and end value: 10 30
```
**Sample Output:**
```
10
12
14
16
18
20
22
24
26
28
30
```
**Problem Statement 6:**

**"Fractional Leap Series"**

A young mathematician is fascinated by a unique numerical sequence. The sequence consists of fractions where the numerator starts at 1 and increases by 2 in each step, while the denominator starts at 2 and also increases by 2 in each step. The sum of the first N terms of this sequence determines a special value.

Write a program to compute and display the sum of the first N terms of this fractional series:

S=(1/2) +(3/4)+ (5/6) +....series

Given an integer N, your task is to calculate and print the sum of the first N terms with high precision.

**Algorithm**

1. Start by taking an integer input N representing the number of terms.
2. Initialize:
   
  numerator = 1
  
 denominator = 2
 
 sum = 0.0
 
3. Loop from 1 to N, and in each iteration:

4. Compute the fraction as numerator/denominator and add it to sum.

 Increase the numerator by 2.
 
 Increase the denominator by 2. 

5. Print the computed sum with high precision.
**Code**
```c
#include <stdio.h>
int main()
{
     int n;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
   int numerator = 1;
   int denominator = 2;
    double sum = 0.0;
    /*for (int i = 1; i <= n; i+=2) {
        sum += (double)i /(i+1); 
    }*/
    for (int i = 1;i <=n; i++) {
        sum += (double)numerator / denominator; 
        numerator += 2; 
        denominator += 2; 
    }
    printf("%lf",sum);
    return 0;
}
```
 
**Sample Inputs and Outputs**

**Input 1:**
```
Enter the number of terms in the series: 3
```
**Output 1:**
```
Sum of the series: 2.083333
```
**Input 2:**
```
Enter the number of terms in the series: 5
```
**Output 2:**
```
Sum of the series: 3.858333
```
**Problem Statement 7:**

**"Factorial Square Sum Challenge"**

In a futuristic research lab, scientists are analyzing a unique mathematical sequence that combines factorials and squared numbers. Given a number 
𝑛, the series is defined as:

S=1+(2^2/2!)+(3^2/3!)+.... series

Your task is to write a program that calculates the sum of this series for a given 

**Algorithm:**

1. Input: Read an integer n from the user (number of terms).
2. Initialize: Set sum = 0.0 to store the total sum.
3. Loop from 1 to n:
   
	Compute the factorial i! iteratively.

	Compute the term (i^2)/i!

	Add the term to sum.
4. Output: Print the computed sum with six decimal places.

**Code:**
```c
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    double sum = 0.0;
    
    for (int i = 1; i <= n; i++) {
        int fact = 1; 
        for (int j = 1; j <= i; j++) {
            fact *= j; 
        }
        sum += (double)(i * i) / fact; 
    }

    printf("The sum of the series is: %.6lf\n", sum);
    return 0;
}
```
**Sample Input & Output:**

**Input 1:**
```
Enter the number of terms in the series: 5
```
**Output 1:**
```
The sum of the series is: 2.708333
```
**Input 2:**
```
Enter the number of terms in the series: 7
```
**Output 2:**
```
The sum of the series is: 2.718056
```
**Problem Statement 8:**

**"Alternating Power Sequence"**

A mathematician discovers a unique sequence where each term follows a special alternating power pattern:

If n is even, the term is computed as:

	T(n)=3^(n/2-1)-->here ^ refers to power
 
If n is odd, the term is computed as:

	T(n)=2^(n/2)
 
Given an integer n, write a program to find the nth term in this sequence.

**Code**:
```c
#include <stdio.h>
#include<math.h>
int main()
{
 int n;
 printf("enter n:");
 scanf("%d",&n);
 if(n%2==0)//when n is even
 {
     int a=pow(3,(n/2)-1);
     printf("%d",a);
 }
 else// when n is odd term
 {
     int b=pow(2,n/2);
     printf("%d",b);
 }
    return 0;
}
```
**Algorithm**
1. Take an integer n as input.
2. If n is even, compute:
	T(n)=3^(n/2-1)
3. If n is odd, compute:
 	T(n)=2^(n/2)
4. Print the computed term.
   
**Sample Inputs and Outputs**

**Input 1:**
```
enter n: 4
```
**Output 1:**
```
3
```
**Input 2:**
```
enter n: 5
```
**Output 2:**
```
4
```
**Problem Statement 9:**

**"Alternating Multiples Sequence"**

A mathematician has discovered a fascinating sequence that follows an alternating pattern based on position:

At odd positions (1st, 3rd, 5th,...), the terms are multiples of 7.
At even positions (2nd, 4th, 6th,...), the terms are multiples of 6.
The sequence follows the pattern:

	0,0,7,6,14,12,21,18,28,24,…

Where:

Odd-indexed terms follow: 	T(n)=7×(n//2)

Even-indexed terms follow :	T(n)=6×( n/2-1)

Your task is to write a program that takes an integer n and prints the nth term of this sequence.

**Algorithm**
1. Take an integer n as input.
2. If n is even, compute the term using:	T(n)=6×(n/2-1)
3. If n is odd, compute the term using:		T(n)=7x(n/2)
4. Print the computed value.

**Code:**
```c
//series....0,0,7,6,14,12,21,18,28,24,....
//odd positions....7 multiples
//even positions....6 multiples
//7*0,6*0,7*1,6*1,7*2,6*2,7*3,6*3,....
#include <stdio.h>
int main()
{
 int n,x,y;
 printf("enter n:");
 scanf("%d",&n);
 if(n%2==0)//even position ...6 multiples
 {
     x=6*((n/2)-1);
     printf("%d",x);
 }
 else//odd position...7 multiples
 {
    y=7*(n/2);
     printf("%d",y);
 }
    return 0;
}
```
   
**Sample Inputs and Outputs**

**Input 1:**
```
enter n: 5
```
Calculation:
Since 5 is odd:
T(5)=7×(5//2)=7×2=14

**Output 1:**
```
14
```
**Input 2:**
```
enter n: 6
```
**Output 2:**
```
12
```
