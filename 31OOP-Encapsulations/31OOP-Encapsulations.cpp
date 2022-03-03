#include <iostream>
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
        if (SubscuribersCount>0)
        {
            SubscuribersCount--;
        }
    }

    void PublishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }
};


int main()
{
    YoutubeChannel ytChannel("CodeBeauty", "Milad");
    ytChannel.PublishVideo("C++ for beginners");
    ytChannel.PublishVideo("HTML and CSS for beginners");
    ytChannel.PublishVideo("C++ OOP");

    ytChannel.Unsubscribe();

    ytChannel.GetInfo();

    system("pause>0");
}