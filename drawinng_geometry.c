#include <stdio.h>

void input_rectangle_parameters(int* ptr_height, int* ptr_width)
{
    printf("введите ширину:\n");
    scanf("%d", ptr_width);
    printf("введите высоту:\n");
    scanf("%d", ptr_height);
}


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

void input_triangle_parameters(int* ptr_height, int* ptr_width)
{
    printf("Введите высоту: ");
    scanf("%d", ptr_height);
    printf("Введите ширину: ");
    scanf("%d", ptr_width);
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

void input_isosceles_triangle(int* ptr_height)
{
    printf("введите высоту:\n");
    scanf("%d", ptr_height);
}

void draw_isosceles_triangle(int height)
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

void input_rombs_parameters(int* ptr_width)
{
    printf("Введите ширину ромба:\n");
    scanf("%d", ptr_width);
}

void drawRhomb(int width) 
{
    for (int x = 0; x < width; x++)
    {
        for (int z = 0; z < width - x - 1; z++)
        {
            printf(" ");
        }
        for (int y = 0; y < 2 * x + 1; y++)
        {
            printf("@");
        }

        printf("\n");
    }

    for (int x = width - 2; x >= 0; x--)
    {
        for (int z = 0; z < width - x - 1; z++)
        {
            printf(" ");
        }

        for (int y = 0; y < 2 * x + 1; y++)
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
    int z;

    printf("выбирите фигуру 1 - прямоугольник, 2 - треугольник, 3 - ромб:\n");
    scanf("%d", &choise);

    switch(choise)
    {
        case 1:
        input_rectangle_parameters(&height, &width);
        draw_rectangle(width, height);
        break;
    
        
        case 2:
        printf("Какой треугольник хотите нарисовать?\n");
        printf("1 — прямоугольный 2 - равнобедренный\n");
        scanf("%d", &triangletyp);

        switch(triangletyp)
        {
            case 1:
            input_triangle_parameters(&height, &width);
            draw_triangle(height, width);
            break;
        
            case 2:
            input_isosceles_triangle(&height);
            draw_isosceles_triangle(height);
            break;
        
            default:
            printf("Неверный выбор типа треугольника!\n");
            break;
        }
        break;
    
    case 3:
    input_rombs_parameters(&width);
    drawRhomb(width);
    break;
    }
}
