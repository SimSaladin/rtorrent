#ifndef RTORRENT_DISPLAY_COLOR_MAP_H
#define RTORRENT_DISPLAY_COLOR_MAP_H

#include <array>
#include <map>

#if defined(HAVE_NO_NCURSES)
#include "curses_stub.h"
#else
#include <curses.h>
#endif

namespace display {

enum ColorKind {
  RCOLOR_NCURSES_DEFAULT, // Color 0 is reserved by ncurses and cannot be changed
  RCOLOR_TITLE,
  RCOLOR_FOOTER,
  RCOLOR_FOCUS,
  RCOLOR_LABEL,
  RCOLOR_INFO,
  RCOLOR_ALARM,
  RCOLOR_COMPLETE,
  RCOLOR_SEEDING,
  RCOLOR_STOPPED,
  RCOLOR_QUEUED,
  RCOLOR_INCOMPLETE,
  RCOLOR_LEECHING,
  RCOLOR_ODD,
  RCOLOR_EVEN,
  // BEGIN PS COLORS
  RCOLOR_CUSTOM1,
  RCOLOR_CUSTOM2,
  RCOLOR_CUSTOM3,
  RCOLOR_CUSTOM4,
  RCOLOR_CUSTOM5,
  RCOLOR_CUSTOM6,
  RCOLOR_CUSTOM7,
  RCOLOR_CUSTOM8,
  RCOLOR_CUSTOM9,
  RCOLOR_PROGRESS0,
  RCOLOR_PROGRESS20,
  RCOLOR_PROGRESS40,
  RCOLOR_PROGRESS60,
  RCOLOR_PROGRESS80,
  RCOLOR_PROGRESS100,
  RCOLOR_PROGRESS120,
  // END PS COLORS
  RCOLOR_MAX,
};

static const std::array<const char*, RCOLOR_MAX> color_vars{
  nullptr,
  "ui.color.title",
  "ui.color.footer",
  "ui.color.focus",
  "ui.color.label",
  "ui.color.info",
  "ui.color.alarm",
  "ui.color.complete",
  "ui.color.seeding",
  "ui.color.stopped",
  "ui.color.queued",
  "ui.color.incomplete",
  "ui.color.leeching",
  "ui.color.odd",
  "ui.color.even",
  // BEGIN PS COLORS
  "ui.color.custom1",
  "ui.color.custom2",
  "ui.color.custom3",
  "ui.color.custom4",
  "ui.color.custom5",
  "ui.color.custom6",
  "ui.color.custom7",
  "ui.color.custom8",
  "ui.color.custom9",
  "ui.color.progress0",
  "ui.color.progress20",
  "ui.color.progress40",
  "ui.color.progress60",
  "ui.color.progress80",
  "ui.color.progress100",
  "ui.color.progress120",
  // END PS COLORS
};

} // namespace display
#endif
