#include "Score.h"
#include"mainwindow.h"

//======================== Score Constructor  =======================//


Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent){

    //============= set default value for score ==============//

    score = 0; //set initaial value

    //======================== Draw the score =======================//

    setPlainText(QString("Score: ") + QString::number(score)); // Score: 0
    setDefaultTextColor(Qt::red);//set color to red
    setFont(QFont("times",18));//text style
}

//==========================Increase funtion for Score =======================//


void Score::increase(){

    score++; //increase
    setPlainText(QString("Score: ") + QString::number(score)); // Score: 1
}

//========================= Getter function of score =======================//

int Score::getScore(){
    return score;
}
