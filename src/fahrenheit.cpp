# include <iostream>

int main(int argc, char const *argv[])
{
    int num, recebe;

    std::cout << "Digite o numero que voce deseja converter, em Fahrenheit: " << std::endl;
    std::cin >> num;
    std::cout << "Deseja converter esse numero para: \n 1) Celsius \n 2) Kelvin" << std::endl;
    std:: cin >> recebe;
    switch (recebe)
    {
    case 1: std::cout << "Convertido de Fahrenheit para Celsius: " << (num - 32) / 1.8 << std::endl;      
        break;

    case 2: std::cout << "Convertido de Fahrenheit para Kelvin: " << (num - 32) * 5 / 9 + 273 << std::endl;      
        break;
    
    default:
        break;
    }
    std::cout << "           .'|   /`." << std::endl;
    std::cout << "         .'.-.`-'.-.`." << std::endl;
    std::cout << "    ..._:   .-. .-.   :_..." << std::endl;
    std::cout << "  .'    '-.(o ) (o ).-'    `." << std::endl;
    std::cout << " :  _    _ _`~(_)~`_ _    _  :" << std::endl;
    std::cout << ":  /:   ' .-=_   _=-. `   ;|  :" << std::endl;
    std::cout << ":   :|-.._  '     `  _..-|:   :" << std::endl;
    std::cout << " :   `:| |`:-:-.-:-:'| |:'   :" << std::endl;
    std::cout << "  `.   `.| | | | | | |.'   .'" << std::endl;
    std::cout << "    `.   `-:_| | |_:-'   .'" << std::endl;
    std::cout << "      `-._   ````    _.-'" << std::endl;
    std::cout << "          ``-------''" << std::endl;
    system("Pause");
    return 0;
}