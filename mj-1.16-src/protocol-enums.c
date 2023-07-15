char *protocol_print_GameOption(const GameOption t) {
  if ( t == GOUnknown ) return "Unknown";
  if ( t == GOTimeout ) return "Timeout";
  if ( t == GOTimeoutGrace ) return "TimeoutGrace";
  if ( t == GOScoreLimit ) return "ScoreLimit";
  if ( t == GONoLimit ) return "NoLimit";
  if ( t == GOMahJongScore ) return "MahJongScore";
  if ( t == GOSevenPairs ) return "SevenPairs";
  if ( t == GOSevenPairsVal ) return "SevenPairsVal";
  if ( t == GOFlowers ) return "Flowers";
  if ( t == GOFlowersLoose ) return "FlowersLoose";
  if ( t == GOFlowersOwnEach ) return "FlowersOwnEach";
  if ( t == GOFlowersOwnBoth ) return "FlowersOwnBoth";
  if ( t == GOFlowersBouquet ) return "FlowersBouquet";
  if ( t == GODeadWall ) return "DeadWall";
  if ( t == GODeadWall16 ) return "DeadWall16";
  if ( t == GOConcealedFully ) return "ConcealedFully";
  if ( t == GOConcealedAlmost ) return "ConcealedAlmost";
  if ( t == GOLosersPurity ) return "LosersPurity";
  if ( t == GOKongHas3Types ) return "KongHas3Types";
  if ( t == GOEastDoubles ) return "EastDoubles";
  if ( t == GOLosersSettle ) return "LosersSettle";
  if ( t == GODiscDoubles ) return "DiscDoubles";
  if ( t == GOShowOnWashout ) return "ShowOnWashout";
  if ( t == GONumRounds ) return "NumRounds";
  if ( t == GOEnd ) return "End";
  return (char *)0;
}

GameOption protocol_scan_GameOption(const char *s) {
  if ( strcmp(s,"Unknown") == 0 ) return GOUnknown;
  if ( strcmp(s,"Timeout") == 0 ) return GOTimeout;
  if ( strcmp(s,"TimeoutGrace") == 0 ) return GOTimeoutGrace;
  if ( strcmp(s,"ScoreLimit") == 0 ) return GOScoreLimit;
  if ( strcmp(s,"NoLimit") == 0 ) return GONoLimit;
  if ( strcmp(s,"MahJongScore") == 0 ) return GOMahJongScore;
  if ( strcmp(s,"SevenPairs") == 0 ) return GOSevenPairs;
  if ( strcmp(s,"SevenPairsVal") == 0 ) return GOSevenPairsVal;
  if ( strcmp(s,"Flowers") == 0 ) return GOFlowers;
  if ( strcmp(s,"FlowersLoose") == 0 ) return GOFlowersLoose;
  if ( strcmp(s,"FlowersOwnEach") == 0 ) return GOFlowersOwnEach;
  if ( strcmp(s,"FlowersOwnBoth") == 0 ) return GOFlowersOwnBoth;
  if ( strcmp(s,"FlowersBouquet") == 0 ) return GOFlowersBouquet;
  if ( strcmp(s,"DeadWall") == 0 ) return GODeadWall;
  if ( strcmp(s,"DeadWall16") == 0 ) return GODeadWall16;
  if ( strcmp(s,"ConcealedFully") == 0 ) return GOConcealedFully;
  if ( strcmp(s,"ConcealedAlmost") == 0 ) return GOConcealedAlmost;
  if ( strcmp(s,"LosersPurity") == 0 ) return GOLosersPurity;
  if ( strcmp(s,"KongHas3Types") == 0 ) return GOKongHas3Types;
  if ( strcmp(s,"EastDoubles") == 0 ) return GOEastDoubles;
  if ( strcmp(s,"LosersSettle") == 0 ) return GOLosersSettle;
  if ( strcmp(s,"DiscDoubles") == 0 ) return GODiscDoubles;
  if ( strcmp(s,"ShowOnWashout") == 0 ) return GOShowOnWashout;
  if ( strcmp(s,"NumRounds") == 0 ) return GONumRounds;
  if ( strcmp(s,"End") == 0 ) return GOEnd;
  return -1;
}


