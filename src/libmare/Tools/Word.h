
#pragma once

#include "String.h"
#include "List.h"

class Word : public String
{
public:
  bool quoted;

  Word(const String& word, bool quoted) : String(word), quoted(quoted) {}

  Word& operator=(const String& other);

  bool operator==(const Word& other) const;
  bool operator!=(const Word& other) const;

  void appendTo(String& text) const;

  static void split(const String& text, List<Word>& words);
  static void append(const List<Word>& words, String& text);
  static String join(const List<String>& words);
};
