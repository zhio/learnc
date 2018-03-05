#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
int high,width;//游戏画面尺寸
int ball_x,ball_y;
int ball_vx,ball_vy;/小球的速度
int position_x,position_y;//挡板的中心坐标
int radius;//挡板的半径
int left,right;//挡板的左右边界
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
    width = 25;

    ball_x=1;
    ball_y=width/2;

    ball_vx=1;
    ball_vy=1;

    position_x=high;
    position_y=width/2;
    radius = 5;
    left=position_y-radius;
    right=position_y+radius;
}
void show() //显示画面
{
    int i,j;
    gotoxy(0,0);  // 光标移动到原点位置进行重画清屏
    for (i=0;i<=high+1;i++)
    {
        for (j=0;j<width;j++)
        {
            if((i==ball_x)&&(j==ball_y))
                printf("*\n");
            else if(j==width)
                printf("|");
            else if (i==high+1)
                printf("-");
            else if ((i==high)&&(j>=left)&&(j<=right))
                printf("*")
            else
                printf(" ");    
        }
        printf("\n");
    }
    printf("得分：%d\n",score);
}
void updataWithoutInput()//与用户输入无关的更新
{
    //根据速度更新小球的位置
    ball_x=ball_x+ball_vx;
    ball_y=ball_y+ball_vy;
    //碰到边界后改变速度方向
    if((ball_x==0)||ball_x==high-1))
        ball_vx=-ball_vx;
    if((ball_y==0)||(ball_y=width-1))
        ball_vy=-ball_vy;

}
void updataWithput()//与用户输入有关的更新
{    
	char input;
    if(kbhit()) //当按键时执行
    {
        input = getch();
        if (input=='a')
            position_y--;
            left=position_y-radius;
            right=position_y+radius;
        if (input=='d')
            position_y++;
            left=position_y-radius;
            right=position_y+radius;     
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