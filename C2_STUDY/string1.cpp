#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "string1.h"

using std::cin;
using std::cout;

int Stringg::num_strings = 0;

void Stringg::stringlow()
{
    for (int i = 0; i < len; i++)
    {
        if ('A' <= str[i] && 'Z' >= str[i])
        {
            str[i] += 32;
        }
    }
}

void Stringg::stringup()
{
    for (int i = 0; i < len; i++)
    {
        if ('a' <= str[i] && 'z' >= str[i])
        {
            str[i] -= 32;
        }
    }
}

int Stringg::charcount(char word)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == word)
            count++;
    }
    return count;
}

int Stringg::HowMany()
{
    return num_strings;
}

Stringg::Stringg(const char* s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

Stringg::Stringg()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

Stringg::Stringg(const Stringg& st)
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

Stringg::~Stringg()
{
    --num_strings;
    delete[] str;
}

Stringg& Stringg::operator=(const Stringg& st)
{
    if (this == &st)
        return *this;
    delete[] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

Stringg& Stringg::operator=(const char* s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

Stringg& Stringg::operator+(const Stringg& st)
{
    len = st.len + len;
    char* temp = new char[len + 1];
    std::strcpy(temp, str);
    std::strcat(temp, st.str);
    delete[] str;
    str = new char[len + 1];
    std::strcpy(str, temp);
    delete[] temp;

    return *this;
}

//Stringg& Stringg::operator+(const char* s)
//{
//    int length = std::strlen(s) + len;
//    len = length;
//    char* temp = new char[length + 1];
//    std::strcpy(temp, str);
//    std::strcat(temp, s);
//    delete[] str;
//    str = new char[length + 1];
//    std::strcpy(str, temp);
//    delete[] temp;
//
//    return *this;
//}

char& Stringg::operator[](int i)
{
    return str[i];
}

const char& Stringg::operator[](int i) const
{
    return str[i];
}

bool operator<(const Stringg& st1, const Stringg& st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const Stringg& st1, const Stringg& st2)
{
    return st2 > st1;
}

bool operator==(const Stringg& st1, const Stringg& st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const Stringg& st)
{
    os << st.str;
    return os;
}

istream& operator>>(istream& is, Stringg& st)
{
    char temp[Stringg::CINLIM];
    is.get(temp, Stringg::CINLIM);
    if (is)
    {
        st = temp;
    }
    while (is && is.get()!='\n')
    {
        continue;
    }
    return is;
}

Stringg operator+(const char* s, Stringg& st)
{
    int length = std::strlen(s) + std::strlen(st.str);
    char* temp = new char[length + 1];
    std::strcpy(temp, s);
    std::strcat(temp, st.str);
    Stringg result(temp);
    delete[] temp;

    return result;
}

//Stringg operator+(Stringg& st1, Stringg& st2)
//{
//    int length = std::strlen(st1.str) + std::strlen(st2.str);
//    char* temp = new char[length + 1];
//    std::strcpy(temp, st1.str);
//    std::strcat(temp, st2.str);
//    Stringg result(temp);
//    delete[] temp;
//
//    return result;
//}