void main()
{
    int iVar2;

    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U481 = 0;
    l_U482 = 35;
    l_U483 = 0;
    l_U484 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    l_U485 = {g_U9387[l_U482]._fU0};
    ADD_BLIP_FOR_CONTACT( l_U485._fU0, l_U485._fU4, l_U485._fU8, ref l_U488 );
    CHANGE_BLIP_DISPLAY( l_U488, 2 );
    CHANGE_BLIP_SPRITE( l_U488, g_U26415[22] );
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    l_U489 = iVar2 + 10000;
    FLASH_BLIP( l_U488, 1 );
    CHANGE_BLIP_PRIORITY( l_U488, l_U6 );
    l_U481 = 0;
    while (true)
    {
        WAIT( 0 );
        sub_262();
        if (sub_382())
        {
            sub_1592();
        }
        sub_15104();
    }
    return;
}

void sub_262()
{
    int iVar2;

    if (l_U489 == 0)
    {
        return;
    }
    if (NOT (DOES_BLIP_EXIST( l_U488 )))
    {
        l_U489 = 0;
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U489 < iVar2)
    {
        FLASH_BLIP( l_U488, 0 );
        CHANGE_BLIP_PRIORITY( l_U488, l_U5 );
        l_U489 = 0;
        return;
    }
    return;
}

int sub_382()
{
    float fVar2;
    boolean bVar3;

    if (g_U9893._fU28)
    {
        if (g_U9893._fU40 == 20)
        {
            sub_419();
        }
    }
    if (IS_CHAR_DEAD( sub_455() ))
    {
        return 0;
    }
    if (IS_PLAYER_PLAYING( sub_512() ))
    {
        if (NOT g_U10978)
        {
            fVar2 = l_U485._fU8 + 2.00000000;
            LOCATE_CHAR_ON_FOOT_3D( sub_455(), l_U485._fU0, l_U485._fU4, fVar2, 1.60000000, 1.60000000, 2.00000000, 1 );
        }
    }
    bVar3 = LOCATE_CHAR_ON_FOOT_3D( sub_455(), l_U485._fU0, l_U485._fU4, l_U485._fU8, 1.20000000, 1.20000000, 2.00000000, 0 );
    if (NOT bVar3)
    {
        if (g_U9387[l_U482]._fU20)
        {
            if (LOCATE_CHAR_IN_CAR_3D( sub_455(), g_U9387[l_U482]._fU0._fU0, g_U9387[l_U482]._fU0._fU4, g_U9387[l_U482]._fU0._fU8, 2.50000000, 2.50000000, 2.00000000, 0 ))
            {
                bVar3 = true;
            }
        }
    }
    if (l_U481)
    {
        if (NOT bVar3)
        {
            l_U481 = 0;
        }
        return 0;
    }
    if (NOT bVar3)
    {
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_512() )))
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    if (g_U10980)
    {
        return 0;
    }
    if ((sub_878()) || (sub_928()))
    {
        return 0;
    }
    if (NOT g_U26755)
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_512() )))
    {
        return 0;
    }
    if (NOT (sub_1011( 1, 1 )))
    {
        return 0;
    }
    if (NOT sub_1306())
    {
        return 0;
    }
    l_U481 = 1;
    if (NOT sub_1368())
    {
        PRINT_HELP( "JIMSUIT" );
        return 0;
    }
    return 1;
}

