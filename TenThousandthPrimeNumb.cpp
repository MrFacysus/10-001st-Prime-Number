#include <iostream>
#include <string>

int main()
{

    std::cout << "10,001st Prime Number Solution!\n";

    int answer = 1;
    int prime = 1;
    bool isPrime = true;

    while (prime < 10002)
    {

        answer++;
        
        for (int i = 2; i < answer / 2; i++)
        {

            if (answer % i == 0)
            {

                isPrime = false;

            }

        }

        if (isPrime)
        {

            prime++;

        }
        else
        {

            isPrime = true;

        }

    }

    std::cout << answer;

}