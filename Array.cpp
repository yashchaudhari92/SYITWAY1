#include <iostream>
using namespace std;

int main()
{
  // int marks[4]={35,40,45,50};
  // cout<<marks[0]<<endl;
  // cout<<marks[1]<<endl;
  // cout<<marks[2]<<endl;
  // cout<<marks[3]<<endl;

  int i = 0;
  int mathmarks[6] = {55, 60, 65, 75, 80, 90};
 
  // using for loop
  for (int i = 0; i < 6; i++)
  {
    cout << "the mathmarks are: " << mathmarks[i] << endl;
  }

  // using while loop
  // while (i < 6)
  // {
  //   cout << "the mathmarks are: " << mathmarks[i] << endl;
  //   i++;
  // }

  // using do while loop
  // do
  // {
  //   cout << "the mathmarks are: " << mathmarks[i] << endl;
  //   i++;
  // } while (i < 6);
  return 0;
}