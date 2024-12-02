import cv2

image = cv2.imread('test.png')  # 确保图像文件在当前目录下

if image is None:
    print("can`t read image.")
else:
    height, width, channels = image.shape

    # 打印图像宽度和高度
    print(f"ImageWidth: {width} pixes")
    print(f"ImageHeight: {height} pixes")
    print(f"ImageChannel: {channels}")
