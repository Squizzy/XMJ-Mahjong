static int cmsg_size[] = {
-(int)sizeof(CMsgErrorMsg),
-(int)sizeof(CMsgInfoTilesMsg),
-(int)sizeof(CMsgStateSavedMsg),
0,
0,
0,
0,
0,
0,
0,
-(int)sizeof(CMsgConnectReplyMsg),
(int)sizeof(CMsgReconnectMsg),
-(int)sizeof(CMsgAuthReqdMsg),
-(int)sizeof(CMsgRedirectMsg),
0,
0,
0,
0,
0,
0,
-(int)sizeof(CMsgPlayerMsg),
0,
0,
0,
0,
0,
0,
0,
0,
(int)sizeof(CMsgNewRoundMsg),
(int)sizeof(CMsgGameMsg),
(int)sizeof(CMsgNewHandMsg),
0,
0,
(int)sizeof(CMsgPlayerDeclaresSpecialMsg),
(int)sizeof(CMsgStartPlayMsg),
-(int)sizeof(CMsgStopPlayMsg),
-(int)sizeof(CMsgPauseMsg),
(int)sizeof(CMsgPlayerReadyMsg),
0,
(int)sizeof(CMsgPlayerDrawsMsg),
(int)sizeof(CMsgPlayerDrawsLooseMsg),
0,
0,
0,
0,
0,
0,
0,
0,
(int)sizeof(CMsgPlayerDiscardsMsg),
-(int)sizeof(CMsgClaimDeniedMsg),
(int)sizeof(CMsgPlayerDoesntClaimMsg),
0,
0,
(int)sizeof(CMsgDangerousDiscardMsg),
0,
0,
0,
0,
(int)sizeof(CMsgPlayerClaimsPungMsg),
(int)sizeof(CMsgPlayerPungsMsg),
(int)sizeof(CMsgPlayerFormsClosedPungMsg),
0,
0,
0,
0,
0,
0,
0,
(int)sizeof(CMsgPlayerClaimsKongMsg),
(int)sizeof(CMsgPlayerKongsMsg),
0,
0,
0,
0,
0,
0,
0,
0,
(int)sizeof(CMsgPlayerDeclaresClosedKongMsg),
(int)sizeof(CMsgPlayerAddsToPungMsg),
0,
0,
0,
(int)sizeof(CMsgPlayerRobsKongMsg),
0,
(int)sizeof(CMsgCanMahJongMsg),
0,
0,
(int)sizeof(CMsgPlayerClaimsChowMsg),
(int)sizeof(CMsgPlayerChowsMsg),
(int)sizeof(CMsgPlayerFormsClosedChowMsg),
0,
0,
0,
0,
0,
0,
-(int)sizeof(CMsgWashOutMsg),
(int)sizeof(CMsgPlayerClaimsMahJongMsg),
(int)sizeof(CMsgPlayerMahJongsMsg),
(int)sizeof(CMsgPlayerPairsMsg),
(int)sizeof(CMsgPlayerFormsClosedPairMsg),
0,
-(int)sizeof(CMsgPlayerShowsTilesMsg),
-(int)sizeof(CMsgPlayerSpecialSetMsg),
-(int)sizeof(CMsgPlayerFormsClosedSpecialSetMsg),
0,
0,
-(int)sizeof(CMsgPlayerOptionSetMsg),
0,
0,
0,
0,
-(int)sizeof(CMsgHandScoreMsg),
0,
0,
0,
0,
-(int)sizeof(CMsgSettlementMsg),
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
(int)sizeof(CMsgGameOverMsg),
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
(int)sizeof(CMsgGameOptionMsg),
0,
0,
0,
0,
0,
0,
0,
0,
0,
(int)sizeof(CMsgChangeManagerMsg),
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
-(int)sizeof(CMsgMessageMsg),
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
-(int)sizeof(CMsgWallMsg),
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
-(int)sizeof(CMsgCommentMsg),
(int)sizeof(CMsgSwapTileMsg),
};

