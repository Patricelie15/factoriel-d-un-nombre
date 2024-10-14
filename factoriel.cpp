#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() { 
"C:\Users\LENOVO GAMING\projects\helloworld"
    int n, i, fact;
  
    std::cout << "entrer un nombre ou un chiffre strictement positif " << std::endl;
    std::cin >> n;

    fact = 1;

    if (n > 1)
    {
        /* n! = n*(n-1)*(n-2)*....*1 */
        for (i = 2; i <= n; i++)
        {
            fact *= i;
        }
    }
    else
    {  
        fact = 1;
    }

    std::cout << "le factoriel est " << fact << std::endl;

    return 0;
}