    #include <iostream>
using namespace std;

class Rectangle
{
    private:
    double width;
    double length;
    double height;

    public:
    double setWidth(double w)
    {
        width =w;

    }
    double getWidth()
    {
        return width;
    }
    double setlength(double w){   length = w;  }

    double getLength()
    {
        return length;
    }
 double setH(double w){   height = w;  }
  double getH()
    {
        return height;
    }




  //  double setheight(double w){  height = w;}
   // double gethieght() {    return height; }

    double vol()
    {
        return width * length * height;





    }




};
int main()
{
    Rectangle box;
    double Recwidth;
    double Reclength;
    double RH;




    cout << " this program will calculate the area of a \n";

    cout << "Rectangle, what is the  width:" << endl;
    cin >> Recwidth;

    cout << "Rectangle, what is the length:" << endl;
    cin >> Reclength;

    cout << "Rectangle, what is the  Hight:" << endl;
    cin >> RH;


    box.setlength(Reclength);
    box.setWidth(Recwidth);
    box.setH(RH);


    cout << "\n";
    //cout << "***** here is the rectangle data*****\n";
    //cout << "\n";
    cout << "width :"<< box.getWidth()<< endl;
    cout << "length:"<< box.getLength()<< endl;
    cout << "height:"<< box.getH()<< endl;
    cout << "area:"<< box.vol()<< endl;
    cout << "\n";
    cout << " ****** end of the program ****** \n";

    return 0;



}
