#include <iostream>
using namespace std;

int main()
{
  int arr[] = {2,1,6,5,9};
  int profit;
  int max_profit = 0;
  int min_price = arr[0];

  for (int i = 0; i < 5; i++)
  {
    if (arr[i] < min_price)
    {
      min_price = arr[i];
    }

    profit = arr[i] - min_price;

    if (max_profit < profit)
    {
      max_profit = profit;
    }
  }
  cout << max_profit;
}