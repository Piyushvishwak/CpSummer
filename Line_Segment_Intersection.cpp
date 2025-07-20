#include <iostream>
using namespace std;

long long orient(long long ax, long long ay, long long bx, long long by, long long cx, long long cy) {
    return (bx - ax)*(cy - ay) - (by - ay)*(cx - ax);
}

bool onSegment(long long ax, long long ay, long long bx, long long by, long long px, long long py) {
    return min(ax, bx) <= px && px <= max(ax, bx) && min(ay, by) <= py && py <= max(ay, by);
}

bool segmentsIntersect(long long ax, long long ay, long long bx, long long by, long long cx, long long cy, long long dx, long long dy) {
    long long o1 = orient(ax, ay, bx, by, cx, cy);
    long long o2 = orient(ax, ay, bx, by, dx, dy);
    long long o3 = orient(cx, cy, dx, dy, ax, ay);
    long long o4 = orient(cx, cy, dx, dy, bx, by);

    if ((o1 > 0 && o2 < 0 || o1 < 0 && o2 > 0) && (o3 > 0 && o4 < 0 || o3 < 0 && o4 > 0))
        return true;

    if (o1 == 0 && onSegment(ax, ay, bx, by, cx, cy)) return true;
    if (o2 == 0 && onSegment(ax, ay, bx, by, dx, dy)) return true;
    if (o3 == 0 && onSegment(cx, cy, dx, dy, ax, ay)) return true;
    if (o4 == 0 && onSegment(cx, cy, dx, dy, bx, by)) return true;

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long ax, ay, bx, by, cx, cy, dx, dy;
        cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;

        cout << (segmentsIntersect(ax, ay, bx, by, cx, cy, dx, dy) ? "YES\n" : "NO\n");
    }
    return 0;
}
