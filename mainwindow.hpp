#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

/* My Includes */
#include "qdynamicbutton.hpp"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_addButton_clicked();    // СЛОТ-обработчик нажатия кнопки добавления
    void on_deleteButton_clicked(); // СЛОТ-обработчик нажатия кнопки удаления
    void slotGetNumber();           // СЛОТ для получения номера нажатой динамической кнопки

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
