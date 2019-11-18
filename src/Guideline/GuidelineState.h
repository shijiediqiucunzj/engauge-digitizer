/******************************************************************************************************
 * (C) 2019 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef GUIDELINE_STATE_H
#define GUIDELINE_STATE_H

#include <QString>

/// Set of possible Guideline states. See class Guideline for more information
enum GuidelineState {
  GUIDELINE_STATE_DEPLOYED_CONSTANT_R_ACTIVE,
  GUIDELINE_STATE_DEPLOYED_CONSTANT_R_HIDE,
  GUIDELINE_STATE_DEPLOYED_CONSTANT_R_HOVER,
  GUIDELINE_STATE_DEPLOYED_CONSTANT_R_LOCKED,
  GUIDELINE_STATE_DEPLOYED_CONSTANT_T_ACTIVE,
  GUIDELINE_STATE_DEPLOYED_CONSTANT_T_HIDE,
  GUIDELINE_STATE_DEPLOYED_CONSTANT_T_HOVER,
  GUIDELINE_STATE_DEPLOYED_CONSTANT_T_LOCKED,
  GUIDELINE_STATE_DEPLOYED_CONSTANT_X_ACTIVE,
  GUIDELINE_STATE_DEPLOYED_CONSTANT_X_HIDE,
  GUIDELINE_STATE_DEPLOYED_CONSTANT_X_HOVER,
  GUIDELINE_STATE_DEPLOYED_CONSTANT_X_LOCKED,
  GUIDELINE_STATE_DEPLOYED_CONSTANT_Y_ACTIVE,
  GUIDELINE_STATE_DEPLOYED_CONSTANT_Y_HIDE,
  GUIDELINE_STATE_DEPLOYED_CONSTANT_Y_HOVER,
  GUIDELINE_STATE_DEPLOYED_CONSTANT_Y_LOCKED,
  GUIDELINE_STATE_DISCARDED,  
  GUIDELINE_STATE_HANDLE,
  NUM_GUIDELINE_STATES
};

extern QString guidelineStateAsString (GuidelineState state);

#endif // GUIDELINE_STATE_H
