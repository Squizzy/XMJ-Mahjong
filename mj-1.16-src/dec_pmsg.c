  if ( strcmp(type,"SaveState") == 0 ) {
    PMsgSaveStateMsg *m;

    m = (PMsgSaveStateMsg *)malloc(sizeof(PMsgSaveStateMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgSaveState;

    if ( strlen(s) == 0 ) m->filename = (char *)0;
    else {
      m->filename = (char *)malloc(strlen(s)+1);
      if ( ! m->filename ) { warn("malloc failed\n"); return (PMsgMsg *)0; }
      strcpy(m->filename,s+(s[0] == '\\'));
    }
    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"LoadState") == 0 ) {
    PMsgLoadStateMsg *m;

    m = (PMsgLoadStateMsg *)malloc(sizeof(PMsgLoadStateMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgLoadState;

    if ( strlen(s) == 0 ) m->filename = (char *)0;
    else {
      m->filename = (char *)malloc(strlen(s)+1);
      if ( ! m->filename ) { warn("malloc failed\n"); return (PMsgMsg *)0; }
      strcpy(m->filename,s+(s[0] == '\\'));
    }
    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"Connect") == 0 ) {
    PMsgConnectMsg *m;

    m = (PMsgConnectMsg *)malloc(sizeof(PMsgConnectMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgConnect;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->pvers = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->last_id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->name = (char *)0;
    else {
      m->name = (char *)malloc(strlen(s)+1);
      if ( ! m->name ) { warn("malloc failed\n"); return (PMsgMsg *)0; }
      strcpy(m->name,s+(s[0] == '\\'));
    }
    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"AuthInfo") == 0 ) {
    PMsgAuthInfoMsg *m;

    m = (PMsgAuthInfoMsg *)malloc(sizeof(PMsgAuthInfoMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgAuthInfo;

    if ( sscanf(s,"%16s%n",little_string,&n) == 0 ) { warn("protocol error\n");  return (PMsgMsg *)0; }
    strmcpy(m->authtype,little_string,16);
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->authdata = (char *)0;
    else {
      m->authdata = (char *)malloc(strlen(s)+1);
      if ( ! m->authdata ) { warn("malloc failed\n"); return (PMsgMsg *)0; }
      strcpy(m->authdata,s+(s[0] == '\\'));
    }
    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"NewAuthInfo") == 0 ) {
    PMsgNewAuthInfoMsg *m;

    m = (PMsgNewAuthInfoMsg *)malloc(sizeof(PMsgNewAuthInfoMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgNewAuthInfo;

    if ( sscanf(s,"%16s%n",little_string,&n) == 0 ) { warn("protocol error\n");  return (PMsgMsg *)0; }
    strmcpy(m->authtype,little_string,16);
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->authdata = (char *)0;
    else {
      m->authdata = (char *)malloc(strlen(s)+1);
      if ( ! m->authdata ) { warn("malloc failed\n"); return (PMsgMsg *)0; }
      strcpy(m->authdata,s+(s[0] == '\\'));
    }
    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"RequestReconnect") == 0 ) {
    PMsgRequestReconnectMsg *m;

    m = (PMsgRequestReconnectMsg *)malloc(sizeof(PMsgRequestReconnectMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgRequestReconnect;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"Disconnect") == 0 ) {
    PMsgDisconnectMsg *m;

    m = (PMsgDisconnectMsg *)malloc(sizeof(PMsgDisconnectMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgDisconnect;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"DeclareSpecial") == 0  || strcmp(type,"ds") == 0 ) {
    PMsgDeclareSpecialMsg *m;

    m = (PMsgDeclareSpecialMsg *)malloc(sizeof(PMsgDeclareSpecialMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgDeclareSpecial;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"RequestPause") == 0 ) {
    PMsgRequestPauseMsg *m;

    m = (PMsgRequestPauseMsg *)malloc(sizeof(PMsgRequestPauseMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgRequestPause;

    if ( strlen(s) == 0 ) m->reason = (char *)0;
    else {
      m->reason = (char *)malloc(strlen(s)+1);
      if ( ! m->reason ) { warn("malloc failed\n"); return (PMsgMsg *)0; }
      strcpy(m->reason,s+(s[0] == '\\'));
    }
    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"Ready") == 0 ) {
    PMsgReadyMsg *m;

    m = (PMsgReadyMsg *)malloc(sizeof(PMsgReadyMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgReady;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"Discard") == 0  || strcmp(type,"d") == 0 ) {
    PMsgDiscardMsg *m;

    m = (PMsgDiscardMsg *)malloc(sizeof(PMsgDiscardMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgDiscard;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    if ( an_int < 0 || an_int > 1 ) { warn("protocol error\n") ; return (PMsgMsg *)0; }
    m->calling = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"NoClaim") == 0  || strcmp(type,"n") == 0 ) {
    PMsgNoClaimMsg *m;

    m = (PMsgNoClaimMsg *)malloc(sizeof(PMsgNoClaimMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgNoClaim;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->discard = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"Pung") == 0  || strcmp(type,"p") == 0 ) {
    PMsgPungMsg *m;

    m = (PMsgPungMsg *)malloc(sizeof(PMsgPungMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgPung;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->discard = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"FormClosedPung") == 0 ) {
    PMsgFormClosedPungMsg *m;

    m = (PMsgFormClosedPungMsg *)malloc(sizeof(PMsgFormClosedPungMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgFormClosedPung;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"Kong") == 0  || strcmp(type,"k") == 0 ) {
    PMsgKongMsg *m;

    m = (PMsgKongMsg *)malloc(sizeof(PMsgKongMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgKong;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->discard = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"DeclareClosedKong") == 0  || strcmp(type,"ck") == 0 ) {
    PMsgDeclareClosedKongMsg *m;

    m = (PMsgDeclareClosedKongMsg *)malloc(sizeof(PMsgDeclareClosedKongMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgDeclareClosedKong;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"AddToPung") == 0 ) {
    PMsgAddToPungMsg *m;

    m = (PMsgAddToPungMsg *)malloc(sizeof(PMsgAddToPungMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgAddToPung;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"QueryMahJong") == 0 ) {
    PMsgQueryMahJongMsg *m;

    m = (PMsgQueryMahJongMsg *)malloc(sizeof(PMsgQueryMahJongMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgQueryMahJong;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"Chow") == 0  || strcmp(type,"c") == 0 ) {
    PMsgChowMsg *m;

    m = (PMsgChowMsg *)malloc(sizeof(PMsgChowMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgChow;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->discard = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%31s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->cpos = string_cpos(little_string);
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"FormClosedChow") == 0 ) {
    PMsgFormClosedChowMsg *m;

    m = (PMsgFormClosedChowMsg *)malloc(sizeof(PMsgFormClosedChowMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgFormClosedChow;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"DeclareWashOut") == 0 ) {
    PMsgDeclareWashOutMsg *m;

    m = (PMsgDeclareWashOutMsg *)malloc(sizeof(PMsgDeclareWashOutMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgDeclareWashOut;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"MahJong") == 0 ) {
    PMsgMahJongMsg *m;

    m = (PMsgMahJongMsg *)malloc(sizeof(PMsgMahJongMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgMahJong;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->discard = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"Pair") == 0 ) {
    PMsgPairMsg *m;

    m = (PMsgPairMsg *)malloc(sizeof(PMsgPairMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgPair;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"FormClosedPair") == 0 ) {
    PMsgFormClosedPairMsg *m;

    m = (PMsgFormClosedPairMsg *)malloc(sizeof(PMsgFormClosedPairMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgFormClosedPair;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"SpecialSet") == 0 ) {
    PMsgSpecialSetMsg *m;

    m = (PMsgSpecialSetMsg *)malloc(sizeof(PMsgSpecialSetMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgSpecialSet;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"FormClosedSpecialSet") == 0 ) {
    PMsgFormClosedSpecialSetMsg *m;

    m = (PMsgFormClosedSpecialSetMsg *)malloc(sizeof(PMsgFormClosedSpecialSetMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgFormClosedSpecialSet;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"ShowTiles") == 0 ) {
    PMsgShowTilesMsg *m;

    m = (PMsgShowTilesMsg *)malloc(sizeof(PMsgShowTilesMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgShowTiles;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"SetPlayerOption") == 0 ) {
    PMsgSetPlayerOptionMsg *m;

    m = (PMsgSetPlayerOptionMsg *)malloc(sizeof(PMsgSetPlayerOptionMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgSetPlayerOption;

    if ( sscanf(s,"%31s%n",little_string,&n) ==0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->option = player_scan_PlayerOption(little_string);
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    if ( an_int < 0 || an_int > 1 ) { warn("protocol error\n") ; return (PMsgMsg *)0; }
    m->ack = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->value = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->text = (char *)0;
    else {
      m->text = (char *)malloc(strlen(s)+1);
      if ( ! m->text ) { warn("malloc failed\n"); return (PMsgMsg *)0; }
      strcpy(m->text,s+(s[0] == '\\'));
    }
    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"SetGameOption") == 0 ) {
    PMsgSetGameOptionMsg *m;

    m = (PMsgSetGameOptionMsg *)malloc(sizeof(PMsgSetGameOptionMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgSetGameOption;

    if ( sscanf(s,"%16s%n",little_string,&n) == 0 ) { warn("protocol error\n");  return (PMsgMsg *)0; }
    strmcpy(m->optname,little_string,16);
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->optvalue = (char *)0;
    else {
      m->optvalue = (char *)malloc(strlen(s)+1);
      if ( ! m->optvalue ) { warn("malloc failed\n"); return (PMsgMsg *)0; }
      strcpy(m->optvalue,s+(s[0] == '\\'));
    }
    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"QueryGameOption") == 0 ) {
    PMsgQueryGameOptionMsg *m;

    m = (PMsgQueryGameOptionMsg *)malloc(sizeof(PMsgQueryGameOptionMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgQueryGameOption;

    if ( sscanf(s,"%16s%n",little_string,&n) == 0 ) { warn("protocol error\n");  return (PMsgMsg *)0; }
    strmcpy(m->optname,little_string,16);
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"ListGameOptions") == 0 ) {
    PMsgListGameOptionsMsg *m;

    m = (PMsgListGameOptionsMsg *)malloc(sizeof(PMsgListGameOptionsMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgListGameOptions;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    if ( an_int < 0 || an_int > 1 ) { warn("protocol error\n") ; return (PMsgMsg *)0; }
    m->include_disabled = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"ChangeManager") == 0 ) {
    PMsgChangeManagerMsg *m;

    m = (PMsgChangeManagerMsg *)malloc(sizeof(PMsgChangeManagerMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgChangeManager;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->manager = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"SendMessage") == 0 ) {
    PMsgSendMessageMsg *m;

    m = (PMsgSendMessageMsg *)malloc(sizeof(PMsgSendMessageMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgSendMessage;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->addressee = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->text = (char *)0;
    else {
      m->text = (char *)malloc(strlen(s)+1);
      if ( ! m->text ) { warn("malloc failed\n"); return (PMsgMsg *)0; }
      strcpy(m->text,s+(s[0] == '\\'));
    }
    return (PMsgMsg *) m;
  }
  if ( strcmp(type,"SwapTile") == 0  || strcmp(type,"st") == 0 ) {
    PMsgSwapTileMsg *m;

    m = (PMsgSwapTileMsg *)malloc(sizeof(PMsgSwapTileMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (PMsgMsg *)0; }

    m->type = PMsgSwapTile;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->oldtile = tile_decode(little_string);
    if ( m->oldtile == ErrorTile ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    m->newtile = tile_decode(little_string);
    if ( m->newtile == ErrorTile ) { warn("protocol error\n"); return (PMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (PMsgMsg *) m;
  }