void sub_419()
{
    REMOVE_BLIP( l_U488 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_455()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_512()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_878()
{
    if ((g_U91._fU0 == 1007) || (g_U91._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_928()
{
    if (g_U555 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_1011(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_455() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_455(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 < 0.95000000) || (fVar6 > 1.01100000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_455() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_455(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_455()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_455() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_455() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_512() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_512() )))
    {
        return 0;
    }
    return 1;
}

int sub_1306()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

int sub_1368()
{
    if (NOT sub_1377())
    {
        return 0;
    }
    if (NOT sub_1481())
    {
        return 0;
    }
    return 1;
}

int sub_1377()
{
    int iVar2;
    int iVar3;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_455(), 1 );
    if (((NOT (iVar2 == 5)) AND (NOT (iVar2 == 11))) AND (NOT (iVar2 == 12)))
    {
        return 0;
    }
    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_455(), 2 );
    if ((NOT (iVar3 == 2)) AND (NOT (iVar3 == 4)))
    {
        return 0;
    }
    return 1;
}

int sub_1481()
{
    int iVar2;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_455(), 5 );
    if ((iVar2 == 2) || (iVar2 == 5))
    {
        return 1;
    }
    return 0;
}

void sub_1592()
{
    unknown uVar2;

    sub_1601();
    if (IS_PLAYER_PLAYING( sub_512() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_455() ))
        {
            SET_PLAYER_CONTROL( sub_512(), 0 );
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_455() )))
    {
        SET_CHAR_PROOFS( sub_455(), 1, 1, 1, 1, 1 );
    }
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    sub_1799();
    if (IS_PLAYER_PLAYING( sub_512() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_455() ))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                CLEAR_AREA( -1414.39000000, 1470.75400000, 24.83750000, 3.00000000, 0 );
                SET_CAR_HEADING( uVar2, 180.17210000 );
                SET_CAR_COORDINATES( uVar2, -1414.39000000, 1470.75400000, 24.83750000 );
            }
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_455() );
        SET_PLAYER_CONTROL( sub_512(), 0 );
        CLEAR_WANTED_LEVEL( sub_512() );
    }
    if (NOT (IS_CHAR_DEAD( sub_455() )))
    {
        if (IS_CHAR_ON_FIRE( sub_455() ))
        {
            EXTINGUISH_CHAR_FIRE( sub_455() );
        }
        SET_CHAR_PROOFS( sub_455(), 0, 0, 0, 0, 0 );
    }
    sub_2062();
    sub_2172();
    sub_419();
    return;
}

void sub_1601()
{
    return sub_1612( 1, 1 );
}

int sub_1612(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((uParam1) AND (g_U555 != 9))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

void sub_1799()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_2062()
{
    if (g_U64542._fU4 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( g_U64542._fU4 )))
    {
        return;
    }
    DELETE_CHAR( ref g_U64542._fU4 );
    g_U64542._fU0 = 57;
    g_U64542._fU4 = nil;
    g_U64542._fU8 = 28;
    return;
}

void sub_2172()
{
    sub_2181();
    return;
}

void sub_2181()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_2199();
    sub_2258( iVar2, iVar3, iVar4 );
    return;
}

void sub_2199()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_2258(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 20;
    sub_2291( iVar5, uParam0, uParam1, uParam2, "Contact_24" );
    return;
}

