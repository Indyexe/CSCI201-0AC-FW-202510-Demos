#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include <string>
#include <sstream>
#include <iomanip>

class notebook : public product
{  
public:
    notebook(double w, double h, int p, std::string pt, std::string f, std::string pc, std::string ct, std::string cd);
    void setCoverDesign(std::string cd);
    void setCoverType(std::string ct);
    void setFormat(std::string f);
    void setPaperColor(std::string pc);
    void setPaperType(std::string pt);
    void setHeight(double h);
    void setWidth(double w);
    void setPages(int p);
    std::string toString() const;
    double getHeight() const;
    double getWidth() const;
    int getPages() const;
    std::string getCoverDesign() const;
    std::string getCoverType() const;
    std::string getFormat() const;
    std::string getPaperColor() const;
    std::string getPaperType() const;

private:
    int pages;

double height;
double width;

std::string coverDesign;
std::string coverType;
std::string format;
std::string paperColor;
std::string paperType;
};

#endif