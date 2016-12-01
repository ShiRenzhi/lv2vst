/*
  Copyright 2011 David Robillard <http://drobilla.net>

  Permission to use, copy, modify, and/or distribute this software for any
  purpose with or without fee is hereby granted, provided that the above
  copyright notice and this permission notice appear in all copies.

  THIS SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/

/**
   @defgroup time Time

   Properties for describing time, see <http://lv2plug.in/ns/ext/time> for
   details.

   Note the time extension is purely data, this header merely defines URIs for
   convenience.

   @{
*/

#ifndef LV2_TIME_H
#define LV2_TIME_H

#define LV2_TIME_URI    "http://lv2plug.in/ns/ext/time"
#define LV2_TIME_PREFIX LV2_TIME_URI "#"

#define LV2_TIME__Time            LV2_TIME_PREFIX "Time"
#define LV2_TIME__Position        LV2_TIME_PREFIX "Position"
#define LV2_TIME__Rate            LV2_TIME_PREFIX "Rate"
#define LV2_TIME__position        LV2_TIME_PREFIX "position"
#define LV2_TIME__barBeat         LV2_TIME_PREFIX "barBeat"
#define LV2_TIME__bar             LV2_TIME_PREFIX "bar"
#define LV2_TIME__beat            LV2_TIME_PREFIX "beat"
#define LV2_TIME__beatUnit        LV2_TIME_PREFIX "beatUnit"
#define LV2_TIME__beatsPerBar     LV2_TIME_PREFIX "beatsPerBar"
#define LV2_TIME__beatsPerMinute  LV2_TIME_PREFIX "beatsPerMinute"
#define LV2_TIME__frame           LV2_TIME_PREFIX "frame"
#define LV2_TIME__framesPerSecond LV2_TIME_PREFIX "framesPerSecond"
#define LV2_TIME__speed           LV2_TIME_PREFIX "speed"

/**
   @}
*/

#endif  /* LV2_TIME_H */
