char *tiles_print_TileSuit(const TileSuit t) {
  if ( t == BambooSuit ) return "BambooSuit";
  if ( t == CharacterSuit ) return "CharacterSuit";
  if ( t == CircleSuit ) return "CircleSuit";
  if ( t == WindSuit ) return "WindSuit";
  if ( t == DragonSuit ) return "DragonSuit";
  if ( t == FlowerSuit ) return "FlowerSuit";
  if ( t == SeasonSuit ) return "SeasonSuit";
  return (char *)0;
}

TileSuit tiles_scan_TileSuit(const char *s) {
  if ( strcmp(s,"BambooSuit") == 0 ) return BambooSuit;
  if ( strcmp(s,"CharacterSuit") == 0 ) return CharacterSuit;
  if ( strcmp(s,"CircleSuit") == 0 ) return CircleSuit;
  if ( strcmp(s,"WindSuit") == 0 ) return WindSuit;
  if ( strcmp(s,"DragonSuit") == 0 ) return DragonSuit;
  if ( strcmp(s,"FlowerSuit") == 0 ) return FlowerSuit;
  if ( strcmp(s,"SeasonSuit") == 0 ) return SeasonSuit;
  return -1;
}


char *tiles_print_TileWind(const TileWind t) {
  if ( t == UnknownWind ) return "UnknownWind";
  if ( t == EastWind ) return "EastWind";
  if ( t == SouthWind ) return "SouthWind";
  if ( t == WestWind ) return "WestWind";
  if ( t == NorthWind ) return "NorthWind";
  return (char *)0;
}

TileWind tiles_scan_TileWind(const char *s) {
  if ( strcmp(s,"UnknownWind") == 0 ) return UnknownWind;
  if ( strcmp(s,"EastWind") == 0 ) return EastWind;
  if ( strcmp(s,"SouthWind") == 0 ) return SouthWind;
  if ( strcmp(s,"WestWind") == 0 ) return WestWind;
  if ( strcmp(s,"NorthWind") == 0 ) return NorthWind;
  return -1;
}


char *tiles_print_TileDragon(const TileDragon t) {
  if ( t == RedDragon ) return "RedDragon";
  if ( t == WhiteDragon ) return "WhiteDragon";
  if ( t == GreenDragon ) return "GreenDragon";
  return (char *)0;
}

TileDragon tiles_scan_TileDragon(const char *s) {
  if ( strcmp(s,"RedDragon") == 0 ) return RedDragon;
  if ( strcmp(s,"WhiteDragon") == 0 ) return WhiteDragon;
  if ( strcmp(s,"GreenDragon") == 0 ) return GreenDragon;
  return -1;
}


char *tiles_print_TileFlower(const TileFlower t) {
  if ( t == Plum ) return "Plum";
  if ( t == Orchid ) return "Orchid";
  if ( t == Chrysanthemum ) return "Chrysanthemum";
  if ( t == Bamboo ) return "Bamboo";
  return (char *)0;
}

TileFlower tiles_scan_TileFlower(const char *s) {
  if ( strcmp(s,"Plum") == 0 ) return Plum;
  if ( strcmp(s,"Orchid") == 0 ) return Orchid;
  if ( strcmp(s,"Chrysanthemum") == 0 ) return Chrysanthemum;
  if ( strcmp(s,"Bamboo") == 0 ) return Bamboo;
  return -1;
}


char *tiles_print_TileSeason(const TileSeason t) {
  if ( t == Spring ) return "Spring";
  if ( t == Summer ) return "Summer";
  if ( t == Autumn ) return "Autumn";
  if ( t == Winter ) return "Winter";
  return (char *)0;
}

TileSeason tiles_scan_TileSeason(const char *s) {
  if ( strcmp(s,"Spring") == 0 ) return Spring;
  if ( strcmp(s,"Summer") == 0 ) return Summer;
  if ( strcmp(s,"Autumn") == 0 ) return Autumn;
  if ( strcmp(s,"Winter") == 0 ) return Winter;
  return -1;
}


