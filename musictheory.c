#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Name: Bass Guitar Practice: Fretboard Exercises
 * Function: A tool to assist with music theory practise - helps to learn fretboard notes and chord tones
 * Author: Aidan Hackett
 */
 
//Function to print random notes
void output(int note)
{
                        if (note == 0)
                                     printf("A");
  
                        else if (note == 1)
                                     printf("A#");
  
                        else if (note == 2)
                                      printf("B"); 
         
                        else if (note == 3)
                                      printf("C");
          
                        else if (note == 4)
                                      printf("C#");
          
                        else if (note == 5)
                                      printf("D");
          
                        else if (note == 6)
                                      printf("D#");
          
                        else if (note == 7)
                                      printf("E");
          
                        else if (note == 8)
                                      printf("F");
          
                        else if (note == 9)
                                      printf("F#");
          
                        else if (note == 10)
                                      printf("G");
          
                        else if (note == 11)
                                      printf("G#");
                                      printf("\n"); 
        
} 

//Function to print random chord tone 
void chordtone (int tone)
{
                        printf("What is the");

                        if (tone == 0)
                                 printf(" Third ");
                                 
                        if (tone == 1)
                                 printf(" Fifth ");
                                 
                        if (tone == 2)
                                 printf(" Seventh ");
                                 printf("of ");
} 

//Function to print major answers
void majr (int note)
{
                        if (note == 0)
                                      printf("| A  | C#| E | G#|");
   
                        else if (note == 1)
                                      printf("| A# | D | F | A |");                                                                                              
   
                        else if (note == 2) 
                                      printf("| B  | D#| F#| A#|");
                                      
                        else if (note == 3)
                                      printf("| C  | E | G | B |");
                                      
                        else if (note == 4)
                                      printf("| C# | F | G#| C |");
         
                        else if (note == 5)
                                      printf("| D  | F#| A | C#|");
          
                        else if (note == 6)
                                      printf("| D# | G | A# | D |");
          
                        else if (note == 7)
                                      printf("| E  | G#| B | D#|");
          
                        else if (note == 8)
                                      printf("| F  | A | C | E |");
          
                        else if (note == 9)
                                      printf("| F# | A#| C#| F |");
          
                        else if (note == 10)
                                      printf("| G  | B | D | F#|");
          
                        else if (note == 11)
                                      printf("| G# | C | D# | G |");
                                      printf("\n\n");                       
       
}

//Function to print minor answers
void minr (int note)
{
                        if (note == 0)
                                      printf("| A  | C | E | G |");
   
                        else if (note == 1)
                                      printf("| A# | C#| F | G#|");                                                                                              
   
                        else if (note == 2) 
                                      printf("| B  | D | F#| A |");
                                      
                        else if (note == 3)
                                      printf("| C  | D#| G | A#|");
                                      
                        else if (note == 4)
                                      printf("| C# | F | G#| C |");
         
                        else if (note == 5)
                                      printf("| D  | F | A | C |");
          
                        else if (note == 6)
                                      printf("| D# | F#| A#| C#|");
          
                        else if (note == 7)
                                      printf("| E  | G | B | D |");
          
                        else if (note == 8)
                                      printf("| F  | G#| C | F#|");
          
                        else if (note == 9)
                                      printf("| F# | A | C#| D#|");
          
                        else if (note == 10)
                                      printf("| G  | A#| D | F |");
          
                        else if (note == 11)
                                      printf("| G# | B | D#| F#|");
                                      printf("\n\n");                       
       
} 
       

