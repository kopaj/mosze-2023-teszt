#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];    //[javitva]N_ELEMENTS helyett NELEMENTS van 
    std::cout << "1-100 ertekek duplazasa"; //[javitva]string miatt "" karakterek kozott kene lennie a szovegnek a jelenlegi '' karakterek helyett, illetve ;
    for (int i = 0; i < N_ELEMENTS; i++)    //[javitva]hibas for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) //[javitva]hibas for ciklus
    {
        std::cout << " Ertek:" << b[i]; //[javitva]nem irunk ki semmit, ertelmetlen, illetve, nincs ;
    }    
    std::cout << "\nAtlag szamitasa: " << std::endl;
    int atlag = 0;  //[javitva]nincs inicializálva
    for (int i = 0; i < N_ELEMENTS; i++) //[javitva]hibas for ciklus (, helyett ; az N_ELEMENTS utan)
    {
        atlag += b[i]; //[javitva]nincs ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Szia! Bendeguz vagyok a hegyi olasz." << std::endl;
    return 0;
}
