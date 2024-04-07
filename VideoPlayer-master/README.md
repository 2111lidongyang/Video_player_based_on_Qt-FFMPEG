# VideoPlayer
# Qt+ffmpeg实现的视频播放器  
博客地址：http://blog.yundiantech.com/?log=blog&scat=182  

![Image text](https://raw.githubusercontent.com/yundiantech/VideoPlayer/master/screenshot.jpg)


版本说明：  
Qt开发环境的搭建 请参考：  
http://blog.yundiantech.com/?log=blog&id=6  

Qt中引用FFMPEG库文件 请参考：  
http://blog.yundiantech.com/?log=blog&id=7  

Qt中引用SDL库文件 请参考：  
http://blog.yundiantech.com/?log=blog&id=10  

学习音视频技术欢迎访问 http://blog.yundiantech.com  
音视频技术交流讨论欢迎加 QQ群 121376426    

PS:记得将ffmpeg/bin目录下的dll文件拷贝到编译生成的exe所在的目录下，否则会无法运行。  

版本一更新日志：  
【V1.0.0】从零开始学习音视频编程技术（五） 使用FFMPEG解码视频之保存成图片  
Qt4.8.2(mingw) + ffmpeg2.5.2  
博客地址：http://blog.yundiantech.com/?log=blog&id=8  

【V1.2.0】从零开始学习音视频编程技术（六） FFMPEG Qt视频播放器之显示图像  
Qt4.8.2(mingw) + ffmpeg2.5.2  
博客地址：http://blog.yundiantech.com/?log=blog&id=9  

【V1.3.0】从零开始学习音视频编程技术（八） FFMPEG Qt视频播放器之音视频同步  
Qt4.8.2(mingw) + ffmpeg2.5.2 + SDL2  
博客地址：http://blog.yundiantech.com/?log=blog&id=11  

【V1.4.0】从零开始学习音视频编程技术（九） FFMPEG Qt视频播放器之同步进阶篇  
Qt4.8.2(mingw) + ffmpeg2.5.2 + SDL2  
博客地址：http://blog.yundiantech.com/?log=blog&id=12  

【V1.5.0】从零开始学习音视频编程技术（十） FFMPEG Qt视频播放器之播放控制  
Qt4.8.2(mingw) + ffmpeg2.5.2 + SDL2  
博客地址：http://blog.yundiantech.com/?log=blog&id=13  

【V1.6.0】从零开始学习音视频编程技术（十一） FFMPEG Qt视频播放器之美化界面    
Qt4.8.2(mingw) + ffmpeg2.5.2 + SDL2  
博客地址：http://blog.yundiantech.com/?log=blog&id=14  

【V1.7.0】从零开始学习音视频编程技术（二十二） FFMPEG Qt视频播放器之BUG修复  
Qt5.6.2(vs2013) + ffmpeg2.5.2 + SDL2  
博客地址：http://blog.yundiantech.com/?log=blog&id=14  

【V1.8.0】  
Qt5.6.2(vs2013) + ffmpeg2.5.2 + SDL2  
1.增加64位库，可自行判断编译器位数，并加载对应的库  
2.代码结构调整（将底层播放器和Qt界面分开成2个模块，底层播放器代码使用纯c++编写，方便以后播放器模块的移植）  
3.支持播放不带音频流的视频文件  
4.支持播放音频文件  
5.修复SDL打开失败后，视频不播放的bug  
6.界面细节调整  

# PS:从版本2开始，ffmpeg版本升级到4.1。无需手动拷贝dll的操作，且工程已可以自动判断编译器位数。
【V2.0.0】 2019-03-24  
Qt5.6.2(vs2013) + ffmpeg4.1 + SDL2  
1.将ffmpeg升级到4.1版本  

【V2.1.0】 2019-03-26  
Qt5.6.2(vs2013/mingw) + ffmpeg4.1 + SDL2  
1.新增mingw编译器支持  
2.回调函数调整  
 
【V2.1.1】 2019-05-13  
Qt5.6.2(vs2013/mingw) + ffmpeg4.1 + SDL2  
1.解决wav文件不能播放的bug

【V2.1.2】 2019-08-08  
Qt5.6.2(vs2013/mingw) + ffmpeg4.1 + SDL2  
1.使用OpenGL渲染视频图像   
2.修复电脑没有音频设备的时候，视频播放几十秒就卡住的问题。   
3.将信号槽封装，简化将代码移入主函数运行的操作。 

【V2.1.3】 2019-09-06  
Qt5.6.2(vs2013/mingw) + ffmpeg4.1 + SDL2  
1.修复上个版本加入FunctionTransfer类引起的播放器停止出现死锁，导致卡死的问题  
2.修复部分电脑SDL打开失败的问题。  
3.修复部分音频文件播放快速播放完毕的问题。  

【V2.1.4】 2019-10-24  
Qt5.6.2(vs2013/mingw) + ffmpeg4.1 + SDL2  
1.新增linux支持，程序可以在linux下直接编译使用了。  
注:  
1)程序代码使用的编码是gbk.  
2)已经编译好的库为centos6.5(64位)下编译的，如需32位的库请自行编译。 

【V2.1.5】 2020-11-24  
Qt5.13.2(vs2017/mingw) + ffmpeg4.1 + SDL2  
1.支持输入网络地址播放。 

【V2.1.6】 2021-03-12  
Qt5.13.2(vs2017/mingw) + ffmpeg4.1 + SDL2  
1.新增播放列表。 
2.文件编码修改为utf-8带bom。  

【V2.1.7】 2021-04-04  
Qt5.13.2(vs2017/mingw) + ffmpeg4.1 + SDL2  
1.修复音频采样不对导致播放速度不正常的问题。
2.修复音频采样不对导致播放有杂音的问题。  
3.使用滤镜支持播放带角度的视频文件(参考ffplay实现)。  
  

