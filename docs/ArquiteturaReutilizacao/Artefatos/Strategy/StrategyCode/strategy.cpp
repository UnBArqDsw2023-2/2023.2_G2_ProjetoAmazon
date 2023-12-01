#include <bits/stdc++.h>

using namespace std;

// Interface for media strategy
class MediaStrategy {
public:
    virtual void processMedia(const string& params) = 0;
    virtual ~MediaStrategy() {}
};

// Concrete strategy for text
class TextStrategy : public MediaStrategy {
public:
    void processMedia(const string& params) override {
        cout << "Processing text: " << params << endl;
    }
};

// Concrete strategy for photos
class PhotoStrategy : public MediaStrategy {
public:
    void processMedia(const string& params) override {
        cout << "Processing photo: " << params << endl;
    }
};

// Concrete strategy for videos
class VideoStrategy : public MediaStrategy {
public:
    void processMedia(const string& params) override {
        cout << "Processing video: " << params << endl;
    }
};

// Context class that uses a strategy
class Review {
private:
    MediaStrategy* strategyProcessMedia;

public:
    Review() : strategyProcessMedia(nullptr) {}

    void setStrategyProcessMedia(MediaStrategy* strategy) {
        strategyProcessMedia = strategy;
    }

    void processReviewMedia(const string& params) {
        if (strategyProcessMedia != nullptr) {
            strategyProcessMedia->processMedia(params);
        } else {
            std::cout << "No strategy set" << endl;
        }
    }
};

int main() {
    Review review;
    TextStrategy textStrategy;
    PhotoStrategy photoStrategy;
    VideoStrategy videoStrategy;

    review.setStrategyProcessMedia(&textStrategy);
    review.processReviewMedia("Text for review");

    review.setStrategyProcessMedia(&photoStrategy);
    review.processReviewMedia("Photo for review");

    review.setStrategyProcessMedia(&videoStrategy);
    review.processReviewMedia("Video for review");

    return 0;
}