void sub_2291(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_2387( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_2387( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_2387( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_2387( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_2387( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_2387( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_2964( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((NOT g_U10981[iParam0]._fU144._fU12) AND (g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_3382( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_3382( 0, 4 );
            }
        }
    }
    if (NOT (sub_3471( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_512(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_512() );
    }
    sub_12703();
    bVar27 = true;
    uVar28 = sub_2964( iParam0, iVar7 );
    uVar29 = sub_13345( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 5) || (iVar30 == 6))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_13876( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_14306();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_14391( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_14448( iParam0 );
                sub_14583( 0 );
                sub_14664( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_14769();
        }
    }
    if (bParam2)
    {
        sub_14306();
        sub_14857();
        sub_14583( 0 );
    }
    if (bParam3)
    {
        sub_14306();
        sub_14897();
        sub_14583( 0 );
        sub_14664( uVar29, 0 );
    }
    sub_14948();
    return;
}

void sub_2387(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_2964(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_3038( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_3038(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_3382(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_3471(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_3679( uParam1 );
        break;
        case 1:
        bVar8 = sub_5757( uParam1 );
        break;
        case 2:
        bVar8 = sub_5983( uParam1 );
        break;
        case 3:
        bVar8 = sub_6133( uParam1 );
        break;
        case 4:
        bVar8 = sub_6411( uParam1 );
        break;
        case 5:
        bVar8 = sub_6714( uParam1 );
        break;
        case 6:
        bVar8 = sub_6913( uParam1 );
        break;
        case 7:
        bVar8 = sub_7139( uParam1 );
        break;
        case 8:
        bVar8 = sub_7374( uParam1 );
        break;
        case 9:
        bVar8 = sub_7749( uParam1 );
        break;
        case 10:
        bVar8 = sub_7996( uParam1 );
        break;
        case 11:
        bVar8 = sub_8135( uParam1 );
        break;
        case 12:
        bVar8 = sub_8434( uParam1 );
        break;
        case 13:
        bVar8 = sub_8662( uParam1 );
        break;
        case 14:
        bVar8 = sub_8949( uParam1 );
        break;
        case 15:
        bVar8 = sub_9231( uParam1 );
        break;
        case 16:
        bVar8 = sub_9513( uParam1 );
        break;
        case 17:
        bVar8 = sub_9714( uParam1 );
        break;
        case 18:
        bVar8 = sub_9787( uParam1 );
        break;
        case 19:
        bVar8 = sub_10001( uParam1 );
        break;
        case 20:
        bVar8 = sub_10254( uParam1 );
        break;
        case 21:
        bVar8 = sub_10501( uParam1 );
        break;
        case 22:
        bVar8 = sub_10702( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_5362( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_2964( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_11025( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_3679(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_3958( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_3958( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_3958( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_3958( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_3958( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_3958( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_3958( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_3958( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_3958( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_3958( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_3958( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_3958( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_3958( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_3958( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_3958( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_3958( iVar3, 0, sub_5240(), sub_5506(), 0, 0 );
        break;
        default:
        sub_5665( "Friend 1", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Friend 1", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_3958(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_3969( uParam1 );
    sub_4143( uParam0, 0, uParam2 );
    sub_4143( uParam0, 1, uParam3 );
    sub_4143( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_2199();
    return;
}

void sub_3969(unknown uParam0)
{
    ADD_SCORE( sub_512(), uParam0 );
    sub_3994( uParam0 );
    return;
}

void sub_3994(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_3038( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_4143(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_4300( uParam0 );
    }
    return;
}

void sub_4300(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if (((((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

int sub_5240()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_5362( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_5362(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_5506()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_5362( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_5665(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_5757(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3958( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3958( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_5665( "Contact 2", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Contact 2", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5983(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_3958( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_5665( "Girl 3", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Girl 3", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6133(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_3958( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_3958( iVar3, 0, sub_5240(), sub_5506(), 0, 0 );
        break;
        default:
        sub_5665( "Friend 4", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Friend 4", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6411(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3958( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3958( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_3958( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_3958( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_3958( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_5665( "Contact 5", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Contact 5", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6714(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3958( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_5665( "Contact 7", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Contact 7", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6913(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3958( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3958( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_5665( "Contact 7b", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Contact 7b", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7139(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_3958( iVar3, 0, sub_5240(), sub_5506(), 0, 0 );
        break;
        default:
        sub_5665( "Friend 8", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Friend 8", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7374(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_3958( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_3958( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_3958( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_3958( iVar3, 0, sub_5240(), sub_5506(), 0, 0 );
        break;
        default:
        sub_5665( "Friend 9", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Friend 9", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7749(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_3958( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_3958( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_5665( "Contact 10", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_5665( "Contact 10", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7996(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_5665( "Girl 11", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Girl 11", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8135(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3958( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_3958( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_3958( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_3958( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_3958( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_5665( "Contact 12", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Contact 12", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8434(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3958( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3958( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_5665( "Contact 13", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Contact 13", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8662(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_3958( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_3958( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_3958( iVar3, 0, sub_5240(), sub_5506(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_5665( "Friend 15", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Friend 15", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8949(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3958( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3958( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_3958( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_3958( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_5665( "Contact 16", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Contact 16", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9231(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_3958( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_3958( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_3958( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_5665( "Contact 18", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Contact 18", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9513(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3958( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_5665( "Contact 19", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Contact 19", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9714(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_5665( "Girl 20", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9787(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3958( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_5665( "Contact 21", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Contact 21", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10001(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3958( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3958( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_3958( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_5665( "Contact 22", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Contact 22", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10254(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_3958( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3958( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3958( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_3958( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_5665( "Contact 24", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Contact 24", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10501(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3958( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3958( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_5665( "Contact 25", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5665( "Contact 25", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10702(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_3958( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_5665( "Girl 26", 1 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_5665( "Girl 26", 0 );
        sub_3958( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_11025(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_11073( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_11804( iParam1 );
    }
    return;
}

int sub_11073(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_11213( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_11213(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_11395( 0 );
    return;
}

void sub_11395(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_11650();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_11650()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_11804(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_12137( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_12137( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_12137( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_12137( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_12137( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_12137( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_12137( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_12137( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_12137( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_12137( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_12137( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_12137( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_12137( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_12137( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_12137( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_12137( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_12137( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_12137( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_12137( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_12137(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_12703()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_12741( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_12741( 1, g_U569[I] )) != 0)
            {
                sub_13027( I );
            }
        }
    }
    if (NOT sub_13193())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_12741(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_13027(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_13112( g_U569 - 1 );
    return;
}

void sub_13112(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_13193()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_12741( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_13345(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_3038( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_13876(unknown uParam0, unknown uParam1)
{
    sub_13895( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_13895(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
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

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_14306()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

int sub_14391(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_14448(unknown uParam0)
{
    sub_14457();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_14457()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_14583(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_14664(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_14769()
{
    sub_14778();
    return;
}

void sub_14778()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_14857()
{
    sub_14778();
    return;
}

void sub_14897()
{
    sub_14778();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_14948()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_14970();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_14970()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_15104()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (l_U483)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U484 == 0)
    {
        l_U484 = iVar2 + 15000;
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_512() )))
    {
        l_U484 = iVar2 + 15000;
        return;
    }
    if (iVar2 < l_U484)
    {
        return;
    }
    if ((((((IS_THREAD_ACTIVE( g_U812 )) || (IS_WANTED_LEVEL_GREATER( sub_512(), 0 ))) || (sub_878())) || (sub_15243())) || (sub_15443( 15000 ))) || (sub_928()))
    {
        l_U484 = 0;
        return;
    }
    if ((NOT (sub_15809( 19, 30000 ))) || (sub_15874( 19 )))
    {
        return;
    }
    iVar3 = 19;
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    sub_15963( iVar3, 1, 16383, 16383, ref uVar4 );
    sub_16307( ref uVar4, 1 );
    sub_16335( ref uVar4, 0 );
    sub_16362( ref uVar4 );
    sub_14948();
    sub_14664( 19, 0 );
    l_U483 = 1;
    return;
}

int sub_15243()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U15436[I]._fU8)
        {
            return 1;
        }
    }
    for ( I = 0; I < 23; I++ )
    {
        if (g_U22274[I]._fU68)
        {
            return 1;
        }
        if (g_U22274[I]._fU500._fU16)
        {
            return 1;
        }
    }
    for ( I = 0; I < 13; I++ )
    {
        if (g_U15807[I]._fU0)
        {
            if (g_U15807[I]._fU12)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_15443(int iParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_15463())
    {
        return 1;
    }
    if (sub_15498())
    {
        return 1;
    }
    if (NOT (iParam0 == 0))
    {
        if (NOT (sub_15569( iParam0 )))
        {
            iParam0 = 0;
        }
    }
    if (NOT (iParam0 == 0))
    {
        if (sub_15684( iParam0 ))
        {
            return 1;
        }
        return 0;
    }
    if (g_U63988._fU4 > iVar3)
    {
        return 1;
    }
    return 0;
}

void sub_15463()
{
    return g_U91._fU540;
}

int sub_15498()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (g_U63988._fU0 > iVar2)
    {
        return 1;
    }
    return 0;
}

int sub_15569(int iParam0)
{
    int iVar3;

    iVar3 = sub_14970();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_15599();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_15599()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_15684(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = iVar3 - g_U63988._fU8;
    if (iVar4 < iParam0)
    {
        return 1;
    }
    return 0;
}

boolean sub_15809(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (iParam0 < 57))
    {
        return 1;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    iVar5 = g_U26671[iParam0] + iParam1;
    return iVar5 < iVar4;
}

int sub_15874(int iParam0)
{
    if (iParam0 == 57)
    {
        return 0;
    }
    if (NOT (g_U64542._fU0 == iParam0))
    {
        return 0;
    }
    return 1;
}

void sub_15963(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_15985( uParam0, 0, iParam4 + 0 );
    sub_15985( uParam1, 1, iParam4 + 0 );
    sub_15985( uParam2, 2, iParam4 + 0 );
    sub_15985( uParam3, 3, iParam4 + 0 );
    sub_15985( 0, 4, iParam4 + 0 );
    sub_15985( 1, 5, iParam4 + 0 );
    sub_15985( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_15985(unknown uParam0, unknown uParam1, int iParam2)
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
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_16307(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_16335(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_16362(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (g_U91._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_16432())
        {
            sub_13027( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_16559( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_13027( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_12741( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_12741( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_16432()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_12741( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_13027( I );
            return 1;
        }
    }
    return 0;
}

int sub_16559(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_16624( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

int sub_16624(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_12741( 0, uParam0 );
        if (iVar14 == (sub_12741( 0, uParam6 )))
        {
            iVar15 = sub_12741( 3, uParam0 );
            if (iVar15 == (sub_12741( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}