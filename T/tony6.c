void main()
{
    unknown uVar2;

    l_U69 = 86.00000000;
    l_U70 = 274.00000000;
    l_U170 = 0;
    l_U171 = 0;
    l_U172 = 0;
    l_U173 = 0;
    l_U174 = 0;
    l_U175 = 0;
    l_U203 = 10.00000000;
    l_U204 = 15.00000000;
    l_U225 = 0;
    l_U226 = 0;
    l_U241 = 0;
    l_U242 = 1;
    l_U243 = 3;
    l_U245 = 0;
    l_U246 = -1;
    l_U247 = 0;
    l_U248 = 0;
    l_U253 = 1;
    l_U339 = 0;
    l_U340 = 0;
    l_U341 = 0;
    l_U342 = 0;
    l_U343 = 1;
    l_U409 = 6;
    l_U447 = nil;
    l_U460 = nil;
    l_U478 = 1;
    l_U513 = nil;
    l_U533 = 1;
    l_U609 = 6;
    l_U618 = "BOGT_BoxDrop";
    l_U619 = "BOGT_Box_TickDrop";
    l_U684 = 0.63600000;
    l_U685 = 0.37600000;
    l_U734 = 0.05200000;
    l_U735 = 0.35300000;
    l_U736 = 0.30000000;
    l_U737 = 0.37200000;
    l_U738 = 0.37300000;
    l_U739 = 0.38700000;
    l_U740 = 0.44400000;
    l_U741 = 0.03750000;
    l_U742 = 0.36900000;
    l_U743 = 0.62350000;
    l_U744 = 0.60800000;
    l_U745 = {0.24300000, 0.46700000, 0.00000000};
    l_U748 = {0.23100000, 0.43500000, 0.00000000};
    l_U751 = {0.23100000, 0.43500000, 0.00000000};
    l_U754 = {0.31920000, 0.65250000, 0.00000000};
    l_U757 = {0.31920000, 0.65250000, 0.00000000};
    l_U760 = {0.24300000, 0.46700000, 0.00000000};
    l_U763 = {0.50000000, 1.10000000, 0.00000000};
    l_U766 = {0.31920000, 0.65250000, 0.00000000};
    l_U769 = {0.18225000, 0.35025000, 0.00000000};
    l_U772 = 0.30000000;
    l_U773 = 0.37000000;
    l_U774 = 0.56200000;
    l_U775 = 0.40100000;
    l_U776 = 0.30000000;
    l_U777 = 0.37000000;
    l_U778 = 0.69700000;
    l_U779 = 0.40100000;
    l_U780 = 0.30000000;
    l_U781 = 0.37000000;
    l_U782 = 0.66500000;
    l_U783 = 0.40100000;
    l_U784 = 0.32500000;
    l_U785 = 0.62500000;
    l_U786 = 0.00800000;
    l_U787 = 0.49700000;
    l_U788 = 0.52500000;
    l_U789 = 0.49700000;
    l_U790 = 0.51800000;
    l_U791 = 1;
    l_U792 = 0;
    l_U793 = {0.50000000, 0.50000000, 0};
    l_U796 = 0.20000000;
    l_U797 = 0.20000000;
    l_U841 = 0;
    l_U842 = 0;
    l_U854 = 0;
    l_U858 = 0;
    l_U917 = -1;
    l_U918 = -1;
    l_U928 = -457148013;
    l_U1141 = 0;
    l_U1152 = 0;
    l_U1154 = 0;
    l_U1161 = 0;
    l_U1162 = 0;
    l_U1164 = 0;
    SWITCH_GARBAGE_TRUCKS( 0 );
    SWITCH_RANDOM_TRAINS( 0 );
    sub_926();
    sub_8999();
    sub_9182();
    while (true)
    {
        SWITCH_GARBAGE_TRUCKS( 0 );
        SWITCH_RANDOM_TRAINS( 0 );
        sub_12709();
        switch (l_U219)
        {
            case 0:
            sub_13981();
            break;
            case 1:
            sub_14604();
            break;
            case 2:
            sub_41088();
            break;
            case 3:
            sub_47385();
            break;
            case 4:
            sub_52509();
            break;
            case 5:
            sub_53803();
            break;
            case 6:
            sub_67833();
            break;
            case 7:
            sub_74103();
            break;
            case 8:
            sub_83754();
            break;
            case 9:
            sub_87319();
            break;
            case 10:
            sub_87376();
            break;
            case 11:
            sub_87433();
            break;
        }
        if (g_U30093[0])
        {
            if (IS_SCREEN_FADED_IN())
            {
                if (((((((NOT (l_U219 == 5)) AND (NOT (l_U219 == 6))) AND (NOT (l_U219 == 7))) AND (NOT (l_U219 == 8))) AND (NOT (l_U219 == 9))) AND (NOT (l_U219 == 10))) AND (NOT (l_U219 == 11)))
                {
                    if (NOT (l_U918 == -1))
                    {
                        if (NOT (IS_CHAR_INJURED( g_U29971[l_U918]._fU12 )))
                        {
                            TASK_COMBAT( g_U29971[l_U918]._fU12, sub_1109() );
                            GIVE_WEAPON_TO_CHAR( g_U29971[l_U918]._fU12, 7, 999, 0 );
                            SET_CHAR_KEEP_TASK( g_U29971[l_U918]._fU12, 1 );
                        }
                    }
                    sub_51603( "GT5_F04" );
                    sub_12463( 9, 1 );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U931 ))
        {
            if (IS_CHAR_INJURED( l_U931 ))
            {
                sub_51603( "GT5_F05" );
                sub_87885( 0, l_U931, 0 );
                sub_3636();
            }
        }
        if (DOES_CHAR_EXIST( l_U931 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U931 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1109(), l_U931, 250.00000000, 250.00000000, 250.00000000, 0 )))
                {
                    sub_51603( "GT5_F07" );
                    sub_75581( 0, "E2T6_FCALL", "E2T6AUD", 0 );
                    sub_3636();
                }
            }
        }
        if (l_U1151)
        {
            sub_74710();
        }
        sub_88142( 0 );
        sub_95584();
    }
    return;
}

void sub_926()
{
    g_U43137 = 5;
    SET_MISSION_FLAG( 1 );
    LOAD_ADDITIONAL_TEXT( "TONY6", 0 );
    sub_977( "E2T6AUD" );
    LOAD_ADDITIONAL_TEXT( "E2T6AUD", 6 );
    sub_1158( 0, sub_1109(), "LUIS", 0 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1319();
        sub_3636();
    }
    sub_4602();
    WAIT( 0 );
    CLEAR_AREA( -398.69670000, 392.21150000, 12.90270000, 150.00000000, 1 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U902 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U903 );
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U904 );
    sub_5643( 1 );
    sub_5643( 2 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    if (g_U43133)
    {
        if (g_U43646 < 100)
        {
            g_U43646 = 100;
        }
        if (g_U43647 < 100)
        {
            g_U43647 = 100;
        }
        if (g_U43648 < 100)
        {
            g_U43648 = 100;
        }
    }
    g_U30181 = 0;
    sub_5796();
    return;
}

void sub_977(unknown uParam0)
{
    StrCopy( ref l_U71._fU0, uParam0, 16 );
    sub_996();
    return;
}

void sub_996()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U71._fU16[I]._fU0 = nil;
        StrCopy( ref l_U71._fU16[I]._fU4, "", 32 );
        l_U71._fU344[I] = 0;
    }
    return;
}

void sub_1109()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1158(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U71._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U71._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_1242( "\n PED NUMBER ", uParam0 );
    sub_1282( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_1242(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1282(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1319()
{
    int iVar2;

    iVar2 = 0;
    sub_1333( iVar2 );
    sub_2619( iVar2 );
    return;
}

void sub_1333(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    sub_1342();
    if (g_U43133)
    {
        return;
    }
    iVar3 = g_U14925[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U819)
    {
        sub_1518();
        sub_1726();
        g_U11063 = 1;
    }
    else if (NOT g_U12382[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1851();
            sub_1903();
            g_U11063 = 1;
        }
    }
    sub_1996();
    sub_2135();
    uVar5 = sub_2248( uParam0 );
    sub_2526( uVar5, 0 );
    return;
}

void sub_1342()
{
    g_U43588 = 0;
    g_U43628 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionStatTracker" );
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) > 0)
    {
        TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "MissionResultsTimer" );
    }
    return;
}

void sub_1518()
{
    if (g_U10972)
    {
        return;
    }
    sub_1545( g_U10971 );
    if (NOT (IS_BIT_SET( g_U10938._fU0, 7 )))
    {
        sub_1666();
    }
    return;
}

void sub_1545(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U10972)
    {
        return;
    }
    iVar3 = g_U22960[iParam0]._fU100;
    iVar3--;
    g_U22960[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1666()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10972)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1726()
{
    sub_1735();
    return;
}

void sub_1735()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1851()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10972)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1903()
{
    sub_1912();
    return;
}

void sub_1912()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1996()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12382[J]._fU148[I]._fU36)
            {
                g_U12382[J]._fU28 = 1;
            }
            g_U12382[J]._fU148[I]._fU36 = 0;
        }
    }
    return;
}

void sub_2135()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_2157();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_2157()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_2248(unknown uParam0)
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
        case 8: return 9;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_2479( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 37;
}

void sub_2479(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2526(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 37))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U22883[iParam0] = iVar4;
    if (bParam1)
    {
        g_U22883[iParam0] += 30000;
    }
    return;
}

void sub_2619(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2628();
    if (g_U0)
    {
        return;
    }
    if (g_U43133)
    {
        return;
    }
    if (g_U95._fU40 == 0)
    {
        return;
    }
    if (NOT g_U12379)
    {
        return;
    }
    iVar3 = g_U14925[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U12382[iParam0]._fU12)
    {
        return;
    }
    if (g_U10938._fU4 == -1)
    {
        return;
    }
    if (NOT (g_U10938._fU4 == iParam0))
    {
        return;
    }
    if (NOT sub_3403())
    {
        return;
    }
    if (NOT g_U819)
    {
        sub_3469();
        SET_BIT( ref g_U10938._fU0, 2 );
    }
    return;
}

void sub_2628()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_2666( 5, g_U575[I] )) == 1) AND (g_U575[I]._fU20))
        {
            if ((sub_2666( 1, g_U575[I] )) != 0)
            {
                sub_2952( I );
            }
        }
    }
    if (NOT sub_3118())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    if (g_U95._fU0 == 1016)
    {
        g_U95._fU92 = 1;
    }
    return;
}

int sub_2666(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2952(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_3037( g_U575 - 1 );
    return;
}

void sub_3037(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_3118()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_2666( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3403()
{
    if ((g_U10938._fU4 == 0) AND (g_U10938._fU8 == 1))
    {
        return 0;
    }
    return 1;
}

void sub_3469()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_3636()
{
    if (g_U43133)
    {
        g_U30181 = 1;
    }
    sub_3663();
    sub_4176();
    sub_4272();
    return;
}

void sub_3663()
{
    if (DOES_BLIP_EXIST( l_U859 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U859 );
    }
    sub_3700();
    return;
}

void sub_3700()
{
    int I;

    sub_3709();
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U197[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U197[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U196 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U196 );
    }
    l_U202 = nil;
    l_U176 = 0;
    for ( I = 0; I < l_U177; I++ )
    {
        l_U177[I] = 0;
        l_U192[I] = 0;
    }
    l_U172 = 0;
    l_U170 = 0;
    l_U171 = 0;
    l_U173 = 0;
    l_U175 = 0;
    l_U174 = 0;
    l_U181 = 0;
    l_U182 = 0;
    l_U184 = 0;
    l_U185 = 0;
    l_U208 = 0;
    for ( I = 0; I < l_U210; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U210[I] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U210[I], 0 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U210[I], 1 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_4050() ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_1109(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_4050() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1109(), 1 );
    }
    l_U186 = 0;
    l_U187 = 0;
    l_U188 = 0;
    l_U189 = 0;
    return;
}

void sub_3709()
{
    if (DOES_BLIP_EXIST( l_U201 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U201 );
    }
    return;
}

void sub_4050()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4176()
{
    int iVar2;

    iVar2 = 0;
    sub_4190( iVar2 );
    sub_2619( iVar2 );
    return;
}

void sub_4190(unknown uParam0)
{
    if (g_U12382[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_4050(), 150 );
    CLEAR_HELP();
    sub_1333( uParam0 );
    return;
}

void sub_4272()
{
    unknown uVar2;

    sub_4282( 0 );
    if (NOT (IS_CHAR_INJURED( l_U944 )))
    {
        SET_CHAR_KEEP_TASK( l_U944, 1 );
    }
    SWITCH_ROADS_ON( -449.11460000, 367.87290000, 2.46520000, -374.53960000, 400.99790000, 18.61520000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -450.21700000, 380.90910000, -1000.00000000, -374.15650000, 388.43560000, 1000.00000000 );
    sub_4533( 0 );
    g_U30097[0] = 0;
    sub_4602();
    g_U10526 = 1;
    g_U43025 = 0;
    SWITCH_GARBAGE_TRUCKS( 1 );
    SWITCH_RANDOM_TRAINS( 1 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    g_U30208 = nil;
    sub_4742( l_U917 );
    sub_4742( l_U918 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_4282(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8865 >= 4) AND (g_U8865 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_4533(boolean bParam0)
{
    if (bParam0)
    {
        g_U30179 = 1;
        g_U30250 = GET_ID_OF_THIS_THREAD();
    }
    else
    {
        g_U30179 = 0;
        g_U30250 = nil;
    }
    return;
}

void sub_4602()
{
    g_U30105 = 0;
    g_U30106 = 0;
    g_U30107 = 0;
    g_U30108 = 0;
    PRINTSTRING( "RESET_DANCING_GLOBALS() - Called" );
    PRINTNL();
    return;
}

void sub_4742(int iParam0)
{
    int iVar3;

    if (NOT (iParam0 == -1))
    {
        iVar3 = GET_ID_OF_THIS_THREAD();
        if (iVar3 == g_U30236[iParam0])
        {
            PRINTSTRING( "FREE_UP_GLOBAL_CLUBPED_SLOT() - called with slot number " );
            PRINTINT( iParam0 );
            PRINTNL();
            if (NOT (DOES_CHAR_EXIST( g_U29971[iParam0]._fU12 )))
            {
                PRINTSTRING( "FREE_UP_GLOBAL_CLUBPED_SLOT() - char does not exist " );
                PRINTINT( iParam0 );
                PRINTNL();
            }
            else if (IS_CHAR_INJURED( g_U29971[iParam0]._fU12 ))
            {
                PRINTSTRING( "FREE_UP_GLOBAL_CLUBPED_SLOT() - char is injured " );
                PRINTINT( iParam0 );
                PRINTNL();
            }
            g_U29971[iParam0]._fU0 = 0;
            g_U29971[iParam0]._fU4 = 0;
            g_U29971[iParam0]._fU12 = nil;
            g_U29971[iParam0]._fU16 = {0.00000000, 0.00000000, 0.00000000};
            g_U29971[iParam0]._fU28 = 0.00000000;
            g_U29971[iParam0]._fU32 = 0;
            g_U29971[iParam0]._fU36 = 0;
            g_U29971[iParam0]._fU40 = 0;
            g_U30236[iParam0] = nil;
            sub_5209( iParam0, 0 );
            sub_5344( g_U29971[iParam0]._fU8 );
            g_U29971[iParam0]._fU8 = 0;
            PRINTSTRING( "FREE_UP_GLOBAL_CLUBPED_SLOT() - slot number " );
            PRINTINT( iParam0 );
            PRINTNL();
        }
    }
    return;
}

void sub_5209(int iParam0, unknown uParam1)
{
    if (NOT (iParam0 == -1))
    {
        g_U30132[iParam0] = uParam1;
    }
    else
    {
        SCRIPT_ASSERT( "SET_GLOBAL_CLUBPED_SLOT_AS_SCRIPT_CONTROLLED - invalid slot number (-1)" );
    }
    return;
}

void sub_5344(unknown uParam0)
{
    PRINTSTRING( "RELOAD_GLOBAL_CLUBPED_ARRAY() - called with " );
    PRINTINT( uParam0 );
    PRINTNL();
    g_U30128[uParam0] = 1;
    return;
}

void sub_5643(unknown uParam0)
{
    g_U30226[uParam0] = GET_ID_OF_THIS_THREAD();
    g_U30149[uParam0] = 1;
    return;
}

void sub_5796()
{
    sub_5805();
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) > 0)
    {
        TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "MissionResultsTimer" );
    }
    g_U43628 = 1;
    g_U43593 = 0;
    g_U43594 = 0;
    g_U43595 = 0;
    g_U43596 = 0;
    REQUEST_SCRIPT( "MissionResultsTimer" );
    if (g_U43137 == 0)
    {
        REQUEST_SCRIPT( "MissionResultHelp" );
        sub_7584();
        sub_7622();
    }
    else
    {
        g_U43626 = 1;
        sub_7584();
        sub_7622();
        if (g_U43137 == 22)
        {
            sub_7725( 0, 0, 0 );
        }
        if (g_U43137 == 17)
        {
            sub_7725( 1, 0, 0 );
        }
        if (g_U43137 == 15)
        {
            sub_7725( 0, 1, 0 );
        }
        if (g_U43137 == 18)
        {
            sub_7725( 0, 0, 1 );
        }
        if (g_U43137 == 16)
        {
            sub_7725( 0, 0, 1 );
        }
    }
    if (g_U43133 == 1)
    {
        if ((g_U43463[g_U43137] == 0) || (g_U43463[g_U43137] == -1))
        {
            PRINTNL();
            PRINTSTRING( "**************************************" );
            PRINTNL();
            PRINTSTRING( "g_FirstPlaythroughOfMission = TRUE" );
            PRINTNL();
            PRINTSTRING( "**************************************" );
            PRINTNL();
            g_U43624 = 1;
        }
        else
        {
            PRINTSTRING( "**************************************" );
            PRINTNL();
            PRINTSTRING( "g_FirstPlaythroughOfMission = FALSE" );
            PRINTNL();
            PRINTSTRING( "**************************************" );
            PRINTNL();
            g_U43624 = 0;
        }
    }
    else
    {
        PRINTSTRING( "**************************************" );
        PRINTNL();
        PRINTSTRING( "g_FirstPlaythroughOfMission = TRUE" );
        PRINTNL();
        PRINTSTRING( "**************************************" );
        PRINTNL();
        g_U43624 = 1;
    }
    g_U43611 = 0;
    g_U43612 = 0;
    g_U43615 = 0;
    g_U43617 = 0;
    g_U43614 = 0;
    g_U43622 = 0;
    g_U43619 = 0;
    g_U43620 = 0;
    g_U43621 = 0;
    g_U43616 = 0;
    g_U43613 = 0;
    g_U43503 = 0;
    g_U43506 = 0;
    g_U43509 = 0;
    g_U43512 = 0;
    g_U43515 = 0;
    g_U43516 = 0;
    g_U43519 = 0;
    g_U43522 = 0;
    g_U43558 = 0;
    g_U43559 = 0;
    l_U848 = 0;
    g_U43509 = 0;
    g_U43508 = 0;
    g_U43507 = 0;
    g_U43498 = 0;
    PRINTNL();
    PRINTNL();
    PRINTSTRING( "*******************************************************" );
    PRINTSTRING( "g_AreMissionStatsNeeded = TRUE & Requesting MissionStatTracker.sc" );
    PRINTNL();
    PRINTSTRING( "*******************************************************" );
    PRINTNL();
    g_U43588 = 1;
    REQUEST_SCRIPT( "MissionStatTracker" );
    return;
}

void sub_5805()
{
    g_U43138[0]._fU0 = 4;
    g_U43138[0]._fU4 = 30;
    g_U43138[0]._fU8 = 0;
    g_U43138[0]._fU12 = 10;
    g_U43138[1]._fU0 = 5;
    g_U43138[1]._fU4 = 20;
    g_U43138[1]._fU8 = 10;
    g_U43138[1]._fU20 = 70;
    g_U43138[1]._fU16 = 31;
    g_U43138[2]._fU0 = 4;
    g_U43138[2]._fU4 = 0;
    g_U43138[2]._fU8 = 50;
    g_U43138[2]._fU20 = 70;
    g_U43138[2]._fU16 = 11;
    g_U43138[3]._fU0 = 2;
    g_U43138[3]._fU4 = 30;
    g_U43138[3]._fU12 = 0;
    g_U43138[5]._fU0 = 3;
    g_U43138[5]._fU4 = 10;
    g_U43138[5]._fU8 = 40;
    g_U43138[4]._fU0 = 2;
    g_U43138[4]._fU4 = 10;
    g_U43138[4]._fU8 = 0;
    g_U43138[4]._fU44 = 8000;
    g_U43138[6]._fU0 = 5;
    g_U43138[6]._fU4 = 0;
    g_U43138[6]._fU8 = 50;
    g_U43138[7]._fU0 = 5;
    g_U43138[7]._fU4 = 45;
    g_U43138[7]._fU8 = 50;
    g_U43138[7]._fU44 = 35000;
    g_U43138[8]._fU0 = 4;
    g_U43138[8]._fU4 = 35;
    g_U43138[8]._fU8 = 20;
    g_U43138[8]._fU12 = 80;
    g_U43138[9]._fU0 = 8;
    g_U43138[9]._fU4 = 50;
    g_U43138[9]._fU12 = 0;
    g_U43138[10]._fU0 = 3;
    g_U43138[10]._fU4 = 55;
    g_U43138[10]._fU44 = 7000;
    g_U43138[11]._fU0 = 10;
    g_U43138[11]._fU4 = 0;
    g_U43138[11]._fU8 = 50;
    g_U43138[11]._fU20 = 70;
    g_U43138[11]._fU16 = 25;
    g_U43138[12]._fU0 = 5;
    g_U43138[12]._fU4 = 0;
    g_U43138[12]._fU8 = 50;
    g_U43138[12]._fU12 = 60;
    g_U43138[12]._fU20 = 70;
    g_U43138[12]._fU16 = 10;
    g_U43138[12]._fU24 = 70;
    g_U43138[13]._fU0 = 7;
    g_U43138[13]._fU4 = 35;
    g_U43138[13]._fU8 = 0;
    g_U43138[14]._fU0 = 5;
    g_U43138[14]._fU4 = 15;
    g_U43138[14]._fU12 = 20;
    g_U43138[14]._fU24 = 140;
    g_U43138[15]._fU0 = 6;
    g_U43138[15]._fU4 = 0;
    g_U43138[15]._fU8 = 0;
    g_U43138[15]._fU20 = 70;
    g_U43138[15]._fU28 = 4;
    g_U43138[16]._fU0 = 4;
    g_U43138[16]._fU4 = 10;
    g_U43138[16]._fU8 = 50;
    g_U43138[16]._fU20 = 70;
    g_U43138[16]._fU16 = 6;
    g_U43138[16]._fU28 = 4;
    g_U43138[17]._fU0 = 7;
    g_U43138[17]._fU4 = 25;
    g_U43138[17]._fU8 = 50;
    g_U43138[17]._fU28 = 6;
    g_U43138[17]._fU12 = 50;
    g_U43138[18]._fU0 = 4;
    g_U43138[18]._fU4 = 20;
    g_U43138[18]._fU8 = 50;
    g_U43138[18]._fU28 = 8;
    g_U43138[19]._fU0 = 7;
    g_U43138[19]._fU4 = 50;
    g_U43138[19]._fU8 = 40;
    g_U43138[19]._fU16 = 20;
    g_U43138[19]._fU20 = 55;
    g_U43138[20]._fU0 = 5;
    g_U43138[20]._fU4 = 0;
    g_U43138[20]._fU8 = 40;
    g_U43138[20]._fU20 = 55;
    g_U43138[20]._fU16 = 20;
    g_U43138[21]._fU0 = 3;
    g_U43138[21]._fU4 = 10;
    g_U43138[21]._fU8 = 10;
    g_U43138[22]._fU0 = 6;
    g_U43138[22]._fU4 = 30;
    g_U43138[22]._fU8 = 50;
    g_U43138[22]._fU20 = 70;
    g_U43138[22]._fU16 = 20;
    g_U43138[22]._fU28 = 5;
    g_U43138[23]._fU0 = 6;
    g_U43138[23]._fU4 = 40;
    g_U43138[23]._fU8 = 40;
    g_U43138[23]._fU20 = 70;
    g_U43138[23]._fU16 = 20;
    g_U43138[24]._fU0 = 4;
    g_U43138[24]._fU4 = 30;
    g_U43138[24]._fU8 = 40;
    g_U43138[24]._fU20 = 60;
    g_U43138[24]._fU16 = 10;
    g_U43138[25]._fU0 = 4;
    g_U43138[25]._fU4 = 30;
    g_U43138[25]._fU8 = 90;
    g_U43138[25]._fU20 = 70;
    g_U43138[25]._fU16 = 25;
    g_U43138[25]._fU28 = 4;
    return;
}

void sub_7584()
{
    GET_GAME_TIMER( ref g_U43501 );
    g_U43496 = 1;
    return;
}

void sub_7622()
{
    if (NOT (IS_CHAR_DEAD( sub_1109() )))
    {
        GET_CHAR_HEALTH( sub_1109(), ref g_U43520 );
        g_U43520 = 200;
    }
    return;
}

void sub_7725(int iParam0, int iParam1, int iParam2)
{
    if (iParam1 == 1)
    {
        g_U43517 = GET_INT_STAT( 296 );
    }
    else if (iParam2 == 1)
    {
        g_U43517 = GET_INT_STAT( 297 );
    }
    else
    {
        g_U43517 = GET_INT_STAT( 294 );
    }
    if (iParam0 == 1)
    {
        RESET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER();
    }
    return;
}

void sub_8999()
{
    l_U880[1]._fU0 = -1628879836;
    l_U880[1]._fU4 = {-383.00000000, 438.00000000, 6.00000000};
    l_U880[1]._fU16 = 2;
    l_U880[1]._fU20 = 0.00000000;
    l_U880[1]._fU24 = 1.00000000;
    l_U880[2]._fU0 = -1628879836;
    l_U880[2]._fU4 = {-375.00000000, 440.00000000, 6.00000000};
    l_U880[2]._fU16 = 2;
    l_U880[2]._fU20 = 0.00000000;
    l_U880[2]._fU24 = 1.00000000;
    return;
}

void sub_9182()
{
    if ((IS_BIT_SET( g_U10938._fU0, 7 )) || (g_U43133))
    {
        g_U43104[5] = 0;
    }
    else if (IS_PLAYER_PLAYING( sub_4050() ))
    {
        SET_PLAYER_CONTROL( sub_4050(), 0 );
    }
    switch (g_U43104[5])
    {
        case 3:
        if (IS_PLAYER_PLAYING( sub_4050() ))
        {
            SET_CHAR_COORDINATES( sub_1109(), -182.30650000, -921.24510000, 4.12150000 );
            SET_CHAR_HEADING( sub_1109(), 180.00000000 );
            WAIT( 0 );
            WAIT( 0 );
            WAIT( 0 );
            WAIT( 0 );
            WAIT( 0 );
            WAIT( 0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1109() );
            SET_CHAR_COORDINATES( sub_1109(), -398.69670000, 392.21150000, 12.90270000 );
            SET_CHAR_HEADING( sub_1109(), 0.00000000 );
            REQUEST_MODEL( l_U928 );
            REQUEST_ANIMS( "missnightclub" );
            REQUEST_ANIMS( "missTony06" );
            while (((NOT (HAS_MODEL_LOADED( l_U928 ))) || (NOT (HAVE_ANIMS_LOADED( "missnightclub" )))) || (NOT (HAVE_ANIMS_LOADED( "missTony06" ))))
            {
                WAIT( 0 );
            }
            sub_9601( 0, 0 );
            l_U918 = sub_11575();
            g_U29971[l_U918]._fU0 = 1;
            g_U29971[l_U918]._fU4 = 9;
            g_U29971[l_U918]._fU8 = 0;
            g_U29971[l_U918]._fU16 = {-397.73680000, 396.54800000, 13.40960000};
            g_U29971[l_U918]._fU28 = 180.49990000;
            g_U29971[l_U918]._fU36 = 8;
            l_U917 = sub_11575();
            g_U29971[l_U917]._fU0 = 1;
            g_U29971[l_U917]._fU4 = 12;
            g_U29971[l_U917]._fU8 = 0;
            g_U29971[l_U917]._fU16 = {-393.97600000, 425.97700000, 5.16940000};
            g_U29971[l_U917]._fU28 = 180.00000000;
            g_U29971[l_U917]._fU36 = 0;
            g_U29971[l_U917]._fU32 = l_U928;
            g_U29971[l_U917]._fU40 = 20;
            sub_5344( 0 );
            LOAD_SCENE( -398.69670000, 392.21150000, 12.90270000 );
            g_U43025 = 1;
        }
        sub_12463( 3, 1 );
        break;
        case 5:
        SET_CHAR_COORDINATES( sub_1109(), -182.30650000, -921.24510000, 4.12150000 );
        SET_CHAR_HEADING( sub_1109(), 180.00000000 );
        WAIT( 0 );
        WAIT( 0 );
        WAIT( 0 );
        WAIT( 0 );
        WAIT( 0 );
        WAIT( 0 );
        sub_12463( 5, 1 );
        break;
    }
    return;
}

void sub_9601(boolean bParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;

    PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - called for " );
    PRINTNL();
    if (NOT bParam0)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            SCRIPT_ASSERT( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN() - should only be called when screen is faded out." );
        }
        else
        {
            WAIT( 0 );
        }
    }
    if ((NOT (IS_CHAR_INJURED( sub_1109() ))) AND ((IS_SCREEN_FADED_OUT()) || (bParam0)))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_9981( sub_1109(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_9981( sub_1109(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_9981( sub_1109(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_11258( 0 );
        sub_11258( 1 );
        sub_11258( 2 );
        bVar4 = false;
        GET_GAME_TIMER( ref l_U169 );
        while (NOT bVar4)
        {
            GET_GAME_TIMER( ref iVar5 );
            iVar6 = iVar5 - l_U169;
            if ((iVar6 > 15000) || (((g_U30110[0] == 0) AND (g_U30110[1] == 0)) AND (g_U30110[2] == 0)))
            {
                if (iVar6 > 15000)
                {
                    ;
                }
                bVar4 = true;
            }
            else
            {
                PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN  - loading stuff" );
                PRINTNL();
                WAIT( 0 );
            }
        }
        if (NOT bParam0)
        {
            WAIT( 0 );
        }
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - finished" );
        PRINTNL();
    }
    return;
}

int sub_9981(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_9992( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_10152( uParam0, uParam1, 0 ))
        {
            return 1;
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {vVar5 - vVar8};
            uVar11._fU8 = 0.00000000;
            if ((VMAG2( uVar11 )) < (uParam2 * uParam2))
            {
                return 1;
            }
        }
    }
    return 0;
}

vector sub_9992(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return vector( 14.17720000, 397.67000000, -399.10690000);
        break;
        case 1:
        return vector( 9.80000000, 153.41000000, -468.03000000);
        break;
        case 2:
        return vector( 11.54000000, 356.98000000, -440.28000000);
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

int sub_10152(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_10180( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_10180(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_1109(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_11258(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

int sub_11575()
{
    int Result;

    PRINTSTRING( "GET_FREE_GLOBAL_CLUBPED_SLOT() - called " );
    PRINTNL();
    for ( Result = 0; Result < 11; Result++ )
    {
        if (g_U29971[Result]._fU0)
        {
            if (NOT (IS_THREAD_ACTIVE( g_U30236[Result] )))
            {
                PRINTSTRING( "GET_FREE_GLOBAL_CLUBPED_SLOT() - calling FREE_UP_GLOBAL_CLUBPED_SLOT because script no longer active, slot = " );
                PRINTINT( Result );
                PRINTNL();
                sub_4742( Result );
            }
        }
        if (NOT g_U29971[Result]._fU0)
        {
            g_U29971[Result]._fU4 = 0;
            g_U29971[Result]._fU8 = 0;
            g_U29971[Result]._fU12 = nil;
            g_U29971[Result]._fU16 = {0.00000000, 0.00000000, 0.00000000};
            g_U29971[Result]._fU28 = 0.00000000;
            g_U29971[Result]._fU32 = 0;
            g_U29971[Result]._fU36 = 0;
            g_U29971[Result]._fU40 = 0;
            g_U30236[Result] = GET_ID_OF_THIS_THREAD();
            PRINTSTRING( "GET_FREE_GLOBAL_CLUBPED_SLOT() - returned " );
            PRINTINT( Result );
            PRINTNL();
            return Result;
        }
    }
    SCRIPT_ASSERT( "GET_FREE_GLOBAL_CLUBPED_SLOT() - couldn't find free slot" );
    return -1;
}

void sub_12463(int iParam0, boolean bParam1)
{
    l_U226 = 0;
    if (NOT (l_U219 == iParam0))
    {
        sub_3700();
        if (bParam1)
        {
            if (NOT l_U225)
            {
                CLEAR_PRINTS();
            }
        }
        CLEAR_HELP();
        l_U219 = iParam0;
        l_U220 = 0;
        l_U222 = 1;
        l_U223 = 0;
        l_U226 = 1;
    }
    return;
}

void sub_12709()
{
    int I;
    unknown uVar3;
    float fVar4;
    float fVar5;
    float fVar6;

    if (IS_PLAYER_PLAYING( sub_4050() ))
    {
        for ( I = 0; I < l_U880; I++ )
        {
            if (NOT (I == 0))
            {
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U880[I]._fU4._fU0, l_U880[I]._fU4._fU4, l_U880[I]._fU4._fU8, 1.50000000, l_U880[I]._fU0 ))
                {
                    switch (l_U880[I]._fU16)
                    {
                        case 0: break;
                        case 1:
                        if (l_U880[I]._fU24 > 0.00000000)
                        {
                            GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U880[I]._fU0, l_U880[I]._fU4, ref uVar3, ref fVar4 );
                            if (fVar4 < l_U880[I]._fU24)
                            {
                                if (fVar4 >= l_U880[I]._fU20)
                                {
                                    l_U880[I]._fU20 = fVar4;
                                    if (fVar4 == 0.00000000)
                                    {
                                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U880[I]._fU0, l_U880[I]._fU4, 0, 0.00000000 );
                                    }
                                }
                                else if (l_U880[I]._fU20 < l_U880[I]._fU24)
                                {
                                    fVar5 = l_U880[I]._fU24 - l_U880[I]._fU20;
                                    GET_FRAME_TIME( ref fVar6 );
                                    if (fVar6 < fVar5)
                                    {
                                        fVar5 = fVar6;
                                    }
                                    l_U880[I]._fU20 += fVar5;
                                }
                                if (l_U880[I]._fU20 > l_U880[I]._fU24)
                                {
                                    l_U880[I]._fU20 = l_U880[I]._fU24;
                                    l_U880[I]._fU16 = 2;
                                }
                                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U880[I]._fU0, l_U880[I]._fU4, 0, l_U880[I]._fU20 );;
                            }
                            else if (l_U880[I]._fU20 > l_U880[I]._fU24)
                            {
                                l_U880[I]._fU20 = l_U880[I]._fU24;
                            }
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U880[I]._fU0, l_U880[I]._fU4, 0, l_U880[I]._fU20 );
                            l_U880[I]._fU16 = 2;;
                        }
                        else
                        {
                            GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U880[I]._fU0, l_U880[I]._fU4, ref uVar3, ref fVar4 );
                            if (fVar4 > l_U880[I]._fU24)
                            {
                                if (fVar4 <= l_U880[I]._fU20)
                                {
                                    l_U880[I]._fU20 = fVar4;
                                    if (fVar4 == 0.00000000)
                                    {
                                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U880[I]._fU0, l_U880[I]._fU4, 0, 0.00000000 );
                                    }
                                }
                                else if (l_U880[I]._fU20 > l_U880[I]._fU24)
                                {
                                    fVar5 = l_U880[I]._fU24 - l_U880[I]._fU20;
                                    GET_FRAME_TIME( ref fVar6 );
                                    if (fVar6 < fVar5)
                                    {
                                        fVar5 = fVar6;
                                    }
                                    l_U880[I]._fU20 -= fVar5;
                                }
                                if (l_U880[I]._fU20 < l_U880[I]._fU24)
                                {
                                    l_U880[I]._fU20 = l_U880[I]._fU24;
                                    l_U880[I]._fU16 = 2;
                                }
                                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U880[I]._fU0, l_U880[I]._fU4, 0, l_U880[I]._fU20 );;
                            }
                            else if (l_U880[I]._fU20 < l_U880[I]._fU24)
                            {
                                l_U880[I]._fU20 = l_U880[I]._fU24;
                            }
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U880[I]._fU0, l_U880[I]._fU4, 0, l_U880[I]._fU20 );
                            l_U880[I]._fU16 = 2;;
                        }
                        break;
                        case 2:
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U880[I]._fU0, l_U880[I]._fU4, 1, l_U880[I]._fU20 );
                        break;
                    }
                }
            }
        }
    }
    return;
}

void sub_13981()
{
    boolean bVar2;

    if (g_U3)
    {
        sub_12463( 1, 1 );
    }
    else
    {
        switch (l_U220)
        {
            case 0:
            SET_PLAYER_CONTROL( sub_4050(), 0 );
            if (NOT IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            GET_CURRENT_WEATHER( ref l_U946 );
            FORCE_WEATHER_NOW( 1 );
            l_U220++;
            break;
            case 1:
            if ((IS_BIT_SET( g_U10938._fU0, 7 )) AND (NOT g_U43133))
            {
                LOAD_ADDITIONAL_TEXT( "E2T6AUD", 6 );
                START_CUTSCENE_NOW( "GT06_AA" );
                sub_14218( 1, 0 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -175426899, -468.00000000, 153.00000000, 10.00000000, 1, 1.00000000 );
                l_U220++;
            }
            else
            {
                l_U220 = 99;
            }
            break;
            case 2:
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -175426899, -468.00000000, 153.00000000, 10.00000000, 1, 1.00000000 );
            if (HAS_CUTSCENE_LOADED())
            {
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -175426899, -468.00000000, 153.00000000, 10.00000000, 1, 1.00000000 );
                    WAIT( 0 );
                }
                CLEAR_NAMED_CUTSCENE( "GT06_AA" );
                l_U220 = 99;
            }
            break;
            case 99:
            bVar2 = false;
            while (NOT bVar2)
            {
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    if (NOT IS_SCREEN_FADING())
                    {
                        DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                    }
                }
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                else
                {
                    bVar2 = true;
                }
            }
            FORCE_WEATHER_NOW( l_U946 );
            RELEASE_WEATHER();
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -175426899, -468.00000000, 153.00000000, 10.00000000, 0, 0.00000000 );
            sub_12463( 1, 1 );
            break;
        }
    }
    return;
}

