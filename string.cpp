#include <iostream>
using namespace std;
char getMaxCharOcc(string s)
{
  int arr[26] = {0};
  for (int i = 0; i < s.length(); i++)
  {

    int number = s[i] - 'a';
    arr[number]++;
  }
  int maxi = -1;
  int ans = 0;
  for (int i = 0; i < 26; i++)
  {
    if (maxi < arr[i])
    {
      ans = i;
      maxi = arr[i];
    }
  }
  char finlAns = 'a' + ans;
  return finlAns;
}
int main()
{
  string s;
  cin >> s;
  cout << getMaxCharOcc(s);
}