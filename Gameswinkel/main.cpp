#include <ctime>
#include <string>
#include "game.h"
#include "persoon.h"

using namespace std;

int main()
{
    time_t result = time(NULL);
    cout << asctime(localtime(&result));
    time_t curr_time = time(NULL);
    tm *tm_local = localtime(&curr_time);
    int releaseJaar1 = tm_local->tm_year + 1899; // 1 jaar geleden
    int releaseJaar2 = tm_local->tm_year + 1898; // 2 jaar geleden

    Game g1("Just Cause 3", releaseJaar1, 49.98);
    Game g2("Need for Speed: Rivals", releaseJaar2, 45.99);
    Game g3("Need for Speed: Rivals", releaseJaar2, 45.99);

    // Druk personen p1, p2 en p3 nu af naar de console

    return 0;
}
