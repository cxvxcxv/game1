#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int main()
{
srand(time(NULL));
cout << "type START" << endl << endl;
string start;
while(true)
{
    cin >> start;
    if (start == "START") break;
    else cout << "type START" << endl;
}

system("cls");

char loading[10][103];
int percent = 0;
for (int i = 1; i<= 9; i++)
{
    for (int j = 1; j<= 102; j++)
    {
        if (j == 1 or j == 102) loading[i][j] = '*';
        else if (i == 1 or i == 9) loading[i][j] = '*';
        else loading[i][j] = ' ';
    }
}

for (int p = 1; p <= 101; p++)
{
    for (int i = 2; i <= 8; i++)
    {
        for (int j = 2; j <= 102; j++)
        {
            if (j == percent) loading[i][j] = '|';
        }
    }

    if (percent <= 20) cout << "loading graphics... (" << percent << "%)" << endl << endl;
    else if (percent <= 40) cout << "collecting data... (" << percent << "%)" << endl << endl;
    else if (percent <= 60) cout << "setting progress up... (" << percent << "%)" << endl << endl;
    else if (percent <= 80) cout << "managing packages... (" << percent << "%)" << endl << endl;
    else cout << "sorting objects... (" << percent << "%)" << endl << endl;

    for (int i1 = 1; i1 <= 9; i1++)
    {
        for (int j1 = 1; j1<=102; j1++)
        {
            cout << loading[i1][j1];
        }
        cout << endl;
    }
    Sleep (100);
    system("cls");
    percent++;
}



cout << "successfully loaded!" << endl << endl;
Sleep (1000);

char square[51][51];

for (int i = 1; i<= 20; i++)
{
    for (int j = 1; j<= 50; j++)
    {
        if (i == 1 or i == 20) square[i][j] = '-';
        else if (j == 1 or j == 50) square[i][j] = '|';
        else square[i][j] = ' ';
    }
}

for (int i = 1; i<= 20; i++)
{
    for (int j = 1; j<= 50; j++)
    {
        cout << square[i][j];
    }
    cout << endl;
}

for (int i = 1; i<= 20; i++)
{
    for (int j = 1; j<= 50; j++)
    {
        square[10][23] = 'H';
    }
}

Sleep (300);
system("cls");

for (int i = 1; i<= 20; i++)
{
    for (int j = 1; j<= 50; j++)
    {
        cout << square[i][j];
    }
    cout << endl;
}

for (int i = 1; i<= 20; i++)
{
    for (int j = 1; j<= 50; j++)
    {
        square[10][22] = 'H';
        square[10][23] = 'E';
    }
}

Sleep (50);
system("cls");

for (int i = 1; i<= 20; i++)
{
    for (int j = 1; j<= 50; j++)
    {
        cout << square[i][j];
    }
    cout << endl;
}

for (int i = 1; i<= 20; i++)
{
    for (int j = 1; j<= 50; j++)
    {
        square[10][22] = 'H';
        square[10][23] = 'E';
        square[10][24] = 'L';
    }
}

Sleep (50);
system("cls");

for (int i = 1; i<= 20; i++)
{
    for (int j = 1; j<= 50; j++)
    {
        cout << square[i][j];
    }
    cout << endl;
}

for (int i = 1; i<= 20; i++)
{
    for (int j = 1; j<= 50; j++)
    {
        square[10][22] = 'H';
        square[10][23] = 'E';
        square[10][24] = 'L';
        square[10][25] = 'L';
    }
}

Sleep (50);
system("cls");

for (int i = 1; i<= 20; i++)
{
    for (int j = 1; j<= 50; j++)
    {
        cout << square[i][j];
    }
    cout << endl;
}

Sleep (50);
system ("cls");

for (int i = 1; i<= 20; i++)
{
    for (int j = 1; j<= 50; j++)
    {
        square[10][22] = 'H';
        square[10][23] = 'E';
        square[10][24] = 'L';
        square[10][25] = 'L';
        square[10][26] = 'O';
    }
}

for (int i = 1; i<= 20; i++)
{
    for (int j = 1; j<= 50; j++)
    {
        cout << square[i][j];
    }
    cout << endl;

}
cout << "\nYou: ";
string you;

while (true)
{
    cin >> you;
    if (you == "Hello" or you == "hello" or you == "Hi" or you == "hi" or you == "HELLO" or you == "HI") break;
    else cout << endl << "???" << endl << endl << "You: ";
}

cout << endl;

string text1 = "oh, dear... ";
string text2 = "You have disturbed me from a sleep by your call";

cout << "Unknown: ";

for (int i = 0; i<= text1.size(); i++)
{
    cout << text1[i];
    Sleep (90);
}

Sleep (1000);

for (int i = 0; i<= text2.size(); i++)
{
    cout << text2[i];
    Sleep (60);
}
cout << endl << endl;
string text3 = "However... ";

for (int i = 0; i<= text3.size(); i++)
{
    cout << text3[i];
    Sleep (90);
}

string text4 = "It's alright!";
for (int i = 0; i<= text4.size(); i++)
{
    cout << text4[i];
    Sleep (130);
}

cout << endl << endl;

string text5 = "By the way, ";
for (int i = 0; i<= text5.size(); i++)
{
    cout << text5[i];
    Sleep (80);
}

string text6 = "I see You want to play a game. Do you really want?";
for (int i = 0; i<= text6.size(); i++)
{
    cout << text6[i];
    Sleep (50);
}

cout << endl << endl << endl << "You: ";

while (true)
{
    cin >> you;
    if (you == "yes" or you == "YES" or you == "yep" or you == "YEP" or you == "yeah" or you == "YEAH") break;
    else if (you == "no" or you == "NO" or you == "nah" or you == "NAH" or you == "nope" or you == "NOPE")
    {
        string text7 = "I am very upset cause you woke me up and now are not going to play.";
        string text8 = "You have missed a great chance to see a mystery. I will kick you from there. Go away!!!";
        cout << "Unknown: ";
        for (int i = 0; i<= text7.size(); i++)
        {
            cout << text7[i];
            Sleep (90);
        }

        Sleep (1000);
        cout << endl << endl;

        for (int i = 0; i<= text8.size(); i++)
        {
            cout << text8[i];
            Sleep (90);
        }
        return 0;
    }

    else cout << endl << "???" << endl << endl << "You: ";
}

cout << endl << endl << "Unknown: ";

string text9 = "Excellent, but it could be better, if we moved on a clear page";

for (int i = 0; i<= text9.size(); i++)
{
    cout << text9[i];
    Sleep (90);
}

cout << endl << endl;

int timer = 5;

for (int i = timer; i>=1; i--)
{
    cout << "Wait " << timer << " sec..." << endl;
    Sleep (1000);
    timer--;
}

system ("cls");

Sleep (500);

cout << "Unknown: ";

string text10 = "Yeah! Much better than that time!";

for (int i = 0; i<= text10.size(); i++)
{
    cout << text10[i];
    Sleep (90);
}

Sleep (100);
cout << endl;
string text11 = "So, before we begin, let me ask your name.";

for (int i = 0; i<= text11.size(); i++)
{
    cout << text11[i];
    Sleep (90);
}

cout << endl << endl;

cout << "You: ";

string name1;
cin >> name1;
cout << endl << "Unknown: ";

string text12 = "Since now, I will call you ";
string text13 = " OK?";
for (int i = 0; i<= text12.size(); i++)
{
    cout << text12[i];
    Sleep (90);
}

for (int i = 0; i<= name1.size(); i++)
{
    cout << name1[i];
    Sleep (90);
}

for (int i = 0; i<= text13.size(); i++)
{
    cout << text13[i];
    Sleep (90);
}
cout << endl << endl << "You: ";
while (true)
{
    cin >> you;
    if (you == "yes" or you == "YES" or you == "yep" or you == "YEP" or you == "yeah" or you == "YEAH" or you == "ok" or you == "OK") break;
    else if (you == "no" or you == "NO" or you == "nah" or you == "NAH" or you == "nope" or you == "NOPE")
    {
    cout << endl << "Your name: ";
    cin >> name1;
    for (int i = 0; i<= text12.size(); i++)
{
    cout << text12[i];
    Sleep (90);
}

for (int i = 0; i<= name1.size(); i++)
{
    cout << name1[i];
    Sleep (90);
}

for (int i = 0; i<= text13.size(); i++)
{
    cout << text13[i];
    Sleep (90);
}
cout << endl << endl << "You: ";
    }
    else cout << endl << endl << "???" << endl << endl;
}



cout << endl << endl << "Unknown: ";
string text14 = "Perfect! To be fair, I will say my name. My name is JOE! I am glad to get aquinted with you. However, unfortunately, it's my time to leave. You are going to start now! ENJOY & GOODBYE, ";

for (int i = 0; i<= text14.size(); i++)
{
    cout << text14[i];
    Sleep (90);
}

for (int i = 0; i<= name1.size(); i++)
{
    cout << name1[i];
    Sleep (90);
}


Sleep (2000);

//237 lenght
//66 height

system ("cls");


for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j<= i; j++)
    {
        cout << '.';
    }
    cout << endl;
    Sleep (100);
}
Sleep (500);
system ("cls");