void sub_14218(unknown uParam0, unknown uParam1)
{
    g_U30154[uParam0] = 1;
    return;
}

void sub_14604()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    switch (l_U220)
    {
        case 0:
        if (g_U3)
        {
            SET_TIME_OF_DAY( 22, 0 );
        }
        sub_14660( 0, 1 );
        while (NOT (sub_15636( 0, 1 )))
        {
            WAIT( 0 );
        }
        REQUEST_MODEL( sub_16667( 0 ) );
        sub_16829( 0 );
        REQUEST_MODEL( l_U928 );
        REQUEST_MODEL( -844218756 );
        REQUEST_MODEL( -1684055465 );
        REQUEST_MODEL( 1756785265 );
        REQUEST_ANIMS( "missTony06" );
        while (((((((NOT (HAS_MODEL_LOADED( sub_16667( 0 ) ))) || (NOT (sub_17372( 0 )))) || (NOT (HAS_MODEL_LOADED( l_U928 )))) || (NOT (HAS_MODEL_LOADED( -844218756 )))) || (NOT (HAS_MODEL_LOADED( -1684055465 )))) || (NOT (HAS_MODEL_LOADED( 1756785265 )))) || (NOT (HAVE_ANIMS_LOADED( "missTony06" ))))
        {
            WAIT( 0 );
        }
        FLUSH_SCENARIO_BLOCKING_AREAS();
        ADD_SCENARIO_BLOCKING_AREA( -411.05590000, 394.46540000, 4.29400000, -398.80590000, 441.11540000, 10.86900000 );
        ADD_SCENARIO_BLOCKING_AREA( -414.99890000, 397.12420000, -3.09760000, -363.52390000, 450.22420000, 26.57740000 );
        sub_17631( -460.44680000, 153.23640000, 8.75500000, 250.00000000, -460.68940000, 163.59810000, 8.74240000, 0.00000000, 0, 1 );
        sub_18485( 0, -460.44680000, 153.23640000, 8.75500000, 0.00000000, ref l_U1103 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1109() );
        SET_CHAR_COORDINATES( sub_1109(), -465.86160000, 152.99840000, 7.86880000 );
        SET_CHAR_HEADING( sub_1109(), 270.00000000 );
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        sub_9601( 0, 0 );
        sub_19845( 0, ref l_U931, -464.66120000, 156.71210000, 8.85890000, 270.00000000 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_16667( 0 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_16840( 0 ) );
        sub_20955( 1000, 1, 0, 1, 0 );
        sub_1158( 1, l_U931, "TONY", 0 );
        l_U918 = sub_11575();
        g_U29971[l_U918]._fU0 = 1;
        g_U29971[l_U918]._fU4 = 9;
        g_U29971[l_U918]._fU8 = 0;
        g_U29971[l_U918]._fU16 = {-397.73680000, 396.54800000, 13.40960000};
        g_U29971[l_U918]._fU28 = 180.49990000;
        g_U29971[l_U918]._fU36 = 8;
        l_U917 = sub_11575();
        g_U29971[l_U917]._fU0 = 1;
        g_U29971[l_U917]._fU4 = 12;
        g_U29971[l_U917]._fU8 = 0;
        g_U29971[l_U917]._fU16 = {-393.97600000, 425.97700000, 5.16940000};
        g_U29971[l_U917]._fU28 = 180.00000000;
        g_U29971[l_U917]._fU36 = 0;
        g_U29971[l_U917]._fU32 = l_U928;
        g_U29971[l_U917]._fU40 = 20;
        sub_5344( 0 );
        SWITCH_ROADS_OFF( -450.21700000, 380.90910000, -1000.00000000, -374.15650000, 388.43560000, 1000.00000000 );
        sub_22217( l_U1103 );
        SETTIMERA( 0 );
        l_U220++;
        break;
        case 1:
        if (NOT l_U864)
        {
            if (IS_SCREEN_FADED_IN())
            {
                SET_PLAYER_CONTROL( sub_4050(), 1 );
                l_U864 = 1;
            }
        }
        if (l_U919 == 0)
        {
            if (IS_SCREEN_FADED_IN())
            {
                if (NOT (sub_22472( 0 )))
                {
                    if (sub_22725( "E2T6_WHERE", ref l_U231, 6, 1 ))
                    {
                        SETTIMERA( 0 );
                        l_U919++;
                    }
                }
            }
        }
        if (sub_23721( l_U1103 ))
        {
            sub_23847( l_U1103 );
            if (sub_27073( -398.37200000, 389.18000000, 15.48300000, 2.50000000, 2.50000000, 2.50000000, 1, l_U931, l_U1103, "GT5_M11", "GT5_M10", "GT5_M09", 0, 1, "GT5_M13", "GT5_M14" ))
            {
                SET_PLAYER_CONTROL( sub_4050(), 0 );
                sub_39411( ref l_U231, 1 );
                l_U919 = 0;
                sub_12463( 2, 0 );
            }
            else if ((sub_31250( sub_1109(), l_U931 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_4050(), 0 ))))
            {
                if (NOT (sub_22472( 0 )))
                {
                    if (NOT l_U868)
                    {
                        switch (l_U919)
                        {
                            case 1:
                            if (TIMERA() > 5000)
                            {
                                switch (g_U43646)
                                {
                                    case 0:
                                    case 100:
                                    if (sub_22725( "E2T6_B1AV1", ref l_U231, 6, 1 ))
                                    {
                                        l_U1102 = "E2T6_B1AV1";
                                        l_U869 = 1;
                                        g_U43646++;
                                        l_U919++;
                                    }
                                    break;
                                    case 1:
                                    case 101:
                                    if (sub_22725( "E2T6_B1AV2", ref l_U231, 6, 1 ))
                                    {
                                        l_U1102 = "E2T6_B1AV2";
                                        l_U869 = 1;
                                        g_U43646++;
                                        l_U919++;
                                    }
                                    break;
                                    case 2:
                                    case 102:
                                    l_U919++;
                                    break;
                                }
                            }
                            break;
                            case 2:
                            switch (g_U43647)
                            {
                                case 0:
                                case 100:
                                if (sub_22725( "E2T6_B1BV1", ref l_U231, 6, 1 ))
                                {
                                    l_U1102 = "E2T6_B1BV1";
                                    l_U869 = 1;
                                    g_U43647++;
                                    l_U919++;
                                }
                                break;
                                case 1:
                                case 101:
                                if (sub_22725( "E2T6_B1BV2", ref l_U231, 6, 1 ))
                                {
                                    l_U1102 = "E2T6_B1BV2";
                                    l_U869 = 1;
                                    g_U43647++;
                                    l_U919++;
                                }
                                break;
                                case 2:
                                case 102:
                                l_U919++;
                                break;
                            }
                            break;
                            case 3:
                            switch (g_U43648)
                            {
                                case 0:
                                case 100:
                                if (sub_22725( "E2T6_B1CV1", ref l_U231, 6, 1 ))
                                {
                                    l_U1102 = "E2T6_B1CV1";
                                    l_U869 = 1;
                                    g_U43648++;
                                    l_U919++;
                                }
                                break;
                                case 1:
                                case 101:
                                if (sub_22725( "E2T6_B1CV2", ref l_U231, 6, 1 ))
                                {
                                    l_U1102 = "E2T6_B1CV2";
                                    l_U869 = 1;
                                    g_U43648++;
                                    l_U919++;
                                }
                                break;
                                case 2:
                                case 102:
                                SAY_AMBIENT_SPEECH( l_U931, "LISTEN_TO_RADIO", 1, 1, 0 );
                                l_U919++;
                                break;
                            }
                            break;
                            case 4:
                            l_U869 = 0;
                            l_U919++;
                            break;
                        }
                    }
                    else if (l_U869)
                    {
                        sub_40521( l_U1102, ref l_U231, 6, 1 );
                        l_U868 = 0;
                    }
                    else
                    {
                        l_U868 = 0;
                    }
                }
            }
            else if (l_U869)
            {
                sub_40670( ref l_U231 );
                l_U868 = 1;
            };;;
        }
        else
        {
            sub_12463( 11, 1 );
        }
        break;
    }
    return;
}

void sub_14660(unknown uParam0, boolean bParam1)
{
    sub_14671( uParam0 );
    if (bParam1)
    {
        switch (uParam0)
        {
            case 0:
            REQUEST_MODEL( 1756785265 );
            REQUEST_MODEL( 982077731 );
            REQUEST_MODEL( -844218756 );
            break;
            case 1:
            REQUEST_MODEL( g_U30218 );
            REQUEST_MODEL( g_U30220 );
            REQUEST_MODEL( -1446884113 );
            break;
            case 2:
            REQUEST_MODEL( g_U30222 );
            REQUEST_MODEL( g_U30224 );
            REQUEST_MODEL( 1662473323 );
            break;
        }
    }
    else
    {
        REQUEST_ANIMS( "missnightclub" );
        REQUEST_ANIMS( "AMB@SMOKING_F" );
        REQUEST_ANIMS( "AMB@SMOKING" );
        REQUEST_MODEL( -268530289 );
        REQUEST_MODEL( -2037134882 );
        switch (uParam0)
        {
            case 0:
            REQUEST_MODEL( -1696530209 );
            REQUEST_MODEL( 1756785265 );
            REQUEST_MODEL( 982077731 );
            REQUEST_MODEL( 1758965191 );
            REQUEST_MODEL( -844218756 );
            REQUEST_MODEL( -1684055465 );
            REQUEST_SCRIPT( "ambNightclubBM2" );
            REQUEST_ANIMS( "missamb_bama" );
            break;
            case 1:
            REQUEST_MODEL( -1696530209 );
            REQUEST_MODEL( 1756785265 );
            REQUEST_MODEL( g_U30218 );
            REQUEST_MODEL( g_U30219 );
            REQUEST_MODEL( g_U30220 );
            REQUEST_MODEL( g_U30221 );
            REQUEST_MODEL( 1429700748 );
            REQUEST_MODEL( -1446884113 );
            REQUEST_SCRIPT( "ambNightclubM92" );
            REQUEST_ANIMS( "missamb_m9" );
            break;
            case 2:
            REQUEST_MODEL( g_U30222 );
            REQUEST_MODEL( g_U30223 );
            REQUEST_MODEL( g_U30224 );
            REQUEST_MODEL( g_U30225 );
            REQUEST_MODEL( 1662473323 );
            REQUEST_SCRIPT( "ambNightclubHC2" );
            REQUEST_ANIMS( "missamb_herc_female" );
            REQUEST_ANIMS( "missamb_herc_male" );
            break;
        }
    }
    g_U30144 = 1;
    return;
}

void sub_14671(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: break;
        case 1:
        if (g_U30218 == 0)
        {
            g_U30218 = 698554670;
        }
        if (g_U30219 == 0)
        {
            g_U30219 = -747359056;
        }
        if (g_U30220 == 0)
        {
            g_U30220 = 930552533;
        }
        if (g_U30221 == 0)
        {
            g_U30221 = -297585214;
        }
        break;
        case 2:
        if (g_U30222 == 0)
        {
            g_U30222 = 284474691;
        }
        if (g_U30223 == 0)
        {
            g_U30223 = 563038535;
        }
        if (g_U30224 == 0)
        {
            g_U30224 = -1064645793;
        }
        if (g_U30225 == 0)
        {
            g_U30225 = -808865642;
        }
        break;
    }
    return;
}

int sub_15636(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        sub_14660( uParam0, 0 );
        if (((((HAVE_ANIMS_LOADED( "missnightclub" )) AND (HAVE_ANIMS_LOADED( "AMB@SMOKING_F" ))) AND (HAVE_ANIMS_LOADED( "AMB@SMOKING" ))) AND (HAS_MODEL_LOADED( -268530289 ))) AND (HAS_MODEL_LOADED( -2037134882 )))
        {
            switch (uParam0)
            {
                case 0:
                if ((((((((HAS_MODEL_LOADED( -1696530209 )) AND (HAS_MODEL_LOADED( 1756785265 ))) AND (HAS_MODEL_LOADED( 982077731 ))) AND (HAS_MODEL_LOADED( 1758965191 ))) AND (HAS_MODEL_LOADED( -844218756 ))) AND (HAS_MODEL_LOADED( -1684055465 ))) AND (HAS_SCRIPT_LOADED( "ambNightclubBM2" ))) AND (HAVE_ANIMS_LOADED( "missamb_bama" )))
                {
                    return 1;
                }
                break;
                case 1:
                if ((((((((((HAS_MODEL_LOADED( -1696530209 )) AND (HAS_MODEL_LOADED( 1756785265 ))) AND (HAS_MODEL_LOADED( g_U30218 ))) AND (HAS_MODEL_LOADED( g_U30219 ))) AND (HAS_MODEL_LOADED( g_U30220 ))) AND (HAS_MODEL_LOADED( g_U30221 ))) AND (HAS_MODEL_LOADED( 1429700748 ))) AND (HAS_MODEL_LOADED( -1446884113 ))) AND (HAS_SCRIPT_LOADED( "ambNightclubM92" ))) AND (HAVE_ANIMS_LOADED( "missamb_m9" )))
                {
                    return 1;
                }
                break;
                case 2:
                if ((((((((HAS_MODEL_LOADED( g_U30222 )) AND (HAS_MODEL_LOADED( g_U30223 ))) AND (HAS_MODEL_LOADED( g_U30224 ))) AND (HAS_MODEL_LOADED( g_U30225 ))) AND (HAS_MODEL_LOADED( 1662473323 ))) AND (HAS_SCRIPT_LOADED( "ambNightclubHC2" ))) AND (HAVE_ANIMS_LOADED( "missamb_herc_female" ))) AND (HAVE_ANIMS_LOADED( "missamb_herc_male" )))
                {
                    return 1;
                }
                break;
            }
        }
    }
    else
    {
        switch (uParam0)
        {
            case 0:
            if (((HAS_MODEL_LOADED( 1756785265 )) AND (HAS_MODEL_LOADED( 982077731 ))) AND (HAS_MODEL_LOADED( -844218756 )))
            {
                return 1;
            }
            break;
            case 1:
            if (((HAS_MODEL_LOADED( g_U30218 )) AND (HAS_MODEL_LOADED( g_U30220 ))) AND (HAS_MODEL_LOADED( -1446884113 )))
            {
                return 1;
            }
            break;
            case 2:
            if (((HAS_MODEL_LOADED( g_U30222 )) AND (HAS_MODEL_LOADED( g_U30224 ))) AND (HAS_MODEL_LOADED( 1662473323 )))
            {
                return 1;
            }
            break;
        }
        return 0;
    }
    PRINTSTRING( "HAVE_ASSETS_FOR_CLUB_LOADED - " );
    switch (uParam0)
    {
        case 0:
        PRINTSTRING( "BAHAMA MAMAS" );
        break;
        case 1:
        PRINTSTRING( "MAISONETTE 9" );
        break;
        case 2:
        PRINTSTRING( "HERCULES" );
        break;
    }
    PRINTSTRING( " - loading..." );
    PRINTNL();
    return 0;
}

int sub_16667(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -1255452397;
        case 3: return -789894171;
        case 2: return 1638119866;
        case 1: return -304802106;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -1660661558;
}

void sub_16829(unknown uParam0)
{
    REQUEST_MODEL( sub_16840( uParam0 ) );
    return;
}

int sub_16840(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -274568867;
        case 1: return 1662225612;
        case 2: return -448171135;
        case 3: return 1370299619;
        case 4: return -773750838;
        case 5: return 243666427;
        case 6: return -913924918;
        case 7: return 1905515841;
        case 9:
        SCRIPT_ASSERT( "Attempt to Return the model for the Reserve Strand 1 Character" );
        return 0;
        case 30: return -1949352469;
        case 31: return -401698464;
        case 32: return -487173849;
        case 33: return -407067034;
        case 13: return 714517099;
        case 14: return 653404222;
        case 15: return 1798610950;
    }
    sub_2479( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_17372(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_16840( uParam0 ) );
}

void sub_17631(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, boolean bParam9)
{
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;

    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar12 );
    if (DOES_VEHICLE_EXIST( uVar12 ))
    {
        if (NOT (IS_CAR_DEAD( uVar12 )))
        {
            if (iParam8 == 0)
            {
                sub_17703( uParam0, uParam3, uParam4, uParam7, bParam9 );
            }
            else if (NOT (IS_CAR_MODEL( uVar12, iParam8 )))
            {
                sub_17703( uParam0, uParam3, uParam4, uParam7, bParam9 );
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
                if (bParam9)
                {
                    CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, 1 );
                }
            }
        }
        else
        {
            CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
            if (bParam9)
            {
                CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, 1 );
            }
        }
    }
    else
    {
        CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
        if (bParam9)
        {
            CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, 1 );
        }
    }
    return;
}

