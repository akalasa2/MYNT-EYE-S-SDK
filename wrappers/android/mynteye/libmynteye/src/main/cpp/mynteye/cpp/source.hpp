// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from mynteye_types.djinni

#pragma once

#include <functional>

namespace mynteye_jni {

enum class Source : int {
    /** Video streaming of stereo, color, depth, etc. */
    VIDEO_STREAMING,
    /** Motion tracking of IMU (accelerometer, gyroscope) */
    MOTION_TRACKING,
    /** Enable everything together */
    ALL,
};

}  // namespace mynteye_jni

namespace std {

template <>
struct hash<::mynteye_jni::Source> {
    size_t operator()(::mynteye_jni::Source type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
