#include "index.h"
#include "ui_index.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QDebug>
#include <QFile>
#include <QBuffer>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QList>
#include "MainWindow.h"
#include <QNetworkRequest>
#include <QByteArray>
#include <QPixmap>
#include <QUrl>
#include <QObject>
#include <QMessageBox>

Index::Index(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Index)
{
    ui->setupUi(this);
    //设置全屏显示
    InitWindows();
    dbConnect();
    QFile file("avatar.png");
        if (file.exists()) {
            QPixmap pixmap("avatar.png"); // 从文件加载图片到QPixmap
            if (!pixmap.isNull()) { // 确保QPixmap有效
                ui->logo_label->setPixmap(pixmap.scaled(ui->logo_label->size(), Qt::KeepAspectRatio)); // 设置QLabel的Pixmap，并可能缩放以适应标签大小
                ui->logo_label->show(); // 确保标签是可见的
            } else {
                qDebug() << "Error loading pixmap from file:";
            }
        } else {
            qDebug() << "Image file does not exist:";
        }

}

void Index::InitWindows(){
    QList<QList<QString>> mylist = dbConnect();  // 获取资源
    QList<QString> myimageList = mylist[1];
    qDebug() << "image:" << myimageList;

    QNetworkAccessManager manager;

    for (int i = 0; i < myimageList.length(); i++)
    {
        QString imageurl = myimageList[i];
        QUrl url(imageurl);

        QNetworkReply *reply = manager.get(QNetworkRequest(url));

        // 使用 QEventLoop 是不推荐的，因为它会阻塞主线程。
        // 这里应该使用异步方式处理网络请求。
        QEventLoop loop;
        QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
        loop.exec();

        QByteArray jpegData = reply->readAll();
        QPixmap pixmap;
        pixmap.loadFromData(jpegData);

        // 动态拼接文件名
        QString fileName = QString("output_%1.png").arg(i); // 使用arg()函数插入i的值
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly)) {
            QByteArray byteArray;
            QBuffer buffer(&byteArray);
            buffer.open(QIODevice::WriteOnly);
            pixmap.save(&buffer, "PNG"); // 保存为 PNG 格式
            file.write(byteArray);
            file.close();
            qDebug() << "保存成功" << fileName;
        } else {
            qDebug() << "无法打开文件：" << fileName;
        }

        reply->deleteLater(); // 删除reply对象，避免内存泄漏
    }
    QList<QString> myvideoList = mylist[0];
    QList<QString> myvideo_id_List = mylist[2];  //获取视频的id
    QList<QString> myvideo_title_List = mylist[3];  //获取视频的标题
    QList<QLabel*> videoLabels = {ui->videolabel, ui->videolabel_2, ui->videolabel_3, ui->videolabel_4, ui->videolabel_5, ui->videolabel_6, ui->videolabel_7, ui->videolabel_8};

    for (int i = 0; i < 8; ++i) {
        QLabel* currentLabel = videoLabels[i];
        currentLabel->setTextFormat(Qt::RichText);
        QString str = myvideoList[i] + " (ID: " + myvideo_id_List[i] + ") " + myvideo_title_List[i];
        QString labelText = QString("<a href='%1'><img src='output_%2.png' width='290' height='220'></a>").arg(str).arg(i);
        currentLabel->setText(labelText);
        connect(currentLabel, &QLabel::linkActivated, this, [this, i](const QString &link){
            switch (i) {
                case 0: on_videolabel_linkActivated(link); break;
                case 1: on_videolabel_2_linkActivated(link); break;
                case 2: on_videolabel_3_linkActivated(link); break;
                case 3: on_videolabel_4_linkActivated(link); break;
                case 4: on_videolabel_5_linkActivated(link); break;
                case 5: on_videolabel_6_linkActivated(link); break;
                case 6: on_videolabel_7_linkActivated(link); break;
                case 7: on_videolabel_8_linkActivated(link); break;
            }
        });
    }
}

