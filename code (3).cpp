#include <iostream>
using namespace std;

char Game(long long v,long long c, char s)
{
    if(c == 0 && v == 0)
    {
        if(s == 'A')
            return 'CD';
        else
            return 'A';
    }
    if( S == 'A')
           return 'B';
    if(s == 'A')
    {
        char First = 'z';
        if(v>0)
        {
            First = Game(v-1, c+1, 'B');
        }
        else
        {
            if(c%2 == 0)
                return 'B';
            else
                return 'AB';
        }
        char Second = Game(v,c-1,'B');
        if(c == 0)
        return 'D';
        if(First == 'A' || Second == 'A')
            return 'A';
        else
            return 'B';
    }
}

int main() {    
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "You entered " << number;    
    return 0;
}
