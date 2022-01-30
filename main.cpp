#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: bird
//  action 1: the bird flies
bird.fly();
//  action 2: the bird chirps
bird.chirp();
//  action 3: the bird hunts
bird.hunt();
//  2)
//  Noun: robot
//  action 1: the robot moves forwards
robot.moveForward();
//  action 2: the robot moves backwards
robot.moveBackward();
//  action 3: the robot fires a weapon
robot.fireWeapon();
//  3)
//  Noun: radio knob
//  action 1: a radio knob switches on the device
radioKnob.switchOn();
//  action 2: a radio knob sets the frequency
radioKnob.setFrequency();
//  action 3: a radio knob sets the volume
radioKnob.setVolume();
//  4)
//  Noun: ball
//  action 1: the ball rolls
ball.roll();
//  action 2: the ball bounces
ball.bounce();
//  action 3: the ball hits an object
ball.hitObject();
//  5)
//  Noun: calculator
//  action 1: the calculator performs addition
calculator.add();
//  action 2: the calculator performs substraction
calculator.substract();
//  action 3: the calculator performs multiplication
calculator.multiply();
//  6)
//  Noun: plant
//  action 1: the plant grows
plant.grow();
//  action 2: the plant dies
plant.die();
//  action 3: the plant photosynthesizes
plant.photosynthesize();
//  7)
//  Noun: snake
//  action 1: the snake crawls
snake.crawl();
//  action 2: the snake swims
snake.swim();
//  action 3: the snake climbs a tree
snake.climbTree();
//  8)
//  Noun:ghost
//  action 1: the ghost goes through walls
ghost.goThroughWall();
//  action 2: the ghost steals items
ghost.stealItem();
//  action 3: the ghost spooks
ghost.spook();
//  9)
//  Noun: chicken
//  action 1: the chicken lays eggs
chicken.layEgg();
//  action 2: the chicken runs
chicken.run();
//  action 3: the chicken clucks
chicken.cluck();
//  10)
//  Noun: audio player
//  action 1: the player plays music
audioPlayer.play();
//  action 2: the player stops music
audioPlayer.stop();
//  action 3: the player shuffles a playlist
audioPlayer.shufflePlaylist();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
