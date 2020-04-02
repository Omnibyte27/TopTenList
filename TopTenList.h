//Manages a list of top ten hyperlinks
#ifndef TOPTENLIST_H
#define TOPTENLIST_H
#include <string>
#include <vector>
#include "Hyperlink.h"
#include <iostream>
#include "IDirectionable.h"

using std::string;
using std::vector;
using namespace std;

class TopTenList : public IDirectionable
{
  private:
    vector<Hyperlink> _list;

  public:
    TopTenList();
    void display_forward()
    {
      for(int i = 0; i < 10; i++)
      {
        cout << i + 1 << ": " << _list.at(i).text << endl;
      }
    }
    void display_backward()
    {
      for(int i = 9; i > -1; i--)
      {
        cout << i + 1 << ": " << _list.at(i).text << endl;
      }
    }
    void set_at(int index, Hyperlink link);
    Hyperlink get(int index);
};

#endif
