#include <iostream>
#include <ctime>
using namespace std;
int main()
{
srand(time(NULL));int i;
const char letters = 26;
char let[letters] {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm'};
while(1)
{
i = rand()%10;                // доделать
cout << i << "  ";
let[letters] = rand();
cout << let[letters] << "\t";
}
}
