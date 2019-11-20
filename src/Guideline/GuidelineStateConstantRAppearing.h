/******************************************************************************************************
 * (C) 2019 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef GUIDELINE_STATE_CONSTANT_R_APPEARING_H
#define GUIDELINE_STATE_CONSTANT_R_APPEARING_H

#include "GuidelineStateConstantRAbstract.h"

/// Implements guideline behavior for GUIDELINE_STATE_CONSTANT_R_APPEARING
class GuidelineStateConstantRAppearing : public GuidelineStateConstantRAbstract
{
public:
  /// Single constructor.
  GuidelineStateConstantRAppearing(GuidelineStateContext &context);
  virtual ~GuidelineStateConstantRAppearing();

  virtual void begin ();
  virtual bool doPaint () const;
  virtual void end ();
  virtual void handleAppearingChange (bool appearing);
  virtual void handleHoverEnterEvent ();
  virtual void handleHoverLeaveEvent ();
  virtual void handleMousePress (const QPointF &posScene);
  virtual void handleVisibleChange (bool visible);
  virtual QString stateName () const;

private:
  GuidelineStateConstantRAppearing();

};

#endif // GUIDELINE_STATE_CONSTANT_R_APPEARING_H