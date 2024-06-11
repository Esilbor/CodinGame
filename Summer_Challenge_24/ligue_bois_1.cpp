#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

void    vote(string piste, int pos, int *R, int *L, int *D, int *U)
{
    int i = pos;
    int h = 0;
    while (piste[i] && piste[i] != '#')
    {
        i++;
    }
    h = i - pos;
    std::cerr << "h = " << h << std::endl;
    if (h >= 4)
        *R += 1;
    else if (h == 3)
        *D += 1;
    else if (h == 2)
        *L += 1;
    else if (h == 1)
        *U += 1;
}

void    get_reg(int player_idx, int *p, int reg_0, int reg_1, int reg_2)
{            
    if (player_idx == 0)
        *p = reg_0;
    else if (player_idx == 1)
        *p = reg_1;
    else
        *p = reg_2;
}

void    elect(int *R, int *L, int *D, int *U)
{
    if (*U >= *R && *U >= *L && *U >= *D)
        cout << "UP" << endl;
    else if (*L > *R && *L > *U && *L > *D)
        cout << "LEFT" << endl;
    else if (*R > *L && *R > *U && *R > *D)
        cout << "RIGHT" << endl;
    else
        cout << "DOWN" << endl;



    // std::cerr << "UP = " << *U << endl;
    // if (*U)
    //     cout << "UP" << endl;
    // else
    //     cout << "LEFT" << endl;
}

int main()
{
    int p = 0;
    int player_idx;
    cin >> player_idx; cin.ignore();
    int nb_games;
    cin >> nb_games; cin.ignore();
    string piste1;
    string piste2;
    string piste3;
    string piste4;

    int R = 0;
    int L = 0;
    int D = 0;
    int U = 0;

    string gpu;
    int reg_0;
    int reg_1;
    int reg_2;
    int reg_3;
    int reg_4;
    int reg_5;
    int reg_6;
    char *piste[4];

    // game loop
    while (1) {
        for (int i = 0; i < 3; i++)
        {
            string score_info;
            getline(cin, score_info);
        }
        R = 0;
        L = 0;
        D = 0;
        U = 0;
        for (int i = 0; i < nb_games; i++)
        {

            cin >> gpu >> reg_0 >> reg_1 >> reg_2 >> reg_3 >> reg_4 >> reg_5 >> reg_6; cin.ignore();
            if (i == 0 && !reg_3)
            {
                piste1 = gpu;
                vote(piste1, reg_0, &R, &L, &D, &U);
                std::cerr << "pos jeu 1 = " << reg_0 << std::endl;     
            }
            if (i == 1 && !reg_3)
            {
                piste2 = gpu;
                vote(piste2, reg_0, &R, &L, &D, &U);
                std::cerr << "pos jeu 2 = " << reg_0 << std::endl;     

            }
            if (i == 2 && !reg_3)
            {
                piste3 = gpu;
                vote(piste3, reg_0, &R, &L, &D, &U);
                std::cerr << "pos jeu 3 = " << reg_0 << std::endl;     


            }
            if (i == 3 && !reg_3)
            {
                piste4 = gpu;
                vote(piste4, reg_0, &R, &L, &D, &U);
                std::cerr << "pos jeu 4 = " << reg_0 << std::endl;
            }
            get_reg(player_idx, &p, reg_0, reg_1, reg_2);

        }

            std::cerr << "UP voted = " << U << endl;
            std::cerr << "DOWN voted = " << D << endl;
            std::cerr << "LEFT voted = " << L << endl;
            std::cerr << "RIGHT voted = " << R << endl;
            std::cerr << piste1 << std::endl;
            std::cerr << piste2 << std::endl;
            std::cerr << piste3 << std::endl;
            std::cerr << piste4 << std::endl;
            elect(&R, &L, &D, &U);
            // cout << "UP" << endl;

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

    }
}