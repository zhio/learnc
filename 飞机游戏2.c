#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
int position_x,position_y;//飞机坐标系
int high,width;//游戏画面尺寸
int bullet_x,bullet_y;//子弹
int enemy_x,enemy_y;//敌机位置
int score;//游戏得分

void gotoxy(int x,int y)//类似于清屏函数，光标移动到原点位置进行重画
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle,pos);
}

void startup()
{
    high = 18;
    width = 30;

    position_x = high/2;
    position_y = width/2;
    
    bullet_x=-1;
    bullet_y=bullet_y;

    enemy_x=0;
    enemy_y=2;

    score = 0;
}
void show() //显示画面
{
    int i,j;
    gotoxy(0,0);  // 光标移动到原点位置进行重画清屏
    for (i=0;i<high;i++)
    {
        for (j=0;j<width;j++)
        {
            if((i==position_x)&&(j==position_y))
                printf("*");//输出飞机
            else if((i==bullet_x)&&(j==bullet_y))
                printf("|");//输出子弹
            else if((i==enemy_x)&&(j==enemy_y))
                printf("@");//输出敌机
            else
                printf(" ");//输出空格
        }
        printf("\n");
    }
    printf("得分：%d\n",score);
}
void updataWithoutInput()//与用户输入无关的更新
{
    if((bullet_x==enemy_x)&&(bullet_y==enemy_y))
    {
        score++;
        enemy_x=0;
        bullet_x=-1;
        enemy_y=rand()%width;//生成随机数
    }
    static int speed=0;//控制飞机下落速度
    if(speed<20)
        speed++;
    if(speed==20)
    {
        if(enemy_x>high)
        {
            enemy_x=0;
            enemy_y=rand()%width;//生成随机数
        }
        else
        {
            if(speed==20)
            {
                enemy_x++;
                speed = 0;
            }
        }
    }
    if(bullet_x>-1)
        bullet_x--;
    
}
void updataWithput()//与用户输入有关的更新
{    
	char input;
    if(kbhit()) //当按键时执行
    {
        input = getch();
        if(input=='a');
            position_y--;
        if(input=='d')
            position_y++;
        if(input=='w');
            position_x--;
        if(input=='s')
            position_x++;
        if(input==' ')
        {
            bullet_x=position_x-1;
            bullet_y=position_y;
        }
	}
}
int main()
{
    startup();//数据初始化
    while(1)//游戏循环执行
    {
        show(); //显示画面
        updataWithoutInput();//与用户输入无关的更新
        updataWithput();//与用户输入有关的更新
    }
    return 0;
}