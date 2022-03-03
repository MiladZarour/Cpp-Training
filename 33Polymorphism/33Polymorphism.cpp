#include<iostream>
#include<list>
#include<string>
using namespace std;

class YoutubeChannel {
private:
    string Name;
    int SubscuribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;
    int ContentQualtiy;
public:
    
    YoutubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscuribersCount = 0;
        ContentQualtiy = 0;
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
    void CheckAnalytics() 
    {
        if (ContentQualtiy < 5)
        {
            cout << Name << " has bad qualtiy content.." << endl;
        }
        else
        {
            cout << Name << " has a good content." << endl;
        }
    }
};

class CookingYoutubeChannel :public YoutubeChannel
{
public:
    CookingYoutubeChannel(string name, string ownerName) : YoutubeChannel(name, ownerName)
    {
    }
    void Practice()
    {
        cout << OwnerName << " Practicing cooking, learning new recipes, expermenting with spices..." << endl;
        ContentQualtiy++;
    }
};

class SingersYoutubeChannel :public YoutubeChannel
{
public:
    SingersYoutubeChannel(string name, string ownerName) : YoutubeChannel(name, ownerName)
    {
    }
    void Practice()
    {
        cout << OwnerName << " is taking singing classes, learning new songs, learning how to dance..." << endl;
        ContentQualtiy++;
    }
};

int main()
{
    CookingYoutubeChannel cookingYtChannel("Amy's Kitchen", "Amy");
    SingersYoutubeChannel singersYtChannel("John's Sings", "John");

    cookingYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();

    YoutubeChannel* yt1 = &cookingYtChannel;
    YoutubeChannel* yt2 = &singersYtChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    system("pause>0");
}