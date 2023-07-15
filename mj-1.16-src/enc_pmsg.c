  case PMsgSaveState: 
    { PMsgSaveStateMsg *m UNUSED = (PMsgSaveStateMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"SaveState %s%s\r\n",(m->filename && (m->filename[0] == ' ' || m->filename[0] == '\\')) ? "\\" : "", m->filename ? m->filename : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgLoadState: 
    { PMsgLoadStateMsg *m UNUSED = (PMsgLoadStateMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"LoadState %s%s\r\n",(m->filename && (m->filename[0] == ' ' || m->filename[0] == '\\')) ? "\\" : "", m->filename ? m->filename : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgConnect: 
    { PMsgConnectMsg *m UNUSED = (PMsgConnectMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Connect %d %d %s%s\r\n", m->pvers, m->last_id,(m->name && (m->name[0] == ' ' || m->name[0] == '\\')) ? "\\" : "", m->name ? m->name : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgAuthInfo: 
    { PMsgAuthInfoMsg *m UNUSED = (PMsgAuthInfoMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"AuthInfo %s %s%s\r\n", m->authtype ,(m->authdata && (m->authdata[0] == ' ' || m->authdata[0] == '\\')) ? "\\" : "", m->authdata ? m->authdata : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgNewAuthInfo: 
    { PMsgNewAuthInfoMsg *m UNUSED = (PMsgNewAuthInfoMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"NewAuthInfo %s %s%s\r\n", m->authtype ,(m->authdata && (m->authdata[0] == ' ' || m->authdata[0] == '\\')) ? "\\" : "", m->authdata ? m->authdata : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgRequestReconnect: 
    { PMsgRequestReconnectMsg *m UNUSED = (PMsgRequestReconnectMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"RequestReconnect\r\n");
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgDisconnect: 
    { PMsgDisconnectMsg *m UNUSED = (PMsgDisconnectMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Disconnect\r\n");
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgDeclareSpecial: 
    { PMsgDeclareSpecialMsg *m UNUSED = (PMsgDeclareSpecialMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"DeclareSpecial %s\r\n", tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgRequestPause: 
    { PMsgRequestPauseMsg *m UNUSED = (PMsgRequestPauseMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"RequestPause %s%s\r\n",(m->reason && (m->reason[0] == ' ' || m->reason[0] == '\\')) ? "\\" : "", m->reason ? m->reason : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgReady: 
    { PMsgReadyMsg *m UNUSED = (PMsgReadyMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Ready\r\n");
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgDiscard: 
    { PMsgDiscardMsg *m UNUSED = (PMsgDiscardMsg *) msg;
    badfield = 0;
    if ( m->calling < 0 || m->calling > 1 ) { warn("bad boolean in message, assuming TRUE"); badfield = 1 ; };
      while (1) {
        int size = snprintf(buf,buf_size,"Discard %s %d\r\n", tile_code(m->tile), (badfield ? 1 : m->calling));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgNoClaim: 
    { PMsgNoClaimMsg *m UNUSED = (PMsgNoClaimMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"NoClaim %d\r\n", m->discard);
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgPung: 
    { PMsgPungMsg *m UNUSED = (PMsgPungMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Pung %d\r\n", m->discard);
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgFormClosedPung: 
    { PMsgFormClosedPungMsg *m UNUSED = (PMsgFormClosedPungMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"FormClosedPung %s\r\n", tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgKong: 
    { PMsgKongMsg *m UNUSED = (PMsgKongMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Kong %d\r\n", m->discard);
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgDeclareClosedKong: 
    { PMsgDeclareClosedKongMsg *m UNUSED = (PMsgDeclareClosedKongMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"DeclareClosedKong %s\r\n", tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgAddToPung: 
    { PMsgAddToPungMsg *m UNUSED = (PMsgAddToPungMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"AddToPung %s\r\n", tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgQueryMahJong: 
    { PMsgQueryMahJongMsg *m UNUSED = (PMsgQueryMahJongMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"QueryMahJong %s\r\n", tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgChow: 
    { PMsgChowMsg *m UNUSED = (PMsgChowMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Chow %d %s\r\n", m->discard, cpos_string(m->cpos));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgFormClosedChow: 
    { PMsgFormClosedChowMsg *m UNUSED = (PMsgFormClosedChowMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"FormClosedChow %s\r\n", tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgDeclareWashOut: 
    { PMsgDeclareWashOutMsg *m UNUSED = (PMsgDeclareWashOutMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"DeclareWashOut\r\n");
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgMahJong: 
    { PMsgMahJongMsg *m UNUSED = (PMsgMahJongMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"MahJong %d\r\n", m->discard);
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgPair: 
    { PMsgPairMsg *m UNUSED = (PMsgPairMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"Pair\r\n");
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgFormClosedPair: 
    { PMsgFormClosedPairMsg *m UNUSED = (PMsgFormClosedPairMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"FormClosedPair %s\r\n", tile_code(m->tile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgSpecialSet: 
    { PMsgSpecialSetMsg *m UNUSED = (PMsgSpecialSetMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"SpecialSet\r\n");
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgFormClosedSpecialSet: 
    { PMsgFormClosedSpecialSetMsg *m UNUSED = (PMsgFormClosedSpecialSetMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"FormClosedSpecialSet\r\n");
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgShowTiles: 
    { PMsgShowTilesMsg *m UNUSED = (PMsgShowTilesMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"ShowTiles\r\n");
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgSetPlayerOption: 
    { PMsgSetPlayerOptionMsg *m UNUSED = (PMsgSetPlayerOptionMsg *) msg;
    badfield = 0;
    if ( m->ack < 0 || m->ack > 1 ) { warn("bad boolean in message, assuming TRUE"); badfield = 1 ; };
      while (1) {
        int size = snprintf(buf,buf_size,"SetPlayerOption %s %d %d %s%s\r\n", player_print_PlayerOption(m->option), (badfield ? 1 : m->ack), m->value,(m->text && (m->text[0] == ' ' || m->text[0] == '\\')) ? "\\" : "", m->text ? m->text : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgSetGameOption: 
    { PMsgSetGameOptionMsg *m UNUSED = (PMsgSetGameOptionMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"SetGameOption %s %s%s\r\n", m->optname ,(m->optvalue && (m->optvalue[0] == ' ' || m->optvalue[0] == '\\')) ? "\\" : "", m->optvalue ? m->optvalue : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgQueryGameOption: 
    { PMsgQueryGameOptionMsg *m UNUSED = (PMsgQueryGameOptionMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"QueryGameOption %s\r\n", m->optname );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgListGameOptions: 
    { PMsgListGameOptionsMsg *m UNUSED = (PMsgListGameOptionsMsg *) msg;
    badfield = 0;
    if ( m->include_disabled < 0 || m->include_disabled > 1 ) { warn("bad boolean in message, assuming TRUE"); badfield = 1 ; };
      while (1) {
        int size = snprintf(buf,buf_size,"ListGameOptions %d\r\n", (badfield ? 1 : m->include_disabled));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgChangeManager: 
    { PMsgChangeManagerMsg *m UNUSED = (PMsgChangeManagerMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"ChangeManager %d\r\n", m->manager);
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgSendMessage: 
    { PMsgSendMessageMsg *m UNUSED = (PMsgSendMessageMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"SendMessage %d %s%s\r\n", m->addressee,(m->text && (m->text[0] == ' ' || m->text[0] == '\\')) ? "\\" : "", m->text ? m->text : "" );
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
  case PMsgSwapTile: 
    { PMsgSwapTileMsg *m UNUSED = (PMsgSwapTileMsg *) msg;
      while (1) {
        int size = snprintf(buf,buf_size,"SwapTile %d %s %s\r\n", m->id, tile_code(m->oldtile), tile_code(m->newtile));
        if ((size >= 0)&&(size < (int)buf_size))
          break;
        buf_size = (size >= 0)?((size_t)size+1):(buf_size > 0)?(buf_size*2):1024;
        buf = realloc(buf, buf_size);
        if (!buf) {
          perror("encode_pmsg");
          exit(-1);
        }
      }
    }
    break;
