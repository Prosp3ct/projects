#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;

void drawHangman(int error_count)
{
    switch (error_count)
    {
        case 1:
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            break;
        case 2:
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            break;
        case 3:
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            break;
        case 4:
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            break;        
        case 5:
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            break;        
        case 6:
            cout << "\t\t\t\t\t\t\t\t\t\tI===" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            break;        
        case 7:
            cout << "\t\t\t\t\t\t\t\t\t\tI===" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI  O" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            break;        
        case 8:
            cout << "\t\t\t\t\t\t\t\t\t\tI===" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI  O" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI  |" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            break;        
        case 9:
            cout << "\t\t\t\t\t\t\t\t\t\tI===" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI  O" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI -|" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            break;
        case 10:
            cout << "\t\t\t\t\t\t\t\t\t\tI===" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI  O" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI -|-" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            break;
        case 11:
            cout << "\t\t\t\t\t\t\t\t\t\tI===" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI  O" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI -|-" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI /"  << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI" << endl;
            break;
        case 12:
            cout << "\t\t\t\t\t\t\t\t\t\tI===" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI  O" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI -|-" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\tI / /"<< endl;
            break;
        default:
            break;
    }
}
int main()
{
    unsigned int max_number_of_errors = 12;
    unsigned int number_of_errors = 0;
    char guessed_letter;
    unsigned int random_number = 0;
    unsigned int try_count = 0;
    bool found_word = false;
    string chosen_word;
    string word1 = "Kaplumbaga";
    string word2 = "New York City";
    string word3 = "California";
    string word4 = "Capital";
    string word5 = "Sonerergin";
    srand (time(NULL));

    random_number = rand()%5;

    switch (random_number)
    {
    case 0:
        chosen_word = word1;
        break;
    case 1:
        chosen_word = word2;
        break;
    case 2:
        chosen_word = word3;
        break;
    case 3: 
        chosen_word = word4;
        break;
    case 4:
        chosen_word = word5;
        break;
    default:
        break;
    }

    char guessed_word [chosen_word.length()];

    for (int k = 0; k < chosen_word.length() ; k++)
    	guessed_word[k] = '_';
        	
    while (max_number_of_errors >= number_of_errors)
    {
        cout << "ENTER THE LETTER"<<endl;
        cin >> guessed_letter;
		
        unsigned int size_of_word = chosen_word.length();
        
        for (unsigned int i = 0; i< chosen_word.length(); i++) //Search in string
        {
            if (guessed_letter == chosen_word[i]  || 
                guessed_letter + ('a' - 'A') == chosen_word[i] || 
                guessed_letter -('a' -'A') == chosen_word[i])
            {
                guessed_word[i] = guessed_letter;

                for (unsigned int j = 0; j < chosen_word.length() ; j++)
                {
                    cout << guessed_word[j];
                }
                try_count = try_count;
                cout<<endl;
            }
            else
            {
                try_count++;
            }
        }

        if (try_count != size_of_word)
        {
            number_of_errors = number_of_errors;
        }
        else
        {
            number_of_errors++;
            drawHangman(number_of_errors);
        }

        string control_word(guessed_word);
        if (control_word.find("_") == string::npos)
        {
            found_word = true;
            break;
        }
        try_count = 0 ;
    }

    if (found_word)
    {
        cout<<"YOU FOUND THE WORD";
    }
    else
    {
        cout<<"YOU COULD NOT FOUND THE WORD: " << chosen_word ;
    }
    return 0;
}