void sub_17703(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8)
{
    unknown uVar11;
    boolean bVar12;

    bVar12 = false;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar11 );
    if (DOES_VEHICLE_EXIST( uVar11 ))
    {
        if (NOT (IS_CAR_DEAD( uVar11 )))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_1109(), uVar11 )))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( uVar11 )))
                {
                    SET_CAR_AS_MISSION_CAR( uVar11 );
                    bVar12 = true;
                }
            }
            else
            {
                uVar11 = nil;
            }
        }
    }
    CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
    if (bParam8)
    {
        CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, 1 );
    }
    if (DOES_VEHICLE_EXIST( uVar11 ))
    {
        if (NOT (IS_CAR_DEAD( uVar11 )))
        {
            if (LOCATE_CAR_3D( uVar11, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, uParam3, uParam3, 0 ))
            {
                CLEAR_AREA( uParam4._fU0, uParam4._fU4, uParam4._fU8, 5.00000000, 0 );
                SET_CAR_HEADING( uVar11, uParam7 );
                SET_CAR_COORDINATES( uVar11, uParam4._fU0, uParam4._fU4, uParam4._fU8 );
                sub_17995( uVar11 );
                sub_18073( uVar11 );
            }
        }
    }
    if (bVar12)
    {
        if (DOES_VEHICLE_EXIST( uVar11 ))
        {
            sub_18208( uVar11 );
        }
    }
    return;
}

void sub_17995(unknown uParam0)
{
    unknown uVar3;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_MODEL( uParam0, ref uVar3 );
        if ((IS_THIS_MODEL_A_CAR( uVar3 )) || (IS_THIS_MODEL_A_HELI( uVar3 )))
        {
            CLOSE_ALL_CAR_DOORS( uParam0 );
        }
    }
    return;
}

int sub_18073(unknown uParam0)
{
    unknown uVar3;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            GET_CAR_MODEL( uParam0, ref uVar3 );
            if ((IS_THIS_MODEL_A_CAR( uVar3 )) || (IS_THIS_MODEL_A_BIKE( uVar3 )))
            {
                if (SET_CAR_ON_GROUND_PROPERLY( uParam0 ))
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void sub_18208(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_18485(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_16667( uParam0 );
    return sub_18516( uParam5, uVar8, uParam1, uParam4, uParam0 );
}

int sub_18516(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SUPPRESS_CAR_MODEL( uParam1 );
    REQUEST_MODEL( uParam1 );
    if (NOT (HAS_MODEL_LOADED( uParam1 )))
    {
        REQUEST_MODEL( uParam1 );
        return 0;
    }
    CLEAR_AREA( uParam2._fU0, uParam2._fU4, uParam2._fU8, 5.00000000, 0 );
    CREATE_CAR( uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam5 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_18648( (uParam0^), uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_18648(unknown uParam0, int iParam1)
{
    if (iParam1 == 8)
    {
        return;
    }
    switch (iParam1)
    {
        case 0:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_1109() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_1109() )))
            {
                PRINTSTRING( "KGM.............Retune TONY car to K109_THE_STUDIO\n" );
                RETUNE_RADIO_TO_STATION_NAME( "K109_THE_STUDIO" );
            }
        }
        break;
        case 3:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 0 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 0, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 3.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_1109() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_1109() )))
            {
                PRINTSTRING( "KGM.............Retune DOMINICANS car to SAN_JUAN_SOUNDS\n" );
                RETUNE_RADIO_TO_STATION_NAME( "SAN_JUAN_SOUNDS" );
            }
        }
        break;
        case 2:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 134, 136 );
        SET_EXTRA_CAR_COLOURS( uParam0, 134, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_1109() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_1109() )))
            {
                PRINTSTRING( "KGM.............Retune YUSUF car to BEAT\n" );
                RETUNE_RADIO_TO_STATION_NAME( "BEAT_95" );
            }
        }
        break;
        case 1:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 45, 45 );
        SET_EXTRA_CAR_COLOURS( uParam0, 35, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_1109() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_1109() )))
            {
                PRINTSTRING( "KGM.............Retune MORI car to DANCE_ROCK\n" );
                RETUNE_RADIO_TO_STATION_NAME( "DANCE_ROCK" );
            }
        }
        break;
    }
    return;
}