char *protocol_print_GameOptionType(const GameOptionType t) {
  if ( t == GOTBool ) return "bool";
  if ( t == GOTInt ) return "int";
  if ( t == GOTNat ) return "nat";
  if ( t == GOTScore ) return "score";
  if ( t == GOTString ) return "string";
  return (char *)0;
}

GameOptionType protocol_scan_GameOptionType(const char *s) {
  if ( strcmp(s,"bool") == 0 ) return GOTBool;
  if ( strcmp(s,"int") == 0 ) return GOTInt;
  if ( strcmp(s,"nat") == 0 ) return GOTNat;
  if ( strcmp(s,"score") == 0 ) return GOTScore;
  if ( strcmp(s,"string") == 0 ) return GOTString;
  return -1;
}


char *protocol_print_ControllerMsgType(const ControllerMsgType t) {
  if ( t == CMsgError ) return "CMsgError";
  if ( t == CMsgInfoTiles ) return "CMsgInfoTiles";
  if ( t == CMsgStateSaved ) return "CMsgStateSaved";
  if ( t == CMsgConnectReply ) return "CMsgConnectReply";
  if ( t == CMsgReconnect ) return "CMsgReconnect";
  if ( t == CMsgAuthReqd ) return "CMsgAuthReqd";
  if ( t == CMsgRedirect ) return "CMsgRedirect";
  if ( t == CMsgPlayer ) return "CMsgPlayer";
  if ( t == CMsgNewRound ) return "CMsgNewRound";
  if ( t == CMsgGame ) return "CMsgGame";
  if ( t == CMsgNewHand ) return "CMsgNewHand";
  if ( t == CMsgPlayerDeclaresSpecial ) return "CMsgPlayerDeclaresSpecial";
  if ( t == CMsgStartPlay ) return "CMsgStartPlay";
  if ( t == CMsgStopPlay ) return "CMsgStopPlay";
  if ( t == CMsgPause ) return "CMsgPause";
  if ( t == CMsgPlayerReady ) return "CMsgPlayerReady";
  if ( t == CMsgPlayerDraws ) return "CMsgPlayerDraws";
  if ( t == CMsgPlayerDrawsLoose ) return "CMsgPlayerDrawsLoose";
  if ( t == CMsgPlayerDiscards ) return "CMsgPlayerDiscards";
  if ( t == CMsgClaimDenied ) return "CMsgClaimDenied";
  if ( t == CMsgPlayerDoesntClaim ) return "CMsgPlayerDoesntClaim";
  if ( t == CMsgDangerousDiscard ) return "CMsgDangerousDiscard";
  if ( t == CMsgPlayerClaimsPung ) return "CMsgPlayerClaimsPung";
  if ( t == CMsgPlayerPungs ) return "CMsgPlayerPungs";
  if ( t == CMsgPlayerFormsClosedPung ) return "CMsgPlayerFormsClosedPung";
  if ( t == CMsgPlayerClaimsKong ) return "CMsgPlayerClaimsKong";
  if ( t == CMsgPlayerKongs ) return "CMsgPlayerKongs";
  if ( t == CMsgPlayerDeclaresClosedKong ) return "CMsgPlayerDeclaresClosedKong";
  if ( t == CMsgPlayerAddsToPung ) return "CMsgPlayerAddsToPung";
  if ( t == CMsgPlayerRobsKong ) return "CMsgPlayerRobsKong";
  if ( t == CMsgCanMahJong ) return "CMsgCanMahJong";
  if ( t == CMsgPlayerClaimsChow ) return "CMsgPlayerClaimsChow";
  if ( t == CMsgPlayerChows ) return "CMsgPlayerChows";
  if ( t == CMsgPlayerFormsClosedChow ) return "CMsgPlayerFormsClosedChow";
  if ( t == CMsgWashOut ) return "CMsgWashOut";
  if ( t == CMsgPlayerClaimsMahJong ) return "CMsgPlayerClaimsMahJong";
  if ( t == CMsgPlayerMahJongs ) return "CMsgPlayerMahJongs";
  if ( t == CMsgPlayerPairs ) return "CMsgPlayerPairs";
  if ( t == CMsgPlayerFormsClosedPair ) return "CMsgPlayerFormsClosedPair";
  if ( t == CMsgPlayerShowsTiles ) return "CMsgPlayerShowsTiles";
  if ( t == CMsgPlayerSpecialSet ) return "CMsgPlayerSpecialSet";
  if ( t == CMsgPlayerFormsClosedSpecialSet ) return "CMsgPlayerFormsClosedSpecialSet";
  if ( t == CMsgPlayerOptionSet ) return "CMsgPlayerOptionSet";
  if ( t == CMsgHandScore ) return "CMsgHandScore";
  if ( t == CMsgSettlement ) return "CMsgSettlement";
  if ( t == CMsgGameOver ) return "CMsgGameOver";
  if ( t == CMsgGameOption ) return "CMsgGameOption";
  if ( t == CMsgChangeManager ) return "CMsgChangeManager";
  if ( t == CMsgMessage ) return "CMsgMessage";
  if ( t == CMsgWall ) return "CMsgWall";
  if ( t == CMsgComment ) return "CMsgComment";
  if ( t == CMsgSwapTile ) return "CMsgSwapTile";
  return (char *)0;
}

