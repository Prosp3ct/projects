#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int guessed_number = 0;
    unsigned int random_number = 0;
    unsigned int customer_bugdet = 0;
    unsigned int min_bid = 50;
    int bid = 0;
    srand (time(NULL));

    cout<<"Please write down how much money you want to bid"<<endl;

    cin>> customer_bugdet;

    if (customer_bugdet >=min_bid)
    {
        while (customer_bugdet >= min_bid)
        {
            cout<<"Enter the bid"<<endl;
            
            cin>> bid;

            cout<< "Guessed Number "<<endl;
            
            if (bid <50)
            {
                cout<<"MIN BID AMOUNT IS 50 !!!"<<endl;
                continue;
            }

            cin>>guessed_number;

            if (guessed_number <0)
            {
                cout<<"Please guess the number between 0-999"<<endl;
                continue;
            }

            random_number = rand()%1000;

            cout << "The Number "<< random_number<<endl;

            if (guessed_number == random_number)
            {
                customer_bugdet += bid*2 ;
                cout << "YOU WIN !!!!!"<<endl;
            }
            else
            {
                if (customer_bugdet >= 2*bid)
                {
                    customer_bugdet -= bid;
                }
                else
                {
                    customer_bugdet = 0;
                }
                cout << "YOU LOST !!!"<<endl;
            }
                cout << "YOUR CURRENT BUDGET "<<customer_bugdet<<endl;

            if (customer_bugdet < min_bid)
            {
                cout<<" You dont have enough money to bid"<<endl;
                break;
            }
        }
    }
    else
    {
        cout<<"YOU DONT HAVE ENOUGH MONEY TO PLAY !!!!"<<endl;
    }

    return 0;
}