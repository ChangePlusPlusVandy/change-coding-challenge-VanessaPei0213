//
// Created by Vanessa Pei on 2020/9/24.
//


#include <iostream>
#include <twitterlib/twitterlib.hpp>
#include <src/tweetGame.cpp>

int main() {
    network::Keys keys{network::read_keys("keys")};

    twitter::App app{keys.consumer_key, keys.consumer_secret};
    twitter::Account account{keys.user_token, keys.token_secret};

    app.account = account;

    // REST API - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Returns JSON response from Twitter.
    std::cout << get_account_settings(app) << std::endl;

    // Update account's status.
    update_status("Hello, Twitter!");

    // Streaming API - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Connect to Twitter filter stream, tracks "Search Term" text.
    app.filtered_stream.parameters().track.push_back("Search Term");

    // Function that will be called on each response from the stream.
    app.filtered_stream.register_function([](const auto &response) {
        std::cout << twitter::Tweet(response).text << std::endl;
    });
    // Open the stream
    app.filtered_stream.open();

    // Blocking call to allow async stream to be processed indefinitely.
    twitter::Twitter_stream::wait();


    /*code for JS:
    fetch('http://example.com/movies.json')){
        (function(response) {
            return response.json();
        }
    })
    .then(function(myJson) {
        console.log(myJson);
    });
     */

    auto response = cpr::Get(
            cpr::Url{"https://api.twitter.com/1.1/statuses/user_timeline.json?screen_name=twitterapi&count=100\n"
            });
    std::cout << response.text << std::endl;


    //get all of the tweets by using twitter API
    //name a para of the tweet and tweetUser, they are corresponded
    //get the total number of tweets posted by Elon Musk and Kanye West as totalNum


    //this program cannot run now bc I didn't find the corresponding tweet with the user who posted this



    cout << "Start the game";
    cin >> answerStart;
    size_t count = 0; //count the correct answer

    if (answerStart == 'yes') {

        //there are totalNum tweets for the users to choose
        for (size_t i = 0; i <= totalNum; i++) {

            //extract the tweet content from tweets posted by EM and KW
            cout << tweet;
            ask();
            cin >> nameInput;
            if (nameInput == "end") {
                return 0;
            } else if (nameInput == tweetUser) {
                correctFeedback(nameInput);
                count++;

            } else {
                wrongFeedback(nameInput);
            }


        }
        cout << "You answered " << count << " out of " << totalNum << " questions correctly."
    } else {
        return 0;
    }


    return 0;
}