void sub_19845(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_19856( uParam0 ), sub_16840( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_19902( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_19936( uParam0, (uParam1^) );
    return;
}

int sub_19856(unknown uParam0)
{
    return 25;
}

void sub_19902(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_19936(unknown uParam0, unknown uParam1)
{
    sub_19948( ref uParam1, uParam0 );
    return;
}

void sub_19948(unknown uParam0, int iParam1)
{
    sub_19959( uParam0 );
    if (iParam1 == 37)
    {
        sub_20061( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_20645( (uParam0^), iParam1, g_U42825[iParam1] );
    }
    return;
}

void sub_19959(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_20061(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 1, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_20645(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        sub_20061( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 1:
        sub_20061( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 31:
        sub_20061( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
        return;
        case 7:
        sub_20061( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_20061( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_20955(int iParam0, unknown uParam1, boolean bParam2, unknown uParam3, boolean bParam4)
{
    boolean bVar7;

    bVar7 = false;
    CLEAR_PRINTS();
    CLEAR_HELP();
    SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_GAME_CAM_PITCH( 0.00000000 );
    SET_CAM_BEHIND_PED( sub_1109() );
    if (NOT bParam4)
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1109(), 0 );
    }
    if ((sub_21046()) || (uParam3))
    {
        bVar7 = true;
    }
    sub_21311();
    if (bVar7)
    {
        if (((iParam0 > 0) AND (uParam1)) AND (NOT IS_SCREEN_FADED_OUT()))
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, iParam0 );
        }
        else
        {
            sub_21448();
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        }
    }
    else
    {
        SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
    }
    sub_21712();
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_SCREEN_FADED_OUT())
    {
        if (NOT bParam2)
        {
            DO_SCREEN_FADE_IN( iParam0 );
        }
        else
        {
            DO_SCREEN_FADE_IN_UNHACKED( iParam0 );
        }
    }
    DISPLAY_RADAR( 1 );
    return;
}

void sub_21046()
{
    int Result;

    Result = 0;
    if (DOES_CAM_EXIST( l_U227 ))
    {
        SET_CAM_ACTIVE( l_U227, 0 );
        SET_CAM_PROPAGATE( l_U227, 0 );
        DESTROY_CAM( l_U227 );
        Result = 1;
    }
    if (DOES_CAM_EXIST( l_U228 ))
    {
        SET_CAM_ACTIVE( l_U228, 0 );
        SET_CAM_PROPAGATE( l_U228, 0 );
        DESTROY_CAM( l_U228 );
        Result = 1;
    }
    if (DOES_CAM_EXIST( l_U229 ))
    {
        SET_CAM_ACTIVE( l_U229, 0 );
        SET_CAM_PROPAGATE( l_U229, 0 );
        DESTROY_CAM( l_U229 );
        Result = 1;
    }
    if (DOES_CAM_EXIST( l_U230 ))
    {
        SET_CAM_ACTIVE( l_U230, 0 );
        SET_CAM_PROPAGATE( l_U230, 0 );
        DESTROY_CAM( l_U230 );
        Result = 1;
    }
    return Result;
}

void sub_21311()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_PLAYER_PLAYING( sub_4050() ))
    {
        if (IS_SCREEN_FADED_OUT())
        {
            GET_CHAR_COORDINATES( sub_1109(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
            WAIT( 0 );
        }
    }
    return;
}

void sub_21448()
{
    unknown uVar2;
    unknown uVar3;

    if (IS_CHAR_IN_ANY_CAR( sub_1109() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1109(), ref uVar2 );
        if (DOES_VEHICLE_EXIST( uVar2 ))
        {
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                GET_CAR_MODEL( uVar2, ref uVar3 );
                if (IS_THIS_MODEL_A_CAR( uVar3 ))
                {
                    SHUT_CAR_DOOR( uVar2, 0 );
                    SHUT_CAR_DOOR( uVar2, 1 );
                    SHUT_CAR_DOOR( uVar2, 2 );
                    SHUT_CAR_DOOR( uVar2, 3 );
                }
            }
        }
    }
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
    if (DOES_VEHICLE_EXIST( uVar2 ))
    {
        if (NOT (IS_CAR_DEAD( uVar2 )))
        {
            GET_CAR_MODEL( uVar2, ref uVar3 );
            if (IS_THIS_MODEL_A_CAR( uVar3 ))
            {
                SHUT_CAR_DOOR( uVar2, 0 );
                SHUT_CAR_DOOR( uVar2, 1 );
                SHUT_CAR_DOOR( uVar2, 2 );
                SHUT_CAR_DOOR( uVar2, 3 );
            }
        }
    }
    return;
}

void sub_21712()
{
    if (l_U224)
    {
        sub_21046();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        sub_21750( ref l_U221 );
        l_U224 = 0;
    }
    return;
}

void sub_21750(unknown uParam0)
{
    SET_USE_HIGHDOF( 0 );
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_22217(unknown uParam0)
{
    sub_22228( uParam0 );
    if (g_U43137 == 4)
    {
        sub_22296();
    }
    if (g_U43137 == 10)
    {
        sub_22296();
    }
    if (g_U43137 == 7)
    {
        sub_22296();
    }
    return;
}

void sub_22228(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_HEALTH( uParam0, ref g_U43510 );
    }
    g_U43499 = 1;
    return;
}

void sub_22296()
{
    GET_GAME_TIMER( ref g_U43504 );
    g_U43497 = 1;
    return;
}

int sub_22472(boolean bParam0)
{
    if (((((IS_MESSAGE_BEING_DISPLAYED()) || (((sub_22488()) AND (NOT bParam0)) || ((sub_22542()) AND (bParam0)))) || (sub_22571())) || (IS_SCRIPTED_CONVERSATION_ONGOING())) || (sub_22630()))
    {
        return 1;
    }
    return 0;
}

int sub_22488()
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        return 1;
    }
    return 0;
}

void sub_22542()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_22571()
{
    if ((g_U95._fU0 == 1007) || (g_U95._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_22630()
{
    int iVar2;
    int iVar3;

    GET_GAME_TIMER( ref iVar3 );
    iVar2 = iVar3 - l_U206;
    if (iVar2 < 35)
    {
        return 1;
    }
    return 0;
}

void sub_22725(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_22748( uParam0, ref l_U71._fU0, uParam1, uParam2, uParam3 );
}

void sub_22748(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_22802( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_22802(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_22824( iParam1 )))
    {
        return 0;
    }
    l_U71._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_23516( ref g_U8868, ref l_U71 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_22824(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_22901( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_22901( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_22901( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_22901(unknown uParam0)
{
    return;
}

void sub_23516(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

int sub_23721(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (NOT (CHECK_STUCK_TIMER( uParam0, 3, 60000 )))
        {
            if (NOT (CHECK_STUCK_TIMER( uParam0, 2, 30000 )))
            {
                if (NOT (CHECK_STUCK_TIMER( uParam0, 1, 40000 )))
                {
                    if (NOT (CHECK_STUCK_TIMER( uParam0, 0, 5000 )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_23847(unknown uParam0)
{
    if ((sub_23858( uParam0 )) > g_U43138[g_U43137]._fU12)
    {
        g_U43564 = 0;
    }
    else
    {
        g_U43564 = 1;
    }
    if (g_U43602 == 1)
    {
        g_U43613 = sub_24297();
        g_U43602 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if ((sub_23858( uParam0 )) < g_U43613)
            {
                g_U43577 = 1;
            }
            else
            {
                g_U43577 = 0;
            }
        }
        else
        {
            g_U43577 = 0;
        }
    }
    else
    {
        g_U43577 = 0;
    }
    if (g_U43137 == 4)
    {
        if ((FLOOR( (TO_FLOAT( sub_24895() )) / 1000 )) <= (FLOOR( (TO_FLOAT( g_U43138[g_U43137]._fU44 )) / 1000 )))
        {
            g_U43570 = 1;
        }
        else
        {
            g_U43570 = 0;
        }
        if (g_U43601 == 1)
        {
            g_U43615 = sub_25119();
            g_U43601 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((FLOOR( (TO_FLOAT( sub_24895() )) / 1000 )) < (FLOOR( (TO_FLOAT( g_U43615 )) / 1000 )))
                {
                    g_U43576 = 1;
                }
                else
                {
                    g_U43576 = 0;
                }
            }
            else
            {
                g_U43576 = 0;
            }
        }
        else
        {
            g_U43576 = 0;
        }
    }
    if (g_U43137 == 10)
    {
        if ((FLOOR( (TO_FLOAT( sub_24895() )) / 1000 )) <= (FLOOR( (TO_FLOAT( g_U43138[g_U43137]._fU44 )) / 1000 )))
        {
            g_U43570 = 1;
        }
        else
        {
            g_U43570 = 0;
        }
        if (g_U43601 == 1)
        {
            g_U43615 = sub_25119();
            g_U43601 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((FLOOR( (TO_FLOAT( sub_24895() )) / 1000 )) < (FLOOR( (TO_FLOAT( g_U43615 )) / 1000 )))
                {
                    g_U43576 = 1;
                }
                else
                {
                    g_U43576 = 0;
                }
            }
            else
            {
                g_U43576 = 0;
            }
        }
        else
        {
            g_U43576 = 0;
        }
    }
    if (g_U43137 == 7)
    {
        if ((FLOOR( (TO_FLOAT( sub_24895() )) / 1000 )) <= (FLOOR( (TO_FLOAT( g_U43138[g_U43137]._fU44 )) / 1000 )))
        {
            g_U43570 = 1;
        }
        else
        {
            g_U43570 = 0;
        }
        if (g_U43601 == 1)
        {
            g_U43615 = sub_25119();
            g_U43601 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((FLOOR( (TO_FLOAT( sub_24895() )) / 1000 )) < (FLOOR( (TO_FLOAT( g_U43615 )) / 1000 )))
                {
                    g_U43576 = 1;
                }
                else
                {
                    g_U43576 = 0;
                }
            }
            else
            {
                g_U43576 = 0;
            }
        }
        else
        {
            g_U43576 = 0;
        }
    }
    if ((sub_26226( uParam0 )) >= g_U43138[g_U43137]._fU24)
    {
        g_U43565 = 1;
    }
    else
    {
        g_U43565 = 0;
    }
    if (g_U43606 == 1)
    {
        g_U43618 = sub_26424();
        g_U43606 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if ((sub_26226( uParam0 )) > g_U43618)
            {
                g_U43581 = 1;
            }
            else
            {
                g_U43581 = 0;
            }
        }
        else
        {
            g_U43581 = 0;
        }
    }
    else
    {
        g_U43581 = 0;
    }
    return;
}

void sub_23858(unknown uParam0)
{
    if (g_U43499 == 1)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_CAR_HEALTH( uParam0, ref g_U43511 );
        }
        g_U43512 = g_U43510 - g_U43511;
        g_U43559 = ((TO_FLOAT( g_U43512 )) / (TO_FLOAT( g_U43510 ))) * 100;
    }
    g_U43559 = sub_23975( uParam0 );
    g_U43559 = TO_FLOAT( FLOOR( g_U43559 ) );
    if (g_U43559 < 0)
    {
        g_U43559 = 0;
    }
    return g_U43559;
}

float sub_23975(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float Result;
    unknown uVar7;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_HEALTH( uParam0, ref uVar7 );
        uVar3 = sub_24021( 100, TO_FLOAT( uVar7 ) );
        uVar4 = GET_PETROL_TANK_HEALTH( uParam0 );
        uVar5 = GET_ENGINE_HEALTH( uParam0 );
        Result = sub_24085( uVar3, sub_24085( uVar4, uVar5 ) );
        Result /= 10.00000000;
        Result = 100 - Result;
        return Result;
    }
    return 100.00000000;
}

void sub_24021(float Result, float fParam1)
{
    if (fParam1 < Result)
    {
        return Result;
    }
    return fParam1;
}

void sub_24085(float Result, float fParam1)
{
    if (Result < fParam1)
    {
        return Result;
    }
    return fParam1;
}

int sub_24297()
{
    if (g_U43137 == 0)
    {
        return GET_INT_STAT( 476 );
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        return GET_INT_STAT( 490 );
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 559 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 526 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        return GET_INT_STAT( 513 );
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 611 );
    }
    if (g_U43137 == 14)
    {
        return GET_INT_STAT( 540 );
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

void sub_24895()
{
    if (g_U43497 == 1)
    {
        GET_GAME_TIMER( ref g_U43505 );
        g_U43506 = g_U43505 - g_U43504;
    }
    if (g_U43506 > 18000000)
    {
        g_U43506 = 18000000;
    }
    if (g_U43506 < 0)
    {
        g_U43506 = 0;
    }
    return g_U43506;
}

int sub_25119()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        return GET_INT_STAT( 499 );
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 508 );
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        return GET_INT_STAT( 517 );
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

void sub_26226(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        fVar3 = (fVar3 * 2.23693600) * 1.30000000;
        if (fVar3 > g_U43558)
        {
            g_U43558 = fVar3;
            g_U43558 = (g_U43558 * 2.23693600) * 1.30000000;
        }
    }
    if (g_U43558 < 0)
    {
        g_U43558 = 0;
    }
    return g_U43558;
}

int sub_26424()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return sub_26569( GET_INT_STAT( 530 ) );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        return sub_26569( GET_INT_STAT( 539 ) );
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_26569(int iParam0)
{
    return iParam0 / 1670;
}

void sub_27073(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15)
{
    return sub_27133( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, 0, uParam8, uParam9, uParam10, uParam10, uParam10, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15 );
}

int sub_27133(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20)
{
    int iVar23;
    int I;
    unknown uVar25;

    l_U210[0] = uParam7;
    l_U210[1] = uParam8;
    l_U210[2] = uParam9;
    l_U209 = uParam7;
    sub_27181();
    sub_27470();
    sub_28350();
    if (IS_VEH_DRIVEABLE( uParam10 ))
    {
        if (sub_28548( l_U210[0], l_U210[1], l_U210[2], uParam12, uParam13, uParam14, uParam15, l_U204, uParam17, uParam10, 0, 0 ))
        {
            if (IS_SCREEN_FADED_IN())
            {
                if (IS_CHAR_IN_CAR( sub_1109(), uParam10 ))
                {
                    l_U174 = 1;
                    l_U185 = 1;
                    sub_29096( uParam16 );
                    sub_29096( uParam20 );
                    if ((uParam18) AND (IS_WANTED_LEVEL_GREATER( sub_4050(), 0 )))
                    {
                        if ((DOES_BLIP_EXIST( l_U201 )) || (DOES_BLIP_EXIST( l_U196 )))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U201 );
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U196 );
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 1" );
                            PRINTNL();
                            sub_29096( uParam11 );
                        }
                        if (((NOT (sub_22472( 0 ))) AND (NOT sub_34478())) AND (NOT l_U170))
                        {
                            sub_28976( uParam19, 0 );
                            l_U214 = uParam19;
                            l_U170 = 1;
                            l_U171 = 0;
                            if (NOT (IS_CHAR_INJURED( l_U210[0] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U210[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                            }
                        }
                    }
                    else if (l_U170)
                    {
                        sub_29096( uParam19 );
                        l_U170 = 0;
                        l_U171 = 1;
                    }
                    if (l_U171)
                    {
                        if (NOT (sub_22472( 0 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U210[0] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U210[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                            }
                            l_U171 = 0;
                        }
                    }
                    if (LOCATE_CHAR_IN_CAR_3D( sub_1109(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
                    {
                        iVar23 = 1;
                        for ( I = 0; I < 3; I++ )
                        {
                            if (DOES_CHAR_EXIST( l_U210[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U210[I], uParam10 )))
                                {
                                    iVar23 = 0;
                                }
                            }
                        }
                        if ((iVar23) AND (sub_34877()))
                        {
                            sub_29096( uParam11 );
                            sub_29096( uParam12 );
                            sub_29096( uParam13 );
                            sub_29096( uParam14 );
                            sub_29096( uParam15 );
                            sub_29096( uParam19 );
                            sub_3700();
                            for ( I = 0; I < 3; I++ )
                            {
                                if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                                {
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U210[I], 0 );
                                }
                            }
                            return 1;
                        }
                    }
                    else
                    {
                        iVar23 = 1;
                        for ( I = 0; I < 3; I++ )
                        {
                            if (DOES_CHAR_EXIST( l_U210[I] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U210[I], uParam10 )))
                                    {
                                        iVar23 = 0;
                                    }
                                }
                            }
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U201 )))
                        {
                            if (DOES_BLIP_EXIST( l_U196 ))
                            {
                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U196 );
                            }
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 2" );
                            PRINTNL();
                            ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U201 );
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - add blip 1" );
                            PRINTNL();
                            sub_31083( l_U201 );
                            if (l_U189)
                            {
                                SHOW_BLIP_ON_ALTIMETER( l_U201, 1 );
                            }
                        }
                        if (NOT (sub_22472( 0 )))
                        {
                            if (NOT l_U172)
                            {
                                sub_28976( uParam11, 0 );
                                l_U172 = 1;
                            }
                        }
                    }
                }
                else if (((uParam18) AND (IS_WANTED_LEVEL_GREATER( sub_4050(), 0 ))) AND (NOT l_U185))
                {
                    sub_29096( uParam16 );
                    sub_29096( uParam20 );
                    if ((DOES_BLIP_EXIST( l_U201 )) || (DOES_BLIP_EXIST( l_U196 )))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U201 );
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U196 );
                        PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 3" );
                        PRINTNL();
                        sub_29096( uParam11 );
                    }
                    if (((NOT (sub_22472( 0 ))) AND (NOT sub_34478())) AND (NOT l_U170))
                    {
                        sub_28976( uParam19, 0 );
                        l_U214 = uParam19;
                        l_U170 = 1;
                        l_U171 = 0;
                        if (NOT (IS_CHAR_INJURED( l_U210[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U210[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                        }
                    }
                }
                else if (l_U170)
                {
                    sub_29096( uParam19 );
                    l_U170 = 0;
                    l_U171 = 1;
                }
                if (l_U171)
                {
                    if (NOT (sub_22472( 0 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U210[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U210[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                        }
                        l_U171 = 0;
                    }
                }
                if (NOT (DOES_BLIP_EXIST( l_U196 )))
                {
                    if (DOES_BLIP_EXIST( l_U201 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U201 );
                        sub_29096( uParam11 );
                    }
                    ADD_BLIP_FOR_CAR( uParam10, ref l_U196 );
                    CHANGE_BLIP_DISPLAY( l_U196, 2 );
                    PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - add blip 2" );
                    PRINTNL();
                    SET_BLIP_AS_FRIENDLY( l_U196, 1 );
                    if (NOT l_U175)
                    {
                        sub_31083( l_U196 );
                    }
                }
                if (NOT (sub_22472( 0 )))
                {
                    if (NOT l_U174)
                    {
                        sub_28976( uParam16, 0 );
                        l_U174 = 1;
                    }
                    else if (l_U185)
                    {
                        if (NOT (IS_STRING_NULL( uParam20 )))
                        {
                            if (NOT l_U175)
                            {
                                sub_28976( uParam20, 0 );
                                l_U175 = 1;
                            }
                        }
                        else if (NOT l_U175)
                        {
                            sub_28976( uParam16, 0 );
                            l_U175 = 1;
                        }
                    }
                };;;
            }
        }
        else if (l_U170)
        {
            l_U170 = 0;
        }
        if (DOES_BLIP_EXIST( l_U201 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U201 );
            sub_29096( uParam11 );
        }
        if (DOES_BLIP_EXIST( l_U196 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U196 );
            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 3" );
            PRINTNL();
            sub_29096( uParam16 );
        }
    }
    else
    {
        SCRIPT_ASSERT( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - check vehicle is alive before calling this." );
        return 0;
    }
    sub_36847( uParam0, uParam1, uParam2, 0, uParam10 );
    sub_39015( uParam0, uParam1, uParam2 );
    l_U187 = 0;
    l_U188 = 0;
    l_U189 = 0;
    return 0;
}

void sub_27181()
{
    int I;

    for ( I = 0; I < l_U210; I++ )
    {
        if (DOES_CHAR_EXIST( l_U210[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U210[I] )))
            {
                if (((IS_CHAR_SITTING_IN_ANY_CAR( l_U210[I] )) AND (sub_27274( l_U210[I] ))) AND (sub_22488()))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( l_U210[I], 1 );
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_4050() ))
    {
        if (NOT (IS_CHAR_INJURED( sub_1109() )))
        {
            if (((IS_CHAR_SITTING_IN_ANY_CAR( sub_1109() )) AND (sub_27274( sub_1109() ))) AND (sub_22488()))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_1109(), 1 );
            }
        }
    }
    return;
}

int sub_27274(int iParam0)
{
    int I;

    for ( I = 0; I < 9; I++ )
    {
        if (l_U71._fU16[I]._fU0 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_27470()
{
    if (NOT l_U183)
    {
        l_U218 = CREATE_WIDGET_GROUP( "Locates Header" );
        ADD_WIDGET_TOGGLE( "bPrintedLoseWantedLevel", ref l_U170 );
        ADD_WIDGET_TOGGLE( "bPlayLostCopsSpeech", ref l_U171 );
        ADD_WIDGET_TOGGLE( "bInitialGodTextPrinted", ref l_U172 );
        ADD_WIDGET_TOGGLE( "bPrintedGetACar", ref l_U173 );
        ADD_WIDGET_TOGGLE( "bPrintedGetBackInCar", ref l_U175 );
        ADD_WIDGET_TOGGLE( "bPrintedGetInCar", ref l_U174 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupAllBuddysText", ref l_U176 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[0]", ref l_U177[0] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[1]", ref l_U177[1] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[2]", ref l_U177[2] );
        ADD_WIDGET_TOGGLE( "bUseSpecificJSkipCoords", ref l_U181 );
        ADD_WIDGET_TOGGLE( "bDontDoSafeForCutsceneCheck", ref l_U182 );
        ADD_WIDGET_FLOAT_SLIDER( "fClearCarDistance", ref l_U203, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fBuddyJoinDistance", ref l_U204, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fSkipHeading", ref l_U205, 0.00000000, 360.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.x", ref l_U215._fU0, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.y", ref l_U215._fU4, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.z", ref l_U215._fU8, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_TOGGLE( "bToldPlayerToFindCarWithMoreSeats", ref l_U184 );
        ADD_WIDGET_TOGGLE( "bHasBeenInCar", ref l_U185 );
        END_WIDGET_GROUP();
        l_U183 = 1;
    }
    return;
}

void sub_28350()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_4050() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1109(), 0 );
    }
    for ( I = 0; I < l_U210; I++ )
    {
        if (DOES_CHAR_EXIST( l_U210[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U210[I] )))
            {
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U210[I], 0 );
            }
        }
    }
    return;
}

int sub_28548(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, int iParam9, unknown uParam10, unknown uParam11)
{
    int I;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int[3] iVar20;
    boolean bVar24;
    boolean bVar25;
    int iVar26;
    int iVar27;
    unknown[3] uVar28;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;

    array(ref iVar20, 3);
    l_U210[0] = uParam0;
    l_U210[1] = uParam1;
    l_U210[2] = uParam2;
    l_U209 = uParam0;
    array(ref uVar28, 3);
    uVar28[0] = uParam3;
    uVar28[1] = uParam4;
    uVar28[2] = uParam5;
    iVar18 = 1;
    iVar15 = 0;
    iVar16 = 0;
    iVar20[0] = 0;
    iVar20[1] = 0;
    iVar20[2] = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U210[I] )))
        {
            iVar16++;
        }
    }
    if (((NOT sub_28719()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_1109() ))) AND (NOT (DOES_VEHICLE_EXIST( iParam9 ))))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1109(), ref iVar26 );
        if (IS_VEH_DRIVEABLE( iVar26 ))
        {
            if (NOT l_U190)
            {
                sub_28976( "MORE_SEATS", 0 );
                l_U190 = 1;
            }
            bVar25 = true;
        }
    }
    else
    {
        bVar25 = false;
        l_U190 = 0;
        sub_29096( "MORE_SEATS" );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U210[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U210[I] )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U210[I], sub_29206() )))
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U210[I], 1 );
                }
                else
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U210[I], 0 );
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1109() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1109(), ref iVar26 );
                    if (IS_VEH_DRIVEABLE( iVar26 ))
                    {
                        if (IS_GROUP_MEMBER( l_U210[I], sub_29206() ))
                        {
                            if ((NOT sub_28719()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_1109() )))
                            {
                                if (NOT (sub_29408( l_U210[I] )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U210[I] );
                                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 1" );
                                    PRINTNL();
                                }
                            }
                        }
                    }
                }
                bVar24 = true;
                if (NOT (IS_GROUP_MEMBER( l_U210[I], sub_29206() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U210[I] ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U210[I], ref iVar26 );
                        if (IS_VEH_DRIVEABLE( iParam9 ))
                        {
                            if (NOT (iVar26 == iParam9))
                            {
                                if (NOT (IS_CAR_DEAD( iVar26 )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_1109(), iVar26 )))
                                    {
                                        TASK_LEAVE_CAR_IMMEDIATELY( l_U210[I], iVar26 );
                                        PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - Buddy told to leave car" );
                                        PRINTNL();
                                        bVar24 = false;
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_GROUP_MEMBER( l_U210[I], sub_29206() ))
                {
                    if (sub_29969())
                    {
                        if (l_U192[I])
                        {
                            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U210[I], -1 );
                            l_U192[I] = 0;
                        }
                    }
                    else if (NOT l_U192[I])
                    {
                        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U210[I], 2 );
                        l_U192[I] = 1;
                    }
                }
                if (((NOT (IS_GROUP_MEMBER( l_U210[I], sub_29206() ))) AND (NOT (sub_30151( l_U210[I], iParam9 )))) AND (NOT (sub_30247( l_U210[I], iParam9 ))))
                {
                    if (sub_30360( l_U210[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U210[I], sub_29206() )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U210[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U210[I] );
                                PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 1" );
                                PRINTNL();
                            }
                            SET_GROUP_MEMBER( sub_29206(), l_U210[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 1" );
                            PRINTNL();
                            bVar24 = false;
                        }
                    }
                    if (bVar24)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U197[I] )))
                        {
                            GET_GAME_TIMER( ref l_U207 );
                            ADD_BLIP_FOR_CHAR( l_U210[I], ref l_U197[I] );
                            CHANGE_BLIP_DISPLAY( l_U197[I], 2 );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 1" );
                            PRINTNL();
                            SET_BLIP_AS_FRIENDLY( l_U197[I], 1 );
                            if (bParam8)
                            {
                                sub_31083( l_U197[I] );
                            }
                        }
                    }
                    iVar18 = 0;
                }
                else if (DOES_BLIP_EXIST( l_U197[I] ))
                {
                    if (((sub_31202( l_U210[I] )) || (sub_30151( l_U210[I], iParam9 ))) || (uParam11))
                    {
                        if (DOES_BLIP_EXIST( l_U197[I] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U197[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 1" );
                            PRINTNL();
                            sub_29096( uVar28[I] );
                            iVar19 = 1;
                        }
                    }
                    else if (bParam8)
                    {
                        sub_31083( l_U197[I] );
                    }
                    iVar18 = 0;;
                }
                else if (IS_VEH_DRIVEABLE( iParam9 ))
                {
                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U210[I], iParam9 )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U210[I], iParam9, 20.00000000, 20.00000000, 5.00000000, 0 )) AND (NOT l_U187))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U210[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U210[I], iParam9 )))
                                {
                                    if (NOT (sub_31202( l_U210[I] )))
                                    {
                                        if (sub_31810( l_U210[I] ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U210[I], 31, ref iVar27 );
                                            if (iVar27 == 7)
                                            {
                                                TASK_LEAVE_ANY_CAR( l_U210[I] );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_1109(), iParam9 )))
                            {
                                SET_FORCE_PLAYER_TO_ENTER_THROUGH_DIRECT_DOOR( sub_1109(), 1 );
                            }
                            if (IS_GROUP_MEMBER( l_U210[I], sub_29206() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U210[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 2" );
                                PRINTNL();
                            }
                            GET_SCRIPT_TASK_STATUS( l_U210[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U210[I], 1 );
                                if (l_U186)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                }
                                TASK_ENTER_CAR_AS_PASSENGER( l_U210[I], iParam9, -1, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U210[I], 0 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - told to enter car as passenger" );
                                PRINTNL();
                            }
                            else if (IS_CHAR_IN_CAR( sub_1109(), iParam9 ))
                            {
                                ADD_BLIP_FOR_CHAR( l_U210[I], ref l_U197[I] );
                                CHANGE_BLIP_DISPLAY( l_U197[I], 2 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 2" );
                                PRINTNL();
                                SET_BLIP_AS_FRIENDLY( l_U197[I], 1 );
                                iVar18 = 0;
                            };;;
                        }
                        else if (NOT (IS_GROUP_MEMBER( l_U210[I], sub_29206() )))
                        {
                            if (sub_30360( l_U210[I], uParam7, uParam10 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U210[I], 11, ref iVar27 );
                                if (iVar27 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U210[I] );
                                    PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 2" );
                                    PRINTNL();
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U210[I], 0 );
                                SET_GROUP_MEMBER( sub_29206(), l_U210[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 2" );
                                PRINTNL();
                            }
                        }
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( sub_1109(), iParam9 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U210[I], sub_29206() )))
                        {
                            SET_GROUP_MEMBER( sub_29206(), l_U210[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 3" );
                            PRINTNL();
                        }
                    }
                    else if (IS_GROUP_MEMBER( l_U210[I], sub_29206() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U210[I] );
                        PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 3" );
                        PRINTNL();
                    };;;
                };;;
            }
            else if (DOES_BLIP_EXIST( l_U197[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U197[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 2" );
                PRINTNL();
                sub_29096( uVar28[I] );
                iVar19 = 1;
            }
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U197[I] ))
        {
            iVar20[I] = 1;
            iVar15++;
        }
    }
    if (NOT (sub_22472( 0 )))
    {
        if (iVar15 > 0)
        {
            for ( I = 0; I < 3; I++ )
            {
                if (iVar20[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                    {
                        if ((sub_29408( l_U210[I] )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U210[I], sub_1109(), 40.00000000, 40.00000000, 40.00000000, 0 )))
                        {
                            iVar15--;
                            iVar20[I] = 0;
                        }
                    }
                }
            }
        }
        GET_GAME_TIMER( ref iVar17 );
        if (((iVar17 - l_U207) > 1500) || (iVar16 == 1))
        {
            if (iVar15 > 0)
            {
                if (l_U208 < iVar15)
                {
                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - printing 'pickup' text" );
                    PRINTNL();
                    PRINTSTRING( "iPrintedMissingBuddiesNumber = " );
                    PRINTINT( l_U208 );
                    PRINTNL();
                    PRINTSTRING( "iBuddiesMissing = " );
                    PRINTINT( iVar15 );
                    PRINTNL();
                    PRINTSTRING( "iTotalBuddies = " );
                    PRINTINT( iVar16 );
                    PRINTNL();
                    if ((iVar15 == iVar16) AND (iVar16 > 1))
                    {
                        if ((NOT l_U176) AND (NOT (l_U208 == iVar15)))
                        {
                            sub_28976( uParam6, 0 );
                            l_U176 = 1;
                            l_U208 = iVar15;
                        }
                    }
                    else
                    {
                        for ( I = 0; I < 3; I++ )
                        {
                            if (iVar20[I])
                            {
                                if ((NOT l_U177[I]) AND (NOT (l_U208 == iVar15)))
                                {
                                    sub_28976( uVar28[I], 0 );
                                    l_U177[I] = 1;
                                    l_U208 = iVar15;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U208 = 0;
            }
        }
    }
    l_U186 = 0;
    if ((iVar18) AND (NOT bVar25))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U197[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U197[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 3" );
                PRINTNL();
                sub_29096( uVar28[I] );
            }
        }
        sub_29096( "MORE_SEATS" );
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_1109() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1109(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                {
                    SET_CHAR_COORDINATES( l_U210[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_28719()
{
    unknown uVar2;

    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1109() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1109(), ref uVar2 );
        if (sub_28760( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_28760(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        iVar3 = 0;
        for ( I = 0; I < l_U210; I++ )
        {
            if (DOES_CHAR_EXIST( l_U210[I] ))
            {
                iVar3++;
            }
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
        if (iVar4 >= iVar3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_28976(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (NOT (IS_STRING_NULL( uParam0 )))
        {
            if (NOT (COMPARE_STRING( uParam0, "" )))
            {
                PRINT_NOW( uParam0, 7500, 1 );
            }
        }
    }
    GET_GAME_TIMER( ref l_U206 );
    return;
}

void sub_29096(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

void sub_29206()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_29408(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_4050() ))
    {
        GET_CAR_CHAR_IS_USING( sub_1109(), ref iVar3 );
        if (IS_VEH_DRIVEABLE( iVar3 ))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
                if (IS_VEH_DRIVEABLE( iVar4 ))
                {
                    if (iVar3 == iVar4)
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1109(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( uParam0, iVar4, 20.00000000, 20.00000000, 20.00000000, 0 )))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_29969()
{
    unknown uVar2;

    GET_CAR_CHAR_IS_USING( sub_1109(), ref uVar2 );
    if (sub_28760( uVar2 ))
    {
        return 1;
    }
    return 0;
}

int sub_30151(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_VEHICLE_EXIST( uParam1 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_30247(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_29206() )))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
            if (IS_VEH_DRIVEABLE( iParam1 ))
            {
                if (iVar4 == iParam1)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_30360(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                if (IS_VEH_DRIVEABLE( uVar5 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_1109(), uVar5 ))
                    {
                        if (sub_28719())
                        {
                            return 1;
                        }
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1109(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1109(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (NOT bParam2)
            {
                if (sub_29969())
                {
                    return 1;
                }
                else
                {
                    GET_CAR_CHAR_IS_USING( sub_1109(), ref uVar5 );
                    if (NOT (DOES_VEHICLE_EXIST( uVar5 )))
                    {
                        return 1;
                    }
                }
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_31083(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        if (DOES_BLIP_EXIST( l_U202 ))
        {
            SET_ROUTE( l_U202, 0 );
        }
        l_U202 = uParam0;
        SET_ROUTE( uParam0, 1 );
    }
    return;
}

int sub_31202(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1109() ))
        {
            if (sub_31250( sub_1109(), uParam0 ))
            {
                SET_GROUP_SEPARATION_RANGE( sub_29206(), 40.00000000 );
                return 1;
            }
        }
        else if (IS_GROUP_MEMBER( uParam0, sub_29206() ))
        {
            SET_GROUP_SEPARATION_RANGE( sub_29206(), 40.00000000 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_31250(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_31810(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if ((fVar3 > -0.50000000) AND (fVar3 < 0.50000000))
        {
            return 1;
        }
    }
    return 0;
}

int sub_34478()
{
    if (NOT (IS_CHAR_INJURED( l_U209 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U209 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_34877()
{
    int iVar2;

    iVar2 = 1;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1109() ))
    {
        if ((IS_CHAR_ON_ANY_BIKE( sub_1109() )) || (IS_CHAR_IN_ANY_HELI( sub_1109() )))
        {
            iVar2 = 0;
        }
    }
    if (l_U188)
    {
        if (sub_31810( sub_1109() ))
        {
            if ((sub_34967( 1, iVar2 )) || (l_U182))
            {
                return 1;
            }
        }
    }
    else if ((sub_34967( 1, iVar2 )) || (l_U182))
    {
        return 1;
    }
    return 0;
}

int sub_34967(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1109() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1109(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1109() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1109(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1109()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1109() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1109() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_4050() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_4050() )))
    {
        return 0;
    }
    return 1;
}

void sub_36847(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    int I;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    sub_27470();
    if (l_U181)
    {
        uParam0 = l_U215._fU0;
        uParam1 = l_U215._fU4;
        uParam2 = l_U215._fU8;
        uVar12 = l_U205;
        l_U181 = 0;
    }
    else if (NOT (IS_CHAR_INJURED( sub_1109() )))
    {
        GET_CHAR_HEADING( sub_1109(), ref uVar12 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            PRINTSTRING( "J_SKIP - called" );
            PRINTNL();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_4050() );
            sub_37058( ref uVar8 );
            if (bParam3)
            {
                PRINTSTRING( "J_SKIP - onFoot = TRUE" );
                PRINTNL();
                sub_37479( uParam0, uParam1, uParam2, 0 );
                for ( I = 0; I < l_U210; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U210[I] );
                        if (NOT (IS_CHAR_INJURED( sub_1109() )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1109(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                            SET_CHAR_COORDINATES( l_U210[I], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                            SET_CHAR_HEADING( l_U210[I], uVar12 );
                        }
                    }
                }
            }
            else if (DOES_VEHICLE_EXIST( uParam4 ))
            {
                PRINTSTRING( "J_SKIP - SpecificCarID exists" );
                PRINTNL();
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1109() );
                    WARP_CHAR_INTO_CAR( sub_1109(), uParam4 );
                    for ( I = 0; I < l_U210; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U210[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U210[I] );
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U210[I], uParam4, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U210[I], 0 );
                            }
                        }
                    }
                }
                sub_37479( uParam0, uParam1, uParam2, uVar12 );
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    SET_CAR_COORDINATES( uParam4, uParam0, uParam1, uParam2 );
                }
            }
            else
            {
                PRINTSTRING( "J_SKIP - searching for temp_car" );
                PRINTNL();
                if (DOES_VEHICLE_EXIST( uVar8 ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( uVar8 )))
                    {
                        PRINTSTRING( "J_SKIP - temp_car existed but not driveable" );
                        PRINTNL();
                        uVar8 = nil;
                    }
                }
                if (NOT (DOES_VEHICLE_EXIST( uVar8 )))
                {
                    PRINTSTRING( "J_SKIP - creating new temp_car" );
                    PRINTNL();
                    REQUEST_MODEL( 1264341792 );
                    while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref uVar8, 1 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1109() );
                    WARP_CHAR_INTO_CAR( sub_1109(), uVar8 );
                    sub_18208( uVar8 );
                }
                else
                {
                    PRINTSTRING( "J_SKIP - temp_car exists" );
                    PRINTNL();
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        PRINTSTRING( "J_SKIP - temp_car is driveable" );
                        PRINTNL();
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1109() );
                        WARP_CHAR_INTO_CAR( sub_1109(), uVar8 );
                    }
                }
                for ( I = 0; I < l_U210; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U210[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                        {
                            PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                            PRINTNL();
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U210[I] );
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U210[I], uVar8, I );
                            }
                            else
                            {
                                PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                                PRINTNL();
                            }
                        }
                    }
                }
                for ( I = 0; I < l_U210; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U210[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                PRINTSTRING( "J_SKIP - warping buddy into car" );
                                PRINTNL();
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U210[I], uVar8, I );
                            }
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( uVar8 ))
                {
                    SET_CAR_COORDINATES( uVar8, uParam0, uParam1, uParam2 );
                    SET_CAR_HEADING( uVar8, uVar12 );
                }
            }
            LOAD_SCENE( uParam0, uParam1, uParam2 );
            WAIT( 500 );
            sub_9601( 0, 0 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    return;
}

void sub_37058(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_4050() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1109() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1109(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_1109(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_37178( (uParam0^) );
        }
        else
        {
            (uParam0^) = nil;
        }
    }
    else
    {
        (uParam0^) = nil;
    }
    return;
}

void sub_37178(unknown uParam0)
{
    unknown uVar3;
    int I;
    int iVar5;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
            if (DOES_CHAR_EXIST( uVar3 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                }
                else
                {
                    DELETE_CHAR( ref uVar3 );
                }
            }
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar5 );
            for ( I = 0; I < iVar5; I++ )
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar3 );
                    if (DOES_CHAR_EXIST( uVar3 ))
                    {
                        if (NOT (IS_CHAR_INJURED( uVar3 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                        }
                        else
                        {
                            DELETE_CHAR( ref uVar3 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_37479(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_1109(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_1109(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_1109(), uParam0, uParam1, fParam2 );
    SET_CHAR_HEADING( sub_1109(), uParam3 );
    return;
}

void sub_39015(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_39040( uParam0, uParam1, uParam2, l_U203, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1109(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U203, l_U203, l_U203, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U203 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U203 );
            }
        }
    }
    return;
}

int sub_39040(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_39057( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_1109(), uParam0, uParam1, uParam4, uParam4, 0 )))
        {
            return 0;
        }
        else if (IS_SCREEN_FADED_OUT())
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_39057(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_39411(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_40521(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_40544( uParam0, ref l_U71._fU0, uParam1, uParam2, uParam3 );
}

int sub_40544(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_22802( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_40670(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_22901( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_22901( "\n CONVERSATION PAUSED AT LINE " );
            sub_40810( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_22901( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_22901( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_22901( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_40810(unknown uParam0)
{
    return;
}

void sub_41088()
{
    float fVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (NOT l_U1125)
    {
        if (NOT sub_41108())
        {
            l_U1125 = 1;
        }
    }
    else if (((l_U220 > 0) AND (NOT l_U1126)) AND (IS_SCREEN_FADED_IN()))
    {
        if (sub_41108())
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_4282( 0 );
            l_U1126 = 1;
            l_U919 = 99;
            l_U220 = 99;
        }
    }
    switch (l_U919)
    {
        case 0:
        if (l_U220 > 1)
        {
            if (NOT (sub_41381( l_U231 )))
            {
                if (sub_22725( "E2T6_ARRIV", ref l_U231, 6, 1 ))
                {
                    l_U919++;
                }
            }
        }
        break;
        case 1:
        if (NOT sub_22488())
        {
            l_U919 = 99;
        }
        break;
    }
    sub_41619();
    switch (l_U220)
    {
        case 0:
        if (NOT (sub_41381( l_U231 )))
        {
            sub_41818( 1, 1, 1 );
            DISPLAY_RADAR( 0 );
            REQUEST_MODEL( l_U928 );
            g_U30118 = 1;
            if (NOT (IS_CHAR_INJURED( g_U30213 )))
            {
                SET_CHAR_HEADING( g_U30213, 180.00000000 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( g_U30213, 0.69000000, 0.21300000, -0.50000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                CREATE_CHAR( 26, -844218756, uVar4._fU0, uVar4._fU4, 13.40960000, ref l_U1117[0], 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1117[0] );
                SET_CHAR_HEADING( l_U1117[0], 125.00000000 + 180.00000000 );
                SET_PED_ALPHA( l_U1117[0], 255 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( g_U30213, -0.07200000, 0.62800000, -0.50000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                CREATE_CHAR( 26, -1684055465, uVar4._fU0, uVar4._fU4, 13.40960000, ref l_U1117[1], 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1117[1] );
                SET_CHAR_HEADING( l_U1117[1], 170.00000000 + 180.00000000 );
                SET_PED_ALPHA( l_U1117[1], 255 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1117[0], 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1117[1], 1 );
                TASK_PLAY_ANIM_WITH_FLAGS( g_U30213, "bouncer_argue_loop", "misstony06", 8.00000000, 0, 16 );
                TASK_PLAY_ANIM_WITH_FLAGS( l_U1117[0], "Girl_a_argue_loop", "misstony06", 8.00000000, 0, 16 );
                TASK_PLAY_ANIM_WITH_FLAGS( l_U1117[1], "girl_b_argue_loop", "misstony06", 8.00000000, 0, 16 );
            }
            sub_42623();
            sub_39411( ref l_U231, 1 );
            SETTIMERA( 0 );
            if (NOT (IS_CHAR_INJURED( l_U931 )))
            {
                REMOVE_CHAR_FROM_GROUP( l_U931 );
            }
            if (IS_VEH_DRIVEABLE( l_U1103 ))
            {
                GET_CAR_HEADING( l_U1103, ref fVar2 );
                if (fVar2 < 180.00000000)
                {
                    l_U867 = 1;
                }
                else
                {
                    l_U867 = 0;
                }
                SET_CAR_COORDINATES( l_U1103, -397.09490000, 388.74390000, 13.12450000 );
                if (NOT l_U867)
                {
                    SET_CAR_HEADING( l_U1103, 270.00000000 );
                }
                else
                {
                    SET_CAR_HEADING( l_U1103, 90.00000000 );
                }
                SET_CAR_ON_GROUND_PROPERLY( l_U1103 );
            }
            if ((NOT (IS_CHAR_INJURED( l_U931 ))) AND (IS_PLAYER_PLAYING( sub_4050() )))
            {
                TASK_LOOK_AT_CHAR( l_U931, sub_1109(), 20000, 0 );
                TASK_LOOK_AT_CHAR( sub_1109(), l_U931, 20000, 0 );
            }
            g_U2792 = 1;
            l_U220++;
        }
        break;
        case 1:
        if (TIMERA() > 2000)
        {
            sub_43572();
            if (IS_VEH_DRIVEABLE( l_U1103 ))
            {
                ;
            }
            l_U1123 = 1;
            if (NOT l_U867)
            {
                sub_43716();
            }
            else
            {
                sub_44358();
            }
            SETTIMERA( 0 );
            l_U220++;
        }
        break;
        case 2:
        if ((sub_41381( l_U231 )) || (TIMERA() > 40000))
        {
            if (TIMERA() > 40000)
            {
                l_U1114 = 1;
            }
            if (NOT l_U1114)
            {
                if (l_U919 > 0)
                {
                    iVar3 = sub_45106( l_U231 );
                    if (iVar3 > 5)
                    {
                        GET_GAME_TIMER( ref l_U1113 );
                        l_U1114 = 1;
                    }
                }
            }
            else if ((sub_45215( l_U1113, 4500 )) || (TIMERA() > 40000))
            {
                if (NOT (IS_CHAR_INJURED( l_U931 )))
                {
                    TASK_CLEAR_LOOK_AT( sub_1109() );
                    TASK_CLEAR_LOOK_AT( l_U931 );
                }
                OPEN_SEQUENCE_TASK( ref l_U1101 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -400.04470000, 392.16570000, 13.87730000, 2, -1, 1.00000000 );
                CLOSE_SEQUENCE_TASK( l_U1101 );
                TASK_PERFORM_SEQUENCE( sub_1109(), l_U1101 );
                CLEAR_SEQUENCE_TASK( l_U1101 );
                SETTIMERA( 0 );
                l_U220++;
            }
        }
        break;
        case 3:
        if (TIMERA() > 1000)
        {
            sub_43572();
            sub_45465();
            if (NOT (IS_CHAR_INJURED( l_U931 )))
            {
                if (IS_VEH_DRIVEABLE( l_U1103 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U931 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1109() );
                    WARP_CHAR_INTO_CAR( l_U931, l_U1103 );
                    SET_CHAR_COORDINATES( sub_1109(), -398.69670000, 392.21150000, 12.90270000 );
                    SET_CHAR_HEADING( sub_1109(), 0.00000000 );
                    SET_CURRENT_CHAR_WEAPON( sub_1109(), 0, 1 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( sub_1109(), -398.79000000, 394.19980000, 13.40960000, 2, -1, 1.00000000 );
                    OPEN_SEQUENCE_TASK( ref l_U1101 );
                    TASK_CAR_DRIVE_WANDER( 0, l_U1103, 30.00000000, 2 );
                    CLOSE_SEQUENCE_TASK( l_U1101 );
                    TASK_PERFORM_SEQUENCE( l_U931, l_U1101 );
                    CLEAR_SEQUENCE_TASK( l_U1101 );
                    CLOSE_ALL_CAR_DOORS( l_U1103 );
                }
            }
            SETTIMERA( 0 );
            l_U220++;
        }
        break;
        case 4:
        if (TIMERA() > 4000)
        {
            SET_CURRENT_CHAR_WEAPON( sub_1109(), 0, 1 );
            l_U220 = 99;
        }
        break;
        case 99:
        if (NOT (IS_CHAR_INJURED( l_U931 )))
        {
            TASK_CLEAR_LOOK_AT( sub_1109() );
            TASK_CLEAR_LOOK_AT( l_U931 );
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1109() );
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 0, 1 );
        if (NOT (IS_CHAR_INJURED( l_U931 )))
        {
            DELETE_CHAR( ref l_U931 );
        }
        if (IS_VEH_DRIVEABLE( l_U1103 ))
        {
            DELETE_CAR( ref l_U1103 );
        }
        if (NOT (IS_CHAR_INJURED( l_U1117[0] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U1101 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -398.16380000, 392.67430000, 12.96920000, 2, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -389.69010000, 392.19150000, 13.55060000, 2, -2, 0.50000000 );
            CLOSE_SEQUENCE_TASK( l_U1101 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1117[0] );
            SET_CHAR_COORDINATES( l_U1117[0], -398.30640000, 394.44270000, 13.40960000 );
            SET_CHAR_HEADING( l_U1117[0], 202.89770000 );
            TASK_PERFORM_SEQUENCE( l_U1117[0], l_U1101 );
            CLEAR_SEQUENCE_TASK( l_U1101 );
        }
        if (NOT (IS_CHAR_INJURED( l_U1117[1] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U1101 );
            TASK_PAUSE( 0, 500 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -398.07680000, 392.61020000, 12.94030000, 2, -2, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -392.90440000, 392.68130000, 13.44570000, 2, -2, 0.50000000 );
            CLOSE_SEQUENCE_TASK( l_U1101 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1117[1] );
            SET_CHAR_COORDINATES( l_U1117[1], -398.77200000, 395.73330000, 13.40960000 );
            SET_CHAR_HEADING( l_U1117[1], 189.49690000 );
            TASK_PERFORM_SEQUENCE( l_U1117[1], l_U1101 );
            CLEAR_SEQUENCE_TASK( l_U1101 );
        }
        SET_CHAR_COORDINATES( sub_1109(), -399.14730000, 394.19980000, 13.40960000 );
        SET_CHAR_HEADING( sub_1109(), 0.00000000 );
        sub_43572();
        sub_20955( 0, 1, 0, 0, 0 );
        if (l_U1126)
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U919 = 0;
        g_U30118 = 0;
        l_U1123 = 0;
        l_U1124 = 0;
        g_U43025 = 1;
        SWITCH_ROADS_BACK_TO_ORIGINAL( -450.21700000, 380.90910000, -1000.00000000, -374.15650000, 388.43560000, 1000.00000000 );
        sub_12463( 3, 1 );
        break;
    }
    if (l_U1123)
    {
        if ((l_U1127 == 0) || (sub_45215( l_U1127, 3000 )))
        {
            if (NOT (IS_CHAR_DEAD( g_U30213 )))
            {
                SAY_AMBIENT_SPEECH( g_U30213, "NIGHTCLUB_REFUSE_ENTRY", 1, 1, 1 );
                GET_GAME_TIMER( ref l_U1127 );
                l_U1123 = 0;
                l_U1124 = 1;
            }
        }
    }
    else if (l_U1124)
    {
        if (sub_45215( l_U1127, 3000 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U1117[0] )))
            {
                SAY_AMBIENT_SPEECH( l_U1117[0], "Nightclub_Refuse_Plead", 1, 1, 1 );
                GET_GAME_TIMER( ref l_U1127 );
                l_U1123 = 1;
                l_U1124 = 0;
            }
        }
    }
    return;
}

int sub_41108()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_41381(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_22901( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_22901( "\n speech is not playing" );
    }
    return 0;
}

void sub_41619()
{
    if (NOT l_U222)
    {
        if ((sub_41108()) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
        {
            if ((l_U220 < 99) AND (l_U220 > 0))
            {
                sub_4282( 0 );
                l_U223 = 1;
                l_U220 = 99;
                l_U222 = 1;
            }
        }
    }
    else if (NOT sub_41108())
    {
        l_U222 = 0;
    }
    return;
}

void sub_41818(boolean bParam0, boolean bParam1, boolean bParam2)
{
    sub_41827();
    if (bParam1)
    {
        sub_39411( ref l_U231, 0 );
        CLEAR_PRINTS();
    }
    CLEAR_HELP();
    SET_WIDESCREEN_BORDERS( 1 );
    if (bParam0)
    {
        SET_PLAYER_CONTROL( sub_4050(), 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1109() )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1109() );
        }
        if (bParam2)
        {
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1109(), 1 );
        }
    }
    else
    {
        SET_PLAYER_CONTROL_ADVANCED( sub_4050(), 0, 0, 0 );
    }
    sub_42028();
    return;
}

void sub_41827()
{
    if (NOT l_U224)
    {
        sub_41851( ref l_U221 );
        l_U224 = 1;
    }
    return;
}

void sub_41851(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    SET_USE_HIGHDOF( 1 );
    return;
}

void sub_42028()
{
    int iVar2;

    if (IS_PLAYER_PLAYING( sub_4050() ))
    {
        GET_CHAR_PROP_INDEX( sub_1109(), 0, ref iVar2 );
        if (iVar2 == 2)
        {
            CLEAR_CHAR_PROP( sub_1109(), 0 );
        }
    }
    return;
}

void sub_42623()
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U1108[0] );
    SET_CAM_POS( l_U1108[0], -420.28590000, 375.80330000, 13.47530000 );
    SET_CAM_ROT( l_U1108[0], 14.33330000, 0.00000000, -47.65170000 );
    SET_CAM_FOV( l_U1108[0], 45.00000000 );
    SET_CAM_ACTIVE( l_U1108[0], 1 );
    CREATE_CAM( 14, ref l_U1108[1] );
    SET_CAM_POS( l_U1108[1], -417.98000000, 375.13240000, 14.22150000 );
    SET_CAM_ROT( l_U1108[1], 8.31060000, 0.00000000, -43.64770000 );
    SET_CAM_FOV( l_U1108[1], 37.00000000 );
    SET_CAM_ACTIVE( l_U1108[1], 1 );
    CREATE_CAM( 14, ref l_U1108[2] );
    SET_CAM_POS( l_U1108[2], -415.67410000, 374.46130000, 14.96770000 );
    SET_CAM_ROT( l_U1108[2], 2.28790000, 0.00000000, -39.64370000 );
    SET_CAM_FOV( l_U1108[2], 29.00000000 );
    SET_CAM_ACTIVE( l_U1108[2], 1 );
    CREATE_CAM( 14, ref l_U1108[3] );
    SET_CAM_POS( l_U1108[3], -413.36820000, 373.79030000, 15.71390000 );
    SET_CAM_ROT( l_U1108[3], -3.73480000, 0.00000000, -35.63970000 );
    SET_CAM_FOV( l_U1108[3], 21.00010000 );
    SET_CAM_ACTIVE( l_U1108[3], 1 );
    CREATE_CAM( 25, ref l_U1107 );
    SET_CAM_SPLINE_DURATION( l_U1107, 15500 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U1107, 0 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U1107, 0 );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[0] );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[1] );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[2] );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[3] );
    SET_CAM_ACTIVE( l_U1107, 1 );
    SET_CAM_PROPAGATE( l_U1107, 1 );
    return;
}

void sub_43572()
{
    int I;

    for ( I = 0; I < l_U1108; I++ )
    {
        if (DOES_CAM_EXIST( l_U1108[I] ))
        {
            DESTROY_CAM( l_U1108[I] );
        }
    }
    if (DOES_CAM_EXIST( l_U1107 ))
    {
        DESTROY_CAM( l_U1107 );
    }
    return;
}

void sub_43716()
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U1108[0] );
    SET_CAM_POS( l_U1108[0], -391.93650000, 385.05670000, 14.30640000 );
    SET_CAM_ROT( l_U1108[0], -0.14010000, 0.00000000, 46.51130000 );
    SET_CAM_FOV( l_U1108[0], 29.10000000 );
    SET_CAM_ACTIVE( l_U1108[0], 1 );
    CREATE_CAM( 14, ref l_U1108[1] );
    SET_CAM_POS( l_U1108[1], -393.08150000, 384.77310000, 14.46350000 );
    SET_CAM_ROT( l_U1108[1], -2.41660000, 0.00000000, 36.87120000 );
    SET_CAM_FOV( l_U1108[1], 29.10000000 );
    SET_CAM_ACTIVE( l_U1108[1], 1 );
    CREATE_CAM( 14, ref l_U1108[2] );
    SET_CAM_POS( l_U1108[2], -394.22650000, 384.48950000, 14.62060000 );
    SET_CAM_ROT( l_U1108[2], -4.69320000, 0.00000000, 27.23110000 );
    SET_CAM_FOV( l_U1108[2], 29.10000000 );
    SET_CAM_ACTIVE( l_U1108[2], 1 );
    CREATE_CAM( 14, ref l_U1108[3] );
    SET_CAM_POS( l_U1108[3], -395.37150000, 384.20580000, 14.77770000 );
    SET_CAM_ROT( l_U1108[3], -6.96970000, 0.00000000, 17.59090000 );
    SET_CAM_FOV( l_U1108[3], 29.10000000 );
    SET_CAM_ACTIVE( l_U1108[3], 1 );
    CREATE_CAM( 25, ref l_U1107 );
    SET_CAM_SPLINE_DURATION( l_U1107, 29500 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U1107, 0 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U1107, 0 );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[0] );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[1] );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[2] );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[3] );
    SET_CAM_ACTIVE( l_U1107, 1 );
    SET_CAM_PROPAGATE( l_U1107, 1 );
    return;
}

void sub_44358()
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U1108[0] );
    SET_CAM_POS( l_U1108[0], -402.33890000, 386.38400000, 13.73630000 );
    SET_CAM_ROT( l_U1108[0], 2.42030000, 0.00000000, -52.56690000 );
    SET_CAM_FOV( l_U1108[0], 36.00000000 );
    SET_CAM_ACTIVE( l_U1108[0], 1 );
    CREATE_CAM( 14, ref l_U1108[1] );
    SET_CAM_POS( l_U1108[1], -401.57970000, 385.71780000, 14.09940000 );
    SET_CAM_ROT( l_U1108[1], -1.38280000, 0.00000000, -40.29000000 );
    SET_CAM_FOV( l_U1108[1], 36.00000000 );
    SET_CAM_ACTIVE( l_U1108[1], 1 );
    CREATE_CAM( 14, ref l_U1108[2] );
    SET_CAM_POS( l_U1108[2], -400.82050000, 385.05150000, 14.46260000 );
    SET_CAM_ROT( l_U1108[2], -5.18590000, 0.00000000, -28.01310000 );
    SET_CAM_FOV( l_U1108[2], 36.00000000 );
    SET_CAM_ACTIVE( l_U1108[2], 1 );
    CREATE_CAM( 14, ref l_U1108[3] );
    SET_CAM_POS( l_U1108[3], -400.06120000, 384.38530000, 14.82570000 );
    SET_CAM_ROT( l_U1108[3], -8.98910000, 0.00000000, -15.73620000 );
    SET_CAM_FOV( l_U1108[3], 36.00000000 );
    SET_CAM_ACTIVE( l_U1108[3], 1 );
    CREATE_CAM( 25, ref l_U1107 );
    SET_CAM_SPLINE_DURATION( l_U1107, 29500 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U1107, 0 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U1107, 0 );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[0] );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[1] );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[2] );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[3] );
    SET_CAM_ACTIVE( l_U1107, 1 );
    SET_CAM_PROPAGATE( l_U1107, 1 );
    return;
}

void sub_45106(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_41381( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

int sub_45215(int iParam0, int iParam1)
{
    int iVar4;

    if (iParam0 > 0)
    {
        GET_GAME_TIMER( ref iVar4 );
        if ((iVar4 - iParam0) > iParam1)
        {
            return 1;
        }
    }
    return 0;
}

void sub_45465()
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U1108[0] );
    SET_CAM_POS( l_U1108[0], -403.38270000, 397.05380000, 15.18240000 );
    SET_CAM_ROT( l_U1108[0], -12.13820000, 0.00000000, -129.38050000 );
    SET_CAM_FOV( l_U1108[0], 35.70000000 );
    SET_CAM_ACTIVE( l_U1108[0], 1 );
    CREATE_CAM( 14, ref l_U1108[1] );
    SET_CAM_POS( l_U1108[1], -402.81060000, 396.91080000, 15.15570000 );
    SET_CAM_ROT( l_U1108[1], -10.39900000, 0.00000000, -121.40320000 );
    SET_CAM_FOV( l_U1108[1], 35.70000000 );
    SET_CAM_ACTIVE( l_U1108[1], 1 );
    CREATE_CAM( 14, ref l_U1108[2] );
    SET_CAM_POS( l_U1108[2], -402.23850000, 396.76770000, 15.12910000 );
    SET_CAM_ROT( l_U1108[2], -8.65980000, 0.00000000, -113.42580000 );
    SET_CAM_FOV( l_U1108[2], 35.70000000 );
    SET_CAM_ACTIVE( l_U1108[2], 1 );
    CREATE_CAM( 14, ref l_U1108[3] );
    SET_CAM_POS( l_U1108[3], -401.66640000, 396.62470000, 15.10240000 );
    SET_CAM_ROT( l_U1108[3], -6.92060000, 0.00000000, -105.44850000 );
    SET_CAM_FOV( l_U1108[3], 35.70000000 );
    SET_CAM_ACTIVE( l_U1108[3], 1 );
    CREATE_CAM( 25, ref l_U1107 );
    SET_CAM_SPLINE_DURATION( l_U1107, 5000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U1107, 0 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U1107, 0 );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[0] );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[1] );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[2] );
    ADD_CAM_SPLINE_NODE( l_U1107, l_U1108[3] );
    SET_CAM_ACTIVE( l_U1107, 1 );
    SET_CAM_PROPAGATE( l_U1107, 1 );
    return;
}

void sub_47385()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    switch (l_U220)
    {
        case 0:
        g_U43104[5] = 3;
        if ((NOT (HAS_MODEL_LOADED( l_U928 ))) || (NOT (HAVE_ANIMS_LOADED( "missnightclub" ))))
        {
            REQUEST_MODEL( l_U928 );
            REQUEST_ANIMS( "missnightclub" );
            while ((NOT (HAS_MODEL_LOADED( l_U928 ))) || (NOT (HAVE_ANIMS_LOADED( "missnightclub" ))))
            {
                WAIT( 0 );
            }
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1109() );
        SET_CAM_BEHIND_PED( sub_1109() );
        if (DOES_CHAR_EXIST( l_U931 ))
        {
            DELETE_CHAR( ref l_U931 );
        }
        if (DOES_VEHICLE_EXIST( l_U1103 ))
        {
            DELETE_CAR( ref l_U1103 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_16667( 0 ) );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1103 );
        WAIT( 0 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 1000 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
        }
        SET_PLAYER_CONTROL( sub_4050(), 1 );
        l_U220++;
        break;
        case 1:
        if (NOT l_U1130)
        {
            if (NOT l_U1129)
            {
                if (IS_CHAR_IN_AREA_3D( sub_1109(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 ))
                {
                    if (NOT sub_47861())
                    {
                        l_U1129 = 1;
                    }
                    else
                    {
                        l_U1130 = 1;
                    }
                }
            }
            else
            {
                sub_47973();
            }
        }
        else if (g_U43025)
        {
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                g_U43025 = 0;
            }
        }
        if (l_U1130)
        {
            if (NOT (sub_22472( 0 )))
            {
                switch (l_U920)
                {
                    case 0:
                    if (DOES_CHAR_EXIST( g_U29971[l_U918]._fU12 ))
                    {
                        if (NOT (IS_CHAR_INJURED( g_U29971[l_U918]._fU12 )))
                        {
                            if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_1109(), g_U29971[l_U918]._fU12, 2.50000000, 2.50000000, 2.00000000, 0 ))
                            {
                                sub_5209( l_U918, 1 );
                                sub_1158( 2, g_U29971[l_U918]._fU12, "BAHAMA", 0 );
                                if (sub_22725( "E2T6_HIYA", ref l_U231, 6, 1 ))
                                {
                                    sub_5209( l_U918, 1 );
                                    TASK_PLAY_ANIM( g_U29971[l_U918]._fU12, "bouncer_greeting", "misstony06", 4.00000000, 0, 1, 1, 0, -1 );
                                    l_U920++;
                                }
                            }
                            else
                            {
                                sub_5209( l_U918, 0 );
                            }
                        }
                    }
                    break;
                    case 1:
                    if (NOT (IS_CHAR_INJURED( g_U29971[l_U918]._fU12 )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( g_U29971[l_U918]._fU12, "misstony06", "bouncer_greeting" )))
                        {
                            sub_5209( l_U918, 0 );
                            l_U920++;
                        }
                    }
                    break;
                    case 2:
                    if (DOES_CHAR_EXIST( g_U29971[l_U918]._fU12 ))
                    {
                        if (NOT (IS_CHAR_INJURED( g_U29971[l_U918]._fU12 )))
                        {
                            if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_1109(), g_U29971[l_U918]._fU12, 2.50000000, 2.50000000, 2.00000000, 0 ))
                            {
                                sub_1158( 2, g_U29971[l_U918]._fU12, "BAHAMA", 0 );
                                if (sub_22725( "E2T6_CHEERS", ref l_U231, 6, 1 ))
                                {
                                    l_U920++;
                                }
                            }
                        }
                    }
                    break;
                    case 3:
                    sub_5209( l_U918, 0 );
                    l_U920++;
                    break;
                }
            }
        }
        if (NOT (sub_22472( 0 )))
        {
            switch (l_U921)
            {
                case 0:
                if ((IS_CHAR_IN_AREA_3D( sub_1109(), -402.55010000, 405.91320000, 4.34950000, -378.15010000, 408.03820000, 7.67450000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_1109(), -393.95470000, 402.92660000, 5.67430000, 2.00000000, 1.00000000, 2.00000000, 0 )))
                {
                    if (sub_22725( "E2T6_GUIDO", ref l_U231, 6, 1 ))
                    {
                        l_U921++;
                    }
                }
                break;
                case 1:
                if (IS_CHAR_IN_AREA_3D( sub_1109(), -407.43290000, 413.72810000, 3.97450000, -382.65790000, 417.72810000, 7.67450000, 0 ))
                {
                    if (sub_22725( "E2T6_LOOKS", ref l_U231, 6, 1 ))
                    {
                        l_U921++;
                    }
                }
                break;
            }
        }
        if (sub_49721( -401.00260000, 420.04770000, 5.17440000, -386.97760000, 430.62270000, 8.17440000, 0, "GT5_M02", 1, "GT5_M13" ))
        {
            if (DOES_CHAR_EXIST( g_U29971[l_U917]._fU12 ))
            {
                if (NOT (IS_CHAR_INJURED( g_U29971[l_U917]._fU12 )))
                {
                    if (sub_22725( "E2T6_SEES", ref l_U231, 6, 1 ))
                    {
                        SETTIMERA( 0 );
                        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, g_U29971[l_U917]._fU12, 0, 0, 5000 );
                        ADD_BLIP_FOR_CHAR( g_U29971[l_U917]._fU12, ref l_U859 );
                        SET_BLIP_AS_FRIENDLY( l_U859, 1 );
                        sub_50362( l_U859 );
                        g_U30208 = g_U29971[l_U917]._fU12;
                        l_U220++;
                    }
                }
            }
        }
        break;
        case 2:
        if (NOT l_U871)
        {
            if (NOT (sub_22472( 0 )))
            {
                sub_28976( "GT5_M03", 0 );
                l_U871 = 1;
            }
        }
        if (DOES_CHAR_EXIST( g_U29971[l_U917]._fU12 ))
        {
            if (NOT (IS_CHAR_INJURED( g_U29971[l_U917]._fU12 )))
            {
                GET_CHAR_COORDINATES( g_U29971[l_U917]._fU12, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                if ((LOCATE_CHAR_ON_FOOT_3D( sub_1109(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 1.50000000, 1.50000000, 2.00000000, 0 )) AND (sub_47861()))
                {
                    sub_5209( l_U917, 1 );
                    OPEN_SEQUENCE_TASK( ref l_U1101 );
                    TASK_LOOK_AT_CHAR( 0, sub_1109(), -1, 0 );
                    CLOSE_SEQUENCE_TASK( l_U1101 );
                    CLEAR_SEQUENCE_TASK( l_U1101 );
                    TASK_LOOK_AT_CHAR( g_U29971[l_U917]._fU12, sub_1109(), -1, 0 );
                    SET_PLAYER_CONTROL( sub_4050(), 0 );
                    OPEN_SEQUENCE_TASK( ref l_U1101 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, g_U29971[l_U917]._fU12 );
                    CLOSE_SEQUENCE_TASK( l_U1101 );
                    TASK_PERFORM_SEQUENCE( sub_1109(), l_U1101 );
                    CLEAR_SEQUENCE_TASK( l_U1101 );
                    HINT_CAM( 0.00000000, 0.00000000, 0.00000000, g_U29971[l_U917]._fU12, 0, 0, 30000 );
                    l_U919 = 0;
                    l_U220++;
                }
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( g_U29971[l_U917]._fU12 )))
        {
            BLOCK_CHAR_GESTURE_ANIMS( g_U29971[l_U917]._fU12, 1 );
        }
        switch (l_U919)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( g_U29971[l_U917]._fU12 )))
            {
                sub_1158( 3, g_U29971[l_U917]._fU12, "MONIQUE", 0 );
                if (sub_22725( "E2T6_HEYLL", ref l_U231, 6, 1 ))
                {
                    l_U919++;
                }
            }
            break;
            case 1:
            if (NOT (sub_22472( 0 )))
            {
                if (sub_22725( "E2T6_DANCE", ref l_U231, 6, 1 ))
                {
                    l_U919++;
                }
            }
            break;
            case 2:
            if (NOT (sub_22472( 0 )))
            {
                g_U30105 = 1;
                sub_5209( l_U917, 0 );
                l_U220++;
            }
            break;
        }
        break;
        case 4:
        if (sub_51155())
        {
            l_U220++;
        }
        break;
        case 5:
        if (NOT sub_51155())
        {
            if (sub_51239())
            {
                if (DOES_BLIP_EXIST( l_U859 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U859 );
                }
                SET_PLAYER_CONTROL( sub_4050(), 0 );
                if (g_U30196 == 0)
                {
                    g_U43571 = 1;
                }
                else
                {
                    g_U43571 = 0;
                }
                PRINTSTRING( "Tony6 - player passed dancing" );
                PRINTNL();
                HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
                sub_12463( 4, 1 );
            }
            else if (sub_51495())
            {
                sub_51603( "GT5_F01" );
                PRINTSTRING( "Tony6 - player failed dancing" );
                PRINTNL();
                HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
                sub_12463( 10, 1 );
            }
            else if (DOES_CHAR_EXIST( g_U29971[l_U917]._fU12 ))
            {
                if (sub_51816( g_U29971[l_U917]._fU12 ))
                {
                    if (IS_THIS_PRINT_BEING_DISPLAYED( "GT5_M03", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                    {
                        CLEAR_PRINTS();
                    }
                    PRINTSTRING( "Tony6 - player quit dancing" );
                    PRINTNL();
                    HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
                    l_U220 = 2;
                }
            };;;
        }
        break;
    }
    if (NOT (l_U917 == -1))
    {
        if (DOES_CHAR_EXIST( g_U29971[l_U917]._fU12 ))
        {
            g_U30208 = g_U29971[l_U917]._fU12;
            if (IS_CHAR_INJURED( g_U29971[l_U917]._fU12 ))
            {
                sub_51603( "GT5_F03" );
                sub_3636();
            }
            else if (IS_PED_FLEEING( g_U29971[l_U917]._fU12 ))
            {
                sub_51603( "GT5_F03" );
                sub_3636();
            }
        }
    }
    for ( I = 0; I < l_U1117; I++ )
    {
        if (NOT l_U1120[I])
        {
            if (NOT (IS_CHAR_DEAD( l_U1117[I] )))
            {
                if ((sub_52292( l_U1117[I], 1, 0 )) || (sub_10152( sub_1109(), 0, 1 )))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1117[I] );
                    l_U1120[I] = 1;
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -844218756 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -1684055465 );
                }
            }
            else
            {
                l_U1120[I] = 1;
            }
        }
    }
    return;
}

