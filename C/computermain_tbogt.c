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

    l_U29 = 86.00000000;
    l_U30 = 274.00000000;
    l_U434 = 0;
    uVar9 = GET_CURRENT_LANGUAGE();
    while (IS_REPLAY_SAVING())
    {
        WAIT( 0 );
    }
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    l_U510 = 0;
    if (# -NULL-0xc27c84())
    {
        l_U506 = LOAD_TXD( "e2:/xbox360/textures/webBorders" );
    }
    else if (# -NULL-0xc27bfa())
    {
        l_U506 = LOAD_TXD( "e2:/pc/textures/webBorders" );
    }
    switch (sub_200( ref l_U511 ))
    {
        case 0:
        l_U507[0] = GET_TEXTURE( l_U506, "twatLeft" );
        l_U507[1] = GET_TEXTURE( l_U506, "twatRight" );
        break;
        case 1:
        l_U507[0] = GET_TEXTURE( l_U506, "olegLeft" );
        l_U507[1] = GET_TEXTURE( l_U506, "olegRight" );
        break;
        default:
        l_U507[0] = GET_TEXTURE( l_U506, "defaultLeft" );
        l_U507[1] = GET_TEXTURE( l_U506, "defaultRight" );
        break;
    }
    l_U510 = 1;
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_712();
    }
    if (GET_IS_WIDESCREEN())
    {
        g_U950 = 1;
        g_U946 = 0.16000000;
        g_U947 = 0.75000000;
        if (GET_IS_HIDEF())
        {
            g_U948 = 640.00000000;
        }
        else
        {
            g_U948 = 480.00000000;
        }
        sub_1554( ref l_U452[3], 0.63500000, 0.09000000, 0.05000000, 0.06000000, 1 );
        sub_1554( ref l_U452[0], 0.68000000, 0.09000000, 0.05000000, 0.06000000, 1 );
        sub_1554( ref l_U452[1], 0.78000000, 0.09000000, 0.05000000, 0.06000000, 1 );
        sub_1554( ref l_U452[2], 0.83000000, 0.09000000, 0.05000000, 0.06000000, 1 );
        sub_1554( ref l_U452[4], 0.37000000, 0.09000000, 0.46000000, 0.05000000, 1 );
        sub_1781( ref uVar4, 0.50000000 - (g_U947 * 0.50000000), 0.50000000 + (g_U947 * 0.50000000) );
        sub_1781( ref uVar6, 0.00000000, 1.00000000 );
    }
    else
    {
        g_U950 = 0;
        g_U946 = 0.16000000;
        g_U947 = 1.00000000;
        if (GET_IS_HIDEF())
        {
            g_U948 = 640.00000000;
        }
        else
        {
            g_U948 = 480.00000000;
        }
        sub_1554( ref l_U452[3], 0.66000000, 0.09000000, 0.06000000, 0.06000000, 1 );
        sub_1554( ref l_U452[0], 0.71500000, 0.09000000, 0.06000000, 0.06000000, 1 );
        sub_1554( ref l_U452[1], 0.84000000, 0.09000000, 0.06000000, 0.06000000, 1 );
        sub_1554( ref l_U452[2], 0.90000000, 0.09000000, 0.06000000, 0.06000000, 1 );
        sub_1554( ref l_U452[4], 0.34000000, 0.09000000, 0.54500000, 0.05000000, 1 );
        sub_1781( ref uVar4, 0.05000000, 0.95000000 );
        sub_1781( ref uVar6, 0.05000000, 0.95000000 );
    }
    g_U949 = ((g_U948 - 25) * g_U946) * -1;
    l_U500 = LOAD_TXD( "computer" );
    l_U501[0] = GET_TEXTURE( l_U500, "mousePointer" );
    l_U501[1] = GET_TEXTURE( l_U500, "mouseLink" );
    l_U501[2] = GET_TEXTURE( l_U500, "mouseWait" );
    l_U505 = 1;
    g_U858._fU0 = 0.50000000;
    g_U858._fU4 = 0.50000000;
    g_U858._fU8 = -1;
    g_U858._fU12 = -1;
    g_U858._fU16 = -1;
    g_U858._fU20 = 0;
    l_U478 = 1;
    l_U479 = LOAD_TXD( "BROWSER" );
    l_U480[0] = GET_TEXTURE( l_U479, "forbut" );
    l_U480[1] = GET_TEXTURE( l_U479, "mailbut" );
    l_U480[2] = GET_TEXTURE( l_U479, "homebut" );
    l_U480[3] = GET_TEXTURE( l_U479, "backbut" );
    l_U480[4] = GET_TEXTURE( l_U479, "forbutOff" );
    l_U480[5] = GET_TEXTURE( l_U479, "mailbutOff" );
    l_U480[6] = GET_TEXTURE( l_U479, "homebutOff" );
    l_U480[7] = GET_TEXTURE( l_U479, "TopBarPattern" );
    l_U480[8] = GET_TEXTURE( l_U479, "side" );
    l_U480[9] = GET_TEXTURE( l_U479, "scrollBar" );
    l_U435[3] = GET_TEXTURE( l_U479, "keyboard" );
    l_U435[4] = GET_TEXTURE( l_U479, "keyboardButtonHover" );
    l_U435[5] = GET_TEXTURE( l_U479, "keyboardButtonOn" );
    l_U435[6] = GET_TEXTURE( l_U479, "keyboardButtonDoubleHover" );
    l_U435[7] = GET_TEXTURE( l_U479, "keyboardButtonDoubleOn" );
    uVar10 = GET_TXD( "buttons" );
    if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
    {
        l_U435[1] = GET_TEXTURE( uVar10, "X_butt" );
        l_U435[0] = GET_TEXTURE( uVar10, "A_butt" );
        l_U435[2] = GET_TEXTURE( uVar10, "B_butt" );
    }
    else
    {
        l_U435[1] = GET_TEXTURE( uVar10, "p_square" );
        l_U435[0] = GET_TEXTURE( uVar10, "p_cross" );
        l_U435[2] = GET_TEXTURE( uVar10, "p_circle" );
    }
    BEGIN_CAM_COMMANDS( ref iVar11 );
    if (iVar11 > 1)
    {
        ;
    }
    CREATE_HTML_VIEWPORT( ref g_U864._fU4 );
    SET_VIEWPORT_PRIORITY( g_U864._fU4, 1000 );
    ACTIVATE_VIEWPORT( g_U864._fU4, 1 );
    sub_3120();
    sub_4108( 0 );
    sub_4240( 0, 0 );
    END_CAM_COMMANDS( ref iVar11 );
    DISPLAY_RADAR( 0 );
    sub_4287();
    OVERRIDE_FREEZE_FLAGS( 1 );
    DO_SCREEN_FADE_IN( 500 );
    while (IS_SCREEN_FADING())
    {
        WAIT( 0 );
        HIDE_HUD_AND_RADAR_THIS_FRAME();
        SET_SPRITES_DRAW_BEFORE_FADE( 1 );
        DRAW_SPRITE( l_U501[0], g_U858._fU0, g_U858._fU4, 0.10000000, 0.12000000, 0.00000000, 255, 255, 255, 255 );
        sub_764();
    }
    g_U864._fU92 = 0;
    if (COMPARE_STRING( ref g_U864._fU44, "hidden/OScafe.html" ))
    {
        if (IS_SCORE_GREATER( sub_1364(), 0 ))
        {
            ADD_SCORE( sub_1364(), -1 );
        }
    }
    g_U864._fU324 = 1;
    while (true)
    {
        WAIT( 0 );
        HIDE_HUD_AND_RADAR_THIS_FRAME();
        SET_SPRITES_DRAW_BEFORE_FADE( 1 );
        DISABLE_PAUSE_MENU( 1 );
        g_U864._fU232 = {l_U32[l_U31]};
        g_U858._fU12 = -1;
        g_U864._fU312 = 0;
        g_U864._fU316 = 0;
        g_U864._fU320 = 0;
        if (g_U864._fU0 == 1)
        {
            if (NOT g_U12379)
            {
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT_HELP_FOREVER( "COMP_LOGOUT" );
                }
            }
        }
        else if (g_U864._fU0 != 0)
        {
            if ((sub_7100( ref uVar9 )) AND (NOT l_U491))
            {
                if (NOT g_U864._fU324)
                {
                    sub_7190( "currentOne", 1, 1 );
                }
            }
        }
        if (NOT g_U864._fU92)
        {
            if (NOT l_U491)
            {
                sub_7447();
            }
            sub_7916( uVar4._fU0, uVar4._fU4, uVar6._fU0, uVar6._fU4 );
            if (NOT l_U491)
            {
                sub_8126();
                if (g_U864._fU0 == 4)
                {
                    iVar8 = sub_8575();
                }
                else
                {
                    iVar8 = 6;
                }
                if (sub_8827())
                {
                    sub_9257();
                }
                else
                {
                    switch (sub_13136())
                    {
                        case 0:
                        PLAY_SOUND_FRONTEND( -1, "MOUSE_SINGLE_CLICK" );
                        switch (g_U864._fU0)
                        {
                            case 1:
                            switch (g_U858._fU16)
                            {
                                case 1001:
                                SETTIMERB( 0 );
                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "COMP_LOGOUT" ))
                                {
                                    CLEAR_HELP();
                                }
                                sub_13801( "www.eyefind.info" );
                                sub_9257();
                                sub_4240( 0, 0 );
                                g_U864._fU0 = 2;
                                break;
                                case 1000:
                                sub_712();
                                break;
                            }
                            break;
                            case 3:
                            if (g_U858._fU8 != -1)
                            {
                                if (g_U858._fU16 == -1)
                                {
                                    if (NOT (COMPARE_STRING( GET_WEB_PAGE_LINK_HREF( g_U864._fU4, g_U858._fU8 ), "BACK" )))
                                    {
                                        if (sub_13801( GET_WEB_PAGE_LINK_HREF( g_U864._fU4, g_U858._fU8 ) ))
                                        {
                                            sub_9257();
                                            sub_4240( 0, 0 );
                                        }
                                    }
                                    else
                                    {
                                        sub_14125();
                                    }
                                }
                                else
                                {
                                    g_U858._fU12 = g_U858._fU16;
                                }
                            }
                            break;
                            case 4:
                            switch (iVar8)
                            {
                                case 3:
                                sub_14125();
                                break;
                                case 0:
                                sub_14448();
                                break;
                                case 1:
                                if (sub_13801( "mail.eyefind.info" ))
                                {
                                    sub_9257();
                                }
                                break;
                                case 2:
                                if (sub_13801( "www.eyefind.info" ))
                                {
                                    sub_9257();
                                }
                                break;
                                case 4:
                                sub_14761();
                                break;
                            }
                            break;
                        }
                        break;
                        case 1:
                        g_U864._fU320 = 1;
                        if (NOT g_U864._fU12)
                        {
                            switch (g_U864._fU0)
                            {
                                case 1:
                                sub_712();
                                break;
                                case 3:
                                case 4:
                                sub_14193();
                                break;
                            }
                        }
                        break;
                        case 2:
                        RELOAD_WEB_PAGE( g_U864._fU4 );
                        break;
                        case 3:
                        switch (g_U864._fU0)
                        {
                            case 1:
                            sub_712();
                            break;
                            default:
                            sub_14125();
                            break;
                        }
                        break;
                        case 4:
                        sub_14448();
                        break;
                    }
                }
            }
            else
            {
                HIDE_HELP_TEXT_THIS_FRAME();
                REQUEST_SCRIPT( ref l_U492 );
                if (HAS_SCRIPT_LOADED( ref l_U492 ))
                {
                    g_U864._fU16 = 0;
                    g_U864._fU324 = 1;
                    START_NEW_SCRIPT_WITH_ARGS( ref l_U492, ref l_U32[l_U31], 20, 1024 );
                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref l_U492 );
                    l_U491 = 0;
                    if (g_U864._fU0 == 2)
                    {
                        g_U864._fU0 = 3;
                    }
                }
            }
        }
        sub_15136( iVar8 );
        if (NOT g_U864._fU92)
        {
            if (l_U491)
            {
                DRAW_SPRITE( l_U501[2], g_U858._fU0, g_U858._fU4, 0.10000000, 0.12000000, 0.00000000, 255, 255, 255, 255 );
            }
            else if ((g_U858._fU8 == -1) AND (iVar8 == 6))
            {
                DRAW_SPRITE( l_U501[0], g_U858._fU0, g_U858._fU4, 0.10000000, 0.12000000, 0.00000000, 255, 255, 255, 255 );
            }
            else
            {
                DRAW_SPRITE( l_U501[1], g_U858._fU0, g_U858._fU4, 0.10000000, 0.12000000, 0.00000000, 255, 255, 255, 255 );
            }
        }
        if (g_U864._fU92)
        {
            switch (l_U447)
            {
                case 2:
                if (sub_16701())
                {
                    if (NOT (COMPARE_STRING( ref g_U864._fU100, "" )))
                    {
                        if (sub_13801( ref g_U864._fU100 ))
                        {
                            sub_9257();
                        }
                    }
                    l_U447 = 3;
                }
                break;
                case 5:
                g_U864._fU92 = 0;
                break;
            }
            sub_19821();
        }
        sub_764();
        sub_22431();
    }
    return;
}

