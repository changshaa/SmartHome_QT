#include "home.h"
#include "ui_home.h"

Home::Home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);

    // 实例化了一个server
    my_tcpServer = new Tcpserver(this);
    //启动服务器线程，监听所有端口为6666的IP
    my_tcpServer->listen(QHostAddress::Any,6666);


    /*启动定时器*/
    my_timer =  new QTimer(this);
    connect(my_timer,SIGNAL(timeout()),this,SLOT(slot_timeout()));
    my_timer->start(1000);


    /*空调窗口*/
    wid_DeviceAC = new DeviceAC(LIVINGROOM,this);
    connect(wid_DeviceAC,SIGNAL(sig_sendData(int,QString)),my_tcpServer,SLOT(slot_deviceSendData(int,QString)));
    wid_DeviceAC->move(660,220);

    /*百叶窗窗口*/
    wid_DeviceCurtain = new DeviceCurtain(LIVINGROOM,this);
    connect(wid_DeviceCurtain,SIGNAL(sig_sendData(int,QString)),my_tcpServer,SLOT(slot_deviceSendData(int,QString)));
    wid_DeviceCurtain->move(1050,220);

    /*吊灯窗口*/
    wid_DeviceLamp = new DeviceLamp(LIVINGROOM,this);
    connect(wid_DeviceLamp,SIGNAL(sig_sendData(int,QString)),my_tcpServer,SLOT(slot_deviceSendData(int,QString)));
    wid_DeviceLamp->move(330,220);

    /*风扇窗口*/
    wid_DeviceFan = new DeviceFan(LIVINGROOM,this);
    connect(wid_DeviceFan,SIGNAL(sig_sendData(int,QString)),my_tcpServer,SLOT(slot_deviceSendData(int,QString)));
    wid_DeviceFan->move(330,530);



    /* 设置样式*/
    setWindowTitle("草莓莓莓的熊");
    QPalette pal = this->palette();
    pal.setBrush(QPalette::Background,QBrush(QPixmap("://png/背景.png")));
    setPalette(pal);

    //ui->label_headpic->setStyleSheet("border-image:url(:/png/头像.png)");
    ui->label_headpic->setStyleSheet(
        "border-image: url(:/png/头像.png) 0 0 0 0 stretch stretch;"
        "border: 2px solid #000000;"  // 设置边框
        "border-radius: 50%;"
    );
    ui->label_headpic->setText("");

    ui->frame_left->setStyleSheet("#frame_left{background-color:rgba(0,0,0,70%);}");

    ui->label_keting->setStyleSheet("color:#FFFFFF");
    ui->label_time_1->setStyleSheet("color:#FFFFFF");
    ui->label_time_2->setStyleSheet("color:#FFFFFF");
    ui->label_status->setStyleSheet("color:#FFFFFF");

     ui->label_fenge->setFixedWidth(3);
     ui->label_fenge->setText("");
    ui->label_fenge->setStyleSheet("background-color:#FFFFFF");

    //ui->label_info->setStyleSheet("color:rgba(255,255,255,200)");


    /*获取时间*/
    ui->label_time_1->setText(QTime::currentTime().toString("hh:mm"));
    ui->label_time_2->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd ddd"));

}

void Home::slot_timeout(void)
{
    /*获取时间*/
    ui->label_time_1->setText(QTime::currentTime().toString("hh:mm"));
    ui->label_time_2->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd ddd"));


    if(livingroom_status == CONNECT)
    {
        ui->label_status->setText("状态：在线");
    }else
    {
        ui->label_status->setText("状态：离线");
    }
}


Home::~Home()
{
    delete ui;
}
