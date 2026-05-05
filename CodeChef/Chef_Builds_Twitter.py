#https://www.codechef.com/problems/HRYQX01?tab=statement

import heapq
from collections import defaultdict

class Twitter:

    def __init__(self):
        self.time = 0
        self.tweets = defaultdict(list)
        self.following = defaultdict(set)
        
    def postTweet(self, userId: int, tweetId: int) -> None:
        self.tweets[userId].append((self.time, tweetId))
        self.time += 1
        
    def getNewsFeed(self, userId: int):
        res = []
        heap = []
        
        #push latest tweet
        if self.tweets[userId]:
            idx = len(self.tweets[userId]) - 1
            t, tweetId = self.tweets[userId][idx]
            heapq.heappush(heap, (-t, tweetId, idx, userId))
        
        for f in self.following[userId]:
            if self.tweets[f]:
                idx = len(self.tweets[f]) - 1
                t, tweetId = self.tweets[f][idx]
                heapq.heappush(heap, (-t, tweetId, idx, f))
                
        while heap and len(res) < 10:
            t, tweetId, idx, u = heapq.heappop(heap)
            res.append(tweetId)
            
            if idx > 0:
                next_time, next_tweet = self.tweets[u][idx - 1]
                heapq.heappush(heap, (-next_time, next_tweet, idx - 1, u))
        
        return res
        
    def follow(self, followerId: int, followeeId: int) -> None:
        if followerId != followeeId:
            self.following[followerId].add(followeeId)

    def unfollow(self, followerId: int, followeeId: int) -> None:
        self.following[followerId].discard(followeeId)
        

