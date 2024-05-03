#include <iostream>
using namespace std;
#include "emojis/emoji.h"
void decToBinary(int n)
{

    int binaryNum[32];


    int i = 0;
    while (n > 0) {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }


    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}


int main()
{
    int n;
  int x;
    cout << "insira um número para converter: " << "\n";
  cin >> n;
    decToBinary(n);
  
srand(time(NULL));
  x = rand() % 10 +1;

  switch(x){
    case 1: 
      cout << "\n\U0001F4A2";
break;
    case 2:
      cout << "\n\U0001F620";
 break;
    case 3:
    cout << "\n\U0001F627";
    break;
    case 4:
    cout << "\n\U0001F493";
    break;
    case 5:
    cout << "\n\U000023EA";
    break;
    case 6: 
      cout << "\n\U00002623";
    break;
    case 7:
    cout << "\n\U0000267B";
    break;
    case 8:
    cout << "\n\U0001F56F";
    break;
    case 9:
    cout << "\n\U0001F43F";
    break;
    case 10:
    cout << "\n\U0001F3A6";
    break;
  }
  
    return 0;
}
  