int sub_47861()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_1109() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_1109(), ref iVar2 );
        if ((((iVar2 == 0) || (iVar2 == 45)) || (iVar2 == 46)) || (iVar2 == 41))
        {
            return 1;
        }
    }
    return 0;
}

int sub_47973()
{
    switch (l_U1128)
    {
        case 0:
        if (sub_34967( 1, 1 ))
        {
            sub_41818( 0, 1, 0 );
            SET_PLAYER_CONTROL( sub_4050(), 0 );
            CREATE_CAM( 14, ref l_U1131[0] );
            CREATE_CAM( 14, ref l_U1131[1] );
            CREATE_CAM( 3, ref l_U1131[2] );
            SET_CAM_POS( l_U1131[0], -399.14910000, 398.90040000, 13.84296000 );
            SET_CAM_ROT( l_U1131[0], 6.04565000, 0.00000000, -174.96930000 );
            SET_CAM_FOV( l_U1131[0], 34.80003000 );
            SET_CAM_ACTIVE( l_U1131[0], 1 );
            SET_CAM_PROPAGATE( l_U1131[0], 1 );
            SET_CAM_POS( l_U1131[1], -399.14910000, 398.90040000, 13.84296000 );
            SET_CAM_ROT( l_U1131[1], 6.04565000, 0.00000000, -174.96930000 );
            SET_CAM_FOV( l_U1131[1], 27.60004000 );
            SET_CAM_ACTIVE( l_U1131[1], 1 );
            SET_CAM_PROPAGATE( l_U1131[1], 0 );
            SET_CHAR_COORDINATES( sub_1109(), -398.99280000, 394.73320000, 13.40960000 );
            SET_CHAR_HEADING( sub_1109(), 0.00000000 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            GET_GAME_TIMER( ref l_U1137 );
            PRINT_HELP( "GT5_WHELP" );
            l_U1128 = 1;
        }
        break;
        case 1:
        if (sub_45215( l_U1137, 800 ))
        {
            TASK_SWAP_WEAPON( sub_1109(), 0 );
            GET_GAME_TIMER( ref l_U1137 );
            l_U1128 = 2;
        }
        break;
        case 2:
        if (sub_45215( l_U1137, 350 ))
        {
            sub_48519( ref l_U1131[0], ref l_U1131[1], ref l_U1131[2] );
            sub_20955( 0, 1, 0, 0, 1 );
            SET_PLAYER_CONTROL( sub_4050(), 1 );
            l_U1130 = 1;
            l_U1128 = 3;
        }
        break;
        case 3:
        return 1;
        break;
    }
    return 0;
}

void sub_48519(unknown uParam0, unknown uParam1, unknown uParam2)
{
    SET_CAM_ACTIVE( (uParam2^), 0 );
    SET_CAM_PROPAGATE( (uParam2^), 0 );
    SET_CAM_ACTIVE( (uParam1^), 0 );
    SET_CAM_PROPAGATE( (uParam1^), 0 );
    SET_CAM_ACTIVE( (uParam0^), 0 );
    SET_CAM_PROPAGATE( (uParam0^), 0 );
    DESTROY_CAM( (uParam2^) );
    DESTROY_CAM( (uParam0^) );
    DESTROY_CAM( (uParam1^) );
    return;
}

int sub_49721(vector vParam0, vector vParam3, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    vector vVar12;

    vVar12 = {vParam0 + vParam3};
    vVar12 = {vVar12 * 0.50000000};
    sub_27470();
    sub_28350();
    if (IS_SCREEN_FADED_IN())
    {
        if ((uParam8) AND (IS_WANTED_LEVEL_GREATER( sub_4050(), 0 )))
        {
            if (DOES_BLIP_EXIST( l_U201 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U201 );
                sub_29096( uParam7 );
            }
            if ((NOT (sub_22472( 0 ))) AND (NOT l_U170))
            {
                sub_28976( uParam9, 0 );
                l_U214 = uParam9;
                l_U170 = 1;
            }
        }
        else if (l_U170)
        {
            sub_29096( uParam9 );
            l_U170 = 0;
        }
        if (NOT (DOES_BLIP_EXIST( l_U201 )))
        {
            ADD_BLIP_FOR_COORD( vVar12.x, vVar12.y, vVar12.z - 1.00000000, ref l_U201 );
            CHANGE_BLIP_DISPLAY( l_U201, 2 );
            sub_31083( l_U201 );
        }
        if (NOT (sub_22472( 0 )))
        {
            if (NOT l_U172)
            {
                sub_28976( uParam7, 0 );
                l_U172 = 1;
            }
        }
        if (((IS_CHAR_IN_AREA_3D( sub_1109(), vParam0.x, vParam0.y, vParam0.z, vParam3.x, vParam3.y, vParam3.z, uParam6 )) AND (IS_CHAR_ON_FOOT( sub_1109() ))) AND (sub_34877()))
        {
            sub_29096( uParam7 );
            sub_29096( uParam9 );
            sub_3700();
            return 1;
        }
        sub_50119( vVar12.x, vVar12.y, vVar12.z, 1, 0 );
    }
    sub_39015( vVar12.x, vVar12.y, vVar12.z );
    return 0;
}

void sub_50119(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown[1] uVar7;

    array(ref uVar7, 1);
    sub_36847( uParam0, uParam1, uParam2, uParam3, uParam4 );
    return;
}

void sub_50362(int iParam0)
{
    if (iParam0 == nil)
    {
        return;
    }
    CHANGE_BLIP_DISPLAY( iParam0, 2 );
    return;
}

int sub_51155()
{
    if (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dancing" )) > 0))
    {
        return g_U30108;
    }
    return 1;
}

int sub_51239()
{
    if (g_U30106)
    {
        PRINTSTRING( "HAS_PLAYER_PASSED_DANCING - return TRUE" );
        PRINTNL();
        sub_4602();
        return 1;
    }
    return 0;
}

int sub_51495()
{
    if (g_U30107)
    {
        PRINTSTRING( "HAS_PLAYER_FAILED_DANCING - return TRUE" );
        PRINTNL();
        sub_4602();
        return 1;
    }
    return 0;
}

void sub_51603(unknown uParam0)
{
    if (NOT (COMPARE_STRING( uParam0, "" )))
    {
        if (NOT (sub_22472( 0 )))
        {
            sub_4282( 0 );
        }
        else
        {
            sub_4282( 1 );
        }
        if (NOT l_U225)
        {
            sub_28976( uParam0, 0 );
            l_U225 = 1;
        }
    }
    return;
}

int sub_51816(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (IS_PLAYER_PLAYING( sub_4050() ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam0, 0.00000000, 1.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            if (LOCATE_CHAR_ON_FOOT_3D( sub_1109(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 0.50000000, 0.50000000, 2.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_52292(unknown uParam0, boolean bParam1, int iParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar5 );
        if (bParam1)
        {
            if (iVar5 == 7)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (iVar5 == 1)
        {
            GET_SEQUENCE_PROGRESS( uParam0, ref iVar6 );
            if (iVar6 > iParam2)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_52509()
{
    boolean bVar2;

    switch (l_U220)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_4050(), 0 );
        l_U220++;
        break;
        case 1:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        GET_CURRENT_WEATHER( ref l_U946 );
        FORCE_WEATHER_NOW( 1 );
        REMOVE_ANIMS( "missnightclub" );
        sub_5643( 0 );
        sub_52690( 0 );
        sub_4742( l_U917 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U928 );
        LOAD_ADDITIONAL_TEXT( "E2T6AUD", 6 );
        g_U2792 = 1;
        START_CUTSCENE_NOW( "GT06_BA" );
        sub_14218( 0, 1 );
        l_U220++;
        break;
        case 2:
        if (HAS_CUTSCENE_LOADED())
        {
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "GT06_BA" );
            l_U220 = 99;
        }
        break;
        case 99:
        bVar2 = false;
        sub_53646( 0 );
        sub_9601( 0, 0 );
        while (NOT bVar2)
        {
            if (NOT IS_SCREEN_FADED_OUT())
            {
                if (NOT IS_SCREEN_FADING())
                {
                    DO_SCREEN_FADE_OUT_UNHACKED( 500 );
                }
            }
            if (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            else
            {
                bVar2 = true;
            }
        }
        FORCE_WEATHER_NOW( l_U946 );
        RELEASE_WEATHER();
        sub_12463( 5, 1 );
        break;
    }
    return;
}

void sub_52690(unknown uParam0)
{
    REMOVE_ANIMS( "missnightclub" );
    REMOVE_ANIMS( "AMB@SMOKING_F" );
    REMOVE_ANIMS( "AMB@SMOKING" );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2037134882 );
    switch (uParam0)
    {
        case 0:
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1696530209 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1756785265 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 982077731 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1758965191 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -844218756 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1684055465 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubBM2" );
        REMOVE_ANIMS( "missamb_bama" );
        PRINTSTRING( "UNLOAD_ASSETS_FOR_CLUB - " );
        PRINTSTRING( "BAHAMA MAMAS" );
        PRINTNL();
        break;
        case 1:
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1696530209 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1756785265 );
        sub_53040( g_U30218 );
        sub_53040( g_U30219 );
        sub_53040( g_U30220 );
        sub_53040( g_U30221 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1429700748 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1446884113 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubM92" );
        REMOVE_ANIMS( "missamb_m9" );
        PRINTSTRING( "UNLOAD_ASSETS_FOR_CLUB - " );
        PRINTSTRING( "MAISONETTE_9" );
        PRINTNL();
        break;
        case 2:
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1696530209 );
        sub_53040( g_U30222 );
        sub_53040( g_U30223 );
        sub_53040( g_U30224 );
        sub_53040( g_U30225 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1662473323 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubHC2" );
        REMOVE_ANIMS( "missamb_herc_female" );
        REMOVE_ANIMS( "missamb_herc_male" );
        PRINTSTRING( "UNLOAD_ASSETS_FOR_CLUB - " );
        PRINTSTRING( "HERCULES" );
        PRINTNL();
        break;
    }
    if (NOT g_U30124[uParam0])
    {
        g_U30124[uParam0] = 1;
    }
    return;
}

void sub_53040(int iParam0)
{
    if (NOT (iParam0 == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( iParam0 );
    }
    return;
}

void sub_53646(unknown uParam0)
{
    g_U30226[uParam0] = nil;
    return;
}

void sub_53803()
{
    unknown uVar2;
    unknown uVar3;

    switch (l_U220)
    {
        case 0:
        g_U30208 = nil;
        if (NOT (l_U917 == -1))
        {
            g_U29971[l_U917]._fU0 = 0;
            sub_4742( l_U917 );
            sub_5344( 0 );
        }
        g_U43104[5] = 5;
        g_U30097[0] = 1;
        SET_PLAYER_CONTROL( sub_4050(), 0 );
        SET_CHAR_COORDINATES( sub_1109(), -372.28890000, 437.11110000, 5.16930000 );
        SET_CHAR_HEADING( sub_1109(), 22.81240000 );
        FREEZE_CHAR_POSITION( sub_1109(), 1 );
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -374.95000000, 440.26250000, 6.57000000, 0.00000000, 0.00000000, 90.00000000, ref l_U945 );
        ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U945, "gaybackoffice" );
        SWITCH_ROADS_OFF( -449.11460000, 367.87290000, 2.46520000, -374.53960000, 400.99790000, 18.61520000 );
        GET_WEAPONTYPE_MODEL( 29, ref l_U927 );
        REQUEST_MODEL( -156785612 );
        REQUEST_MODEL( l_U927 );
        REQUEST_MODEL( l_U928 );
        REQUEST_ANIMS( "misstony06" );
        while ((((NOT (HAS_MODEL_LOADED( -156785612 ))) || (NOT (HAS_MODEL_LOADED( l_U927 )))) || (NOT (HAS_MODEL_LOADED( l_U928 )))) || (NOT (HAVE_ANIMS_LOADED( "misstony06" ))))
        {
            WAIT( 0 );
        }
        SET_CHAR_COORDINATES( sub_1109(), -372.28890000, 437.11110000, 5.16930000 );
        SET_ROOM_FOR_CHAR_BY_NAME( sub_1109(), "gaybackoffice" );
        sub_9601( 0, 0 );
        GET_GAME_VIEWPORT_ID( ref uVar3 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar3, "gaybackoffice" );
        FREEZE_CHAR_POSITION( sub_1109(), 0 );
        CREATE_CHAR( 26, -156785612, -373.47560000, 441.24220000, 5.16930000, ref l_U929, 1 );
        SET_CHAR_HEADING( l_U929, 213.67570000 );
        GIVE_WEAPON_TO_CHAR( l_U929, 29, 999, 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U929, "gaybackoffice" );
        SET_CHAR_DECISION_MAKER( l_U929, l_U902 );
        SET_COMBAT_DECISION_MAKER( l_U929, l_U903 );
        ADD_BLIP_FOR_CHAR( l_U929, ref l_U861 );
        sub_50362( l_U861 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U929, 1 );
        SET_CHAR_ACCURACY( l_U929, 20 );
        SET_CHAR_AS_ENEMY( l_U929, 1 );
        TASK_TURN_CHAR_TO_FACE_CHAR( l_U929, sub_1109() );
        if (NOT (DOES_CHAR_EXIST( l_U944 )))
        {
            CREATE_CHAR( 26, l_U928, -371.78820000, 439.51640000, 5.16930000, ref l_U944, 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U944 )))
        {
            g_U30208 = nil;
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U944 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U944, "gaybackoffice" );
            SET_CHAR_COORDINATES( l_U944, -371.78820000, 439.51640000, 5.16930000 );
            SET_CHAR_HEADING( l_U944, 240.40070000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U944, 1 );
            SET_CHAR_NEVER_TARGETTED( l_U944, 1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U944, "inj_rside_idle", "misstony06", 1000.00000000, 1, 0, 0, 0, -1 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( -156785612 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U927 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U928 );
        l_U880[2]._fU20 = l_U880[2]._fU24;
        l_U880[1]._fU16 = 0;
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U880[1]._fU0, l_U880[1]._fU4, 0, 0.00000000 );
        l_U873 = GET_INT_STAT( 291 );
        l_U875 = GET_INT_STAT( 290 );
        l_U1151 = 1;
        if (DOES_CHAR_EXIST( l_U930 ))
        {
            DELETE_CHAR( ref l_U930 );
        }
        if (HAS_CHAR_GOT_WEAPON( sub_1109(), 7 ))
        {
            SET_CURRENT_CHAR_WEAPON( sub_1109(), 7, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 9 ))
        {
            SET_CURRENT_CHAR_WEAPON( sub_1109(), 9, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 29 ))
        {
            SET_CURRENT_CHAR_WEAPON( sub_1109(), 29, 1 );
        }
        else
        {
            sub_55086();
        };;;
        DISPLAY_RADAR( 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        sub_4533( 1 );
        GET_INTERIOR_AT_COORDS( -373.47560000, 441.24220000, 6.16930000, ref uVar2 );
        LOAD_SCENE_FOR_ROOM_BY_KEY( uVar2, GET_HASH_KEY( "gaybackoffice" ) );
        ALLOW_EMERGENCY_SERVICES( 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_GAME_CAM_PITCH( 0.00000000 );
        SET_CAM_BEHIND_PED( sub_1109() );
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL( sub_4050(), 1 );
        sub_28976( "GT5_M05", 0 );
        l_U922 = 19000;
        if (NOT (IS_CHAR_INJURED( l_U929 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U929, 1 );
            OPEN_SEQUENCE_TASK( ref l_U1101 );
            TASK_STAND_STILL( 0, 250 );
            TASK_AIM_GUN_AT_CHAR( 0, sub_1109(), 3000 );
            TASK_LOOK_AT_CHAR( 0, sub_1109(), -2, 0 );
            TASK_COMBAT( 0, sub_1109() );
            CLOSE_SEQUENCE_TASK( l_U1101 );
            TASK_PERFORM_SEQUENCE( l_U929, l_U1101 );
            CLEAR_SEQUENCE_TASK( l_U1101 );
        }
        SET_WANTED_MULTIPLIER( 0.00000000 );
        SETTIMERA( 0 );
        sub_56018();
        g_U30189 = 0;
        l_U220++;
        break;
        case 1:
        sub_56591();
        sub_59778();
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U929 )))
            {
                ;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U929 )))
        {
            SETTIMERA( 0 );
            GET_SCRIPT_TASK_STATUS( l_U929, 29, ref l_U1100 );
            if (l_U1100 == 7)
            {
                GET_SCRIPT_TASK_STATUS( l_U929, 91, ref l_U1100 );
                if (l_U1100 == 7)
                {
                    TASK_COMBAT( l_U929, sub_1109() );
                }
            }
        }
        else
        {
            CLEAR_THIS_PRINT( "GT5_M05" );
            if (DOES_BLIP_EXIST( l_U861 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U861 );
            }
            if (TIMERA() > 2000)
            {
                sub_12463( 6, 1 );
            }
        }
        sub_60105();
        break;
    }
    if (NOT l_U863)
    {
        if (IS_CHAR_IN_AREA_3D( sub_1109(), -382.50100000, 431.87570000, 4.64940000, -368.82620000, 442.87570000, 8.74940000, 0 ))
        {
            g_U30101 = 1;
        }
        else
        {
            l_U863 = 1;
            g_U30101 = 0;
        }
    }
    if (NOT (l_U219 == 6))
    {
        if (NOT (sub_10152( sub_1109(), 0, 1 )))
        {
            sub_51603( "GT5_F02" );
            sub_3636();
        }
    }
    sub_67704();
    return;
}

void sub_55086()
{
    if (HAS_CHAR_GOT_WEAPON( sub_1109(), 34 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 34, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 33 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 33, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 32 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 32, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 30 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 30, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 31 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 31, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 29 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 29, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 15 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 15, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 14 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 14, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 31 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 31, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 13 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 13, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 12 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 12, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 10 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 10, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 11 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 11, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 9 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 9, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1109(), 7 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1109(), 7, 1 );
    };;;;;;;;;;;;;;;
    return;
}

void sub_56018()
{
    sub_56027();
    sub_56061();
    return;
}

void sub_56027()
{
    g_U43513 = GET_INT_STAT( 289 );
    return;
}

void sub_56061()
{
    RESET_LOCAL_PLAYER_WEAPON_STAT( 21, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 21, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 29, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 29, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 30, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 30, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 31, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 31, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 32, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 32, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 33, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 33, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 34, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 34, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 35, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 35, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 36, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 36, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 37, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 37, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 39, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 39, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 40, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 40, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 14, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 14, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 7, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 7, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 9, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 9, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 12, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 12, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 13, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 13, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 15, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 15, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 10, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 10, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 11, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 11, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 4, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 4, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 5, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 5, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 18, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 18, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 16, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 16, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 17, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 17, 1 );
    return;
}

void sub_56591()
{
    if (sub_56600() >= g_U43138[g_U43137]._fU16)
    {
        g_U43566 = 1;
    }
    else
    {
        g_U43566 = 0;
    }
    if (g_U43603 == 1)
    {
        g_U43614 = sub_56744();
        g_U43603 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (sub_56600() > g_U43614)
            {
                g_U43578 = 1;
            }
            else
            {
                g_U43578 = 0;
            }
        }
        else
        {
            g_U43578 = 0;
        }
    }
    else
    {
        g_U43578 = 0;
    }
    if (g_U43137 != 15)
    {
        if (sub_57365() >= g_U43138[g_U43137]._fU20)
        {
            g_U43567 = 1;
        }
        else
        {
            g_U43567 = 0;
        }
        if (g_U43604 == 1)
        {
            g_U43616 = sub_58906();
            g_U43604 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (sub_57365() > g_U43616)
                {
                    g_U43579 = 1;
                }
                else
                {
                    g_U43579 = 0;
                }
            }
            else
            {
                g_U43579 = 0;
            }
        }
        else
        {
            g_U43579 = 0;
        }
    }
    if (g_U43137 == 15)
    {
        if (((g_U43523[9] + g_U43523[10]) / 2) >= g_U43138[g_U43137]._fU20)
        {
            g_U43567 = 1;
        }
        else
        {
            g_U43567 = 0;
        }
        if (g_U43604 == 1)
        {
            g_U43616 = sub_58906();
            g_U43604 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (((g_U43523[9] + g_U43523[10]) / 2) > g_U43616)
                {
                    g_U43579 = 1;
                }
                else
                {
                    g_U43579 = 0;
                }
            }
            else
            {
                g_U43579 = 0;
            }
        }
        else
        {
            g_U43579 = 0;
        }
    }
    return;
}