int sub_200(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    GET_ROOM_KEY_FROM_OBJECT( (uParam0^), ref uVar3 );
    StrCopy( ref g_U864._fU76, "LUIS", 16 );
    g_U864._fU40 = -1;
    switch (uVar3)
    {
        case -869201005:
        StrCopy( ref g_U864._fU44, "hidden/OScafe.html", 32 );
        return 0;
        break;
        case -1003789974:
        StrCopy( ref g_U864._fU44, "hidden/OSoleg.html", 32 );
        StrCopy( ref g_U864._fU76, "OLEG", 16 );
        g_U864._fU40 = 0;
        sub_379( g_U864._fU40 );
        return 1;
        break;
        default:
        StrCopy( ref g_U864._fU44, "hidden/OSdefault.html", 32 );
        break;
    }
    return 2;
}

void sub_379(unknown uParam0)
{
    return;
}

void sub_712()
{
    int I;

    UNREGISTER_SCRIPT_WITH_AUDIO();
    SETTIMERA( 0 );
    OVERRIDE_FREEZE_FLAGS( 0 );
    DO_SCREEN_FADE_OUT_UNHACKED( 0 );
    while (IS_SCREEN_FADING_OUT())
    {
        sub_764();
        WAIT( 0 );
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "COMP_LOGOUT" ))
    {
        CLEAR_HELP();
    }
    g_U864._fU0 = 0;
    if (DOES_VIEWPORT_EXIST( g_U864._fU4 ))
    {
        DESTROY_VIEWPORT( g_U864._fU4 );
    }
    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    WAIT( 0 );
    if (l_U505)
    {
        for ( I = 0; I <= (l_U501 - 1); I++ )
        {
            RELEASE_TEXTURE( l_U501[I] );
        }
        REMOVE_TXD( l_U500 );
    }
    if (l_U478)
    {
        for ( I = 0; I <= (l_U480 - 1); I++ )
        {
            RELEASE_TEXTURE( l_U480[I] );
        }
        for ( I = 0; I <= (l_U435 - 1); I++ )
        {
            RELEASE_TEXTURE( l_U435[I] );
        }
        REMOVE_TXD( l_U479 );
        l_U478 = 0;
    }
    if (l_U510)
    {
        RELEASE_TEXTURE( l_U507[0] );
        RELEASE_TEXTURE( l_U507[1] );
        REMOVE_TXD( l_U506 );
    }
    if (IS_PLAYER_PLAYING( sub_1364() ))
    {
        SET_PLAYER_CONTROL( sub_1364(), 1 );
    }
    DO_SCREEN_FADE_IN_UNHACKED( 0 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_764()
{
    if (g_U950)
    {
        if (GET_IS_HIDEF())
        {
            DRAW_SPRITE( l_U507[0], 0.06250000, 0.50000000, 0.12500000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
            DRAW_SPRITE( l_U507[1], 0.93750000, 0.50000000, 0.12500000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            DRAW_SPRITE( l_U507[0], 0.06250000, 0.66500000, 0.12500000, 1.33000000, 0.00000000, 255, 255, 255, 255 );
            DRAW_SPRITE( l_U507[1], 0.93750000, 0.66500000, 0.12500000, 1.33000000, 0.00000000, 255, 255, 255, 255 );
        }
    }
    return;
}

void sub_1364()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1554(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    ref iParam0->_fU0->_fU0 = uParam1;
    ref iParam0->_fU0->_fU4 = uParam2;
    ref iParam0->_fU8->_fU0 = uParam3;
    ref iParam0->_fU8->_fU4 = uParam4;
    iParam0->_fU16 = uParam5;
    return;
}

void sub_1781(int iParam0, unknown uParam1, unknown uParam2)
{
    iParam0->_fU0 = uParam1;
    iParam0->_fU4 = uParam2;
    return;
}

void sub_3120()
{
    unknown[3] uVar2;

    array(ref uVar2, 3);
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    uVar2[0] = CREATE_HTML_SCRIPT_OBJECT( "HDgap" );
    if (GET_IS_HIDEF())
    {
        ADD_TO_HTML_SCRIPT_OBJECT( uVar2[0], "<tr><td width="640" height="160" colspan="3"></td></tr>" );
    }
    sub_3284( ref uVar2[1], "iconWEB", "butinternet.jpg", "WEB", 1001, 1 );
    sub_3284( ref uVar2[2], "iconLOGOUT", "butlogout.jpg", "LOGOUT", 1000, 1 );
    if (g_U864._fU0 != 0)
    {
        sub_3995( 0 );
    }
    LOAD_WEB_PAGE( g_U864._fU4, ref g_U864._fU44 );
    g_U864._fU0 = 1;
    return;
}

void sub_3284(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
{
    (uParam0^) = CREATE_HTML_SCRIPT_OBJECT( uParam1 );
    if (bParam5)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<table width="108" height="96" border="0" cellpadding="0" cellspacing="10">" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<td width="88" height="44" align="center">" );
        sub_3484( uParam0, uParam2, uParam4, 44, 44 );
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

void sub_3484(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_3995(boolean bParam0)
{
    if (bParam0)
    {
        g_U864._fU20 = g_U949;
    }
    else
    {
        g_U864._fU20 = 0.00000000;
    }
    SET_WEB_PAGE_SCROLL( g_U864._fU4, g_U864._fU20 );
    return;
}

void sub_4108(int iParam0)
{
    int I;

    if ((iParam0 >= 0) AND (iParam0 < 20))
    {
        for ( I = iParam0; I <= 19; I++ )
        {
            sub_4158( ref l_U32[I], "", -1, -1, -1 );
        }
    }
    return;
}

void sub_4158(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}

void sub_4240(unknown uParam0, unknown uParam1)
{
    l_U452[uParam0]._fU16 = uParam1;
    return;
}

void sub_4287()
{
    int iVar2;
    int J;
    int I;

    for ( J = 0; J < 11; J++ )
    {
        if (g_U1555[J]._fU312)
        {
            for ( I = 0; I < g_U1555[J]._fU316; I++ )
            {
                if (g_U1555[J]._fU184[I] == 1)
                {
                    if (sub_4400( g_U1555[J]._fU204[I] ))
                    {
                        if (sub_4667( ref g_U1555[J]._fU4[I], 0 ))
                        {
                            g_U1555[J]._fU184[I] = 2;
                        }
                    }
                }
                else if (NOT (g_U1555[J]._fU184[I] == 4))
                {
                    if (g_U1555[J]._fU272[I])
                    {
                        iVar2 = sub_5777( ref g_U1555[J]._fU4[I], 0 );
                        if (iVar2 == 5)
                        {
                            sub_5941( J, g_U1555[J]._fU292[I] );
                            g_U1555[J]._fU184[I] = 4;
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_4400(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_4569( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_4569(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

int sub_4667(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U975[39]._fU0[0] != -1)
    {
        if (NOT sub_4707())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_5394( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_5193( iVar5 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U975[I]._fU0[0] == -1)
        {
            g_U975[I] = {iParam0->_fU0};
            iParam0->_fU40 = I;
            I = 40;
            INCREMENT_INT_STAT_NO_MESSAGE( 368, 1 );
        }
    }
    g_U974 = 1;
    return 1;
}

int sub_4707()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_4741( 5, g_U975[I] )) == 7)
        {
            sub_5193( I );
            return 1;
        }
    }
    return 0;
}

int sub_4741(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_5193(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U975[I - 1] = {g_U975[I]};
        }
    }
    sub_5266( 39 );
    return;
}

void sub_5266(unknown uParam0)
{
    g_U975[uParam0]._fU0[0] = -1;
    g_U975[uParam0]._fU0[1] = -1;
    g_U975[uParam0]._fU0[2] = -1;
    return;
}

int sub_5394(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U975[Result]._fU0[0] != -1)
        {
            if (sub_5455( uParam0, g_U975[Result] ))
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

int sub_5455(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

int sub_5777(int iParam0, int iParam1)
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
            if (sub_5455( iParam0->_fU0, g_U975[I] ))
            {
                iParam0->_fU40 = I;
                return sub_4741( 4, g_U975[I] );
            }
        }
        iParam0->_fU40 = -2;
    }
    return 8;
}

void sub_5941(unknown uParam0, int iParam1)
{
    if (iParam1 < g_U1555[uParam0]._fU316)
    {
        if (g_U1555[uParam0]._fU184[iParam1] == 0)
        {
            sub_6034( ref g_U1555[uParam0]._fU204[iParam1], g_U1555[uParam0]._fU400, 0, 0 );
            g_U1555[uParam0]._fU184[iParam1] = 1;
        }
    }
    return;
}

void sub_6034(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_6087( iParam0, uParam1, uParam2 );
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
        sub_6219( iParam0 + 0 );
    }
    return;
}

void sub_6087(int iParam0, int iParam1, int iParam2)
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
        sub_6219( iParam0 + 0 );
    }
    return;
}

void sub_6219(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_6250( iParam0->_fU4 )))
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

int sub_6250(unknown uParam0)
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

int sub_7100(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_7190(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_3995( uParam1 );
    if (bParam2)
    {
        RELOAD_WEB_PAGE( g_U864._fU4 );
    }
    else
    {
        LOAD_WEB_PAGE( g_U864._fU4, uParam0 );
        StrCopy( ref g_U864._fU168, uParam0, 64 );
        g_U864._fU164 = 1;
    }
    sub_7270();
    return;
}

void sub_7270()
{
    float fVar2;

    fVar2 = GET_WEB_PAGE_HEIGHT( g_U864._fU4 );
    if (fVar2 > (g_U948 - (g_U946 * g_U948)))
    {
        g_U864._fU28 = 1;
        g_U864._fU32 = (1.00000000 - g_U946) / fVar2;
        g_U864._fU36 = (1.00000000 - g_U946) * ((g_U948 - (g_U946 * g_U948)) / fVar2);
    }
    else
    {
        g_U864._fU28 = 0;
    }
    return;
}

void sub_7447()
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
    if ((g_U864._fU0 > 2) AND (iVar9))
    {
        g_U864._fU20 += ((TO_FLOAT( iVar3 )) / 10.00000000) * fVar10;
        sub_7671( ref g_U864._fU20, g_U949, (GET_WEB_PAGE_HEIGHT( g_U864._fU4 )) - g_U948 );
        SET_WEB_PAGE_SCROLL( g_U864._fU4, g_U864._fU20 );
        fVar5[0] = g_U949;
        if (fVar5[0] < 0)
        {
            fVar5[0] *= -1;
        }
        fVar5[1] = (GET_WEB_PAGE_HEIGHT( g_U864._fU4 )) - g_U948;
        fVar5[2] = 100.00000000 / (fVar5[0] + fVar5[1]);
        fVar5[1] = fVar5[0] + g_U864._fU20;
        g_U864._fU24 = ROUND( fVar5[2] * fVar5[1] );
    }
    return;
}

void sub_7671(unknown uParam0, float fParam1, float fParam2)
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

void sub_7916(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    int iVar7;
    int iVar8;
    unknown uVar9;
    float fVar10;

    fVar10 = 1.00000000;
    if (NOT g_U858._fU20)
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar7, ref iVar8, ref uVar9, ref uVar9 );
        if ((iVar7 == 0) AND (iVar8 == 0))
        {
            GET_MOUSE_INPUT( ref iVar7, ref iVar8 );
            fVar10 = 15.00000000;
        }
        GET_FRAME_TIME( ref uVar6 );
        g_U858._fU0 += (((TO_FLOAT( iVar7 )) / 300.00000000) * uVar6) * fVar10;
        sub_7671( ref g_U858._fU0, uParam0, uParam1 );
        g_U858._fU4 += (((TO_FLOAT( iVar8 )) / 300.00000000) * uVar6) * fVar10;
        sub_7671( ref g_U858._fU4, uParam2, uParam3 );
    }
    return;
}

void sub_8126()
{
    int iVar2;

    switch (g_U864._fU0)
    {
        case 3:
        if (g_U858._fU4 <= g_U946)
        {
            g_U864._fU0 = 4;
        }
        break;
        case 4:
        if (g_U858._fU4 > g_U946)
        {
            g_U864._fU0 = 3;
        }
        break;
    }
    switch (g_U864._fU0)
    {
        case 1:
        case 3:
        if ((GET_NUMBER_OF_WEB_PAGE_LINKS( g_U864._fU4 )) != 0)
        {
            iVar2 = GET_WEB_PAGE_LINK_AT_POSN( g_U864._fU4, g_U858._fU0, g_U858._fU4 );
            if (iVar2 != g_U858._fU8)
            {
                if ((g_U858._fU8 != -1) AND (g_U858._fU8 < (GET_NUMBER_OF_WEB_PAGE_LINKS( g_U864._fU4 ))))
                {
                    sub_8368( g_U858._fU8, 0 );
                }
                g_U858._fU8 = iVar2;
                if (iVar2 != -1)
                {
                    sub_8368( g_U858._fU8, 1 );
                    if (NOT (STRING_TO_INT( GET_WEB_PAGE_LINK_HREF( g_U864._fU4, g_U858._fU8 ), ref g_U858._fU16 )))
                    {
                        g_U858._fU16 = -1;
                    }
                }
                else
                {
                    g_U858._fU16 = -1;
                }
            }
        }
        break;
        default:
        sub_8368( g_U858._fU8, 0 );
        g_U858._fU8 = -1;
        break;
    }
    return;
}

void sub_8368(int iParam0, unknown uParam1)
{
    if ((iParam0 != -1) AND (iParam0 < (GET_NUMBER_OF_WEB_PAGE_LINKS( g_U864._fU4 ))))
    {
        SET_WEB_PAGE_LINK_ACTIVE( g_U864._fU4, iParam0, uParam1 );
    }
    return;
}

int sub_8575()
{
    int Result;

    for ( Result = 0; Result <= (5 - 1); Result++ )
    {
        if (l_U452[Result]._fU16)
        {
            if ((g_U858._fU0 >= (l_U452[Result]._fU0._fU0 - (l_U452[Result]._fU8._fU0 * 0.50000000))) AND (g_U858._fU0 <= (l_U452[Result]._fU0._fU0 + (l_U452[Result]._fU8._fU0 * 0.50000000))))
            {
                if ((g_U858._fU4 >= (l_U452[Result]._fU0._fU4 - (l_U452[Result]._fU8._fU4 * 0.50000000))) AND (g_U858._fU4 <= (l_U452[Result]._fU0._fU4 + (l_U452[Result]._fU8._fU4 * 0.50000000))))
                {
                    return Result;
                }
            }
        }
    }
    return 6;
}

int sub_8827()
{
    if (g_U837)
    {
        g_U837 = 0;
        if (NOT (sub_8865( ref l_U32[l_U31], ref g_U838 )))
        {
            sub_8997( g_U838 );
            return 1;
        }
    }
    return 0;
}

int sub_8865(int iParam0, int iParam1)
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

void sub_8997(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    int I;

    if (NOT (COMPARE_STRING( ref l_U32[l_U31]._fU0, "" )))
    {
        if (l_U31 == 19)
        {
            for ( I = 0; I <= 18; I++ )
            {
                sub_4158( ref l_U32[I], ref l_U32[I + 1]._fU0, l_U32[I + 1]._fU64[0], l_U32[I + 1]._fU64[1], l_U32[I + 1]._fU64[2] );
            }
        }
        else
        {
            l_U31++;
        }
    }
    sub_4158( ref l_U32[l_U31], ref uParam0._fU0, uParam0._fU64[0], uParam0._fU64[1], uParam0._fU64[2] );
    if (l_U31 < 19)
    {
        sub_4108( l_U31 + 1 );
    }
    return;
}

void sub_9257()
{
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    sub_8368( g_U858._fU8, 0 );
    g_U864._fU16 = 1;
    sub_9294();
    g_U858._fU8 = -1;
    g_U864._fU24 = 0;
    sub_10327( "\n THE WEBSITE HASH KEY FOR " );
    sub_10327( ref l_U32[l_U31]._fU0 );
    sub_10327( " is, " );
    sub_10391( GET_HASH_KEY( ref l_U32[l_U31]._fU0 ) );
    switch (GET_HASH_KEY( ref l_U32[l_U31]._fU0 ))
    {
        case 240407440:
        sub_4240( 2, 0 );
        sub_4240( 1, 1 );
        break;
        case 744321622:
        sub_4240( 2, 1 );
        sub_4240( 1, 0 );
        break;
        default:
        sub_4240( 2, 1 );
        sub_4240( 1, 1 );
        break;
    }
    if (DOES_WEB_PAGE_EXIST( ref l_U32[l_U31]._fU0 ))
    {
        if (sub_10544( ref l_U32[l_U31]._fU0, ref l_U492 ))
        {
            l_U491 = 1;
        }
        else
        {
            sub_11900();
            g_U864._fU324 = 0;
            sub_7190( ref l_U32[l_U31]._fU0, 1, 0 );
        }
    }
    else
    {
        StrCopy( ref l_U492, "webError", 32 );
        l_U491 = 1;
    }
    sub_4240( 0, 0 );
    return;
}

void sub_9294()
{
    int I;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    char[64] cVar10;
    int[24] iVar26;

    sub_9303();
    iVar3 = 0;
    array(ref iVar26, 24);
    for ( I = 0; I <= 23; I++ )
    {
        iVar26[I] = I;
    }
    if (g_U953 != -1)
    {
        iVar26[0] = g_U953;
        iVar26[g_U953] = 0;
        iVar3 = 1;
    }
    for ( I = iVar3; I <= 4; I++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( I, 24, ref uVar5 );
        uVar4 = iVar26[I];
        iVar26[I] = iVar26[uVar5];
        iVar26[uVar5] = uVar4;
    }
    for ( I = 0; I <= 4; I++ )
    {
        g_U954[I] = iVar26[I];
        if (sub_9599( g_U954[I] ))
        {
            if (# -NULL-0xc27c84())
            {
                StrCopy( ref cVar10, "e2:/xbox360/textures/webAdverts_", 64 );
            }
            else if (# -NULL-0xc27bfa())
            {
                StrCopy( ref cVar10, "e2:/pc/textures/webAdverts_", 64 );
            }
            ConcatString(ref cVar10, g_U954[I], 64);
            sub_9765( "\n About to LOAD_TXD ", ref cVar10 );
            l_U0._fU0[I] = LOAD_TXD( ref cVar10 );
        }
        else
        {
            sub_9830( ref uVar6, "webAdverts", g_U954[I], -1, -1 );
            l_U0._fU0[I] = LOAD_TXD( ref uVar6 );
        }
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

void sub_9303()
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

boolean sub_9599(int iParam0)
{
    return iParam0 >= 15;
}

void sub_9765(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9830(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_10327(unknown uParam0)
{
    return;
}

void sub_10391(unknown uParam0)
{
    return;
}

int sub_10544(unknown uParam0, unknown uParam1)
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
        case 851160674:
        StrCopy( (uParam1^), "webCelebinatorBlog", 32 );
        break;
        case 1458135577:
        StrCopy( (uParam1^), "webCelebComment", 32 );
        break;
        case 692704691:
        StrCopy( (uParam1^), "webRealEstate", 32 );
        break;
        case 3617788:
        StrCopy( (uParam1^), "webWhatThey", 32 );
        break;
        case 2138472987:
        ALTER_WANTED_LEVEL_NO_DROP( sub_1364(), 5 );
        TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_TWAT" );
    }
    sub_9765( "\n NO SCRIPT FOR THIS WEBSITE - ", uParam0 );
    sub_10327( ", THE HASH KEY IS - " );
    sub_10391( GET_HASH_KEY( uParam0 ) );
    return 0;
    sub_9765( uParam0, " is going to load the following script, " );
    sub_9765( uParam1, " \n" );
    return 1;
}

void sub_11900()
{
    sub_11938( ref l_U0._fU68[0], "advert_medium_0", 3, 0 );
    sub_11938( ref l_U0._fU68[1], "advert_medium_1", 3, 1 );
    sub_11938( ref l_U0._fU68[2], "advert_medium_2", 3, 2 );
    sub_11938( ref l_U0._fU68[3], "advert_medium_3", 3, 3 );
    sub_11938( ref l_U0._fU68[4], "advert_medium_4", 3, 4 );
    sub_11938( ref l_U0._fU68[5], "advert_small_0", 4, 0 );
    sub_11938( ref l_U0._fU68[6], "advert_small_1", 4, 1 );
    sub_11938( ref l_U0._fU68[7], "advert_small_2", 4, 2 );
    sub_11938( ref l_U0._fU68[8], "advert_small_3", 4, 3 );
    sub_11938( ref l_U0._fU68[9], "advert_small_4", 4, 4 );
    return;
}

void sub_11938(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[16] cVar6;
    unknown uVar10;

    (uParam0^) = CREATE_HTML_SCRIPT_OBJECT( uParam1 );
    StrCopy( ref cVar6, "WEBADDRESS_", 16 );
    ConcatString(ref cVar6, g_U954[uParam3], 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
    if (NOT IS_JAPANESE_VERSION())
    {
        uVar10 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), GET_FIRST_N_CHARACTERS_OF_STRING( ref cVar6, uVar10 ) );
    }
    else
    {
        ADD_STRING_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    string(ref cVar6, g_U954[uParam3], 16);
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

int sub_13136()
{
    unknown uVar2;

    if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
    {
        return 1;
    }
    else if (IS_MOUSE_BUTTON_JUST_PRESSED( 1 ))
    {
        l_U434 = 1;
    }
    else if ((NOT (IS_MOUSE_BUTTON_PRESSED( 1 ))) AND (l_U434 == 1))
    {
        l_U434 = 0;
        return 0;
    }
    else if (IS_CONTROL_JUST_PRESSED( 2, 77 ))
    {
        return 0;
    }
    else if (sub_13254())
    {
        return 3;
    }
    else if ((g_U864._fU0 > 2) AND ((IS_MOUSE_BUTTON_JUST_PRESSED( 2 )) || (((IS_GAME_KEYBOARD_KEY_PRESSED( 56 )) || (IS_GAME_KEYBOARD_KEY_PRESSED( 184 ))) AND (IS_GAME_KEYBOARD_KEY_JUST_PRESSED( 203 )))))
    {
        return 3;
    }
    else if (IS_BUTTON_JUST_PRESSED( 0, 15 ))
    {
        return 4;
    }
    else if (((g_U864._fU0 > 2) AND ((IS_GAME_KEYBOARD_KEY_PRESSED( 56 )) || (IS_GAME_KEYBOARD_KEY_PRESSED( 184 )))) AND (IS_GAME_KEYBOARD_KEY_JUST_PRESSED( 205 )))
    {
        return 4;
    }
    else if ((IS_BUTTON_JUST_PRESSED( 0, 14 )) || ((g_U864._fU0 > 2) AND (IS_GAME_KEYBOARD_KEY_JUST_PRESSED( 63 ))))
    {
        return 2;
    };;;;;;;;;
    return 6;
}

int sub_13254()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 76 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 78 )) AND (IS_USING_CONTROLLER())))
    {
        l_U433 = 1;
    }
    if (NOT (((IS_CONTROL_PRESSED( 2, 76 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 78 )) AND (IS_USING_CONTROLLER()))))
    {
        if (l_U433 == 1)
        {
            l_U433 = 0;
            return 1;
        }
    }
    return 0;
}

int sub_13801(unknown uParam0)
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

    if (NOT (COMPARE_STRING( ref l_U32[l_U31]._fU0, uParam0 )))
    {
        array(ref uVar3._fU64, 3);
        ref uVar3;
        sub_4158( ref uVar3, uParam0, -1, -1, -1 );
        sub_8997( uVar3 );
        return 1;
    }
    else
    {
        sub_10327( "\n THE SITES ARE THE SAME " );
        sub_10327( ref l_U32[l_U31]._fU0 );
        sub_10327( " AND " );
        sub_10327( uParam0 );
        sub_10327( ".      " );
    }
    return 0;
}

void sub_14125()
{
    g_U864._fU312 = 1;
    PLAY_SOUND_FRONTEND( -1, "WEB_BACK_OR_FORWARD_SHORTCUT" );
    if (l_U31 == 0)
    {
        sub_14193();
    }
    else if (sub_14272())
    {
        sub_9257();
        sub_4240( 0, 1 );
    }
    return;
}

void sub_14193()
{
    INCREMENT_INT_STAT_NO_MESSAGE( 68, TIMERB() );
    sub_8368( g_U858._fU8, 0 );
    g_U858._fU8 = -1;
    sub_3120();
    sub_4108( 0 );
    g_U864._fU16 = 1;
    return;
}

int sub_14272()
{
    if (NOT g_U864._fU8)
    {
        if (g_U864._fU0 >= 3)
        {
            if (l_U31 > 0)
            {
                l_U31--;
                return 1;
            }
        }
    }
    return 0;
}

void sub_14448()
{
    g_U864._fU316 = 1;
    PLAY_SOUND_FRONTEND( -1, "WEB_BACK_OR_FORWARD_SHORTCUT" );
    if (sub_14506())
    {
        sub_9257();
        if ((l_U31 + 1) < 20)
        {
            if (COMPARE_STRING( ref l_U32[l_U31 + 1]._fU0, "" ))
            {
                sub_4240( 0, 0 );
            }
            else
            {
                sub_4240( 0, 1 );
            }
        }
        else
        {
            sub_4240( 0, 0 );
        }
    }
    return;
}

int sub_14506()
{
    if (NOT g_U864._fU8)
    {
        if (l_U31 < 19)
        {
            if (NOT (COMPARE_STRING( ref l_U32[l_U31 + 1]._fU0, "" )))
            {
                l_U31++;
                return 1;
            }
        }
    }
    return 0;
}

void sub_14761()
{
    l_U449 = 1;
    l_U450 = 0;
    g_U864._fU92 = 1;
    g_U864._fU96 = 1;
    StrCopy( ref g_U864._fU100, "", 64 );
    l_U451 = 17;
    l_U447 = 0;
    return;
}

void sub_15136(int iParam0)
{
    int I;
    float fVar4;
    int iVar5;
    int iVar6;

    if (g_U864._fU0 > 2)
    {
        DRAW_SPRITE( l_U480[7], 0.50000000, g_U946 * 0.50000000, g_U947, g_U946, 0.00000000, 255, 255, 255, 255 );
        for ( I = 0; I <= 3; I++ )
        {
            if (l_U452[I]._fU16)
            {
                DRAW_SPRITE( l_U480[I], l_U452[I]._fU0._fU0, l_U452[I]._fU0._fU4, l_U452[I]._fU8._fU0, l_U452[I]._fU8._fU4, 0.00000000, 255, 255, 255, 255 );
            }
            else
            {
                DRAW_SPRITE( l_U480[I + 4], l_U452[I]._fU0._fU0, l_U452[I]._fU0._fU4, l_U452[I]._fU8._fU0, l_U452[I]._fU8._fU4, 0.00000000, 255, 255, 255, 255 );
            }
        }
        DRAW_RECT( l_U452[4]._fU0._fU0, l_U452[4]._fU0._fU4, l_U452[4]._fU8._fU0 + 0.00400000, l_U452[4]._fU8._fU4 + 0.00400000, 0, 0, 0, 255 );
        if ((iParam0 != 4) || (g_U864._fU92))
        {
            DRAW_RECT( l_U452[4]._fU0._fU0, l_U452[4]._fU0._fU4, l_U452[4]._fU8._fU0, l_U452[4]._fU8._fU4, 255, 255, 255, 255 );
        }
        else
        {
            DRAW_RECT( l_U452[4]._fU0._fU0, l_U452[4]._fU0._fU4, l_U452[4]._fU8._fU0, l_U452[4]._fU8._fU4, 250, 255, 215, 255 );
        }
        SET_TEXT_COLOUR( 0, 0, 0, 255 );
        SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 0 );
        SET_TEXT_WRAP( l_U452[4]._fU0._fU0 - (l_U452[4]._fU8._fU0 * 0.50000000), 1.00000000 );
        if (g_U950)
        {
            SET_TEXT_SCALE( 0.25000000, 0.40000000 );
        }
        else
        {
            SET_TEXT_SCALE( 0.29500000, 0.40000000 );
        }
        SET_TEXT_LINE_DISPLAY( 0, 0 );
        if (g_U864._fU92)
        {
            if (NOT (COMPARE_STRING( ref g_U864._fU100, "" )))
            {
                if (((GET_STRING_WIDTH_WITH_STRING( "STRING", ref g_U864._fU100 )) > (l_U452[4]._fU8._fU0 * 0.98000000)) || ((GET_LENGTH_OF_LITERAL_STRING( ref g_U864._fU100 )) > 63))
                {
                    g_U864._fU96 = 0;
                }
                else
                {
                    g_U864._fU96 = 1;
                }
                DISPLAY_TEXT_WITH_LITERAL_STRING( l_U452[4]._fU0._fU0 - (l_U452[4]._fU8._fU0 * 0.49000000), 0.07600000, "STRING", ref g_U864._fU100 );
            }
        }
        else if (g_U864._fU164)
        {
            g_U864._fU164 = 0;
            iVar5 = GET_LENGTH_OF_LITERAL_STRING( ref g_U864._fU168 );
            iVar6 = 1;
            while ((GET_STRING_WIDTH_WITH_STRING( "STRING", ref g_U864._fU168 )) > (l_U452[4]._fU8._fU0 * 0.98000000))
            {
                iVar5--;
                StrCopy( ref g_U864._fU168, GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( ref g_U864._fU168, iVar5 ), 64 );
            }
        }
        if (iParam0 != 4)
        {
            if (NOT (COMPARE_STRING( ref g_U864._fU168, "" )))
            {
                DISPLAY_TEXT_WITH_LITERAL_STRING( l_U452[4]._fU0._fU0 - (l_U452[4]._fU8._fU0 * 0.49000000), 0.07600000, "STRING", ref g_U864._fU168 );
            }
        }
        if (g_U950)
        {
            if (g_U864._fU28)
            {
                DRAW_SPRITE( l_U480[9], 0.86500000, 0.58000000, 0.02000000, 0.84000000, 0.00000000, 255, 255, 255, 255 );
                fVar4 = g_U864._fU20 + 102.40000000;
                fVar4 *= g_U864._fU32;
                fVar4 += g_U864._fU36 * 0.50000000;
                fVar4 += 0.16000000;
                DRAW_RECT( 0.86600000, fVar4, 0.01700000, g_U864._fU36, 153, 149, 148, 255 );
                DRAW_RECT( 0.86600000, fVar4, 0.01600000, g_U864._fU36 - 0.00100000, 181, 181, 181, 255 );
            }
        }
    }
    return;
}

int sub_16701()
{
    char[16] cVar2;
    int iVar6;

    l_U448 = 0;
    if (sub_16726( ref iVar6, ref g_U864._fU100, 0 ))
    {
        if (iVar6 == 14)
        {
            sub_18242();
        }
        else
        {
            l_U451 = iVar6;
            l_U448 = 1;
        }
    }
    else if (IS_CONTROL_JUST_PRESSED( 2, 77 ))
    {
        if (l_U451 != 28)
        {
            if (g_U864._fU96)
            {
                StrCopy( ref cVar2, "KEYBOARDKEY_", 16 );
                ConcatString(ref cVar2, l_U451, 16);
                ConcatString(ref g_U864._fU100, GET_FIRST_N_CHARACTERS_OF_STRING( ref cVar2, 1 ), 64);
                l_U448 = 1;
                iVar6 = l_U451;
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
        sub_18242();
        iVar6 = 14;
    }
    else if (IS_CONTROL_JUST_PRESSED( 2, 78 ))
    {
        l_U447 = 3;
    }
    else
    {
        sub_18578();
    };;;;
    if (iVar6 == 28)
    {
        return 1;
    }
    if (((NOT (# -NULL-0xc27bfa())) AND (iVar6 != 102)) || ((# -NULL-0xc27bfa()) AND (iVar6 == 102)))
    {
        if (iVar6 == 14)
        {
            if ((GET_LENGTH_OF_LITERAL_STRING( ref g_U864._fU100 )) < 3)
            {
                l_U449 = 1;
            }
        }
        else if (l_U449)
        {
            if ((GET_LENGTH_OF_LITERAL_STRING( ref g_U864._fU100 )) == 3)
            {
                l_U449 = 0;
                if (COMPARE_STRING( ref g_U864._fU100, "www" ))
                {
                    l_U450 = 1;
                }
            }
        }
    }
    return 0;
}

int sub_16726(unknown uParam0, unknown uParam1, unknown uParam2)
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
                if (g_U864._fU96)
                {
                    if (NOT IS_JAPANESE_VERSION())
                    {
                        sub_16830( uParam1, uParam0, 47, "-", "-", uParam2, 1 );
                    }
                    else
                    {
                        sub_16830( uParam1, uParam0, 25, "-", "-", uParam2, 1 );
                        sub_16830( uParam1, uParam0, 50, ".", ".", uParam2, 1 );
                    }
                }
            }
            else if (g_U864._fU96)
            {
                sub_16830( uParam1, uParam0, 30, "A", "a", uParam2, 1 );
                sub_16830( uParam1, uParam0, 48, "B", "b", uParam2, 1 );
                sub_16830( uParam1, uParam0, 46, "C", "c", uParam2, 1 );
                sub_16830( uParam1, uParam0, 32, "D", "d", uParam2, 1 );
                sub_16830( uParam1, uParam0, 18, "E", "e", uParam2, 1 );
                sub_16830( uParam1, uParam0, 33, "F", "f", uParam2, 1 );
                sub_16830( uParam1, uParam0, 34, "G", "g", uParam2, 1 );
                sub_16830( uParam1, uParam0, 35, "H", "h", uParam2, 1 );
                sub_16830( uParam1, uParam0, 23, "I", "i", uParam2, 1 );
                sub_16830( uParam1, uParam0, 36, "J", "j", uParam2, 1 );
                sub_16830( uParam1, uParam0, 37, "K", "k", uParam2, 1 );
                sub_16830( uParam1, uParam0, 38, "L", "l", uParam2, 1 );
                sub_16830( uParam1, uParam0, 50, "M", "m", uParam2, 1 );
                sub_16830( uParam1, uParam0, 49, "N", "n", uParam2, 1 );
                sub_16830( uParam1, uParam0, 24, "O", "o", uParam2, 1 );
                sub_16830( uParam1, uParam0, 25, "P", "p", uParam2, 1 );
                sub_16830( uParam1, uParam0, 16, "Q", "q", uParam2, 1 );
                sub_16830( uParam1, uParam0, 19, "R", "r", uParam2, 1 );
                sub_16830( uParam1, uParam0, 31, "S", "s", uParam2, 1 );
                sub_16830( uParam1, uParam0, 20, "T", "t", uParam2, 1 );
                sub_16830( uParam1, uParam0, 22, "U", "u", uParam2, 1 );
                sub_16830( uParam1, uParam0, 47, "V", "v", uParam2, 1 );
                sub_16830( uParam1, uParam0, 17, "W", "w", uParam2, 1 );
                sub_16830( uParam1, uParam0, 45, "X", "x", uParam2, 1 );
                sub_16830( uParam1, uParam0, 21, "Y", "y", uParam2, 1 );
                sub_16830( uParam1, uParam0, 44, "Z", "z", uParam2, 1 );
                sub_16830( uParam1, uParam0, 11, "0", "0", uParam2, 1 );
                sub_16830( uParam1, uParam0, 2, "1", "1", uParam2, 1 );
                sub_16830( uParam1, uParam0, 3, "2", "2", uParam2, 1 );
                sub_16830( uParam1, uParam0, 4, "3", "3", uParam2, 1 );
                sub_16830( uParam1, uParam0, 5, "4", "4", uParam2, 1 );
                sub_16830( uParam1, uParam0, 6, "5", "5", uParam2, 1 );
                sub_16830( uParam1, uParam0, 7, "6", "6", uParam2, 1 );
                sub_16830( uParam1, uParam0, 8, "7", "7", uParam2, 1 );
                sub_16830( uParam1, uParam0, 9, "8", "8", uParam2, 1 );
                sub_16830( uParam1, uParam0, 10, "9", "9", uParam2, 1 );
                sub_16830( uParam1, uParam0, 12, "-", "-", uParam2, 1 );
                sub_16830( uParam1, uParam0, 52, ".", ".", uParam2, 1 );
            }
            sub_16830( uParam1, uParam0, 14, "", "", uParam2, 0 );
            sub_16830( uParam1, uParam0, 28, "", "", uParam2, 0 );
            sub_16830( uParam1, uParam0, 1, "", "", uParam2, 0 );;
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
    else if (g_U864._fU96)
    {
        sVar5 = "";
        iVar6 = 0;
        iVar7 = 0;
        bVar8 = true;
        (uParam0^) = 102;
        sub_16830( uParam1, uParam0, 14, "", "", uParam2, 0 );
        sub_16830( uParam1, uParam0, 28, "", "", uParam2, 0 );
        sub_16830( uParam1, uParam0, 1, "", "", uParam2, 0 );
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

void sub_16830(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, boolean bParam6)
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

void sub_18242()
{
    int iVar2;

    iVar2 = GET_LENGTH_OF_LITERAL_STRING( ref g_U864._fU100 );
    if (iVar2 > 0)
    {
        iVar2--;
        StrCopy( ref g_U864._fU100, GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( ref g_U864._fU100, iVar2 ), 64 );
    }
    return;
}

void sub_18578()
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
        l_U444 += iVar5;
        if (l_U444 >= 1500)
        {
            if (iVar2 < 65501)
            {
                sub_18748( 2 );
            }
            else if (iVar2 > 35)
            {
                sub_18748( 3 );
            }
            else if (iVar3 < 65501)
            {
                sub_18748( 0 );
            }
            else if (iVar3 > 35)
            {
                sub_18748( 1 );
            };;;;
            l_U444 = 0;
        }
    }
    else
    {
        l_U444 = 1500;
        if (IS_BUTTON_JUST_PRESSED( 0, 8 ))
        {
            sub_18748( 0 );
        }
        else if (IS_BUTTON_JUST_PRESSED( 0, 9 ))
        {
            sub_18748( 1 );
        }
        else if (IS_BUTTON_JUST_PRESSED( 0, 10 ))
        {
            sub_18748( 2 );
        }
        else if (IS_BUTTON_JUST_PRESSED( 0, 11 ))
        {
            sub_18748( 3 );
        };;;;
    }
    return;
}

void sub_18748(unknown uParam0)
{
    int iVar3;

    iVar3 = l_U451;
    switch (uParam0)
    {
        case 0:
        switch (l_U451)
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
        switch (l_U451)
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
        switch (l_U451)
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
        switch (l_U451)
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
    l_U451 = iVar3;
    return;
}

void sub_19821()
{
    float fVar2;
    float fVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    unknown uVar7;
    unknown uVar8;

    if (g_U950)
    {
        fVar2 = 0.75000000;
        fVar3 = 0.50000000;
    }
    else
    {
        fVar2 = 1.00000000;
        fVar3 = 0.65000000;
    }
    switch (l_U447)
    {
        case 0:
        l_U445 += 60;
        if (sub_19939( ref l_U445, 0, 160 ))
        {
            l_U447 = 1;
        }
        break;
        case 1:
        l_U446 += 60;
        if (sub_19939( ref l_U446, 0, 255 ))
        {
            l_U447 = 2;
        }
        break;
        case 3:
        l_U446 -= 60;
        if (sub_19939( ref l_U446, 0, 255 ))
        {
            l_U447 = 4;
        }
        break;
        case 4:
        l_U445 -= 60;
        if (sub_19939( ref l_U445, 0, 160 ))
        {
            l_U447 = 5;
        }
        break;
    }
    if (IS_USING_CONTROLLER())
    {
        DRAW_RECT( 0.50000000, ((1.00000000 - g_U946) * 0.50000000) + g_U946, fVar2, 1.00000000 - g_U946, 255, 255, 255, l_U445 );
    }
    if ((l_U447 > 0) AND (l_U447 < 4))
    {
        if (IS_USING_CONTROLLER())
        {
            DRAW_SPRITE( l_U435[3], 0.50000000, 0.50000000, fVar3, 0.50000000, 0.00000000, 255, 255, 255, l_U446 );
            sub_20331( 1, ref uVar4, ref uVar5 );
            sub_20480( "1", 2, ref uVar4, uVar5 );
            sub_20480( "2", 3, ref uVar4, uVar5 );
            sub_20480( "3", 4, ref uVar4, uVar5 );
            sub_20480( "4", 5, ref uVar4, uVar5 );
            sub_20480( "5", 6, ref uVar4, uVar5 );
            sub_20480( "6", 7, ref uVar4, uVar5 );
            sub_20480( "7", 8, ref uVar4, uVar5 );
            sub_20480( "8", 9, ref uVar4, uVar5 );
            sub_20480( "9", 10, ref uVar4, uVar5 );
            sub_20480( "0", 11, ref uVar4, uVar5 );
            sub_20331( 2, ref uVar4, ref uVar5 );
            sub_20480( "Q", 16, ref uVar4, uVar5 );
            sub_20480( "W", 17, ref uVar4, uVar5 );
            sub_20480( "E", 18, ref uVar4, uVar5 );
            sub_20480( "R", 19, ref uVar4, uVar5 );
            sub_20480( "T", 20, ref uVar4, uVar5 );
            sub_20480( "Y", 21, ref uVar4, uVar5 );
            sub_20480( "U", 22, ref uVar4, uVar5 );
            sub_20480( "I", 23, ref uVar4, uVar5 );
            sub_20480( "O", 24, ref uVar4, uVar5 );
            sub_20480( "P", 25, ref uVar4, uVar5 );
            sub_20331( 3, ref uVar4, ref uVar5 );
            sub_20480( "A", 30, ref uVar4, uVar5 );
            sub_20480( "S", 31, ref uVar4, uVar5 );
            sub_20480( "D", 32, ref uVar4, uVar5 );
            sub_20480( "F", 33, ref uVar4, uVar5 );
            sub_20480( "G", 34, ref uVar4, uVar5 );
            sub_20480( "H", 35, ref uVar4, uVar5 );
            sub_20480( "J", 36, ref uVar4, uVar5 );
            sub_20480( "K", 37, ref uVar4, uVar5 );
            sub_20480( "L", 38, ref uVar4, uVar5 );
            sub_20480( "-", 12, ref uVar4, uVar5 );
            sub_20331( 4, ref uVar4, ref uVar5 );
            sub_20480( "Z", 44, ref uVar4, uVar5 );
            sub_20480( "X", 45, ref uVar4, uVar5 );
            sub_20480( "C", 46, ref uVar4, uVar5 );
            sub_20480( "V", 47, ref uVar4, uVar5 );
            sub_20480( "B", 48, ref uVar4, uVar5 );
            sub_20480( "N", 49, ref uVar4, uVar5 );
            sub_20480( "M", 50, ref uVar4, uVar5 );
            sub_20480( ".", 52, ref uVar4, uVar5 );
            sub_20480( "", 28, ref uVar4, uVar5 );
            if (l_U450)
            {
                l_U451 = 52;
                l_U450 = 0;
            }
            if (g_U950)
            {
                fVar6 = 0.28500000;
            }
            else
            {
                fVar6 = 0.21800000;
            }
            uVar8 = ROUND( (TO_FLOAT( l_U446 )) / 1.60000000 );
            DRAW_SPRITE( l_U435[0], fVar6, 0.67800000, 0.02000000, 0.03000000, 0.00000000, 255, 255, 255, uVar8 );
            fVar6 += 0.01300000;
        }
        if (IS_USING_CONTROLLER())
        {
            sub_21093();
            SET_TEXT_WRAP( fVar6, 1.00000000 );
            uVar7 = GET_STRING_WIDTH( "IKEY_SELECT" );
            DISPLAY_TEXT( fVar6, 0.66700000, "IKEY_SELECT" );
            fVar6 += uVar7;
            fVar6 += 0.02000000;
            DRAW_SPRITE( l_U435[1], fVar6, 0.67800000, 0.02000000, 0.03000000, 0.00000000, 255, 255, 255, uVar8 );
            fVar6 += 0.01300000;
            sub_21093();
            SET_TEXT_WRAP( fVar6, 1.00000000 );
            DISPLAY_TEXT( fVar6, 0.66700000, "IKEY_BACK" );
            if (g_U950)
            {
                fVar6 = 0.72500000;
            }
            else
            {
                fVar6 = 0.72000000;
            }
            sub_21093();
            uVar7 = GET_STRING_WIDTH( "IKEY_CANCEL" );
            fVar6 -= uVar7;
            SET_TEXT_WRAP( fVar6, 1.00000000 );
            DISPLAY_TEXT( fVar6, 0.66700000, "IKEY_CANCEL" );
            fVar6 -= 0.01300000;
            DRAW_SPRITE( l_U435[2], fVar6, 0.67800000, 0.02000000, 0.03000000, 0.00000000, 255, 255, 255, uVar8 );
        }
    }
    return;
}

int sub_19939(unknown uParam0, int iParam1, int iParam2)
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

void sub_20331(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U950)
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

void sub_20480(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    char[16] cVar6;

    if (iParam1 == l_U451)
    {
        if (g_U950)
        {
            if (iParam1 == 28)
            {
                if (l_U448)
                {
                    DRAW_SPRITE( l_U435[7], 0.68700000, uParam3 + 0.00150000, 0.10200000, 0.08800000, 0.00000000, 255, 255, 255, l_U446 / 2 );
                }
                else
                {
                    DRAW_SPRITE( l_U435[6], 0.68700000, uParam3 + 0.00150000, 0.10200000, 0.08800000, 0.00000000, 255, 255, 255, l_U446 / 2 );
                }
            }
            else if (l_U448)
            {
                DRAW_SPRITE( l_U435[5], (uParam2^) + 0.01400000, uParam3 + 0.00150000, 0.05300000, 0.08800000, 0.00000000, 255, 255, 255, l_U446 / 2 );
            }
            else
            {
                DRAW_SPRITE( l_U435[4], (uParam2^) + 0.01400000, uParam3 + 0.00150000, 0.05300000, 0.08800000, 0.00000000, 255, 255, 255, l_U446 / 2 );
            }
        }
        else if (iParam1 == 28)
        {
            if (l_U448)
            {
                DRAW_SPRITE( l_U435[7], 0.74300000, uParam3 + 0.00150000, 0.13500000, 0.08800000, 0.00000000, 255, 255, 255, l_U446 / 2 );
            }
            else
            {
                DRAW_SPRITE( l_U435[6], 0.74300000, uParam3 + 0.00150000, 0.13500000, 0.08800000, 0.00000000, 255, 255, 255, l_U446 / 2 );
            }
        }
        else if (l_U448)
        {
            DRAW_SPRITE( l_U435[5], (uParam2^) + 0.01700000, uParam3 + 0.00150000, 0.06800000, 0.08800000, 0.00000000, 255, 255, 255, l_U446 / 2 );
        }
        else
        {
            DRAW_SPRITE( l_U435[4], (uParam2^) + 0.01700000, uParam3 + 0.00150000, 0.06800000, 0.08800000, 0.00000000, 255, 255, 255, l_U446 / 2 );
        };;;
    }
    sub_21093();
    SET_TEXT_WRAP( (uParam2^), uParam3 );
    if (iParam1 == 28)
    {
        if (IS_JAPANESE_VERSION())
        {
            SET_TEXT_WRAP( (uParam2^), 1.00000000 );
        }
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
    if (g_U950)
    {
        (uParam2^) += 0.04600000;
    }
    else
    {
        (uParam2^) += 0.06000000;
    }
    return;
}

void sub_21093()
{
    SET_TEXT_COLOUR( 0, 0, 0, l_U446 / 2 );
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 0 );
    SET_TEXT_SCALE( 0.30000000, 0.40000000 );
    return;
}

void sub_22431()
{
    if (g_U864._fU0 > 2)
    {
        if (g_U950)
        {
            DRAW_SPRITE( l_U480[8], 0.12000000, 0.50000000, 0.01000000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
            DRAW_SPRITE( l_U480[8], 0.88000000, 0.50000000, -0.01000000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
        }
    }
    return;
}
