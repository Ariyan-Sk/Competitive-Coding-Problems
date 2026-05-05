//https://www.codechef.com/problems/HRYQX01?tab=statement

class Twitter {
    private: long long initTime;
    vector < vector < pair < long long,
    int >>> tweets;
    vector < unordered_set < int >> following;

    public: Twitter() {
        // write your code here 
        initTime = 0;
        tweets.resize(501);
        following.resize(501);

    }

    void postTweet(int userId, int tweetId) {
        // write your code here 
        tweets[userId].push_back({
            initTime++,
            tweetId
        });

    }

    vector < int > getNewsFeed(int userId) {
        // write your code here 
        vector < int > res;
        priority_queue < tuple < long long, int, int, int >> pq;

        if (!tweets[userId].empty()) {
            int i = tweets[userId].size() - 1;
            auto & t = tweets[userId][i];
            pq.push({
                t.first,
                t.second,
                i,
                userId
            });
        }

        for (int f: following[userId]) {
            if (!tweets[f].empty()) {
                int i = tweets[f].size() - 1;
                auto & t = tweets[f][i];
                pq.push({
                    t.first,
                    t.second,
                    i,
                    f
                });
            }
        }

        while (res.size() < 10 && pq.empty() == 0) {
            auto[time, tweetId, idx, u] = pq.top();
            pq.pop();

            res.push_back(tweetId);

            if (idx > 0) {
                auto & next = tweets[u][idx - 1];
                pq.push({
                    next.first,
                    next.second,
                    idx - 1,
                    u
                });

            }
        }
        
        return res;

    }

    void follow(int followerId, int followeeId) {
        // write your code here 
        following[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        // write your code here 
        following[followerId].erase(followeeId);

    }
};
