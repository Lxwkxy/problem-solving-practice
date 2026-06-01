#include <vector>
#include <utility>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            int r = image.size() - 1;
            for (int l = 0; l < r; l++) {
                swap(image[i][l], image[i][r--]);
            }
        }

        for (int i = 0; i < image.size(); i++) {
            for (int j = 0; j < image.size(); j++) {
                if (image[i][j] == 0) image[i][j] = 1;
                else image[i][j] = 0;
            }
        }
        return image;
    }
};