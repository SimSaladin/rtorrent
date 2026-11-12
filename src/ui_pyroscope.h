#ifndef UI_PYROSCOPE_H
#define UI_PYROSCOPE_H

#include <string>
#include "display/color_map.h"

namespace ps {

enum AlertKind {
    // Sync changes to cmd-ref.html#term-d-message-alert
    ALERT_NORMAL,
    ALERT_NORMAL_CYCLING, // Tried all trackers
    ALERT_NORMAL_GHOST, // no data
    ALERT_GENERIC,
    ALERT_TIMEOUT,
    ALERT_CONNECT,
    ALERT_REQUEST,
    ALERT_GONE,
    ALERT_PERMS,
    ALERT_DOWN,
    ALERT_DNS,
    ALERT_MAX
};

using enum display::ColorKind;

enum VirtualColorKind {
  COL_DOWN_TIME = 90,
  COL_PRIO,
  COL_STATE,
  COL_RATIO,
  COL_PROGRESS,
  COL_ALERT,
  COL_UP_TIME,
  COL_SYS_MAX,
};

// Return a range with a distance of no more than __distance and
// between __first and __last, centered on __middle1.
template <typename _InputIter, typename _Distance>
std::pair<_InputIter, _InputIter>
advance_bidirectional(_InputIter __first, _InputIter __middle1, _InputIter __last, _Distance __distance) {
  _InputIter __middle2 = __middle1;

  do {
    if (!__distance)
      break;

    if (__middle2 != __last) {
      ++__middle2;
      --__distance;

    } else if (__middle1 == __first) {
      break;
    }

    if (!__distance)
      break;

    if (__middle1 != __first) {
      --__middle1;
      --__distance;

    } else if (__middle2 == __last) {
      break;
    }

  } while (true);

  return std::make_pair(__middle1, __middle2);
}

} // namespace

// defined in command_pyroscope.cc (exported here so we only have to patch in one .h)
extern void add_capability(const char* name);
extern size_t u8_length(const std::string& text);
extern std::string u8_chop(const std::string& text, size_t glyphs);

#endif
