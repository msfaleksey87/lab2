#include <iostream>
using namespace std;
//#define LAB_2_1
#define LAB_2_2
//#define LAB_2_3
//#define LAB_2_4
//#define LAB_2_5

//Задача 1-----------------------------------------------------------------------------------------------------------------------------------
#ifdef LAB_2_1
//Очистка буфера cin
#define BUFF_CLEAR std::cin.ignore(10000, '\n') //Очистка буфера

//Функция верификации ввода
void inputVerification(float& input)
{
    while (cin.fail() || input < 0)
    {
        cin.clear();
        BUFF_CLEAR;
        cout<<"Вводите положительные числовые значения "<<endl;
        cin>>input;
    }
}

//Функция верификации ввода
void inputVerification(bool& input)
{
    while (cin.fail())
    {
        cin.clear();
        BUFF_CLEAR;
        cout<<"Ну попросили же 0 или 1"<<endl;
        cin>>input;
    }
}

//Идеальный вес по формуле Брока
float weightBrok(float height, bool chooseMW)
{
    if(chooseMW)
      return (height - 100) * 0.9;
    else return (height - 100) * 0.85;
}

//Индекс массы тела
float bmi(float weight, float height)
{
    float bmi;
    bmi = weight / ((height * height) / 10000);
    return bmi;
}

//Функция печатающая худой ты или толстый
void fatThin(bool chooseMW, float imt, float age)
{

    if (chooseMW)
    {
        if(age >= 19 && age < 25 )
        {
            if(imt < 21.4) cout<<"Недостаточный вес";
            else if(imt >= 21.4 && imt <= 26.4) cout<<"Вес в норме";
                 else cout<<"Избыточный вес";
        }

        else if(age >= 25 && age < 35)
        {
            if(imt < 21.6) cout<<"Недостаточный вес";
            else if(imt >= 21.6 && imt <= 26.6) cout<<"Вес в норме";
                 else cout<<"Избыточный вес";
        }

        else if(age >= 35 && age < 45)
        {
            if(imt < 22.9) cout<<"Недостаточный вес";
            else if(imt >= 22.9 && imt <= 27.9) cout<<"Вес в норме";
                 else cout<<"Избыточный вес";
        }

        else if(age >= 45 && age < 54)
        {
            if(imt < 25.8) cout<<"Недостаточный вес";
            else if(imt >= 25.8 && imt <= 30.8) cout<<"Вес в норме";
                 else cout<<"Избыточный вес";
        }

        else
        {
            if(imt < 26.6) cout<<"Недостаточный вес";
            else if(imt >= 26.6 && imt <= 31.6) cout<<"Вес в норме";
                 else cout<<"Избыточный вес";
        }
    }

    else
    {
        if(age >= 19 && age < 25 )
        {
            if(imt < 19.5) cout<<"Недостаточный вес";
            else if(imt >= 19.5 && imt <= 24.5) cout<<"Вес в норме";
                 else cout<<"Избыточный вес";
        }

        else if(age >= 25 && age < 35)
        {
            if(imt < 23.2) cout<<"Недостаточный вес";
            else if(imt >= 23.2 && imt <= 28.2) cout<<"Вес в норме";
                 else cout<<"Избыточный вес";
        }

        else if(age >= 35 && age < 45)
        {
            if(imt < 23.4) cout<<"Недостаточный вес";
            else if(imt >= 23.4 && imt <= 28.4) cout<<"Вес в норме";
                 else cout<<"Избыточный вес";
        }

        else if(age >= 25.2 && age < 30.2)
        {
            if(imt < 25.2) cout<<"Недостаточный вес";
            else if(imt >= 25.2 && imt <= 30.2) cout<<"Вес в норме";
                 else cout<<"Избыточный вес";
        }

        else
        {
            if(imt < 27.3) cout<<"Недостаточный вес";
            else if(imt >= 27.3 && imt <= 32.3) cout<<"Вес в норме";
                 else cout<<"Избыточный вес";
        }
    }
}

int main()
{
    //Ввод возраста
    float age;
    cout<<"Введите ваш возраст\n";
    cin>>age;
    inputVerification(age);
    BUFF_CLEAR;

    //Ввод веса
    float weight;
    cout<<"Введите ваш вес в кг\n";
    cin>>weight;
    inputVerification(weight);
    BUFF_CLEAR;

    //Ввод роста
    float height;
    cout<<"Введите ваш рост в сантиметрах\n";
    cin>>height;
    inputVerification(height);
    BUFF_CLEAR;

    //Мужчина/женщина
    bool chooseMW;
    cout<<"Если мужчина введите 1 если женщина 0\n";
    cin>>chooseMW;
    inputVerification(chooseMW);
    BUFF_CLEAR;

    //Идеальный вес по формуле Брока
    cout<<"Ваш идеальный вес по Броку "<<weightBrok(height, chooseMW)<<"\n";

    //Индекс массы тела
    float imt = bmi(weight, height);
    cout<<"Ваш индекс массы тела "<< imt<<"\n";

    //Толстый или худой
    fatThin(chooseMW, imt, age);

    return 0;
}
#endif
//----------------------------------------------------------------------------------------------------------------------------------

//Задача 2--------------------------------------------------------------------------------------------------------------------------
#ifdef LAB_2_2


