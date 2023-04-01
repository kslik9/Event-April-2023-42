<?php
function selectRandomNumber() {
    return rand(1, 3);
  }
echo "please select rock, paper or scissors :";
#rock == 1 / paper == 2 / scissors == 3
$choice = trim(fgets(STDIN));
$r = selectRandomNumber();

if($r == 1 && $choice == "rock" || $r == 2 && $choice == "paper" || $r == 3 && $choice == "scissors")
    echo "a draw the computer chose $choice";
else if($r == 1 && $choice == "paper")
    echo "Congratulations! You won! The computer chose rock.";
else if($r == 1 && $choice == "scissors")
    echo  "Sorry, you lost. The computer chose rock.";
else if($r == 2 && $choice == "rock")
    echo  "Sorry, you lost. The computer chose paper.";
else if($r == 3 && $choice == "paper")
    echo  "Sorry, you lost. The computer chose scissors";
else if($r == 3 && $choice == "rock")
    echo "Congratulations! You won! The computer chose scissors";
else if($r == 2 && $choice == "scissors")
    echo "Congratulations! You won! The computer chose paper";