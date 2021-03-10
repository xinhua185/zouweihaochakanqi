import easygui,os
num=easygui.enterbox('输入前2位数')
date=easygui.enterbox('输入入学年份(20~~)')
g=easygui.indexbox('选择年级','',['1','2','3','4','5','6'])+1
c=easygui.enterbox('输入班级')
x=easygui.indexbox('选择你所在的组',''['1','2','3','4'])
y=essygui.indexbox('选择你所在的桌','',['1','2','3','4','5','6'])
z=easygui.indexbox('选择你所在的桌的周边还是右边','',['左边','右边'])
print(num,date,g,0,c,end='')
if(c<=10):
    print(0,end='')
with open('a.in','w') as temp:
    temp.write(str(x+z)+' '+str(z))
