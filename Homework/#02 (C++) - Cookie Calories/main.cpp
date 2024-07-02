#include <iostream>
using namespace std;
int main() {

double CALPERBAG, UserCookies, CalPerCookie, Final;

CALPERBAG = 10*300; // 3000
CalPerCookie = 3000 / 40;

cout << "Enter the number of cookies you consumed: " << endl;
cin >> UserCookies;

Final = UserCookies * CalPerCookie;

cout << "You consumed " << Final << " calories in cookies.";

}
