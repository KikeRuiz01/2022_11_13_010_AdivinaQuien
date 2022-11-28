// 2022_11_13_010_AdivinaQuien.cpp 
// Programa hecho por Carlos Enrique Ruiz Peña
//

#include <iostream>
#include <Windows.h>

int main()
{
    bool de1, de2, de3;
    std::cout << "Adivina quien de Disgaea\n" << "Si no sabes que es Disgaea puedes buscarlo jijiji\n" << 
        "Para respuesta afirmativa ingrese 1. Para Respuesta negativa ingrese 0" << std::endl;
    Sleep(1554);
    std::cout << "Tu personaje es Humanoide?" << std::endl;
    std::cin >> de1;
    if (de1 == 1)
    {
        std::cout << "Tu personaje es hombre?\n";
        std::cin >> de2;
        if (de2 == 1)
        {
            std::cout << "Tu personaje es un demonio? \n";
                std::cin >> de3;
            if (de3 == 1)
            {
                std::cout << "Tu personaje es Laharl \n";
                
            }
            else
            {
                std::cout << "Tu personaje es Valvatorez \n";
              
            }
        }
        else
        {
            std::cout << "Tu personaje tiene el pecho plano? xd \n";
            std::cin >> de3;
            if (de3 == 1)
            {
                std::cout << "Tu personaje es Etna \n";
           
            }
            else
            {
                std::cout << "Tu personaje es Artina \n";
                
            }
        }
    }
    else
    {
        std::cout << "Tu personaje tiene aparciencia de mujer? \n";
        std::cin >> de2;
        if (de2 == 1)
        {
            std::cout << "Tu personaje tiene forma de gato? \n";
            std::cin >> de3;
            if (de3 == 1)
            {
                std::cout << "Tu personaje es la Nekomata \n";
               
            }
            else
            {
                std::cout << "Tu personaje es la sucubulo \n";

            }
        }
        else
        {
            std::cout << "Tu personaje es un no muerto? \n";
            std::cin >> de3;
            if (de3 == 1)
            {
                std::cout << "Tu personaje es un zombie \n";
                
            }
            else
            {
                std::cout << "Tu personaje es un Fantasma \n";
                
            }
        }
    }

}


