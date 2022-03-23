/* =====PRIME NUMBERS======
Date: 30-12-2020
Time: 11:00
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    int p;
    int i;
    int primes[50] = {0};
    int primeIndex = 2;

    bool isprime;

    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= 30; p += 2)
    {
        isprime = true;

        for (i = 1; (isprime) && (p / primes[i] >= primes[i]); i++)
        {
            if (p % primes[i] == 0)
            {
                isprime = false;
            }
        }
        if (isprime == true)
        {
            primes[primeIndex] = p;
            primeIndex++;
        }
    }

    for (i = 0; i < primeIndex; i++)
    {
        printf("%3d", primes[i]);
    }
    printf("\n");

    return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
 for (int i=2; i<100; i++)
 {
  for (int j=2; j<=i; j++)   // Changed upper bound
  {
    if (i == j)  // Changed condition and reversed order of if:s
      printf("%d   ",i);
    else if (i%j == 0)
      break;
  }
 }
}
*/
/*
#include<stdio.h>
int main()
{
    for (int i = 2; i <= 50; i++)
    {
        for (int j = 2; j <=i; j++)
        {
            if (i == j)
            {
                printf("%d  ", i);
            }
            else if (i%j == 0)
            {
                break;
            }

        }
    }
}
*/


#include<stdio.h>

int prime(int n, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else{
        if (n % i == 0)
            return 0;
        else
            return prime(n, i - 1);
    }
}

int main()
{
    int n = 4;
    int p = prime(n, n / 2);
    (p == 1) ? printf("Is a prime number.\n") : printf("Is not a prime number.\n");
    return 0;
}


