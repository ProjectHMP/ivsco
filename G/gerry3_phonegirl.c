void main()
{
    boolean bVar2;
    int iVar3;
    boolean bVar4;
    int iVar5;

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
    l_U485 = "6625550147";
    l_U496 = 0;
    l_U497 = 0;
    l_U498 = 0;
    l_U499 = 0;
    l_U500 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    l_U483 = 13;
    l_U484 = 27;
    l_U486._fU0 = 8;
    l_U486._fU4 = 0;
    l_U488._fU0 = 21;
    l_U488._fU4 = 0;
    g_U15946[l_U484]._fU8[0]._fU0[3] = 0;
    sub_202( l_U484 );
    sub_341( l_U484 );
    l_U499 = 1;
    bVar2 = true;
    while (bVar2)
    {
        bVar2 = false;
        l_U500 = 0;
        l_U494 = 0;
        l_U495 = 0;
        sub_450( ref l_U490, 8, 0, 0 );
        iVar3 = 0;
        GET_GAME_TIMER( ref iVar3 );
        l_U497 = iVar3 + 8000;
        bVar4 = true;
        while (bVar4)
        {
            if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
            {
                sub_1095();
            }
            WAIT( 0 );
            bVar4 = sub_1218();
            if ((bVar4) AND (NOT l_U498))
            {
                GET_GAME_TIMER( ref iVar3 );
                if (iVar3 > l_U497)
                {
                    PRINT_NOW( "GHELP_02", 8000, 1 );
                    l_U498 = 1;
                }
            }
        }
        if ((sub_21221()) || (l_U500))
        {
            iVar5 = 35;
            sub_22286( iVar5, 34, 3, 15000 );
            bVar2 = true;
            while (sub_21221())
            {
                WAIT( 0 );
            }
        }
    }
    sub_1464();
    sub_2339( "GERRY5 PHONE GIRL (help script): should never reach ENDSCRIPT" );
    return;
}

void sub_202(unknown uParam0)
{
    char[16] cVar3;

    if (NOT g_U15946[uParam0]._fU132._fU0)
    {
        if (g_U91._fU0 == 1012)
        {
            g_U91._fU92 = 1;
        }
        g_U15946[uParam0]._fU132._fU0 = 1;
        StrCopy( ref cVar3, "CONT_", 16 );
        ConcatString(ref cVar3, ref g_U15946[uParam0]._fU132._fU8, 16);
        SET_PHONE_HUD_ITEM( 2, ref cVar3, -1 );
        g_U91._fU520 = 0;
    }
    return;
}

void sub_341(unknown uParam0)
{
    if (g_U15946[uParam0]._fU132._fU0)
    {
        g_U91._fU72 = uParam0;
    }
    else
    {
        g_U91._fU72 = -1;
    }
    return;
}

void sub_450(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_503( iParam0, uParam1, uParam2 );
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
        sub_635( iParam0 + 0 );
    }
    return;
}

void sub_503(int iParam0, int iParam1, int iParam2)
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
        sub_635( iParam0 + 0 );
    }
    return;
}

void sub_635(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_666( iParam0->_fU4 )))
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

int sub_666(unknown uParam0)
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

void sub_1095()
{
    l_U482 = 0;
    l_U481 = CREATE_WIDGET_GROUP( "Gerry5 Phone Daughter phonecall" );
    ADD_WIDGET_TOGGLE( "Quit? (calls Gerry_Pass)", ref l_U482 );
    END_WIDGET_GROUP();
    return;
}

int sub_1218()
{
    if (g_U9893._fU28)
    {
        if (g_U9893._fU40 == 15)
        {
            sub_1255();
        }
    }
    sub_1445();
    switch (l_U494)
    {
        case 0:
        sub_14475();
        break;
        case 1:
        sub_21550();
        break;
        case 2: return 0;
    }
    if (l_U499)
    {
        if (g_U10978)
        {
            sub_1269( l_U484 );
            l_U499 = 0;
        }
    }
    else if (NOT g_U10978)
    {
        sub_341( l_U484 );
        l_U499 = 1;
    }
    return 1;
}

