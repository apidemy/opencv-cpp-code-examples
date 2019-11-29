#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

int main()
{
    cv::Mat image;

    // read an image
    image = cv::imread("lena.jpg");

    // check if the image is readed
    if(image.empty())
    {
        std::cout<<"Error: cannot read image." << std::endl;
        return 0;
    }

    std::cout << "This image is " << image.rows << " x "
        << image.cols << std::endl;

    // create a named-window to show the image
    cv::namedWindow("Input Image");
    cv::imshow("Input Image", image);


    cv::Mat result;

    // flip the image horizontally
    cv::flip(image, result, 1 );

    cv::namedWindow("Horizontal Image");
    cv::imshow("Horizontal Image", result);


    // flip the image vertically
    cv::flip(image, image, -1);
    cv::imshow("vertical image", image);


    cv::imwrite("output.jpg", result);

    cv::waitKey(0);
}
