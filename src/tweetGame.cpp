// Program: tweetGame.cpp
// Name: Vanessa Pei
// VUnetID: peiy
// Email: yuxin.pei@vanderbilt.edu
//
// Program description: to build a game for users
// Date: 09/24/2020
// Honor statement: I have neither given nor received any unauthorized aid on this assignment.



void tweetGame::ask() {
    cout << "Is this tweet from Elon Musk or Kanye West? ";
}


void tweetGame::correctFeedback(std::string name) {
    cout << "Correct! "<< name << " tweeted this ";
}

void tweetGame::wrongFeedback(std::string name) {

    if(name == "Kanye West"){
        wrongName = "Elon Musk";
    } else if(name == "Elon Musk" ){
        wrongName ="Kanye West";
    } else{
        wrongName = "wrong name";
    }
    cout << "That’s wrong. "<< wrongName << " tweeted this ";
}

