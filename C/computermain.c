void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int iVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;

    l_U432 = 0;
    uVar9 = GET_CURRENT_LANGUAGE();
    while (IS_REPLAY_SAVING())
    {
        WAIT( 0 );
    }
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    l_U508 = 0;
    l_U504 = LOAD_TXD( "webBorders" );
    switch (sub_93( ref l_U509 ))
    {
        case 0:
        l_U505[0] = GET_TEXTURE( l_U504, "twatLeft" );
        l_U505[1] = GET_TEXTURE( l_U504, "twatRight" );
        break;
        case 1:
        l_U505[0] = GET_TEXTURE( l_U504, "olegLeft" );
        l_U505[1] = GET_TEXTURE( l_U504, "olegRight" );
        break;
        default:
        l_U505[0] = GET_TEXTURE( l_U504, "defaultLeft" );
        l_U505[1] = GET_TEXTURE( l_U504, "defaultRight" );
        break;
    }
    l_U508 = 1;
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1581();
    }
    if (GET_IS_WIDESCREEN())
    {
        g_U943 = 1;
        g_U939 = 0.16000000;
        g_U940 = 0.75000000;
        if (GET_IS_HIDEF())
        {
            g_U941 = 640.00000000;
        }
        else
        {
            g_U941 = 480.00000000;
        }
        sub_2423( ref l_U450[3], 0.63500000, 0.09000000, 0.05000000, 0.06000000, 1 );
        sub_2423( ref l_U450[0], 0.68000000, 0.09000000, 0.05000000, 0.06000000, 1 );
        sub_2423( ref l_U450[1], 0.78000000, 0.09000000, 0.05000000, 0.06000000, 1 );
        sub_2423( ref l_U450[2], 0.83000000, 0.09000000, 0.05000000, 0.06000000, 1 );
        sub_2423( ref l_U450[4], 0.37000000, 0.09000000, 0.46000000, 0.05000000, 1 );
        sub_2650( ref uVar4, 0.50000000 - (g_U940 * 0.50000000), 0.50000000 + (g_U940 * 0.50000000) );
        sub_2650( ref uVar6, 0.00000000, 1.00000000 );
    }
    else
    {
        g_U943 = 0;
        g_U939 = 0.16000000;
        g_U940 = 1.00000000;
        if (GET_IS_HIDEF())
        {
            g_U941 = 640.00000000;
        }
        else
        {
            g_U941 = 480.00000000;
        }
        sub_2423( ref l_U450[3], 0.66000000, 0.09000000, 0.06000000, 0.06000000, 1 );
        sub_2423( ref l_U450[0], 0.71500000, 0.09000000, 0.06000000, 0.06000000, 1 );
        sub_2423( ref l_U450[1], 0.84000000, 0.09000000, 0.06000000, 0.06000000, 1 );
        sub_2423( ref l_U450[2], 0.90000000, 0.09000000, 0.06000000, 0.06000000, 1 );
        sub_2423( ref l_U450[4], 0.34000000, 0.09000000, 0.54500000, 0.05000000, 1 );
        sub_2650( ref uVar4, 0.05000000, 0.95000000 );
        sub_2650( ref uVar6, 0.05000000, 0.95000000 );
    }
    g_U942 = ((g_U941 - 25) * g_U939) * -1;
    l_U498 = LOAD_TXD( "computer" );
    l_U499[0] = GET_TEXTURE( l_U498, "mousePointer" );
    l_U499[1] = GET_TEXTURE( l_U498, "mouseLink" );
    l_U499[2] = GET_TEXTURE( l_U498, "mouseWait" );
    l_U503 = 1;
    g_U851._fU0 = 0.50000000;
    g_U851._fU4 = 0.50000000;
    g_U851._fU8 = -1;
    g_U851._fU12 = -1;
    g_U851._fU16 = -1;
    g_U851._fU20 = 0;
    l_U476 = 1;
    l_U477 = LOAD_TXD( "BROWSER" );
    l_U478[0] = GET_TEXTURE( l_U477, "forbut" );
    l_U478[1] = GET_TEXTURE( l_U477, "mailbut" );
    l_U478[2] = GET_TEXTURE( l_U477, "homebut" );
    l_U478[3] = GET_TEXTURE( l_U477, "backbut" );
    l_U478[4] = GET_TEXTURE( l_U477, "forbutOff" );
    l_U478[5] = GET_TEXTURE( l_U477, "mailbutOff" );
    l_U478[6] = GET_TEXTURE( l_U477, "homebutOff" );
    l_U478[7] = GET_TEXTURE( l_U477, "TopBarPattern" );
    l_U478[8] = GET_TEXTURE( l_U477, "side" );
    l_U478[9] = GET_TEXTURE( l_U477, "scrollBar" );
    l_U433[3] = GET_TEXTURE( l_U477, "keyboard" );
    l_U433[4] = GET_TEXTURE( l_U477, "keyboardButtonHover" );
    l_U433[5] = GET_TEXTURE( l_U477, "keyboardButtonOn" );
    l_U433[6] = GET_TEXTURE( l_U477, "keyboardButtonDoubleHover" );
    l_U433[7] = GET_TEXTURE( l_U477, "keyboardButtonDoubleOn" );
    uVar10 = GET_TXD( "buttons" );
    if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
    {
        l_U433[1] = GET_TEXTURE( uVar10, "X_butt" );
        l_U433[0] = GET_TEXTURE( uVar10, "A_butt" );
        l_U433[2] = GET_TEXTURE( uVar10, "B_butt" );
    }
    else
    {
        l_U433[1] = GET_TEXTURE( uVar10, "p_square" );
        l_U433[0] = GET_TEXTURE( uVar10, "p_cross" );
        l_U433[2] = GET_TEXTURE( uVar10, "p_circle" );
    }
    BEGIN_CAM_COMMANDS( ref iVar11 );
    if (iVar11 > 1)
    {
        ;
    }
    CREATE_HTML_VIEWPORT( ref g_U857._fU4 );
    SET_VIEWPORT_PRIORITY( g_U857._fU4, 1000 );
    ACTIVATE_VIEWPORT( g_U857._fU4, 1 );
    sub_3989();
    sub_4977( 0 );
    sub_5107( 0, 0 );
    END_CAM_COMMANDS( ref iVar11 );
    DISPLAY_RADAR( 0 );
    sub_5154();
    OVERRIDE_FREEZE_FLAGS( 1 );
    DO_SCREEN_FADE_IN( 500 );
    while (IS_SCREEN_FADING())
    {
        WAIT( 0 );
        HIDE_HUD_AND_RADAR_THIS_FRAME();
        SET_SPRITES_DRAW_BEFORE_FADE( 1 );
        DRAW_SPRITE( l_U499[0], g_U851._fU0, g_U851._fU4, 0.10000000, 0.12000000, 0.00000000, 255, 255, 255, 255 );
        sub_1633();
    }
    g_U857._fU92 = 0;
    if (COMPARE_STRING( ref g_U857._fU44, "hidden/OScafe.html" ))
    {
        if (IS_SCORE_GREATER( sub_2233(), 0 ))
        {
            ADD_SCORE( sub_2233(), -1 );
        }
    }
    g_U857._fU324 = 1;
    while (true)
    {
        WAIT( 0 );
        HIDE_HUD_AND_RADAR_THIS_FRAME();
        SET_SPRITES_DRAW_BEFORE_FADE( 1 );
        DISABLE_PAUSE_MENU( 1 );
        g_U857._fU232 = {l_U30[l_U29]};
        g_U851._fU12 = -1;
        g_U857._fU312 = 0;
        g_U857._fU316 = 0;
        g_U857._fU320 = 0;
        if (g_U857._fU0 == 1)
        {
            if (NOT g_U10978)
            {
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT_HELP_FOREVER( "COMP_LOGOUT" );
                }
            }
        }
        else if (g_U857._fU0 != 0)
        {
            if ((sub_9889( ref uVar9 )) AND (NOT l_U489))
            {
                if (NOT g_U857._fU324)
                {
                    sub_9979( "currentOne", 1, 1 );
                }
            }
        }
        if (NOT g_U857._fU92)
        {
            if (NOT l_U489)
            {
                sub_10236();
            }
            sub_10705( uVar4._fU0, uVar4._fU4, uVar6._fU0, uVar6._fU4 );
            if (NOT l_U489)
            {
                sub_10915();
                if (g_U857._fU0 == 4)
                {
                    iVar8 = sub_11364();
                }
                else
                {
                    iVar8 = 6;
                }
                if (sub_11616())
                {
                    sub_12030();
                }
                else
                {
                    switch (sub_15627())
                    {
                        case 0:
                        PLAY_SOUND_FRONTEND( -1, "MOUSE_SINGLE_CLICK" );
                        switch (g_U857._fU0)
                        {
                            case 1:
                            switch (g_U851._fU16)
                            {
                                case 1001:
                                SETTIMERB( 0 );
                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "COMP_LOGOUT" ))
                                {
                                    CLEAR_HELP();
                                }
                                sub_16292( "www.eyefind.info" );
                                sub_12030();
                                sub_5107( 0, 0 );
                                g_U857._fU0 = 2;
                                break;
                                case 1000:
                                sub_1581();
                                break;
                            }
                            break;
                            case 3:
                            if (g_U851._fU8 != -1)
                            {
                                if (g_U851._fU16 == -1)
                                {
                                    if (NOT (COMPARE_STRING( GET_WEB_PAGE_LINK_HREF( g_U857._fU4, g_U851._fU8 ), "BACK" )))
                                    {
                                        if (sub_16292( GET_WEB_PAGE_LINK_HREF( g_U857._fU4, g_U851._fU8 ) ))
                                        {
                                            sub_12030();
                                            sub_5107( 0, 0 );
                                        }
                                    }
                                    else
                                    {
                                        sub_16612();
                                    }
                                }
                                else
                                {
                                    g_U851._fU12 = g_U851._fU16;
                                }
                            }
                            break;
                            case 4:
                            switch (iVar8)
                            {
                                case 3:
                                sub_16612();
                                break;
                                case 0:
                                sub_16935();
                                break;
                                case 1:
                                if (sub_16292( "mail.eyefind.info" ))
                                {
                                    sub_12030();
                                }
                                break;
                                case 2:
                                if (sub_16292( "www.eyefind.info" ))
                                {
                                    sub_12030();
                                }
                                break;
                                case 4:
                                sub_17244();
                                break;
                            }
                            break;
                        }
                        break;
                        case 1:
                        g_U857._fU320 = 1;
                        if (NOT g_U857._fU12)
                        {
                            switch (g_U857._fU0)
                            {
                                case 1:
                                sub_1581();
                                break;
                                case 3:
                                case 4:
                                sub_16680();
                                break;
                            }
                        }
                        break;
                        case 2:
                        RELOAD_WEB_PAGE( g_U857._fU4 );
                        break;
                        case 3:
                        switch (g_U857._fU0)
                        {
                            case 1:
                            sub_1581();
                            break;
                            default:
                            sub_16612();
                            break;
                        }
                        break;
                        case 4:
                        sub_16935();
                        break;
                    }
                }
            }
            else
            {
                HIDE_HELP_TEXT_THIS_FRAME();
                REQUEST_SCRIPT( ref l_U490 );
                if (HAS_SCRIPT_LOADED( ref l_U490 ))
                {
                    g_U857._fU16 = 0;
                    g_U857._fU324 = 1;
                    START_NEW_SCRIPT_WITH_ARGS( ref l_U490, ref l_U30[l_U29], 20, 1024 );
                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref l_U490 );
                    l_U489 = 0;
                    if (g_U857._fU0 == 2)
                    {
                        g_U857._fU0 = 3;
                    }
                }
            }
        }
        sub_17617( iVar8 );
        if (NOT g_U857._fU92)
        {
            if (l_U489)
            {
                DRAW_SPRITE( l_U499[2], g_U851._fU0, g_U851._fU4, 0.10000000, 0.12000000, 0.00000000, 255, 255, 255, 255 );
            }
            else if ((g_U851._fU8 == -1) AND (iVar8 == 6))
            {
                DRAW_SPRITE( l_U499[0], g_U851._fU0, g_U851._fU4, 0.10000000, 0.12000000, 0.00000000, 255, 255, 255, 255 );
            }
            else
            {
                DRAW_SPRITE( l_U499[1], g_U851._fU0, g_U851._fU4, 0.10000000, 0.12000000, 0.00000000, 255, 255, 255, 255 );
            }
        }
        if (g_U857._fU92)
        {
            switch (l_U445)
            {
                case 2:
                if (sub_19182())
                {
                    if (NOT (COMPARE_STRING( ref g_U857._fU100, "" )))
                    {
                        if (sub_16292( ref g_U857._fU100 ))
                        {
                            sub_12030();
                        }
                    }
                    l_U445 = 3;
                }
                break;
                case 5:
                g_U857._fU92 = 0;
                break;
            }
            sub_22240();
        }
        sub_1633();
        sub_24854();
    }
    return;
}

