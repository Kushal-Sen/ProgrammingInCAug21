#include<stdio.h>
struct Coordinates2d
{
	int x;
	int y;
};
struct Coordinates2d difference(struct Coordinates2d pointA,struct Coordinates2d pointB)
{
	
}
int main()
{
	struct Coordinates2d pointA;
	struct Coordinates2d pointB;
	struct Coordinates2d pointC;
	
	pointA.x = 5;
	pointA.y = 7;
	
	pointB.x = 3;
	pointB.y = 4;
	
	pointC.x = pointA.x - pointB.x;
	pointC.y = pointA.y - pointB.y;
	
	printf("x:%d y:%d",pointC.x ,pointC.y);


}