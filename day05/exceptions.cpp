/*try et catch sot des block;
ken9albou 23le lehtimaliye dyal l exepction v try block 
2la lghaynah nemchou l catch block bach ngadouha 

throw exception() : keyemchi biye men try block la l catch block;

----------------->*/
#include <iostream>

int main()
{

    int x = 0;
    int y = 0;

    std::cout << "entrez x et y" << std::endl;
    std::cin >> x;
    std::cin >> y;

    try
    {
        if (y == 0)
            throw std::exception();
        else
            std::cout << x/y << std::endl;

    }
    catch(std::exception e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout <<"the program continued" << std::endl;
}


