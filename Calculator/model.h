#ifndef MODEL_H
#define MODEL_H

#include <QString>

class model
{
public:
    model();
    //method
    void setNum1(float num);
    void setNum2(float num);
    void setFlag(QString flag);
    QString doExpr();

private:
    //variable
    float num1;
    float num2;
    QString flag;
};

#endif // MODEL_H
