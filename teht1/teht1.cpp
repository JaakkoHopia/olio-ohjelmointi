#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int maxnum) {
    srand(static_cast<unsigned int>(time(0)));
    int arvattavaLuku = rand() % maxnum + 1;
    int pelaajanArvaus;
    int arvaustenMaara = 0;
    do {
        std::cout << "Arvaa luku 1-" << maxnum << ": ";
        std::cin >> pelaajanArvaus;
        arvaustenMaara++;
        if (pelaajanArvaus < arvattavaLuku)
            std::cout << "Luku on suurempi.\n";
        else if (pelaajanArvaus > arvattavaLuku)
            std::cout << "Luku on pienempi.\n";
        else
            std::cout << "Oikea vastaus!\n";
    } while (pelaajanArvaus != arvattavaLuku);
    return arvaustenMaara;
}

int main() {
    int korkeinLuku = 40;
    int arvaustenMaara = game(korkeinLuku);
    std::cout << "Arvausten määrä: " << arvaustenMaara << std::endl;
    return 0;
}
