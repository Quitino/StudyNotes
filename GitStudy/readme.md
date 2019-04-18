## 搜索技巧
- 通过in关键词限制搜索范围
- xxx in:name 项目名包含xxx的
- xxx in:description 项目描述包含xxx的
- xxx in:readme 项目的readme文件中包含xxx的
当然也可以通过xxx in:name,desciption来组合使用
## 1.注册和安装git客户端
[可参照以下这篇博客](http://blog.csdn.net/vipzjyno1/article/details/22098621)

通过命令行，以上的博客也说德很清楚，下面要说的是如何通过Git GUI将自己本地的文件上传至Github上。

## 2.将自己本地文件上传至Github

1）创建.git仓库 

    在自己的本地文件（位置随意），点击右键==》选择Git GUI Here ，会弹出以下框，选择create new Repository，也就是箭头处，红色圈内是我自己已经创建的。

点击create new Repository以后会出现让你输入一个文件夹的弹窗，直接输入一个文件夹名称即可。点击创建，这时打开Git文件夹里面有一个.git文件夹，但有些人是看不到的，这是因为，默认情况下是隐藏的，自己将自己电脑里的文件显示即可，不会的自行百度。这时，这个Git文件夹就是你的项目仓库。只要将你需要上传的项目放在该文件夹即可。

![image](https://github.com/Quitino/StudyNotes/blob/master/GitStudy/pic/20160118164246610.png)
![image](https://github.com/Quitino/StudyNotes/blob/master/GitStudy/pic/20160118164635270.png)


2) 完成点击创建以后，会弹出可视化窗：点击Remote--》Add...

![image](https://github.com/Quitino/StudyNotes/blob/master/GitStudy/pic/20160118165513900.jpg)

弹出以下框以后输入你Github的用户名（shanerou是我的github名称）和你需要将你本地的项目放在Github的仓库的地址，如我在Github上创建了一个repository名称为Test的，然后添加如下，点击创建，弹出success的框代表创建成功

![image](https://github.com/Quitino/StudyNotes/blob/master/GitStudy/pic/20160118165920635.png)
![image](https://github.com/Quitino/StudyNotes/blob/master/GitStudy/pic/20160118170546917.png)



在Git文件夹下放入我的一个demo：SD_SQList2

![image](https://github.com/Quitino/StudyNotes/blob/master/GitStudy/pic/20160118170915571.png)


3)按以下步骤操作：

![image](https://github.com/Quitino/StudyNotes/blob/master/GitStudy/pic/20160118171724444.png)


点击第三步时，在Initial Commit Message 框里将会看到一行信息

![image](https://github.com/Quitino/StudyNotes/blob/master/GitStudy/pic/20160118172426522.jpg)


输入你Github的用户名 和密码：

![image](https://github.com/Quitino/StudyNotes/blob/master/GitStudy/pic/20160118172535690.png)
![image](https://github.com/Quitino/StudyNotes/blob/master/GitStudy/pic/20160118172619673.png)



4)点击上传：出现以下弹框则表示上传成功

![image](https://github.com/Quitino/StudyNotes/blob/master/GitStudy/pic/20160118172724381.png)




这时到你的Github上去看，将会看到以下dome：

![image](https://github.com/Quitino/StudyNotes/blob/master/GitStudy/pic/20160118172941514.png)


至此上传结束。