QList<QList<QString>> Index::dbConnect()  // 连接数据库函数
{
    QList<QList<QString>> container;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("QtVideo"); //不是Database,记得别填错，是你QODBC里填的名字
    db.setUserName("root");
    db.setPassword("你的密码");
    bool ok = db.open();
    if (ok)
    {
        QSqlQuery query;
        QList<QString> videoList; // 创建一个空的字符串列表,存视频链接
        QList<QString> imgList; // 创建一个空的字符串列表,存图片链接
        QList<QString> idList;  // 创建一个空的字符串列表，存视频id
        QList<QString> titleList;  // 存视频的标题

        query.exec("SELECT video_url, video_avatar_url, video_id, video_title FROM videos ORDER BY RAND() LIMIT 8;"); // 查询视频链接和视频封面链接
        while (query.next())
        {
            QString video_url = query.value(0).toString(); // 获取视频链接
            QString img_url = query.value(1).toString();  // 获取视频封面链接
            QString video_id = query.value(2).toString();  // 获取视频的id
            QString video_title = query.value(3).toString();  // 获取视频的标题
            qDebug() << "视频链接：" << video_url << "，图片链接：" << img_url;

            // 添加元素到列表
            videoList.append(video_url);
            imgList.append(img_url);
            idList.append(video_id);
            titleList.append(video_title);
        }

        container.append(videoList);  // 放到二位列表中
        container.append(imgList);  // 放到二位列表中
        container.append(idList);
        container.append(titleList);
        db.close();
        return container;
    }
    else
    {
        qDebug()<<"error open database because";
        return container;
    }
}



Index::~Index()
{
    delete ui;
}


void Index::on_videolabel_linkActivated(const QString &link)  // 点击视频label槽函数
{
    if(flag == true)
    {
        qDebug() <<"Link activate"<< link;
        flag = false;
        // 提取视频链接
        QString videoUrl;
        int idPosition = link.indexOf("(ID:");
        if (idPosition != -1) {
            videoUrl = link.left(idPosition).trimmed(); // 使用left()提取到"(ID:"之前的部分，并用trimmed()去除两侧空格
        } else {
            // 处理未找到ID的情况，这里可以设置一个默认值或抛出错误
            qDebug() << "ID not found in the link";
            return; // 或者其他错误处理
        }

        // 提取ID
        QString idStr;
        int titlePosition = link.indexOf(") "); // 查找") "的位置，它标志着ID和标题之间的分隔
        if (titlePosition != -1 && idPosition != -1) {
            QString idPart = link.mid(idPosition + 4, titlePosition - idPosition - 4); // 提取ID部分
            idStr = idPart.trimmed(); // 去除ID两侧的空格
        } else {
            // 处理未找到标题或ID的情况
            qDebug() << "ID or title not found in the link";
            return; // 或者其他错误处理
        }

        // 提取标题
        QString title = link.mid(titlePosition + 2).trimmed(); // 提取") "之后的部分作为标题，并去除两侧空格

        // 输出结果
        qDebug() << "Video URL:" << videoUrl;
        qDebug() << "ID:" << idStr;
        qDebug() << "Title:" << title;
        MainWindow *mainpage = new MainWindow();  // 创建一个播放视频的界面指针对象
        this->close();
        mainpage->videourl = videoUrl;  // 将获取到的视频链接绑定到videourl
        mainpage->videoname = title;
        mainpage->videoid = idStr;
        mainpage->show();
    }


}


void Index::on_videolabel_2_linkActivated(const QString &link)
{
    qDebug() <<"Link activate"<< link;
    if(flag == true)
    {
        qDebug() <<"Link activate"<< link;
        flag = false;
        // 提取视频链接
        QString videoUrl;
        int idPosition = link.indexOf("(ID:");
        if (idPosition != -1) {
            videoUrl = link.left(idPosition).trimmed(); // 使用left()提取到"(ID:"之前的部分，并用trimmed()去除两侧空格
        } else {
            // 处理未找到ID的情况，这里可以设置一个默认值或抛出错误
            qDebug() << "ID not found in the link";
            return; // 或者其他错误处理
        }

        // 提取ID
        QString idStr;
        int titlePosition = link.indexOf(") "); // 查找") "的位置，它标志着ID和标题之间的分隔
        if (titlePosition != -1 && idPosition != -1) {
            QString idPart = link.mid(idPosition + 4, titlePosition - idPosition - 4); // 提取ID部分
            idStr = idPart.trimmed(); // 去除ID两侧的空格
        } else {
            // 处理未找到标题或ID的情况
            qDebug() << "ID or title not found in the link";
            return; // 或者其他错误处理
        }

        // 提取标题
        QString title = link.mid(titlePosition + 2).trimmed(); // 提取") "之后的部分作为标题，并去除两侧空格

        // 输出结果
        qDebug() << "Video URL:" << videoUrl;
        qDebug() << "ID:" << idStr;
        qDebug() << "Title:" << title;

        MainWindow *mainpage = new MainWindow();  // 创建一个播放视频的界面指针对象
        this->close();
        mainpage->videourl = videoUrl;  // 将获取到的视频链接绑定到videourl
        mainpage->videoname = title;
        mainpage->videoid = idStr;
        mainpage->show();
    }

}

