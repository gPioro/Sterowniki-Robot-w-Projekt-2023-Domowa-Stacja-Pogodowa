#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*
    COMPORT->setPortName("COM3");
    COMPORT->setBaudRate(QSerialPort::Baud115200);
    COMPORT->setDataBits(QSerialPort::Data8);
    COMPORT->setParity(QSerialPort::NoParity);
    COMPORT->setStopBits(QSerialPort::OneStop);
    Data_From_SerialPort = "";
    connect(COMPORT, &QSerialPort::readyRead, this, &MainWindow::Read_Data);
    */
     COMPORT = new QSerialPort(this);
/*
     COMPORT->setPortName("COM3");
     COMPORT->setBaudRate(QSerialPort::Baud115200);
     COMPORT->setDataBits(QSerialPort::Data8);
     COMPORT->setParity(QSerialPort::NoParity);
     COMPORT->setStopBits(QSerialPort::OneStop);
     Data_From_SerialPort = "";

*/
     ui->pushButton->setText("Połącz ze stacją");
     ui->pushButton->setCheckable(true);
     ui->pushButton->setChecked(false);
     ui->pushButton->setStyleSheet("background-color: green; color: white");

     if (COMPORT->isOpen())
     {
         qDebug() << "Serial Port Is Connected.";
         qDebug() <<COMPORT->error();
     }
     else
     {
         qDebug() << "Serial Port Is not Connected.";
         qDebug() << COMPORT->error();
     }

     connect(COMPORT, &QSerialPort::readyRead, this, &MainWindow::Read_Data);
}

MainWindow::~MainWindow()
{
    delete ui;
     if (COMPORT->isOpen())
         COMPORT->close();
     delete COMPORT;

}
/*
void MainWindow::Read_Data()
{
    if (COMPORT->isOpen())
    {
        while (COMPORT->bytesAvailable())
        {
            Data_From_SerialPort += COMPORT->readAll();
        }
        if (Data_From_SerialPort.at(Data_From_SerialPort.length()-1) == char(10))
        {
            IS_Data_Recevied = true;
        }
        if (IS_Data_Recevied == true)
        {
            if (displayData)
            {
                qDebug() << "Data From Serial Port : " << Data_From_SerialPort;

                QStringList dataList = Data_From_SerialPort.split(",", Qt::SkipEmptyParts);

                        ui->label_11->setText(dataList[0]);
                        ui->label_13->setText(dataList[1]);
                        ui->label_15->setText(dataList[2]);


            }
            Data_From_SerialPort.clear();
            IS_Data_Recevied = false;
        }
    }
}
*/
void MainWindow::Read_Data()
{
    if (COMPORT->isOpen())
    {
        while (COMPORT->bytesAvailable())
        {
            Data_From_SerialPort += COMPORT->readAll();
        }
        if (Data_From_SerialPort.endsWith('\n'))
        {
            IS_Data_Recevied = true;
        }
        if (IS_Data_Recevied)
        {
            qDebug() << "Data From Serial Port : " << Data_From_SerialPort;

            QStringList data = Data_From_SerialPort.split(",");
            if (data.count() >= 2)
            {
                        ui->label_11->setText(data[0]);
                        ui->label_13->setText(data[1]);
                        ui->label_15->setText(data[2]);
            }
            Data_From_SerialPort.clear();
            IS_Data_Recevied = false;
        }
    }
}
void MainWindow::on_pushButton_clicked()
{

    if (ui->pushButton->isChecked())
    {
        COMPORT->setPortName("COM3");
        COMPORT->setBaudRate(QSerialPort::Baud115200);
        COMPORT->setDataBits(QSerialPort::Data8);
        COMPORT->setParity(QSerialPort::NoParity);
        COMPORT->setStopBits(QSerialPort::OneStop);
        Data_From_SerialPort = "";
        if (COMPORT->open(QIODevice::ReadWrite))
        {
            ui->pushButton->setText("Rozłącz");
            ui->pushButton->setStyleSheet("background-color: red; color: white");
        }
        else
        {
            ui->pushButton->setChecked(false);
            ui->pushButton->setText("Połącz ze stacją");
            ui->pushButton->setStyleSheet("background-color: green; color: white");
        }
    }
    else
    {
        COMPORT->close();
        ui->pushButton->setText("Połącz ze stacją");
        ui->pushButton->setStyleSheet("background-color: green; color: white");
    }
}