int sub_93(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    GET_ROOM_KEY_FROM_OBJECT( (uParam0^), ref uVar3 );
    StrCopy( ref g_U857._fU76, "NIKO", 16 );
    g_U857._fU40 = -1;
    switch (uVar3)
    {
        case -869201005:
        StrCopy( ref g_U857._fU44, "hidden/OScafe.html", 32 );
        return 0;
        break;
        case -1003789974:
        StrCopy( ref g_U857._fU44, "hidden/OSoleg.html", 32 );
        StrCopy( ref g_U857._fU76, "OLEG", 16 );
        g_U857._fU40 = 0;
        sub_272( g_U857._fU40 );
        return 1;
        break;
        default:
        StrCopy( ref g_U857._fU44, "hidden/OSdefault.html", 32 );
        break;
    }
    return 2;
}

void sub_272(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_313( 0, 12, 0, 16383, 16383, 65535, 1 );
        sub_313( 1, 13, 0, 16383, 16383, 65535, 1 );
        sub_313( 2, 11, 0, 16383, 16383, 65535, 1 );
        break;
        default:
    }
    return;
}

void sub_313(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    if (iParam0 < 3)
    {
        sub_342( uParam1, 0, ref g_U1369[iParam0] );
        sub_342( uParam2, 1, ref g_U1369[iParam0] );
        sub_342( uParam3, 2, ref g_U1369[iParam0] );
        sub_342( uParam4, 3, ref g_U1369[iParam0] );
        sub_342( uParam6, 4, ref g_U1369[iParam0] );
        sub_342( 1, 5, ref g_U1369[iParam0] );
        sub_342( uParam5, 6, ref g_U1369[iParam0] );
        sub_342( 0, 12, ref g_U1369[iParam0] );
        sub_342( 0, 11, ref g_U1369[iParam0] );
        sub_342( 0, 14, ref g_U1369[iParam0] );
        sub_342( 0, 13, ref g_U1369[iParam0] );
        iVar9 = iParam0;
        sub_936( ref iVar9, 1, 0, 7 );
        sub_342( iVar9, 8, ref g_U1369[iParam0] );
        sub_342( iVar9, 9, ref g_U1369[iParam0] );
        g_U1369[iParam0]._fU20 = 0;
        g_U1369[iParam0]._fU24 = 0;
        g_U1369[iParam0]._fU28 = 0;
        g_U1369[iParam0]._fU32 = 0;
        g_U1369[iParam0]._fU16 = 0;
        g_U1369[iParam0]._fU36 = 0;
    }
    else
    {
        SCRIPT_ASSERT( "SIMON: - INCREASE SIZE OF MISSION INBOX" );
    }
    return;
}

void sub_342(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 22, 25, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 0, 15, uParam0 );
        break;
        case 8:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 16, 18, uParam0 );
        break;
        case 9:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 19, 21, uParam0 );
        break;
        case 11:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 27, 31, uParam0 );
        break;
        case 12:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 29, 31, uParam0 );
        break;
        case 13:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 26, uParam0 );
        break;
        case 14:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 26, 28, uParam0 );
        break;
    }
    return;
}

void sub_936(unknown uParam0, int iParam1, int iParam2, int iParam3)
{
    boolean bVar6;

    bVar6 = true;
    (uParam0^) += iParam1;
    while (bVar6)
    {
        if ((uParam0^) > iParam3)
        {
            (uParam0^) -= (iParam3 - iParam2) + 1;
        }
        else if ((uParam0^) < iParam2)
        {
            (uParam0^) += (iParam3 - iParam2) + 1;
        }
        else
        {
            bVar6 = false;
        }
    }
    return;
}

