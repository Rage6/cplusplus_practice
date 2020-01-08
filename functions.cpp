#include <iostream>

#include "functions.hpp"

Rawtext::Rawtext(std::string default_word,std::string start_text) {
  word = default_word;
  raw_text = start_text;
};


// This goes through the selected object and
std::string Rawtext::edit_old_text() {
  for (int i = 0; i < raw_text.size(); i++) {
    if (raw_text[i] == word[0]) {
      std::string blank_word = "";
      std::string blank_text = "";
      int k = i;
      for (int j = 0; j < word.size(); j++) {
        blank_word += word[j];
        blank_text += raw_text[k];
        k++;
      };
      if (blank_text == blank_word) {
        int n = i;
        for (int m = 0; m < word.size(); m++) {
          raw_text.replace(n,1,"*");
          n++;
        };
      };
    };
  };
  return raw_text;
};
