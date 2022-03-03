#include <iostream>
#include<list>
using namespace std;

class YoutubeChannel {
public: //this is an access modifier, it make all the attributes (properties) public outside the class
    string Name;
    string OwnerName;
    int SubscuribersCount;
    list<string> PublishedVideoTitles;

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

};


int main()
{
    YoutubeChannel ytChannel("CodeBeauty", "Milad");
    ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
    ytChannel.PublishedVideoTitles.push_back("HTML and CSS for beginners");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP");
    YoutubeChannel ytChannel2("AmySings", "Amy");

    ytChannel.GetInfo();
    ytChannel2.GetInfo();

    system("pause>0");
}