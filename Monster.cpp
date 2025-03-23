#include<iostream>
#include<string>
using namespace std;
// List of all functions

void logo();
void intro();
void startGame();
string showMenu();
void readnamelessMonster();
void exitGame();
string showCharacterInfo(int choice);
void printCharacters();
void  talkToCharacter();
void invalidChoice();
void printClues();
string investigateClue();
void askCharacterAboutClue(int clue, int character);
int showClueInfo(int choice);
void philosophicalWalk();
void makeGuess();
int  getPlayerChoice();
bool checkGuess(string guess);
void gameOver(bool solved);
void clearCin();
void cases();
void lookAround();
void witnesses();

// Global variables

bool itemFound = false;


void logo()
{
    cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@%*******#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@#******%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@%@%%*****#@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@%***#@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%***#@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%***#@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%***#@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%***#@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@%%***#@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@%%%%%****@%%%%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#####****####%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*************%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@*************%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#************%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@#*%@%***#@@#*%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%##@@%****@@%*%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@%%%%%%%%%%%%%%%%%%%@%%%%%%%%%%%%%%%%%%%%%%%%@%%%%%%@#%@@%***#@@%#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@%%%%%@%%%@%%%%%%%%%%%%%%%%%#@%@%****@@%%%@%%%%%%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%@%%@%%%%%%%%%%%%@%%%%%%%%%%%%@@%%%%@@@%%%%%%%%%%%%%%%%%@%%%%%%%@@%****@%%%%@%%%%%%@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%@%%%%%%%%%%%%%%%%%%%%%%%%%%#***#%@%%%#%%#%%%%%%%%%%%%%%%%%%%%%%@%****%%%%%%%%%%#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%******%%%%%%@#*****%%%%*******%%%%*****%%%@@#*****%%#******#%%****%************%*********#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%@******%%%%%%@*****#@%%*********%%%%****#@%@%%****%@#*********%***#@************@#**********%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*****#@%%%%#*****@@@#****##****%%%#****%%%%%#**#@#****#****%%***#%%**********#@@***********%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%@******@%%%%#****#@%#***#@@@#***#@%%****#@%%%%**%@****@@%***%%***#@@****%%%%%**@%%***#%#****#@%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%@******%%%@%*****%@%#***%@%%%****%%%*****%@%%%**%%***#@@@#*#@%****@@#***%@@%@#*@@%***#@@#****%%@%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%@******#@%%#*****%@%****@@%%%****#@%*****#@%%%**%%***%@%%%*%@%****@@#***%@%%%%*@@%***#@@%****%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%@*******%%@******%@#***#@@%@@#****@%******%%%%**%%***#@%%%%@@%****@@#***%@%%%%#@@%***#@%@****#@%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%@*******#%%******%@****#@@%%%#****%%******#@%%**%#****@%%@%%@%****@@#***%@%%%%%%@%***#@%%****%@%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%**#*****@#**#***%%****%@%#%@%****%%*******@%%**%%*****%%@%%%%****@@#***%@%@#%@%%%***#@@@****%@%%%%%@%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%@%%%%%%%%%%**##****%**##***%%****%%%*#%%****#%**#****#@%**%%*****#@%%%%%****@@#***%@%%*%@%%%***#@%%****%@%%%%@%%%@%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%@#**%%%%@@**#%*******%#***%#****%@***%%****#%**%*****%%**%@******#%%%%%****@@#***###**%@%%%***#@@#****@@%%@%#**@%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%@%****#%@%@**#@*******@#***%#****%#***#%****#%**%#****#%**%@#*******%%%%****@@#********%@%%%****#*****#@%@%#****%@%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%@%*******#%@**#@#*****#@#***%#****#*****%*****%**%%*****%**%@%#*******%%%****@@#********%%%%%*********#@@%#*******%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%********#@**#@%*****%@#***%#****#*****#*****%**%@#****#**%@@%*******#%%****@@#********%@%%%********#@@@#********%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%@%@#*****#%@@**#@@#****@@#***%#****%#***#%****#%**%@%*******%@%%%*******#%****@@#***%@@#*%@%%%********#@@@@%#*****#@%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%****%@@@@**#@%%***#@@#***%#****%@***@%****#%**%@%#******%%%%%%*******%****@@#***%@%@*%@%%%***##****@%%%@@%****%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%#*#@@@@%@**#@%%***%@%#***%%****%@%*%@%****#%**%@%%******%@%%%%%#*****#****@@#***%@%%%%@%%%***#%****%@%%%%%@#*#@@%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%@@@%%%@**#@%%#*#@@%#***%%****%@%#@@%****%%**%@%%******%@%%%%%%*****#****@@#***%@%%%@%%%%***#@****#@%%%%@%%%%@%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%@%%%%%%@**#@%%%*%@%%#***%@****#@%%@@#****%%**%@%%%*****%@%%%@%%%****#****@@#***%@%%%%@%%%***#@#****%%%%%%@%%@@@%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%@%%%%%@**#@@%@*%@@%#***%@****#@@%%@#****@%**%@%%%*****%@%%@%%%%****#****@@#***%@%%%%%%%%***#@%****#%%%%%%%@%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%**#@@%%%%@%%#***%@#****@@%%%#***#@%**%@%%@%****%%%*%%%%%#***%***#@@#***%@%%%%#%%%***#@%*****@%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%**#@@%%@@@%%#***%@%****%@%%%****%@%**%@%%@@****%@#*#@%%%#***%***#@@#***%@%%%#*@%%***#@%#****%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%**#@@%%%%%%%#***%@%#***#@%@#****@@%**%@%%%%#***%@***%%%@***#%***#@@#***%@%@%**@%%***#@%%****#@@%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%**#@@%%%%%%@#***#@%%****%%%****%@@#**%@%%@%%#**%%***#%%#***%%***#@@******##***@@#****%@%*****@%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%#***%@%%%%%%%*****%@@#*********#@%%****%%%%%%#**%#*********#@%****@#***********@%*****#@@#****#@%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%*****%%%%%%@*******@%@#*******#%@@#****#@%%%%%**%#********#%@%***#%************@*******%%#*****%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%@%###**##%%%@%###***###%%%#*****#@@@%######%@%%%%#*%@%##****%@%@%****#*****#######%##*#*###%%*#**##@%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@@@@%@%%@%@@@@@@@@@%%%%#%%@@@%@%@@@@@@%%%@%%*%%%@@@@@@@%@%%****@@@@@@@@@@@@@@%@@@@@@@@%@@@@@@@@%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@@@%%%%%%%%%%%%%%@%#%@%%%%%%%%%%%%***#@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@%%%%%%%%%%%%%%%%@%%%@%%%%%%%%%%%%***#@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@%%%%%%%%%%%%***#@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@%%%%%%%%%%%%%%%***#@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%***#@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%***#@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%***#@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%***#@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%****@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#**#@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@%*#@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)" << endl;








      string x;
      cout << "Press any key to continue: ";
      cin >> x;
      system("cls");
  }

  void intro() {
      cout << "A chilling case has landed on your desk, a series of gruesome events with no clear culprit.\n";
      cout << "It all began with a fateful decision: a respected surgeon once saved the life of a young boy over a powerful man.\n";
      cout << "But that seemingly simple act set off a chain of tragic occurrences.\n";
      cout << "Now, years later, a string of violent crimes with no apparent motive has emerged, all pointing to a mysterious and \ncalculating individual..";
      cout << endl;
      cout << "*****************\n";
  }
  void cases() {
      cout << "You arrive at the scene of the latest tragedy. The air is heavy with a metallic scent.\n";
      cout << "Three bodies lie sprawled on the floor, each bearing signs of precise, brutal force.\n";
      cout << "The first, a middle-aged man, lies near an overturned table. A blood-stained letter is clutched in his hand. The second,a woman with glasses, near broken glass.\n";
      cout << "And a third, younger man, lies near a strange medical report, with the initials 'J.L.' written on it. A page of what    seems like a fairy tale lies near his body.\n";
      cout << "\nStanding near the scene are the suspects:\n";
      cout << "A Doctor, once acclaimed now shrouded in mystery. An Inspector with an intense stare.A Woman consumed by bitterness and a Boy with an unnerving calmness\n";
      cout << "\nThe authorities have gathered a few witnesses, each with a different account:\n";
      cout << "Witness 1: \"The killer was a man, it was definitely the doctor! I saw him.\"\n";
      cout << "Witness 2: \"I didn�t see it myself, but I heard the inspector arguing with one of the victims just yesterday.\"\n";
      cout << "Witness 3: \"I'm sure it was the woman! She hated the victims, I saw her screaming at them all the time!\"\n";
      cout << "Witness 4: \"It was... almost like a ghost, it came from nowhere. Like a wandering entity... so pure, so innocent. He seemed to be the same age as the youngest victim.\"\n";
      string x;
      cout << "Press any key to continue : \t";
      getline(cin, x);
      cin.ignore();
      system("cls");
  }
  void startGame() {
      char ch;
      cout << "\nAre you ready to find the culprit so called \"Great Detective\"? (Y or N)" << endl;
      cin >> ch;
      system("cls");
      if (ch == 'Y' || ch == 'y') {
          cases();
      }
      else if (ch == 'N' || ch == 'n') {
          char decision;
          cout << "Are you sure!!(y or N)" << endl;
          cin >> decision;
          if (decision == 'Y' || decision == 'y') {
              exit(0);
          }
          else if (decision == 'N' || decision == 'n') {
              cases();
          }
          else {
              invalidChoice();
              startGame();
          }
      }
      else {
          invalidChoice();
          startGame();
      }
  }

  void witnesses() {

      cout << "Here are what the witnesses have to say " << endl;
      cout << endl;

      cout << "Witness 1: \"The killer was a man, it was definitely the doctor! I saw him!!!!!\"\n";
      cout << "Witness 2: \"I didn�t see it myself, but I heard the inspector arguing with one of the victims just yesterday.\"\n";
      cout << "Witness 3: \"I'm sure ...it was the woman! She hated the victims, I saw her screaming at them all the time!\"\n";
      cout << "Witness 4: \"It was... almost like a ghost, it came from nowhere. Like a wandering entity... so pure, so innocent. He seemed to be the same age as the youngest victim.\"\n";
  }

  string showMenu() {
      string option;
      cout << "\nWhat will you do?\n";
      cout << "1. Talking to character\n";
      cout << "2. Investigating clues\n";
      cout << "3. Making a guess\n";
      cout << "4. Read pages of Nameless Monster\n";
      cout << "5. Hear testimony\n";
      cout << "6. Looking arround the scene\n";
      cout << "7. Quit the game\n";
      cout << "\n\n<---------------------------------------------------------------------------> " << endl;
      while (true) {
          cout << "Enter the number of your choice(1-7): ";
          cin >> option;
          if (option == "1") {
              return "Talking to a character";
          }
          else if (option == "2") {
              return "Investigating clues";
          }
          else if (option == "3") {
              return "Making a guess";
          }
          else if (option == "4") {
              return "Read Nameless Monster";
          }
          else if (option == "5") {
              return "Hear testimony";
          }
          else if (option == "6") {
              return "Looking arround";
          }
          else if (option == "7") {
              return "Quitting the game";
          }

          else {
              invalidChoice();
              continue;
          }
      }
  }

  void clearCin() {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }



  void readnamelessMonster() {


      cout << "\nDuring your investigation you read a disturbing poem" << std::endl;
      cout << "**********************************************\n";
      cout << "There was a monster, with no name,\n"
          << "He searched for answers, but all in vain.\n"
          << "Through endless lands, he wandered far,\n"
          << "His heart a void, his mind a scar.\n"
          << "\n"
          << "He found a name but cast it aside,\n"
          << "As if the sound could not decide.\n"
          << "He killed by night, and killed by day,\n"
          << "A nameless terror on his way.\n"
          << "\n"
          << "Through towns and cities, leaving dread,\n"
          << "He hunted souls, and countless bled.\n"
          << "In shadows deep, he sought his prize,\n"
          << "A name to end his endless cries.\n"
          << "\n"
          << "At last, he found it, one name so true,\n"
          << "But with no one left, who would call it through?\n"
          << "His killing ceased, the world grew still,\n"
          << "But no one called him, with joy or thrill.\n"
          << "\n"
          << "What a shame... for Johan, so pure,\n"
          << "A name so perfect but lost for sure.\n";
      cout << "**********************************************\n";
      cout << std::endl;
  }

  void exitGame() {
      cout << "Game over. Thanks for playing!" << endl;
      cout << "***************\n";
  }

  string showCharacterInfo(int choice) {
      switch (choice) {
      case 1:
          return "Doctor: A once-celebrated doctor, now cloaked in mystery and controversy.\n";

      case 2:
          return "Inspector :  Calculating, intense, and fixated on this case for some reason.\n";

      case 3:
          return  "Woman: Bitter and filled with hatred towards the Doctor..\n";

      case 4:
          return  "Boy:Charismatic yet chilling, the Boy just feels strange.\n ";

      default:
          return "Invalid choice! Please select a valid character.\n";
      }
  }

  void printCharacters() {
      char responses;
      int information;
      while (true) {
          cout << "1. Doctor\n";
          cout << "2. Inspector\n";
          cout << "3. Woman\n";
          cout << "4. Boy\n";
          cout << "Do you want to know about these characters? (y/n) ";
          cout << "\n\n<---------------------------------------------------------------------------> " << endl;
          cin >> responses;
          if (responses == 'y' || responses == 'Y') {
              cout << "Which character do you would you like to know more about?\n";
              cin >> information;
              string info = showCharacterInfo(information);
              cout << info << endl;
          }
          else if (responses == 'n' || responses == 'N') {
              return;
          }
          else {
              invalidChoice();
              continue;
          }
      }
  }

  void  talkToCharacter() {
      bool keepAsking = true;
      while (keepAsking) {
          printCharacters();
          cout << "\nWhich character would you like to question? (Enter number): ";
          int choice;
          cin >> choice;

          switch (choice) {
          case 1:
              cout << "Doctor\n";
              cout << "Question him:\n";
              cout << "a) \"Did you know the victims well?\"\n";
              cout << "b) \"Why did they investigate your past?\"\n";
              cout << "c) \"Do you believe in redemption, Doctor?\"\n";
              char q1;
              cin >> q1;
              if (q1 == 'a') { cout << "\"Some... were close to me, once. But I never wanted this.\"\n"; }
              else if (q1 == 'b') { cout << "\"Their curiosity drove them to their end... I only wish I had known sooner.\"\n"; }
              else if (q1 == 'c') { cout << "\"Redemption? For a man marked by shadows, it is all I hope for.\"\n"; }
              else {
                  invalidChoice();
              }
              break;
          case 2:
              cout << "Inspector :\n";
              cout << "Question him:\n";
              cout << "a) \"What are your thoughts on the Doctor?\"\n";
              cout << "b) \"Do you suspect anyone else?\"\n";
              cout << "c) \"Are you sure the Doctor�s the killer?\"\n";
              char q2;
              cin >> q2;
              if (q2 == 'a') { cout << "\"The Doctor�s a man split in two. There�s something dark beneath his calm exterior.\"\n"; }
              else if (q2 == 'b') { cout << "\"Everyone�s a suspect until proven innocent, but my eyes are on the Doctor.\"\n"; }
              else if (q2 == 'c') { cout << "\"Certainty is the privilege of fools. I simply follow the evidence.\"\n"; }
              else {
                  invalidChoice();
              }
              break;
          case 3:
              cout << "Woman:\n";
              cout << "Question her:\n";
              cout << "a) \"Why do you despise the Doctor?\"\n";
              cout << "b) \"Do you think the Doctor is capable of murder?\"\n";
              cout << "c) \"Do you know the Boy?\"\n";
              char q3;
              cin >> q3;
              if (q3 == 'a') { cout << "\"He ruined me! He deserves to pay.\"\n"; }
              else if (q3 == 'b') { cout << "\"Anyone�s capable, detective. Especially the Doctor.\"\n"; }
              else if (q3 == 'c') { cout << "\"I�ve heard of him... He sounds just as monstrous.\"\n"; }
              else {
                  invalidChoice();
              }
              break;
          case 4:
              cout << "Boy:\n";
              cout << "Question him:\n";
              cout << "a) \"Who are you, really?\"\n";
              cout << "b) \"Why were you with the Doctor?\"\n";
              cout << "c) \"Do you believe in monsters?\"\n";
              char q4;
              cin >> q4;
              if (q4 == 'a') { cout << "\"I�m just a wanderer, finding beauty in everything.\"\n"; }
              else if (q4 == 'b') { cout << "\"He saved my life once, a debt that�s never repaid.\"\n"; }
              else if (q4 == 'c') { cout << "\"Perhaps we are all monsters, detective.\"\n"; }
              else {
                  invalidChoice();
              }
              break;
          default:
              invalidChoice(); continue;
          }

          cout << "\nWould you like to ask more questions? (y/n): ";
          char continueAsking;
          cin >> continueAsking;
          if (continueAsking == 'n') {
              keepAsking = false;
          }
      }
  }

  void invalidChoice() {
      cout << "\nInvalid input! please try again" << endl;
      clearCin();
  }

  void printClues() {
      cout << "\nClues you can investigate:\n";
      cout << "1. Blood-stained letter\n";
      cout << "2. Broken glass\n";
      cout << "3. Unusual medical report\n";
      cout << "4. Page from 'The Nameless Monster'\n";
      cout << "Enter your choice: ";
  }

  void lookAround() {
      cout << "\nYou survey the crime scene. The room is disheveled, with overturned furniture and shattered glass. A single lamp casts long, eerie shadows.\n";
      if (!itemFound) {
          cout << "You notice something peculiar lying near the broken glass-- a small, intricately designed golden pin.\n";
          cout << "You pick up the golden pin.\n";
          itemFound = true;
      }
      else {
          cout << "You notice a golden shimmer near the broken glass, but it is just a reflection. There is nothing else to see.\n";
      }
      if (itemFound) {
          bool askAgain = true;
          while (askAgain) {
              char askChoice;
              do {
                  cout << "Would you like to ask someone about the pin? (y/n): ";
                  cin >> askChoice;
                  if (askChoice != 'y' && askChoice != 'n' && askChoice != 'Y' && askChoice != 'N') {
                      cout << "Invalid choice! Please enter 'y' or 'n'.\n";
                      continue;

                  }
              } while (askChoice != 'y' && askChoice != 'n' && askChoice != 'Y' && askChoice != 'N');


              if (askChoice == 'y' || askChoice == 'Y') {
                  int character = 0;
                  do {
                      cout << "Who would you like to ask?\n";
                      cout << "1. Doctor\n";
                      cout << "2. Inspector\n";
                      cout << "3. Woman\n";
                      cout << "4. Boy\n";
                      cout << "Enter your choice (1-4): ";
                      cin >> character;
                      if (cin.fail() || character < 1 || character > 4) {
                          cin.clear();
                          cin.ignore(numeric_limits<streamsize>::max(), '\n');
                          cout << "Invalid choice! Please enter a number between 1 and 4.\n";
                          character = 0;

                      }
                  } while (character < 1 || character > 4);

                  askCharacterAboutClue(5, character);

              }
              else {
                  askAgain = false;
              }
          }


      }
  }


  string investigateClue() {
      int choice;
      printClues();
      cin >> choice;
      string description;
      switch (choice) {
      case 1:
          description = "Blood-stained letter: Contains cryptic phrases like 'I am the monster in the mirror.";
          break;
      case 2:
          description = "Broken glass : Found near the crime scene, possibly from a wine bottle indicating a possible struggle.Smells faintly of expensive cologne.";
          break;
      case 3:
          description = "Unusual medical report: Mentions 'patients with split identities.' It�s signed with the initials J.L.";
          break;
      case 4:
          description = "Page from 'The Nameless Monster': Describes a chilling tale about a 'child born of evil'.";
          break;
      default:
          description = "Invalid input!please try again.";
          break;
      }
      cout << description << endl;
      int clueInfo = showClueInfo(choice);
      cout << "Would you like to ask a character about this clue? (y/n): ";
      char askCharacter;
      cin >> askCharacter;
      if (askCharacter == 'y' || askCharacter == 'Y') {
          cout << "Which character would you like to ask about this clue? (Enter 1 for Doctor, 2 for Inspector , 3 for Woman, 4 for Boy): ";
          int characterChoice;
          cin >> characterChoice;
          askCharacterAboutClue(choice, characterChoice);
      }
      else if (askCharacter == 'n' || askCharacter == 'N') {
          cout << showClueInfo(choice);
      }
      else {
          invalidChoice();
      }
      return description;
  }

  void askCharacterAboutClue(int clue, int character) {
      bool continueAsking = true;
      while (continueAsking) {
          cout << "\n";
          switch (character) {
          case 1:
              if (clue == 1) cout << "The Doctor looks disturbed: \"I don�t remember writing such a thing...\"\n";
              else if (clue == 2) cout << "The Doctor shrugs. \"I don�t drink anymore, detective....but i might go back due to all this fuss going on.\"\n";
              else if (clue == 3) cout << "The Doctor�s face darkens. \"I remember patients like that. It�s.....\"\n";
              else if (clue == 4) cout << "The Doctor�s eyes widen. \"...The monster.... Don't confuse this with a bedtime story detective..\"\n";
              else if (clue == 5) {
                  cout << "The Doctor seems shaken, taking a step back.\n";
                  cout << "\"That's.. that's the pin I gave Johan. Why do you have this?\"\n";

              }

              break;
          case 2:
              if (clue == 3) cout << "The Inspector muses: \"Split identities. Perhaps the Doctor is hiding something.\"\n";
              else if (clue == 1)cout << "It is interesting... Perhaps doctor was trying to say something....\n";
              else if (clue == 2)cout << "Somebody has severe drinking problems...Drinking while killing? Seriously?\n";
              else if (clue == 4)cout << "This does't look like a children poem. Perhaps a clue, maybe a name, something hidden in the context\n";
              else if (clue == 5) {
                  cout << "The Inspector takes the pin, examining it with a sharp glare.\n";
                  cout << "\"This is quite interesting, Detective. I shall have it investigated.\"\n";

              }

              break;
          case 3:
              if (clue == 4) cout << "The Woman sneers. \"The monster... that�s the Doctor.\"\n";
              else if (clue == 1)cout << "It appears to be a letter ... J.L are the initials... I guess\n";
              else if (clue == 2)cout << "ITS NOT MINE !!!!\n";
              else if (clue == 3)cout << "I wouldn't know anything about that detective.\n";
              else if (clue == 5) {
                  cout << "The Woman stares at the pin with disdain.\n";
                  cout << "\"That's one of his things, isn't it? Another twisted reminder.\"\n";

              }

              break;
          case 4:
              if (clue == 4) cout << "The nameless mosnter huh? Seems you have good taste detective...\"\n";
              else if (clue == 2)cout << "Wine...Trying to escape from reality are we?\n";
              else if (clue == 1)cout << "J.L seems to be an absurd alias \n";
              else if (clue == 3)cout << "Split identities... everyone has one ..even if one doesn't admit it. \n";
              else if (clue == 5) {
                  cout << "The Boy's eyes widen in recognition, and a gentle smile spreads across his face.\n";
                  cout << "\"Ah, so you have found my little treasure. I'm glad it found someone worth it.\"\n";

              }

              break;
          default:
              cout << "That character has nothing to say.\n";
              break;
          }

          cout << "\nDo you want to ask about this clue again or ask about a different one? (y/n): ";
          char continueChoice;
          cin >> continueChoice;
          if (continueChoice == 'n') {
              continueAsking = false;
          }
      }
  }

  int showClueInfo(int choice) {
      switch (choice) {
      case 1:
          cout << "\nYou examine the blood-stained letter. It seems to have been written hastily, with an almost frantic tone. The ink is smeared in places, suggesting the writer was in a hurry or distressed.\n";
          return 5;
      case 2:
          cout << "\nThe broken glass is from an expensive wine bottle. The shards are scattered across the floor, and there�s a faint smell of cologne in the air. Perhaps the struggle was more than it seemed...\n";
          return 3;
      case 3:
          cout << "\nThe medical report is disturbing. It lists several cases of patients with split personalities, and the signature is from an unknown person . This may be more connected to the case than initially thought.\n";
          return 4;
      case 4:
          cout << "\nThe page from 'The Nameless Monster' describes a creature born of evil, a child who may hold the key to understanding the strange happenings in this town. The story feels disturbingly real...\n";
          return 2;
      default:
          cout << "Invalid clue choice.\n";
          return 0;
      }
  }

  int  getPlayerChoice() {
      int choice;
      while (!(cin >> choice)) {
          cout << "Invalid input. Please enter a number: ";
          clearCin();
      }
      return choice;
  }

  void makeGuess() {
      cout << "\nWho do you think is the murderer?";
      cout << "\n1. Doctor";
      cout << "\n2. Inspector";
      cout << "\n3. Woman";
      cout << "\n4. Boy";
      cout << "\nEnter the number";
      string guess;
      cin >> guess;
      if (guess != "1" && guess != "2" && guess != "3" && guess != "4") {
          invalidChoice();
          makeGuess();
          return;
      }
      if (checkGuess(guess)) {
          gameOver(true);
      }
      else {
          cout << "\nWrong guess! The character you accused has been executed.\n";
          philosophicalWalk();
          gameOver(false);
      }
  }

  bool checkGuess(string guess) {
      if (guess == "4") {
          return true;
      }
      return false;
  }

 void philosophicalWalk() {
     cout << "You enter a dimly lit bar, the silence broken only by the clinking of glasses. The Boy approaches you, his eyes gleaming with an eerie curiosity.\n";
     cout << "Boy: 'Would you like to come for a walk? It seems like you're starting to understand...'\n";
     cout << "1) Yes\n";
     cout << "2) No\n";

     int choice = getPlayerChoice();

     if (choice == 1 || choice == 2) {
         if (choice == 1) {
             cout << "\nYou agree to go for a walk with the Boy. A sense of unease settles upon you.\n";
         }
         else if (choice == 2) {
             cout << "\nThe Boy's smile widens, a glint of something malevolent flashing in his eyes.\n";
             cout << "Boy: 'It doesn't matter, you are going to walk with me regardless...' Despite a sense of dread, you find yourself getting up and following him outside.\n";
         }
         cout << "\nAs you walk, the Boy�s voice is almost hypnotic, calm yet with an underlying current of something sinister.\n";
         cout << "Boy: 'You know, truth is a peculiar thing, isn't it? Illusions and perceptions, that's all there is.'\n";

         cout << "\nAnxiety creeps into you, a knot forming in your stomach. You feel like you're being toyed with.\n";
         cout << "Detective: 'You're not making any sense. Who the hell are you?'\n";
         cout << "Boy: 'Oh? But you are so close, aren't you? What in the hell ARE you?'\n";
         cout << "A) 'I'm a detective, trying to solve this case.'\n";
         cout << "B) 'I'm not sure what I am anymore.'\n";

         char answer;
         cin >> answer;
         answer = toupper(answer);

         cout << "\nThe Boy stops walking, turning to face you with a chilling smile.\n";
         cout << "Boy: 'Who or what? That's an interesting question. I am many things, some call me a nameless monster, some call me Mr. Split Identity, some call me the monster in the mirror... but I prefer the name Johan Liebert.'\n";

         cout << "\nHis eyes turn pitch black, and you see the true form of a monster before it...\n";
         cout << "Everything goes dark.\n";



         cout << R"(
                                                                       :-=++++++****++++==--                                
                                                                     -++++#*****************.                               
                                                                   -+++++***************+=:                                 
                                                                 :+++++++#************-                                     
                                                               :+*++++++*********#*=:   .                                   
                                                   . .       .+*****##**#*********    ....                                  
                                                  :...::  . =*******************##:  :.:....                                
                                               ... .-::-- -*******************####:.::::..:::                               
                                                ..:-:.--++*****************######*:--:::-:::...                             
                                                 ...:===%%##%######*#############+=::-::.:::-::.                            
                                               ..:--=*#@%#******#************###*=-----==-::..                              
                                              ....:++*#**********+**************=-----::........                            
                                           .. ..:--+#*+++++*+*+*+++*++**********#=-::--::::::.......                        
                                           ....::-+*++++++++++++++++++***********#=----::.......                            
                                         .. ..:.=-.+++++++++++++++++++***********##===-===-.......                          
                                              :-. .++++++++++++++++++*************%*==-:.:---: ....                         
                                             .    -+##++++++++++++++*%#***********#++=--=::. .::                            
                                                  =+##+++++++++++++#%*************##++=-:-:.:.....                          
                                                  +**++++++++++++++++**************++*+*+:.:.:. .                           
                                               .-=+++++++++++++++++++**************+::-+=++-:::..                           
                                            :-+*++++++++++++++++++++****************::-..==*-  ...                          
                                         :=+****+++++++++++++++++******##**********#-::==..::+-.                            
                                     .-+****************************+=-@%**********#:-:::--.:..:.                           
                                   :+*********+==--+*=:-*********+=:+.-@%**********#-:.:.::::.:.                            
                                  :------:::.      .*+ .*  :=:..*..:@=#@***********#=+= :..:.. ..                           
                                                    +#=#@..%@. -@*.*@@@@**********%+===+: . .                               
                                                    .*#@@##@@%-@@@*@*@@@********##======+=:                                 
                                                     :#@:#@@+-@@+=@+.*@#*******#+=========++.                               
                                                    -++#: *@. =@..#:.-#******##=============*=.                             
                                                   -+==+#- =   + ..:+*******#*=============++++=                            
                                                  :+++==+**=-::::-+*******#*==============++=++++-                          
                                                  +++++====+**#######***++===============++====++++-                        
                                                 +**+++++=======*%@@%%+================++=========++*:                      
                                                :*++**++++====+%##@@#*%#==============++===========++++.                    
                                                *+*++*++++==+%@*=%@@@++%%==============++=========+*+==+=                   
                                               -*+*+*++++++=*@@+#@%@%%+=@%================++=====++======+-                 
                                              .*+***++++++++=*%%@%#@@*%%@%=======+======+===+++==+=========+:               
                                              +****+++++++++===+*+#@%%=++========+=======+=====++===========+-              
                                             :****++++++++++======#@+@*==========+=======+===================+=             
                                             +*+**++++++*+++======#@=%%==========+========++===================+.           
                                            -*++*+++++++++++======#@=*@*=========+========+=+===================+-.         
                                           .**++*++++++*++++======+*==*======++==+=========+=*===================++-        
                                           =*+++*++++++*++*++===============++===+=========*==+===================-         
                                           *++++*++++++*++*++============+++=====*==========+=+================+:..         
                                           +-=+**++++++*++*+++===========+++=====*==========*=++===============+. .         
                                          ::.::-*++++++*++*+++++=======+++=++++++*==========++=*===========+=-: ...         
                                          - -.:=+++++++*++*+++++++++++*++++=+====*===========++++========+=.:. ..           
                                         .. :: +++++++*++++*+++++++++++++++======*============+++=====+**-.. ..             
                                             . ++=++++*++++#+++++++++++++++++++++*=============*+===******+..               
                                              . : -*+***+++#+++++++++++++++++++++*++++++++++++++++=+*******+.               
                                                ..:+++##. ::++++++++++++++++++++*+++**+++**+=.. :: .:*******+               
                                                  :+++##  : : :.++++++++++++++*+#+- :-*++=.... .      =*****+               
                                                  :+++##  . : . --*+++++**==:.-  :.  :*++=             :****=               
                                                  -+++##.      .. ==:-:-.: ..  .     :+++-             :****-               
                                                  -++++++*:          . . .         :=+++*:             =****:               
                                                  =+++*#*+*+:                    =*++++++-             *****.              -
                                    .*         .-##+***@%**%@*                   *++-*++++           .*****##=:           :*
                                   .%@+-:::-=*#@@@#****@@@#*%@-                 =*= .*+++*          =%@@@@@@@@@%#+-:...:=*%-)";
                                 
         cout << "\n\n\nGAME OVER: You lost.\n";

         exit(0);
     }
 }


 void gameOver(bool solved) {
     if (solved) {
         cout << "\nYou solved the case! The boy was the true murderer all along. Congratulations!\n";
         exit(0);
     }
     else {
         cout << ".......";
     }
     exitGame();
 }

 int main() {
     logo();
     intro();
     startGame();
     cout << "Let's start the investigation!\n";


     while (true) {
         string clue;
         string action = showMenu();
         cout << "You chose: " << action << endl;
         if (action == "Read Nameless Monster") {
             readnamelessMonster();
         }
         else if (action == "Quitting the game") {
             exitGame();
             break;
         }
         else if (action == "Talking to a character") {
             talkToCharacter();
         }
         else if (action == "Investigating clues") {
             bool continueInvestigating = true;
             while (continueInvestigating) {
                 clue = investigateClue();
                 cout << clue << endl;
                 cout << "Would you like to investigate another clue? (y/n): ";
                 char choice;
                 cin >> choice;
                 if (choice == 'n' || choice == 'N') {
                     continueInvestigating = false;
                 }
                 else if (choice == 'y' || choice == 'Y') {
                     investigateClue();
                 }
                 else {
                     invalidChoice();
                     continue;
                 }
             }
         }
         else if (action == "Making a guess") {
             makeGuess();
         }
         else if (action == "Looking arround") {
             lookAround();
         }
         else if (action == "Hear testimony") {
             witnesses();
         }
     }
     return 0;
 }
 
