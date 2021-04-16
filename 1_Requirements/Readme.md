![memory-games-exercise-mind-people-with-alzheimers](https://user-images.githubusercontent.com/55622748/114961471-b1291d00-9e86-11eb-99cb-872c9a798416.jpg)


# Requirements

## Introduction


### Dark Samurai Within

This is a “simple memory and response test “game. The game request the user’s name as an input.
For example, let the user enter the name "chan". Then the game would start and he will be presented with 3 blocks in which one will contain the first character of his name. And the user should press 1 or 2 or 3 according the location in which the character is present. If he pressed the correct location number, he will be put up with next 3 blocks in which one will contain the next character in his name provided.

![an_example](https://user-images.githubusercontent.com/55622748/114958409-90f65f80-9e80-11eb-8960-02e5444eb3ec.png)

And the same thing will continue till all the characters in his name is completed.

<!-- ## Research -->
<!-- ![Description](Link to Pic) -->
<!-- -- Content -->

## Cost and Features

Since it is a prototype, and me being the only developer, I take the cost as the hours (time) that each feature takes for developing it. 
We can see that the game is very simple to understand. The core of the game play is validating the user input based on initial conditions.

| S NO | FEATURE              | COST (INR) | TIME (IN HRS) |
| ---- | -------------------- | ---------- | ------------- |
| 1    | Core game play       | 0          | 8             |
| 2    | Game play with story | 0          | 4             |
| 3    | Adding score card    | 0          | 2             |
|      |

## Defining Our System

The system is a simple command line game. 
That is the user will enter his name, and will press keys during the game play. The user will interact with the game through the display and keyboard only.

    
## SWOT ANALYSIS

![SWOT_ANALYSIS](https://user-images.githubusercontent.com/55622748/114958696-2c87d000-9e81-11eb-97ed-9dd64838df40.png)

# 4W&#39;s and 1&#39;H

## Who:

**The game play is targeted for the people who want to test their cognitive abilities – both memory and responsiveness.**

## What:

**This is a simple game that will make the user to apply their cognitive skills. This game above a specific difficulty (for example when a user inputs a string of length 15 characters) it feels very difficult to play. So, it caters to all the individuals, right from people who have low level of cognitive ability to people who have high level of cognitive ability.**

## When:

**This game tests out individual’s cognitive ability. So, this which can be played irrespective of what age they are.**

## Where:

**This game can run in just the command line environment, which now every major OS supports.**

## How:

**User needs to press an integer that indicates to the game that he has selected the character among a list of characters being displayed. User interacts with the gameplay through the keyboard.**

# Detail requirements
## High Level Requirements:
| ID_1 | ID_2 | ID   | DESCRIPTION                                                                                                                                                                                                                                                                                    | STATUS      |
| ---- | ---- | ---- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----------- |
| HLR  | 1    | HLR1 | USER ENTERS A NAME AND THREE BOXES APPEAR.THEN THE GAME CONTINUES AND THE USER PRESSES ONE OF IT ACCORDING TO WHICH IS CORRECT. THE GAME STOPS WHEN THE USER PERSSES THE INCORRECT BOX OR WHEN THE USER CORRECTLY PRESSED EVERY CHARACTER ACCORDING TO THE CORRECT LOCATION AND ITS SEQUENCE.  | IMPLEMENTED |
| HLR  | 2    | HLR2 | THE GAME SHOULD BEGIN WITH A MENU, AND THE USER CAN OPT FOR A STORY GAME PLAY OR DIRECTLY PLAY THE GAME                                                                                                                                                                                        | FUTURE      |
| HLR  | 3    | HLR3 | ANOTHER GAMEPLAY WHICH DOES NOT INVOLVE THE USER TO BE ENTERING THE STRING ON WHICH HE WILL BE TESTED BUT THE SYSTEM ITSELF GENERATING A STRING OF RANDOM CHARACTERS WHICH THE USER HAS TO REMEMBER AND REPRODUCE IT IN CORRECT SEQUENCE.                                                      | FUTURE      |
| HLR  | 4    | HLR4 | ADDING A SCORE - THE USER WILL BE TESTED ON THE RESPONSIVENESS OF HIS INPUT. WE WILL TRY TO  MEASURE IN MILLI-SECONDS THE TIME HE TAKES TO RESPOND AND OUTPUT A SCORE CARD PROPORTIONAL TO THE TIME HE TOOK FOR RESPONDING                                                                     | FUTURE      |
|      |


##  Low level Requirements:
| ID_1 | ID_2 | ID    | HLR_ID | DESCRIPTION                                                                                                                                                                 | STATUS       |
| ---- | ---- | ----- | ------ | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------ |
| LLR  | 1    | LLR1  | HLR1   | OBTAIN THE USER'S NAME                                                                                                                                                      | IMPLEMENTED  |
| LLR  | 2    | LLR2  | HLR1   | GENERATE RANDOM CHARACTERS                                                                                                                                                  | IMPLEMENTED  |
| LLR  | 3    | LLR3  | HLR1   | DISPLAY 3 BOXES INCLUDING THE RANDOM CHARACTERS                                                                                                                             | IMPLEMENTED  |
| LLR  | 4    | LLR4  | HLR1   | DISPLAY 5 BOXES INCLUDING THE RANDOM CHARACTERS                                                                                                                             | IMPLEMENTED  |
| LLR  | 5    | LLR5  |        | TAKEING A USER INPUT THROUGH KEY BOARD                                                                                                                                      | IMPLEMENTED  |
| LLR  | 6    | LLR6  | HLR1   | BUILDING THE GAME PLAY WHILE VALIDATING THE USERINPUT , AND THE GAME SHOULD CONTINUE OR HALT ACCORDING TO THE VALIDATION                                                    | IMPLEMENTED  |
| LLR  | 7    | LLR7  | HLR1   | ADDING ANIMATION TO INDICATE USER WHICH BOX HE HAS SELECTED - FILLING THE BOX WHICH THE USER HAS SELECTED WITH A CHARACTER SAY '^'  , TO DIFFERENTIATE BETWEEN OTHER BLOCKS | FUTURE       |
| LLR  | 8    | LLR8  | HLR2   | CREATING A MENU AND VALIDATING THE USER INPUT                                                                                                                               | FUTURE       |
| LLR  | 9    | LLR9  | HLR2   | DISPLAYING THE STORY WHICH IS WRITTEN                                                                                                                                       | FUTURE       |
| LLR  | 10   | LLR10 | HLR2   | DISPLAYING THE GAMEPLAY IN BETWEEN THE STORY WHEN THERE IS BATTE BETWEEN THE HERO AND ENEMY                                                                                 | FUTURE       |
| LLR  | 11   | LLR11 | HLR3   | GENERATING STRING WITH RANDOM CHARACTERS                                                                                                                                    | FUTURE       |
| LLR  | 12   | LLR12 | HLR3   | HAVING A TOP BAR WHICH DISPLAYS THE HINT TO THE USER ABOUT THE SEQUENCE                                                                                                     | FUTURE       |
| LLR  | 13   | LLR13 | HLR4   | NOTING DOWN THE TIME TAKEN BY THE USER TO ENTER THE INPUT                                                                                                                   | FUTURE       |
| LLR  | 14   | LLR14 | HLR4   | STORING THAT INFO IN A FILE                                                                                                                                                 | FUTURE       |
| LLR  | 15   | LLR15 | HLR4   | AT THE END OF THE GAME GATHERING THE INFO FROM THE FILE AND CALCULATING THE FINAL SCORE                                                                                     | FUTURE       |
|      |
