//https://leetcode.com/problems/design-twitter/
class Twitter {
private:
    typedef map<int, int> tweet_list;   // time -> tweet
    map <int, tweet_list> user_tweets;  // user -> tweet_list
    map <int, set<int>> user_follows;   // user -> followee
    int time;
public:
    /** Initialize your data structure here. */
    Twitter() {
        time=0;
    }
    
    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        user_tweets[userId][time++] = tweetId;
    }
    
    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        tweet_list list;
        set<int> follow = user_follows[userId];
        follow.insert(userId);
        for (int user: follow) {
            tweet_list &tweets = user_tweets[user];
            int count = 0;
            for (auto it = tweets.rbegin(); count < 10 && it != tweets.rend(); ++it, ++count)
                list[it->first] = it->second;
        }
        vector<int> res;
        for (auto it = list.rbegin(); res.size() < 10 && it != list.rend(); ++it) {
            res.push_back(it->second);
        }
        return res;
    }
    
    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        user_follows[followerId].insert(followeeId);
    }
    
    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        user_follows[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */