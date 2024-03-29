#ifndef __CAMERA_ENGINE_H__
#define __CAMERA_ENGINE_H__
#include <android/native_activity.h>
#include <android/native_window.h>
#include <android/native_window_jni.h>
#include <jni.h>

#include <functional>
#include <thread>

#include "camera_manager.h"

/**
 * CameraAppEngine
 */
class CameraAppEngine {
 public:
  explicit CameraAppEngine(JNIEnv* env, jobject instance, jint w, jint h);
  ~CameraAppEngine();

  // Manage NDKCamera Object
  void CreateCameraSession(jobject surface);
  void StartPreview(bool start);
  const ImageFormat& GetCompatibleCameraRes() const;
  int32_t GetCameraSensorOrientation(int32_t facing);
  jobject GetSurfaceObject();

 private:
  JNIEnv* env_;
  jobject javaInstance_;
  int32_t requestWidth_;
  int32_t requestHeight_;
  jobject surface_;
  NDKCamera* camera_;
  ImageFormat compatibleCameraRes_;
};
#endif  // __CAMERA_ENGINE_H__
