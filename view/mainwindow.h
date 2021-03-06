/**
 * @file mainwindow.h
 * @author author
 * @brief header for mainwindow.cpp
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "../controller/FeedController.h"

/**
 * @brief
 *
 */
namespace Ui
{
class MainWindow;
}

/**
 * @brief
 *
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int getZoneCount();

private slots:
    void on_pushButton_clicked();

    void on_pushButton2_clicked();

    QPixmap drawZones(QPixmap image, int intCoords[8]);

    void on_histButton_clicked();

    void on_startButton_clicked();

    void on_heatmapButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
