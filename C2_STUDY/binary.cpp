#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

inline void eatline() { while (std::cin.get() != '\n') continue; }
struct planet
{
    char name[20];
    double population;
    double g;
};

const char* file = "planets.dat";
int main()
{
    using namespace std;
    planet pl;
    cout << fixed << right;

    // �ʱ��� ������ ȭ�鿡 ǥ���ϴ� ������
    ifstream fin;
    fin.open(file, ios_base::in | ios_base::binary);
    if (fin.is_open())
    {
        cout << file << " ������ ���� ������ ������ �����ϴ�:\n";
        while (fin.read((char*)&pl, sizeof pl))
        {
            cout << setw(20) << pl.name << ": " << setprecision(0) << setw(12) << pl.population << setprecision(2) << setw(6) << pl.g << endl;
        }
        fin.close();
    }

    //���ο� �����и� �߰��Ѵ�
    ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
    if (!fout.is_open())
    {
        cerr << "����� ���� " << file << " ������ �� �� �����ϴ�.\n";
        exit(EXIT_FAILURE);
    }
    if (!fout.is_open())
    {
        cerr << "����� ����" << file << "������ �� �� ������ϴ�.\n";
        exit(EXIT_FAILURE);
    }
    cout << "�༺�� �̸��� �Է��Ͻʽÿ�(�������� ���٤� �Է�): \n";
    cin.get(pl.name, 20);
    while (pl.name[0] != '\0');
    {
        eatline();
        cout << "�༺�� �α��� �Է��Ͻʽÿ�.: ";
        cin >> pl.population;
        cout << "�༺�� �߷� ���ӵ� �Է�: ";
        cin >> pl.g;
        eatline();
        fout.write((char*)&pl, sizeof pl);
        cout << "�༺�� �̸��� �Է��Ͻʽÿ�(���ķ��� �� �� �̓�): \n";
        cin.get(pl.name, 20);
    }
    fout.close();

    fin.clear();

    fin.open(file, ios_base::in | ios_base::binary);
    if (fin.is_open())
    {
        cout << file << " ������ ������ ������ ������ �����ϴ�.\n";
        while (fin.read((char*)&pl, sizeof pl))
        {
            cout << setw(20) << pl.name << ": " << setprecision(0) << setw(12)
                << pl.population << setprecision(2) << setw(6) << pl.g << endl;
        }
        fin.close();
    }
    return 0;
}