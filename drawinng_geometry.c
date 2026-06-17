#include <stdio.h>

void draw_rectangle(int width, int height)
{
    printf("Прямоугольник:\n");

    for (int x = 0; x < height; x++)
    {
        for (int y = 0; y < width; y++)
        {
            printf("#");
        }
        printf("\n");
        
    }
}

void draw_triangle(int height, int width)
{
    for (int row = 1; row <= height; row++)
    {
        int chars = row * width / height;

        for (int z = 0; z < width - chars; z++)
        {
            printf(" ");
        }
        for (int z = 0; z < chars; z++)
        {
            printf("@");
        }
        printf("\n");
    }
}

int main()
{
int hight, width;
int choise;
int triangletyp;

    printf("выбирите фигуру 1 - прямоугольник, 2 - треугольник, 3 - ромб:\n");
    scanf("%d", &choise);
        
    if ( choise == 1)
    {
        printf("введите ширину:\n");
        scanf("%d", &width);
        printf("введите высоту:\n");
        scanf("%d", &hight);
        draw_rectangle(width,hight);
    }
        
    if (choise == 2)
    {

        printf("Какой треугольник хотите нарисовать?\n");
        printf("1 — прямоугольный\n");
        scanf("%d", &triangletyp);


        if (triangletyp == 1) 
        {
            printf("Введите высоту: ");
            scanf("%d", &hight);

            printf("Введите ширину: ");
            scanf("%d", &width);

            draw_triangle(hight, width);

    return 0;
        }
        else 
        {
            printf("Неверный выбор типа треугольника!\n");
        }
    }
}
