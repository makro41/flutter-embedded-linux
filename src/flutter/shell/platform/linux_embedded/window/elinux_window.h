// Copyright 2021 Sony Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef FLUTTER_SHELL_PLATFORM_LINUX_EMBEDDED_WINDOW_ELINUX_WINDOW_H_
#define FLUTTER_SHELL_PLATFORM_LINUX_EMBEDDED_WINDOW_ELINUX_WINDOW_H_

#include "flutter/shell/platform/linux_embedded/public/flutter_elinux.h"

namespace flutter {

class ELinuxWindow {
 public:
  ELinuxWindow() = default;
  virtual ~ELinuxWindow() = default;

 protected:
  virtual bool IsValid() const = 0;

  uint32_t GetCurrentWidth() const { return view_properties_.width; }

  uint32_t GetCurrentHeight() const { return view_properties_.height; }

  void SetRotation(FlutterDesktopViewRotation rotation) {
    if (rotation == FlutterDesktopViewRotation::kRotation_90) {
      current_rotation_ = 90;
    } else if (rotation == FlutterDesktopViewRotation::kRotation_180) {
      current_rotation_ = 180;
    } else if (rotation == FlutterDesktopViewRotation::kRotation_270) {
      current_rotation_ = 270;
    } else {
      current_rotation_ = 0;
    }
  }

  FlutterDesktopViewProperties view_properties_;
<<<<<<< HEAD
  double current_scale_ = 1.0;
  uint16_t current_rotation_ = 0;
=======
  double current_scale_ = 1.6;
>>>>>>> 1712997 (change pixel rate to 1.6)
  double pointer_x_ = 0;
  double pointer_y_ = 0;
  std::string clipboard_data_ = "";
};

}  // namespace flutter

#endif  // FLUTTER_SHELL_PLATFORM_LINUX_EMBEDDED_WINDOW_ELINUX_WINDOW_H_
