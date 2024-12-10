#include <iostream>
using namespace std;
class team
{
    int id[100];
    string name[100];
    int flag = 0;

public:
    void getid(void)
    {
        cout << "Enter your player " << flag + 1 << " ID:" << endl;
        cin >> id[flag];
        cout << "Enter your player Name:" << endl;
        cin >> name[flag];
        flag++;
    }
    void displayteam(void);
};
void team::displayteam(void)
{
    for (int i = 0; i < flag; i++)
    {
        cout << id[i] << ":" << name[i] << endl;
    }
}
int main()
{
    team squard;
    for (int i = 0; i < 4; i++)
    {
        squard.getid();
        squard.displayteam();
    }
    return 0;
}