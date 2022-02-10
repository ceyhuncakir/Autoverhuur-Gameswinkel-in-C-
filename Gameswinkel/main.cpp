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

    Persoon p1("Eric", 200);
    Persoon p2("Hans", 55);
    Persoon p3("Arno", 185);

    p1.koop(g1);
    p1.koop(g1);
    p1.koop(g3);
    p2.koop(g2);
    p2.koop(g1);
    p3.koop(g3);

    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;
    std::cout << "p3: " << p3 << std::endl;

    p1.verkoop(g1, p3);
    p2.verkoop(g2, p3);
    p2.verkoop(g1, p1);

    std::cout << std::endl;
    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;
    std::cout << "p3: " << p3 << std::endl;

    return 0;
}
