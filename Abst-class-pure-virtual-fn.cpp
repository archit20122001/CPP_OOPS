#include <bits/stdc++.h>
using namespace std;
// This is an abstract base class --> This serves as the framework class and has atleast 1 pure virtual function.
class CH
{
protected:
   string title;
   float rating;

public:
   CH(string s, float r)
   {
      title = s;
      rating = r;
   }
   virtual void display() = 0; // pure virtual function --> Do nothing function
};

class CHVideo : public CH
{
   float videoLength;

public:
   CHVideo(string s, float r, float vl) : CH(s, r)
   {
      videoLength = vl;
   }
   void display()
   {
      cout << "This is an amazing video with title " << title << endl;
      cout << "Ratings: " << rating << " out of 5 stars" << endl;
      cout << "Length of this video is: " << videoLength << " minutes" << endl;
   }
};

class CHText : public CH
{
   int words;

public:
   CHText(string s, float r, int wc) : CH(s, r)
   {
      words = wc;
   }
   void display()
   {
      cout << "This is an amazing text tutorial with title " << title << endl;
      cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
      cout << "No of words in this text tutorial is: " << words << " words" << endl;
   }
};

int main()
{
   string title;
   float rating, vlen;
   int words;

   // for Code Hub Video
   title = "C++ tutorial";
   vlen = 4.56;
   rating = 4.89;
   CHVideo djVideo(title, rating, vlen);

   // for Code Hub Text
   title = "C++ tutorial Text";
   words = 433;
   rating = 4.19;
   CHText djText(title, rating, words);

   CH *sample[2];
   sample[0] = &djVideo;
   sample[1] = &djText;

   sample[0]->display();
   sample[1]->display();

   return 0;
}