#include "Choice.h"

wxString choice_to_wxString(Choice choice)
{
    switch (choice)
    {
        case ROCK:     return "Rock";
        case PAPER:    return "Paper";
        case SCISSORS: return "Scissors";
        default:       return "none";
    }
}

wxString round_to_wxString(Round round) {
    switch(round) {
        case ONE: return "1";
        case TWO: return "2";
        case THREE: return "3";
        case FOUR: return "4";
        case FIVE: return "5";
        case SIX: return "6";
        case SEVEN: return "7";
        case EIGHT: return "8";
        case NINE: return "9";
        case TEN: return "10";
        case ELEVEN: return "11";
        case TWELVE: return "12";
        case THIRTEEN: return "13";
        case FOURTEEN: return "14";
        case FIFTEEN: return "15";
        case SIXTEEN: return "16";
        case SEVENTEEN: return "17";
        case EIGHTEEN: return "18";
        case NINETEEN: return "19";
        case TWENTY: return "20";
    }
}
