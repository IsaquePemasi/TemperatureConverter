# include <iostream>

int main(int argc, char const *argv[])
{
    int num, recebe;

    std::cout << "Digite o numero que voce deseja converter, em Kelvin: " << std::endl;
    std::cin >> num;
    std::cout << "Deseja converter esse numero para: \n 1) Celsius \n 2) Fahrenheit" << std::endl;
    std:: cin >> recebe;
    switch (recebe)
    {
    case 1: std::cout << "Convertido de Kelvin para Celsius: " << num - 273 << std::endl;      
        break;

    case 2: std::cout << "Convertido de Kelvin para Fahrenheit: " << (num - 273) * 1.8 + 32 << std::endl;      
        break;
    
    default:
        break;
    }

    system("Pause");
    return 0;
}