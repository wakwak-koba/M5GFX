/*----------------------------------------------------------------------------/
  Lovyan GFX - Graphics library for embedded devices.

Original Source:
 https://github.com/lovyan03/LovyanGFX/

Licence:
 [FreeBSD](https://github.com/lovyan03/LovyanGFX/blob/master/license.txt)

Author:
 [lovyan03](https://twitter.com/lovyan03)

Contributors:
 [ciniml](https://github.com/ciniml)
 [mongonta0716](https://github.com/mongonta0716)
 [tobozo](https://github.com/tobozo)
/----------------------------------------------------------------------------*/
#pragma once

#include <cstdint>

namespace lgfx
{
 inline namespace v1
 {
//----------------------------------------------------------------------------

  struct ILight
  {
    virtual ~ILight(void) = default;

    virtual void init(std::uint8_t brightness) = 0;
    virtual void setBrightness(std::uint8_t brightness) = 0;
  };
/*
  struct Light_NULL : public ILight
  {
    void init(void) override {}
    void setBrightness(std::uint8_t brightness) override {}
  };
//*/
//----------------------------------------------------------------------------
 }
}