ControllerMsgType protocol_scan_ControllerMsgType(const char *s) {
  if ( strcmp(s,"CMsgError") == 0 ) return CMsgError;
  if ( strcmp(s,"CMsgInfoTiles") == 0 ) return CMsgInfoTiles;
  if ( strcmp(s,"CMsgStateSaved") == 0 ) return CMsgStateSaved;
  if ( strcmp(s,"CMsgConnectReply") == 0 ) return CMsgConnectReply;
  if ( strcmp(s,"CMsgReconnect") == 0 ) return CMsgReconnect;
  if ( strcmp(s,"CMsgAuthReqd") == 0 ) return CMsgAuthReqd;
  if ( strcmp(s,"CMsgRedirect") == 0 ) return CMsgRedirect;
  if ( strcmp(s,"CMsgPlayer") == 0 ) return CMsgPlayer;
  if ( strcmp(s,"CMsgNewRound") == 0 ) return CMsgNewRound;
  if ( strcmp(s,"CMsgGame") == 0 ) return CMsgGame;
  if ( strcmp(s,"CMsgNewHand") == 0 ) return CMsgNewHand;
  if ( strcmp(s,"CMsgPlayerDeclaresSpecial") == 0 ) return CMsgPlayerDeclaresSpecial;
  if ( strcmp(s,"CMsgStartPlay") == 0 ) return CMsgStartPlay;
  if ( strcmp(s,"CMsgStopPlay") == 0 ) return CMsgStopPlay;
  if ( strcmp(s,"CMsgPause") == 0 ) return CMsgPause;
  if ( strcmp(s,"CMsgPlayerReady") == 0 ) return CMsgPlayerReady;
  if ( strcmp(s,"CMsgPlayerDraws") == 0 ) return CMsgPlayerDraws;
  if ( strcmp(s,"CMsgPlayerDrawsLoose") == 0 ) return CMsgPlayerDrawsLoose;
  if ( strcmp(s,"CMsgPlayerDiscards") == 0 ) return CMsgPlayerDiscards;
  if ( strcmp(s,"CMsgClaimDenied") == 0 ) return CMsgClaimDenied;
  if ( strcmp(s,"CMsgPlayerDoesntClaim") == 0 ) return CMsgPlayerDoesntClaim;
  if ( strcmp(s,"CMsgDangerousDiscard") == 0 ) return CMsgDangerousDiscard;
  if ( strcmp(s,"CMsgPlayerClaimsPung") == 0 ) return CMsgPlayerClaimsPung;
  if ( strcmp(s,"CMsgPlayerPungs") == 0 ) return CMsgPlayerPungs;
  if ( strcmp(s,"CMsgPlayerFormsClosedPung") == 0 ) return CMsgPlayerFormsClosedPung;
  if ( strcmp(s,"CMsgPlayerClaimsKong") == 0 ) return CMsgPlayerClaimsKong;
  if ( strcmp(s,"CMsgPlayerKongs") == 0 ) return CMsgPlayerKongs;
  if ( strcmp(s,"CMsgPlayerDeclaresClosedKong") == 0 ) return CMsgPlayerDeclaresClosedKong;
  if ( strcmp(s,"CMsgPlayerAddsToPung") == 0 ) return CMsgPlayerAddsToPung;
  if ( strcmp(s,"CMsgPlayerRobsKong") == 0 ) return CMsgPlayerRobsKong;
  if ( strcmp(s,"CMsgCanMahJong") == 0 ) return CMsgCanMahJong;
  if ( strcmp(s,"CMsgPlayerClaimsChow") == 0 ) return CMsgPlayerClaimsChow;
  if ( strcmp(s,"CMsgPlayerChows") == 0 ) return CMsgPlayerChows;
  if ( strcmp(s,"CMsgPlayerFormsClosedChow") == 0 ) return CMsgPlayerFormsClosedChow;
  if ( strcmp(s,"CMsgWashOut") == 0 ) return CMsgWashOut;
  if ( strcmp(s,"CMsgPlayerClaimsMahJong") == 0 ) return CMsgPlayerClaimsMahJong;
  if ( strcmp(s,"CMsgPlayerMahJongs") == 0 ) return CMsgPlayerMahJongs;
  if ( strcmp(s,"CMsgPlayerPairs") == 0 ) return CMsgPlayerPairs;
  if ( strcmp(s,"CMsgPlayerFormsClosedPair") == 0 ) return CMsgPlayerFormsClosedPair;
  if ( strcmp(s,"CMsgPlayerShowsTiles") == 0 ) return CMsgPlayerShowsTiles;
  if ( strcmp(s,"CMsgPlayerSpecialSet") == 0 ) return CMsgPlayerSpecialSet;
  if ( strcmp(s,"CMsgPlayerFormsClosedSpecialSet") == 0 ) return CMsgPlayerFormsClosedSpecialSet;
  if ( strcmp(s,"CMsgPlayerOptionSet") == 0 ) return CMsgPlayerOptionSet;
  if ( strcmp(s,"CMsgHandScore") == 0 ) return CMsgHandScore;
  if ( strcmp(s,"CMsgSettlement") == 0 ) return CMsgSettlement;
  if ( strcmp(s,"CMsgGameOver") == 0 ) return CMsgGameOver;
  if ( strcmp(s,"CMsgGameOption") == 0 ) return CMsgGameOption;
  if ( strcmp(s,"CMsgChangeManager") == 0 ) return CMsgChangeManager;
  if ( strcmp(s,"CMsgMessage") == 0 ) return CMsgMessage;
  if ( strcmp(s,"CMsgWall") == 0 ) return CMsgWall;
  if ( strcmp(s,"CMsgComment") == 0 ) return CMsgComment;
  if ( strcmp(s,"CMsgSwapTile") == 0 ) return CMsgSwapTile;
  return -1;
}


