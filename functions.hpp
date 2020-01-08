#include <iostream>
#include <string>
#include <vector>

class Rawtext {

  std::string word;
  std::string raw_text;
  std::string edit_text;

  public:
    //Builds a new object
    Rawtext(std::string default_word,std::string start_text);

    std::string edit_old_text();

};
