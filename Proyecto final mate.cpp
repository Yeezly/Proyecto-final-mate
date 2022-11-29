// Proyecto final mate.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include<vector>

int main()
{
    int option1 = 0;
    int option2 = 0;
    int auxiliar = 0;
    std::string var1[16];

    std::string tacos[5] = { "tortilla", "cilantro", "carne", "cebolla", "chile" };
    std::string chilaquiles[8] = { "tortilla", "cilantro", "queso", "pollo", "crema", "tomate", "chile", "ajo" };
    std::string enchiladas[8] = { "tortilla", "pollo", "tomate", "crema", "cebolla", "chile", "cilantro", "queso" };
    std::string lentejas[5] = { "lentejas", "carne", "chorizo", "salchicha", "tomate" };
    std::string picadillo[7] = { "carne", "zanahoria", "papa", "calabacita", "tomate", "cebolla", "chicharo" };

    std::cout << "Elige los dos platillos que quieres hacer" << std::endl;
    std::cout << "1. tacos" << std::endl;
    std::cout << "2. chilaquiles" << std::endl;
    std::cout << "3. enchiladas" << std::endl;
    std::cout << "4. lentejas" << std::endl;
    std::cout << "5. picadillo" << std::endl;

    std::cout << std::endl;
    std::cin >> option1;
    std::cin >> option2;
    std::cout << std::endl;

    switch (option1)
    {
    case 1:
        for (int i = 0; i < std::end(tacos) - std::begin(tacos); i++) {
            var1[i] = tacos[i];
        }
        auxiliar = std::end(tacos) - std::begin(tacos);
        break;
    case 2:
        for (int i = 0; i < std::end(chilaquiles) - std::begin(chilaquiles); i++) {
            var1[i] = chilaquiles[i];
        }
        auxiliar = std::end(chilaquiles) - std::begin(chilaquiles);
        break;
    case 3:
        for (int i = 0; i < std::end(enchiladas) - std::begin(enchiladas); i++) {
            var1[i] = enchiladas[i];
        }
        auxiliar = std::end(enchiladas) - std::begin(enchiladas);
        break;
    case 4:
        for (int i = 0; i < std::end(lentejas) - std::begin(lentejas); i++) {
            var1[i] = lentejas[i];
        }
        auxiliar = std::end(lentejas) - std::begin(lentejas);
        break;
    case 5:
        for (int i = 0; i < std::end(picadillo) - std::begin(picadillo); i++) {
            var1[i] = picadillo[i];
        }
        auxiliar = std::end(picadillo) - std::begin(picadillo);
        break;
    }

    switch (option2)
    {
    case 1:
        for (int i = 0; i < std::end(tacos) - std::begin(tacos); i++) {
            var1[i + auxiliar] = tacos[i];
        }
        auxiliar = auxiliar + (std::end(tacos) - std::begin(tacos));
        break;
    case 2:
        for (int i = 0; i < std::end(chilaquiles) - std::begin(chilaquiles); i++) {
            var1[i + auxiliar] = chilaquiles[i];
        }
        auxiliar = auxiliar + (std::end(chilaquiles) - std::begin(chilaquiles));
        break;
    case 3:
        for (int i = 0; i < std::end(enchiladas) - std::begin(enchiladas); i++) {
            var1[i + auxiliar] = enchiladas[i];
        }
        auxiliar = auxiliar + (std::end(enchiladas) - std::begin(enchiladas));
        break;
    case 4:
        for (int i = 0; i < std::end(lentejas) - std::begin(lentejas); i++) {
            var1[i + auxiliar] = lentejas[i];
        }
        auxiliar = auxiliar + (std::end(lentejas) - std::begin(lentejas));
        break;
    case 5:
        for (int i = 0; i < std::end(picadillo) - std::begin(picadillo); i++) {
            var1[i + auxiliar] = picadillo[i];
        }
        auxiliar = auxiliar + (std::end(picadillo) - std::begin(picadillo));
        break;
    }

    for (int i = 0; i < auxiliar; i++)
    {
        for (int j = i + 1; j < auxiliar; j++)
        {
            if (var1[i] == var1[j])
            {
                std::cout << var1[i] << " ";
            }
        }
    }
}

