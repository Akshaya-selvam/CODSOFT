#include <iostream>
using namespace std;
double addition(double a, double b)
{
    return a + b;
}

double subtraction(double a, double b)
{
    return a - b;
}

double multiplication(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    if (b != 0)
	{
        return a / b;
    }
	else
	{
        cout << "Error: Division by zero." << endl;
        return 0;
    }
}

int main()
{
    char operation;
    double num1, num2;

    cout << "\t\t\t\t\t\tSIMPLE CALCULATOR\n" << endl;
    while (true)
	{
        cout << "Enter an operator (+, -, *, /), or 'q' to quit: ";
        cin >> operation;

        if (operation == 'q' || operation == 'Q')
		{
            cout << "Exiting the calculator program. Goodbye!" << endl;
            break;
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        double (*operationFunc)(double, double);

        switch (operation)
		{
            case '+':
                operationFunc = addition;
                break;
            case '-':
                operationFunc = subtraction;
                break;
            case '*':
                operationFunc = multiplication;
                break;
            case '/':
                operationFunc = division;
                break;
            default:
                cout << "Invalid operator" << endl;
                return 1;
        }

        cout << num1 << " " << operation << " " << num2 << " = " << operationFunc(num1, num2) << endl;
    }

    return 0;
}
