#include <iostream>
#include <string>
#include <cmath>
#include <limits>
void main0();
void main10();
void main11();
void main12();
void main13();
void main14();
void main15();
void main20();
void main21();
void main22();
void main23();
void main24();
void main25();
void main26();
void main30();
void main31();
void main32();
void main33();
void main34();
void main35();
void main36();
void main37();
void main38();
void main39();

void main0() {
    std::string f;
    while (true) {
        std::cout << "Выберите пожалуйста лабораторную работу которую хотите проверить\n";
        std::cout << "На текущий момент доступно 3 лабораторной работы, введите от 1 до 3 для выбора одного из них\n";
        std::cout << "Введите exit если хотите выйти из программы\n";
        std::cin >> f;
        if (f == "1") {
            main10();
        }
        else if (f == "2") {
            main20();
        }
        else if (f == "3") {
            main30();
        }
        else if (f == "exit") {
            std::cout << "Выход из программы...\n";
            return;
        }
        else {
            std::cout << "Ошибка: введено недопустимое значение. Повторите ввод\n";
        }
    }
}
void main20() {
    std::cout << "Лабораторная работа №2. Разветвляющиеся алгоритмы\n";
    std::string f;
    while (true) {
        std::cout << "Выберите задание от 1 до 6\n";
        std::cout << "Выберите \"Back\" чтобы вернуться к выбору лабораторной работы\n";
        std::cin >> f;
        if (f == "1") {
            main21();
        }
        else if (f == "2") {
            main22();
        }
        else if (f == "3") {
            main23();
        }
        else if (f == "4") {
            main24();
        }
        else if (f == "5") {
            main25();
        }
        else if (f == "6") {
            main26();
        }
        else if (f == "Back" || f == "back") {
            return;
        }
        else {
            std::cout << "Ошибка: введено недопустимое значение. Повторите ввод\n";
            continue;
        }
    }
}
void main30() {
    std::cout << "Лабораторная работа №3. Циклические алгоритмы\n";
    std::string f;
    while (true) {
        std::cout << "Выберите задание от 1 до 9\n";
        std::cout << "Выберите \"Back\" чтобы вернуться к выбору лабораторной работы\n";
        std::cin >> f;
        if (f == "1") {
            main31();
        }
        else if (f == "2") {
            main32();
        }
        else if (f == "3") {
            main33();
        }
        else if (f == "4") {
            main34();
        }
        else if (f == "5") {
            main35();
        }
        else if (f == "6") {
            main36();
        }
        else if (f == "7") {
            main37();
        }
        else if (f == "8") {
            main38();
        }
        else if (f == "9") {
            main39();
        }
        else if (f == "Back" || f == "back") {
            return;
        }
        else {
            std::cout << "Ошибка: введено недопустимое значение. Повторите ввод\n";
            continue;
        }
    }
}
void main10() {
    std::cout << "Лабораторная работа №1. Линейные алгоритмы\n";
    std::string f;
    while (true) {
        std::cout << "Выберите задание от 1 до 5\n";
        std::cout << "Выберите \"Back\" чтобы вернуться к выбору лабораторной работы\n";
        std::cin >> f;
        if (f == "1") {
            main11();
        }
        else if (f == "2") {
            main12();
        }
        else if (f == "3") {
            main13();
        }
        else if (f == "4") {
            main14();
        }
        else if (f == "5") {
            main15();
        }
        else if (f == "Back" || f == "back") {
            return;
        }
        else {
            std::cout << "Ошибка: введено недопустимое значение. Повторите ввод (от 1 до 5):\n";
            continue;
        }
    }
}
void main11() {
    std::cout << "Задание: ввести два числа, вывести их сумму, разность, произведение и частное.\n";
    while (true) {
        std::cout << "Введите первое число\n";
        double a, b, c;
        if (!(std::cin >> a)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        std::cout << "Введите второе число\n";
        if (!(std::cin >> b)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        c = a + b;
        std::cout << a << " + " << b << " = " << c << std::endl;
        c = a - b;
        std::cout << a << " - " << b << " = " << c << std::endl;
        c = a * b;
        std::cout << a << " * " << b << " = " << c << std::endl;
        if (b == 0) { std::cout << a << " / " << b << " = " << "На ноль делить нельзя" << std::endl; }
        else { c = a / b; std::cout << a << " / " << b << " = " << c << std::endl; }
        return;
    }
}
void main12() {
    std::cout << "Задание: вычислить площадь и периметр прямоугольника по введённым сторонам.\n";
    while (true) {
        double a, b, P, S;
        std::cout << "Введите первую сторону\n";
        if (!(std::cin >> a)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск задания\n";
            continue;
        }
        else if (a == 0) {
            std::cout << "Ошибка ввода, перезапуск задания\n";
            continue;
        }
        std::cout << "Введите вторую сторону\n";
        if (!(std::cin >> b)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск задания\n";
            continue;
        }
        else if (b == 0) {
            std::cout << "Ошибка ввода, перезапуск задания\n";
            continue;
        }
        P = (a + b) * 2;
        std::cout << "Периметр прямоугольника: " << P << std::endl;
        S = a * b;
        std::cout << "Площадь прямоугольника: " << S << std::endl;
        return;
    }
}
void main13() {
    std::cout << "Задание: перевести введённую температуру из градусов Цельсия в Фаренгейт и Кельвин.\n";
    double C, F, K, i = 0;
    while (true) {
        std::cout << "Введите число равное температуре Цельсия\n";
        if (!(std::cin >> C)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск задания\n";
            continue;
        }
        break;
    }
    F = (C * 1.8) + 32;
    std::cout << "Температура по Фаренгейту: " << F << std::endl;
    K = C + 273.15;
    std::cout << "Температура по Кельвину: " << K << std::endl;;
    return;
}
void main14() {
    double a = 5, b = 3, c = -26, D;
    std::cout << "Задание: вычислить значение выражения по формуле (например, дискриминант без анализа знака).\n";
    std::cout << "Выражение: 5x^2+3x-26\n";
    D = std::pow(b, 2) - 4 * a * c;
    std::cout << "Дискриминант равен: " << D << std::endl;
    return;
}

void main15() {
    std::cout << "Задание: по длинам трёх сторон треугольника вычислить его площадь по формуле Герона.\n";
    while (true) {
        double a, b, c, S, p;
        std::cout << "Введите первую сторону\n";
        if (!(std::cin >> a)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск задания\n";
            continue;
        }
        else if (a <= 0) {
            std::cout << "Ошибка ввода, перезапуск задания\n";
            continue;
        }
        std::cout << "Введите вторую сторону\n";
        if (!(std::cin >> b)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск задания\n";
            continue;
        }
        else if (b <= 0) {
            std::cout << "Ошибка ввода, перезапуск задания\n";
            continue;
        }
        std::cout << "Введите третью сторону\n";
        if (!(std::cin >> c)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск задания\n";
            continue;
        }
        else if (c <= 0) {
            std::cout << "Ошибка ввода, перезапуск задания\n";
            continue;
        }
        if (a + b <= c || a + c <= b || b + c <= a) {
            std::cout << "Треугольник с такими сторонами не существует, перезапуск\n";
            continue;
        }
        p = (a + b + c) / 2;
        S = std::sqrt(p * (p - a) * (p - b) * (p - c));
        std::cout << "Площадь треугольника по формуле Герона: " << S << std::endl;
        return;
    }
}
void main21() {
    std::cout << "Задание: определить, является ли введённое число чётным или нечётным.\n";
    while (true) {
        std::cout << "Введите число\n";
        int a;
        if (!(std::cin >> a)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        if (a % 2 == 0) { std::cout << "Четное\n"; }
        else { std::cout << "Нечётное\n"; }
        return;
    }
}
void main22() {
    std::cout << "найти наибольшее из двух, а затем из трёх введённых чисел.\n";
    while (true) {
        std::cout << "Введите число которое укажет: будут ли два числа или три\n";
        double a, b, c, max;
        if (!(std::cin >> c)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        if (c == 2) {
            std::cout << "Введите первое число\n";
            if (!(std::cin >> a)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Ошибка ввода, перезапуск\n";
                continue;
            }
            std::cout << "Введите второе число\n";
            if (!(std::cin >> b)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Ошибка ввода, перезапуск\n";
                continue;
            }
            if (a > b) {
                std::cout << a << " больше чем " << b << std::endl;
                return;
            }
            if (b > a) {
                std::cout << b << " больше чем " << a << std::endl;
                return;
            }
            if (b == a) {
                std::cout << a << " и " << b << "равны\n" << std::endl;
                return;
            }
        }
        else if (c == 3) {
            std::cout << "Введите первое число\n";
            if (!(std::cin >> a)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Ошибка ввода, перезапуск\n";
                continue;
            }
            std::cout << "Введите второе число\n";
            if (!(std::cin >> b)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Ошибка ввода, перезапуск\n";
                continue;
            }
            std::cout << "Введите третье число\n";
            if (!(std::cin >> c)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Ошибка ввода, перезапуск\n";
                continue;
            }
            max = a;
            if (b > max) {
                max = b;
            }
            if (c > max) {
                max = c;
            }
            std::cout << "Самое большое число: \n" << max << std::endl;
            return;
        }
        else {
            std::cout << "Ошибка ввода, перезапуск\n"; continue;
        }
    }
}
void main23() {
    std::cout << "Задание: определить, может ли треугольник с заданными сторонами существовать, и если да — является ли он прямоугольным, равносторонним или равнобедренным.\n";
    while (true) {
        std::cout << "Введите первую сторону\n";
        double a, b, c, g, z, x, v, f;
        if (!(std::cin >> a) || a <= 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        std::cout << "Введите вторую сторону\n";
        if (!(std::cin >> b) || b <= 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        std::cout << "Введите третью сторону\n";
        if (!(std::cin >> c) || c <= 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        if (a + b <= c || a + c <= b || b + c <= a) {
            std::cout << "Такого треугольника не существует (у треугольника при суммировании двух катетов должна получиться более длинная линия чем гипотенуза, иначе этот треугольник невозможен)\n";
            continue;
        }
        if (a == b && b == c && a == c) {
            std::cout << "Треугольник равносторонний\n"; return;
        }
        if (a == b || b == c || a == c) {
            std::cout << "Треугольник равнобедренный\n"; return;
        }
        if (a > b && a > c) {
            z = b, x = c, v = a, g = (z * z) + (x * x), f = v * v; if (f == g) { std::cout << "Треугольник прямоугольный\n"; return; }
        }
        if (b > a && b > c) {
            z = c, x = a, v = b, g = (z * z) + (x * x), f = v * v; if (f == g) { std::cout << "Треугольник прямоугольный\n"; return; }
        }
        if (c > b && c > a) {
            z = b, x = a, v = c, g = (z * z) + (x * x), f = v * v; if (f == g) { std::cout << "Треугольник прямоугольный\n"; return; }
        }
        if (a != b && b != c && a != c) {
            std::cout << "Треугольник разносторонний\n"; return;
        }
    }
}
void main24() {
    std::cout << "Задание: решить квадратное уравнение с полным анализом дискриминанта (нет корней / один корень / два корня).\n";
    while (true) {
        double a, b, c, x, x1, x2, z, D;
        std::cout << "Введите число a для \"Ax^2 ± bx ± c\"\n";
        if (!(std::cin >> a)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        std::cout << "Введите число b для \"ax^2 ± Bx ± c\"\n";
        if (!(std::cin >> b)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        std::cout << "Введите число c для \"ax^2 ± bx ± C\"\n";
        if (!(std::cin >> c)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        std::cout << "Введите число для выбора знаков:\n";
        std::cout << "1) ax^2 + bx + c\n";
        std::cout << "2) ax^2 - bx - c\n";
        std::cout << "3) ax^2 + bx - c\n";
        std::cout << "4) ax^2 - bx + c\n";
        if (!(std::cin >> z) || z <= 0 || z >= 5) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        if (z == 2) { b = -b;c = -c; }
        if (z == 3) { c = -c; }
        if (z == 4) { b = -b; }
        D = (b * b) - 4 * a * c;
        if (D > 0) {
            x1 = (-b + std::sqrt(D)) / (2 * a);
            x2 = (-b - std::sqrt(D)) / (2 * a);
            std::cout << "D = " << D << " > 0, два корня:\n";
            std::cout << "x1 = " << x1 << std::endl;
            std::cout << "x2 = " << x2 << std::endl;
            return;
        }
        else if (D == 0) {
            x = (-b) / (2 * a);
            std::cout << "D = " << D << " = 0, один корень:\n";
            std::cout << "x = " << x << std::endl;
            return;
        }
        else if (D < 0) {
            std::cout << "D = " << D << " < 0, вещественных корней нет\n";
            return;
        }
    }
}
void main25() {
    std::cout << "Задание: реализовать простой калькулятор с выбором операции через меню (switch/case) и обработкой деления на ноль.\n";
    while (true) {
        std::cout << "Введите первое число\n";
        double a, b, c;
        char s;
        if (!(std::cin >> a)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        std::cout << "Введите второе число\n";
        if (!(std::cin >> b)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        std::cout << "Введите любой знак из +, -, *, /\n";
        if (!(std::cin >> s)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        if (s != '+' && s != '-' && s != '*' && s != '/') {
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        switch (s)
        {
        case '+':
            c = a + b;
            std::cout << a << '+' << b << '=' << c << "\n";
            break;
        case '-':
            c = a - b;
            std::cout << a << '-' << b << '=' << c << "\n";
            break;
        case '*':
            c = a * b;
            std::cout << a << '*' << b << '=' << c << "\n";
            break;
        case '/': if (b == 0) { std::cout << "На ноль делить нельзя, перезапуск\n"; continue; }
                c = a / b;
                std::cout << a << '/' << b << '=' << c << "\n";
                break;
        }
        return;
    }
}
void main26() {
    std::cout << "Задание: по дате (день, месяц, год) определить, является ли год високосным, без использования готовых библиотечных функций.\n";
    while (true) {
        int a, b, c;
        std::cout << "Внимание! не осуществлена более точная проверка даты во всех месяцах\n";
        std::cout << "Введите год\n";
        if (!(std::cin >> a) || a <= 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        std::cout << "Введите месяц (цифру)\n";
        if (!(std::cin >> b) || b <= 0 || b >= 13) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        std::cout << "Введите день\n";
        if (!(std::cin >> c) || c <= 0 || c >= 32) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        if (a % 400 == 0) { std::cout << "Год високосный\n"; }
        else if (a % 100 == 0) { std::cout << "Год не високосный\n"; }
        else if (a % 4 == 0) { std::cout << "Год високосный\n"; }
        else { std::cout << "Год не високосный\n"; }
        return;
    }
}
void main31() {
    std::cout << "Задание: вывести на экран числа от 1 до N и их сумму.\n";
    while (true) {
        std::cout << "Введите число N\n";
        double sum = 0, N;
        if (!(std::cin >> N) || N <= 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        for (int i = 0;i <= N;i++) {
            std::cout << i << "\n";
            sum += i;
        }
        std::cout << "Конец отчета" << "\n";
        std::cout << "Сумма всех чисел: " << sum << "\n";
        return;
    }
}
void main32() {
    std::cout << "Задание: вычислить факториал числа N (итеративно).\n";
    while (true) {
        std::cout << "Введите число N\n";
        double F = 1, N;
        if (!(std::cin >> N) || N <= 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        for (int i = 1;i <= N;i++) {
            F *= i;
        }
        std::cout << "Факториал числа N: " << F << "\n";
        return;
    }
}
void main33() {
    std::cout << "Задание: найти сумму цифр введённого числа.\n";
    while (true) {
        int a, c = 0, b = 0, sum = 0;
        std::cout << "Введите число\n";
        if (!(std::cin >> a)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        while (a != 0) {
            b = a % 10;
            sum += a % 10;
            a -= b;
            a /= 10;
        }


        std::cout << "Сумма цифр числа: " << sum << "\n";
        return;
    }
}
void main34() {
    std::cout << "Задание: определить, является ли число простым.\n";
    while (true) {
        int a, i=2;
        std::cout << "Введите число\n";
        if (!(std::cin >> a && !(a <= 1))) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        while (a > i) {
            if (a % i == 0) { std::cout << "Число: " << a << " не простое" << "\n"; return; }
            i++;
        }
        std::cout << "Число: "<<a<<" простое"<< "\n";
        return;
    }
}
void main35() {
    std::cout << "Задание: вывести на экран таблицу умножения от 1 до N.\n";
    while (true) {
        int N,a=1,b=1,c;
        std::cout << "Введите число\n";
        if (!(std::cin >> N && !(N <= 0))) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        while (N >= b) {
            for (;N >= a;a++) {
                c = a * b;
                std::cout << a << " * " << b << " = " << c << "\n";
            }
            b++;
            a = 1, c = 1;
            std::cout << "\n";
        }

        return;
    }
}
void main36() {
    std::cout << "Задание: найти все делители числа N и их количество.\n";
    while (true) {
        int N, i=2, x=0;
        std::cout << "Введите число\n";
        if (!(std::cin >> N && !(N <= 0))) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        while (N >= i) {

            if (N % i == 0) {
                std::cout << i; x++;
                if (i == N) std::cout << ".";
                else std::cout << ", ";
            }
            i++;
        }
        std::cout << "\nКоличество делителей числа \"" <<N<<"\" : " << x<<"\n";
        return;
    }
}
void main37() {
    std::cout << "Задание: вычислить N-ое число Фибоначчи итеративным способом.\n";
    while (true) {
        int N, a = 1,i=1, x = 0, c;
        std::cout << "Введите число\n";
        if (!(std::cin >> N && !(N <= 0))) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        while (N >= i) {
            c=a+x;
        std::cout <<c<<" ";
        i++;
        x = a, a = c;
        }
        std::cout << "\n";
        return;
    }
}
void main38() {
    std::cout << "Задание: реализовать алгоритм Евклида для нахождения НОД и НОК двух чисел.\n";
    while (true) {
        int a,b,c,a1,b1,NOD,NOK;
        std::cout << "Введите первое число\n";
        if (!(std::cin >> a)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        std::cout << "Введите второе число\n";
        if (!(std::cin >> b)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода, перезапуск\n";
            continue;
        }
        a1 = a, b1 = b;
        while (true) {
            c = a1 % b1;
            if (c == 0) { NOD = b1;break; }
            a1 = b1, b1 = c;
        }
        NOK = (a * b) / NOD;
        std::cout << "NOD(" << a << ", " << b << ") = " << NOD << ", " << "NOK(" << a << ", " << b << ") = " << NOK << ".\n";
        return;
    }
}
void main39() {
    std::cout << "Задание: организовать проверку корректности введённых данных с помощью цикла (повторный запрос ввода, пока данные не станут допустимыми).\n";
    double a;
    while (true) {
        std::cout << "Введите данные (корректные данные = 5-10)\n";
        if (!(std::cin >> a) || (a <= 4) || (a >= 11)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Данные не верны, перезапуск\n";
            continue;
        }
        else { break; }
    }
        std::cout << "Данные: "<<a<<" верны.\n";
        return;
}

int main() {
    setlocale(LC_ALL, "ru");
    std::cout << "Добро пожаловать в программу по выполнению лабораторной практики\n";
    main0();
}