for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j<= i; j++)
    {
        cout << '*';
    }
    cout << endl;
    Sleep (100);
}
Sleep (500);
system ("cls");

for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j<= i; j++)
    {
        cout << '-';
    }
    cout << endl;
    Sleep (100);
}

Sleep (500);
system ("cls");

for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j<= i; j++)
    {
        cout << '+';
    }
    cout << endl;
    Sleep (50);
}

system ("cls");

for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j<= i; j++)
    {
        cout << '/';
    }
    cout << endl;
    Sleep (25);
}

system ("cls");

for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j<= i; j++)
    {
        cout << '=';
    }
    cout << endl;
    Sleep (10);
}

system ("cls");

for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j<= i; j++)
    {
        cout << '!';
    }
    cout << endl;
    Sleep (10);
}

system ("cls");
Sleep (100);

for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j<= i; j++)
    {
        cout << '?';
    }
    cout << endl;
    Sleep (10);
}

Sleep (2000);
system ("cls");

for (int i = 1; i<= 33; i++)
{
    cout << endl;
}

for (int i = 1; i<= 118; i++)
{
    cout << " ";
}

cout << "?";
Sleep (5000);

system("cls");

cout << "You: ";

string text15 = "Is someone here?";
for (int i = 0; i<= text15.size(); i++)
{
    cout << text15[i];
    Sleep (90);
}

