#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
	void on_pushButton_test_clicked();

private:
    Ui::MainWindow *ui;

	QList <int> m_bevel;
	QList <int> m_rimless;

	int m_size;

	int m_idxStart, m_idxEnd;

};

#endif // MAINWINDOW_H
