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
docker build . -f Dockerfile-4.10.0-py38-ubuntu20.04 -t opencv:4.10.0-py38-ubuntu20.04
```

# Run
``` shell

```