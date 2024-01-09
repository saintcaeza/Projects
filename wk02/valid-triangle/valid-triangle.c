#include <stdio.h>
#include <cs50.h>

bool triangle_sides(int sides[]);

int main(void)
{
    //take 3 sides of triangle.
    int n = 3;
    int sides[n];
    do
    {
        for (int i = 0; i < n; i++)
        {
            sides[i] = get_int("what is the length of a side? ");
            printf("%i\n", sides[i]);
        }
    }
    while (n < 3);

}

bool triangle_sides(int sides[])
{
    //Check if the sides are capable of making a triangle
    if ((sides[0] + sides[1]) > sides[2]) || ((sides[1] + sides[2]) > sides[0])
    {
        return true;
    }
    else
    {
        return false;
    }
}
//Output true or false depending on whether those three lengths are capable of makeing a triangle
//if a+b >c || b+c > a output false