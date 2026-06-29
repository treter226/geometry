#include <stdio.h>

struct Size
{
int width;
int height;
};


void input_rectangle_parameters(struct Size* size)
{
    printf("введите ширину:\n");
    scanf("%d", &(size->width));
    printf("введите высоту:\n");
    scanf("%d", &(size->height));
}


void draw_rectangle(struct Size* size)
{
    printf("Прямоугольник:\n");

    for (int x = 0; x < size->height; x++)
    {
        for (int y = 0; y < size->width; y++)
        {
            printf("#");
        }
        printf("\n");
        
    }
}

void input_triangle_parameters(struct Size* size)
{
    printf("Введите высоту: ");
    scanf("%d", &(size->height));
    printf("Введите ширину: ");
    scanf("%d", &(size->width));
}

void draw_triangle(struct Size* size)
{
    for (int row = 1; row <= size->height; row++)
    {
        int chars = row * size->width / size->height;
        for (int z = 0; z < chars; z++)
        {
            printf("@");
        }
        for (int z = 0; z < size->width - chars; z++)
        {
            printf(" ");
        }

        printf("\n");
    }
}

void input_isosceles_triangle(struct Size* size)
{
    printf("введите высоту:\n");
    scanf("%d", &(size->height));
}

void draw_isosceles_triangle(struct Size* size)
 {
    for (int i = 1; i <= size->height; i++)
    {

    for (int j = 1; j <= size->height - i; j++)
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

void input_rombs_parameters(struct Size* size)
{
    printf("Введите ширину ромба:\n");
    scanf("%d", &(size->width));
}

void drawRhomb(struct Size* size) 
{
    for (int x = 0; x < size->width; x++)
    {
        for (int z = 0; z < size->width - x - 1; z++)
        {
            printf(" ");
        }
        for (int y = 0; y < 2 * x + 1; y++)
        {
            printf("@");
        }

        printf("\n");
    }

    for (int x = size->width - 2; x >= 0; x--)
    {
        for (int z = 0; z < size->width - x - 1; z++)
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
    int choise;
    int triangletyp;
    struct Size size;

    printf("выбирите фигуру 1 - прямоугольник, 2 - треугольник, 3 - ромб:\n");
    scanf("%d", &choise);

    switch(choise)
    {
        case 1:
        input_rectangle_parameters(&size);
        draw_rectangle(&size);
        break;
    
        
        case 2:
        printf("Какой треугольник хотите нарисовать?\n");
        printf("1 — прямоугольный 2 - равнобедренный\n");
        scanf("%d", &triangletyp);

        switch(triangletyp)
        {
            case 1:
            input_triangle_parameters(&size);
            draw_triangle(&size);
            break;
        
            case 2:
            input_isosceles_triangle(&size);
            draw_isosceles_triangle(&size);
            break;
        
            default:
            printf("Неверный выбор типа треугольника!\n");
            break;
        }
        break;
    
    case 3:
    input_rombs_parameters(&size);
    drawRhomb(&size);
    break;

    default:
    printf("неверный выбор типа фигуры!\n");
    break;
    }
}
