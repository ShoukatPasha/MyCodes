#include<bits/stdc++.h>
#include<vector>
using namespace std;

char board[3][3] = {{' ', ' ', ' '},
                    {' ', ' ', ' '},
                    {' ', ' ', ' '}};

char player1 = 'X';
char player2 = 'O';

char currentPlayer = player1;
bool game_over = false;

vector<vector<pair<int, int>>> winning_combos = {
    {{0, 0}, {0, 1}, {0, 2}},
    {{1, 0}, {1, 1}, {1, 2}},
    {{2, 0}, {2, 1}, {2, 2}},
    {{0, 0}, {1, 0}, {2, 0}},
    {{0, 1}, {1, 1}, {2, 1}},
    {{0, 2}, {1, 2}, {2, 2}},
    {{0, 0}, {1, 1}, {2, 2}},
    {{0, 2}, {1, 1}, {2, 0}}
};

int main()
{
    while (!game_over)
    {
        cout << "\n  \t0\t1\t2" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << i << "\t";
            for (int j = 0; j < 3; j++)
            {
                cout << board[i][j];
                if (j < 2)
                    cout << "  |  ";
            }
            cout << endl;
            if (i < 2)
                cout << "\t--------------" << endl;
        }

        int row, col;
        cout << "Enter your move (row, col): ";
        if (!(cin >> row >> col) || row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        {
            cout << "Invalid move. Try again." << std::endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        board[row][col] = currentPlayer;

        for (const auto &combo : winning_combos)
        {
            if (board[combo[0].first][combo[0].second] == currentPlayer &&
                board[combo[1].first][combo[1].second] == currentPlayer &&
                board[combo[2].first][combo[2].second] == currentPlayer)
            {
                cout << currentPlayer << " wins!" << endl;
                game_over = true;
                break;
            }
        }

        currentPlayer = (currentPlayer == player1) ? player2 : player1;

        bool tie = true;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == ' ')
                {
                    tie = false;
                    break;
                }
            }
            if (!tie)
                break;
        }
        if (tie)
        {
            cout << "Tie!" << endl;
            game_over = true;
        }
    }

    return 0;
}