int main()
{

 int choice;
 printf("This tool is for learning musical notes on the fretboard.\n");
 printf(" 1 for fretboard display\n 2 for random notes\n 3 to practise major chord tones\n 4 to practise minor chord tones\n 5 for a spelling test\n 6 to see the notes in the E major and minor scales\n");
 scanf("%d", &choice);
 
 
  // Displays all notes on the bass guitar fretboard 
  if (choice == 1)
  {
   printf(" ___________________________________________________________________________\n");
   printf("|0__|__1__|__2__|__3__|__4__|__5__|__6__|__7__|__8__|__9__|__10_|__11_|__12_|\n");
   printf("|G  |__G#_|__A__|__A#_|__B__|__C__|__C#_|__D__|__D#_|__E__|__F__|__F#_|__G__|\n");   
   printf("|D  |__D#_|__E__|__F__|__F#_|__G__|__G#_|__A__|__A#_|__B__|__C__|__C#_|__D__|\n");  
   printf("|A  |__A#_|__B__|__C__|__C#_|__D__|__D#_|__E__|__F__|__F#_|__G__|__G#_|__A__|\n");  
   printf("|E__|__F__|__F#_|__G__|__G#_|__A__|__A#_|__B__|__C__|__C#_|__D__|__D#_|__E__|\n");  
  }
  
  // Displays a chosen number of random notes
  if (choice == 2)
  { 
 
   int index, input, n, space;
   srand(time(NULL));
 
                                printf("Insert number of notes: ");
                                scanf("%d", &input);
                                printf("Play the following:\n");
 
                                for(index = 0; index < input; index++)
                                {
                                  n = rand() % 12;
                                  output(n);     
                                }
         
                                printf("Can you find the notes in more than one location on the fretboard?\n");
  }
  
  // Prints major chord tones
  if (choice == 3)
  {
   int index;
   char usr[5]; 
   srand(time(NULL));
 
   //Prints a random chord tone
                                  int c;
                                  c = rand () % 3;
                                  chordtone(c);
  
   //Prints a random note
                                  int n;
                                  n = rand() % 12;
                                  output(n);
 
                                                        printf("If the note is not sharp, please enter a space also.\n");                                
  
                                                                for(index = 0; index < 2; index++)
                                                                {
                                                                 scanf("%c", &usr[index]);
                                                                }
                                 
                                                        printf("\nYou thought it was %c%c. Let's find out!\n", usr[0], usr[1]);
                                                        printf("\n|Root|3rd|5th|7th|\n");
                                                        majr(n);
   
  } 

  // Prints minor chord tones
  if (choice == 4)
  {
   int index;
   char usr[5]; 
   srand(time(NULL));
 
   //Prints a random chord tone
                                  int c;
                                  c = rand () % 3;
                                  chordtone(c);
  
   //Prints a random note
                                  int n;
                                  n = rand() % 12;
                                  output(n);
 
                                                        printf("If the note is not sharp, please enter a space also.\n");                                
  
                                                                for(index = 0; index < 2; index++)
                                                                {
                                                                 scanf("%c", &usr[index]);
                                                                }
                                 
                                                        printf("\nYou thought it was %c%c. Let's find out!\n", usr[0], usr[1]);
                                                        printf("\n|Root|3rd|5th|7th|\n");
                                                        minr(n);
   
  }   
  
   //Spelling test
  if (choice == 5)
  {
     printf("Can you play the following words by hitting the notes of each letter?\n"); 
     printf("ACE, AGE, BAD, BAG, BED, CAB, DAB, FAD\n");
     printf("BEAD, CAFE, FACE, DEAF\n");
     printf("BADGE, CAGED, DECAF, FACED\n"); 
  }
  
  
  
  // Display E maj/min scales
  if (choice == 6)
  {
 
  //E major 
     
  
       printf("The following notes are in the E Major scale.\n");
       printf(" ___________________________________________________________________________\n");
       printf("|0__|__1__|__2__|__3__|__4__|__5__|__6__|__7__|__8__|__9__|__10_|__11_|__12_|\n");
       printf("|G  |__G#_|__A__|_____|__B__|_____|__C#_|_____|__D#_|__E__|_____|__F#_|_____|\n");   
       printf("|D  |__D#_|__E__|_____|__F#_|_____|__G#_|__A__|_____|__B__|_____|__C#_|_____|\n");  
       printf("|A  |_____|__B__|_____|__C#_|_____|__D#_|__E__|_____|__F#_|_____|__G#_|__A__|\n");  
       printf("|E__|_____|__F#_|_____|__G#_|__A__|_____|__B__|_____|__C#_|_____|__D#_|__E__|\n\n");
 
  
  //E Minor
  
       printf("The following notes are in the E Minor scale.\n");
       printf(" ___________________________________________________________________________\n");
       printf("|0__|__1__|__2__|__3__|__4__|__5__|__6__|__7__|__8__|__9__|__10_|__11_|__12_|\n");
       printf("|G  |_____|__A__|_____|__B__|__C__|_____|__D__|_____|__E__|_____|__F#_|__G__|\n");   
       printf("|D  |_____|__E__|_____|__F#_|__G__|_____|__A__|_____|__B__|__C__|_____|__D__|\n");  
       printf("|A  |_____|__B__|__C__|_____|__D__|_____|__E__|_____|__F#_|__G__|_____|__A__|\n");  
       printf("|E__|_____|__F#_|__G__|_____|__A__|_____|__B__|__C__|_____|__D__|_____|__E__|\n");  
  
       printf("Try playing them across two octaves!\n"); 
  }
  
  else if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6)
  {
   printf("Nope.\n");
  }
    
}

