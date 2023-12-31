#pragma once

#include <string>

#include "IPhotoDevice.h"

class Camera : public IPhotoDevice
{
public:
    Camera(int year, std::string make, std::string model);
    virtual ~Camera() {};
    virtual void takePhoto();

protected:
    int year_;
    std::string make_;
    std::string model_;
};