cout << endl << endl;
Sleep (3000);

string text16 = "IS SOMEONE HERE?";
for (int i = 0; i<= text16.size(); i++)
{
    cout << text16[i];
    Sleep (150);
}

Sleep (2000);
system ("cls");

for (int i = 1; i<= 100000; i++)
{
    int random;
    random = rand() % 26 + 97;
    cout << char(random);
}

system ("cls");
Sleep (100);

char boss[66][237];
for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j<=237; j++)
    {
        boss[i][j] = ' ';
    }
}


boss[1][4] = '*';
boss[1][5] = '*';
boss[2][3] = '*';
boss[2][6] = '*';
boss[3][2] = '*';
boss[3][7] = '*';
boss[4][2] = '*';
boss[4][7] = '*';
boss[5][3] = '*';
boss[5][6] = '*';
boss[6][4] = '*';
boss[6][5] = '*';
boss[6][4] = '*';
boss[6][5] = '*';
boss[7][4] = '*';
boss[7][5] = '*';
boss[8][4] = '*';
boss[8][5] = '*';
boss[9][4] = '*';
boss[9][5] = '*';
boss[10][1] = '*';
boss[10][4] = '*';
boss[10][5] = '*';
boss[11][1] = '*';
boss[11][4] = '*';
boss[11][5] = '*';
boss[12][1] = '*';
boss[12][4] = '*';
boss[12][5] = '*';
boss[13][4] = '*';
boss[13][5] = '*';
boss[14][4] = '*';
boss[14][5] = '*';
boss[15][4] = '*';
boss[15][5] = '*';
boss[8][3] = '*';
boss[9][2] = '*';
boss[16][3] = '*';
boss[17][2] = '*';
boss[18][1] = '*';
boss[19][1] = '*';
boss[20][1] = '*';
boss[21][1] = '*';
boss[22][1] = '*';
boss[8][6] = '*';
boss[9][7] = '*';
boss[10][8] = '*';
boss[11][8] = '*';
boss[12][8] = '*';
boss[16][6] = '*';
boss[17][7] = '*';
boss[18][7] = '*';
boss[19][7] = '*';
boss[20][7] = '*';
boss[21][7] = '*';
boss[22][7] = '*';
for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}
int hp = 100;
cout << endl << endl;
cout << "BOSS HP: " << hp;
cout << endl << endl;
cout << "BOSS: ";
string text17 = "I AM GOING TO DESTROY EVERYTHING!!!!!";

