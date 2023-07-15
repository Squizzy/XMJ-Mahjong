char *player_print_TileSetType(const TileSetType t) {
  if ( t == Empty ) return "Empty";
  if ( t == Chow ) return "Chow";
  if ( t == Pung ) return "Pung";
  if ( t == Kong ) return "Kong";
  if ( t == ClosedPung ) return "ClosedPung";
  if ( t == ClosedKong ) return "ClosedKong";
  if ( t == ClosedChow ) return "ClosedChow";
  if ( t == Pair ) return "Pair";
  if ( t == ClosedPair ) return "ClosedPair";
  return (char *)0;
}

TileSetType player_scan_TileSetType(const char *s) {
  if ( strcmp(s,"Empty") == 0 ) return Empty;
  if ( strcmp(s,"Chow") == 0 ) return Chow;
  if ( strcmp(s,"Pung") == 0 ) return Pung;
  if ( strcmp(s,"Kong") == 0 ) return Kong;
  if ( strcmp(s,"ClosedPung") == 0 ) return ClosedPung;
  if ( strcmp(s,"ClosedKong") == 0 ) return ClosedKong;
  if ( strcmp(s,"ClosedChow") == 0 ) return ClosedChow;
  if ( strcmp(s,"Pair") == 0 ) return Pair;
  if ( strcmp(s,"ClosedPair") == 0 ) return ClosedPair;
  return -1;
}


char *player_print_PlayerOption(const PlayerOption t) {
  if ( t == POUnknown ) return "Unknown";
  if ( t == POInfoTiles ) return "InfoTiles";
  if ( t == PODelayTime ) return "DelayTime";
  if ( t == POLocalTimeouts ) return "LocalTimeouts";
  if ( t == PONumOptions ) return "NumOptions";
  return (char *)0;
}

PlayerOption player_scan_PlayerOption(const char *s) {
  if ( strcmp(s,"Unknown") == 0 ) return POUnknown;
  if ( strcmp(s,"InfoTiles") == 0 ) return POInfoTiles;
  if ( strcmp(s,"DelayTime") == 0 ) return PODelayTime;
  if ( strcmp(s,"LocalTimeouts") == 0 ) return POLocalTimeouts;
  if ( strcmp(s,"NumOptions") == 0 ) return PONumOptions;
  return -1;
}


char *player_print_PlayerFlags(const PlayerFlags t) {
  if ( t == Hidden ) return "Hidden";
  if ( t == MahJongged ) return "MahJongged";
  if ( t == HandDeclared ) return "HandDeclared";
  if ( t == NoDiscard ) return "NoDiscard";
  if ( t == OriginalCall ) return "OriginalCall";
  if ( t == Calling ) return "Calling";
  return (char *)0;
}

PlayerFlags player_scan_PlayerFlags(const char *s) {
  if ( strcmp(s,"Hidden") == 0 ) return Hidden;
  if ( strcmp(s,"MahJongged") == 0 ) return MahJongged;
  if ( strcmp(s,"HandDeclared") == 0 ) return HandDeclared;
  if ( strcmp(s,"NoDiscard") == 0 ) return NoDiscard;
  if ( strcmp(s,"OriginalCall") == 0 ) return OriginalCall;
  if ( strcmp(s,"Calling") == 0 ) return Calling;
  return -1;
}


char *player_print_DangerSignals(const DangerSignals t) {
  if ( t == DangerBamboo ) return "DangerBamboo";
  if ( t == DangerCharacter ) return "DangerCharacter";
  if ( t == DangerCircle ) return "DangerCircle";
  if ( t == DangerWind ) return "DangerWind";
  if ( t == DangerDragon ) return "DangerDragon";
  if ( t == DangerHonour ) return "DangerHonour";
  if ( t == DangerGreen ) return "DangerGreen";
  if ( t == DangerTerminal ) return "DangerTerminal";
  if ( t == DangerEnd ) return "DangerEnd";
  return (char *)0;
}

DangerSignals player_scan_DangerSignals(const char *s) {
  if ( strcmp(s,"DangerBamboo") == 0 ) return DangerBamboo;
  if ( strcmp(s,"DangerCharacter") == 0 ) return DangerCharacter;
  if ( strcmp(s,"DangerCircle") == 0 ) return DangerCircle;
  if ( strcmp(s,"DangerWind") == 0 ) return DangerWind;
  if ( strcmp(s,"DangerDragon") == 0 ) return DangerDragon;
  if ( strcmp(s,"DangerHonour") == 0 ) return DangerHonour;
  if ( strcmp(s,"DangerGreen") == 0 ) return DangerGreen;
  if ( strcmp(s,"DangerTerminal") == 0 ) return DangerTerminal;
  if ( strcmp(s,"DangerEnd") == 0 ) return DangerEnd;
  return -1;
}


char *player_print_ChowPosition(const ChowPosition t) {
  if ( t == Lower ) return "Lower";
  if ( t == Middle ) return "Middle";
  if ( t == Upper ) return "Upper";
  if ( t == AnyPos ) return "AnyPos";
  return (char *)0;
}

ChowPosition player_scan_ChowPosition(const char *s) {
  if ( strcmp(s,"Lower") == 0 ) return Lower;
  if ( strcmp(s,"Middle") == 0 ) return Middle;
  if ( strcmp(s,"Upper") == 0 ) return Upper;
  if ( strcmp(s,"AnyPos") == 0 ) return AnyPos;
  return -1;
}


char *player_print_MJSpecialHandFlags(const MJSpecialHandFlags t) {
  if ( t == MJSevenPairs ) return "MJSevenPairs";
  return (char *)0;
}

MJSpecialHandFlags player_scan_MJSpecialHandFlags(const char *s) {
  if ( strcmp(s,"MJSevenPairs") == 0 ) return MJSevenPairs;
  return -1;
}


