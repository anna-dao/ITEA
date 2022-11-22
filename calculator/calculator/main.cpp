/*
 Калькулятор

 Завдання
 Ознайомити студента з:
 використання оператора каскад;
 та вдосконалити навички студента у побудові інтерактивних програм.

 Сценарій

 Ваше завдання — написати справжній, інтерактивний, п’ятифункціональний
 калькулятор. Звичайно, ви можете додати скільки завгодно нових функцій, але
 основні операції (+, -, *, /, %) є обов’язковими. Більше того, ми сподіваємось, що ваш
 калькулятор буде досить розумним, щоб його не обдурити діленням на 0.
 Ми хочемо, щоб ваша програма відображала меню, яке виглядає так:
 МЕНЮ:
 0 — вихід
 1 — додавання
 2 — віднімання
 3 — множення
 4 — ділення
 5 — остача
 Зроби вибір!
 Далі ваша програма має прочитати ціле значення, що відповідає обраному варіанту, і
 діяти відповідно до цього. Якщо опція вимагає виконання подальших операцій,
 ваша програма має виконати операцію та відобразити результат. Якщо для введеного
 значення нема операції, то видати відповідне повідомлення.
 Ретельно протестуйте свою програму, використовуючи широкий спектр даних.
 */

#include <iostream>

// creation of enum for saving options
enum Operations
{
    EXIT = 0,
    ADDITION,
    SUBSTRACTION,
    MULTIPLICATION,
    DIVISION,
    REMANIDING
};

//function that gives user options
int userOptionRequest()
{
    int option;
    std::cout  << "Please choose an option for calculator\n" << std::endl
    << "0 - EXIT" << std::endl
    << "1 - ADDITION" << std::endl
    << "2 - SUBSTRACTION" << std::endl
    << "3 - MULTIPLICATION" << std::endl
    << "4 - DIVISION" << std::endl
    << "5 - REMAINDING" << std::endl;
    std::cin >> option;
    return  option;
}

//print results of the operation
void printResult(double result)
{
    std::cout << "The result of your operation is: " << result << std::endl;
    
}

int main()
{
    double a, b, result;
    std::cout << "Please enter 2 numbers for the operation: " << std::endl;
    std::cin >> a  >> b;
    int option = userOptionRequest();
    
    //counting the result based on the user choice
    switch (option) {
        case EXIT: exit(0); break;
        case ADDITION: result = a + b; break;
        case SUBSTRACTION: result = a - b; break;
        case MULTIPLICATION: result = a * b; break;
        case DIVISION:
            if (a == 0 || b == 0)
                exit(0);
            result = a / b; break;
        case REMANIDING: result = int(a) % int(b); break;
    }
    
    printResult(result);
    
    return 0;
}
