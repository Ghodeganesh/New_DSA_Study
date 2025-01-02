#include <iostream>
using namespace std;

void holloPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            if (i == 0 || k == 0 || k == i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void invertedHolloPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < n - i; k++)
        {
            if (i == n - 1 || k == 0 || k == n - i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void mixPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << " ";
        }
        for (int m = 0; m < n - i; m++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void invertedMixPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++)
        {
            cout << " ";
        }
        for (int m = 0; m < i + 1; m++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void mixPyramidNumber(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
                cout << i + 1;
            else
                cout << "*";
        }
        cout << endl;
    }
}

void alphaPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        char value = 'a'; // Start with 'a' for each row

        // Print the increasing part of the row
        for (int j = 0; j <= i; j++)
        {
            cout << value++;
        }

        // Print the decreasing part of the row
        value -= 2; // Go back one character to avoid repeating the middle character
        for (int j = 0; j < i; j++)
        {
            cout << value--;
        }

        // Move to the next line after each row
        cout << endl;
        ;
    }
}
void capAlphaPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        char val = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << val++;
        }
        val = val - 2;
        for (int k = 0; k < i; k++)
        {
            cout << val--;
        }
        cout << endl;
    }
}

void halloNumericPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == i)
            {
                cout << j + 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void numericPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << k + 1;
        }
        for (int m = i; m >= 1; m--)
        {
            cout << m;
        }
        cout << endl;
    }
}
void solidHalfPyramid(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void fancyPattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - i - 1; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k % 2 == 0)
                cout << "*";
            else
                cout << i;
        }
        for (int m = 1; m <= 2 * n - i - 1; m++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void fancyPattern2(int n)
{

    int num = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << num++;
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {    int val=num-4;
        for (int j = 1; j <= 2 * n - 2 * i + 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << val++;
            }
        }
        cout << endl;
    }
}
int main()
{
    cout << "Hello" << endl;
    int n;
    cout << "enter Number: ";
    cin >> n;
    //   cout<<endl;
    // holloPyramid(n);
    // invertedHolloPyramid(n);
    // mixPyramid(n);
    // invertedMixPyramid(n);
    // mixPyramidNumber(n);
    // alphaPyramid(n);
    // capAlphaPyramid(n);
    // halloNumericPattern(n);
    // numericPyramid(n);
    // rightAnglePattern(n);
    // invertedRightanlge(n);
    // solidHalfPyramid(n);
    // fancyPattern1(n);
    fancyPattern2(n);
}