char *protocol_print_PlayerMsgType(const PlayerMsgType t) {
  if ( t == PMsgSaveState ) return "PMsgSaveState";
  if ( t == PMsgLoadState ) return "PMsgLoadState";
  if ( t == PMsgConnect ) return "PMsgConnect";
  if ( t == PMsgRequestReconnect ) return "PMsgRequestReconnect";
  if ( t == PMsgAuthInfo ) return "PMsgAuthInfo";
  if ( t == PMsgNewAuthInfo ) return "PMsgNewAuthInfo";
  if ( t == PMsgDisconnect ) return "PMsgDisconnect";
  if ( t == PMsgDeclareSpecial ) return "PMsgDeclareSpecial";
  if ( t == PMsgRequestPause ) return "PMsgRequestPause";
  if ( t == PMsgReady ) return "PMsgReady";
  if ( t == PMsgDiscard ) return "PMsgDiscard";
  if ( t == PMsgNoClaim ) return "PMsgNoClaim";
  if ( t == PMsgPung ) return "PMsgPung";
  if ( t == PMsgFormClosedPung ) return "PMsgFormClosedPung";
  if ( t == PMsgKong ) return "PMsgKong";
  if ( t == PMsgDeclareClosedKong ) return "PMsgDeclareClosedKong";
  if ( t == PMsgAddToPung ) return "PMsgAddToPung";
  if ( t == PMsgQueryMahJong ) return "PMsgQueryMahJong";
  if ( t == PMsgChow ) return "PMsgChow";
  if ( t == PMsgFormClosedChow ) return "PMsgFormClosedChow";
  if ( t == PMsgDeclareWashOut ) return "PMsgDeclareWashOut";
  if ( t == PMsgMahJong ) return "PMsgMahJong";
  if ( t == PMsgPair ) return "PMsgPair";
  if ( t == PMsgFormClosedPair ) return "PMsgFormClosedPair";
  if ( t == PMsgShowTiles ) return "PMsgShowTiles";
  if ( t == PMsgSpecialSet ) return "PMsgSpecialSet";
  if ( t == PMsgFormClosedSpecialSet ) return "PMsgFormClosedSpecialSet";
  if ( t == PMsgSetPlayerOption ) return "PMsgSetPlayerOption";
  if ( t == PMsgSetGameOption ) return "PMsgSetGameOption";
  if ( t == PMsgQueryGameOption ) return "PMsgQueryGameOption";
  if ( t == PMsgListGameOptions ) return "PMsgListGameOptions";
  if ( t == PMsgChangeManager ) return "PMsgChangeManager";
  if ( t == PMsgSendMessage ) return "PMsgSendMessage";
  if ( t == PMsgSwapTile ) return "PMsgSwapTile";
  return (char *)0;
}