int cmsg_size_of(ControllerMsgType t) { return cmsg_size[t]; }

CMsgMsg *cmsg_deepcopy(CMsgMsg *m) {
  CMsgMsg *n;
  int size;
  char *mc,*nc;

  size = cmsg_size_of(m->type);
  if ( size < 0 ) size *= -1;
  n = (CMsgMsg *)malloc(size);
  if ( ! n ) return n;

  memcpy((void *)n,(const void *)m,size);
  switch ( m->type ) {
  case CMsgPlayerFormsClosedSpecialSet:
    mc = ((CMsgPlayerFormsClosedSpecialSetMsg *)m)->tiles;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgPlayerFormsClosedSpecialSetMsg *)n)->tiles = nc;
    break;
  case CMsgConnectReply:
    mc = ((CMsgConnectReplyMsg *)m)->reason;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgConnectReplyMsg *)n)->reason = nc;
    break;
  case CMsgPlayerOptionSet:
    mc = ((CMsgPlayerOptionSetMsg *)m)->text;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgPlayerOptionSetMsg *)n)->text = nc;
    break;
  case CMsgPlayer:
    mc = ((CMsgPlayerMsg *)m)->name;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgPlayerMsg *)n)->name = nc;
    break;
  case CMsgPlayerSpecialSet:
    mc = ((CMsgPlayerSpecialSetMsg *)m)->tiles;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgPlayerSpecialSetMsg *)n)->tiles = nc;
    break;
  case CMsgWashOut:
    mc = ((CMsgWashOutMsg *)m)->reason;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgWashOutMsg *)n)->reason = nc;
    break;
  case CMsgError:
    mc = ((CMsgErrorMsg *)m)->error;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgErrorMsg *)n)->error = nc;
    break;
  case CMsgHandScore:
    mc = ((CMsgHandScoreMsg *)m)->explanation;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgHandScoreMsg *)n)->explanation = nc;
    break;
  case CMsgPause:
    mc = ((CMsgPauseMsg *)m)->reason;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgPauseMsg *)n)->reason = nc;
    break;
  case CMsgClaimDenied:
    mc = ((CMsgClaimDeniedMsg *)m)->reason;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgClaimDeniedMsg *)n)->reason = nc;
    break;
  case CMsgSettlement:
    mc = ((CMsgSettlementMsg *)m)->explanation;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgSettlementMsg *)n)->explanation = nc;
    break;
  case CMsgComment:
    mc = ((CMsgCommentMsg *)m)->comment;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgCommentMsg *)n)->comment = nc;
    break;
  case CMsgRedirect:
    mc = ((CMsgRedirectMsg *)m)->dest;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgRedirectMsg *)n)->dest = nc;
    break;
  case CMsgMessage:
    mc = ((CMsgMessageMsg *)m)->text;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgMessageMsg *)n)->text = nc;
    break;
  case CMsgStopPlay:
    mc = ((CMsgStopPlayMsg *)m)->reason;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgStopPlayMsg *)n)->reason = nc;
    break;
  case CMsgAuthReqd:
    mc = ((CMsgAuthReqdMsg *)m)->authdata;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgAuthReqdMsg *)n)->authdata = nc;
    break;
  case CMsgWall:
    mc = ((CMsgWallMsg *)m)->wall;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgWallMsg *)n)->wall = nc;
    break;
  case CMsgPlayerShowsTiles:
    mc = ((CMsgPlayerShowsTilesMsg *)m)->tiles;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgPlayerShowsTilesMsg *)n)->tiles = nc;
    break;
  case CMsgInfoTiles:
    mc = ((CMsgInfoTilesMsg *)m)->tileinfo;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgInfoTilesMsg *)n)->tileinfo = nc;
    break;
  case CMsgStateSaved:
    mc = ((CMsgStateSavedMsg *)m)->filename;
    if ( mc ) {
      nc = (char *)malloc(strlen(mc)+1);
      if ( ! nc ) return NULL;
      strcpy(nc,mc);
    } else {
      nc = NULL;
    }
    ((CMsgStateSavedMsg *)n)->filename = nc;
    break;
  default:
      ;
  }
  return n;
}

