#include "wildgrammar.h"
#include "ui_wildgrammar.h"

WildGrammar::WildGrammar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WildGrammar)
{
    ui->setupUi(this);
}

WildGrammar::~WildGrammar()
{
    delete ui;
}