for (int i = 0; i<= text17.size(); i++)
{
    cout << text17[i];
    Sleep (45);
}



cout << endl << endl << "type 1 to deal a damage to the boss" << endl << endl;
string damage;
for (int p = 1; p<= 100; p++)
{
    if (hp <= 0) break;
    cin >> damage;
    if (damage == "1")
    {
        hp-=5;
        system ("cls");
        for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}
cout << endl << endl;
cout << "BOSS HP: " << hp;
cout << endl << endl;
Sleep(250);
    }
}

system("cls");


boss[22][7] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");
boss[21][7] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");
boss[20][7] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[19][7] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[18][7] = ' ';
for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[17][7] = ' ';
for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[16][6] = ' ';
for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");


boss[12][8] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[12][8] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[11][8] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[10][8] = ' ';
for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[9][7] = ' ';
for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[8][6] = ' ';
for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[22][1] = ' ';
for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[21][1] = ' ';
for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[20][1] = ' ';
for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[19][1] = ' ';
for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[18][1] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[17][2] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[16][3] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[9][2] = ' ';
for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[8][3] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[15][5] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[15][4] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[14][5] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[14][4] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[13][5] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[13][4] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[12][5] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[12][4] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[12][1] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[11][5] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[11][4] = ' ';
for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[11][1] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[10][5] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[10][4] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[10][1] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[9][5] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[9][4] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[8][5] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[8][4] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");


boss[7][5] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[7][4] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[6][5] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[6][4] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[6][5] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[6][4] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[5][6] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[5][3] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[4][7] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[4][2] = ' ';
for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[3][7] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[3][2] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[2][6] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[2][3] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[1][5] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

Sleep(2);
system ("cls");

boss[1][4] = ' ';

for (int i = 1; i<= 25; i++)
{
    for (int j = 1; j<=237; j++)
    {
        cout << boss[i][j];
    }
    cout << endl;
}

system ("cls");

cout << "You have completed the boss!" << endl << endl;
Sleep (500);

system("cls");

for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j <= 66; j++)
    {
        cout << endl;
    }
    cout << "You have completed the boss!";
}

cout << "You have completed the boss!" << endl << endl;
Sleep (500);
int completed1 = 1;
system("cls");

for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j <= completed1; j++)
    {
        cout << endl;
    }
    cout << "You have completed the boss!";
    completed1++;
    system("cls");
}

completed1 = 0;

for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j <= completed1; j++)
    {
        cout << endl;
    }
    cout << "You have completed the boss! You have completed the boss!" << endl;
    cout << "You have completed the boss! You have completed the boss!";
    completed1++;
    system("cls");
}

completed1 = 0;

for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j <= completed1; j++)
    {
        cout << endl;
    }
    cout << "You have completed the boss! You have completed the boss! You have completed the boss!" << endl;
    cout << "You have completed the boss! You have completed the boss! You have completed the boss!" << endl;
    cout << "You have completed the boss! You have completed the boss! You have completed the boss!";
    completed1++;
    system("cls");
}

completed1 = 0;

for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j <= completed1; j++)
    {
        cout << endl;
    }

    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!" << endl;
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!" << endl;
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!" << endl;
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!";
    completed1++;
    system("cls");
}

completed1 = 0;

for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j <= completed1; j++)
    {
        cout << endl;
    }
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!" << endl;
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!" << endl;
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!" << endl;
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!" << endl;
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!";
    completed1++;
    system("cls");
}

completed1 = 0;

for (int i = 1; i<= 66; i++)
{
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!You have completed the boss! You have completed the boss!You have completed the boss! You hav" << endl;
}

system("cls");
Sleep(100);

for (int i = 1; i<= 66; i++)
{
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!You have completed the boss! You have completed the boss!You have completed the boss! You hav" << endl;
}

system("cls");
Sleep(50);

for (int i = 1; i<= 66; i++)
{
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!You have completed the boss! You have completed the boss!You have completed the boss! You hav" << endl;
}

system("cls");
Sleep(100);

for (int i = 1; i<= 66; i++)
{
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!You have completed the boss! You have completed the boss!You have completed the boss! You hav" << endl;
}

system("cls");
Sleep(100);

for (int i = 1; i<= 66; i++)
{
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!You have completed the boss! You have completed the boss!You have completed the boss! You hav" << endl;
}

system("cls");
Sleep(100);

