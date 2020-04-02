//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using namespace std;

TopTenList::TopTenList()
{
   _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
  _list.at(index - 1).text = link.text;
  _list.at(index - 1).url = link.url;
}

Hyperlink TopTenList::get(int index)
{
  string text = _list.at(index).text;
  string url = _list.at(index).url;
  cout << "Language: " << text << " Url: " << url << endl;
}
