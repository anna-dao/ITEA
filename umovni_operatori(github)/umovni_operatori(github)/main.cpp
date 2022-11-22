/* Задане натуральне число a, яке позначає місяць (4 – квітень). 
Треба попросити користувача ввести це число і отримати його в певній змінній. 
Потім перевірити чи можна цьому числу покласти у місяць року (вважається, що в році місяці пронумеровані з першого по дванадцятий), який вказано вище. 
І, якщо можна, то вивести цей місяць на екран; якщо ні, то вивести повідомлення, що вказаному числу не можна покласти у відповідність місяць. 
Результати записати у репозиторій на github.com. Лінк на репозиторій надіслати на перевірку. */

#include <iostream>

// функція за допомогою якої можна отримати вхідні дані користувача.
int userInputRequest()
{
    int number;
    std::cout  << "Please enter a natural number: " << std::endl;
    std::cin >> number;
    return  number;
}

int main()
{
    // запис відповіді користувача у змінну
    int userInput = userInputRequest();
    
    // перевірка на відповідність умови
    while (userInput <= 0 || userInput > 12)
    {
        std::cout << "Sorry, your number is wrong. Please use the number from 1 to 12.\n" << std::endl;
        userInput = userInputRequest();
    }
    
    // виведення результату на екран
    switch(userInput)
    {
        case 1: std::cout << "The month is January." << std::endl;  break;
        case 2: std::cout << "The month is February." << std::endl;  break;
        case 3: std::cout << "The month is March." << std::endl;  break;
        case 4: std::cout << "The month is April." << std::endl;  break;
        case 5: std::cout << "The month is May." << std::endl;  break;
        case 6: std::cout << "The month is June." << std::endl;  break;
        case 7: std::cout << "The month is July." << std::endl;  break;
        case 8: std::cout << "The month is August." << std::endl;  break;
        case 9: std::cout << "The month is September." << std::endl;  break;
        case 10: std::cout << "The month is October." << std::endl;  break;
        case 11: std::cout << "The month is November." << std::endl;  break;
        case 12: std::cout << "The month is December." << std::endl;  break;
        default: std::cout << "Something is wrong. Please try again later.";  break;
    }
    
}