int main()
{
    // Массив строк для хранения имен типов
    string nameType[] = {"bool", "char", "int", "float", "double", "unsigned int", "unsigned long", "unsigned long long",
                         "long double", "signed char", "short int", "long long int", "short"};

    //Массив для хранения размеров типов
    size_t sizeType[] = {sizeof (bool), sizeof (char), sizeof (int), sizeof (float), sizeof (double), sizeof (unsigned int), sizeof (unsigned long),
    sizeof (unsigned long long), sizeof (long double), sizeof (signed char), sizeof (short int), sizeof (long long int), sizeof (short)};

    //Вывод размеров типов в байтах
    for(size_t i = 0; i < sizeof (sizeType) / sizeof(sizeType[0]); i++)
        cout<<nameType[i]<<": "<<sizeType[i]<<" bytes\n";

    return 0;
}
#endif
//--------------------------------------------------------------------------------------------------------------------------------

// Задача 3-----------------------------------------------------------------------------------------------------------------------
#ifdef LAB_2_3
#define SIZE 10

//Очистка буфера cin
#define BUFF_CLEAR std::cin.ignore(10000, '\n') //Очистка буфера
using namespace std;

void inputVerification(double& input)
{
    while (cin.fail() || input < 0)
    {
        cin.clear();
        BUFF_CLEAR;
        cout<<"Вводите числовые значения\n";
        cin>>input;
    }
}

int main()
{

    double averageArr[SIZE];
    cout<<"Введите "<<SIZE<<" чисел с плавающей запятой\n";
    for(int i = 0; i < SIZE; i++)
    {
        cin>>averageArr[i];
        inputVerification(averageArr[i]);
    }
    BUFF_CLEAR;

    double sum = 0;
    for(int i = 0; i < SIZE; i++)
        sum+= averageArr[i];
    cout<<sum/SIZE;

    return 0;
}
#endif
//-------------------------------------------------------------------------------------------------------------------------------

//Задача 4-----------------------------------------------------------------------------------------------------------------------
#ifdef LAB_2_4
#include <iostream>
using namespace std;
int main()
{
    const float numbers[4] = {34.50, 0.004000, 123.005, 146000};
    for(int i = 0; i < 4; i++)
    {
        cout<<scientific<<numbers[i]<<endl;
    }


    return 0;
}

#endif
//--------------------------------------------------------------------------------------------------------------------------------

//Задача 5------------------------------------------------------------------------------------------------------------------------
#ifdef LAB_2_5
//Очистка буфера cin
#define BUFF_CLEAR std::cin.ignore(10000, '\n') //Очистка буфера

//Функция верификации ввода
void inputVerification(int& input)
{
    while (cin.fail() || input < 0)
    {
        cin.clear();
        BUFF_CLEAR;
        cout<<"Вводите положительные числовые значения "<<endl;
        cin>>input;
    }
}


int main()
{
    // 1-е здание
    cout<<"Задание 1"<<endl;
    cout<<"(true && true) || false = "<<boolalpha<<((true && true) || false)<<endl;
    cout<<"(false && true) || true = "<<((false && true) || true)<<endl;
    cout<<"(false && true) || false || true"<<((false && true) || false || true)<<endl;
    cout<<"(5 > 6 || 4 > 3) && (7 > 8) = "<<((5 > 6 || 4 > 3) && (7 > 8))<<endl;
    cout<<"!(7 > 6 || 3 > 4) = "<<!(7 > 6 || 3 > 4)<<endl<<endl;

    //2-е задание
    cout<<"Задание 2"<<endl;
    enum boolconst
    {
        A = true,
        B = true,
        C = false,
        D = false,
        E = true,
        F = false
    };

    cout<<"(( A && B ) || ( !C) && (D||E)) = "<<((A && B) || (!C) && (D ||E))<<endl;
    cout<<"((A && B) || (C && D) || (!E)) = "<<((A && B) || (C && D) || (!E))<<endl;
    cout<<"((A || B) && (C || D) && (E || F)) = "<<((A || B) && (C || D) && (E || F))<<endl;
    cout<<"((A > B) && (C < D) && (E != F)) = "<<((A > B) && (C < D) && (E != F))<<endl<<endl;


    //3-задание
    cout<<"Задание 3"<<endl;
    bool a{true}, b{false};
    cout<<(!(a && b) == (!a) || (!b))<<endl;
    cout<<(!(a || b) == (!a) && (!b))<<endl<<endl;

    //4-задание
    cout<<"Задание 4"<<endl;
    int x, y, z, v;
    bool logicValue;
    cout<<"Введите 4 целочисленных значения"<<endl;
    cin>>x;
    inputVerification(x);
    cin>>y;
    inputVerification(y);
    cin>>z;
    inputVerification(z);
    cin>>v;
    inputVerification(v);

    //Помещает в переменную x сумму 3, 4, 5
    x= 3 + 4 + 5;
    cout<<x<<endl;

    //Присваивает переменной y значение переменной z, затем переменной x присваивает новое значение переменной y
    x = y = z;
    cout<<x<<" "<<y<<" "<<z<<endl;

    //Присваивает переменной z значение равное z умноженнное на y+1+5
    z *= ++y + 5;
    cout<<z<<endl;

    /*Присваивает логической переменной logicValue значение логического выражения(true/false), если в обоих парах переменных x-y; z-v
    хоть одна не будет равна нулю, переменная logicValue будет иметь значение true*/
    logicValue = (x || y) && (z || v);
    cout<<logicValue;
    return 0;

}
#endif