void Index::on_videolabel_3_linkActivated(const QString &link)
{
    qDebug() <<"Link activate"<< link;
    if(flag == true)
    {
        qDebug() <<"Link activate"<< link;
        flag = false;
        // 提取视频链接
        QString videoUrl;
        int idPosition = link.indexOf("(ID:");
        if (idPosition != -1) {
            videoUrl = link.left(idPosition).trimmed(); // 使用left()提取到"(ID:"之前的部分，并用trimmed()去除两侧空格
        } else {
            // 处理未找到ID的情况，这里可以设置一个默认值或抛出错误
            qDebug() << "ID not found in the link";
            return; // 或者其他错误处理
        }

        // 提取ID
        QString idStr;
        int titlePosition = link.indexOf(") "); // 查找") "的位置，它标志着ID和标题之间的分隔
        if (titlePosition != -1 && idPosition != -1) {
            QString idPart = link.mid(idPosition + 4, titlePosition - idPosition - 4); // 提取ID部分
            idStr = idPart.trimmed(); // 去除ID两侧的空格
        } else {
            // 处理未找到标题或ID的情况
            qDebug() << "ID or title not found in the link";
            return; // 或者其他错误处理
        }

        // 提取标题
        QString title = link.mid(titlePosition + 2).trimmed(); // 提取") "之后的部分作为标题，并去除两侧空格

        // 输出结果
        qDebug() << "Video URL:" << videoUrl;
        qDebug() << "ID:" << idStr;
        qDebug() << "Title:" << title;

        MainWindow *mainpage = new MainWindow();  // 创建一个播放视频的界面指针对象
        this->close();
        mainpage->videourl = videoUrl;  // 将获取到的视频链接绑定到videourl
        mainpage->videoname = title;
        mainpage->videoid = idStr;
        mainpage->show();
    }

}

void Index::on_videolabel_4_linkActivated(const QString &link)
{
    qDebug() <<"Link activate"<< link;
    if(flag == true)
    {
        qDebug() <<"Link activate"<< link;
        flag = false;
        // 提取视频链接
        QString videoUrl;
        int idPosition = link.indexOf("(ID:");
        if (idPosition != -1) {
            videoUrl = link.left(idPosition).trimmed(); // 使用left()提取到"(ID:"之前的部分，并用trimmed()去除两侧空格
        } else {
            // 处理未找到ID的情况，这里可以设置一个默认值或抛出错误
            qDebug() << "ID not found in the link";
            return; // 或者其他错误处理
        }

        // 提取ID
        QString idStr;
        int titlePosition = link.indexOf(") "); // 查找") "的位置，它标志着ID和标题之间的分隔
        if (titlePosition != -1 && idPosition != -1) {
            QString idPart = link.mid(idPosition + 4, titlePosition - idPosition - 4); // 提取ID部分
            idStr = idPart.trimmed(); // 去除ID两侧的空格
        } else {
            // 处理未找到标题或ID的情况
            qDebug() << "ID or title not found in the link";
            return; // 或者其他错误处理
        }

        // 提取标题
        QString title = link.mid(titlePosition + 2).trimmed(); // 提取") "之后的部分作为标题，并去除两侧空格

        // 输出结果
        qDebug() << "Video URL:" << videoUrl;
        qDebug() << "ID:" << idStr;
        qDebug() << "Title:" << title;

        MainWindow *mainpage = new MainWindow();  // 创建一个播放视频的界面指针对象
        this->close();
        mainpage->videourl = videoUrl;  // 将获取到的视频链接绑定到videourl
        mainpage->videoname = title;
        mainpage->videoid = idStr;
        mainpage->show();
    }

}

