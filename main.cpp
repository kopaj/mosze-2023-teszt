#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];    //N_ELEMENTS helyett NELEMENTS van
    std::cout << '1-100 ertekek duplazasa' //string miatt "" karakterek kozott kene lennie a szovegnek a jelenlegi '' karakterek helyett
    for (int i = 0;)    //hibas for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //hibas for ciklus
    {
        std::cout << "Ertek:" //nem irunk ki semmit, ertelmetlen, illetve, nincs ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //hibas for ciklus (, helyett ; az N_ELEMENTS utan)
    {
        atlag += b[i] //nincs ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