void sub_1255()
{
    sub_1269( l_U484 );
    sub_1318( l_U484 );
    l_U499 = 0;
    DELETE_WIDGET_GROUP( l_U481 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1269(int iParam0)
{
    if (g_U91._fU72 == iParam0)
    {
        g_U91._fU72 = -1;
    }
    return;
}

void sub_1318(unknown uParam0)
{
    if (g_U15946[uParam0]._fU132._fU0)
    {
        switch (g_U91._fU0)
        {
            case 1013:
            g_U91._fU92 = 1;
            break;
            default:
        }
        g_U15946[uParam0]._fU132._fU0 = 0;
    }
    return;
}

void sub_1445()
{
    if (l_U482)
    {
        sub_1464();
    }
    return;
}

void sub_1464()
{
    sub_1473();
    sub_1255();
    return;
}

void sub_1473()
{
    sub_1482();
    return;
}

void sub_1482()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_1500();
    sub_1559( iVar2, iVar3, iVar4 );
    return;
}

void sub_1500()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_1559(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 15;
    sub_1592( iVar5, uParam0, uParam1, uParam2, "Contact_18" );
    return;
}

void sub_1592(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_1688( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_1688( ref cVar9 );
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
            sub_1688( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_1688( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_1688( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_1688( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_2265( iParam0, iVar7 );;;
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
                sub_2683( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_2683( 0, 4 );
            }
        }
    }
    if (NOT (sub_2772( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3279(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3279() );
    }
    sub_12030();
    bVar27 = true;
    uVar28 = sub_2265( iParam0, iVar7 );
    uVar29 = sub_12672( iParam0 );
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
                sub_13203( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_13633();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_13718( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_13775( iParam0 );
                sub_13910( 0 );
                sub_13991( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_14096();
        }
    }
    if (bParam2)
    {
        sub_13633();
        sub_14184();
        sub_13910( 0 );
    }
    if (bParam3)
    {
        sub_13633();
        sub_14224();
        sub_13910( 0 );
        sub_13991( uVar29, 0 );
    }
    sub_14275();
    return;
}

void sub_1688(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_2265(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_2339( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_2339(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2683(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_2772(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_2980( uParam1 );
        break;
        case 1:
        bVar8 = sub_5084( uParam1 );
        break;
        case 2:
        bVar8 = sub_5310( uParam1 );
        break;
        case 3:
        bVar8 = sub_5460( uParam1 );
        break;
        case 4:
        bVar8 = sub_5738( uParam1 );
        break;
        case 5:
        bVar8 = sub_6041( uParam1 );
        break;
        case 6:
        bVar8 = sub_6240( uParam1 );
        break;
        case 7:
        bVar8 = sub_6466( uParam1 );
        break;
        case 8:
        bVar8 = sub_6701( uParam1 );
        break;
        case 9:
        bVar8 = sub_7076( uParam1 );
        break;
        case 10:
        bVar8 = sub_7323( uParam1 );
        break;
        case 11:
        bVar8 = sub_7462( uParam1 );
        break;
        case 12:
        bVar8 = sub_7761( uParam1 );
        break;
        case 13:
        bVar8 = sub_7989( uParam1 );
        break;
        case 14:
        bVar8 = sub_8276( uParam1 );
        break;
        case 15:
        bVar8 = sub_8558( uParam1 );
        break;
        case 16:
        bVar8 = sub_8840( uParam1 );
        break;
        case 17:
        bVar8 = sub_9041( uParam1 );
        break;
        case 18:
        bVar8 = sub_9114( uParam1 );
        break;
        case 19:
        bVar8 = sub_9328( uParam1 );
        break;
        case 20:
        bVar8 = sub_9581( uParam1 );
        break;
        case 21:
        bVar8 = sub_9828( uParam1 );
        break;
        case 22:
        bVar8 = sub_10029( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_4689( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_2265( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_10352( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_2980(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_3259( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_3259( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_3259( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_3259( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_3259( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_3259( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_3259( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_3259( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_3259( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_3259( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_3259( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_3259( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_3259( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_3259( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_3259( iVar3, 0, 3, 1, 0, 0 );
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
        sub_3259( iVar3, 0, sub_4567(), sub_4833(), 0, 0 );
        break;
        default:
        sub_4992( "Friend 1", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Friend 1", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_3259(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_3270( uParam1 );
    sub_3470( uParam0, 0, uParam2 );
    sub_3470( uParam0, 1, uParam3 );
    sub_3470( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_1500();
    return;
}

void sub_3270(unknown uParam0)
{
    ADD_SCORE( sub_3279(), uParam0 );
    sub_3321( uParam0 );
    return;
}

void sub_3279()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3321(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2339( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_3470(unknown uParam0, int iParam1, int iParam2)
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
        sub_3627( uParam0 );
    }
    return;
}

void sub_3627(unknown uParam0)
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

int sub_4567()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_4689( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_4689(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_4833()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_4689( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_4992(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_5084(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3259( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3259( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_4992( "Contact 2", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Contact 2", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5310(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_3259( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_4992( "Girl 3", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Girl 3", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5460(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_3259( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_3259( iVar3, 0, sub_4567(), sub_4833(), 0, 0 );
        break;
        default:
        sub_4992( "Friend 4", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Friend 4", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5738(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3259( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3259( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_3259( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_3259( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_3259( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_4992( "Contact 5", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Contact 5", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6041(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3259( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_4992( "Contact 7", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Contact 7", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6240(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3259( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3259( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_4992( "Contact 7b", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Contact 7b", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6466(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_3259( iVar3, 0, sub_4567(), sub_4833(), 0, 0 );
        break;
        default:
        sub_4992( "Friend 8", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Friend 8", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6701(unknown uParam0)
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
        sub_3259( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_3259( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_3259( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_3259( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_3259( iVar3, 0, sub_4567(), sub_4833(), 0, 0 );
        break;
        default:
        sub_4992( "Friend 9", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Friend 9", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7076(unknown uParam0)
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
        sub_3259( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_3259( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_3259( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_4992( "Contact 10", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_4992( "Contact 10", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7323(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_4992( "Girl 11", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Girl 11", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7462(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3259( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_3259( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_3259( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_3259( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_3259( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_4992( "Contact 12", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Contact 12", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7761(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3259( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3259( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_4992( "Contact 13", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Contact 13", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7989(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_3259( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_3259( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_3259( iVar3, 0, sub_4567(), sub_4833(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_4992( "Friend 15", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Friend 15", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8276(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3259( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3259( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_3259( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_3259( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_4992( "Contact 16", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Contact 16", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8558(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_3259( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_3259( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_3259( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_4992( "Contact 18", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Contact 18", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8840(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3259( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_4992( "Contact 19", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Contact 19", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9041(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_4992( "Girl 20", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9114(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3259( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_4992( "Contact 21", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Contact 21", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9328(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3259( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3259( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_3259( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_4992( "Contact 22", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Contact 22", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9581(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_3259( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3259( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3259( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_3259( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_4992( "Contact 24", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Contact 24", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9828(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3259( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3259( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3259( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_4992( "Contact 25", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4992( "Contact 25", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10029(unknown uParam0)
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
        sub_3259( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_4992( "Girl 26", 1 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_4992( "Girl 26", 0 );
        sub_3259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_10352(int iParam0, int iParam1)
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
    if (sub_10400( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_11131( iParam1 );
    }
    return;
}

int sub_10400(int iParam0, int iParam1)
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
            sub_10540( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_10540(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_10722( 0 );
    return;
}

void sub_10722(boolean bParam0)
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
        sub_10977();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_10977()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_11131(int iParam0)
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
        sub_11464( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_11464( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_11464( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_11464( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_11464( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_11464( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_11464( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_11464( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_11464( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_11464( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_11464( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_11464( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_11464( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_11464( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_11464( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_11464( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_11464( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_11464( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_11464( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_11464(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_12030()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_12068( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_12068( 1, g_U569[I] )) != 0)
            {
                sub_12354( I );
            }
        }
    }
    if (NOT sub_12520())
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

int sub_12068(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_12354(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_12439( g_U569 - 1 );
    return;
}

void sub_12439(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_12520()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_12068( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_12672(unknown uParam0)
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
    sub_2339( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_13203(unknown uParam0, unknown uParam1)
{
    sub_13222( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_13222(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_13633()
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

int sub_13718(int iParam0, int iParam1)
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

void sub_13775(unknown uParam0)
{
    sub_13784();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_13784()
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

void sub_13910(unknown uParam0)
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

void sub_13991(int iParam0, boolean bParam1)
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

void sub_14096()
{
    sub_14105();
    return;
}

void sub_14105()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_14184()
{
    sub_14105();
    return;
}

void sub_14224()
{
    sub_14105();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_14275()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_14297();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_14297()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_14475()
{
    boolean bVar2;
    int iVar3;

    if (l_U495 == 0)
    {
        l_U496 = 0;
        l_U495++;
    }
    bVar2 = false;
    if (l_U495 == 1)
    {
        if (sub_14535( l_U484, 1 ))
        {
            bVar2 = true;
        }
        if (NOT bVar2)
        {
            if (sub_14870( l_U485 ))
            {
                bVar2 = true;
                g_U91._fU60 = l_U484;
            }
        }
        if (bVar2)
        {
            if (sub_15011( l_U486, l_U488 ))
            {
                if (NOT sub_15623())
                {
                    sub_16047( "MF6_WOFF", "MF14AUD", 0 );
                    sub_20092( "MF6_WOFF", "MF14AUD" );
                    l_U496 = 0;
                }
                else
                {
                    sub_16047( "GM3_CIN", "GM3AUD", 1 );
                    sub_20163( "Gracie" );
                    l_U496 = 1;
                }
            }
            else
            {
                sub_16047( "GM3_COUT", "GM3AUD", 0 );
                l_U496 = 0;
            }
            l_U495++;
        }
        else if (sub_20803( l_U490 ))
        {
            l_U495 = 0;
            l_U494 = 1;
            return;
        }
    }
    GET_GAME_TIMER( ref iVar3 );
    if (l_U495 == 2)
    {
        if (l_U496)
        {
            g_U26757 = iVar3 + 2000;
        }
        switch (sub_21109())
        {
            case 6:
            l_U495++;
            break;
            case 2:
            l_U495 = 0;
            break;
        }
        if (sub_21221())
        {
            sub_21266();
            l_U500 = 1;
            l_U495 = 99;
        }
    }
    if (l_U495 == 3)
    {
        if (sub_21411())
        {
            l_U495 = 0;
        }
        else
        {
            l_U495++;
        }
    }
    if (l_U495 == 4)
    {
        if (l_U496)
        {
            g_U26757 = iVar3 + 5000;
            l_U495 = 99;
        }
        else
        {
            l_U495 = 0;
        }
    }
    if (l_U495 == 99)
    {
        l_U494 = 2;
    }
    return;
}

int sub_14535(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_14618( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_14618( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((g_U91._fU0 == 1005) AND (g_U91._fU60 == iParam0))
    {
        if (bParam1)
        {
            if ((g_U91._fU508 >= 4) AND (NOT g_U91._fU372))
            {
                return 1;
            }
        }
        else if (NOT g_U91._fU368)
        {
            return 1;
        }
    }
    return 0;
}

void sub_14618(unknown uParam0)
{
    return;
}

int sub_14870(unknown uParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        return 0;
    }
    if ((g_U91._fU0 == 1005) AND (g_U91._fU508 >= 4))
    {
        if (g_U91._fU60 == 56)
        {
            return COMPARE_STRING( ref g_U91._fU128, uParam0 );
        }
    }
    return 0;
}

int sub_15011(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    boolean bVar8;

    if ((uParam0._fU0 < 0) || (uParam0._fU0 >= 24))
    {
        sub_2339( "KM_Is_Now_Time_Between_Start_End_Times: Start Hours Error" );
        return 0;
    }
    if ((uParam0._fU4 < 0) || (uParam0._fU4 >= 60))
    {
        sub_2339( "KM_Is_Now_Time_Between_Start_End_Times: Start Minutes Error" );
        return 0;
    }
    if ((uParam2._fU0 < 0) || (uParam2._fU0 >= 24))
    {
        sub_2339( "KM_Is_Now_Time_Between_Start_End_Times: End Hours Error" );
        return 0;
    }
    if ((uParam2._fU4 < 0) || (uParam2._fU4 >= 60))
    {
        sub_2339( "KM_Is_Now_Time_Between_Start_End_Times: End Minutes Error" );
        return 0;
    }
    GET_TIME_OF_DAY( ref uVar6._fU0, ref uVar6._fU4 );
    bVar8 = sub_15391( uParam2, uParam0 );
    if (NOT bVar8)
    {
        if (sub_15391( uVar6, uParam0 ))
        {
            return 0;
        }
        if (sub_15391( uParam2, uVar6 ))
        {
            return 0;
        }
        return 1;
    }
    if (sub_15515( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_15391( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_15391( uVar6, uParam2 ))
    {
        return 1;
    }
    return 0;
}

boolean sub_15391(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (uParam0._fU0 > uParam2._fU0)
    {
        return 0;
    }
    if (uParam0._fU0 < uParam2._fU0)
    {
        return 1;
    }
    return uParam0._fU4 < uParam2._fU4;
}

boolean sub_15515(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (uParam0._fU0 == uParam2._fU0))
    {
        return 0;
    }
    return uParam0._fU4 == uParam2._fU4;
}

int sub_15623()
{
    if (NOT (IS_PLAYER_PLAYING( sub_3279() )))
    {
        return 0;
    }
    if (((((((g_U10978) || (IS_THREAD_ACTIVE( g_U812 ))) || (IS_WANTED_LEVEL_GREATER( sub_3279(), 0 ))) || (sub_15686())) || (g_U33837)) || (sub_15891())) || (g_U9371))
    {
        return 0;
    }
    if (sub_15946( l_U484 ))
    {
        return 0;
    }
    return 1;
}

int sub_15686()
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

int sub_15891()
{
    if (g_U555 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_15946(int iParam0)
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

int sub_16047(unknown uParam0, unknown uParam1, boolean bParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam0, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    uVar23 = g_U91._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_16155( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U91._fU368) == 1)
        {
            StrCopy( ref g_U91._fU224[0], uParam1, 16 );
            StrCopy( ref g_U91._fU224[1], uParam0, 16 );
            sub_18078( uVar23, ref g_U91._fU176 );
            g_U91._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_16155(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_14618( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_14618( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3279() )))
    {
        sub_14618( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_16374() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_16374() ))))
    {
        sub_14618( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_14618( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_16706()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((g_U91._fU372) || (NOT bParam8))
            {
                sub_14618( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 5) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 4))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT sub_16706()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_18078( uParam0, ref g_U91._fU176 );
    sub_19459( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_19699( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

void sub_16374()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_16706()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_16763())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_16763()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3279() )))
    {
        sub_14618( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_14618( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_14618( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_14618( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3279() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_16374() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_16374(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_14618( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_16374() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_14618( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_14618( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3279() )))
    {
        sub_14618( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_18078(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_19459(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_19699(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_20092(unknown uParam0, unknown uParam1)
{
    if (COMPARE_STRING( uParam1, "MF8AUD" ))
    {
        if (COMPARE_STRING( uParam0, "MF4_FM8" ))
        {
            sub_20163( "WOMANS_VOICE" );
            return;
        }
    }
    if (COMPARE_STRING( uParam1, "MF2AUD" ))
    {
        if (COMPARE_STRING( uParam0, "MF2_CCIA4" ))
        {
            sub_20163( "WOMANS_VOICE" );
            return;
        }
    }
    if (COMPARE_STRING( uParam1, "MF14AUD" ))
    {
        if (COMPARE_STRING( uParam0, "MF6_GLSAP" ))
        {
            sub_20163( "RECEPTIONIST_F" );
            return;
        }
    }
    if (NOT (COMPARE_STRING( uParam1, "MF14AUD" )))
    {
        return;
    }
    if ((((COMPARE_STRING( uParam0, "MF6_BMSG" )) || (COMPARE_STRING( uParam0, "MF6_BNR" ))) || (COMPARE_STRING( uParam0, "MF6_BOFF" ))) || (COMPARE_STRING( uParam0, "MF6_BUN" )))
    {
        sub_20163( "BADGER" );
        return;
    }
    if ((((COMPARE_STRING( uParam0, "MF6_TMSG" )) || (COMPARE_STRING( uParam0, "MF6_TNR" ))) || (COMPARE_STRING( uParam0, "MF6_TOFF" ))) || (COMPARE_STRING( uParam0, "MF6_TUN" )))
    {
        sub_20163( "TINKLE" );
        return;
    }
    if ((((COMPARE_STRING( uParam0, "MF6_WMSG" )) || (COMPARE_STRING( uParam0, "MF6_WNR" ))) || (COMPARE_STRING( uParam0, "MF6_WOFF" ))) || (COMPARE_STRING( uParam0, "MF6_WUN" )))
    {
        sub_20163( "WHIZ" );
        return;
    }
    return;
}

void sub_20163(unknown uParam0)
{
    StrCopy( ref g_U91._fU176, uParam0, 32 );
    return;
}

int sub_20803(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_20972( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_20972(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

int sub_21109()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

int sub_21221()
{
    if ((g_U10978) || (g_U9893._fU12))
    {
        return 1;
    }
    return 0;
}

void sub_21266()
{
    if ((g_U555 == 1) || (g_U8394 == 4))
    {
        if (g_U91._fU60 != -1)
        {
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U91._fU376 = 0;
        g_U91._fU100 = 1;
    }
    return;
}

void sub_21411()
{
    return g_U91._fU504;
}

void sub_21550()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (l_U495 == 0)
    {
        l_U495++;
    }
    if (g_U10978)
    {
        l_U495 = 0;
        l_U494 = 0;
        sub_450( ref l_U490, 0, 15, 0 );
        return;
    }
    uVar2._fU0 = 8;
    uVar2._fU4 = 0;
    uVar4._fU0 = 20;
    uVar4._fU4 = 30;
    if (NOT (sub_15011( uVar2, uVar4 )))
    {
        l_U495 = 0;
        l_U494 = 0;
        sub_450( ref l_U490, 0, 15, 0 );
        return;
    }
    if (l_U495 == 1)
    {
        if (sub_21728( l_U483, "MF6_PGRACE", "MF14AUD", 10000, 0 ))
        {
            l_U495++;
            return;
        }
        else
        {
            l_U495 = 0;
            l_U494 = 0;
            sub_450( ref l_U490, 0, 15, 0 );
            return;
        }
    }
    if (l_U495 == 2)
    {
        if (NOT sub_21865())
        {
            l_U495++;
        }
    }
    if (l_U495 == 3)
    {
        switch (sub_21109())
        {
            case 1:
            case 2:
            l_U495 = 0;
            l_U494 = 0;
            sub_450( ref l_U490, 0, 15, 0 );
            return;
        }
        l_U495 = 99;
    }
    if (l_U495 == 99)
    {
        l_U495 = 0;
        l_U494 = 0;
        sub_450( ref l_U490, 8, 0, 0 );
    }
    return;
}

void sub_21728(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown[2] uVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    array(ref uVar16, 2);
    return sub_16155( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_21865()
{
    if (g_U91._fU60 != -1)
    {
        if ((g_U15946[g_U91._fU60]._fU132._fU24 == 0) || (g_U15946[g_U91._fU60]._fU132._fU24 == 3))
        {
            return 1;
        }
    }
    return 0;
}

void sub_22286(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 7;
    sub_22308( uParam0, uParam1, uParam2, uParam3, iVar6 );
    return;
}

void sub_22308(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;

    iVar7 = 59;
    if (iParam0 >= iVar7)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_22420( uParam1, uParam2 );
        return;
    }
    if (g_U63988._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar8 = 0;
    GET_GAME_TIMER( ref iVar8 );
    g_U63988._fU12[iParam0]._fU0 = 1;
    g_U63988._fU12[iParam0]._fU4 = 0;
    g_U63988._fU12[iParam0]._fU8 = 0;
    g_U63988._fU12[iParam0]._fU12 = uParam1;
    g_U63988._fU12[iParam0]._fU16 = uParam2;
    g_U63988._fU12[iParam0]._fU20 = iVar8 + iParam3;
    g_U63988._fU12[iParam0]._fU28 = uParam4;
    sub_24354( iParam0, iParam3 );
    return;
}

void sub_22420(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    uVar11 = sub_22443( uParam0 );
    sub_22934( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_23278( ref uVar4, 1 );
    sub_23306( ref uVar4, 0 );
    sub_23334( ref uVar4, 2 );
    sub_23364( ref uVar4 );
    return;
}

int sub_22443(unknown uParam0)
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
        case 22: return 22;
        case 20: return 20;
        case 28: return 28;
        case 29: return 29;
        case 30: return 30;
        case 31: return 31;
        case 32: return 32;
        case 34: return 81;
        case 25: return 25;
    }
    sub_2339( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_22934(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_22956( uParam0, 0, iParam4 + 0 );
    sub_22956( uParam1, 1, iParam4 + 0 );
    sub_22956( uParam2, 2, iParam4 + 0 );
    sub_22956( uParam3, 3, iParam4 + 0 );
    sub_22956( 0, 4, iParam4 + 0 );
    sub_22956( 1, 5, iParam4 + 0 );
    sub_22956( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_22956(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_23278(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_23306(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_23334(int iParam0, unknown uParam1)
{
    sub_22956( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_23364(int iParam0)
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
        if (NOT sub_23434())
        {
            sub_12354( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_23561( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_12354( iVar9 );
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
                ConcatString(ref cVar5, sub_12068( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_12068( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_23434()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_12068( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_12354( I );
            return 1;
        }
    }
    return 0;
}

int sub_23561(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_23626( uParam0, g_U569[Result] ))
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

int sub_23626(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_12068( 0, uParam0 );
        if (iVar14 == (sub_12068( 0, uParam6 )))
        {
            iVar15 = sub_12068( 3, uParam0 );
            if (iVar15 == (sub_12068( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_24354(unknown uParam0, int iParam1)
{
    g_U63988._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_24393( iParam1 ))
    {
        g_U63988._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_24393(int iParam0)
{
    int iVar3;

    iVar3 = sub_14297();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_24423();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_24423()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}