// working with structs
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//should have used pointers for char member_names
//in order to use: var_name.member_name = value;
//this would also reduce memory used, as a pointer takes less memory (word size)
//than most of the variables. It would also remove the need for string.h
//(I think)
struct Character{
    char gender[2];
    char given_name[16];
    char family_name[16];
    char race[16];
    char age[16];
    char appearance[50];
    char high_ability[4];
    char low_ability[4];
    char talent[50];
    char mannerism[50];
    char interaction_trait[16];
    char alignment[2];
    char ideal[20];
    char bond[50];
    char flaw_secret[50];
};

void print_character(struct Character character){
  printf("Name: %s %s\n",
  character.given_name, character.family_name);
  printf("Race: %s\n",
  character.race);
  printf("Age: %s\n",
  character.age);
  printf("Appearance: %s\n",
  character.appearance);
  printf("Abilities: high %s low %s\n",
  character.high_ability, character.low_ability);
  printf("Talent: %s\n",
  character.talent);
  printf("Mannerism: %s\n",
  character.mannerism);
  printf("Interaction trait: %s\n",
  character.interaction_trait);
  printf("Ideal: %s\n",
  character.ideal);
  printf("Bond: %s\n",
  character.bond);
  printf("Flaw or secret: %s\n",
  character.flaw_secret);
}