for (int i = 1; i<= 66; i++)
{
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!You have completed the boss! You have completed the boss!You have completed the boss! You hav" << endl;
}

system("cls");
Sleep(100);

for (int i = 1; i<= 66; i++)
{
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!You have completed the boss! You have completed the boss!You have completed the boss! You hav" << endl;
}

system("cls");
Sleep(100);

for (int i = 1; i<= 66; i++)
{
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!You have completed the boss! You have completed the boss!You have completed the boss! You hav" << endl;
}

system("cls");
Sleep(100);

for (int i = 1; i<= 66; i++)
{
    cout << "You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss! You have completed the boss!You have completed the boss! You have completed the boss!You have completed the boss! You hav" << endl;
}
Sleep(3000);

system ("cls");

percent = 0;
for (int i = 1; i<= 9; i++)
{
    for (int j = 1; j<= 102; j++)
    {
        if (j == 1 or j == 102) loading[i][j] = '*';
        else if (i == 1 or i == 9) loading[i][j] = '*';
        else loading[i][j] = ' ';
    }
}

for (int p = 1; p <= 101; p++)
{
    for (int i = 2; i <= 8; i++)
    {
        for (int j = 2; j <= 102; j++)
        {
            if (j == percent) loading[i][j] = '|';
        }
    }

    cout << "Moving on a new location" << endl;

    for (int i1 = 1; i1 <= 9; i1++)
    {
        for (int j1 = 1; j1<=102; j1++)
        {
            cout << loading[i1][j1];
        }
        cout << endl;
    }
    Sleep (10);
    system("cls");
    percent++;
}



cout << "successfully loaded!" << endl << endl;
Sleep (1000);

//NEW LOCATION
system ("cls");

char house[67][238];

for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j<= 237; j++)
    {
        house[i][j] = ' ';
    }
    cout << endl;
}

for (int i = 49; i<= 60; i++)
{
    house[i][100] = '*';
}

for (int i = 49; i<= 60; i++)
{
    house[i][150] = '*';
}


for (int i = 1; i<= 237; i++)
{
    house[60][i] = '-';
}

for (int i = 48, j = 101; i>= 40, j <= 109; i--, j++)
{
    house[i][j] = '*';
}

for (int i = 48, j = 150; i>= 40, j >= 142; i--, j--)
{
    house[i][j] = '*';
}

for (int j = 142; j >= 109; j--)
{
    house[40][j] = '*';
}

for (int i = 52; i<= 59; i++)
{
    house[i][125] = '*';
}

for (int i = 52; i<= 59; i++)
{
    house[i][135] = '*';
}

for (int i = 125; i<= 135; i++)
{
    house[52][i] = '*';
}

for (int i = 108; i<= 117; i++)
{
    house[55][i] = '*';
}

for (int i = 108; i<= 117; i++)
{
    house[50][i] = '*';
}

for (int i = 50; i<= 55; i++)
{
    house[i][108] = '*';
}

for (int i = 50; i<= 55; i++)
{
    house[i][117] = '*';
}




for (int i = 1; i<= 66; i++)
{
    for (int j = 1; j<= 237; j++)
    {
        cout << house[i][j];
    }
    cout << endl;
}

Sleep (1000);

cout << endl << "You: ";
string text18 = "wow! This house is quite big. Should I enter in it?";
for (int i = 0; i<= text18.size(); i++)
{
    cout << text18[i];
    Sleep (90);
}
cout << endl;
string text19 = "I don't see any other idea insted of entering the house. Should I enter?";
while (true)
{
    cin >> you;
    if (you == "yes" or you == "YES" or you == "yep" or you == "YEP" or you == "yeah" or you == "YEAH" or you == "ok" or you == "OK" or you == "enter" or you == "ENTER") break;
    else if (you == "no" or you == "NO" or you == "nah" or you == "NAH" or you == "nope" or you == "NOPE")
    {
    cout << endl << "You: ";
    for (int i = 0; i<= text19.size(); i++)
{
    cout << text19[i];
    Sleep (90);
    cout << endl;
}
    }
    else cout << endl << endl << "???" << endl << endl;
}

cout << endl << endl << "[You have entered the house]" << endl;

Sleep(1000);

system ("cls");

cout << "You: ";
string text20 = "Is somebody here?";
for (int i = 0; i<= text20.size(); i++)
{
    cout << text20[i];
    Sleep (110);
}

Sleep (2000);

system ("cls");

