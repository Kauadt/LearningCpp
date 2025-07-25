#include <iostream>

using namespace std;

int main()
{
    int value;
    int banknotes[] = {100, 50, 20, 10, 5, 2, 1};
    int qtdBanknotes[] = {0, 0, 0, 0, 0, 0, 0};
    cin >> value;

    for (int i = 0; i < 7; i++)
    {
        if (i == 0)
        {
            cout << value << endl;
        }

        int condicionalRule = value / banknotes[i];
        if (condicionalRule > 0)
        {
            qtdBanknotes[i] = condicionalRule;
            value -= condicionalRule * banknotes[i];
        }
        cout << qtdBanknotes[i] << " nota(s)" << " de R$ " << banknotes[i] << ",00" << endl;
    }

    return 0;
}