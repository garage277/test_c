#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //cout << "введите количество пользователей: " << endl;
    cin.exceptions(std::ios::failbit);
    uint32_t len{0};
    cin >> len;

    std::vector<bool> cont(len, false); //в контейнере будем отмечать заходивших пользователей
                                        //идентификаторы в контейнере смещены на 1
    //cout << "введите идентификаторы пользователей: " << endl;
    for(size_t x=0, i=0; i<(len-2); ++i)
    {
        cin >> x;
        cont.at(x-1) = true;
    }

    for(size_t x=0, i=0; i<len && x<2 ; ++i) //x<2 ищем только двоих пользователей
    {
        if( cont[i] == false ) //одного нашли
        {
            if( x!=0 )
                cout << " ";

            cout << i+1;
            ++x;
        }
    }

    cout << endl;

    return 0;
}