void Index::on_videolabel_5_linkActivated(const QString &link)
{
    qDebug() <<"Link activate"<< link;
    if(flag == true)
    {
         flag = false;
        if (user_class == "1")
        {
           QMessageBox::critical(this, "用户提醒", "你还不是会员，该视频无法观看", QMessageBox::Ok);
           return;
        }
        qDebug() <<"Link activate"<< link;
        // 提取视频链接
        QString videoUrl;
        int idPosition = link.indexOf("(ID:");
        if (idPosition != -1) {
            videoUrl = link.left(idPosition).trimmed(); // 使用left()提取到"(ID:"之前的部分，并用trimmed()去除两侧空格
        } else {
            // 处理未找到ID的情况，这里可以设置一个默认值或抛出错误
            qDebug() << "ID not found in the link";
            return; // 或者其他错误处理
        }

        // 提取ID
        QString idStr;
        int titlePosition = link.indexOf(") "); // 查找") "的位置，它标志着ID和标题之间的分隔
        if (titlePosition != -1 && idPosition != -1) {
            QString idPart = link.mid(idPosition + 4, titlePosition - idPosition - 4); // 提取ID部分
            idStr = idPart.trimmed(); // 去除ID两侧的空格
        } else {
            // 处理未找到标题或ID的情况
            qDebug() << "ID or title not found in the link";
            return; // 或者其他错误处理
        }

        // 提取标题
        QString title = link.mid(titlePosition + 2).trimmed(); // 提取") "之后的部分作为标题，并去除两侧空格

        // 输出结果
        qDebug() << "Video URL:" << videoUrl;
        qDebug() << "ID:" << idStr;
        qDebug() << "Title:" << title;

        MainWindow *mainpage = new MainWindow();  // 创建一个播放视频的界面指针对象
        this->close();
        mainpage->videourl = videoUrl;  // 将获取到的视频链接绑定到videourl
        mainpage->videoname = title;
        mainpage->videoid = idStr;
        mainpage->show();
    }

}

void Index::on_videolabel_6_linkActivated(const QString &link)
{
    qDebug() <<"Link activate"<< link;
    if(flag == true)
    {
        flag = false;
        if (user_class == "1")
        {
           QMessageBox::critical(this, "用户提醒", "你还不是会员，该视频无法观看", QMessageBox::Ok);
           return;
        }
        qDebug() <<"Link activate"<< link;
        // 提取视频链接
        QString videoUrl;
        int idPosition = link.indexOf("(ID:");
        if (idPosition != -1) {
            videoUrl = link.left(idPosition).trimmed(); // 使用left()提取到"(ID:"之前的部分，并用trimmed()去除两侧空格
        } else {
            // 处理未找到ID的情况，这里可以设置一个默认值或抛出错误
            qDebug() << "ID not found in the link";
            return; // 或者其他错误处理
        }

        // 提取ID
        QString idStr;
        int titlePosition = link.indexOf(") "); // 查找") "的位置，它标志着ID和标题之间的分隔
        if (titlePosition != -1 && idPosition != -1) {
            QString idPart = link.mid(idPosition + 4, titlePosition - idPosition - 4); // 提取ID部分
            idStr = idPart.trimmed(); // 去除ID两侧的空格
        } else {
            // 处理未找到标题或ID的情况
            qDebug() << "ID or title not found in the link";
            return; // 或者其他错误处理
        }

        // 提取标题
        QString title = link.mid(titlePosition + 2).trimmed(); // 提取") "之后的部分作为标题，并去除两侧空格

        // 输出结果
        qDebug() << "Video URL:" << videoUrl;
        qDebug() << "ID:" << idStr;
        qDebug() << "Title:" << title;

        MainWindow *mainpage = new MainWindow();  // 创建一个播放视频的界面指针对象
        this->close();
        mainpage->videourl = videoUrl;  // 将获取到的视频链接绑定到videourl
        mainpage->videoname = title;
        mainpage->videoid = idStr;
        mainpage->show();
    }

}

