#include "classgroup.h"

ClassGroup::ClassGroup(QWidget* parent) : QWidget(parent),ui(new Ui_ClassTabGroup())
{
    ui->setupUi(this);
}

ClassGroup::~ClassGroup()
{
    delete ui;
}