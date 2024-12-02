# OpenCV Docker Image

This repository contains Dockerfiles for creating Docker images of the [OpenCV](https://opencv.org/) computer vision library. 

# Build

Choose the Dockerfile you need to build. 

Dockerfile naming: Dockerfile-4.10.0-cu118-py38-ubuntu20.04  
4.10.0 means the version of opencv  
cu118 means cuda 11.8  
py38 means python3.8  
ubuntu20.04 means ubuntu 20.04  

``` shell
# build opencv-4.10.0 without cuda, python3.8, os ubuntu20.04
docker build . -f Dockerfile-4.10.0-py38-ubuntu20.04 -t opencv:4.10.0-py38-ubuntu20.04

# build opencv-4.10.0 with cuda-11.8, python3.8, os ubuntu20.04
docker build . -f Dockerfile-4.10.0-cu118-py38-ubuntu20.04 -t opencv:4.10.0-cu118-py38-ubuntu20.04
```

# Test
## Test opencv python

Test opencv-python, the docker is working correctly if the following is displayed.

``` shell
docker run -v .:/workspace opencv:4.10.0-py38-ubuntu20.04 /bin/bash -c "cd /workspace && python3 test.py"
```

## Test opencv c++
``` shell

```