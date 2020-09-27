 # Change++ 2020 Coding Challenge
## Before You Begin

Congrats!! You have been selected to engage in the next step of the Change++ interview process. The next step in our application process is completing the following coding project. As we are unable to offer interviews to every applicant, we will use this challenge to evaluate a number of criteria including technical skills and commitment to Change++. We expect this to take between 2-6 hours depending on experience level and technical skills. We recognize that you are all busy, but as a member of a Change++ team it is expected that you will dedicate 4-6 hours every week working on your project; therefore, we believe this is a reasonable timeframe.

## What we are looking for

At Change++, our project teams are made up of members ranging from those in their first-year at Vanderbilt to those in graduate programs. We know that you all have varying degrees of technical skills and experience, all of which we will take into account when reviewing your code. Working on a Change++ team, you may often use a new technology that you are not familiar with and have not learned in CS courses at Vanderbilt, but we’re looking to see that you demonstrate the initiative and resourcefulness necessary to learn new skills and complete your work in a timely manner. You should be able to complete this challenge with a combination of basic programming skills (AP CS, 1101, etc.) and online resources.

As far as your code goes, here are a few things we are looking for:
### Functionality
As always, the most important criteria is whether or not your code works according to the requirements
### Good style
As this is an untimed challenge, we expect a certain level of quality. Be sure to comment and format your code as you might while working on an application for one of our non-profits
### Readability and maintainability
This goes along with good style. While you’re coding, keep in mind that other people will be reading and trying to understand your code. Good organization can also help with maintainability, which will be important going forward as we may ask you to elaborate or expand upon your code in future rounds.
</ul>

## The Challenge
Your task is to build a game which tests the user on their ability to differentiate tweets between two individuals: Elon Musk and Kanye West.

**Given a tweet by Kanye West or Elon Musk, prompt the user to guess which public figure made the tweet, let the user know if they were correct. Once the user is finished let the user know how accurate they were in their guesses.**

You will use the Twitter API found in the Twitter Developer Platform to write a program that accomplishes this. In order to use this API, you’ll need a twitter account. 

[Here is the guide](https://developer.twitter.com/en/docs/twitter-api/v1/tweets/timelines/api-reference/get-statuses-user_timeline) for using the [GET](https://developer.mozilla.org/en-US/docs/Web/HTTP/Methods/GET) statuses/user_timeline [endpoint](https://en.wikipedia.org/wiki/Web_API). 

For the purposes of this program, we will only be asking you to use the following endpoint.

Here is a helpful sample request to get 100 tweets from `@twitterapi`:

`GET https://api.twitter.com/1.1/statuses/user_timeline.json?screen_name=twitterapi&count=100`

You will want to modify this endpoint to get tweets from `@elonmusk` and `@kanyewest`.

This endpoint will return a maximum of 3,200 tweets in [JSON](https://developer.mozilla.org/en-US/docs/Learn/JavaScript/Objects/JSON). We only care about the `text` property for each tweet object. 

Some tweets are retweets, replies, and tag other twitter users, and they are thus not genuine Elon and Kanye. As well, some tweets contain links to videos and images. Please filter the tweets so they do not include any references to other users and URL links. This should be pretty easy to do looking at the text of the string of each tweet.

The game loop for your application should look something like this:

<ol>
  <li>When user starts program, load the first 3200 tweets by Elon and Kanye, filtered to not include any links or tags to other twitter users</li>
  <li>Randomly choose a tweet by Elon or Kanye to give to the user</li>
  <li>Prompt the user to guess</li>
  <li>Let the user know if they were correct</li>
  <li>Repeat steps 2-4</li>
  <li>Show the user their game statistics</li>
</ol>

## Deliverables

*Optional*: If you would like, feel free to also include a `README.txt`. This is helpful if:
<ul>
  <li>You think we may need any additional information about reading or running your program</li>
  <li>You would like to provide feedback about the project or a reflection on the code you wrote</li>
  <li>You did not finish the exercise but would like to provide some information about what you may have gotten done with more time/experience or where/what you struggled with</li>
  <li>There is anything else you want to tell us!</li>
</ul>

## Bonus

There are many exciting and fun ways to expand this application that we do not require, but we encourage you to try out. These include but are not limited to: 

<ul>
  <li>Allowing the user to enter any 2 twitter handles to play the game</li>
  <li>Show attached images in tweets and clickable links</li>
  <li>Make the application pretty and well designed</li>
  <li>Use AI to create a twitter bot which is a combination between Elon and Kanye - Kanlon, gain a massive following, and become emperor of the world - just kidding ;) or are we 0_0</li>
</ul>

## Tips, Tricks, and Helpful Resources

<ul>
  <li>Information on HTTP requests: https://restfulapi.net/http-methods/</li>
  <li>There are lots of libraries you can use to help you execute http requests in languages of your choice</li>
  <li><a href="https://www.getpostman.com/">Postman</a> is a great tool for API testing (just create a new get request, type in the endpoint, and you’ll see the format of the response data)</li>
  <li><a href="https://developer.twitter.com/en/docs/twitter-api/getting-started/guide">Getting Started</a> with the Twitter API</li>
  <li>While Change++ encourages collaboration and you are free to discuss this assignment with your peers, we do not recommend completing your code with other applicants. As there are so many possible solutions, we will easily be able to identify code that is too similar, and it will also be a disadvantage to you if you do not understand your code well enough to build upon or explain it in the future.</li>
  <li>Good luck!</li>
</ul>


## My ideas

I think this program should call the url of twitter API by using fetch function to ask for a http request. Then I need to select all of the tweets posted by EM and KY (and not to extract the reposted tweets of EM and KY from the tweets pool). Get the total number of all of these tweets, and arrange them randomly in a list(we can build an object here that contain these two elements). Every element in this list combines a tweet content and the user that posted this tweet. Load all of these tweets before the program start and instruct users to start the game. Give the first tweet content to the user, the user answers this question, and we give him or her a feedback. After a tweet content is poped on the screen, the param tweet will be replaced with the next element in the list. the user can end the game by typing "end" on the screen; if not, the user is going to play the name until all of the tweets are poped off from the list.

This program is still not complete yet because i've spend too much time studying how to add the twitter API in my program.

Here's the link of my resume, including most of my pm internship experience: 
https://drive.google.com/file/d/1jxogrf30icaNFsjW5dyKvgzL9EthSPuw/view?usp=sharing

Last, I want to say that though my coding skills is not that experienced as many of the student software developers on campus, but I'm willing to learn some necessary full stack coding knowledge if needed. And I'm definitely super experienced with everything involved with product management and I'd love to prove my product management skills through the interview. I think Change++ definitely need someone to coordinate between team members and between our developer team and NGOs. I'm familiar with writing PRDs, prototyping using different kinds of softwares, AB testing, event tracking, improvement on ML models, and the effecitve use of data analysis to update our products. I want to transform the requirement to useful features on our applications, get involved in the user research, and lead apps to higher user growth. I would love to share more details about my PM experience in the interview! 

