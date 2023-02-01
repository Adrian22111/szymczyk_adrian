#define __SEQUENCE_H__

class Sequence
{
    private:
        int width;
        int height;
        string color;

    public:
        Sequence(int=100, int =25, string = "red");
        ~Sequence();
        Sequence(const Sequence & fSequence);
        int getWidth();
        void setWidth(int);
        int getHeight();
        void setHeight(int);
        string getColor();
        void setColor(string);
        int silnia(int);
        double calcSimpleIntegral();
        double calcComplexIntegral();
        double heightOfEquTriangle();
        double sin(double);
        double cos(double);
};