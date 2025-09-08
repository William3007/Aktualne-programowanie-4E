
#include <iostream>
#include <conio.h>

int main()
{
    std::cout << "______________________________________________\n";

    std::cout << "+\n"; 
    std::string space =" ";
    char road = 1;
    int press = 1;
    
    while (true)
    {
      
        road = _getch();
        switch (road) {
        case '6': {
            road = 6;
        }break;
        case '4': {
            road = 4;
        }break;
        case '5': {
            road = 5;
        }break;
        }

        //std::cin >> road;
        if (road == 6)
        {
            system("cls");
            for (int i = 0; i < press; i++)
            {
                std::cout << space;
            }

            press++;

            std::cout << "+\n";
        }
        if (road == 5)
            break;

        if (road == 4)
        {
            system("cls");
            press--;
            for (int j = 0; j < press; j++)
            {
                std::cout << space; 
            }
            std::cout << "+\n";
        }
            
        
    }
}
