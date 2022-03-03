#include<iostream>
#include<list>
using namespace std;

class YoutubeChannel {
private:
    string Name;
    string OwnerName;
    int SubscuribersCount;
    list<string> PublishedVideoTitles;
public:
    YoutubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscuribersCount = 0;
    }

    void GetInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscuribersCount: " << SubscuribersCount << endl;
        cout << "Videos:" << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }

    void Subscribe()
    {
        SubscuribersCount++;
    }

    void Unsubscribe()
    {
        if (SubscuribersCount > 0)
        {
            SubscuribersCount--;
        }
    }

    void PublishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }
};

class CookingYoutubeChannel:public YoutubeChannel
{
public:
    CookingYoutubeChannel(string name, string ownerName): YoutubeChannel(name, ownerName)
    {
    }
    void Practice()
    {
        cout << "Practicing cooking, learning new recipes, expermenting with spices..." << endl;
    }
};

int main()
{
    CookingYoutubeChannel cookingYtChannel("Amy's Kitchen", "Amy");
    CookingYoutubeChannel cookingYtChannel2("John's Kitchen", "John");
    cookingYtChannel.PublishVideo("Apple pie");
    cookingYtChannel.PublishVideo("chocolate cake");
    cookingYtChannel.Subscribe();
    cookingYtChannel.Subscribe();
    cookingYtChannel.Subscribe();
    cookingYtChannel.Subscribe();
    cookingYtChannel.Subscribe();
    cookingYtChannel.GetInfo();

    cookingYtChannel.Practice();
    cookingYtChannel2.Practice();

    YoutubeChannel ytChannel("CodeBeatuy", "Milad");
    ytChannel.

    system("pause>0");
}