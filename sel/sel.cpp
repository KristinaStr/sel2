#include <iostream>
#include <sstream>

using namespace std;
void insertion_sort(int *mas, unsigned int k)
{
    for (int i = 0; i < k ; i++)
    {
        for (int j = i; j > 0 && mas[j - 1] > mas[j]; j--)
        {
            swap(mas[j - 1],mas[j]);
        }

    }
}
    bool read (int *mas, unsigned int k)
    {
        string stroka;// задаем строку
        getline(cin,stroka);
        istringstream stream (stroka);
        for (unsigned int i=0; i<k;i++)
        {
            if (!(stream>>mas[i]))
            {
                cout<<"Error"<<endl;
                return false;

            }
        }
        return true;
    }


int main() {
    unsigned int k;                             // кол-во элементов
    cin >> k;
    cin.get();
    int *mas = new int[k];
    if (read(mas, k)) {
        insertion_sort(mas, k);
        for (unsigned int i = 0; i < k; i++) {
            cout << mas[i] << " ";
        }
    }
    return 0;
}