void sub_56600()
{
    g_U43514 = GET_INT_STAT( 289 );
    g_U43515 = g_U43514 - g_U43513;
    if (g_U43515 < 0)
    {
        g_U43515 = 0;
    }
    return g_U43515;
}

int sub_56744()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 485 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 551 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 527 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 569 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 574 );
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 584 );
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 600 );
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 606 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 521 );
    }
    return 0;
}

void sub_57365()
{
    unknown uVar2;
    unknown uVar3;
    float fVar4;
    int iVar5;
    int I;

    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 29, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 29, 1 ) );
    g_U43523[1] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 30, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 30, 1 ) );
    g_U43523[2] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 31, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 31, 1 ) );
    g_U43523[3] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 32, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 32, 1 ) );
    g_U43523[4] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 33, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 33, 1 ) );
    g_U43523[5] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 34, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 34, 1 ) );
    g_U43523[6] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 35, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 35, 1 ) );
    g_U43523[7] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 37, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 37, 1 ) );
    g_U43523[9] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 39, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 39, 1 ) );
    g_U43523[10] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 40, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 40, 1 ) );
    g_U43523[11] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 14, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 14, 1 ) );
    g_U43523[12] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 7, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 7, 1 ) );
    g_U43523[13] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 9, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 9, 1 ) );
    g_U43523[14] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 12, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 12, 1 ) );
    g_U43523[15] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 13, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 13, 1 ) );
    g_U43523[16] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 15, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 15, 1 ) );
    g_U43523[17] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 10, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 10, 1 ) );
    g_U43523[18] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 11, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 11, 1 ) );
    g_U43523[19] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 18, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 18, 1 ) );
    g_U43523[22] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 16, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 16, 1 ) );
    g_U43523[23] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 17, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 17, 1 ) );
    g_U43523[24] = (uVar3 / uVar2) * 100;
    fVar4 = 0.00000000;
    iVar5 = 0;
    for ( I = 0; I <= 24; I++ )
    {
        if (g_U43523[I] > 0)
        {
            if (g_U43523[I] != g_U43523[0])
            {
                if (g_U43523[I] != g_U43523[8])
                {
                    if (g_U43523[I] != g_U43523[20])
                    {
                        if (g_U43523[I] != g_U43523[21])
                        {
                            fVar4 += g_U43523[I];
                            iVar5++;
                        }
                    }
                }
            }
        }
    }
    fVar4 /= iVar5;
    g_U43516 = FLOOR( fVar4 );
    if (g_U43516 > 100)
    {
        g_U43516 = 100;
    }
    if (g_U43516 < 0)
    {
        g_U43516 = 0;
    }
    return g_U43516;
}

int sub_58906()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 480 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 486 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 552 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 528 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 570 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 575 );
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 585 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 593 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 601 );
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 607 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 522 );
    }
    return 0;
}

void sub_59778()
{
    if (NOT (IS_CHAR_INJURED( l_U944 )))
    {
        GET_SCRIPT_TASK_STATUS( l_U944, 83, ref l_U1100 );
        if (l_U1100 == 7)
        {
            GET_SCRIPT_TASK_STATUS( l_U944, 25, ref l_U1100 );
            if (l_U1100 == 7)
            {
                TASK_SMART_FLEE_CHAR( l_U944, sub_1109(), 100.00000000, -1 );
            }
        }
    }
    return;
}

