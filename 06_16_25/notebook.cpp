#include "notebook.h"

notebook::notebook(double w, double h, int p, std::string pt, std::string f, std::string pc, std::string ct, std::string cd) 
{
    setWidth(w);
    setHeight(h);
    setPages(p);
    setPaperType(pt);
    setFormat(f);
    setPaperColor(pc);
    setCoverType(ct);
    setCoverDesign(cd);
}

double notebook::getHeight() const 
{
    return height;
}

double notebook::getWidth() const 
{
    return width;
}

int notebook::getPages() const
{
    return pages;
}

std::string notebook::getCoverDesign() const 
{
    return coverDesign;
}

std::string notebook::getCoverType() const
{
    return coverType;
}

std::string notebook::getFormat() const 
{
    return format;
}

std::string notebook::getPaperColor() const
{
    return paperColor;
}

std::string notebook::getPaperType() const 
{
    return paperType;
}

void notebook::setCoverDesign(std::string cd)
{
    coverDesign = cd;
}

void notebook::setCoverType(std::string ct) 
{
    coverType = ct;
}

    void notebook::setFormat(std::string f)
    {
        format = f;
    }

    void notebook::setPaperColor(std::string pc) 
    {
        paperColor = pc;
    }

    void notebook::setPaperType(std::string pt)
    {
        paperType = pt;
    }

    void notebook::setHeight(double h) 
    {
        height = h;
    }

    void notebook::setWidth(double w) 
    {
        width = w;
    }

    void notebook::setPages(int p) 
    {
        pages = p;
    }