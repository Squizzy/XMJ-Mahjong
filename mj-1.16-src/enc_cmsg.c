  case CMsgError: 
    { CMsgErrorMsg *m UNUSED = (CMsgErrorMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Error %d %s%s\r\n", m->seqno,(m->error && (m->error[0] == ' ' || m->error[0] == '\\')) ? "\\" : "", m->error ? m->error : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgStateSaved: 
    { CMsgStateSavedMsg *m UNUSED = (CMsgStateSavedMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"StateSaved %d %s%s\r\n", m->id,(m->filename && (m->filename[0] == ' ' || m->filename[0] == '\\')) ? "\\" : "", m->filename ? m->filename : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgInfoTiles: 
    { CMsgInfoTilesMsg *m UNUSED = (CMsgInfoTilesMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"InfoTiles %d %s%s\r\n", m->id,(m->tileinfo && (m->tileinfo[0] == ' ' || m->tileinfo[0] == '\\')) ? "\\" : "", m->tileinfo ? m->tileinfo : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgConnectReply: 
    { CMsgConnectReplyMsg *m UNUSED = (CMsgConnectReplyMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"ConnectReply %d %d %s%s\r\n", m->pvers, m->id,(m->reason && (m->reason[0] == ' ' || m->reason[0] == '\\')) ? "\\" : "", m->reason ? m->reason : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgAuthReqd: 
    { CMsgAuthReqdMsg *m UNUSED = (CMsgAuthReqdMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"AuthReqd %s %s%s\r\n", m->authtype ,(m->authdata && (m->authdata[0] == ' ' || m->authdata[0] == '\\')) ? "\\" : "", m->authdata ? m->authdata : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgRedirect: 
    { CMsgRedirectMsg *m UNUSED = (CMsgRedirectMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Redirect %s%s\r\n",(m->dest && (m->dest[0] == ' ' || m->dest[0] == '\\')) ? "\\" : "", m->dest ? m->dest : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgReconnect: 
    { CMsgReconnectMsg *m UNUSED = (CMsgReconnectMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Reconnect\r\n");
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayer: 
    { CMsgPlayerMsg *m UNUSED = (CMsgPlayerMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Player %d %s%s\r\n", m->id,(m->name && (m->name[0] == ' ' || m->name[0] == '\\')) ? "\\" : "", m->name ? m->name : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgGame: 
    { CMsgGameMsg *m UNUSED = (CMsgGameMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Game %d %d %d %d %c %d %d %d %d %d %d %d %d\r\n", m->east, m->south, m->west, m->north, windletter(m->round), m->hands_as_east, m->firsteast, m->east_score, m->south_score, m->west_score, m->north_score, m->protversion, m->manager);
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgNewRound: 
    { CMsgNewRoundMsg *m UNUSED = (CMsgNewRoundMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"NewRound %c\r\n", windletter(m->round));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgNewHand: 
    { CMsgNewHandMsg *m UNUSED = (CMsgNewHandMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"NewHand %d %d %d\r\n", m->east, m->start_wall, m->start_stack);
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerDraws: 
    { CMsgPlayerDrawsMsg *m UNUSED = (CMsgPlayerDrawsMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerDraws %d %s\r\n", m->id, tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerDrawsLoose: 
    { CMsgPlayerDrawsLooseMsg *m UNUSED = (CMsgPlayerDrawsLooseMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerDrawsLoose %d %s\r\n", m->id, tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerDeclaresSpecial: 
    { CMsgPlayerDeclaresSpecialMsg *m UNUSED = (CMsgPlayerDeclaresSpecialMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerDeclaresSpecial %d %s\r\n", m->id, tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgStartPlay: 
    { CMsgStartPlayMsg *m UNUSED = (CMsgStartPlayMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"StartPlay %d\r\n", m->id);
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgStopPlay: 
    { CMsgStopPlayMsg *m UNUSED = (CMsgStopPlayMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"StopPlay %s%s\r\n",(m->reason && (m->reason[0] == ' ' || m->reason[0] == '\\')) ? "\\" : "", m->reason ? m->reason : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPause: 
    { CMsgPauseMsg *m UNUSED = (CMsgPauseMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Pause %d %d %s%s\r\n", m->exempt, m->requestor,(m->reason && (m->reason[0] == ' ' || m->reason[0] == '\\')) ? "\\" : "", m->reason ? m->reason : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerReady: 
    { CMsgPlayerReadyMsg *m UNUSED = (CMsgPlayerReadyMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerReady %d\r\n", m->id);
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerDiscards: 
    { CMsgPlayerDiscardsMsg *m UNUSED = (CMsgPlayerDiscardsMsg *) msg;
    badfield = 0;
    if ( m->calling < 0 || m->calling > 1 ) { warn("bad boolean in message, assuming TRUE"); badfield = 1 ; };
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerDiscards %d %s %d %d\r\n", m->id, tile_code(m->tile), m->discard, (badfield ? 1 : m->calling));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerDoesntClaim: 
    { CMsgPlayerDoesntClaimMsg *m UNUSED = (CMsgPlayerDoesntClaimMsg *) msg;
    badfield = 0;
    if ( m->timeout < 0 || m->timeout > 1 ) { warn("bad boolean in message, assuming TRUE"); badfield = 1 ; };
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerDoesntClaim %d %d %d\r\n", m->id, m->discard, (badfield ? 1 : m->timeout));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgDangerousDiscard: 
    { CMsgDangerousDiscardMsg *m UNUSED = (CMsgDangerousDiscardMsg *) msg;
    badfield = 0;
    if ( m->nochoice < 0 || m->nochoice > 1 ) { warn("bad boolean in message, assuming TRUE"); badfield = 1 ; };
      while (1) {
        int size = snprintf(buf,buf_size,"DangerousDiscard %d %d %d\r\n", m->id, m->discard, (badfield ? 1 : m->nochoice));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerClaimsPung: 
    { CMsgPlayerClaimsPungMsg *m UNUSED = (CMsgPlayerClaimsPungMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerClaimsPung %d %d\r\n", m->id, m->discard);
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgClaimDenied: 
    { CMsgClaimDeniedMsg *m UNUSED = (CMsgClaimDeniedMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"ClaimDenied %d %s%s\r\n", m->id,(m->reason && (m->reason[0] == ' ' || m->reason[0] == '\\')) ? "\\" : "", m->reason ? m->reason : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerPungs: 
    { CMsgPlayerPungsMsg *m UNUSED = (CMsgPlayerPungsMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerPungs %d %s\r\n", m->id, tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerFormsClosedPung: 
    { CMsgPlayerFormsClosedPungMsg *m UNUSED = (CMsgPlayerFormsClosedPungMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerFormsClosedPung %d %s\r\n", m->id, tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerClaimsKong: 
    { CMsgPlayerClaimsKongMsg *m UNUSED = (CMsgPlayerClaimsKongMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerClaimsKong %d %d\r\n", m->id, m->discard);
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerKongs: 
    { CMsgPlayerKongsMsg *m UNUSED = (CMsgPlayerKongsMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerKongs %d %s\r\n", m->id, tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerDeclaresClosedKong: 
    { CMsgPlayerDeclaresClosedKongMsg *m UNUSED = (CMsgPlayerDeclaresClosedKongMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerDeclaresClosedKong %d %s %d\r\n", m->id, tile_code(m->tile), m->discard);
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerAddsToPung: 
    { CMsgPlayerAddsToPungMsg *m UNUSED = (CMsgPlayerAddsToPungMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerAddsToPung %d %s %d\r\n", m->id, tile_code(m->tile), m->discard);
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerRobsKong: 
    { CMsgPlayerRobsKongMsg *m UNUSED = (CMsgPlayerRobsKongMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerRobsKong %d %s\r\n", m->id, tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgCanMahJong: 
    { CMsgCanMahJongMsg *m UNUSED = (CMsgCanMahJongMsg *) msg;
    badfield = 0;
    if ( m->answer < 0 || m->answer > 1 ) { warn("bad boolean in message, assuming TRUE"); badfield = 1 ; };
      while (1) {
        int size = snprintf(buf,buf_size,"CanMahJong %s %d\r\n", tile_code(m->tile), (badfield ? 1 : m->answer));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerClaimsChow: 
    { CMsgPlayerClaimsChowMsg *m UNUSED = (CMsgPlayerClaimsChowMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerClaimsChow %d %d %s\r\n", m->id, m->discard, cpos_string(m->cpos));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerChows: 
    { CMsgPlayerChowsMsg *m UNUSED = (CMsgPlayerChowsMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerChows %d %s %s\r\n", m->id, tile_code(m->tile), cpos_string(m->cpos));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerFormsClosedChow: 
    { CMsgPlayerFormsClosedChowMsg *m UNUSED = (CMsgPlayerFormsClosedChowMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerFormsClosedChow %d %s\r\n", m->id, tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgWashOut: 
    { CMsgWashOutMsg *m UNUSED = (CMsgWashOutMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"WashOut %s%s\r\n",(m->reason && (m->reason[0] == ' ' || m->reason[0] == '\\')) ? "\\" : "", m->reason ? m->reason : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerClaimsMahJong: 
    { CMsgPlayerClaimsMahJongMsg *m UNUSED = (CMsgPlayerClaimsMahJongMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerClaimsMahJong %d %d\r\n", m->id, m->discard);
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerMahJongs: 
    { CMsgPlayerMahJongsMsg *m UNUSED = (CMsgPlayerMahJongsMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerMahJongs %d %s\r\n", m->id, tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerPairs: 
    { CMsgPlayerPairsMsg *m UNUSED = (CMsgPlayerPairsMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerPairs %d %s\r\n", m->id, tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerFormsClosedPair: 
    { CMsgPlayerFormsClosedPairMsg *m UNUSED = (CMsgPlayerFormsClosedPairMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerFormsClosedPair %d %s\r\n", m->id, tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerSpecialSet: 
    { CMsgPlayerSpecialSetMsg *m UNUSED = (CMsgPlayerSpecialSetMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerSpecialSet %d %s %s%s\r\n", m->id, tile_code(m->tile),(m->tiles && (m->tiles[0] == ' ' || m->tiles[0] == '\\')) ? "\\" : "", m->tiles ? m->tiles : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerFormsClosedSpecialSet: 
    { CMsgPlayerFormsClosedSpecialSetMsg *m UNUSED = (CMsgPlayerFormsClosedSpecialSetMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerFormsClosedSpecialSet %d %s%s\r\n", m->id,(m->tiles && (m->tiles[0] == ' ' || m->tiles[0] == '\\')) ? "\\" : "", m->tiles ? m->tiles : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerShowsTiles: 
    { CMsgPlayerShowsTilesMsg *m UNUSED = (CMsgPlayerShowsTilesMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerShowsTiles %d %s%s\r\n", m->id,(m->tiles && (m->tiles[0] == ' ' || m->tiles[0] == '\\')) ? "\\" : "", m->tiles ? m->tiles : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgHandScore: 
    { CMsgHandScoreMsg *m UNUSED = (CMsgHandScoreMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"HandScore %d %d %s%s\r\n", m->id, m->score,(m->explanation && (m->explanation[0] == ' ' || m->explanation[0] == '\\')) ? "\\" : "", m->explanation ? m->explanation : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgSettlement: 
    { CMsgSettlementMsg *m UNUSED = (CMsgSettlementMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Settlement %d %d %d %d %s%s\r\n", m->east, m->south, m->west, m->north,(m->explanation && (m->explanation[0] == ' ' || m->explanation[0] == '\\')) ? "\\" : "", m->explanation ? m->explanation : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgPlayerOptionSet: 
    { CMsgPlayerOptionSetMsg *m UNUSED = (CMsgPlayerOptionSetMsg *) msg;
    badfield = 0;
    if ( m->ack < 0 || m->ack > 1 ) { warn("bad boolean in message, assuming TRUE"); badfield = 1 ; };
      while (1) {
        int size = snprintf(buf,buf_size,"PlayerOptionSet %s %d %d %s%s\r\n", player_print_PlayerOption(m->option), (badfield ? 1 : m->ack), m->value,(m->text && (m->text[0] == ' ' || m->text[0] == '\\')) ? "\\" : "", m->text ? m->text : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgGameOver: 
    { CMsgGameOverMsg *m UNUSED = (CMsgGameOverMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"GameOver\r\n");
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgGameOption: 
    { CMsgGameOptionMsg *m UNUSED = (CMsgGameOptionMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"GameOption %d %s\r\n", m->id, protocol_print_GameOptionEntry(&m->optentry));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgChangeManager: 
    { CMsgChangeManagerMsg *m UNUSED = (CMsgChangeManagerMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"ChangeManager %d %d\r\n", m->id, m->manager);
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgMessage: 
    { CMsgMessageMsg *m UNUSED = (CMsgMessageMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Message %d %d %s%s\r\n", m->sender, m->addressee,(m->text && (m->text[0] == ' ' || m->text[0] == '\\')) ? "\\" : "", m->text ? m->text : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgWall: 
    { CMsgWallMsg *m UNUSED = (CMsgWallMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Wall %s%s\r\n",(m->wall && (m->wall[0] == ' ' || m->wall[0] == '\\')) ? "\\" : "", m->wall ? m->wall : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgComment: 
    { CMsgCommentMsg *m UNUSED = (CMsgCommentMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"# %s%s\r\n",(m->comment && (m->comment[0] == ' ' || m->comment[0] == '\\')) ? "\\" : "", m->comment ? m->comment : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
  case CMsgSwapTile: 
    { CMsgSwapTileMsg *m UNUSED = (CMsgSwapTileMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"SwapTile %d %s %s\r\n", m->id, tile_code(m->oldtile), tile_code(m->newtile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_cmsg");
          exit(-1);
        }
      }
    }
    break;