int main(int argc, char const *argv[]) {
  char genders[2][2] = {
    "M",
    "F"
  };

  char male_given_names[10][16] = {
    "James",
    "John",
    "Harold",
    "Frank",
    "Christopher",
    "Adam",
    "George",
    "Albert",
    "Richard",
    "(Exotic)"
  };

  char female_given_names[10][16] = {
    "Jane",
    "Hannah",
    "Falicia",
    "Christina",
    "Alexandra",
    "Georgina",
    "Anastasia",
    "Elizabeth",
    "Charlotte",
    "(Exotic)"
  };

  char family_names[10][16] = {
    "Redstone",
    "Blacktree",
    "Whitemountain",
    "Safehaven",
    "Oakgate",
    "Pinebridge",
    "Stonehall",
    "(City/Place)",
    "(Profession)",
    "(Antonym)"
  };

  char races[10][16] = {
    "Dwarf",
    "Elf",
    "Halfling",
    "Human",
    "Dragonborn",
    "Gnome",
    "Half-Elf",
    "Half-Orc",
    "Tiefling",
    "Exotic"
  };

  char ages[6][16] = {
    "Child",
    "Youth",
    "Young",
    "Middle-Age",
    "Old",
    "Very Old"
  };

  char appearances[20][50] = {
    "Distinctive jewelry",
    "Piercings",
    "Flamboyant or outlandish clothes",
    "Formal, clean clothes",
    "Ragged, dirty clothes",
    "Pronounced scar",
    "Missing teeth",
    "Missing fingers",
    "Unusual eye colour",
    "Tattoos",
    "Birthmark",
    "Unusual skin colour",
    "Bald",
    "Braided beard or hair",
    "Unusual hair colour",
    "Nervous eye twitch",
    "Distinctive nose",
    "Distinctive posture",
    "Exceptionally beautiful",
    "Exceptionally ugly"
  };

  char abilities[6][4] = {
    "STR",
    "DEX",
    "CON",
    "INT",
    "WIS",
    "CHR"
  };

  char talents[20][50] = {
    "Plays a musical instrument",
    "Speaks several languages fluently",
    "Unbelievably lucky",
    "Perfect memory",
    "Great with animals",
    "Great with children",
    "Great at solving puzzles",
    "Great at one game",
    "Great at impersonations",
    "Draws beautifully",
    "Paints beautifully",
    "Sings beautifully",
    "Drinks everyone under the table",
    "Expert carpenter",
    "Expert cook",
    "Expert dart thrower and rock skipper",
    "Expert juggler",
    "Skilled actor and master of disguise",
    "Skilled dancer",
    "Knows thieves' cant"
  };

  char mannerisms[20][50] = {
    "Prone to singing, whistling, or humming quietly",
    "Speaks in rhyme or some other peculiar way",
    "Particularly low or high voice",
    "Slurs words, lisps, or stutters",
    "Enunciates overly clearly",
    "Speaks loudly",
    "Whispers",
    "Uses flowery speech or long words",
    "Frequently uses the wrong word",
    "Uses colorful oaths and exclamations",
    "Makes constant jokes or puns",
    "Prone to predictions of doom",
    "Fidgets",
    "Squints",
    "Stares into the distance",
    "Chews something",
    "Paces",
    "Taps fingers",
    "Bites fingernails",
    "Twirls hair or tugs beard"
  };

  char interaction_traits[12][16] = {
    "Argumentative",
    "Arrogant",
    "Blustering",
    "Rude",
    "Curious",
    "Friendly",
    "Honest",
    "Hot tempered",
    "Irritable",
    "Ponderous",
    "Quiet",
    "Suspicious"
  };

  char alignments[6][2] = {
    "G",
    "E",
    "L",
    "C",
    "N",
    "O"
  };

  char good_ideals[6][20] = {
    "Beauty",
    "Charity",
    "Greater good",
    "Life",
    "Respect",
    "Self-sacrifice"
  };

  char evil_ideals[6][20] = {
    "Domination",
    "Greed",
    "Might",
    "Pain",
    "Retribution",
    "Slaughter"
  };

  char lawful_ideals[6][20] = {
    "Community",
    "Fairness",
    "Honor",
    "Logic",
    "Responsibility",
    "Tradition"
  };

  char chaotic_ideals[6][20] = {
    "Change",
    "Creativity",
    "Freedom",
    "Independence",
    "No limits",
    "Whimsy"
  };

  char neutral_ideals[6][20] = {
    "Balance",
    "Knowledge",
    "Live and let live",
    "Moderation",
    "Neutrality",
    "People"
  };

  char other_ideals[6][20] = {
    "Aspiration",
    "Discovery",
    "Glory",
    "Nation",
    "Redemption",
    "Self-knowledge"
  };

  char bonds[9][50] = {
    "Dedicated to fulfilling a personal life goal",
    "Protective of close family members",
    "Protective of colleagues or compatriots",
    "Loyal to a benefactor, patron, or employer",
    "Captivated by a romantic interest",
    "Drawn to a special place",
    "Protective of a sentimental keepsake",
    "Protective of a valuable possession",
    "Out for revenge"
  };

  char flaw_secrets[12][50] = {
    "Forbidden love or susceptibility to romance",
    "Enjoys decadent pleasures",
    "Arrogance",
    "Envies another creature's possessions or station",
    "Overpowering greed",
    "Prone to rage",
    "Has a powerful enemy",
    "Specific phobia",
    "Shameful or scandalous history",
    "Secret crime or misdeed",
    "Possession of forbidden lore",
    "Foolhardy bravery"
  };

  struct Character generated_character;

  srand(time(0)); //new random seed

  //Generate random number in a range:
  //rand() % (max_number + 1 - minimum_number) + minimum_number


  int generated_gender = rand() % (1+1-0) + 0;
  int generated_given_name = rand() % (9+1-0) + 0;
  int generated_family_name = rand() % (9+1-0) + 0;
  int generated_race = rand() % (9+1-0) + 0;
  int generated_age = rand() % (5+1-0) + 0;
  int generated_appearance = rand() % (19+1-0) + 0;
  int generated_high_ability = rand() % (5+1-0) + 0;
  int generated_low_ability = rand() % (5+1-0) + 0;
  int generated_talent = rand() % (19+1-0) + 0;
  int generated_mannerism = rand() % (19+1-0) + 0;
  int generated_interaction_trait = rand() % (11+1-0) + 0;
  int generated_alignment = rand() % (5+1-0) + 0;
  int generated_ideal = rand() % (5+1-0) + 0;
  int generated_bond = rand() % (8+1-0) + 0;
  int generated_flaw_secret = rand() % (11+1-0) + 0;

  //strcmp return 0 if strings are equal

  strcpy(generated_character.gender, genders[generated_gender]);
  if (strcmp(generated_character.gender, "M") == 0){
    strcpy(generated_character.given_name,
      male_given_names[generated_given_name]);
  } else {
    strcpy(generated_character.given_name,
      female_given_names[generated_given_name]);
  }
  strcpy(generated_character.family_name,
  family_names[generated_family_name]);
  strcpy(generated_character.race,
  races[generated_race]);
  strcpy(generated_character.age,
  ages[generated_age]);
  strcpy(generated_character.appearance,
  appearances[generated_appearance]);
  strcpy(generated_character.high_ability,
  abilities[generated_high_ability]);
  strcpy(generated_character.low_ability,
  abilities[generated_low_ability]);
  strcpy(generated_character.talent,
  talents[generated_talent]);
  strcpy(generated_character.mannerism,
  mannerisms[generated_mannerism]);
  strcpy(generated_character.interaction_trait,
  interaction_traits[generated_interaction_trait]);
  strcpy(generated_character.alignment,
  alignments[generated_alignment]);
  switch (generated_alignment) {
    case 0:
      strcpy(generated_character.ideal, good_ideals[generated_ideal]);
      break;

    case 1:
      strcpy(generated_character.ideal, evil_ideals[generated_ideal]);
      break;

    case 2:
      strcpy(generated_character.ideal, lawful_ideals[generated_ideal]);
      break;

    case 3:
      strcpy(generated_character.ideal, chaotic_ideals[generated_ideal]);
      break;

    case 4:
      strcpy(generated_character.ideal, neutral_ideals[generated_ideal]);
      break;

    default:
      strcpy(generated_character.ideal, other_ideals[generated_ideal]);
      break;
  }
  strcpy(generated_character.bond,
  bonds[generated_bond]);
  strcpy(generated_character.flaw_secret,
  flaw_secrets[generated_flaw_secret]);

  print_character(generated_character);

  return 0;
}
