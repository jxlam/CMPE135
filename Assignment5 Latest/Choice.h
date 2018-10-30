#ifndef CHOICE_H_
#define CHOICE_H_

#include "wx/wx.h"

// Choice represented by int.
typedef int Choice;
typedef int Round;

// Which object a player chooses each round.
enum { ROCK, PAPER, SCISSORS, NONE };
enum {ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
    ELEVEN, TWELVE, THIRTEEN, FOURTEEN, FIFTEEN, SIXTEEN, SEVENTEEN, EIGHTEEN,
    NINETEEN, TWENTY};

/**
 * Convert a chosen object to a wxString.
 * @param choice the object to convert.
 * @return the wxString.
 */
wxString choice_to_wxString(Choice choice);
wxString round_to_wxString(Round round);

#endif /* CHOICE_H_ */