void sub_1581()
{
    int I;

    UNREGISTER_SCRIPT_WITH_AUDIO();
    SETTIMERA( 0 );
    OVERRIDE_FREEZE_FLAGS( 0 );
    DO_SCREEN_FADE_OUT_UNHACKED( 0 );
    while (IS_SCREEN_FADING_OUT())
    {
        sub_1633();
        WAIT( 0 );
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "COMP_LOGOUT" ))
    {
        CLEAR_HELP();
    }
    g_U857._fU0 = 0;
    if (DOES_VIEWPORT_EXIST( g_U857._fU4 ))
    {
        DESTROY_VIEWPORT( g_U857._fU4 );
    }
    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    WAIT( 0 );
    if (l_U503)
    {
        for ( I = 0; I <= (l_U499 - 1); I++ )
        {
            RELEASE_TEXTURE( l_U499[I] );
        }
        REMOVE_TXD( l_U498 );
    }
    if (l_U476)
    {
        for ( I = 0; I <= (l_U478 - 1); I++ )
        {
            RELEASE_TEXTURE( l_U478[I] );
        }
        for ( I = 0; I <= (l_U433 - 1); I++ )
        {
            RELEASE_TEXTURE( l_U433[I] );
        }
        REMOVE_TXD( l_U477 );
        l_U476 = 0;
    }
    if (l_U508)
    {
        RELEASE_TEXTURE( l_U505[0] );
        RELEASE_TEXTURE( l_U505[1] );
        REMOVE_TXD( l_U504 );
    }
    if (IS_PLAYER_PLAYING( sub_2233() ))
    {
        SET_PLAYER_CONTROL( sub_2233(), 1 );
    }
    DO_SCREEN_FADE_IN_UNHACKED( 0 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1633()
{
    if (g_U943)
    {
        if (GET_IS_HIDEF())
        {
            DRAW_SPRITE( l_U505[0], 0.06250000, 0.50000000, 0.12500000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
            DRAW_SPRITE( l_U505[1], 0.93750000, 0.50000000, 0.12500000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            DRAW_SPRITE( l_U505[0], 0.06250000, 0.66500000, 0.12500000, 1.33000000, 0.00000000, 255, 255, 255, 255 );
            DRAW_SPRITE( l_U505[1], 0.93750000, 0.66500000, 0.12500000, 1.33000000, 0.00000000, 255, 255, 255, 255 );
        }
    }
    return;
}

void sub_2233()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2423(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    ref iParam0->_fU0->_fU0 = uParam1;
    ref iParam0->_fU0->_fU4 = uParam2;
    ref iParam0->_fU8->_fU0 = uParam3;
    ref iParam0->_fU8->_fU4 = uParam4;
    iParam0->_fU16 = uParam5;
    return;
}

void sub_2650(int iParam0, unknown uParam1, unknown uParam2)
{
    iParam0->_fU0 = uParam1;
    iParam0->_fU4 = uParam2;
    return;
}

void sub_3989()
{
    unknown[3] uVar2;

    array(ref uVar2, 3);
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    uVar2[0] = CREATE_HTML_SCRIPT_OBJECT( "HDgap" );
    if (GET_IS_HIDEF())
    {
        ADD_TO_HTML_SCRIPT_OBJECT( uVar2[0], "<tr><td width="640" height="160" colspan="3"></td></tr>" );
    }
    sub_4153( ref uVar2[1], "iconWEB", "butinternet.jpg", "WEB", 1001, 1 );
    sub_4153( ref uVar2[2], "iconLOGOUT", "butlogout.jpg", "LOGOUT", 1000, 1 );
    if (g_U857._fU0 != 0)
    {
        sub_4864( 0 );
    }
    LOAD_WEB_PAGE( g_U857._fU4, ref g_U857._fU44 );
    g_U857._fU0 = 1;
    return;
}

void sub_4153(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
{
    (uParam0^) = CREATE_HTML_SCRIPT_OBJECT( uParam1 );
    if (bParam5)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<table width="108" height="96" border="0" cellpadding="0" cellspacing="10">" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<td width="88" height="44" align="center">" );
        sub_4353( uParam0, uParam2, uParam4, 44, 44 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</td>" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<td width="88" height="22" align="center" class="osBackground">" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam3 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</td>" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</table>" );
    }
    return;
}

void sub_4353(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    char[16] cVar7;

    string(ref cVar7, iParam2, 16);
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar7 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="imgs/" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="" );
    string(ref cVar7, iParam3, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar7 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" height="" );
    string(ref cVar7, iParam4, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar7 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    }
    return;
}

void sub_4864(boolean bParam0)
{
    if (bParam0)
    {
        g_U857._fU20 = g_U942;
    }
    else
    {
        g_U857._fU20 = 0.00000000;
    }
    SET_WEB_PAGE_SCROLL( g_U857._fU4, g_U857._fU20 );
    return;
}

void sub_4977(int iParam0)
{
    int I;

    if ((iParam0 >= 0) AND (iParam0 < 20))
    {
        for ( I = iParam0; I <= 19; I++ )
        {
            sub_5025( ref l_U30[I], "", -1, -1, -1 );
        }
    }
    return;
}

void sub_5025(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}

void sub_5107(unknown uParam0, unknown uParam1)
{
    l_U450[uParam0]._fU16 = uParam1;
    return;
}

void sub_5154()
{
    int I;
    int iVar3;
    int iVar4;
    int iVar5;

    I = 0;
    for ( I = 0; I < 6; I++ )
    {
        if (NOT g_U15654[11])
        {
            if (g_U1615[I] == 1)
            {
                if (sub_5218( g_U1622[I] ))
                {
                    if (sub_5477( ref g_U1548[I], 0 ))
                    {
                        g_U1615[I] = 2;
                    }
                }
            }
            else if (NOT (g_U1615[I] == 4))
            {
                iVar4 = I;
                if (iVar4 == 0)
                {
                    iVar3 = sub_6548( ref g_U1548[I], 0 );
                    if (iVar3 == 5)
                    {
                        sub_6692( 1 );
                        g_U1615[I] = 4;
                    }
                }
                if (iVar4 == 2)
                {
                    iVar3 = sub_6548( ref g_U1548[I], 0 );
                    if (iVar3 == 5)
                    {
                        sub_6692( 3 );
                        g_U1615[I] = 4;
                    }
                }
            }
        }
        else
        {
            sub_7422( ref g_U1548[I], 0, 0 );
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (g_U1681[I] == 1)
        {
            if (sub_5218( g_U1685[I] ))
            {
                if (sub_5477( ref g_U1647[I], 0 ))
                {
                    g_U1681[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U1710[I] == 1)
        {
            if (sub_5218( g_U1712[I] ))
            {
                if (sub_5477( ref g_U1698[I], 0 ))
                {
                    g_U1710[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 2; I++ )
    {
        if (g_U1740[I] == 1)
        {
            if (sub_5218( g_U1743[I] ))
            {
                if (sub_5477( ref g_U1717[I], 0 ))
                {
                    g_U1740[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U1764[I] == 1)
        {
            if (sub_5218( g_U1766[I] ))
            {
                if (sub_5477( ref g_U1752[I], 0 ))
                {
                    g_U1764[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 4; I++ )
    {
        if (g_U1816[I] == 1)
        {
            if (sub_5218( g_U1821[I] ))
            {
                if (sub_5477( ref g_U1771[I], 0 ))
                {
                    g_U1816[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        if (NOT g_U15654[11])
        {
            if (g_U1916[I] == 1)
            {
                if (sub_5218( g_U1924[I] ))
                {
                    if (sub_5477( ref g_U1838[I], 0 ))
                    {
                        g_U1916[I] = 2;
                    }
                }
            }
            else if (NOT (g_U1916[I] == 4))
            {
                iVar5 = I;
                if (iVar5 == 3)
                {
                    iVar3 = sub_6548( ref g_U1838[I], 0 );
                    if (iVar3 == 5)
                    {
                        sub_8144( 4 );
                        g_U1916[I] = 4;
                    }
                }
            }
        }
        else
        {
            sub_7422( ref g_U1838[I], 0, 0 );
        }
    }
    sub_8244();
    return;
}

int sub_5218(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar7 == uParam0._fU0._fU4) AND (iVar6 == uParam0._fU0._fU0))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_5387( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_5387(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

int sub_5477(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_5517())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_6204( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_6003( iVar5 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U968[I]._fU0[0] == -1)
        {
            g_U968[I] = {iParam0->_fU0};
            iParam0->_fU40 = I;
            I = 40;
            INCREMENT_INT_STAT_NO_MESSAGE( 368, 1 );
        }
    }
    g_U967 = 1;
    return 1;
}

int sub_5517()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_5551( 5, g_U968[I] )) == 7)
        {
            sub_6003( I );
            return 1;
        }
    }
    return 0;
}

int sub_5551(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_6003(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_6076( 39 );
    return;
}

void sub_6076(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_6204(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_6265( uParam0, g_U968[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = 40;
        }
    }
    return -1;
}

int sub_6265(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

int sub_6548(int iParam0, int iParam1)
{
    int I;

    if (iParam1 == 0)
    {
        ;
    }
    if (iParam0->_fU40 >= 0)
    {
        for ( I = iParam0->_fU40; I >= 0; I += -1 )
        {
            if (sub_6265( iParam0->_fU0, g_U968[I] ))
            {
                iParam0->_fU40 = I;
                return sub_5551( 4, g_U968[I] );
            }
        }
        iParam0->_fU40 = -2;
    }
    return 6;
}

void sub_6692(unknown uParam0)
{
    if (g_U1615[uParam0] == 0)
    {
        sub_6728( ref g_U1622[uParam0], 24, 0, 0 );
        g_U1615[uParam0] = 1;
    }
    return;
}

void sub_6728(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_6781( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_6913( iParam0 + 0 );
    }
    return;
}

void sub_6781(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_6913( iParam0 + 0 );
    }
    return;
}

void sub_6913(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_6944( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_6944(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_7422(int iParam0, int iParam1, unknown uParam2)
{
    int I;

    if (iParam1 == 0)
    {
        ;
    }
    if (iParam0->_fU40 >= 0)
    {
        for ( I = iParam0->_fU40; I >= 0; I += -1 )
        {
            if (sub_6265( iParam0->_fU0, g_U968[I] ))
            {
                g_U968[I]._fU36 = uParam2;
                iParam0->_fU40 = I;
            }
        }
    }
    return;
}

void sub_8144(unknown uParam0)
{
    if (g_U1916[uParam0] == 0)
    {
        sub_6728( ref g_U1924[uParam0], 4, 0, 0 );
        g_U1916[uParam0] = 1;
    }
    return;
}

void sub_8244()
{
    int I;
    unknown uVar3;

    I = 0;
    for ( I = 0; I < 1; I++ )
    {
        if (g_U1965[I] == 1)
        {
            if (sub_5218( g_U1967[I] ))
            {
                if (sub_5477( ref g_U1953[I], 0 ))
                {
                    g_U1965[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U1984[I] == 1)
        {
            if (sub_5218( g_U1986[I] ))
            {
                if (sub_5477( ref g_U1972[I], 0 ))
                {
                    g_U1984[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U2003[I] == 1)
        {
            if (sub_5218( g_U2005[I] ))
            {
                if (sub_5477( ref g_U1991[I], 0 ))
                {
                    g_U2003[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U2022[I] == 1)
        {
            if (sub_5218( g_U2024[I] ))
            {
                if (sub_5477( ref g_U2010[I], 0 ))
                {
                    g_U2022[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U2041[I] == 1)
        {
            if (sub_5218( g_U2043[I] ))
            {
                if (sub_5477( ref g_U2029[I], 0 ))
                {
                    g_U2041[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U2060[I] == 1)
        {
            if (sub_5218( g_U2062[I] ))
            {
                if (sub_5477( ref g_U2048[I], 0 ))
                {
                    g_U2060[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U2079[I] == 1)
        {
            if (sub_5218( g_U2081[I] ))
            {
                if (sub_5477( ref g_U2067[I], 0 ))
                {
                    g_U2079[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U2098[I] == 1)
        {
            if (sub_5218( g_U2100[I] ))
            {
                if (sub_5477( ref g_U2086[I], 0 ))
                {
                    g_U2098[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U2117[I] == 1)
        {
            if (sub_5218( g_U2119[I] ))
            {
                if (sub_5477( ref g_U2105[I], 0 ))
                {
                    g_U2117[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U2136[I] == 1)
        {
            if (sub_5218( g_U2138[I] ))
            {
                if (sub_5477( ref g_U2124[I], 0 ))
                {
                    g_U2136[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U2155[I] == 1)
        {
            if (sub_5218( g_U2157[I] ))
            {
                if (sub_5477( ref g_U2143[I], 0 ))
                {
                    g_U2155[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U2174[I] == 1)
        {
            if (sub_5218( g_U2176[I] ))
            {
                if (sub_5477( ref g_U2162[I], 0 ))
                {
                    g_U2174[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U2193[I] == 1)
        {
            if (sub_5218( g_U2195[I] ))
            {
                if (sub_5477( ref g_U2181[I], 0 ))
                {
                    g_U2193[I] = 2;
                }
            }
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U2212[I] == 1)
        {
            if (sub_5218( g_U2214[I] ))
            {
                if (sub_5477( ref g_U2200[I], 0 ))
                {
                    g_U2212[I] = 2;
                }
            }
        }
    }
    return;
}

int sub_9889(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_9979(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_4864( uParam1 );
    if (bParam2)
    {
        RELOAD_WEB_PAGE( g_U857._fU4 );
    }
    else
    {
        LOAD_WEB_PAGE( g_U857._fU4, uParam0 );
        StrCopy( ref g_U857._fU168, uParam0, 64 );
        g_U857._fU164 = 1;
    }
    sub_10059();
    return;
}

void sub_10059()
{
    float fVar2;

    fVar2 = GET_WEB_PAGE_HEIGHT( g_U857._fU4 );
    if (fVar2 > (g_U941 - (g_U939 * g_U941)))
    {
        g_U857._fU28 = 1;
        g_U857._fU32 = (1.00000000 - g_U939) / fVar2;
        g_U857._fU36 = (1.00000000 - g_U939) * ((g_U941 - (g_U939 * g_U941)) / fVar2);
    }
    else
    {
        g_U857._fU28 = 0;
    }
    return;
}

void sub_10236()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    float[3] fVar5;
    int iVar9;
    float fVar10;
    int iVar11;

    array(ref fVar5, 3);
    iVar9 = IS_BUTTON_PRESSED( 0, 3 );
    fVar10 = 1.00000000;
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar4, ref uVar4, ref iVar2, ref iVar3 );
    if ((iVar2 == 0) AND (iVar3 == 0))
    {
        if (IS_CONTROL_PRESSED( 2, 83 ))
        {
            iVar3 = 127;
            iVar9 = 1;
        }
        else if (IS_CONTROL_PRESSED( 2, 84 ))
        {
            iVar3 = 65409;
            iVar9 = 1;
        }
        GET_MOUSE_WHEEL( ref iVar11 );
        if (iVar11 != 0)
        {
            fVar10 = 3.00000000;
        }
    }
    if ((g_U857._fU0 > 2) AND (iVar9))
    {
        g_U857._fU20 += ((TO_FLOAT( iVar3 )) / 10.00000000) * fVar10;
        sub_10460( ref g_U857._fU20, g_U942, (GET_WEB_PAGE_HEIGHT( g_U857._fU4 )) - g_U941 );
        SET_WEB_PAGE_SCROLL( g_U857._fU4, g_U857._fU20 );
        fVar5[0] = g_U942;
        if (fVar5[0] < 0)
        {
            fVar5[0] *= -1;
        }
        fVar5[1] = (GET_WEB_PAGE_HEIGHT( g_U857._fU4 )) - g_U941;
        fVar5[2] = 100.00000000 / (fVar5[0] + fVar5[1]);
        fVar5[1] = fVar5[0] + g_U857._fU20;
        g_U857._fU24 = ROUND( fVar5[2] * fVar5[1] );
    }
    return;
}

void sub_10460(unknown uParam0, float fParam1, float fParam2)
{
    if (fParam2 < fParam1)
    {
        (uParam0^) = fParam1;
    }
    else if ((uParam0^) < fParam1)
    {
        (uParam0^) = fParam1;
    }
    else if ((uParam0^) > fParam2)
    {
        (uParam0^) = fParam2;
    };;;
    return;
}

void sub_10705(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    int iVar7;
    int iVar8;
    unknown uVar9;
    float fVar10;

    fVar10 = 1.00000000;
    if (NOT g_U851._fU20)
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar7, ref iVar8, ref uVar9, ref uVar9 );
        if ((iVar7 == 0) AND (iVar8 == 0))
        {
            GET_MOUSE_INPUT( ref iVar7, ref iVar8 );
            fVar10 = 15.00000000;
        }
        GET_FRAME_TIME( ref uVar6 );
        g_U851._fU0 += (((TO_FLOAT( iVar7 )) / 300.00000000) * uVar6) * fVar10;
        sub_10460( ref g_U851._fU0, uParam0, uParam1 );
        g_U851._fU4 += (((TO_FLOAT( iVar8 )) / 300.00000000) * uVar6) * fVar10;
        sub_10460( ref g_U851._fU4, uParam2, uParam3 );
    }
    return;
}

void sub_10915()
{
    int iVar2;

    switch (g_U857._fU0)
    {
        case 3:
        if (g_U851._fU4 <= g_U939)
        {
            g_U857._fU0 = 4;
        }
        break;
        case 4:
        if (g_U851._fU4 > g_U939)
        {
            g_U857._fU0 = 3;
        }
        break;
    }
    switch (g_U857._fU0)
    {
        case 1:
        case 3:
        if ((GET_NUMBER_OF_WEB_PAGE_LINKS( g_U857._fU4 )) != 0)
        {
            iVar2 = GET_WEB_PAGE_LINK_AT_POSN( g_U857._fU4, g_U851._fU0, g_U851._fU4 );
            if (iVar2 != g_U851._fU8)
            {
                if ((g_U851._fU8 != -1) AND (g_U851._fU8 < (GET_NUMBER_OF_WEB_PAGE_LINKS( g_U857._fU4 ))))
                {
                    sub_11157( g_U851._fU8, 0 );
                }
                g_U851._fU8 = iVar2;
                if (iVar2 != -1)
                {
                    sub_11157( g_U851._fU8, 1 );
                    if (NOT (STRING_TO_INT( GET_WEB_PAGE_LINK_HREF( g_U857._fU4, g_U851._fU8 ), ref g_U851._fU16 )))
                    {
                        g_U851._fU16 = -1;
                    }
                }
                else
                {
                    g_U851._fU16 = -1;
                }
            }
        }
        break;
        default:
        sub_11157( g_U851._fU8, 0 );
        g_U851._fU8 = -1;
        break;
    }
    return;
}

void sub_11157(int iParam0, unknown uParam1)
{
    if ((iParam0 != -1) AND (iParam0 < (GET_NUMBER_OF_WEB_PAGE_LINKS( g_U857._fU4 ))))
    {
        SET_WEB_PAGE_LINK_ACTIVE( g_U857._fU4, iParam0, uParam1 );
    }
    return;
}

int sub_11364()
{
    int Result;

    for ( Result = 0; Result <= (5 - 1); Result++ )
    {
        if (l_U450[Result]._fU16)
        {
            if ((g_U851._fU0 >= (l_U450[Result]._fU0._fU0 - (l_U450[Result]._fU8._fU0 * 0.50000000))) AND (g_U851._fU0 <= (l_U450[Result]._fU0._fU0 + (l_U450[Result]._fU8._fU0 * 0.50000000))))
            {
                if ((g_U851._fU4 >= (l_U450[Result]._fU0._fU4 - (l_U450[Result]._fU8._fU4 * 0.50000000))) AND (g_U851._fU4 <= (l_U450[Result]._fU0._fU4 + (l_U450[Result]._fU8._fU4 * 0.50000000))))
                {
                    return Result;
                }
            }
        }
    }
    return 6;
}

int sub_11616()
{
    if (g_U830)
    {
        g_U830 = 0;
        if (NOT (sub_11652( ref l_U30[l_U29], ref g_U831 )))
        {
            sub_11784( g_U831 );
            return 1;
        }
    }
    return 0;
}

int sub_11652(int iParam0, int iParam1)
{
    if (COMPARE_STRING( iParam0 + 0, iParam1 + 0 ))
    {
        if (iParam0->_fU64[0] == iParam1->_fU64[0])
        {
            if (iParam0->_fU64[1] == iParam1->_fU64[1])
            {
                if (iParam0->_fU64[2] == iParam1->_fU64[2])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_11784(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    int I;

    if (NOT (COMPARE_STRING( ref l_U30[l_U29]._fU0, "" )))
    {
        if (l_U29 == 19)
        {
            for ( I = 0; I <= 18; I++ )
            {
                sub_5025( ref l_U30[I], ref l_U30[I + 1]._fU0, l_U30[I + 1]._fU64[0], l_U30[I + 1]._fU64[1], l_U30[I + 1]._fU64[2] );
            }
        }
        else
        {
            l_U29++;
        }
    }
    sub_5025( ref l_U30[l_U29], ref uParam0._fU0, uParam0._fU64[0], uParam0._fU64[1], uParam0._fU64[2] );
    if (l_U29 < 19)
    {
        sub_4977( l_U29 + 1 );
    }
    return;
}

void sub_12030()
{
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    sub_11157( g_U851._fU8, 0 );
    g_U857._fU16 = 1;
    sub_12067();
    g_U851._fU8 = -1;
    g_U857._fU24 = 0;
    sub_12953( "\n THE WEBSITE HASH KEY FOR " );
    sub_12953( ref l_U30[l_U29]._fU0 );
    sub_12953( " is, " );
    sub_13013( GET_HASH_KEY( ref l_U30[l_U29]._fU0 ) );
    switch (GET_HASH_KEY( ref l_U30[l_U29]._fU0 ))
    {
        case 240407440:
        sub_5107( 2, 0 );
        sub_5107( 1, 1 );
        break;
        case 744321622:
        sub_5107( 2, 1 );
        sub_5107( 1, 0 );
        break;
        default:
        sub_5107( 2, 1 );
        sub_5107( 1, 1 );
        break;
    }
    if (DOES_WEB_PAGE_EXIST( ref l_U30[l_U29]._fU0 ))
    {
        if (sub_13160( ref l_U30[l_U29]._fU0, ref l_U490 ))
        {
            l_U489 = 1;
        }
        else
        {
            sub_14443();
            g_U857._fU324 = 0;
            sub_9979( ref l_U30[l_U29]._fU0, 1, 0 );
        }
    }
    else
    {
        StrCopy( ref l_U490, "webError", 32 );
        l_U489 = 1;
    }
    sub_5107( 0, 0 );
    return;
}

void sub_12067()
{
    int I;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int[15] iVar10;

    sub_12076();
    iVar3 = 0;
    array(ref iVar10, 15);
    for ( I = 0; I <= 14; I++ )
    {
        iVar10[I] = I;
    }
    if (g_U946 != -1)
    {
        iVar10[0] = g_U946;
        iVar10[g_U946] = 0;
        iVar3 = 1;
    }
    for ( I = iVar3; I <= 4; I++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( I, 15, ref uVar5 );
        uVar4 = iVar10[I];
        iVar10[I] = iVar10[uVar5];
        iVar10[uVar5] = uVar4;
    }
    for ( I = 0; I <= 4; I++ )
    {
        g_U947[I] = iVar10[I];
        sub_12388( ref uVar6, "webAdverts", g_U947[I], -1, -1 );
        sub_12531( "\n loading the following web advert dictionary. ", ref uVar6 );
        l_U0._fU0[I] = LOAD_TXD( ref uVar6 );
    }
    l_U0._fU24[0] = GET_TEXTURE( l_U0._fU0[4], "medium" );
    l_U0._fU24[1] = GET_TEXTURE( l_U0._fU0[3], "medium" );
    l_U0._fU24[2] = GET_TEXTURE( l_U0._fU0[2], "medium" );
    l_U0._fU24[3] = GET_TEXTURE( l_U0._fU0[1], "medium" );
    l_U0._fU24[4] = GET_TEXTURE( l_U0._fU0[0], "medium" );
    l_U0._fU24[5] = GET_TEXTURE( l_U0._fU0[0], "small" );
    l_U0._fU24[6] = GET_TEXTURE( l_U0._fU0[1], "small" );
    l_U0._fU24[7] = GET_TEXTURE( l_U0._fU0[2], "small" );
    l_U0._fU24[8] = GET_TEXTURE( l_U0._fU0[3], "small" );
    l_U0._fU24[9] = GET_TEXTURE( l_U0._fU0[4], "small" );
    l_U0._fU112 = 1;
    return;
}

void sub_12076()
{
    int I;

    if (l_U0._fU112)
    {
        for ( I = 0; I <= 9; I++ )
        {
            RELEASE_TEXTURE( l_U0._fU24[I] );
        }
        for ( I = 0; I <= 4; I++ )
        {
            REMOVE_TXD( l_U0._fU0[I] );
        }
        l_U0._fU112 = 0;
    }
    return;
}

void sub_12388(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    if (iParam2 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam2, 16);
        if (iParam3 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam3, 16);
            if (iParam4 != -1)
            {
                ConcatString((uParam0^), "_", 16);
                ConcatString((uParam0^), iParam4, 16);
            }
        }
    }
    return;
}

void sub_12531(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_12953(unknown uParam0)
{
    return;
}

void sub_13013(unknown uParam0)
{
    return;
}

int sub_13160(unknown uParam0, unknown uParam1)
{
    switch (GET_HASH_KEY( uParam0 ))
    {
        case 240407440:
        case -16021269:
        StrCopy( (uParam1^), "webEyefind", 32 );
        break;
        case 564188231:
        StrCopy( (uParam1^), "webEyefindSearch", 32 );
        break;
        case 744321622:
        StrCopy( (uParam1^), "webEmail", 32 );
        break;
        case 7699952:
        StrCopy( (uParam1^), "webDating", 32 );
        break;
        case -1061473847:
        StrCopy( (uParam1^), "webDatingBoys", 32 );
        break;
        case 474856805:
        StrCopy( (uParam1^), "webDatingGirls", 32 );
        break;
        case -1532819380:
        StrCopy( (uParam1^), "webDatingFullProfile", 32 );
        break;
        case -1981511177:
        StrCopy( (uParam1^), "webLawyersCareer", 32 );
        break;
        case 440856543:
        StrCopy( (uParam1^), "webLawyersCV", 32 );
        break;
        case -1191269497:
        StrCopy( (uParam1^), "webRingtones", 32 );
        break;
        case -221934450:
        StrCopy( (uParam1^), "webRingtonesMono", 32 );
        break;
        case 646501271:
        StrCopy( (uParam1^), "webRingtonesPoly", 32 );
        break;
        case 1399600494:
        StrCopy( (uParam1^), "webRingtonesTheme", 32 );
        break;
        case 1084318408:
        StrCopy( (uParam1^), "webRingtonesPurchase", 32 );
        break;
        case -570559845:
        StrCopy( (uParam1^), "webLibertyTree", 32 );
        break;
        case 1607696951:
        StrCopy( (uParam1^), "webLibertyTreeNews", 32 );
        break;
        case -1152804493:
        StrCopy( (uParam1^), "webWeazel", 32 );
        break;
        case 1951602674:
        StrCopy( (uParam1^), "webWeazelNews", 32 );
        break;
        case 1163241030:
        StrCopy( (uParam1^), "webPublicLiberty", 32 );
        break;
        case 1289764642:
        case -1627874697:
        case -2105959540:
        case -2117488383:
        StrCopy( (uParam1^), "webCraplist", 32 );
        break;
        case 182513705:
        case 1635665666:
        case 1814895393:
        case 373323254:
        case 449497129:
        StrCopy( (uParam1^), "webLCPD", 32 );
        break;
        case 1563179912:
        StrCopy( (uParam1^), "webLCPDprofile", 32 );
        break;
        case -1699575165:
        case 1039376298:
        case 1347693700:
        case -943569062:
        StrCopy( (uParam1^), "webAutoeroticar", 32 );
        break;
        case 1065096666:
        StrCopy( (uParam1^), "webOurOwnReality", 32 );
        break;
        case -439202587:
        StrCopy( (uParam1^), "webAlexBlog", 32 );
        break;
        case 286269419:
        StrCopy( (uParam1^), "webEddieBlog", 32 );
        break;
        case 692704691:
        StrCopy( (uParam1^), "webRealEstate", 32 );
        break;
        case 3617788:
        StrCopy( (uParam1^), "webWhatThey", 32 );
        break;
        case 2138472987:
        ALTER_WANTED_LEVEL_NO_DROP( sub_2233(), 5 );
        TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_TWAT" );
    }
    sub_12531( "\n NO SCRIPT FOR THIS WEBSITE - ", uParam0 );
    sub_12953( ", THE HASH KEY IS - " );
    sub_13013( GET_HASH_KEY( uParam0 ) );
    return 0;
    sub_12531( uParam0, " is going to load the following script, " );
    sub_12531( uParam1, " \n" );
    return 1;
}

void sub_14443()
{
    sub_14481( ref l_U0._fU68[0], "advert_medium_0", 3, 0 );
    sub_14481( ref l_U0._fU68[1], "advert_medium_1", 3, 1 );
    sub_14481( ref l_U0._fU68[2], "advert_medium_2", 3, 2 );
    sub_14481( ref l_U0._fU68[3], "advert_medium_3", 3, 3 );
    sub_14481( ref l_U0._fU68[4], "advert_medium_4", 3, 4 );
    sub_14481( ref l_U0._fU68[5], "advert_small_0", 4, 0 );
    sub_14481( ref l_U0._fU68[6], "advert_small_1", 4, 1 );
    sub_14481( ref l_U0._fU68[7], "advert_small_2", 4, 2 );
    sub_14481( ref l_U0._fU68[8], "advert_small_3", 4, 3 );
    sub_14481( ref l_U0._fU68[9], "advert_small_4", 4, 4 );
    return;
}

void sub_14481(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[16] cVar6;

    (uParam0^) = CREATE_HTML_SCRIPT_OBJECT( uParam1 );
    StrCopy( ref cVar6, "WEBADDRESS_", 16 );
    ConcatString(ref cVar6, g_U947[uParam3], 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
    ADD_STRING_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    string(ref cVar6, g_U947[uParam3], 16);
    switch (uParam2)
    {
        case 0:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="banner" txd="webAdverts_" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="512" height="80" border="0"/></a>" );
        break;
        case 1:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="extraLarge" txd="webAdverts_" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="404" height="204" border="0"/></a>" );
        break;
        case 2:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="large" txd="webAdverts_" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="176" height="352" border="0"/></a>" );
        break;
        case 3:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="medium" txd="webAdverts_" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="176" height="176" border="0"/></a>" );
        break;
        case 4:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="small" txd="webAdverts_" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="128" height="204" border="0"/></a>" );
        break;
    }
    return;
}

int sub_15627()
{
    unknown uVar2;

    if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
    {
        return 1;
    }
    else if (IS_MOUSE_BUTTON_JUST_PRESSED( 1 ))
    {
        l_U432 = 1;
    }
    else if ((NOT (IS_MOUSE_BUTTON_PRESSED( 1 ))) AND (l_U432 == 1))
    {
        l_U432 = 0;
        return 0;
    }
    else if (IS_CONTROL_JUST_PRESSED( 2, 77 ))
    {
        return 0;
    }
    else if (sub_15745())
    {
        return 3;
    }
    else if ((g_U857._fU0 > 2) AND ((IS_MOUSE_BUTTON_JUST_PRESSED( 2 )) || (((IS_GAME_KEYBOARD_KEY_PRESSED( 56 )) || (IS_GAME_KEYBOARD_KEY_PRESSED( 184 ))) AND (IS_GAME_KEYBOARD_KEY_JUST_PRESSED( 203 )))))
    {
        return 3;
    }
    else if (IS_BUTTON_JUST_PRESSED( 0, 15 ))
    {
        return 4;
    }
    else if (((g_U857._fU0 > 2) AND ((IS_GAME_KEYBOARD_KEY_PRESSED( 56 )) || (IS_GAME_KEYBOARD_KEY_PRESSED( 184 )))) AND (IS_GAME_KEYBOARD_KEY_JUST_PRESSED( 205 )))
    {
        return 4;
    }
    else if ((IS_BUTTON_JUST_PRESSED( 0, 14 )) || ((g_U857._fU0 > 2) AND (IS_GAME_KEYBOARD_KEY_JUST_PRESSED( 63 ))))
    {
        return 2;
    };;;;;;;;;
    return 6;
}

int sub_15745()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 76 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 78 )) AND (IS_USING_CONTROLLER())))
    {
        l_U431 = 1;
    }
    if (NOT (((IS_CONTROL_PRESSED( 2, 76 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 78 )) AND (IS_USING_CONTROLLER()))))
    {
        if (l_U431 == 1)
        {
            l_U431 = 0;
            return 1;
        }
    }
    return 0;
}

int sub_16292(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;

    if (NOT (COMPARE_STRING( ref l_U30[l_U29]._fU0, uParam0 )))
    {
        array(ref uVar3._fU64, 3);
        ref uVar3;
        sub_5025( ref uVar3, uParam0, -1, -1, -1 );
        sub_11784( uVar3 );
        return 1;
    }
    else
    {
        sub_12953( "\n THE SITES ARE THE SAME " );
        sub_12953( ref l_U30[l_U29]._fU0 );
        sub_12953( " AND " );
        sub_12953( uParam0 );
        sub_12953( ".      " );
    }
    return 0;
}

void sub_16612()
{
    g_U857._fU312 = 1;
    PLAY_SOUND_FRONTEND( -1, "WEB_BACK_OR_FORWARD_SHORTCUT" );
    if (l_U29 == 0)
    {
        sub_16680();
    }
    else if (sub_16759())
    {
        sub_12030();
        sub_5107( 0, 1 );
    }
    return;
}

void sub_16680()
{
    INCREMENT_INT_STAT_NO_MESSAGE( 68, TIMERB() );
    sub_11157( g_U851._fU8, 0 );
    g_U851._fU8 = -1;
    sub_3989();
    sub_4977( 0 );
    g_U857._fU16 = 1;
    return;
}

int sub_16759()
{
    if (NOT g_U857._fU8)
    {
        if (g_U857._fU0 >= 3)
        {
            if (l_U29 > 0)
            {
                l_U29--;
                return 1;
            }
        }
    }
    return 0;
}

void sub_16935()
{
    g_U857._fU316 = 1;
    PLAY_SOUND_FRONTEND( -1, "WEB_BACK_OR_FORWARD_SHORTCUT" );
    if (sub_16993())
    {
        sub_12030();
        if ((l_U29 + 1) < 20)
        {
            if (COMPARE_STRING( ref l_U30[l_U29 + 1]._fU0, "" ))
            {
                sub_5107( 0, 0 );
            }
            else
            {
                sub_5107( 0, 1 );
            }
        }
        else
        {
            sub_5107( 0, 0 );
        }
    }
    return;
}

int sub_16993()
{
    if (NOT g_U857._fU8)
    {
        if (l_U29 < 19)
        {
            if (NOT (COMPARE_STRING( ref l_U30[l_U29 + 1]._fU0, "" )))
            {
                l_U29++;
                return 1;
            }
        }
    }
    return 0;
}

void sub_17244()
{
    l_U447 = 1;
    l_U448 = 0;
    g_U857._fU92 = 1;
    g_U857._fU96 = 1;
    StrCopy( ref g_U857._fU100, "", 64 );
    l_U449 = 17;
    l_U445 = 0;
    return;
}

void sub_17617(int iParam0)
{
    int I;
    float fVar4;
    int iVar5;
    int iVar6;

    if (g_U857._fU0 > 2)
    {
        DRAW_SPRITE( l_U478[7], 0.50000000, g_U939 * 0.50000000, g_U940, g_U939, 0.00000000, 255, 255, 255, 255 );
        for ( I = 0; I <= 3; I++ )
        {
            if (l_U450[I]._fU16)
            {
                DRAW_SPRITE( l_U478[I], l_U450[I]._fU0._fU0, l_U450[I]._fU0._fU4, l_U450[I]._fU8._fU0, l_U450[I]._fU8._fU4, 0.00000000, 255, 255, 255, 255 );
            }
            else
            {
                DRAW_SPRITE( l_U478[I + 4], l_U450[I]._fU0._fU0, l_U450[I]._fU0._fU4, l_U450[I]._fU8._fU0, l_U450[I]._fU8._fU4, 0.00000000, 255, 255, 255, 255 );
            }
        }
        DRAW_RECT( l_U450[4]._fU0._fU0, l_U450[4]._fU0._fU4, l_U450[4]._fU8._fU0 + 0.00400000, l_U450[4]._fU8._fU4 + 0.00400000, 0, 0, 0, 255 );
        if ((iParam0 != 4) || (g_U857._fU92))
        {
            DRAW_RECT( l_U450[4]._fU0._fU0, l_U450[4]._fU0._fU4, l_U450[4]._fU8._fU0, l_U450[4]._fU8._fU4, 255, 255, 255, 255 );
        }
        else
        {
            DRAW_RECT( l_U450[4]._fU0._fU0, l_U450[4]._fU0._fU4, l_U450[4]._fU8._fU0, l_U450[4]._fU8._fU4, 250, 255, 215, 255 );
        }
        SET_TEXT_COLOUR( 0, 0, 0, 255 );
        SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 0 );
        SET_TEXT_WRAP( l_U450[4]._fU0._fU0 - (l_U450[4]._fU8._fU0 * 0.50000000), 1.00000000 );
        if (g_U943)
        {
            SET_TEXT_SCALE( 0.25000000, 0.40000000 );
        }
        else
        {
            SET_TEXT_SCALE( 0.29500000, 0.40000000 );
        }
        SET_TEXT_LINE_DISPLAY( 0, 0 );
        if (g_U857._fU92)
        {
            if (NOT (COMPARE_STRING( ref g_U857._fU100, "" )))
            {
                if (((GET_STRING_WIDTH_WITH_STRING( "STRING", ref g_U857._fU100 )) > (l_U450[4]._fU8._fU0 * 0.98000000)) || ((GET_LENGTH_OF_LITERAL_STRING( ref g_U857._fU100 )) > 63))
                {
                    g_U857._fU96 = 0;
                }
                else
                {
                    g_U857._fU96 = 1;
                }
                DISPLAY_TEXT_WITH_LITERAL_STRING( l_U450[4]._fU0._fU0 - (l_U450[4]._fU8._fU0 * 0.49000000), 0.07600000, "STRING", ref g_U857._fU100 );
            }
        }
        else if (g_U857._fU164)
        {
            g_U857._fU164 = 0;
            iVar5 = GET_LENGTH_OF_LITERAL_STRING( ref g_U857._fU168 );
            iVar6 = 1;
            while ((GET_STRING_WIDTH_WITH_STRING( "STRING", ref g_U857._fU168 )) > (l_U450[4]._fU8._fU0 * 0.98000000))
            {
                iVar5--;
                StrCopy( ref g_U857._fU168, GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( ref g_U857._fU168, iVar5 ), 64 );
            }
        }
        if (iParam0 != 4)
        {
            if (NOT (COMPARE_STRING( ref g_U857._fU168, "" )))
            {
                DISPLAY_TEXT_WITH_LITERAL_STRING( l_U450[4]._fU0._fU0 - (l_U450[4]._fU8._fU0 * 0.49000000), 0.07600000, "STRING", ref g_U857._fU168 );
            }
        }
        if (g_U943)
        {
            if (g_U857._fU28)
            {
                DRAW_SPRITE( l_U478[9], 0.86500000, 0.58000000, 0.02000000, 0.84000000, 0.00000000, 255, 255, 255, 255 );
                fVar4 = g_U857._fU20 + 102.40000000;
                fVar4 *= g_U857._fU32;
                fVar4 += g_U857._fU36 * 0.50000000;
                fVar4 += 0.16000000;
                DRAW_RECT( 0.86600000, fVar4, 0.01700000, g_U857._fU36, 153, 149, 148, 255 );
                DRAW_RECT( 0.86600000, fVar4, 0.01600000, g_U857._fU36 - 0.00100000, 181, 181, 181, 255 );
            }
        }
    }
    return;
}

int sub_19182()
{
    char[16] cVar2;
    int iVar6;

    l_U446 = 0;
    if (sub_19207( ref iVar6, ref g_U857._fU100, 0 ))
    {
        if (iVar6 == 14)
        {
            sub_20661();
        }
        else
        {
            l_U449 = iVar6;
            l_U446 = 1;
        }
    }
    else if (IS_CONTROL_JUST_PRESSED( 2, 77 ))
    {
        if (l_U449 != 28)
        {
            if (g_U857._fU96)
            {
                StrCopy( ref cVar2, "KEYBOARDKEY_", 16 );
                ConcatString(ref cVar2, l_U449, 16);
                ConcatString(ref g_U857._fU100, GET_FIRST_N_CHARACTERS_OF_STRING( ref cVar2, 1 ), 64);
                l_U446 = 1;
                iVar6 = l_U449;
                PLAY_SOUND_FRONTEND( -1, "PC_EMAIL_REPLY_KEY_PRESS" );
                PLAY_SOUND_FRONTEND( -1, "PC_EMAIL_REPLY_KEY_PRESS" );
            }
        }
        else
        {
            iVar6 = 28;
        }
    }
    else if (IS_BUTTON_JUST_PRESSED( 0, 14 ))
    {
        sub_20661();
        iVar6 = 14;
    }
    else if (IS_CONTROL_JUST_PRESSED( 2, 78 ))
    {
        l_U445 = 3;
    }
    else
    {
        sub_20997();
    };;;;
    if (iVar6 == 28)
    {
        return 1;
    }
    if (((NOT (# -NULL-0xc27bfa())) AND (iVar6 != 102)) || ((# -NULL-0xc27bfa()) AND (iVar6 == 102)))
    {
        if (iVar6 == 14)
        {
            if ((GET_LENGTH_OF_LITERAL_STRING( ref g_U857._fU100 )) < 3)
            {
                l_U447 = 1;
            }
        }
        else if (l_U447)
        {
            if ((GET_LENGTH_OF_LITERAL_STRING( ref g_U857._fU100 )) == 3)
            {
                l_U447 = 0;
                if (COMPARE_STRING( ref g_U857._fU100, "www" ))
                {
                    l_U448 = 1;
                }
            }
        }
    }
    return 0;
}

int sub_19207(unknown uParam0, unknown uParam1, unknown uParam2)
{
    string sVar5;
    int iVar6;
    int iVar7;
    boolean bVar8;
    int iVar9;

    if (NOT (# -NULL-0xc27bfa()))
    {
        (uParam0^) = 102;
        if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 239 )))
        {
            if (IS_GAME_KEYBOARD_KEY_PRESSED( 238 ))
            {
                if (g_U857._fU96)
                {
                    sub_19298( uParam1, uParam0, 47, "-", "-", uParam2, 1 );
                }
            }
            else if (g_U857._fU96)
            {
                sub_19298( uParam1, uParam0, 30, "A", "a", uParam2, 1 );
                sub_19298( uParam1, uParam0, 48, "B", "b", uParam2, 1 );
                sub_19298( uParam1, uParam0, 46, "C", "c", uParam2, 1 );
                sub_19298( uParam1, uParam0, 32, "D", "d", uParam2, 1 );
                sub_19298( uParam1, uParam0, 18, "E", "e", uParam2, 1 );
                sub_19298( uParam1, uParam0, 33, "F", "f", uParam2, 1 );
                sub_19298( uParam1, uParam0, 34, "G", "g", uParam2, 1 );
                sub_19298( uParam1, uParam0, 35, "H", "h", uParam2, 1 );
                sub_19298( uParam1, uParam0, 23, "I", "i", uParam2, 1 );
                sub_19298( uParam1, uParam0, 36, "J", "j", uParam2, 1 );
                sub_19298( uParam1, uParam0, 37, "K", "k", uParam2, 1 );
                sub_19298( uParam1, uParam0, 38, "L", "l", uParam2, 1 );
                sub_19298( uParam1, uParam0, 50, "M", "m", uParam2, 1 );
                sub_19298( uParam1, uParam0, 49, "N", "n", uParam2, 1 );
                sub_19298( uParam1, uParam0, 24, "O", "o", uParam2, 1 );
                sub_19298( uParam1, uParam0, 25, "P", "p", uParam2, 1 );
                sub_19298( uParam1, uParam0, 16, "Q", "q", uParam2, 1 );
                sub_19298( uParam1, uParam0, 19, "R", "r", uParam2, 1 );
                sub_19298( uParam1, uParam0, 31, "S", "s", uParam2, 1 );
                sub_19298( uParam1, uParam0, 20, "T", "t", uParam2, 1 );
                sub_19298( uParam1, uParam0, 22, "U", "u", uParam2, 1 );
                sub_19298( uParam1, uParam0, 47, "V", "v", uParam2, 1 );
                sub_19298( uParam1, uParam0, 17, "W", "w", uParam2, 1 );
                sub_19298( uParam1, uParam0, 45, "X", "x", uParam2, 1 );
                sub_19298( uParam1, uParam0, 21, "Y", "y", uParam2, 1 );
                sub_19298( uParam1, uParam0, 44, "Z", "z", uParam2, 1 );
                sub_19298( uParam1, uParam0, 11, "0", "0", uParam2, 1 );
                sub_19298( uParam1, uParam0, 2, "1", "1", uParam2, 1 );
                sub_19298( uParam1, uParam0, 3, "2", "2", uParam2, 1 );
                sub_19298( uParam1, uParam0, 4, "3", "3", uParam2, 1 );
                sub_19298( uParam1, uParam0, 5, "4", "4", uParam2, 1 );
                sub_19298( uParam1, uParam0, 6, "5", "5", uParam2, 1 );
                sub_19298( uParam1, uParam0, 7, "6", "6", uParam2, 1 );
                sub_19298( uParam1, uParam0, 8, "7", "7", uParam2, 1 );
                sub_19298( uParam1, uParam0, 9, "8", "8", uParam2, 1 );
                sub_19298( uParam1, uParam0, 10, "9", "9", uParam2, 1 );
                sub_19298( uParam1, uParam0, 12, "-", "-", uParam2, 1 );
                sub_19298( uParam1, uParam0, 52, ".", ".", uParam2, 1 );
            }
            sub_19298( uParam1, uParam0, 14, "", "", uParam2, 0 );
            sub_19298( uParam1, uParam0, 28, "", "", uParam2, 0 );
            sub_19298( uParam1, uParam0, 1, "", "", uParam2, 0 );;
        }
        if ((uParam0^) == 102)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if (g_U857._fU96)
    {
        sVar5 = "";
        iVar6 = 0;
        iVar7 = 0;
        bVar8 = true;
        (uParam0^) = 102;
        sub_19298( uParam1, uParam0, 14, "", "", uParam2, 0 );
        sub_19298( uParam1, uParam0, 28, "", "", uParam2, 0 );
        sub_19298( uParam1, uParam0, 1, "", "", uParam2, 0 );
        if ((uParam0^) == 102)
        {
            iVar9 = GET_LENGTH_OF_LITERAL_STRING( uParam1 );
            while (((iVar9 < 63) AND (bVar8 == 1)) AND (iVar6 < 16))
            {
                bVar8 = GET_BUFFERED_ASCII( iVar6, ref iVar7 );
                if (bVar8)
                {
                    if ((((((iVar7 >= 97) AND (iVar7 <= 122)) || ((iVar7 >= 65) AND (iVar7 <= 90))) || ((iVar7 >= 48) AND (iVar7 <= 57))) || (iVar7 == 45)) || (iVar7 == 46))
                    {
                        sVar5 = ASCII_INT_TO_STRING( iVar7 );
                        ConcatString((uParam1^), sVar5, 64);
                        iVar9++;
                    }
                    iVar6++;
                }
            }
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

void sub_19298(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, boolean bParam6)
{
    if (IS_GAME_KEYBOARD_KEY_JUST_PRESSED( uParam2 ))
    {
        PLAY_SOUND_FRONTEND( -1, "PC_EMAIL_REPLY_KEY_PRESS" );
        PLAY_SOUND_FRONTEND( -1, "PC_EMAIL_REPLY_KEY_PRESS" );
        (uParam1^) = uParam2;
        if (bParam6)
        {
            if (bParam5)
            {
                ConcatString((uParam0^), uParam3, 64);
            }
            else
            {
                ConcatString((uParam0^), uParam4, 64);
            }
        }
    }
    return;
}

void sub_20661()
{
    int iVar2;

    iVar2 = GET_LENGTH_OF_LITERAL_STRING( ref g_U857._fU100 );
    if (iVar2 > 0)
    {
        iVar2--;
        StrCopy( ref g_U857._fU100, GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( ref g_U857._fU100, iVar2 ), 64 );
    }
    return;
}

void sub_20997()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    int iVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar4 );
    if ((IS_BUTTON_PRESSED( 0, 0 )) || (IS_BUTTON_PRESSED( 0, 1 )))
    {
        if (iVar2 < 65501)
        {
            iVar5 += iVar2 * -1;
        }
        else if (iVar2 > 35)
        {
            iVar5 += iVar2;
        }
        if (iVar3 < 65501)
        {
            iVar5 += iVar3 * -1;
        }
        else if (iVar3 > 35)
        {
            iVar5 += iVar3;
        }
        l_U442 += iVar5;
        if (l_U442 >= 1500)
        {
            if (iVar2 < 65501)
            {
                sub_21167( 2 );
            }
            else if (iVar2 > 35)
            {
                sub_21167( 3 );
            }
            else if (iVar3 < 65501)
            {
                sub_21167( 0 );
            }
            else if (iVar3 > 35)
            {
                sub_21167( 1 );
            };;;;
            l_U442 = 0;
        }
    }
    else
    {
        l_U442 = 1500;
        if (IS_BUTTON_JUST_PRESSED( 0, 8 ))
        {
            sub_21167( 0 );
        }
        else if (IS_BUTTON_JUST_PRESSED( 0, 9 ))
        {
            sub_21167( 1 );
        }
        else if (IS_BUTTON_JUST_PRESSED( 0, 10 ))
        {
            sub_21167( 2 );
        }
        else if (IS_BUTTON_JUST_PRESSED( 0, 11 ))
        {
            sub_21167( 3 );
        };;;;
    }
    return;
}

void sub_21167(unknown uParam0)
{
    int iVar3;

    iVar3 = l_U449;
    switch (uParam0)
    {
        case 0:
        switch (l_U449)
        {
            case 28:
            iVar3 = 38;
            break;
            case 52:
            iVar3 = 37;
            break;
            case 12:
            iVar3 = 25;
            break;
            case 9:
            iVar3 = 52;
            break;
            case 10:
            case 11:
            iVar3 = 28;
            break;
            default:
            if (iVar3 < 12)
            {
                iVar3 += 42;
            }
            else
            {
                iVar3 -= 14;
            }
            break;
        }
        break;
        case 1:
        switch (l_U449)
        {
            case 28:
            iVar3 = 10;
            break;
            case 52:
            iVar3 = 9;
            break;
            case 12:
            case 38:
            iVar3 = 28;
            break;
            case 37:
            iVar3 = 52;
            break;
            case 25:
            iVar3 = 12;
            break;
            default:
            if (iVar3 > 43)
            {
                iVar3 -= 42;
            }
            else
            {
                iVar3 += 14;
            }
            break;
        }
        break;
        case 2:
        switch (l_U449)
        {
            case 28:
            iVar3 = 52;
            break;
            case 52:
            iVar3 = 50;
            break;
            case 12:
            iVar3 = 38;
            break;
            case 2:
            case 16:
            iVar3 += 9;
            break;
            case 30:
            iVar3 = 12;
            break;
            case 44:
            iVar3 = 28;
            break;
            default:
            iVar3--;
            break;
        }
        break;
        case 3:
        switch (l_U449)
        {
            case 28:
            iVar3 = 44;
            break;
            case 52:
            iVar3 = 28;
            break;
            case 12:
            iVar3 = 30;
            break;
            case 11:
            case 25:
            iVar3 -= 9;
            break;
            case 50:
            iVar3 = 52;
            break;
            case 38:
            iVar3 = 12;
            break;
            default:
            iVar3++;
            break;
        }
        break;
    }
    l_U449 = iVar3;
    return;
}

void sub_22240()
{
    float fVar2;
    float fVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    unknown uVar7;
    unknown uVar8;

    if (g_U943)
    {
        fVar2 = 0.75000000;
        fVar3 = 0.50000000;
    }
    else
    {
        fVar2 = 1.00000000;
        fVar3 = 0.65000000;
    }
    switch (l_U445)
    {
        case 0:
        l_U443 += 60;
        if (sub_22358( ref l_U443, 0, 160 ))
        {
            l_U445 = 1;
        }
        break;
        case 1:
        l_U444 += 60;
        if (sub_22358( ref l_U444, 0, 255 ))
        {
            l_U445 = 2;
        }
        break;
        case 3:
        l_U444 -= 60;
        if (sub_22358( ref l_U444, 0, 255 ))
        {
            l_U445 = 4;
        }
        break;
        case 4:
        l_U443 -= 60;
        if (sub_22358( ref l_U443, 0, 160 ))
        {
            l_U445 = 5;
        }
        break;
    }
    if (IS_USING_CONTROLLER())
    {
        DRAW_RECT( 0.50000000, ((1.00000000 - g_U939) * 0.50000000) + g_U939, fVar2, 1.00000000 - g_U939, 255, 255, 255, l_U443 );
    }
    if ((l_U445 > 0) AND (l_U445 < 4))
    {
        if (IS_USING_CONTROLLER())
        {
            DRAW_SPRITE( l_U433[3], 0.50000000, 0.50000000, fVar3, 0.50000000, 0.00000000, 255, 255, 255, l_U444 );
            sub_22750( 1, ref uVar4, ref uVar5 );
            sub_22899( "1", 2, ref uVar4, uVar5 );
            sub_22899( "2", 3, ref uVar4, uVar5 );
            sub_22899( "3", 4, ref uVar4, uVar5 );
            sub_22899( "4", 5, ref uVar4, uVar5 );
            sub_22899( "5", 6, ref uVar4, uVar5 );
            sub_22899( "6", 7, ref uVar4, uVar5 );
            sub_22899( "7", 8, ref uVar4, uVar5 );
            sub_22899( "8", 9, ref uVar4, uVar5 );
            sub_22899( "9", 10, ref uVar4, uVar5 );
            sub_22899( "0", 11, ref uVar4, uVar5 );
            sub_22750( 2, ref uVar4, ref uVar5 );
            sub_22899( "Q", 16, ref uVar4, uVar5 );
            sub_22899( "W", 17, ref uVar4, uVar5 );
            sub_22899( "E", 18, ref uVar4, uVar5 );
            sub_22899( "R", 19, ref uVar4, uVar5 );
            sub_22899( "T", 20, ref uVar4, uVar5 );
            sub_22899( "Y", 21, ref uVar4, uVar5 );
            sub_22899( "U", 22, ref uVar4, uVar5 );
            sub_22899( "I", 23, ref uVar4, uVar5 );
            sub_22899( "O", 24, ref uVar4, uVar5 );
            sub_22899( "P", 25, ref uVar4, uVar5 );
            sub_22750( 3, ref uVar4, ref uVar5 );
            sub_22899( "A", 30, ref uVar4, uVar5 );
            sub_22899( "S", 31, ref uVar4, uVar5 );
            sub_22899( "D", 32, ref uVar4, uVar5 );
            sub_22899( "F", 33, ref uVar4, uVar5 );
            sub_22899( "G", 34, ref uVar4, uVar5 );
            sub_22899( "H", 35, ref uVar4, uVar5 );
            sub_22899( "J", 36, ref uVar4, uVar5 );
            sub_22899( "K", 37, ref uVar4, uVar5 );
            sub_22899( "L", 38, ref uVar4, uVar5 );
            sub_22899( "-", 12, ref uVar4, uVar5 );
            sub_22750( 4, ref uVar4, ref uVar5 );
            sub_22899( "Z", 44, ref uVar4, uVar5 );
            sub_22899( "X", 45, ref uVar4, uVar5 );
            sub_22899( "C", 46, ref uVar4, uVar5 );
            sub_22899( "V", 47, ref uVar4, uVar5 );
            sub_22899( "B", 48, ref uVar4, uVar5 );
            sub_22899( "N", 49, ref uVar4, uVar5 );
            sub_22899( "M", 50, ref uVar4, uVar5 );
            sub_22899( ".", 52, ref uVar4, uVar5 );
            sub_22899( "", 28, ref uVar4, uVar5 );
            if (l_U448)
            {
                l_U449 = 52;
                l_U448 = 0;
            }
            if (g_U943)
            {
                fVar6 = 0.28500000;
            }
            else
            {
                fVar6 = 0.21800000;
            }
            uVar8 = ROUND( (TO_FLOAT( l_U444 )) / 1.60000000 );
            DRAW_SPRITE( l_U433[0], fVar6, 0.67800000, 0.02000000, 0.03000000, 0.00000000, 255, 255, 255, uVar8 );
            fVar6 += 0.01300000;
        }
        if (IS_USING_CONTROLLER())
        {
            sub_23512();
            SET_TEXT_WRAP( fVar6, 1.00000000 );
            uVar7 = GET_STRING_WIDTH( "IKEY_SELECT" );
            DISPLAY_TEXT( fVar6, 0.66700000, "IKEY_SELECT" );
            fVar6 += uVar7;
            fVar6 += 0.02000000;
            DRAW_SPRITE( l_U433[1], fVar6, 0.67800000, 0.02000000, 0.03000000, 0.00000000, 255, 255, 255, uVar8 );
            fVar6 += 0.01300000;
            sub_23512();
            SET_TEXT_WRAP( fVar6, 1.00000000 );
            DISPLAY_TEXT( fVar6, 0.66700000, "IKEY_BACK" );
            if (g_U943)
            {
                fVar6 = 0.72500000;
            }
            else
            {
                fVar6 = 0.72000000;
            }
            sub_23512();
            uVar7 = GET_STRING_WIDTH( "IKEY_CANCEL" );
            fVar6 -= uVar7;
            SET_TEXT_WRAP( fVar6, 1.00000000 );
            DISPLAY_TEXT( fVar6, 0.66700000, "IKEY_CANCEL" );
            fVar6 -= 0.01300000;
            DRAW_SPRITE( l_U433[2], fVar6, 0.67800000, 0.02000000, 0.03000000, 0.00000000, 255, 255, 255, uVar8 );
        }
    }
    return;
}

int sub_22358(unknown uParam0, int iParam1, int iParam2)
{
    if (iParam2 < iParam1)
    {
        (uParam0^) = iParam1;
        return 1;
    }
    else if ((uParam0^) < iParam1)
    {
        (uParam0^) = iParam1;
        return 1;
    }
    else if ((uParam0^) > iParam2)
    {
        (uParam0^) = iParam2;
        return 1;
    };;;
    return 0;
}

void sub_22750(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U943)
    {
        (uParam1^) = 0.28000000;
    }
    else
    {
        (uParam1^) = 0.21500000;
    }
    switch (uParam0)
    {
        case 1:
        (uParam2^) = 0.33000000;
        break;
        case 2:
        (uParam2^) = 0.43000000;
        break;
        case 3:
        (uParam2^) = 0.51000000;
        break;
        case 4:
        (uParam2^) = 0.59000000;
        break;
    }
    return;
}

void sub_22899(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    char[16] cVar6;

    if (iParam1 == l_U449)
    {
        if (g_U943)
        {
            if (iParam1 == 28)
            {
                if (l_U446)
                {
                    DRAW_SPRITE( l_U433[7], 0.68700000, uParam3 + 0.00150000, 0.10200000, 0.08800000, 0.00000000, 255, 255, 255, l_U444 / 2 );
                }
                else
                {
                    DRAW_SPRITE( l_U433[6], 0.68700000, uParam3 + 0.00150000, 0.10200000, 0.08800000, 0.00000000, 255, 255, 255, l_U444 / 2 );
                }
            }
            else if (l_U446)
            {
                DRAW_SPRITE( l_U433[5], (uParam2^) + 0.01400000, uParam3 + 0.00150000, 0.05300000, 0.08800000, 0.00000000, 255, 255, 255, l_U444 / 2 );
            }
            else
            {
                DRAW_SPRITE( l_U433[4], (uParam2^) + 0.01400000, uParam3 + 0.00150000, 0.05300000, 0.08800000, 0.00000000, 255, 255, 255, l_U444 / 2 );
            }
        }
        else if (iParam1 == 28)
        {
            if (l_U446)
            {
                DRAW_SPRITE( l_U433[7], 0.74300000, uParam3 + 0.00150000, 0.13500000, 0.08800000, 0.00000000, 255, 255, 255, l_U444 / 2 );
            }
            else
            {
                DRAW_SPRITE( l_U433[6], 0.74300000, uParam3 + 0.00150000, 0.13500000, 0.08800000, 0.00000000, 255, 255, 255, l_U444 / 2 );
            }
        }
        else if (l_U446)
        {
            DRAW_SPRITE( l_U433[5], (uParam2^) + 0.01700000, uParam3 + 0.00150000, 0.06800000, 0.08800000, 0.00000000, 255, 255, 255, l_U444 / 2 );
        }
        else
        {
            DRAW_SPRITE( l_U433[4], (uParam2^) + 0.01700000, uParam3 + 0.00150000, 0.06800000, 0.08800000, 0.00000000, 255, 255, 255, l_U444 / 2 );
        };;;
    }
    sub_23512();
    SET_TEXT_WRAP( (uParam2^), uParam3 );
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_WRAP( (uParam2^), (uParam2^) + 0.05000000 );
    }
    if (iParam1 == 28)
    {
        DISPLAY_TEXT( (uParam2^), uParam3, "KEYBOARDKEY_28" );
    }
    else if ((iParam1 >= 2) AND (iParam1 <= 11))
    {
        StrCopy( ref cVar6, "KEYBOARDKEY_", 16 );
        ConcatString(ref cVar6, iParam1, 16);
        DISPLAY_TEXT( (uParam2^), uParam3, ref cVar6 );
    }
    else
    {
        DISPLAY_TEXT_WITH_LITERAL_STRING( (uParam2^), uParam3, "STRING", uParam0 );
    }
    if (g_U943)
    {
        (uParam2^) += 0.04600000;
    }
    else
    {
        (uParam2^) += 0.06000000;
    }
    return;
}

void sub_23512()
{
    SET_TEXT_COLOUR( 0, 0, 0, l_U444 / 2 );
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 0 );
    SET_TEXT_SCALE( 0.30000000, 0.40000000 );
    return;
}

void sub_24854()
{
    if (g_U857._fU0 > 2)
    {
        if (g_U943)
        {
            DRAW_SPRITE( l_U478[8], 0.12000000, 0.50000000, 0.01000000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
            DRAW_SPRITE( l_U478[8], 0.88000000, 0.50000000, -0.01000000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
        }
    }
    return;
}