void sub_60105()
{
    switch (l_U905[0])
    {
        case 0:
        REQUEST_MODEL( 1756785265 );
        if (HAS_MODEL_LOADED( 1756785265 ))
        {
            CREATE_CHAR( 26, 1756785265, -381.87250000, 434.84190000, 5.16930000, ref l_U932[0], 1 );
            SET_CHAR_HEADING( l_U932[0], 90.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U932[0], "gaybackoffice" );
            GIVE_WEAPON_TO_CHAR( l_U932[0], 7, 999, 0 );
            SET_CHAR_DECISION_MAKER( l_U932[0], l_U902 );
            SET_COMBAT_DECISION_MAKER( l_U932[0], l_U903 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U932[0], 23 );
            SET_CHAR_WILL_USE_COVER( l_U932[0], 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[0], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U932[0], 1 );
            SET_PED_DIES_WHEN_INJURED( l_U932[0], 1 );
            l_U905[0]++;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U932[0] )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[0], 0 );
            OPEN_SEQUENCE_TASK( ref l_U1101 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -380.23280000, 438.78480000, 5.16930000, 3, -1, 2.50000000 );
            TASK_COMBAT( 0, sub_1109() );
            CLOSE_SEQUENCE_TASK( l_U1101 );
            TASK_PERFORM_SEQUENCE( l_U932[0], l_U1101 );
            CLEAR_SEQUENCE_TASK( l_U1101 );
            l_U905[0]++;
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U932[0] )))
        {
            if (IS_CHAR_IN_AREA_3D( sub_1109(), -376.58040000, 436.57350000, 5.17430000, -374.55540000, 439.34850000, 8.17430000, 0 ))
            {
                if (NOT l_U1144[0])
                {
                    SET_AMBIENT_VOICE_NAME( l_U932[0], "M_Y_GAFR_HI_01_FULL_01" );
                    SAY_AMBIENT_SPEECH( l_U932[0], "TARGET", 1, 1, 2 );
                    l_U1144[0] = 1;
                }
                GET_SCRIPT_TASK_STATUS( l_U932[0], 36, ref l_U1100 );
                if (l_U1100 == 7)
                {
                    TASK_SHOOT_AT_COORD( l_U932[0], -375.30000000, 438.80000000, 6.70000000, 300, 3 );
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U932[0], 29, ref l_U1100 );
                if (l_U1100 == 7)
                {
                    GET_SCRIPT_TASK_STATUS( l_U932[0], 91, ref l_U1100 );
                    if (l_U1100 == 7)
                    {
                        TASK_COMBAT( l_U932[0], sub_1109() );
                    }
                }
            }
        }
        break;
    }
    switch (l_U905[1])
    {
        case 0:
        REQUEST_MODEL( 1756785265 );
        if (HAS_MODEL_LOADED( 1756785265 ))
        {
            CREATE_CHAR( 26, 1756785265, -392.32540000, 429.89970000, 5.16930000, ref l_U932[1], 1 );
            SET_CHAR_HEADING( l_U932[1], 180.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U932[1], "gaydanceflr" );
            GIVE_WEAPON_TO_CHAR( l_U932[1], 7, 999, 0 );
            SET_CHAR_DECISION_MAKER( l_U932[1], l_U902 );
            SET_COMBAT_DECISION_MAKER( l_U932[1], l_U903 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U932[1], 23 );
            SET_CHAR_WILL_USE_COVER( l_U932[1], 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[1], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U932[1], 1 );
            SET_PED_DIES_WHEN_INJURED( l_U932[1], 1 );
            l_U905[1]++;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U932[1] )))
        {
            if (((((IS_CHAR_IN_AREA_3D( sub_1109(), -397.37470000, 417.47050000, 5.17430000, -383.27470000, 440.99550000, 8.17430000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_1109(), -384.24740000, 436.38920000, 5.17430000, -381.87240000, 438.31420000, 8.17430000, 0 ))) || (IS_PLAYER_TARGETTING_CHAR( sub_4050(), l_U932[1] ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4050(), l_U932[1] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U932[1], sub_1109(), 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[1], 0 );
                TASK_COMBAT( l_U932[1], sub_1109() );
                g_U30101 = 0;
                l_U863 = 1;
                l_U1141 = 1;
                l_U1142 = 1;
                l_U905[1]++;
            }
        }
        break;
    }
    switch (l_U905[2])
    {
        case 0:
        REQUEST_MODEL( 1756785265 );
        if (HAS_MODEL_LOADED( 1756785265 ))
        {
            CREATE_CHAR( 26, 1756785265, -391.15680000, 419.42550000, 5.92240000, ref l_U932[2], 1 );
            SET_CHAR_HEADING( l_U932[2], 353.29240000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U932[2], "gaydanceflr" );
            GIVE_WEAPON_TO_CHAR( l_U932[2], 12, 999, 0 );
            SET_CHAR_DECISION_MAKER( l_U932[2], l_U902 );
            SET_COMBAT_DECISION_MAKER( l_U932[2], l_U903 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U932[2], 23 );
            SET_CHAR_WILL_USE_COVER( l_U932[2], 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[2], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U932[2], 1 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U932[2], -389.44460000, 419.72350000, 6.21300000, 1.00000000 );
            SET_PED_DIES_WHEN_INJURED( l_U932[2], 1 );
            l_U905[2]++;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U932[2] )))
        {
            if ((((IS_CHAR_IN_AREA_3D( sub_1109(), -397.37470000, 417.47050000, 5.17430000, -383.27470000, 440.99550000, 8.17430000, 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_4050(), l_U932[2] ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4050(), l_U932[2] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U932[2], sub_1109(), 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[2], 0 );
                TASK_COMBAT( l_U932[2], sub_1109() );
                l_U905[2]++;
            }
        }
        break;
    }
    switch (l_U905[3])
    {
        case 0:
        REQUEST_MODEL( 1756785265 );
        if (HAS_MODEL_LOADED( 1756785265 ))
        {
            CREATE_CHAR( 26, 1756785265, -381.40040000, 407.86720000, 4.66940000, ref l_U932[3], 1 );
            SET_CHAR_HEADING( l_U932[3], 0.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U932[3], "gayclubroom" );
            GIVE_WEAPON_TO_CHAR( l_U932[3], 12, 999, 0 );
            SET_CHAR_DECISION_MAKER( l_U932[3], l_U902 );
            SET_COMBAT_DECISION_MAKER( l_U932[3], l_U903 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U932[3], 23 );
            SET_CHAR_WILL_USE_COVER( l_U932[3], 1 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U932[3], -381.40040000, 407.86720000, 4.66940000, 5.00000000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[3], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U932[3], 1 );
            SET_PED_DIES_WHEN_INJURED( l_U932[3], 1 );
            l_U905[3]++;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U932[3] )))
        {
            if ((((IS_CHAR_IN_AREA_3D( sub_1109(), -397.37470000, 417.47050000, 5.17430000, -383.27470000, 440.99550000, 8.17430000, 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_4050(), l_U932[3] ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4050(), l_U932[3] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U932[3], sub_1109(), 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[3], 0 );
                TASK_COMBAT( l_U932[3], sub_1109() );
                l_U905[3]++;
            }
        }
        break;
    }
    switch (l_U905[4])
    {
        case 0:
        REQUEST_MODEL( 1756785265 );
        if (HAS_MODEL_LOADED( 1756785265 ))
        {
            CREATE_CHAR( 26, 1756785265, -383.27060000, 411.69710000, 4.66940000, ref l_U932[4], 1 );
            SET_CHAR_HEADING( l_U932[4], 0.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U932[4], "gayclubroom" );
            GIVE_WEAPON_TO_CHAR( l_U932[4], 12, 999, 0 );
            SET_CHAR_DECISION_MAKER( l_U932[4], l_U902 );
            SET_COMBAT_DECISION_MAKER( l_U932[4], l_U903 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U932[4], 23 );
            SET_CHAR_WILL_USE_COVER( l_U932[4], 1 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U932[4], -383.27060000, 411.69710000, 4.66940000, 5.00000000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[4], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U932[4], 1 );
            SET_PED_DIES_WHEN_INJURED( l_U932[4], 1 );
            l_U905[4]++;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U932[4] )))
        {
            if ((((IS_CHAR_IN_AREA_3D( sub_1109(), -397.37470000, 417.47050000, 5.17430000, -383.27470000, 440.99550000, 8.17430000, 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_4050(), l_U932[4] ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4050(), l_U932[4] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U932[4], sub_1109(), 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[4], 0 );
                TASK_COMBAT( l_U932[4], sub_1109() );
                l_U905[4]++;
            }
        }
        break;
    }
    switch (l_U905[5])
    {
        case 0:
        REQUEST_MODEL( 1756785265 );
        if (HAS_MODEL_LOADED( 1756785265 ))
        {
            CREATE_CHAR( 26, 1756785265, -391.68000000, 411.10000000, 4.66940000, ref l_U932[5], 1 );
            SET_CHAR_HEADING( l_U932[5], 0.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U932[5], "gayclubroom" );
            GIVE_WEAPON_TO_CHAR( l_U932[5], 12, 999, 0 );
            SET_CHAR_DECISION_MAKER( l_U932[5], l_U902 );
            SET_COMBAT_DECISION_MAKER( l_U932[5], l_U903 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U932[5], 23 );
            SET_CHAR_WILL_USE_COVER( l_U932[5], 1 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U932[5], -391.68000000, 411.10000000, 4.66940000, 1.00000000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[5], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U932[5], 1 );
            SET_PED_DIES_WHEN_INJURED( l_U932[5], 1 );
            l_U905[5]++;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U932[5] )))
        {
            if ((((IS_CHAR_IN_AREA_3D( sub_1109(), -397.37470000, 417.47050000, 5.17430000, -383.27470000, 440.99550000, 8.17430000, 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_4050(), l_U932[5] ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4050(), l_U932[5] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U932[5], sub_1109(), 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[5], 0 );
                TASK_COMBAT( l_U932[5], sub_1109() );
                l_U905[5]++;
            }
        }
        break;
    }
    switch (l_U905[6])
    {
        case 0:
        REQUEST_MODEL( 1756785265 );
        if (HAS_MODEL_LOADED( 1756785265 ))
        {
            CREATE_CHAR( 26, 1756785265, -386.13100000, 403.13130000, 4.66940000, ref l_U932[6], 1 );
            SET_CHAR_HEADING( l_U932[6], 0.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U932[6], "gayclubroom" );
            GIVE_WEAPON_TO_CHAR( l_U932[6], 12, 999, 0 );
            SET_CHAR_DECISION_MAKER( l_U932[6], l_U902 );
            SET_COMBAT_DECISION_MAKER( l_U932[6], l_U903 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U932[6], 23 );
            SET_CHAR_WILL_USE_COVER( l_U932[6], 1 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U932[6], -386.13100000, 403.13130000, 4.66940000, 5.00000000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[6], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U932[6], 1 );
            SET_PED_DIES_WHEN_INJURED( l_U932[6], 1 );
            l_U905[6]++;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U932[6] )))
        {
            if ((((IS_CHAR_IN_AREA_3D( sub_1109(), -397.37470000, 417.47050000, 5.17430000, -383.27470000, 440.99550000, 8.17430000, 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_4050(), l_U932[6] ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4050(), l_U932[6] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U932[6], sub_1109(), 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[6], 0 );
                TASK_COMBAT( l_U932[6], sub_1109() );
                l_U905[6]++;
            }
        }
        break;
    }
    switch (l_U905[7])
    {
        case 0:
        REQUEST_MODEL( 1756785265 );
        if (HAS_MODEL_LOADED( 1756785265 ))
        {
            CREATE_CHAR( 26, 1756785265, -391.05440000, 396.94560000, 8.38990000, ref l_U932[7], 1 );
            SET_CHAR_HEADING( l_U932[7], 83.90000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U932[7], "gayclubstrs" );
            GIVE_WEAPON_TO_CHAR( l_U932[7], 7, 999, 0 );
            SET_CHAR_DECISION_MAKER( l_U932[7], l_U902 );
            SET_COMBAT_DECISION_MAKER( l_U932[7], l_U903 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U932[7], 23 );
            SET_CHAR_WILL_USE_COVER( l_U932[7], 1 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U932[7], -391.05440000, 396.94560000, 8.38990000, 5.00000000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[7], 1 );
            FREEZE_CHAR_POSITION( l_U932[7], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U932[7], 1 );
            SET_PED_DIES_WHEN_INJURED( l_U932[7], 1 );
            l_U905[7]++;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U932[7] )))
        {
            if ((((IS_CHAR_IN_AREA_3D( sub_1109(), -396.72940000, 396.42060000, 4.82000000, -390.00440000, 406.72060000, 11.39500000, 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_4050(), l_U932[7] ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4050(), l_U932[7] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U932[7], sub_1109(), 0 )))
            {
                TRIGGER_POLICE_REPORT( "E2_GENERIC_CLUB_REPORT" );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[7], 0 );
                TASK_COMBAT( l_U932[7], sub_1109() );
                FREEZE_CHAR_POSITION( l_U932[7], 0 );
                l_U905[7]++;
            }
        }
        break;
    }
    switch (l_U905[8])
    {
        case 0:
        REQUEST_MODEL( 1756785265 );
        if (HAS_MODEL_LOADED( 1756785265 ))
        {
            CREATE_CHAR( 26, 1756785265, -395.58350000, 399.23070000, 13.39820000, ref l_U932[8], 1 );
            SET_CHAR_HEADING( l_U932[8], 287.98920000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U932[8], "gayclubstrs" );
            GIVE_WEAPON_TO_CHAR( l_U932[8], 7, 999, 0 );
            SET_CHAR_DECISION_MAKER( l_U932[8], l_U902 );
            SET_COMBAT_DECISION_MAKER( l_U932[8], l_U903 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U932[8], 23 );
            SET_CHAR_WILL_USE_COVER( l_U932[8], 1 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U932[8], -395.58350000, 399.23070000, 13.39820000, 2.00000000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[8], 1 );
            FREEZE_CHAR_POSITION( l_U932[8], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U932[8], 1 );
            SET_PED_DIES_WHEN_INJURED( l_U932[8], 1 );
            l_U905[8]++;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U932[8] )))
        {
            if ((((IS_CHAR_IN_AREA_3D( sub_1109(), -402.48350000, 395.88070000, 5.15320000, -389.38350000, 404.40570000, 16.40320000, 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_4050(), l_U932[8] ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4050(), l_U932[8] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U932[8], sub_1109(), 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[8], 0 );
                TASK_COMBAT( l_U932[8], sub_1109() );
                FREEZE_CHAR_POSITION( l_U932[8], 0 );
                l_U905[8]++;
            }
        }
        break;
    }
    switch (l_U905[9])
    {
        case 0:
        REQUEST_MODEL( 1756785265 );
        if (HAS_MODEL_LOADED( 1756785265 ))
        {
            CREATE_CHAR( 26, 1756785265, -400.29680000, 400.47270000, 13.41010000, ref l_U932[9], 1 );
            SET_CHAR_HEADING( l_U932[9], 287.98920000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U932[9], "gayclubvestibule" );
            GIVE_WEAPON_TO_CHAR( l_U932[9], 7, 999, 0 );
            SET_CHAR_DECISION_MAKER( l_U932[9], l_U902 );
            SET_COMBAT_DECISION_MAKER( l_U932[9], l_U903 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U932[9], 23 );
            SET_CHAR_WILL_USE_COVER( l_U932[9], 1 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U932[9], -400.29680000, 400.47270000, 13.41010000, 1.00000000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[9], 1 );
            FREEZE_CHAR_POSITION( l_U932[9], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U932[9], 1 );
            SET_PED_DIES_WHEN_INJURED( l_U932[9], 1 );
            l_U905[9]++;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U932[9] )))
        {
            if ((((IS_CHAR_IN_AREA_3D( sub_1109(), -403.89680000, 397.99770000, 9.86510000, -391.19680000, 402.47270000, 16.41510000, 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_4050(), l_U932[9] ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4050(), l_U932[9] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U932[9], sub_1109(), 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[9], 0 );
                TASK_COMBAT( l_U932[9], sub_1109() );
                FREEZE_CHAR_POSITION( l_U932[9], 0 );
                l_U905[9]++;
            }
        }
        break;
    }
    switch (l_U905[10])
    {
        case 0:
        REQUEST_MODEL( 1756785265 );
        if (HAS_MODEL_LOADED( 1756785265 ))
        {
            CREATE_CHAR( 26, 1756785265, -385.83450000, 422.46590000, 5.16930000, ref l_U932[10], 1 );
            SET_CHAR_HEADING( l_U932[10], 0.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U932[10], "gaydanceflr" );
            GIVE_WEAPON_TO_CHAR( l_U932[10], 12, 999, 0 );
            SET_CHAR_DECISION_MAKER( l_U932[10], l_U902 );
            SET_COMBAT_DECISION_MAKER( l_U932[10], l_U903 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U932[10], 23 );
            SET_CHAR_WILL_USE_COVER( l_U932[10], 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[10], 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U932[10], 1 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U932[10], -385.83450000, 422.46590000, 5.16930000, 2.00000000 );
            SET_PED_DIES_WHEN_INJURED( l_U932[10], 1 );
            l_U905[10]++;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U932[10] )))
        {
            if ((((IS_CHAR_IN_AREA_3D( sub_1109(), -397.37470000, 417.47050000, 5.17430000, -383.27470000, 440.99550000, 8.17430000, 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_4050(), l_U932[10] ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4050(), l_U932[10] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U932[10], sub_1109(), 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U932[10], 0 );
                TASK_COMBAT( l_U932[10], sub_1109() );
                l_U905[10]++;
            }
        }
        break;
    }
    if (l_U1141)
    {
        if (sub_66485())
        {
            l_U1141 = 0;
            GET_GAME_TIMER( ref l_U1143 );
        }
        else if (sub_67031())
        {
            l_U1141 = 0;
            GET_GAME_TIMER( ref l_U1143 );
        }
        else if (sub_67188())
        {
            l_U1141 = 0;
            GET_GAME_TIMER( ref l_U1143 );
        };;;
    }
    else if (sub_45215( l_U1143, 5000 ))
    {
        l_U1141 = 1;
    }
    if (l_U1142)
    {
        if (NOT (sub_22472( 0 )))
        {
            sub_22725( "E2T6_DOWN", ref l_U231, 6, 1 );
            if (DOES_CHAR_EXIST( l_U944 ))
            {
                DELETE_CHAR( ref l_U944 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U928 );
            sub_4742( l_U917 );
            if (DOES_CHAR_EXIST( l_U929 ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U929 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( -156785612 );
            l_U1142 = 0;
        }
    }
    return;
}

int sub_66485()
{
    int iVar2;

    iVar2 = sub_66495( 1 );
    if (iVar2 != -1)
    {
        if (NOT (sub_22472( 0 )))
        {
            if ((l_U1139 mod 2) == 0)
            {
                sub_1158( 2, l_U932[iVar2], "BAHAMA", 0 );
                sub_22725( "E2T6_BAH1", ref l_U231, 6, 1 );
            }
            else
            {
                sub_1158( 4, l_U932[iVar2], "BAHAMA_2", 0 );
                sub_22725( "E2T6_BAH2", ref l_U231, 6, 1 );
            }
            l_U1139++;
            return 1;
        }
    }
    return 0;
}

void sub_66495(boolean bParam0)
{
    int I;
    int Result;
    float fVar5;
    float fVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    Result = -1;
    fVar5 = 1000.00000000;
    GET_CHAR_COORDINATES( sub_1109(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
    for ( I = 0; I < l_U932; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U932[I] )))
        {
            GET_CHAR_COORDINATES( l_U932[I], ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
            if ((ABSF( uVar10._fU8 - uVar7._fU8 )) < 1.00000000)
            {
                if ((NOT bParam0) || ((bParam0) AND (IS_CHAR_SHOOTING( l_U932[I] ))))
                {
                    fVar6 = sub_66671( sub_1109(), l_U932[I] );
                    if (fVar6 < fVar5)
                    {
                        Result = I;
                        fVar5 = fVar6;
                    }
                }
            }
        }
    }
    return Result;
}

void sub_66671(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            GET_CHAR_COORDINATES( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref Result );
            return Result;
        }
    }
    return Result;
}

int sub_67031()
{
    int iVar2;

    iVar2 = sub_66495( 1 );
    if (iVar2 != -1)
    {
        if (NOT (IS_CHAR_INJURED( l_U932[iVar2] )))
        {
            SET_AMBIENT_VOICE_NAME( l_U932[iVar2], "M_Y_GAFR_HI_01_FULL_01" );
            SAY_AMBIENT_SPEECH( l_U932[iVar2], "TARGET", 1, 1, 2 );
            return 1;
        }
    }
    return 0;
}

int sub_67188()
{
    int iVar2;

    if (NOT l_U1140)
    {
        if (IS_CHAR_SHOOTING( sub_1109() ))
        {
            l_U1140 = 1;
        }
    }
    else if (NOT (IS_CHAR_SHOOTING( sub_1109() )))
    {
        iVar2 = sub_66495( 0 );
        if (iVar2 != -1)
        {
            SET_AMBIENT_VOICE_NAME( l_U932[iVar2], "M_Y_GAFR_HI_01_FULL_01" );
            SAY_AMBIENT_SPEECH( l_U932[iVar2], "TAKE_COVER", 1, 1, 2 );
            l_U1140 = 0;
            return 1;
        }
    }
    return 0;
}

void sub_67704()
{
    float fVar2;

    GET_FRAME_TIME( ref fVar2 );
    fVar2 *= 1000.00000000;
    l_U922 += ROUND( fVar2 );
    if (l_U922 > 20000)
    {
        if (NOT (sub_22472( 0 )))
        {
            if (sub_22725( "E2T6_SHOOT", ref l_U231, 6, 1 ))
            {
                l_U922 = 0;
            }
        }
    }
    return;
}

void sub_67833()
{
    sub_56591();
    sub_59778();
    switch (l_U220)
    {
        case 0:
        l_U947[0]._fU0 = 1150;
        l_U947[0]._fU4 = {-367.25670000, 404.78750000, 14.43730000};
        l_U947[1]._fU0 = 1151;
        l_U947[1]._fU4 = {-367.25670000, 404.78750000, 14.43730000};
        l_U964[0]._fU4 = sub_67962( 0, 0 );
        l_U964[0]._fU16 = {-390.21100000, 392.16750000, 13.51700000};
        l_U964[0]._fU28 = 62.20100000;
        l_U964[0]._fU32 = "male_shocked";
        l_U964[1]._fU4 = sub_67962( 0, 1 );
        l_U964[1]._fU16 = {-391.75810000, 392.66490000, 13.48620000};
        l_U964[1]._fU28 = 245.13260000;
        l_U964[1]._fU32 = "female_look_for_friends";
        l_U964[2]._fU4 = sub_67962( 0, 0 );
        l_U964[2]._fU16 = {-393.48000000, 390.99110000, 13.42150000};
        l_U964[2]._fU28 = 48.29590000;
        l_U964[2]._fU32 = "male_shocked";
        l_U964[3]._fU4 = sub_67962( 0, 1 );
        l_U964[3]._fU16 = {-394.29980000, 382.29820000, 13.37950000};
        l_U964[3]._fU28 = 257.42380000;
        l_U964[3]._fU32 = "female_look_for_friends";
        l_U964[4]._fU4 = sub_67962( 0, 0 );
        l_U964[4]._fU16 = {-392.47090000, 381.91150000, 13.47840000};
        l_U964[4]._fU28 = 32.30710000;
        l_U964[4]._fU32 = "male_shocked";
        l_U964[5]._fU4 = sub_67962( 0, 1 );
        l_U964[5]._fU16 = {-395.79220000, 381.33050000, 13.19300000};
        l_U964[5]._fU28 = 19.28680000;
        l_U964[5]._fU32 = "female_shocked";
        l_U964[6]._fU4 = sub_67962( 0, 0 );
        l_U964[6]._fU16 = {-400.33980000, 381.02570000, 12.79170000};
        l_U964[6]._fU28 = 346.41220000;
        l_U964[6]._fU32 = "male_shocked";
        l_U964[7]._fU4 = sub_67962( 0, 1 );
        l_U964[7]._fU16 = {-398.63450000, 383.49520000, 13.02600000};
        l_U964[7]._fU28 = 1.62480000;
        l_U964[7]._fU32 = "female_shocked";
        l_U964[8]._fU4 = sub_67962( 0, 0 );
        l_U964[8]._fU16 = {-401.42050000, 382.93950000, 12.73280000};
        l_U964[8]._fU28 = 343.79580000;
        l_U964[8]._fU32 = "male_shocked";
        l_U964[9]._fU4 = sub_67962( 0, 1 );
        l_U964[9]._fU16 = {-390.91330000, 384.68980000, 13.60870000};
        l_U964[9]._fU28 = 102.22250000;
        l_U964[9]._fU32 = "female_wounded_walk";
        l_U964[10]._fU4 = sub_67962( 0, 0 );
        l_U964[10]._fU16 = {-405.97040000, 390.27400000, 12.05860000};
        l_U964[10]._fU28 = 332.14850000;
        l_U964[10]._fU32 = "male_shocked";
        l_U964[11]._fU4 = sub_67962( 0, 1 );
        l_U964[11]._fU16 = {-404.60040000, 391.26500000, 12.31630000};
        l_U964[11]._fU28 = 306.25450000;
        l_U964[11]._fU32 = "female_shocked";
        l_U964[12]._fU4 = sub_67962( 0, 1 );
        l_U964[12]._fU16 = {-403.34430000, 378.11560000, 12.58000000};
        l_U964[12]._fU28 = 0.00000000;
        l_U964[12]._fU32 = "female_ground_sobbing";
        l_U964[13]._fU4 = sub_67962( 0, 1 );
        l_U964[13]._fU16 = {-402.63980000, 391.23470000, 12.52000000};
        l_U964[13]._fU28 = 189.46460000;
        l_U964[13]._fU32 = "female_ground_sobbing";
        l_U964[14]._fU4 = sub_67962( 0, 1 );
        l_U964[14]._fU16 = {-401.54430000, 384.05090000, 12.71900000};
        l_U964[14]._fU28 = 281.07340000;
        l_U964[14]._fU32 = "female_wounded_walk";
        sub_28976( "GT5_M06", 0 );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        l_U863 = 0;
        l_U220++;
        break;
        case 1:
        if (NOT l_U863)
        {
            if (IS_CHAR_IN_AREA_3D( sub_1109(), -384.02620000, 431.87570000, 4.64940000, -368.82620000, 442.87570000, 8.74940000, 0 ))
            {
                g_U30101 = 1;
            }
            else
            {
                g_U10526 = 0;
                l_U863 = 1;
                g_U30101 = 0;
            }
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            ;
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1109(), -395.66530000, 400.17660000, 14.40290000, 1.00000000, 2.00000000, 2.00000000, 0 ))
        {
            sub_52690( 0 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1756785265 );
        }
        if (NOT (sub_10152( sub_1109(), 0, 0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U944 )))
            {
                CLEAR_CHAR_TASKS( l_U944 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U944 );
            }
            SET_WANTED_MULTIPLIER( 1.00000000 );
            sub_12463( 7, 1 );
        }
        break;
    }
    sub_60105();
    sub_67704();
    sub_69976();
    sub_70129();
    sub_72577();
    return;
}

int sub_67962(unknown uParam0, boolean bParam1)
{
    int iVar4;

    if (bParam1)
    {
        switch (uParam0)
        {
            case 2:
            return g_U30224;
            break;
            case 0:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
            if (iVar4 == 0)
            {
                return g_U30216;
            }
            else
            {
                return g_U30217;
            }
            break;
            case 1:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
            if (iVar4 == 0)
            {
                return g_U30220;
            }
            else
            {
                return g_U30221;
            }
            break;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 2:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
            switch (iVar4)
            {
                case 0:
                return g_U30222;
                break;
                case 1:
                return g_U30223;
                break;
            }
            break;
            case 0:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
            if (iVar4 == 0)
            {
                return g_U30214;
            }
            else
            {
                return g_U30215;
            }
            break;
            case 1:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
            if (iVar4 == 0)
            {
                return g_U30218;
            }
            else
            {
                return g_U30219;
            }
            break;
        }
    }
    return 0;
}

void sub_69976()
{
    float fVar2;

    if (g_U30093[0])
    {
        GET_FRAME_TIME( ref fVar2 );
        fVar2 *= 1000.00000000;
        l_U924 += ROUND( fVar2 );
        if (l_U924 > 20000)
        {
            if (NOT (sub_22472( 0 )))
            {
                if (l_U923 < 2)
                {
                    if (sub_22725( "E2T6_CLEAR", ref l_U231, 6, 1 ))
                    {
                        l_U924 = 0;
                        l_U923++;
                    }
                }
            }
        }
    }
    return;
}

void sub_70129()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U1161 );
    GET_CURRENT_BASIC_COP_MODEL( ref l_U1162 );
    for ( I = 0; I < l_U947; I++ )
    {
        switch (l_U947[I]._fU16)
        {
            case 0:
            if (l_U947[I]._fU0 > 0)
            {
                REQUEST_CAR_RECORDING( l_U947[I]._fU0 );
                if (((HAS_CAR_RECORDING_BEEN_LOADED( l_U947[I]._fU0 )) AND (l_U1161 != 0)) AND (l_U1162 != 0))
                {
                    l_U947[I]._fU16++;
                }
            }
            break;
            case 1:
            if (((sub_10152( sub_1109(), 0, 1 )) AND (NOT (sub_10152( sub_1109(), 0, 0 )))) AND (NOT (sub_39057( l_U947[I]._fU4._fU0, l_U947[I]._fU4._fU4, l_U947[I]._fU4._fU8, 5.00000000 ))))
            {
                if ((l_U1161 != 0) AND (l_U1162 != 0))
                {
                    if ((HAS_MODEL_LOADED( l_U1161 )) AND (HAS_MODEL_LOADED( l_U1162 )))
                    {
                        PRINTSTRING( "CLEAR_AREA - called UPDATE_POLICE() 1" );
                        PRINTNL();
                        CLEAR_AREA( l_U947[I]._fU4._fU0, l_U947[I]._fU4._fU4, l_U947[I]._fU4._fU8, 5.00000000, 0 );
                        CREATE_CAR( l_U1161, l_U947[I]._fU4._fU0, l_U947[I]._fU4._fU4, l_U947[I]._fU4._fU8, ref l_U947[I]._fU20, 1 );
                        CREATE_CHAR_INSIDE_CAR( l_U947[I]._fU20, 6, l_U1162, ref l_U947[I]._fU24 );
                        GIVE_WEAPON_TO_CHAR( l_U947[I]._fU24, 7, 999, 0 );
                        SET_CHAR_WILL_USE_COVER( l_U947[I]._fU24, 1 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U947[I]._fU24, 1 );
                        CREATE_CHAR_AS_PASSENGER( l_U947[I]._fU20, 6, l_U1162, 0, ref l_U947[I]._fU28 );
                        GIVE_WEAPON_TO_CHAR( l_U947[I]._fU28, 7, 999, 0 );
                        SET_CHAR_WILL_USE_COVER( l_U947[I]._fU28, 1 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U947[I]._fU28, 1 );
                        START_PLAYBACK_RECORDED_CAR( l_U947[I]._fU20, l_U947[I]._fU0 );
                        SWITCH_CAR_SIREN( l_U947[I]._fU20, 1 );
                        l_U947[I]._fU16++;
                        if (l_U1158 == 0)
                        {
                            GET_GAME_TIMER( ref l_U1158 );
                        }
                    }
                }
            }
            break;
            case 2:
            if (sub_45215( l_U1158, 2000 ))
            {
                if (DOES_CHAR_EXIST( l_U1160 ))
                {
                    DELETE_CHAR( ref l_U1160 );
                }
                if (DOES_VEHICLE_EXIST( l_U1159 ))
                {
                    DELETE_CAR( ref l_U1159 );
                }
            }
            if (IS_VEH_DRIVEABLE( l_U947[I]._fU20 ))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U947[I]._fU20 )))
                {
                    l_U947[I]._fU16++;
                }
            }
            else
            {
                l_U947[I]._fU16++;
            }
            break;
            case 3:
            uVar4 = {sub_9992( 0 )};
            if (NOT (IS_CHAR_INJURED( l_U947[I]._fU24 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U1101 );
                TASK_STAND_STILL( 0, 500 );
                TASK_LEAVE_ANY_CAR( 0 );
                if (I == 0)
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -400.02630000, 391.69210000, 12.87040000, 3, -2, 1.00000000 );
                }
                else
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -397.60000000, 392.35460000, 12.98580000, 3, -2, 1.00000000 );
                }
                TASK_AIM_GUN_AT_COORD( 0, -398.92780000, 397.88250000, 14.41520000, -2 );
                CLOSE_SEQUENCE_TASK( l_U1101 );
                TASK_PERFORM_SEQUENCE( l_U947[I]._fU24, l_U1101 );
                CLEAR_SEQUENCE_TASK( l_U1101 );
            }
            if (NOT (IS_CHAR_INJURED( l_U947[I]._fU28 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U1101 );
                TASK_LEAVE_ANY_CAR( 0 );
                if (I == 0)
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -395.74460000, 400.27390000, 13.39820000, 3, -2, 1.00000000 );
                }
                else
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -395.74460000, 400.27390000, 13.39820000, 3, -2, 1.00000000 );
                }
                TASK_AIM_GUN_AT_COORD( 0, -394.47860000, 400.23710000, 14.15340000, -2 );
                CLOSE_SEQUENCE_TASK( l_U1101 );
                TASK_PERFORM_SEQUENCE( l_U947[I]._fU28, l_U1101 );
                CLEAR_SEQUENCE_TASK( l_U1101 );
            }
            SETTIMERA( 0 );
            l_U947[I]._fU16++;
            break;
            case 4:
            if (TIMERA() > 5000)
            {
                uVar4 = {sub_9992( 0 )};
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_4050(), 0 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_1109(), uVar4._fU0, uVar4._fU4, uVar4._fU8, 20.00000000, 20.00000000, 3.00000000, 0 ))
                    {
                        if (NOT sub_47861())
                        {
                            ALTER_WANTED_LEVEL( sub_4050(), 2 );
                            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_4050() );
                            l_U1155 = 1;
                            l_U947[I]._fU16++;
                        }
                        else if (LOCATE_CHAR_ANY_MEANS_3D( sub_1109(), uVar4._fU0, uVar4._fU4, uVar4._fU8, 7.00000000, 7.00000000, 3.00000000, 0 ))
                        {
                            ALTER_WANTED_LEVEL( sub_4050(), 2 );
                            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_4050() );
                            l_U1155 = 1;
                            l_U947[I]._fU16++;
                        }
                    }
                }
                else
                {
                    l_U947[I]._fU16++;
                }
                if (l_U947[I]._fU16 == 4)
                {
                    if (DOES_VEHICLE_EXIST( l_U947[I]._fU20 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U947[I]._fU20 ))
                        {
                            if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U947[I]._fU20, sub_1109() )) || (IS_CHAR_IN_CAR( sub_1109(), l_U947[I]._fU20 )))
                            {
                                ALTER_WANTED_LEVEL( sub_4050(), 2 );
                                l_U1155 = 1;
                                l_U947[I]._fU16++;
                            }
                        }
                        else
                        {
                            ALTER_WANTED_LEVEL( sub_4050(), 2 );
                            l_U1155 = 1;
                            l_U947[I]._fU16++;
                        }
                    }
                }
            }
            break;
            case 5:
            if (NOT (IS_CHAR_INJURED( l_U947[I]._fU24 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U947[I]._fU24, 91, ref l_U1100 );
                if (l_U1100 == 7)
                {
                    TASK_COMBAT( l_U947[I]._fU24, sub_1109() );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U947[I]._fU28 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U947[I]._fU28, 91, ref l_U1100 );
                if (l_U1100 == 7)
                {
                    TASK_COMBAT( l_U947[I]._fU28, sub_1109() );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U947[I]._fU24 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U947[I]._fU24, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U947[I]._fU28 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U947[I]._fU28, 0 );
            }
            l_U947[I]._fU16++;
            break;
        }
    }
    if (NOT l_U1156)
    {
        if (NOT l_U1157)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_1109(), -390.89530000, 400.26420000, 11.14480000, 1.00000000, 2.00000000, 2.00000000, 0 ))
            {
                l_U1157 = 1;
            }
        }
        else if ((l_U1161 != 0) AND (l_U1162 != 0))
        {
            if ((HAS_MODEL_LOADED( l_U1161 )) AND (HAS_MODEL_LOADED( l_U1162 )))
            {
                CREATE_CAR( l_U1161, -374.91870000, 311.76740000, 13.63450000, ref l_U1159, 1 );
                CREATE_CHAR_INSIDE_CAR( l_U1159, 6, l_U1162, ref l_U1160 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1160, 1 );
                SWITCH_CAR_SIREN( l_U1159, 1 );
                l_U1156 = 1;
            }
        }
    }
    return;
}

void sub_72577()
{
    int I;
    unknown uVar3;
    int iVar4;
    int iVar5;
    char[16] cVar6;

    GET_FRAME_TIME( ref uVar3 );
    iVar4 = ROUND( uVar3 * 1000.00000000 );
    for ( I = 0; I < l_U964; I++ )
    {
        l_U964[I]._fU8 += iVar4;
        switch (l_U964[I]._fU12)
        {
            case 0:
            REQUEST_ANIMS( "misstony06" );
            if ((HAS_MODEL_LOADED( l_U964[I]._fU4 )) AND (HAVE_ANIMS_LOADED( "misstony06" )))
            {
                l_U964[I]._fU12++;
            }
            break;
            case 1:
            if (IS_CHAR_IN_AREA_3D( sub_1109(), -395.51020000, 396.42750000, 10.39470000, -389.46020000, 401.47750000, 15.89470000, 0 ))
            {
                if (NOT (sub_39057( l_U964[I]._fU16._fU0, l_U964[I]._fU16._fU4, l_U964[I]._fU16._fU8, 5.00000000 )))
                {
                    if (HAS_MODEL_LOADED( l_U964[I]._fU4 ))
                    {
                        CREATE_CHAR( 26, l_U964[I]._fU4, l_U964[I]._fU16._fU0, l_U964[I]._fU16._fU4, l_U964[I]._fU16._fU8, ref l_U964[I]._fU0, 1 );
                        SET_CHAR_HEADING( l_U964[I]._fU0, l_U964[I]._fU28 );
                        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 1.00000000, ref uVar3 );
                        if ((COMPARE_STRING( l_U964[I]._fU32, "female_shocked" )) || (COMPARE_STRING( l_U964[I]._fU32, "male_shocked" )))
                        {
                            TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( l_U964[I]._fU0, l_U964[I]._fU32, "misstony06", 4.00000000, -1, 144, uVar3 );
                        }
                        else if (COMPARE_STRING( l_U964[I]._fU32, "female_wounded_walk" ))
                        {
                            TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( l_U964[I]._fU0, l_U964[I]._fU32, "misstony06", 4.00000000, -1, 147, uVar3 );
                        }
                        else
                        {
                            TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( l_U964[I]._fU0, l_U964[I]._fU32, "misstony06", 4.00000000, -1, 144, uVar3 );
                        }
                        StrCopy( ref cVar6, "Ped ", 16 );
                        ConcatString(ref cVar6, I, 16);
                        SET_CHAR_NAME_DEBUG( l_U964[I]._fU0, ref cVar6 );
                        StrCopy( ref cVar6, "", 16 );
                        l_U964[I]._fU12++;
                    }
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U964[I]._fU0 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U964[I]._fU0, "misstony06", l_U964[I]._fU32 ))
                {
                    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.10000000, 0.90000000, ref uVar3 );
                    SET_CHAR_ANIM_CURRENT_TIME( l_U964[I]._fU0, "misstony06", l_U964[I]._fU32, uVar3 );
                    l_U964[I]._fU12++;
                }
            }
            break;
            case 3:
            if (NOT (IS_CHAR_INJURED( l_U964[I]._fU0 )))
            {
                GET_CHAR_MODEL( l_U964[I]._fU0, ref iVar5 );
                if ((iVar5 == -844218756) || (iVar5 == -1684055465))
                {
                    if (((l_U1153 == 0) || (sub_45215( l_U1153, 6000 ))) || ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1109(), l_U964[I]._fU0, 8.00000000, 8.00000000, 8.00000000, 0 )) AND (sub_45215( l_U1153, 2000 ))))
                    {
                        if ((l_U964[I]._fU8 > 6000) || ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1109(), l_U964[I]._fU0, 8.00000000, 8.00000000, 8.00000000, 0 )) AND (sub_45215( l_U964[I]._fU8, 2000 ))))
                        {
                            if ((l_U1154 mod 2) == 0)
                            {
                                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U964[I]._fU0, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                            }
                            else
                            {
                                SAY_AMBIENT_SPEECH( l_U964[I]._fU0, "PANIC_OUTSIDE", 1, 0, 2 );
                            }
                            GENERATE_RANDOM_INT_IN_RANGE( 62536, 3000, ref l_U964[I]._fU8 );
                            l_U1154++;
                            GET_GAME_TIMER( ref l_U1153 );
                            l_U964[I]._fU8 = 0;
                        }
                    }
                }
                else if (l_U964[I]._fU8 > 6000)
                {
                    if ((l_U1152 == 0) || (sub_45215( l_U1152, 3000 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U964[I]._fU0, "PANIC_OUTSIDE", 0, 0, 2 );
                        GET_GAME_TIMER( ref l_U1152 );
                        l_U964[I]._fU8 = 0;
                    }
                }
            }
            break;
        }
    }
    return;
}

