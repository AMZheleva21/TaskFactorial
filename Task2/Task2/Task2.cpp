#include <iostream>
using namespace std;
class Gcd
{
private:
    int num1;
    int num2;

public:
    Gcd(int x, int y)
    {
        num1 = x;
        num2 = y;
    }
    int findGcd()
    {
        int remains;
        while (num2 != 0)
        {
            remains = num1 % num2;
            num1 = num2;
            num2 = remains;
        }
        return num1;
    }
};

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    Gcd gcd1(num1, num2);
    int result = gcd1.findGcd();
    
    cout << result;
}