void cmsg_deepfree(CMsgMsg *m) {
  switch ( m->type ) {
  case CMsgPlayerFormsClosedSpecialSet:
    if ( ((CMsgPlayerFormsClosedSpecialSetMsg *)m)->tiles )
      free((void *)((CMsgPlayerFormsClosedSpecialSetMsg *)m)->tiles);
    break;
  case CMsgConnectReply:
    if ( ((CMsgConnectReplyMsg *)m)->reason )
      free((void *)((CMsgConnectReplyMsg *)m)->reason);
    break;
  case CMsgPlayerOptionSet:
    if ( ((CMsgPlayerOptionSetMsg *)m)->text )
      free((void *)((CMsgPlayerOptionSetMsg *)m)->text);
    break;
  case CMsgPlayer:
    if ( ((CMsgPlayerMsg *)m)->name )
      free((void *)((CMsgPlayerMsg *)m)->name);
    break;
  case CMsgPlayerSpecialSet:
    if ( ((CMsgPlayerSpecialSetMsg *)m)->tiles )
      free((void *)((CMsgPlayerSpecialSetMsg *)m)->tiles);
    break;
  case CMsgWashOut:
    if ( ((CMsgWashOutMsg *)m)->reason )
      free((void *)((CMsgWashOutMsg *)m)->reason);
    break;
  case CMsgError:
    if ( ((CMsgErrorMsg *)m)->error )
      free((void *)((CMsgErrorMsg *)m)->error);
    break;
  case CMsgHandScore:
    if ( ((CMsgHandScoreMsg *)m)->explanation )
      free((void *)((CMsgHandScoreMsg *)m)->explanation);
    break;
  case CMsgPause:
    if ( ((CMsgPauseMsg *)m)->reason )
      free((void *)((CMsgPauseMsg *)m)->reason);
    break;
  case CMsgClaimDenied:
    if ( ((CMsgClaimDeniedMsg *)m)->reason )
      free((void *)((CMsgClaimDeniedMsg *)m)->reason);
    break;
  case CMsgSettlement:
    if ( ((CMsgSettlementMsg *)m)->explanation )
      free((void *)((CMsgSettlementMsg *)m)->explanation);
    break;
  case CMsgComment:
    if ( ((CMsgCommentMsg *)m)->comment )
      free((void *)((CMsgCommentMsg *)m)->comment);
    break;
  case CMsgRedirect:
    if ( ((CMsgRedirectMsg *)m)->dest )
      free((void *)((CMsgRedirectMsg *)m)->dest);
    break;
  case CMsgMessage:
    if ( ((CMsgMessageMsg *)m)->text )
      free((void *)((CMsgMessageMsg *)m)->text);
    break;
  case CMsgStopPlay:
    if ( ((CMsgStopPlayMsg *)m)->reason )
      free((void *)((CMsgStopPlayMsg *)m)->reason);
    break;
  case CMsgAuthReqd:
    if ( ((CMsgAuthReqdMsg *)m)->authdata )
      free((void *)((CMsgAuthReqdMsg *)m)->authdata);
    break;
  case CMsgWall:
    if ( ((CMsgWallMsg *)m)->wall )
      free((void *)((CMsgWallMsg *)m)->wall);
    break;
  case CMsgPlayerShowsTiles:
    if ( ((CMsgPlayerShowsTilesMsg *)m)->tiles )
      free((void *)((CMsgPlayerShowsTilesMsg *)m)->tiles);
    break;
  case CMsgInfoTiles:
    if ( ((CMsgInfoTilesMsg *)m)->tileinfo )
      free((void *)((CMsgInfoTilesMsg *)m)->tileinfo);
    break;
  case CMsgStateSaved:
    if ( ((CMsgStateSavedMsg *)m)->filename )
      free((void *)((CMsgStateSavedMsg *)m)->filename);
    break;
  default:
      ;
  }
  free((void *)m);
}

