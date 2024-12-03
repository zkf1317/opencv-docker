#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    std::string image_path = "test.png";

    // read image
    cv::Mat image = cv::imread(image_path);

    // check if image is loaded
    if (image.empty()) {
        std::cout << "Can't read image." << std::endl;
    } else {
        std::cout << "Read image ok. image path: " << image_path << std::endl;

        // get width, height and channels
        int height = image.rows;
        int width = image.cols;
        int channels = image.channels();

        std::cout << "Image width: " << width << " pixels" << std::endl;
        std::cout << "Image height: " << height << " pixels" << std::endl;
        std::cout << "Image channels: " << channels << std::endl;
    }

    // cuda test
    int cuda_device_count = cv::cuda::getCudaEnabledDeviceCount();
    if (cuda_device_count > 0) {
        std::cout << "CUDA is enabled." << std::endl;
    }

    return 0;
}
