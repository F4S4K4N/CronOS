/* This file is part of CronOS.

CronOS is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

CronOS is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with CronOS.  If not, see <http://www.gnu.org/licenses/>.

Copyright 2015 Alex McWhirter */

#include "setError.h"
#include "../setRGB/setRGB.h"
#include "../../include/CronOS.h"

#ifdef FUNC_SETERROR
  void setError()
  {
    #ifdef FUNC_SETRGB
      setRGB("red");
      delay(ERR_DUR);
      setRGB("none");
      delay(ERR_DUR);
      setRGB("red");
      delay(ERR_DUR);
      setRGB("none");
      delay(ERR_DUR);
      setRGB("red");
      delay(ERR_DUR);
      setRGB("none");
    #endif
    delay(ERR_DUR);
  }
#endif