for (int i = 1; i<= 33; i++)
{
    cout << endl;
}

for (int i = 1; i<= 117; i++)
{
    cout << " ";
}

cout << "!!!";
Sleep (5000);

system ("cls");

char human[67][238];

for (int i = 1; i<=12; i++)
{
    for (int j = 1; j<=137; j++)
    {
        human[i][j] = ' ';
    }
}

for (int i = 1; i<=4; i++)
{
    human[3][i] = '#';
}

human[4][4] = '#';

for (int i = 5; i<=7; i++)
{
    human[4][i] = '*';
}

for (int i = 1; i<=6; i++)
{
    human[i][7] = '*';
}
human[2][7] = ' ';
human[2][6] = '*';
human[2][8] = '*';
human[7][6] = '*';
human[8][5] = '*';
human[7][8] = '*';
human[8][9] = '*';


for (int i = 1; i<=12; i++)
{
    for (int j = 1; j<=137; j++)
    {
        cout << human[i][j];
    }
    cout << endl;
}

cout << "Human: ";
string text21 = "I HEARD SOME NOISE FROM OUTSIDE AND TOOK THE GUN! TELL ME WHO ARE YOU OR I AM GOING TO KILL YOU!";

for (int i = 0; i<= text21.size(); i++)
{
    cout << text21[i];
    Sleep (50);
}

cout << endl << endl;

cout << "[You have some options to say]" << endl;
cout << "[1. I am not going to hurt you, I came here with peace. Don't shoot!]" << endl;
cout << "[2. I won't tell you anything (not recommended)]" << endl;
cout << "[write the number that you choose]" << endl << endl;
cout << "Number: ";

string choice;
string text22 = "I HAVE SAID THAT I WILL KILL YOU, NOW YOU ARE GOING TO DIE!!!";
while (true)
{
    cin >> choice;
    if (choice == "1") break;
    else if (choice == "2")
    {
        cout << endl << endl;
        cout << "You: ";
        string text33 = "I won't tell you anything";
        for (int i = 0; i<= text33.size(); i++)
        {
            cout << text33[i];
            Sleep (90);
        }
        cout << endl << endl;
        cout << "Human: ";
        for (int i = 0; i<= text22.size(); i++)
        {
            cout << text22[i];
            Sleep (90);
        }
        system ("cls");
        for (int m = 1; m<= 33; m++)
        {
            cout << endl;
        }
        for (int m = 1; m<=100; m++)
        {
            cout << " ";
        }
        cout << "You are killed by human.";
        Sleep(1000);
        for (int j = 1; j<= 100; j++)
        {
        for (int i = 1; i<= 66; i++)
        {
            cout << "GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAM";
            cout << endl;
        }
        system("cls");
        Sleep(20);
        }

        for (int i = 1; i<= 66; i++)
        {
            cout << "GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAME OVER!!! GAM";
            cout << endl;
        }
        Sleep (60000);

    }
}
cout << endl << "You: ";
        string text32 = "I am not going to hurt you, I came here with peace. Don't shoot!";
        for (int i = 0; i<= text32.size(); i++)
        {
            cout << text32[i];
            Sleep (90);
        }
system ("cls");

for (int i = 1; i<= 15; i++)
{
    for (int j = 1; j<= 237; j++)
    {
        if (human[i][j] == '#') human[i][j] = ' ';
    }
}

human[5][5] = '*';
human[4][5] = ' ';
human[4][8] = '*';
human[5][9] = '*';

for (int i = 1; i<=12; i++)
{
    for (int j = 1; j<=137; j++)
    {
        cout << human[i][j];
    }
    cout << endl;
}

cout << endl << endl;
cout << "Human: ";
string text23 = "Oh... You are not the enemy. Well, continue, I am listening";


for (int i = 0; i<= text23.size(); i++)
{
    cout << text23[i];
    Sleep (90);
}

cout << endl << endl;
cout << "[choose]" << endl;
cout << "[1. Actually, I don't know where I am. Moreover, to be honest I really want to go home, can you help me?]" << endl;
cout << "[2. Before I tell you more, what about you? Who are you?]" << endl;
cout << "[write the number]" << endl;

string choice2;

for (int z = 1; z<= 10000; z++)
{
    cin >> choice2;
    if (choice2 == "1") break;
    else if (choice2 == "2") break;
    else cout << endl << endl << "???" << endl << endl;
}

