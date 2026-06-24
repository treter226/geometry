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
        for (int z = 0; z < chars; z++)
        {
            printf("@");
        }
        for (int z = 0; z < width - chars; z++)
        {
            printf(" ");
        }

        printf("\n");
    }
}

void draw_isoscelestriangle(int height)
 {
    for (int i = 1; i <= height; i++)
    {

    for (int j = 1; j <= height - i; j++)
    {
        printf(" ");
    }
    for (int k = 1; k <= 2 * i - 1; k++)
    {
        printf("@");
    }
    printf("\n");
    }
}
void drawRhomb(int width) 
{
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < width - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("@");
        }

        printf("\n");
    }

    for (int i = width - 2; i >= 0; i--)
    {
        for (int j = 0; j < width - i - 1; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("@");
        }

        printf("\n");
    }
}


int main()
{
int  height, width;
int choise;
int triangletyp;

    printf("выбирите фигуру 1 - прямоугольник, 2 - треугольник, 3 - ромб:\n");
    scanf("%d", &choise);
        
    if ( choise == 1)
    {
        printf("введите ширину:\n");
        scanf("%d", &width);
        printf("введите высоту:\n");
        scanf("%d", &height);
        draw_rectangle(width, height);
    }
        
    if (choise == 2)
    {

        printf("Какой треугольник хотите нарисовать?\n");
        printf("1 — прямоугольный 2 - равнобедренный\n");
        scanf("%d", &triangletyp);


        if (triangletyp == 1) 
        {
            printf("Введите высоту: ");
            scanf("%d", &height);

            printf("Введите ширину: ");
            scanf("%d", &width);

            draw_triangle(height, width);

        return 0;
        }
        if (triangletyp == 2)
        {
        printf("введите высоту:\n");
        scanf("%d", &height);
        draw_isoscelestriangle(height);

        }
        else 
        {
            printf("Неверный выбор типа треугольника!\n");
        }
    }
    if(choise == 3)
    {
    printf("Введите ширину ромба:\n");
    scanf("%d", &width);
    drawRhomb(width);
    }
}
