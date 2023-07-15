char *game_print_GameState(const GameState t) {
  if ( t == HandComplete ) return "HandComplete";
  if ( t == Dealing ) return "Dealing";
  if ( t == DeclaringSpecials ) return "DeclaringSpecials";
  if ( t == Discarding ) return "Discarding";
  if ( t == Discarded ) return "Discarded";
  if ( t == MahJonging ) return "MahJonging";
  return (char *)0;
}

GameState game_scan_GameState(const char *s) {
  if ( strcmp(s,"HandComplete") == 0 ) return HandComplete;
  if ( strcmp(s,"Dealing") == 0 ) return Dealing;
  if ( strcmp(s,"DeclaringSpecials") == 0 ) return DeclaringSpecials;
  if ( strcmp(s,"Discarding") == 0 ) return Discarding;
  if ( strcmp(s,"Discarded") == 0 ) return Discarded;
  if ( strcmp(s,"MahJonging") == 0 ) return MahJonging;
  return -1;
}


char *game_print_seats(const seats t) {
  if ( t == east ) return "east";
  if ( t == south ) return "south";
  if ( t == west ) return "west";
  if ( t == north ) return "north";
  if ( t == noseat ) return "noseat";
  return (char *)0;
}

seats game_scan_seats(const char *s) {
  if ( strcmp(s,"east") == 0 ) return east;
  if ( strcmp(s,"south") == 0 ) return south;
  if ( strcmp(s,"west") == 0 ) return west;
  if ( strcmp(s,"north") == 0 ) return north;
  if ( strcmp(s,"noseat") == 0 ) return noseat;
  return -1;
}


char *game_print_Whence(const Whence t) {
  if ( t == FromNone ) return "FromNone";
  if ( t == FromWall ) return "FromWall";
  if ( t == FromDiscard ) return "FromDiscard";
  if ( t == FromLoose ) return "FromLoose";
  if ( t == FromRobbedKong ) return "FromRobbedKong";
  return (char *)0;
}

Whence game_scan_Whence(const char *s) {
  if ( strcmp(s,"FromNone") == 0 ) return FromNone;
  if ( strcmp(s,"FromWall") == 0 ) return FromWall;
  if ( strcmp(s,"FromDiscard") == 0 ) return FromDiscard;
  if ( strcmp(s,"FromLoose") == 0 ) return FromLoose;
  if ( strcmp(s,"FromRobbedKong") == 0 ) return FromRobbedKong;
  return -1;
}


char *game_print_Konging(const Konging t) {
  if ( t == NotKonging ) return "NotKonging";
  if ( t == AddingToPung ) return "AddingToPung";
  if ( t == DeclaringKong ) return "DeclaringKong";
  return (char *)0;
}

Konging game_scan_Konging(const char *s) {
  if ( strcmp(s,"NotKonging") == 0 ) return NotKonging;
  if ( strcmp(s,"AddingToPung") == 0 ) return AddingToPung;
  if ( strcmp(s,"DeclaringKong") == 0 ) return DeclaringKong;
  return -1;
}


char *game_print_Claims(const Claims t) {
  if ( t == UnknownClaim ) return "UnknownClaim";
  if ( t == NoClaim ) return "NoClaim";
  if ( t == ChowClaim ) return "ChowClaim";
  if ( t == PungClaim ) return "PungClaim";
  if ( t == KongClaim ) return "KongClaim";
  if ( t == MahJongClaim ) return "MahJongClaim";
  if ( t == PairClaim ) return "PairClaim";
  if ( t == SpecialSetClaim ) return "SpecialSetClaim";
  return (char *)0;
}

Claims game_scan_Claims(const char *s) {
  if ( strcmp(s,"UnknownClaim") == 0 ) return UnknownClaim;
  if ( strcmp(s,"NoClaim") == 0 ) return NoClaim;
  if ( strcmp(s,"ChowClaim") == 0 ) return ChowClaim;
  if ( strcmp(s,"PungClaim") == 0 ) return PungClaim;
  if ( strcmp(s,"KongClaim") == 0 ) return KongClaim;
  if ( strcmp(s,"MahJongClaim") == 0 ) return MahJongClaim;
  if ( strcmp(s,"PairClaim") == 0 ) return PairClaim;
  if ( strcmp(s,"SpecialSetClaim") == 0 ) return SpecialSetClaim;
  return -1;
}


char *game_print_GameFlags(const GameFlags t) {
  if ( t == GFKong ) return "GFKong";
  if ( t == GFKongUponKong ) return "GFKongUponKong";
  if ( t == GFDangerousDiscard ) return "GFDangerousDiscard";
  if ( t == GFNoChoice ) return "GFNoChoice";
  return (char *)0;
}

GameFlags game_scan_GameFlags(const char *s) {
  if ( strcmp(s,"GFKong") == 0 ) return GFKong;
  if ( strcmp(s,"GFKongUponKong") == 0 ) return GFKongUponKong;
  if ( strcmp(s,"GFDangerousDiscard") == 0 ) return GFDangerousDiscard;
  if ( strcmp(s,"GFNoChoice") == 0 ) return GFNoChoice;
  return -1;
}


