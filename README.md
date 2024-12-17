# 项目介绍
本项目用于建立一个模板工程, 便于后期查看与快速适配emWin库

库版本: V5.48

分支emWin6: v6.1.0


# timeline
## 2024.12.17
配置了README.md文件, 用于记录项目的进展与问题
当天出现了VS Studio的环境问题, 通过修改cmakelist文件解决
今日适配完成电阻触摸屏驱动, 通过测试, 电阻触摸屏驱动正常工作


# 发生过的问题
配置VS Studio的时候出现环境问题, 在cmakelist中修改了指定的编译器
若进行工程迁移, 注意删除这个配置, 使用cubeMX生成的cmakelist即可