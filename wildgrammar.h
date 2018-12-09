#ifndef WILDGRAMMAR_H
#define WILDGRAMMAR_H

#include <QWidget>

namespace Ui {
class WildGrammar;
}

class WildGrammar : public QWidget
{
    Q_OBJECT

public:
    explicit WildGrammar(QWidget *parent = nullptr);
    ~WildGrammar();

private:
    Ui::WildGrammar *ui;
};

#endif // WILDGRAMMAR_H