if (choice2 == "1")
{
    cout << endl << endl;
    cout << "You: ";
    string text24 = "Actually, I don't know where I am. Moreover, to be honest I really want to go home, can you help me?";
    for (int i = 0; i<= text24.size(); i++)
{
    cout << text24[i];
    Sleep (90);
}

cout << endl << endl;
Sleep (100);
cout << "Human: ";
string text25 = "Surely, I can help you, but if you help me first. By the way, my name is William";
for (int i = 0; i<= text25.size(); i++)
{
    cout << text25[i];
    Sleep (90);
}
}

else if (choice2 == "2")
{
    cout << endl << endl;
    cout << "Human: ";
    string text26 = "My name is William and I am the owner of this house. I was scared when you came here a little bit, but now, all is ok. So, why you came here?";
    for (int i = 0; i<= text26.size(); i++)
{
    cout << text26[i];
    Sleep (90);
}
    cout << endl << endl;
    cout << "You: ";
    string text27 = "You know, to be honest I don't know where I am, and I need a help to get me home.";
    for (int i = 0; i<= text27.size(); i++)
{
    cout << text27[i];
    Sleep (90);
}
}

cout << endl << endl;
cout << "William: ";

string text28 = "To begin, I am the villager of a small country. I live quite far from other houses, because there is a war and enemies can kill me easily";
string text29 = "However, I see the power in your body and I see that you can help me and my relatives. Therefore, if you help me first, I will help you then";
    for (int i = 0; i<= text28.size(); i++)
{
    cout << text28[i];
    Sleep (90);
}

cout << endl;

    for (int i = 0; i<= text29.size(); i++)
{
    cout << text29[i];
    Sleep (125);
}

cout << endl << endl;
cout << "You: ";

string text30 = "War is a terrible thing that I have ever heard";
string text31 = "What should I do?";

   for (int i = 0; i<= text30.size(); i++)
{
    cout << text30[i];
    Sleep (90);
}

cout << endl;

   for (int i = 0; i<= text31.size(); i++)
{
    cout << text31[i];
    Sleep (90);
}

cout << endl << endl;

cout << "William: ";

string text34 = "Let's go to the storage, I will show you...";

   for (int i = 0; i<= text34.size(); i++)
{
    cout << text34[i];
    Sleep (90);
}

cout << endl << endl << "[You moved to the storage]" << endl << endl;
Sleep(3000);
system ("cls");

char storage[25][61];

for (int i = 1; i<= 24; i++)
{
    for (int j = 1; j<= 60; j++)
    {
        if (i == 1 or i == 24) storage[i][j] = '-';
        else if (j == 1 or j == 60) storage[i][j] = '|';
        else storage[i][j] = ' ';
    }
}

for (int i = 12; i<=23; i++)
    {
        storage[i][25] = '$';
    }

for (int i = 12; i<=23; i++)
    {
        storage[i][35] = '$';
    }

for (int i = 25; i<=35; i++)
    {
        storage[12][i] = '$';
    }


for (int i = 1; i<= 24; i++)
{
    for (int j = 1; j<= 60; j++)
    {
        cout << storage[i][j];
    }
    cout << endl;
}

cout << endl << endl << "William: ";

string text35 = "Here we are. This storage contains weapon for war that we really need and there is a lock with a code on the storage's door. We have been trying to solve the code for many years, but still we did not open the door. Solve it.";
   for (int i = 0; i<= text35.size(); i++)
{
    cout << text35[i];
    Sleep (90);
}

Sleep (1000);

cout << endl << endl;

cout << "William: ";

string text36 = "Look at it";

   for (int i = 0; i<= text36.size(); i++)
{
    cout << text36[i];
    Sleep (90);
}

cout << endl << endl;

Sleep (1000);


cout << "1. 1 1 2 3 5 ?" << endl;
cout << "2. 6 8 ? 9" << endl;
cout << "3. F ? U R" << endl;
cout << "4. 1. - 2. + 3." << endl << endl;

cout << "xxxx (only numbers)" << endl << endl;

cout << "Password: ";

string code;

for (int i = 1; i<= 100000; i++)
{
    cin >> code;
    if (code == "8701") break;
    else cout << "wrong!" << endl << "Password: ";
}

cout << endl << "*unlocked!*" << endl;
Sleep (3000);

system ("cls");

cout << "You have reached the end of first part of the game. Wait for next parts. Thank you!";


Sleep (60000);
return 0;
}
