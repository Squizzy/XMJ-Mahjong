  if ( strcmp(type,"Error") == 0 ) {
    CMsgErrorMsg *m;

    m = (CMsgErrorMsg *)malloc(sizeof(CMsgErrorMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgError;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->seqno = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->error = (char *)0;
    else {
      m->error = (char *)malloc(strlen(s)+1);
      if ( ! m->error ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->error,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"StateSaved") == 0 ) {
    CMsgStateSavedMsg *m;

    m = (CMsgStateSavedMsg *)malloc(sizeof(CMsgStateSavedMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgStateSaved;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->filename = (char *)0;
    else {
      m->filename = (char *)malloc(strlen(s)+1);
      if ( ! m->filename ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->filename,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"InfoTiles") == 0 ) {
    CMsgInfoTilesMsg *m;

    m = (CMsgInfoTilesMsg *)malloc(sizeof(CMsgInfoTilesMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgInfoTiles;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->tileinfo = (char *)0;
    else {
      m->tileinfo = (char *)malloc(strlen(s)+1);
      if ( ! m->tileinfo ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->tileinfo,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"ConnectReply") == 0 ) {
    CMsgConnectReplyMsg *m;

    m = (CMsgConnectReplyMsg *)malloc(sizeof(CMsgConnectReplyMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgConnectReply;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->pvers = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->reason = (char *)0;
    else {
      m->reason = (char *)malloc(strlen(s)+1);
      if ( ! m->reason ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->reason,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"AuthReqd") == 0 ) {
    CMsgAuthReqdMsg *m;

    m = (CMsgAuthReqdMsg *)malloc(sizeof(CMsgAuthReqdMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgAuthReqd;

    if ( sscanf(s,"%16s%n",little_string,&n) == 0 ) { warn("protocol error\n");  return (CMsgMsg *)0; }
    strmcpy(m->authtype,little_string,16);
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->authdata = (char *)0;
    else {
      m->authdata = (char *)malloc(strlen(s)+1);
      if ( ! m->authdata ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->authdata,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"Redirect") == 0 ) {
    CMsgRedirectMsg *m;

    m = (CMsgRedirectMsg *)malloc(sizeof(CMsgRedirectMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgRedirect;

    if ( strlen(s) == 0 ) m->dest = (char *)0;
    else {
      m->dest = (char *)malloc(strlen(s)+1);
      if ( ! m->dest ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->dest,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"Reconnect") == 0 ) {
    CMsgReconnectMsg *m;

    m = (CMsgReconnectMsg *)malloc(sizeof(CMsgReconnectMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgReconnect;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"Player") == 0 ) {
    CMsgPlayerMsg *m;

    m = (CMsgPlayerMsg *)malloc(sizeof(CMsgPlayerMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayer;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->name = (char *)0;
    else {
      m->name = (char *)malloc(strlen(s)+1);
      if ( ! m->name ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->name,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"Game") == 0 ) {
    CMsgGameMsg *m;

    m = (CMsgGameMsg *)malloc(sizeof(CMsgGameMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgGame;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->east = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->south = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->west = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->north = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%c%n",&a_char,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->round = letterwind(a_char);
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->hands_as_east = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->firsteast = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->east_score = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->south_score = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->west_score = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->north_score = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->protversion = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->manager = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"NewRound") == 0 ) {
    CMsgNewRoundMsg *m;

    m = (CMsgNewRoundMsg *)malloc(sizeof(CMsgNewRoundMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgNewRound;

    if ( sscanf(s,"%c%n",&a_char,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->round = letterwind(a_char);
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"NewHand") == 0 ) {
    CMsgNewHandMsg *m;

    m = (CMsgNewHandMsg *)malloc(sizeof(CMsgNewHandMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgNewHand;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->east = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->start_wall = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->start_stack = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerDraws") == 0 ) {
    CMsgPlayerDrawsMsg *m;

    m = (CMsgPlayerDrawsMsg *)malloc(sizeof(CMsgPlayerDrawsMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerDraws;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerDrawsLoose") == 0 ) {
    CMsgPlayerDrawsLooseMsg *m;

    m = (CMsgPlayerDrawsLooseMsg *)malloc(sizeof(CMsgPlayerDrawsLooseMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerDrawsLoose;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerDeclaresSpecial") == 0 ) {
    CMsgPlayerDeclaresSpecialMsg *m;

    m = (CMsgPlayerDeclaresSpecialMsg *)malloc(sizeof(CMsgPlayerDeclaresSpecialMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerDeclaresSpecial;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"StartPlay") == 0 ) {
    CMsgStartPlayMsg *m;

    m = (CMsgStartPlayMsg *)malloc(sizeof(CMsgStartPlayMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgStartPlay;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"StopPlay") == 0 ) {
    CMsgStopPlayMsg *m;

    m = (CMsgStopPlayMsg *)malloc(sizeof(CMsgStopPlayMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgStopPlay;

    if ( strlen(s) == 0 ) m->reason = (char *)0;
    else {
      m->reason = (char *)malloc(strlen(s)+1);
      if ( ! m->reason ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->reason,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"Pause") == 0 ) {
    CMsgPauseMsg *m;

    m = (CMsgPauseMsg *)malloc(sizeof(CMsgPauseMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPause;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->exempt = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->requestor = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->reason = (char *)0;
    else {
      m->reason = (char *)malloc(strlen(s)+1);
      if ( ! m->reason ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->reason,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerReady") == 0 ) {
    CMsgPlayerReadyMsg *m;

    m = (CMsgPlayerReadyMsg *)malloc(sizeof(CMsgPlayerReadyMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerReady;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerDiscards") == 0 ) {
    CMsgPlayerDiscardsMsg *m;

    m = (CMsgPlayerDiscardsMsg *)malloc(sizeof(CMsgPlayerDiscardsMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerDiscards;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->discard = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    if ( an_int < 0 || an_int > 1 ) { warn("protocol error\n") ; return (CMsgMsg *)0; }
    m->calling = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerDoesntClaim") == 0 ) {
    CMsgPlayerDoesntClaimMsg *m;

    m = (CMsgPlayerDoesntClaimMsg *)malloc(sizeof(CMsgPlayerDoesntClaimMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerDoesntClaim;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->discard = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    if ( an_int < 0 || an_int > 1 ) { warn("protocol error\n") ; return (CMsgMsg *)0; }
    m->timeout = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"DangerousDiscard") == 0 ) {
    CMsgDangerousDiscardMsg *m;

    m = (CMsgDangerousDiscardMsg *)malloc(sizeof(CMsgDangerousDiscardMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgDangerousDiscard;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->discard = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    if ( an_int < 0 || an_int > 1 ) { warn("protocol error\n") ; return (CMsgMsg *)0; }
    m->nochoice = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerClaimsPung") == 0 ) {
    CMsgPlayerClaimsPungMsg *m;

    m = (CMsgPlayerClaimsPungMsg *)malloc(sizeof(CMsgPlayerClaimsPungMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerClaimsPung;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->discard = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"ClaimDenied") == 0 ) {
    CMsgClaimDeniedMsg *m;

    m = (CMsgClaimDeniedMsg *)malloc(sizeof(CMsgClaimDeniedMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgClaimDenied;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->reason = (char *)0;
    else {
      m->reason = (char *)malloc(strlen(s)+1);
      if ( ! m->reason ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->reason,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerPungs") == 0 ) {
    CMsgPlayerPungsMsg *m;

    m = (CMsgPlayerPungsMsg *)malloc(sizeof(CMsgPlayerPungsMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerPungs;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerFormsClosedPung") == 0 ) {
    CMsgPlayerFormsClosedPungMsg *m;

    m = (CMsgPlayerFormsClosedPungMsg *)malloc(sizeof(CMsgPlayerFormsClosedPungMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerFormsClosedPung;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerClaimsKong") == 0 ) {
    CMsgPlayerClaimsKongMsg *m;

    m = (CMsgPlayerClaimsKongMsg *)malloc(sizeof(CMsgPlayerClaimsKongMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerClaimsKong;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->discard = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerKongs") == 0 ) {
    CMsgPlayerKongsMsg *m;

    m = (CMsgPlayerKongsMsg *)malloc(sizeof(CMsgPlayerKongsMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerKongs;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerDeclaresClosedKong") == 0 ) {
    CMsgPlayerDeclaresClosedKongMsg *m;

    m = (CMsgPlayerDeclaresClosedKongMsg *)malloc(sizeof(CMsgPlayerDeclaresClosedKongMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerDeclaresClosedKong;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->discard = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerAddsToPung") == 0 ) {
    CMsgPlayerAddsToPungMsg *m;

    m = (CMsgPlayerAddsToPungMsg *)malloc(sizeof(CMsgPlayerAddsToPungMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerAddsToPung;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->discard = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerRobsKong") == 0 ) {
    CMsgPlayerRobsKongMsg *m;

    m = (CMsgPlayerRobsKongMsg *)malloc(sizeof(CMsgPlayerRobsKongMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerRobsKong;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"CanMahJong") == 0 ) {
    CMsgCanMahJongMsg *m;

    m = (CMsgCanMahJongMsg *)malloc(sizeof(CMsgCanMahJongMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgCanMahJong;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    if ( an_int < 0 || an_int > 1 ) { warn("protocol error\n") ; return (CMsgMsg *)0; }
    m->answer = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerClaimsChow") == 0 ) {
    CMsgPlayerClaimsChowMsg *m;

    m = (CMsgPlayerClaimsChowMsg *)malloc(sizeof(CMsgPlayerClaimsChowMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerClaimsChow;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->discard = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%31s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->cpos = string_cpos(little_string);
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerChows") == 0 ) {
    CMsgPlayerChowsMsg *m;

    m = (CMsgPlayerChowsMsg *)malloc(sizeof(CMsgPlayerChowsMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerChows;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%31s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->cpos = string_cpos(little_string);
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerFormsClosedChow") == 0 ) {
    CMsgPlayerFormsClosedChowMsg *m;

    m = (CMsgPlayerFormsClosedChowMsg *)malloc(sizeof(CMsgPlayerFormsClosedChowMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerFormsClosedChow;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"WashOut") == 0 ) {
    CMsgWashOutMsg *m;

    m = (CMsgWashOutMsg *)malloc(sizeof(CMsgWashOutMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgWashOut;

    if ( strlen(s) == 0 ) m->reason = (char *)0;
    else {
      m->reason = (char *)malloc(strlen(s)+1);
      if ( ! m->reason ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->reason,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerClaimsMahJong") == 0 ) {
    CMsgPlayerClaimsMahJongMsg *m;

    m = (CMsgPlayerClaimsMahJongMsg *)malloc(sizeof(CMsgPlayerClaimsMahJongMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerClaimsMahJong;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->discard = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerMahJongs") == 0 ) {
    CMsgPlayerMahJongsMsg *m;

    m = (CMsgPlayerMahJongsMsg *)malloc(sizeof(CMsgPlayerMahJongsMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerMahJongs;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerPairs") == 0 ) {
    CMsgPlayerPairsMsg *m;

    m = (CMsgPlayerPairsMsg *)malloc(sizeof(CMsgPlayerPairsMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerPairs;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerFormsClosedPair") == 0 ) {
    CMsgPlayerFormsClosedPairMsg *m;

    m = (CMsgPlayerFormsClosedPairMsg *)malloc(sizeof(CMsgPlayerFormsClosedPairMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerFormsClosedPair;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerSpecialSet") == 0 ) {
    CMsgPlayerSpecialSetMsg *m;

    m = (CMsgPlayerSpecialSetMsg *)malloc(sizeof(CMsgPlayerSpecialSetMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerSpecialSet;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->tile = tile_decode(little_string);
    if ( m->tile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->tiles = (char *)0;
    else {
      m->tiles = (char *)malloc(strlen(s)+1);
      if ( ! m->tiles ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->tiles,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerFormsClosedSpecialSet") == 0 ) {
    CMsgPlayerFormsClosedSpecialSetMsg *m;

    m = (CMsgPlayerFormsClosedSpecialSetMsg *)malloc(sizeof(CMsgPlayerFormsClosedSpecialSetMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerFormsClosedSpecialSet;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->tiles = (char *)0;
    else {
      m->tiles = (char *)malloc(strlen(s)+1);
      if ( ! m->tiles ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->tiles,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerShowsTiles") == 0 ) {
    CMsgPlayerShowsTilesMsg *m;

    m = (CMsgPlayerShowsTilesMsg *)malloc(sizeof(CMsgPlayerShowsTilesMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerShowsTiles;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->tiles = (char *)0;
    else {
      m->tiles = (char *)malloc(strlen(s)+1);
      if ( ! m->tiles ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->tiles,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"HandScore") == 0 ) {
    CMsgHandScoreMsg *m;

    m = (CMsgHandScoreMsg *)malloc(sizeof(CMsgHandScoreMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgHandScore;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->score = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->explanation = (char *)0;
    else {
      m->explanation = (char *)malloc(strlen(s)+1);
      if ( ! m->explanation ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->explanation,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"Settlement") == 0 ) {
    CMsgSettlementMsg *m;

    m = (CMsgSettlementMsg *)malloc(sizeof(CMsgSettlementMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgSettlement;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->east = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->south = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->west = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->north = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->explanation = (char *)0;
    else {
      m->explanation = (char *)malloc(strlen(s)+1);
      if ( ! m->explanation ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->explanation,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"PlayerOptionSet") == 0 ) {
    CMsgPlayerOptionSetMsg *m;

    m = (CMsgPlayerOptionSetMsg *)malloc(sizeof(CMsgPlayerOptionSetMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgPlayerOptionSet;

    if ( sscanf(s,"%31s%n",little_string,&n) ==0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->option = player_scan_PlayerOption(little_string);
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    if ( an_int < 0 || an_int > 1 ) { warn("protocol error\n") ; return (CMsgMsg *)0; }
    m->ack = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->value = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->text = (char *)0;
    else {
      m->text = (char *)malloc(strlen(s)+1);
      if ( ! m->text ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->text,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"GameOver") == 0 ) {
    CMsgGameOverMsg *m;

    m = (CMsgGameOverMsg *)malloc(sizeof(CMsgGameOverMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgGameOver;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"GameOption") == 0 ) {
    CMsgGameOptionMsg *m;

    m = (CMsgGameOptionMsg *)malloc(sizeof(CMsgGameOptionMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgGameOption;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( (goe = protocol_scan_GameOptionEntry(s)) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    memcpy(&m->optentry,goe,sizeof(GameOptionEntry));
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"ChangeManager") == 0 ) {
    CMsgChangeManagerMsg *m;

    m = (CMsgChangeManagerMsg *)malloc(sizeof(CMsgChangeManagerMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgChangeManager;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->manager = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"Message") == 0 ) {
    CMsgMessageMsg *m;

    m = (CMsgMessageMsg *)malloc(sizeof(CMsgMessageMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgMessage;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->sender = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->addressee = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( strlen(s) == 0 ) m->text = (char *)0;
    else {
      m->text = (char *)malloc(strlen(s)+1);
      if ( ! m->text ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->text,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"Wall") == 0 ) {
    CMsgWallMsg *m;

    m = (CMsgWallMsg *)malloc(sizeof(CMsgWallMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgWall;

    if ( strlen(s) == 0 ) m->wall = (char *)0;
    else {
      m->wall = (char *)malloc(strlen(s)+1);
      if ( ! m->wall ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->wall,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"Comment") == 0  || strcmp(type,"#") == 0 ) {
    CMsgCommentMsg *m;

    m = (CMsgCommentMsg *)malloc(sizeof(CMsgCommentMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgComment;

    if ( strlen(s) == 0 ) m->comment = (char *)0;
    else {
      m->comment = (char *)malloc(strlen(s)+1);
      if ( ! m->comment ) { warn("malloc failed\n"); return (CMsgMsg *)0; }
      strcpy(m->comment,s+(s[0] == '\\'));
    }
    return (CMsgMsg *) m;
  }
  if ( strcmp(type,"SwapTile") == 0 ) {
    CMsgSwapTileMsg *m;

    m = (CMsgSwapTileMsg *)malloc(sizeof(CMsgSwapTileMsg));
    if ( ! m ) { warn("malloc failed\n") ; return (CMsgMsg *)0; }

    m->type = CMsgSwapTile;

    if ( sscanf(s,"%d%n",&an_int,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->id = an_int;
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->oldtile = tile_decode(little_string);
    if ( m->oldtile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    if ( sscanf(s,"%2s%n",little_string,&n) == 0 ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    m->newtile = tile_decode(little_string);
    if ( m->newtile == ErrorTile ) { warn("protocol error\n"); return (CMsgMsg *)0; }
    s += n;
    while ( isspace(*s) ) s++;

    return (CMsgMsg *) m;
  }
