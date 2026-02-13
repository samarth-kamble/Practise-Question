
# 1683 :- Invalid Twwets

# Write a solution to find ID of the invalid tweet. The Tweets is invalid if the number of characters used in the content of the tweets is strictly grater than 15.

SELECT tweet_id FROM Tweets
WHERE CHAR_LENGTH(content) > 15 ;
