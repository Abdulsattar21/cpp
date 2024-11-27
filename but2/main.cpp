#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;
float X_mini = 0, X_max = 300, Y_mini = 0, Y_max = 150;
float dist(float x1, float y1, float x2, float y2);
void rand_set_xy(float *x,float *y);
bool check_for_boundary(float x,float y);

int main()
{
    srand(time(0));
    float x1 = 50, y1 = 50, x2 =250, y2 =100;
    for (int count = 0; count <= 1000; count++)
    {

        if (count % 50 == 0){
            cout << "(" << x1 << "," << y1 << ")(" << x2 << "," << y2 << ")" << " distance: " << dist(x1, y1, x2, y2) << " at: t" << count << endl;
        }
        rand_set_xy(&x1, &y1);
        rand_set_xy(&x2, &y2);
        if (count == 250 ||count == 500 || count == 750){
            if (floor(dist(x1, y1, x2, y2) <= 10))
                cout << "1st and 2nd person meet at the end" << endl;
            else
                cout << "1st and 2nd person didn't meet at the end" << endl;
        }
    }
    if (floor(dist(x1, y1, x2, y2) <= 10))
        cout << "1st and 2nd person will meet at the end" << endl;
    else
        cout << "1st and 2nd person will not meet at the end" << endl;

    return 0;
}

float dist(float x1, float y1, float x2, float y2)
{
    float d = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));
    return d;
}
bool check_for_boundary(float x,float y)
{
    float d = 10.0;
    for (float i = x; i <= X_max; i += 0.1)
    {
        if ((dist(x, y, i, Y_mini) < d) || (dist(x, y, i, Y_max) < d))
            return false;
    }
    for (float i = x;i >= X_mini; i -= 0.1)
    {
        if ((dist(x, y, i, Y_mini) < d) || (dist(x, y, i, Y_max) < d))
            return false;
    }
    for (float i = y; i <= Y_max; i+= 0.1)
    {
        if ((dist(x, y, X_mini, i) < d) || (dist(x, y, X_max, i) < d))
            return false;
    }
    for (float i = y; i >= Y_mini; i-= 0.1)
    {
        if ((dist(x, y, X_mini, i) < d) || (dist(x, y, X_max, i) < d))
            return false;
    }
    return true;
}
void rand_set_xy(float *x,float *y)
{
    float tempx = *x, tempy = *y;
    int choice = rand() % 5 + 1;
    switch (choice)
    {
        case 1:
            for (float i = tempx; i <= tempx + 5, i <= X_max; i += 0.1)
            {
                for (float j = tempy; j <= tempy + 5, j <= Y_max; j += 0.1)
                {
                    if (floor(dist(i, j, tempx, tempy)) == 5)
                    {
                        if (check_for_boundary(i, j))
                        {
                            *x = i;
                            *y = j;
                            return;
                        }
                    }
                    if (floor(dist(i, j, tempx, tempy)) >= 5) {
                        i = tempx + 5;
                        break;
                    }
                }

            }
        case 2:
            for (float i = tempx; i <= tempx + 5, i <= X_max; i += 0.1)
            {
                for (float j = tempy; j >= tempy - 5, j >= Y_mini; j -= 0.1)
                {
                    //cout << floor(dist(i, j, tempx, tempy)) << endl;
                    if (floor(dist(i, j, tempx, tempy)) == 5)
                    {
                        if (check_for_boundary(i, j))
                        {
                            *x = i;
                            *y = j;
                            return;
                        }
                    }
                    if (floor(dist(i, j, tempx, tempy)) >= 5) {
                        i = tempx + 5;
                        break;
                    }
                }

            }
        case 3:
            for (float i = tempx; i >= tempx - 5, i >= X_mini; i -= 0.1)
            {
                for (float j = tempy; j <= tempy + 5, j <= Y_max; j += 0.1)
                {
                    //cout << floor(dist(i, j, tempx, tempy)) << endl;
                    if (floor(dist(i, j, tempx, tempy)) == 5)
                    {
                        if (check_for_boundary(i, j))
                        {
                            *x = i;
                            *y = j;
                            return;
                        }
                    }
                    if (floor(dist(i, j, tempx, tempy)) >= 5) {
                        i = tempx - 5;
                        break;
                    }
                }

            }
        case 4:
            for (float i = tempx; i >= tempx - 5, i >= X_mini; i -= 0.1)
            {
                for (float j = tempy; j >= tempy - 5, j >= Y_mini; j -= 0.1)
                {
                    //cout << floor(dist(i, j, tempx, tempy)) << endl;
                    if (floor(dist(i, j, tempx, tempy)) == 5)
                    {
                        if (check_for_boundary(i, j))
                        {
                            *x = i;
                            *y = j;
                            return;
                        }
                    }
                    if (floor(dist(i, j, tempx, tempy)) >= 5) {
                        i = tempx - 5;
                        return rand_set_xy(x, y);
                    }

                }
            }
    }
}
