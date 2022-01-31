// need to be able to set the list of words that are possible
// and have some way of choosing best guess???

//choosing the word with as much used letters as possible??

//for word in list count letters
// now each letter has a "score"
//(lets start with sum of usage per letter as a start)
//find word with highest score, and guess that.
//some way of giving the result per letter: not in word/ in word/ correct place
//remove all words containing letter not in word
//remove all words not containing letter that is in the word
//remove all words that dont have letter in correct place
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int c_to_n(char c)
{
    int n = -1;
    static const char * const alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *p = strchr(alphabet, toupper((unsigned char)c));

    if (p)
    {
        n = p - alphabet;
    }

    return n;
}

int main() {
  int const word_length = 5;
  int const number_of_words = 2315;

  typedef struct
  {
    char word[word_length+1];
  } Word;

  typedef struct
  {
    Word words[number_of_words];
  } Words;

  printf("Main has started.");
  Words strs;
  int i = 0;
  FILE * fp;
  Word buff;

  Word test;
  test = (Word) {"wut"};

  fp = fopen ("words.txt", "r");

  while (fgets(strs.words[i].word, word_length, fp)) {
    i++;
  }
  fclose(fp);


  //scoring loop
  int score_per_letter[26] = {0};
  for (int i = 0; i < number_of_words; i++){
    for (int j = 0; j < word_length; j++){
      if (c_to_n(strs.words[i].word[j]) > 25){
        printf("Big letter");
      }
      if (c_to_n(strs.words[i].word[j]) < 0){
        printf("Smol letter");
      }
      score_per_letter[c_to_n(strs.words[i].word[j])]++;
    }
  }

  // find highest score word:
  int best_word_index = 0;
  int best_word_score = 0;
  int current_word_score = 0;

  for (int i = 0; i < number_of_words; i++){
    current_word_score = 0;
    for (int j = 0; j < word_length; j++){
      current_word_score += score_per_letter[c_to_n(strs.words[i].word[j])];
    }
    if (current_word_score > best_word_score){
      best_word_score = current_word_score;
      best_word_index = i;
    }
  }
  printf("best word is: %s, with a score of: %d \n",
  strs.words[best_word_index].word, best_word_score);

  printf("Main is done.");
  return 0;
}