void sub_74103()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int I;

    sub_70129();
    sub_72577();
    sub_56591();
    if (NOT l_U1106)
    {
        for ( I = 0; I < l_U932; I++ )
        {
            if (DOES_CHAR_EXIST( l_U932[I] ))
            {
                if (IS_CHAR_INJURED( l_U932[I] ))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U932[I] );
                }
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1756785265 );
        sub_52690( 0 );
        l_U1106 = 1;
    }
    uVar2 = {sub_9992( 0 )};
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1109(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 100.00000000, 100.00000000, 100.00000000, 0 )))
    {
        if (IS_WANTED_LEVEL_GREATER( sub_4050(), 0 ))
        {
            if (NOT l_U866)
            {
                if (NOT (sub_22472( 0 )))
                {
                    sub_28976( "GT5_G01", 0 );
                    l_U866 = 1;
                }
            }
            l_U865 = 0;
        }
        else
        {
            sub_74375();
            sub_74459();
            sub_74623();
        }
    }
    else if (l_U1164 == 0)
    {
        GET_GAME_TIMER( ref l_U1164 );
    }
    if (NOT l_U1163)
    {
        if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1109(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 35.00000000, 35.00000000, 35.00000000, 0 ))) || ((l_U1164 != 0) AND (sub_45215( l_U1164, 20000 ))))
        {
            sub_74375();
            l_U1163 = 1;
        }
    }
    if (NOT l_U865)
    {
        if (NOT (sub_22472( 0 )))
        {
            sub_28976( "GT5_M15", 0 );
            l_U865 = 1;
        }
    }
    if (l_U1155)
    {
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_4050(), 0 )))
        {
            sub_74459();
        }
    }
    sub_60105();
    return;
}

void sub_74375()
{
    int I;

    for ( I = 0; I < l_U964; I++ )
    {
        if (DOES_CHAR_EXIST( l_U964[I]._fU0 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U964[I]._fU0 );
        }
    }
    return;
}

void sub_74459()
{
    int I;

    for ( I = 0; I < l_U947; I++ )
    {
        if (DOES_CHAR_EXIST( l_U947[I]._fU24 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U947[I]._fU24 );
        }
        if (DOES_CHAR_EXIST( l_U947[I]._fU28 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U947[I]._fU28 );
        }
        if (DOES_VEHICLE_EXIST( l_U947[I]._fU20 ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U947[I]._fU20 );
        }
    }
    return;
}

void sub_74623()
{
    int iVar2;

    l_U874 = GET_INT_STAT( 291 );
    l_U876 = GET_INT_STAT( 290 );
    l_U878 = l_U874 - l_U873;
    l_U879 = l_U876 - l_U875;
    l_U877 = l_U878 + l_U879;
    iVar2 = sub_74710();
    iVar2++;
    if (l_U877 > iVar2)
    {
        g_U43572 = 0;
    }
    else
    {
        g_U43572 = 1;
    }
    g_U30168[0] = 1;
    if (((g_U30168[2]) AND (g_U30168[0])) AND (g_U30168[1]))
    {
        sub_74947( 5 );
    }
    g_U30181 = 1;
    sub_75581( 0, "E2T6_PASS", "E2T6AUD", 0 );
    g_U25 = 80;
    sub_76276( 30 );
    UNLOCK_MISSION_NEWS_STORY( 74 );
    sub_77448();
    sub_4272();
    return;
}

void sub_74710()
{
    int I;

    if (NOT l_U1106)
    {
        l_U1104 = 0;
        for ( I = 0; I < l_U932; I++ )
        {
            if (DOES_CHAR_EXIST( l_U932[I] ))
            {
                if (IS_CHAR_INJURED( l_U932[I] ))
                {
                    l_U1104++;
                }
            }
        }
    }
    if (l_U1104 < l_U1105)
    {
        return l_U1105;
    }
    l_U1105 = l_U1104;
    return l_U1104;
}

void sub_74947(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U43030[uParam0]._fU0)
    {
        iVar3 = g_U43030[uParam0]._fU8;
        if (iVar3 > 0)
        {
            sub_75016( 2, iVar3 );
            g_U43030[uParam0]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_75016(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_75186( 0 );
    return;
}

void sub_75186(boolean bParam0)
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
        if (g_U28780[I]._fU4 == g_U28780[I]._fU0)
        {
            fVar4 = g_U28780[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U28780[I]._fU0 );
            fVar6 = TO_FLOAT( g_U28780[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U28780[I]._fU8;
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
    SET_FLOAT_STAT( 187, fVar3 );
    if (bVar7)
    {
        sub_75431();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_75431()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_75581(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_75625( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_75625(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
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
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    int I;
    int iVar38;

    if (g_U43133)
    {
        PRINTSTRING( "KGM........End of mission call blocked because the mission is being repeated\n" );
        return;
    }
    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U818 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U817 = 1;
        g_U818 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_76276(int iParam0)
{
    if (iParam0 >= g_U1459)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_76363( iParam0 ))
    {
        sub_77413( iParam0 );
    }
    return;
}

int sub_76363(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1459[uParam0], 20 )) || (IS_BIT_SET( g_U1459[uParam0], 21 )))
    {
        return 0;
    }
    sub_76420( ref uVar3, 1, 0, 0 );
    sub_77032( uVar3, ref g_U1459[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1459[uParam0], 22, 31, g_U1459[0] );
    g_U1459[0]++;
    SET_BIT( ref g_U1459[uParam0], 20 );
    sub_22901( "\n ----------------------------------------------------------------" );
    sub_1242( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_22901( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_76420(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_76473( iParam0, uParam1, uParam2 );
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
        sub_76605( iParam0 + 0 );
    }
    return;
}

void sub_76473(int iParam0, int iParam1, int iParam2)
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
        sub_76605( iParam0 + 0 );
    }
    return;
}

void sub_76605(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_76636( iParam0->_fU4 )))
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

int sub_76636(unknown uParam0)
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

void sub_77032(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_77413(unknown uParam0)
{
    return;
}

void sub_77448()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_77466();
    sub_77525( iVar2, iVar3, iVar4 );
    return;
}

void sub_77466()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U333[I] = 4;
    }
    return;
}

void sub_77525(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_77555( iVar5, uParam0, uParam1, uParam2, "GayTony" );
    return;
}

void sub_77555(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int I;
    int iVar27;
    boolean bVar28;
    unknown uVar29;
    unknown uVar30;
    int iVar31;
    boolean bVar32;

    if (bParam1)
    {
        if (g_U43133)
        {
            sub_77583();
            return;
        }
    }
    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14925[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_77757( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_77757( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14925[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_77757( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_77757( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU160._fU76;
    }
    else if (g_U14925[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_77757( ref cVar9 );
        return;
    }
    if (g_U14925[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_77757( ref cVar9 );
        return;
    }
    iVar7 = g_U14925[uParam0]._fU0._fU4;
    iVar8 = sub_78334( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12382[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14925[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12382[uParam0]._fU148[I]._fU8++;
            if ((NOT g_U12382[uParam0]._fU148[I]._fU12) AND (g_U12382[uParam0]._fU148[I]._fU8 >= g_U12382[uParam0]._fU148[I]._fU4))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12382[uParam0]._fU148[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_78782( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14925[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_4050() );
    sub_2628();
    bVar28 = true;
    uVar29 = sub_78334( uParam0, iVar7 );
    uVar30 = sub_2248( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14925[uParam0]._fU0._fU56;
        if ((iVar31 == 5) || (iVar31 == 6))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U22960[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10961 );
                sub_82551( 9, ref g_U14925[uParam0]._fU0._fU24 );
                if ((NOT bVar28) AND (g_U12379))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_77583();
                    g_U10953._fU8 = 1;
                    g_U10953._fU20 = sub_83002( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_83081( uParam0 );
                sub_83120( 0 );
                sub_2526( uVar30, 0 );
                g_U11076 = 0;
            }
            g_U12382[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_83295();
        }
    }
    if (bParam2)
    {
        sub_77583();
        sub_83394();
        sub_83120( 0 );
        g_U11062 = 1;
        g_U11076 = 0;
    }
    if (bParam3)
    {
        sub_77583();
        sub_83446();
        sub_83120( 0 );
        sub_2526( uVar30, 0 );
    }
    sub_2135();
    return;
}

void sub_77583()
{
    if (g_U0)
    {
        return;
    }
    g_U10953._fU0 = 1;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

void sub_77757(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_78334(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_2479( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U28562[iParam0]._fU0;
    iVar5 = g_U28562[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U22960[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_78782(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_78878( uParam1 );
        break;
        case 1:
        bVar8 = sub_79759( uParam1 );
        break;
        case 2:
        bVar8 = sub_79948( uParam1 );
        break;
        case 3:
        bVar8 = sub_80166( uParam1 );
        break;
        case 4:
        bVar8 = sub_80764( uParam1 );
        break;
        case 5:
        bVar8 = sub_80897( uParam1 );
        break;
        case 6:
        bVar8 = sub_81094( uParam1 );
        break;
        case 7:
        bVar8 = sub_81231( uParam1 );
        break;
        case 8:
        bVar8 = sub_81380( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_80377( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_78334( uParam0, uParam1 );
    if (bParam3)
    {
        sub_81598( uVar9, uParam0 );
    }
    return 1;
}

int sub_78878(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_79045( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        sub_79045( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_79045( iVar3, 1500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_79045( iVar3, 500, 0, 0, 0, 0 );
        break;
        case 5:
        sub_79045( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 6:
        sub_79045( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 7:
        sub_79045( iVar3, 3000, 5, 2, 0, 0 );
        break;
        case 8:
        sub_79045( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 9:
        sub_79045( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 10:
        sub_79045( iVar3, 4500, 5, 2, 0, 0 );
        break;
        case 11:
        sub_79045( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 12:
        sub_79045( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 0:
        case 13:
        case 14:
        case 15:
        case 16: break;
        default:
        sub_79667( "Gay Tony", 1 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_79667( "Gay Tony", 0 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_79045(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_79056( uParam1 );
    sub_79230( uParam0, 0, uParam2 );
    sub_79230( uParam0, 1, uParam3 );
    sub_79230( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_77466();
    return;
}

void sub_79056(unknown uParam0)
{
    ADD_SCORE( sub_4050(), uParam0 );
    sub_79081( uParam0 );
    return;
}

void sub_79081(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2479( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_79230(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12382[uParam0]._fU44[uParam1] += iParam2;
    if (g_U12382[uParam0]._fU44[uParam1] < 0)
    {
        g_U12382[uParam0]._fU44[uParam1] = 0;
    }
    if (g_U12382[uParam0]._fU44[uParam1] > 100)
    {
        g_U12382[uParam0]._fU44[uParam1] = 100;
    }
    return;
}

void sub_79667(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_79759(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_79045( iVar3, 500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_79045( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_79045( iVar3, 1500, 5, 2, 0, 0 );
        break;
        default:
        sub_79667( "Mori", 1 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_79667( "Mori", 0 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_79948(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_79045( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_79045( iVar3, 15000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_79045( iVar3, 20000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_79045( iVar3, 25000, 5, 2, 0, 0 );
        break;
        default:
        sub_79667( "Yusuf", 1 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_79667( "Yusuf", 0 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_80166(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_79045( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_79045( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 2:
        sub_79045( iVar3, 0, sub_80255(), sub_80521(), 0, 0 );
        break;
        default:
        sub_79667( "Dominicans", 1 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_79667( "Dominicans", 0 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_80255()
{
    switch (l_U333[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_80377( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_80377(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_80521()
{
    switch (l_U333[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_80377( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_80764(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_79045( iVar3, 1000, 5, 2, 0, 0 );
        break;
        default:
        sub_79667( "Mum", 1 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_79667( "Mum", 0 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_80897(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_79045( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_79045( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_79045( iVar3, 6000, 5, 2, 0, 0 );
        break;
        default:
        sub_79667( "Bulgarin", 1 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_79667( "Bulgarin", 0 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_81094(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_79045( iVar3, 5000, 5, 2, 0, 0 );
        break;
        default:
        sub_79667( "Rocco", 1 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_79667( "Rocco", 0 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_81231(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_79045( iVar3, 0, sub_80255(), sub_80521(), 0, 0 );
        break;
        default:
        sub_79667( "Henrique", 1 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_79667( "Henrique", 0 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_81380(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    if (bVar4)
    {
        sub_79667( "Reserve 1", 0 );
        sub_79045( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_81598(int iParam0, int iParam1)
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
    if (g_U10972)
    {
        return;
    }
    if (sub_81659( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_81880( iParam1 );
    }
    return;
}

int sub_81659(int iParam0, int iParam1)
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
    iVar4 = g_U14925[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U22960[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U22960[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_75016( 0, iVar6 );
            g_U14902[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U22960[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_81880(int iParam0)
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
    if (g_U14902[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14902[iParam0]._fU4 == g_U14902[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14902[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14902[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_82119( 188 );
        SET_FLOAT_STAT( 188, fVar3 );
        break;
        case 1:
        sub_82119( 192 );
        SET_FLOAT_STAT( 192, fVar3 );
        break;
        case 2:
        sub_82119( 191 );
        SET_FLOAT_STAT( 191, fVar3 );
        break;
        case 3:
        sub_82119( 197 );
        SET_FLOAT_STAT( 197, fVar3 );
        break;
        case 4: break;
        case 5:
        sub_82119( 200 );
        SET_FLOAT_STAT( 200, fVar3 );
        break;
        case 6:
        sub_82119( 201 );
        SET_FLOAT_STAT( 201, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_82119(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_82551(unknown uParam0, unknown uParam1)
{
    sub_82570( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_82570(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_83002(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 12)
        {
            return 1;
        }
    }
    if (iParam0 == 0)
    {
        if (iParam1 == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_83081(unknown uParam0)
{
    sub_1996();
    g_U12382[uParam0]._fU120 = 0;
    return;
}

void sub_83120(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_83171( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_83171(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_83295()
{
    sub_83304();
    return;
}

void sub_83304()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_83394()
{
    sub_83304();
    return;
}

void sub_83446()
{
    sub_83304();
    StrCopy( ref g_U10966, "FPASS", 16 );
    return;
}

void sub_83754()
{
    switch (l_U220)
    {
        case 0:
        if (sub_83818( 0, "E2T6_PASS", "E2T6AUD", 1000, 1 ))
        {
            l_U220++;
        }
        break;
        case 1:
        if ((sub_86966( 0 )) || (sub_87227() == 2))
        {
            sub_74623();
        }
        break;
    }
    return;
}

void sub_83818(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_83878( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_83878(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U95._fU540)
    {
        return 0;
    }
    sub_22901( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 >= 6)
        {
            sub_22901( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_4050() )))
    {
        sub_22901( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_1109() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1109() ))))
    {
        sub_22901( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        sub_22901( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_84393()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU48 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
        case 1:
        if (g_U95._fU368)
        {
            if ((g_U95._fU372) || (NOT bParam8))
            {
                sub_22901( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U95._fU60 != -1)
        {
            if ((g_U16014[g_U95._fU60]._fU212._fU24 != 5) AND (g_U16014[g_U95._fU60]._fU212._fU24 != 4))
            {
                g_U16014[g_U95._fU60]._fU212._fU24 = 0;
            }
        }
        g_U95._fU368 = 1;
        g_U95._fU372 = bParam8;
        uParam0 = g_U95._fU60;
        break;
        case 2:
        if ((NOT sub_84393()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU52 = 1;
        g_U95._fU56 = 1;
        g_U95._fU372 = 1;
        g_U95._fU368 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_85765( uParam0, ref g_U95._fU176 );
    sub_86425( ref g_U95._fU160 );
    g_U95._fU380 = uParam10;
    g_U95._fU376 = bParam11;
    g_U95._fU420 = uParam12;
    g_U95._fU424 = -1;
    g_U95._fU364 = uParam3;
    StrCopy( ref g_U95._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8972[I] = {(uParam1^)[I]};
        sub_1282( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U95._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U95._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U95._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U95._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U95._fU208, uParam6, 16 );
    g_U95._fU80 = uParam7;
    g_U95._fU384 = 0;
    g_U95._fU532 = uParam13;
    g_U8867 = 4;
    return 1;
}

int sub_84393()
{
    if ((g_U95._fU48) || (g_U95._fU52))
    {
        return 0;
    }
    if (g_U95._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_84450())
    {
        return 0;
    }
    if (g_U560 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_84450()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_4050() )))
    {
        sub_22901( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_22901( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U95._fU376)
    {
        sub_22901( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U95._fU100) || (g_U95._fU104))
    {
        sub_22901( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_4050() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1109() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_1109(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_22901( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_1109() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_22901( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_22901( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_4050() )))
    {
        sub_22901( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_85765(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "TONY", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "MORI", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "YUSUF", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "ARMANDO", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "ADRIANA", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "BULGARIN", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ROCCO", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "HENRIQUE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "reserve1", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "ASSISTANT", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "DESSIE", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "JOJO", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "TAYLOR", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "VIKKY", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "ANA", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "DANA", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "CINDY", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "TANIA", 32 );
        break;
        case 23:
        StrCopy( (uParam1^), "LILY", 32 );
        break;
        case 24:
        StrCopy( (uParam1^), "TAMI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DOMINO", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "HEIDI", 32 );
        break;
        case 27:
        StrCopy( (uParam1^), "SIMONE", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        break;
    }
    return;
}

void sub_86425(unknown uParam0)
{
    StrCopy( (uParam0^), "LUIS", 16 );
    return;
}

int sub_86966(boolean bParam0)
{
    unknown uVar3;

    if (g_U95._fU60 != -1)
    {
        switch (g_U16014[g_U95._fU60]._fU212._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U95._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_1109(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_22901( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

int sub_87227()
{
    if (g_U95._fU60 != -1)
    {
        return g_U16014[g_U95._fU60]._fU212._fU24;
    }
    return 6;
}

void sub_87319()
{
    sub_75581( 0, "E2T6_FCKIK", "E2T6AUD", 0 );
    sub_3636();
    return;
}

void sub_87376()
{
    sub_75581( 0, "E2T6_FCDAN", "E2T6AUD", 0 );
    sub_3636();
    return;
}

void sub_87433()
{
    switch (l_U220)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U931 )))
        {
            if (NOT (sub_22472( 0 )))
            {
                sub_3663();
                if (sub_22725( "E2T6_TRASH", ref l_U231, 6, 1 ))
                {
                    l_U220++;
                }
            }
        }
        break;
        case 1:
        if (NOT (sub_22472( 0 )))
        {
            sub_51603( "GT5_F06" );
            sub_3636();
        }
        break;
    }
    return;
}

void sub_87885(unknown uParam0, int iParam1, unknown uParam2)
{
    if (iParam1 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( iParam1 )))
    {
        return;
    }
    g_U42871._fU0 = uParam0;
    g_U42871._fU4 = iParam1;
    g_U42871._fU8 = uParam2;
    g_U42871._fU12 = 0;
    if (g_U12379)
    {
        g_U42871._fU12 = 1;
    }
    return;
}

void sub_88142(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (sub_88151() == 0)
    {
        sub_88176();
    }
    if (HAS_SCRIPT_LOADED( "MissionResultsTimer" ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) == 0)
        {
            START_NEW_SCRIPT( "MissionResultsTimer", 1024 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionResultsTimer" );
        }
    }
    if (sub_90931() <= g_U43138[g_U43137]._fU8)
    {
        g_U43568 = 1;
    }
    else
    {
        g_U43568 = 0;
    }
    if (g_U43600 == 1)
    {
        g_U43612 = sub_91213();
        g_U43600 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (sub_90931() < g_U43612)
            {
                g_U43575 = 1;
            }
            else
            {
                g_U43575 = 0;
            }
        }
        else
        {
            g_U43575 = 0;
        }
    }
    else
    {
        g_U43575 = 0;
    }
    if (g_U43137 == 22)
    {
        if ((sub_92006( 0, 0, 0 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_92316();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_92006( 0, 0, 0 )) > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43137 == 17)
    {
        if ((sub_92006( 1, 0, 0 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_92316();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_92006( 1, 0, 0 )) > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43137 == 15)
    {
        g_U43519 = uParam0;
        if (g_U43519 >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_92316();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (g_U43519 > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if ((g_U43137 == 18) || (g_U43137 == 16))
    {
        if ((sub_92006( 0, 0, 1 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_92316();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_92006( 0, 0, 1 )) > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43137 == 25)
    {
        g_U43519 = uParam0;
        if (g_U43519 >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_92316();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (g_U43519 > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43571 == 1)
    {
        iVar3 = 1;
    }
    else
    {
        iVar3 = 0;
    }
    if (g_U43572 == 1)
    {
        iVar4 = 1;
    }
    else
    {
        iVar4 = 0;
    }
    if (g_U43573 == 1)
    {
        iVar5 = 1;
    }
    else
    {
        iVar5 = 0;
    }
    if (g_U43607 == 1)
    {
        g_U43619 = sub_93788();
        g_U43607 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (iVar3 > g_U43619)
            {
                g_U43582 = 1;
            }
            else
            {
                g_U43582 = 0;
            }
        }
        else
        {
            g_U43582 = 0;
        }
    }
    else
    {
        g_U43582 = 0;
    }
    if (g_U43608 == 1)
    {
        g_U43620 = sub_94484();
        g_U43608 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (iVar4 > g_U43620)
            {
                g_U43583 = 1;
            }
            else
            {
                g_U43583 = 0;
            }
        }
        else
        {
            g_U43583 = 0;
        }
    }
    else
    {
        g_U43583 = 0;
    }
    if (g_U43609 == 1)
    {
        g_U43621 = sub_95063();
        g_U43609 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (iVar5 > g_U43621)
            {
                g_U43584 = 1;
            }
            else
            {
                g_U43584 = 0;
            }
        }
        else
        {
            g_U43584 = 0;
        }
    }
    else
    {
        g_U43584 = 0;
    }
    return;
}

int sub_88151()
{
    return 0;
}

void sub_88176()
{
    if (sub_88190( sub_1109() ))
    {
        if (IS_CONTROL_PRESSED( 2, 77 ))
        {
            if (l_U858 == 0)
            {
                GET_GAME_TIMER( ref l_U855 );
                l_U858 = 1;
            }
            GET_GAME_TIMER( ref l_U856 );
            l_U857 = l_U856 - l_U855;
            if (l_U857 < 1000)
            {
                PRINTNL();
                PRINTSTRING( "***************************" );
                PRINTNL();
                PRINTSTRING( "Player is in the back of a taxi - Blocking Mission Time Goal" );
                PRINTNL();
                PRINTSTRING( "***************************" );
                PRINTNL();
                g_U43593 = 1;
            }
        }
    }
    sub_88720();
    if (g_U12379 == 1)
    {
        if ((IS_BIT_SET( g_U10938._fU0, 7 )) == 0)
        {
            if (g_U43133 == 0)
            {
                if (l_U854 == 0)
                {
                    GET_GAME_TIMER( ref l_U851 );
                    l_U854 = 1;
                }
                GET_GAME_TIMER( ref l_U852 );
                l_U853 = l_U852 - l_U851;
                if (l_U853 < 1000)
                {
                    g_U43597 = 1;
                    PRINTNL();
                    PRINTSTRING( "***************************" );
                    PRINTNL();
                    PRINTSTRING( "Player has used a trip skip - Blocking Mission Goals" );
                    PRINTNL();
                    PRINTSTRING( "***************************" );
                    PRINTNL();
                }
            }
            else
            {
                g_U43597 = 0;
            }
        }
        else
        {
            g_U43597 = 0;
        }
    }
    return;
}

int sub_88190(int iParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (sub_88254( uVar3 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar3, ref iVar5 );
                    if (iVar5 == 3)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 1, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 2, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_88254(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2687))
    {
        return 1;
    }
    return 0;
}

void sub_88720()
{
    int iVar2;

    iVar2 = 1000;
    if (CHEAT_HAPPENED_RECENTLY( 0, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Poor Weapon Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 1, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Advance Weapon Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 22, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used E2 Weapon Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 30, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used E2 Explosive punch cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 7, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Annihilitor cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 27, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Buzzard cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 26, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used APC cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 2, iVar2 ))
    {
        g_U43594 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Health Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 4, iVar2 ))
    {
        g_U43596 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Wanted Level Reduction - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    return;
}

void sub_90931()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;

    if (g_U12379 == 1)
    {
        if (NOT (IS_CHAR_DEAD( sub_1109() )))
        {
            GET_CHAR_HEALTH( sub_1109(), ref g_U43521 );
        }
    }
    uVar3 = TO_FLOAT( g_U43521 );
    uVar4 = TO_FLOAT( g_U43520 );
    fVar2 = uVar3 / uVar4;
    fVar2 *= 100;
    fVar2 -= 100;
    if (fVar2 < 0)
    {
        fVar2 *= -1;
    }
    fVar2 *= 2;
    if (fVar2 < 0)
    {
        fVar2 = 0;
    }
    if (fVar2 > 100)
    {
        fVar2 = 100;
    }
    g_U43522 = FLOOR( fVar2 );
    if (g_U43522 < 0)
    {
        g_U43522 = 0;
    }
    return g_U43522;
}

int sub_91213()
{
    if (g_U43137 == 0)
    {
        return GET_INT_STAT( 475 );
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 479 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 484 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 578 );
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 544 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 550 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 557 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 525 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 533 );
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 568 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 573 );
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 493 );
    }
    if (g_U43137 == 4)
    {
        return GET_INT_STAT( 498 );
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 502 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 506 );
    }
    if (g_U43137 == 8)
    {
        return GET_INT_STAT( 511 );
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 583 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 591 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 599 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 563 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 605 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 520 );
    }
    return 0;
}

void sub_92006(int iParam0, int iParam1, int iParam2)
{
    if (iParam1 == 1)
    {
        g_U43518 = GET_INT_STAT( 296 );
        g_U43519 = g_U43518 - g_U43517;
    }
    else if (iParam2 == 1)
    {
        g_U43518 = GET_INT_STAT( 297 );
        g_U43519 = g_U43518 - g_U43517;
    }
    else if (iParam0 == 1)
    {
        if (l_U850 < GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER())
        {
            g_U43519++;
        }
        l_U850 = GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER();
    }
    else
    {
        g_U43518 = GET_INT_STAT( 294 );
        g_U43519 = g_U43518 - g_U43517;
    };;;
    if (g_U43519 < 0)
    {
        g_U43519 = 0;
    }
    return g_U43519;
}

int sub_92316()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 547 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 553 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 558 );
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 586 );
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 565 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 608 );
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_93788()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 481 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 487 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 579 );
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 560 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 529 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 534 );
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 495 );
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 503 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 507 );
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 613 );
    }
    if (g_U43137 == 14)
    {
        return GET_INT_STAT( 541 );
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 587 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 594 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 602 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 564 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_94484()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 580 );
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 535 );
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 494 );
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 612 );
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 588 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 595 );
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_95063()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 554 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 596 );
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

void sub_95584()
{
    if (l_U222)
    {
        if ((((((((((((NOT (IS_BUTTON_PRESSED( 0, 16 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 17 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 14 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 15 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 4 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 5 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 6 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 7 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 8 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 11 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 ))))
        {
            l_U222 = 0;
        }
    }
    if ((NOT l_U226) || (sub_22630()))
    {
        WAIT( 0 );
    }
    else
    {
        l_U226 = 0;
    }
    return;
}
