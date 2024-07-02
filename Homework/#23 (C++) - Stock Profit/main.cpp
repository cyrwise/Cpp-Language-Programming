// 04/10/2022
#include <iostream>
#include <iomanip>
using namespace std;

void getProfit(double numOfShares, double purchasePricePerShare, double purchaseCommission, double salePricePerShare, double salesCommission);

int main()
{

  double numOfShares;
  double purchasePricePerShare;
  double purchaseCommission;
  double salePricePerShare;
  double salesCommission;

  
  cout << "How many shares did you buy and then sell? ";
  cin >> numOfShares;

  cout << "What price did you pay for the stock per share? ";
  cin >> purchasePricePerShare;

  cout << "What was the purchase commission? ";
  cin >> purchaseCommission;

  cout << "What was the sale price per share? ";
  cin >> salePricePerShare;

  cout << "What was the sales commission? ";
  cin >> salesCommission;

  // I had a lot of trouble with this part, so as a personal note I am reminding
  // myself that: for caliing the function, you DO NOT put double,void,or ANYthing
  // of that sort. That only goes in the prototype and actual function to define it.
  // VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV
  
  getProfit(numOfShares, purchasePricePerShare, purchaseCommission, salePricePerShare, salesCommission);
  
}

void getProfit(double numOfShares, double purchasePricePerShare, double purchaseCommission, double salePricePerShare, double salesCommission)
{

  double profit;
  
  profit = ((numOfShares * salePricePerShare) - salesCommission) - ((numOfShares * purchasePricePerShare) + purchaseCommission);


  if (profit < 0){
    cout << "The loss from this sale of stock is $" << setprecision(2) << fixed << profit;

  }  else{
    cout << "The profit from this sale of stock is $" << setprecision(2) << fixed << profit;
    
  }

}