void Index::on_videolabel_7_linkActivated(const QString &link)
{
    qDebug() <<"Link activate"<< link;
    if(flag == true)
    {
        flag = false;
        if (user_class == "1")
        {
           QMessageBox::critical(this, "用户提醒", "你还不是会员，该视频无法观看", QMessageBox::Ok);
           return;
        }
        qDebug() <<"Link activate"<< link;
        // 提取视频链接
        QString videoUrl;
        int idPosition = link.indexOf("(ID:");
        if (idPosition != -1) {
            videoUrl = link.left(idPosition).trimmed(); // 使用left()提取到"(ID:"之前的部分，并用trimmed()去除两侧空格
        } else {
            // 处理未找到ID的情况，这里可以设置一个默认值或抛出错误
            qDebug() << "ID not found in the link";
            return; // 或者其他错误处理
        }

        // 提取ID
        QString idStr;
        int titlePosition = link.indexOf(") "); // 查找") "的位置，它标志着ID和标题之间的分隔
        if (titlePosition != -1 && idPosition != -1) {
            QString idPart = link.mid(idPosition + 4, titlePosition - idPosition - 4); // 提取ID部分
            idStr = idPart.trimmed(); // 去除ID两侧的空格
        } else {
            // 处理未找到标题或ID的情况
            qDebug() << "ID or title not found in the link";
            return; // 或者其他错误处理
        }

        // 提取标题
        QString title = link.mid(titlePosition + 2).trimmed(); // 提取") "之后的部分作为标题，并去除两侧空格

        // 输出结果
        qDebug() << "Video URL:" << videoUrl;
        qDebug() << "ID:" << idStr;
        qDebug() << "Title:" << title;

        MainWindow *mainpage = new MainWindow();  // 创建一个播放视频的界面指针对象
        this->close();
        mainpage->videourl = videoUrl;  // 将获取到的视频链接绑定到videourl
        mainpage->videoname = title;
        mainpage->videoid = idStr;
        mainpage->show();
    }

}

void Index::on_videolabel_8_linkActivated(const QString &link)
{
    qDebug() <<"Link activate"<< link;
    if(flag == true)
    {
        flag = false;
        if (user_class == "1")
        {
           QMessageBox::critical(this, "用户提醒", "你还不是会员，该视频无法观看", QMessageBox::Ok);
           return;
        }
        qDebug() <<"Link activate"<< link;

        // 提取视频链接
        QString videoUrl;
        int idPosition = link.indexOf("(ID:");
        if (idPosition != -1) {
            videoUrl = link.left(idPosition).trimmed(); // 使用left()提取到"(ID:"之前的部分，并用trimmed()去除两侧空格
        } else {
            // 处理未找到ID的情况，这里可以设置一个默认值或抛出错误
            qDebug() << "ID not found in the link";
            return; // 或者其他错误处理
        }

        // 提取ID
        QString idStr;
        int titlePosition = link.indexOf(") "); // 查找") "的位置，它标志着ID和标题之间的分隔
        if (titlePosition != -1 && idPosition != -1) {
            QString idPart = link.mid(idPosition + 4, titlePosition - idPosition - 4); // 提取ID部分
            idStr = idPart.trimmed(); // 去除ID两侧的空格
        } else {
            // 处理未找到标题或ID的情况
            qDebug() << "ID or title not found in the link";
            return; // 或者其他错误处理
        }

        // 提取标题
        QString title = link.mid(titlePosition + 2).trimmed(); // 提取") "之后的部分作为标题，并去除两侧空格

        // 输出结果
        qDebug() << "Video URL:" << videoUrl;
        qDebug() << "ID:" << idStr;
        qDebug() << "Title:" << title;

        MainWindow *mainpage = new MainWindow();  // 创建一个播放视频的界面指针对象
        this->close();
        mainpage->videourl = videoUrl;  // 将获取到的视频链接绑定到videourl
        mainpage->videoname = title;
        mainpage->videoid = idStr;
        mainpage->show();
    }

}

void Index::on_pushButton_clicked()  // 会员
{
    qDebug() <<"会员";
    vippage->show();

}

void Index::on_pushButton_4_clicked()  // 换一批视频
{
    QMessageBox::information(this, "视频刷新中", "视频刷新中.......", QMessageBox::Ok);
    InitWindows();
    dbConnect();
}