PlayerMsgType protocol_scan_PlayerMsgType(const char *s) {
  if ( strcmp(s,"PMsgSaveState") == 0 ) return PMsgSaveState;
  if ( strcmp(s,"PMsgLoadState") == 0 ) return PMsgLoadState;
  if ( strcmp(s,"PMsgConnect") == 0 ) return PMsgConnect;
  if ( strcmp(s,"PMsgRequestReconnect") == 0 ) return PMsgRequestReconnect;
  if ( strcmp(s,"PMsgAuthInfo") == 0 ) return PMsgAuthInfo;
  if ( strcmp(s,"PMsgNewAuthInfo") == 0 ) return PMsgNewAuthInfo;
  if ( strcmp(s,"PMsgDisconnect") == 0 ) return PMsgDisconnect;
  if ( strcmp(s,"PMsgDeclareSpecial") == 0 ) return PMsgDeclareSpecial;
  if ( strcmp(s,"PMsgRequestPause") == 0 ) return PMsgRequestPause;
  if ( strcmp(s,"PMsgReady") == 0 ) return PMsgReady;
  if ( strcmp(s,"PMsgDiscard") == 0 ) return PMsgDiscard;
  if ( strcmp(s,"PMsgNoClaim") == 0 ) return PMsgNoClaim;
  if ( strcmp(s,"PMsgPung") == 0 ) return PMsgPung;
  if ( strcmp(s,"PMsgFormClosedPung") == 0 ) return PMsgFormClosedPung;
  if ( strcmp(s,"PMsgKong") == 0 ) return PMsgKong;
  if ( strcmp(s,"PMsgDeclareClosedKong") == 0 ) return PMsgDeclareClosedKong;
  if ( strcmp(s,"PMsgAddToPung") == 0 ) return PMsgAddToPung;
  if ( strcmp(s,"PMsgQueryMahJong") == 0 ) return PMsgQueryMahJong;
  if ( strcmp(s,"PMsgChow") == 0 ) return PMsgChow;
  if ( strcmp(s,"PMsgFormClosedChow") == 0 ) return PMsgFormClosedChow;
  if ( strcmp(s,"PMsgDeclareWashOut") == 0 ) return PMsgDeclareWashOut;
  if ( strcmp(s,"PMsgMahJong") == 0 ) return PMsgMahJong;
  if ( strcmp(s,"PMsgPair") == 0 ) return PMsgPair;
  if ( strcmp(s,"PMsgFormClosedPair") == 0 ) return PMsgFormClosedPair;
  if ( strcmp(s,"PMsgShowTiles") == 0 ) return PMsgShowTiles;
  if ( strcmp(s,"PMsgSpecialSet") == 0 ) return PMsgSpecialSet;
  if ( strcmp(s,"PMsgFormClosedSpecialSet") == 0 ) return PMsgFormClosedSpecialSet;
  if ( strcmp(s,"PMsgSetPlayerOption") == 0 ) return PMsgSetPlayerOption;
  if ( strcmp(s,"PMsgSetGameOption") == 0 ) return PMsgSetGameOption;
  if ( strcmp(s,"PMsgQueryGameOption") == 0 ) return PMsgQueryGameOption;
  if ( strcmp(s,"PMsgListGameOptions") == 0 ) return PMsgListGameOptions;
  if ( strcmp(s,"PMsgChangeManager") == 0 ) return PMsgChangeManager;
  if ( strcmp(s,"PMsgSendMessage") == 0 ) return PMsgSendMessage;
  if ( strcmp(s,"PMsgSwapTile") == 0 ) return PMsgSwapTile;
  return -1;
}


