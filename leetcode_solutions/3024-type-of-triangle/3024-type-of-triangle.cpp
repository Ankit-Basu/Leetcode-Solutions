class Solution {
public:
    std::string triangleType(std::vector<int>& sides) {
        std::sort(sides.begin(), sides.end());

        if (sides[0] + sides[1] <= sides[2]) {
            return "none";
        }
        if (sides[0] == sides[2]) {
            return "equilateral";
        }
        if (sides[0] == sides[1] || sides[1] == sides[2]) {
            return "isosceles";
        }
        return "scalene";
    }
};