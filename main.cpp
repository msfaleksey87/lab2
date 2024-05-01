#include <iostream>
using namespace std;
//#define LAB_2_1
#define LAB_2_2
//#define LAB_2_3
//#define LAB_2_4
//#define LAB_2_5

//����� 1-----------------------------------------------------------------------------------------------------------------------------------
#ifdef LAB_2_1
//���⪠ ���� cin
#define BUFF_CLEAR std::cin.ignore(10000, '\n') //���⪠ ����

//�㭪�� ���䨪�樨 �����
void inputVerification(float& input)
{
    while (cin.fail() || input < 0)
    {
        cin.clear();
        BUFF_CLEAR;
        cout<<"������ ������⥫�� �᫮�� ���祭�� "<<endl;
        cin>>input;
    }
}

//�㭪�� ���䨪�樨 �����
void inputVerification(bool& input)
{
    while (cin.fail())
    {
        cin.clear();
        BUFF_CLEAR;
        cout<<"�� ����ᨫ� �� 0 ��� 1"<<endl;
        cin>>input;
    }
}

//������� ��� �� ��㫥 �ப�
float weightBrok(float height, bool chooseMW)
{
    if(chooseMW)
      return (height - 100) * 0.9;
    else return (height - 100) * 0.85;
}

//������ ����� ⥫�
float bmi(float weight, float height)
{
    float bmi;
    bmi = weight / ((height * height) / 10000);
    return bmi;
}

//�㭪�� ������� �㤮� �� ��� ⮫���
void fatThin(bool chooseMW, float imt, float age)
{

    if (chooseMW)
    {
        if(age >= 19 && age < 25 )
        {
            if(imt < 21.4) cout<<"��������� ���";
            else if(imt >= 21.4 && imt <= 26.4) cout<<"��� � ��ଥ";
                 else cout<<"������� ���";
        }

        else if(age >= 25 && age < 35)
        {
            if(imt < 21.6) cout<<"��������� ���";
            else if(imt >= 21.6 && imt <= 26.6) cout<<"��� � ��ଥ";
                 else cout<<"������� ���";
        }

        else if(age >= 35 && age < 45)
        {
            if(imt < 22.9) cout<<"��������� ���";
            else if(imt >= 22.9 && imt <= 27.9) cout<<"��� � ��ଥ";
                 else cout<<"������� ���";
        }

        else if(age >= 45 && age < 54)
        {
            if(imt < 25.8) cout<<"��������� ���";
            else if(imt >= 25.8 && imt <= 30.8) cout<<"��� � ��ଥ";
                 else cout<<"������� ���";
        }

        else
        {
            if(imt < 26.6) cout<<"��������� ���";
            else if(imt >= 26.6 && imt <= 31.6) cout<<"��� � ��ଥ";
                 else cout<<"������� ���";
        }
    }

    else
    {
        if(age >= 19 && age < 25 )
        {
            if(imt < 19.5) cout<<"��������� ���";
            else if(imt >= 19.5 && imt <= 24.5) cout<<"��� � ��ଥ";
                 else cout<<"������� ���";
        }

        else if(age >= 25 && age < 35)
        {
            if(imt < 23.2) cout<<"��������� ���";
            else if(imt >= 23.2 && imt <= 28.2) cout<<"��� � ��ଥ";
                 else cout<<"������� ���";
        }

        else if(age >= 35 && age < 45)
        {
            if(imt < 23.4) cout<<"��������� ���";
            else if(imt >= 23.4 && imt <= 28.4) cout<<"��� � ��ଥ";
                 else cout<<"������� ���";
        }

        else if(age >= 25.2 && age < 30.2)
        {
            if(imt < 25.2) cout<<"��������� ���";
            else if(imt >= 25.2 && imt <= 30.2) cout<<"��� � ��ଥ";
                 else cout<<"������� ���";
        }

        else
        {
            if(imt < 27.3) cout<<"��������� ���";
            else if(imt >= 27.3 && imt <= 32.3) cout<<"��� � ��ଥ";
                 else cout<<"������� ���";
        }
    }
}

int main()
{
    //���� ������
    float age;
    cout<<"������ ��� ������\n";
    cin>>age;
    inputVerification(age);
    BUFF_CLEAR;

    //���� ���
    float weight;
    cout<<"������ ��� ��� � ��\n";
    cin>>weight;
    inputVerification(weight);
    BUFF_CLEAR;

    //���� ���
    float height;
    cout<<"������ ��� ��� � ᠭ⨬����\n";
    cin>>height;
    inputVerification(height);
    BUFF_CLEAR;

    //��稭�/���騭�
    bool chooseMW;
    cout<<"�᫨ ��稭� ������ 1 �᫨ ���騭� 0\n";
    cin>>chooseMW;
    inputVerification(chooseMW);
    BUFF_CLEAR;

    //������� ��� �� ��㫥 �ப�
    cout<<"��� ������� ��� �� �ப� "<<weightBrok(height, chooseMW)<<"\n";

    //������ ����� ⥫�
    float imt = bmi(weight, height);
    cout<<"��� ������ ����� ⥫� "<< imt<<"\n";

    //������ ��� �㤮�
    fatThin(chooseMW, imt, age);

    return 0;
}
#endif
//----------------------------------------------------------------------------------------------------------------------------------

