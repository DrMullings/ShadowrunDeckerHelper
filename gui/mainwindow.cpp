#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionLoad_character_triggered()
{
    auto chr = make_unique<Character>();
    auto importer = make_unique<CharImporter>(chr.get());

}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}
