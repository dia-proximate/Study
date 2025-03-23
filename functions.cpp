#include <opencv2/opencv.hpp>
#include <iostream>

void readImage(const std::string& imagePath) {
    // Read the image file
    cv::Mat image = cv::imread(imagePath, cv::IMREAD_COLOR);

    // Check for failure
    if (image.empty()) {
        std::cout << "Could not open or find the image" << std::endl;
        return;
    }

    // Display the image
    cv::imshow("Image", image);

    // Wait for any keystroke in the window
    cv::waitKey(0);
}

int main() {
    std::string imagePath = "path_to_your_image.jpg";
    readImage(imagePath);
    return 0;
}