#include <iostream>

using namespace std;

int main()
{
    int time;
    int convertedTime[] = {0, 0, 0};
    cin >> time;

    for (int i = 0; i < 3; i++)
    {
        int condicionalRule = time % 60;
        if (condicionalRule > 0)
        {
            convertedTime[i] = condicionalRule;
            time -= condicionalRule * 60;
        }
    }

    cout << convertedTime[0] << ":" << convertedTime[1] << ":" << convertedTime[2] << endl;

    return 0;

    // This code will be continued
}