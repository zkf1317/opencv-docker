import cv2

image_path = 'test.png'
image = cv2.imread(image_path)

if image is None:
    print("Can`t read image.")
else:
    print(f"Read image ok. image path: {image_path}")
    height, width, channels = image.shape

    # 打印图像宽度和高度
    print(f"Image width: {width} pixes")
    print(f"Image height: {height} pixes")
    print(f"Image channel: {channels}")
