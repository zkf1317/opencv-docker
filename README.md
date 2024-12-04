# OpenCV Docker Image

This repository contains Dockerfiles for creating Docker images of the [OpenCV](https://opencv.org/) computer vision library. 

# Run

Run the prebuilt docker to take a look

Clone this repo
``` shell
git clone https://github.com/zkf1317/opencv-docker.git
cd opencv-docker
```

Without CUDA
``` shell
docker run -v .:/workspace zkf1317/opencv:4.10.0-py38-ubuntu20.04 /bin/bash -c "cd /workspace && python3 4.10.0/test.py"
```

With CUDA
``` shell
docker run -v .:/workspace --runtime nvidia zkf1317/opencv:4.10.0-cu118-py38-ubuntu20.04 /bin/bash -c "cd /workspace && python3 4.10.0/test.py"
```

# Build

Choose the Dockerfile you need to build. 

Dockerfile naming: 4.10.0/Dockerfile-cu118-py38-ubuntu20.04  
4.10.0 is a directory, means the version of opencv  
cu118 means cuda 11.8  
py38 means python3.8  
ubuntu20.04 means ubuntu 20.04  

``` shell
# build opencv-4.10.0 without cuda, python3.8, os ubuntu20.04
docker build . -f 4.10.0/Dockerfile-py38-ubuntu20.04 -t opencv:4.10.0-py38-ubuntu20.04

# build opencv-4.10.0 with cuda-11.8, python3.8, os ubuntu20.04
docker build . -f 4.10/Dockerfile-cu118-py38-ubuntu20.04 -t opencv:4.10.0-cu118-py38-ubuntu20.04
```

# Test
## Test opencv python

Test opencv-python

``` shell
docker run -v .:/workspace opencv:4.10.0-py38-ubuntu20.04 /bin/bash -c "cd /workspace && python3 4.10.0/test.py"
```

The docker is working correctly if the following is displayed.

``` shell
Read image ok. image path: test.png
Image width: 640 pixes
Image height: 424 pixes
Image channel: 3
```

## Test opencv c++

Test opencv-c++

``` shell
docker run -v .:/workspace opencv:4.10.0-py38-ubuntu20.04 /bin/bash -c \
    "cd /workspace && cd 4.10.0 && mkdir build && cd build && cmake .. && make && cd /workspace && 4.10.0/build/opencv_docker_test && rm -rf 4.10.0/build"
```

The docker is working correctly if the following is displayed.

``` shell
......
Read image ok. image path: test.png
Image width: 640 pixes
Image height: 424 pixes
Image channel: 3
```

# Test CUDA
## Test opencv python with cuda

Test opencv-python with cuda

``` shell
docker run -v .:/workspace --runtime nvidia opencv:4.10.0-cu118-py38-ubuntu20.04 /bin/bash -c "cd /workspace && python3 4.10.0/test.py"
```

The docker is working correctly if the following is displayed.

``` shell
Read image ok. image path: test.png
Image width: 640 pixes
Image height: 424 pixes
Image channel: 3
CUDA is enabled.
```

## Test opencv c++

Test opencv-c++ with cuda

``` shell
docker run -v .:/workspace --runtime nvidia opencv:4.10.0-cu118-py38-ubuntu20.04 /bin/bash -c \
    "cd /workspace && cd 4.10.0 && mkdir build && cd build && cmake .. && make && cd /workspace && 4.10.0/build/opencv_docker_test && rm -rf 4.10.0/build"
```

The docker is working correctly if the following is displayed.

``` shell
......
Read image ok. image path: test.png
Image width: 640 pixes
Image height: 424 pixes
Image channel: 3
CUDA is enabled.
```
