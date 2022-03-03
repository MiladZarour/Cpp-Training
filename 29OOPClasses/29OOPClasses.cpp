#include <iostream>
#include<list>
using namespace std;

class YoutubeChannel {
public: //this is an access modifier, it make all the attributes (properties) public outside the class
    string Name;
    string OwnerName;
    int SubscuribersCount;
    list<string> PublishedVideoTitles;
};


int main()
{
    YoutubeChannel ytChannel; //we create an object of the class YoutubeChannel
    ytChannel.Name = "CodeBeauty";
    ytChannel.OwnerName= "Milad";
    ytChannel.SubscuribersCount = 5455;
    ytChannel.PublishedVideoTitles = {"C++ for begnniner Video 1", "HTML & CSS Video 1", "C++ OOP video 1"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscuribersCount: " << ytChannel.SubscuribersCount << endl;
    cout << "Videos:" << endl;
    for (string videoTitle: ytChannel.PublishedVideoTitles)
    {
        cout << videoTitle << endl;
    }
     
    system("pause>0");
}

