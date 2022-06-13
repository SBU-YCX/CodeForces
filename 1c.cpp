#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

const double PI = acos(-1.0);
const double eps = 1e-2;

double dist(double ax, double ay, double bx, double by)
{
	double dx = ax - bx, dy = ay - by;
	return sqrt(dx * dx + dy * dy);
}

double s(double a, double b, double c)
{
	double cc = (a + b + c) / 2;
	return sqrt(cc * (cc - a) * (cc - b) * (cc - c));
}

double angle(double a, double b, double c)
{
	return acos((a * a + b * b - c * c) / (2 * a * b));
}

double fgcd(double a, double b)
{
	if (fabs(b) < eps)
		return a;
	return fgcd(b, fmod(a, b));
}

int main()
{
	double ax, ay, bx, by, cx, cy;
	cin >> ax >> ay >> bx >> by >> cx >> cy;
	double ab = dist(ax, ay, bx, by), ac = dist(ax, ay, cx, cy), bc = dist(bx, by, cx, cy);
	double anga = angle(ab, ac, bc), angb = angle(ab, bc, ac), angc = angle(ac, bc, ab);
	double r = ab * ac * bc / (4 * s(ab, ac, bc));
	anga *= 2.0;
	angb *= 2.0;
	angc *= 2.0;
	double angd = fgcd(angc, fgcd(anga, angb));
	double ans = r * r * sin(angd) * PI / angd;
	cout << fixed << setprecision(7) << ans << endl;
	return 0;
}