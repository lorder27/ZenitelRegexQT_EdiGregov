#include "parser.h"
#include "conio.h"
#include "stdio.h"
#include <QTextStream>
#include <QIODevice>
#include <QFile>
#include <QDebug>
#include<QRegularExpression>
#include <QString>
#include <QTextStream>

#include "threading.h"

using namespace Qt;

Parser::Parser(QString input)
{  //^(?:(?:31(\/|-|\.)(?:0?[13578]|1[02]))\1|(?:(?:29|30)(\/|-|\.)(?:0?[13-9]|1[0-2])\2))(?:(?:1[6-9]|[2-9]\d)?\d{2})$|^(?:29(\/|-|\.)0?2\3(?:(?:(?:1[6-9]|[2-9]\d)?(?:0[48]|[2468][048]|[13579][26])|(?:(?:16|[2468][048]|[3579][26])00))))$|^(?:0?[1-9]|1\d|2[0-8])(\/|-|\.)(?:(?:0?[1-9])|(?:1[0-2]))\4(((?:(?:1[6-9]|[2-9]\d)?\d{2})+)+) ([A-Z][-A-Za-z]+)+(( [A-Z][a-z-A-Z]+)+)?$
    //^(?:(?:31(\/|-|\.)(?:0?[13578]|1[02]))\1|(?:(?:29|30)(\/|-|\.)(?:0?[13-9]|1[0-2])\2))(?:(?:1[6-9]|[2-9]\d)?\d{2})$|^(?:29(\/|-|\.)0?2\3(?:(?:(?:1[6-9]|[2-9]\d)?(?:0[48]|[2468][048]|[13579][26])|(?:(?:16|[2468][048]|[3579][26])00))))$|^(?:0?[1-9]|1\d|2[0-8])(\/|-|\.)(?:(?:0?[1-9])|(?:1[0-2]))\4(((?:(?:1[6-9]|[2-9]\d)?\d{2})+)+) ([a-z-A-Z]+( [a-z-A-Z]+)+)?$
    //QRegularExpression re("^(?:(?:31(\\/|-|\\.)(?:0?[13578]|1[02]))\\1|(?:(?:29|30)(\\/|-|\\.)(?:0?[13-9]|1[0-2])\\2))(?:(?:1[6-9]|[2-9]\\d)?\\d{2})$|^(?:29(\\/|-|\\.)0?2\\3(?:(?:(?:1[6-9]|[2-9]\\d)?(?:0[48]|[2468][048]|[13579][26])|(?:(?:16|[2468][048]|[3579][26])00))))$|^(?:0?[1-9]|1\\d|2[0-8])(\\/|-|\\.)(?:(?:0?[1-9])|(?:1[0-2]))\\4(?:(?:1[6-9]|[2-9]\\d)?\\d{2})$");
    //QRegularExpression re("^[0-3][0-9]/[0-3][0-9]/(?:[0-9][0-9])?[0-9][0-9]$");

    Threading results;
    QRegularExpression re("^([0-9]+(\\.[0-9]+)+) ([a-zA-Z]+( [a-zA-Z]+)+)?$");



    QRegularExpressionMatch match = re.match(input);
    if (match.hasMatch()) {
        rezultat2.append(input);
    }

    else if (!match.hasMatch())
    {
        //qDebug() << "No Valid Inputs"<< input;
    }

}


