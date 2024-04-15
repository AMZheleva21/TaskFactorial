#include <iostream> 
using namespace std;
class Fact
{
private:
    int number;
    int factorial;

public:
    Fact(int num)
    {
        number = num;
        factorial = 1;
        for (int i = 1; i <= number; i++) 
        {
            factorial *= i;
        }
    }

    void printFactorial() 
    {
        cout << "Factorial is: " << factorial << std::endl;
    }
};

int main() 
{
    int number;
    cin >> number;

    Fact calculator(number);
    calculator.printFactorial();

}