//����� 2--------------------------------------------------------------------------------------------------------------------------
#ifdef LAB_2_2


int main()
{
    // ���ᨢ ��ப ��� �࠭���� ���� ⨯��
    string nameType[] = {"bool", "char", "int", "float", "double", "unsigned int", "unsigned long", "unsigned long long",
                         "long double", "signed char", "short int", "long long int", "short"};

    //���ᨢ ��� �࠭���� ࠧ��஢ ⨯��
    size_t sizeType[] = {sizeof (bool), sizeof (char), sizeof (int), sizeof (float), sizeof (double), sizeof (unsigned int), sizeof (unsigned long),
    sizeof (unsigned long long), sizeof (long double), sizeof (signed char), sizeof (short int), sizeof (long long int), sizeof (short)};

    //�뢮� ࠧ��஢ ⨯�� � �����
    for(size_t i = 0; i < sizeof (sizeType) / sizeof(sizeType[0]); i++)
        cout<<nameType[i]<<": "<<sizeType[i]<<" bytes\n";

    return 0;
}
#endif
//--------------------------------------------------------------------------------------------------------------------------------

// ����� 3-----------------------------------------------------------------------------------------------------------------------
#ifdef LAB_2_3
#define SIZE 10

//���⪠ ���� cin
#define BUFF_CLEAR std::cin.ignore(10000, '\n') //���⪠ ����
using namespace std;

void inputVerification(double& input)
{
    while (cin.fail() || input < 0)
    {
        cin.clear();
        BUFF_CLEAR;
        cout<<"������ �᫮�� ���祭��\n";
        cin>>input;
    }
}

int main()
{

    double averageArr[SIZE];
    cout<<"������ "<<SIZE<<" �ᥫ � ������饩 ����⮩\n";
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

//����� 4-----------------------------------------------------------------------------------------------------------------------
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

//����� 5------------------------------------------------------------------------------------------------------------------------
#ifdef LAB_2_5
//���⪠ ���� cin
#define BUFF_CLEAR std::cin.ignore(10000, '\n') //���⪠ ����

//�㭪�� ���䨪�樨 �����
void inputVerification(int& input)
{
    while (cin.fail() || input < 0)
    {
        cin.clear();
        BUFF_CLEAR;
        cout<<"������ ������⥫�� �᫮�� ���祭�� "<<endl;
        cin>>input;
    }
}


int main()
{
    // 1-� ������
    cout<<"������� 1"<<endl;
    cout<<"(true && true) || false = "<<boolalpha<<((true && true) || false)<<endl;
    cout<<"(false && true) || true = "<<((false && true) || true)<<endl;
    cout<<"(false && true) || false || true"<<((false && true) || false || true)<<endl;
    cout<<"(5 > 6 || 4 > 3) && (7 > 8) = "<<((5 > 6 || 4 > 3) && (7 > 8))<<endl;
    cout<<"!(7 > 6 || 3 > 4) = "<<!(7 > 6 || 3 > 4)<<endl<<endl;

    //2-� �������
    cout<<"������� 2"<<endl;
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


    //3-�������
    cout<<"������� 3"<<endl;
    bool a{true}, b{false};
    cout<<(!(a && b) == (!a) || (!b))<<endl;
    cout<<(!(a || b) == (!a) && (!b))<<endl<<endl;

    //4-�������
    cout<<"������� 4"<<endl;
    int x, y, z, v;
    bool logicValue;
    cout<<"������ 4 楫��᫥���� ���祭��"<<endl;
    cin>>x;
    inputVerification(x);
    cin>>y;
    inputVerification(y);
    cin>>z;
    inputVerification(z);
    cin>>v;
    inputVerification(v);

    //����頥� � ��६����� x �㬬� 3, 4, 5
    x= 3 + 4 + 5;
    cout<<x<<endl;

    //��ᢠ����� ��६����� y ���祭�� ��६����� z, ��⥬ ��६����� x ��ᢠ����� ����� ���祭�� ��६����� y
    x = y = z;
    cout<<x<<" "<<y<<" "<<z<<endl;

    //��ᢠ����� ��६����� z ���祭�� ࠢ��� z 㬭�������� �� y+1+5
    z *= ++y + 5;
    cout<<z<<endl;

    /*��ᢠ����� �����᪮� ��६����� logicValue ���祭�� �����᪮�� ��ࠦ����(true/false), �᫨ � ����� ���� ��६����� x-y; z-v
    ��� ���� �� �㤥� ࠢ�� ���, ��६����� logicValue �㤥� ����� ���祭�� true*/
    logicValue = (x || y) && (z || v);
    cout<<logicValue;
    return 0;

}
#endif
