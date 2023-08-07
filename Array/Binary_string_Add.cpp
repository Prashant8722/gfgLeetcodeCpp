#include <iostream>
#include <string>

class Solution {
public:
    std::string addBinary(std::string A, std::string B) {
        int i = A.length() - 1;
        int j = B.length() - 1;
        int carry = 0;
        std::string result;

        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;

            if (i >= 0) {
                sum += A[i] - '0';
                i--;
            }
            if (j >= 0) {
                sum += B[j] - '0';
                j--;
            }

            result = std::to_string(sum % 2) + result;
            carry = sum / 2;
        }
size_t pos = result.find_first_not_of('0');
        if (pos != std::string::npos) {
            result = result.substr(pos);
        } else {
            result = "0";
        }
        return result;
    }
};

int main() {
    std::string A = "000110000000000001001001";
    std::string B = "00000000000000000000000110101";

    Solution solution;
    std::string result = solution.addBinary(A, B);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
