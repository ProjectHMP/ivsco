void main()
{
    int iVar2;

    l_U177 = 0;
    l_U197 = 0;
    l_U198 = 0;
    l_U199 = 1;
    l_U200 = 3;
    l_U202 = 0;
    l_U204 = 0;
    l_U221 = -1;
    l_U225 = 0;
    l_U226 = 1;
    l_U227 = 1;
    l_U228 = 150.00000000;
    l_U318 = 0;
    l_U319 = 150.00000000;
    l_U369 = 0;
    l_U572 = 0;
    l_U587 = 0;
    l_U588 = 0;
    l_U589 = 0;
    l_U591 = 0;
    l_U592 = 0;
    l_U593 = 0;
    l_U594 = 0;
    l_U596 = 4;
    l_U597 = 0;
    l_U714 = 1;
    l_U715 = 0;
    l_U716 = 0;
    l_U718 = -1;
    l_U725 = 0;
    l_U727 = 0;
    l_U810 = -1;
    l_U811 = -1;
    l_U820 = -1;
    l_U822 = -1;
    l_U823 = -1;
    l_U824 = 0;
    l_U826 = -1;
    l_U829 = -1;
    l_U832 = 0;
    l_U833 = -1;
    l_U836 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    sub_284( l_U841 );
    while (l_U714)
    {
        WAIT( 0 );
        if (NOT g_U33838)
        {
            if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
            {
                if ((l_U594 >= 3) AND (l_U594 < 15))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U837 )))
                    {
                        l_U594 = 3;
                    }
                }
                sub_1015( 0, 1, l_U834 );
                g_U32928[2] = 0;
                sub_2244();
            }
            switch (l_U594)
            {
                case 0:
                if (l_U810 < 0)
                {
                    GET_GAME_TIMER( ref l_U810 );
                    GENERATE_RANDOM_INT_IN_RANGE( sub_1324( 48 ), sub_1324( 60 ), ref l_U817 );
                }
                else
                {
                    GET_GAME_TIMER( ref l_U717 );
                    sub_2510( "  iEmail_wait alex: " );
                    sub_2544( (l_U810 + l_U817) - l_U717 );
                    sub_2765();
                    if ((l_U717 > (l_U810 + l_U817)) || (IS_KEYBOARD_KEY_PRESSED( 11 )))
                    {
                        l_U646 = {sub_2836( ref l_U648, 3, 1 )};
                        if (sub_3300( l_U646, 4, ref l_U739, 0 ))
                        {
                            l_U594 = 1;
                        }
                    }
                }
                break;
                case 1:
                if ((sub_5304( ref l_U739, 0 )) == 5)
                {
                    if (sub_5447( ref l_U739 ))
                    {
                        sub_5493( ref l_U739, 0, 1 );
                        if (l_U812 <= 0)
                        {
                            sub_5637( l_U646._fU4, l_U646._fU0, 1 );
                        }
                        else
                        {
                            sub_5637( l_U646._fU4, l_U646._fU0, 10 );
                        }
                        l_U594 = 2;
                    }
                    else
                    {
                        sub_5493( ref l_U739, 0, 1 );
                        sub_1015( 1, 1, l_U834 );
                        sub_6127( sub_6013( 2 ) );
                        sub_1824( 2, 65506, "replied negative" );
                        GET_GAME_TIMER( ref l_U811 );
                        l_U594 = 15;
                    }
                }
                break;
                case 2:
                if (IS_SCREEN_FADED_IN())
                {
                    switch (sub_6919( l_U646 ))
                    {
                        case 0: break;
                        case 1:
                        case 2:
                        l_U594 = 5;
                        break;
                        case 3: break;
                    }
                }
                else
                {
                    PRINTSTRING( "dating_alex.WAIT_FOR_PICKUP_TIME, not faded in\n" );
                }
                break;
                case 3:
                if (NOT (sub_7389( 2 )))
                {
                    if (NOT (sub_7462( 2 )))
                    {
                        if (sub_15178())
                        {
                            l_U820 = -1;
                            l_U819 = 0;
                            l_U826 = -1;
                            l_U646 = {sub_2836( ref l_U648, 3, 1 )};
                            l_U594 = 5;
                        }
                        else
                        {
                            switch (sub_25246( 2, sub_16037(), ref l_U828, ref l_U815, l_U720, 10.00000000, 72.00000000, 144.00000000 ))
                            {
                                case 0: break;
                                case 2:
                                sub_1015( 0, 1, l_U834 );
                                break;
                                case 3: break;
                                case 1:
                                l_U594 = 4;
                                break;
                            }
                            if (NOT l_U715)
                            {
                                if (sub_26765( 2 ))
                                {
                                    l_U594 = 14;
                                }
                            }
                        }
                        sub_19347( 2, ref l_U768, ref l_U819, ref l_U820 );
                        sub_26936( 2, ref l_U775, ref l_U821, ref l_U822, 5.00000000, sub_16037(), l_U720, 10.00000000 );
                        sub_27165( 2, ref l_U782, ref l_U827, ref l_U825, ref l_U826, 1.00000000 );
                    }
                }
                else if (sub_27938( 2, ref l_U796, ref l_U811 ))
                {
                    sub_28405( 0 );
                    l_U594 = 15;
                }
                break;
                case 4:
                switch (sub_15735())
                {
                    case 0: break;
                    case 1:
                    case 2:
                    case 5:
                    case 8:
                    if (sub_15735() == 1)
                    {
                        sub_1824( 2, -1, "CALL_NOT_ANSWERED" );
                        l_U824++;
                        if (l_U824 > 3)
                        {
                            sub_28405( 5 );
                        }
                    }
                    else if (sub_15735() == 2)
                    {
                        sub_1824( 2, -1, "CALL_HANG_UP" );
                        l_U824++;
                        if (l_U824 > 3)
                        {
                            sub_28405( 5 );
                        }
                    }
                    else if ((sub_15735() == 5) || (sub_15735() == 8))
                    {
                        sub_1824( 2, -1, "CALL_ANSWERED_NO" );
                    }
                    else
                    {
                        SCRIPT_ASSERT( "invalid get_call_status in REPLY_TO_ALEX" );
                    };;;
                    l_U836 = 1;
                    sub_1015( 0, 1, l_U834 );
                    l_U594 = 3;
                    break;
                    case 4:
                    case 7:
                    if (NOT sub_20566())
                    {
                        l_U822 = -1;
                        l_U824 = 0;
                        l_U594 = 5;
                    }
                    break;
                }
                break;
                case 5:
                if (l_U812 <= 0)
                {
                    iVar2 = 1;
                }
                else
                {
                    iVar2 = 2;
                }
                if (NOT (sub_29475( 2, ref l_U834, l_U837, iVar2 )))
                {
                    if (g_U32928[2] != 3)
                    {
                        if (sub_30586( 2, ref l_U837, l_U728, ref l_U834, ref l_U725, iVar2 ))
                        {
                            sub_33627( l_U646._fU4, l_U646._fU0, 1 );
                            l_U832 = 0;
                            l_U592 = 0;
                            if (sub_33683())
                            {
                                l_U594 = 6;
                            }
                            else
                            {
                                l_U594 = 7;
                            }
                        }
                    }
                    else
                    {
                        sub_33627( l_U646._fU4, l_U646._fU0, 1 );
                        l_U836 = 1;
                        sub_1015( 0, 1, l_U834 );
                        l_U594 = 3;
                    }
                }
                else
                {
                    sub_33627( l_U646._fU4, l_U646._fU0, 1 );
                    l_U594 = 9;
                }
                break;
                case 6:
                if (sub_34107( 2, ref l_U716, ref l_U840, ref l_U838, l_U728, l_U731, l_U734, 7500 ))
                {
                    sub_44024( l_U646 );
                }
                break;
                case 7:
                if (sub_44646( 2, ref l_U716, ref l_U840, ref l_U838, l_U728, l_U731, l_U734 ))
                {
                    sub_44024( l_U646 );
                }
                break;
                case 8:
                if (g_U32928[2] == 1)
                {
                    g_U32934[2] = 29;
                    l_U594 = 9;
                }
                else if (g_U32928[2] == 3)
                {
                    g_U32928[2] = 0;
                    l_U594 = 3;
                }
                break;
                case 9:
                switch (g_U32928[2])
                {
                    case 1:
                    if (g_U32934[2] != 29)
                    {
                        sub_46602( 2, ref l_U598, ref l_U628, ref g_U32934[2] );
                    }
                    break;
                    case 5:
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U838 );
                    if (l_U812 <= 0)
                    {
                        if (sub_48971( 2, 4, ref l_U739, ref l_U646, ref l_U648 ))
                        {
                            l_U836 = 1;
                            sub_1015( 0, 1, l_U834 );
                            g_U32928[2] = 0;
                            l_U594 = 1;
                        }
                    }
                    else if (IS_CHAR_DEAD( sub_10774() ))
                    {
                        sub_49143( 2, ref l_U812, 0, 1 );
                    }
                    else
                    {
                        sub_49143( 2, ref l_U812, 0, 3 );
                    }
                    l_U836 = 1;
                    sub_1015( 0, 1, l_U834 );
                    sub_6127( sub_6013( 2 ) );
                    sub_49395( 2 );
                    g_U32928[2] = 0;
                    l_U594 = 3;;
                    break;
                    case 4:
                    if (l_U812 <= 0)
                    {
                        if (sub_50394( 4, l_U750 ))
                        {
                            l_U836 = 1;
                            sub_1015( 0, 1, l_U834 );
                            sub_6127( sub_6013( 2 ) );
                            sub_1824( 2, 65511, "missed first date" );
                            sub_4145( ref l_U739, 0 );
                            sub_4176( ref l_U739, 1 );
                            GET_GAME_TIMER( ref l_U811 );
                            SET_PLAYER_MOOD_PISSED_OFF( sub_10695(), 150 );
                            g_U32928[2] = 0;
                            l_U594 = 15;
                        }
                    }
                    else if (sub_50590( 2, ref l_U761, sub_17256( 2 ) ))
                    {
                        sub_1015( 0, 1, l_U834 );
                        sub_6127( sub_6013( 2 ) );
                        SET_PLAYER_MOOD_PISSED_OFF( sub_10695(), 150 );
                        if (sub_50775( 2 ))
                        {
                            sub_28405( 7 );
                        }
                        else
                        {
                            sub_28405( 6 );
                        }
                        g_U32928[2] = 0;
                        l_U594 = 3;
                    }
                    break;
                    case 2:
                    case 3:
                    if (DOES_BLIP_EXIST( l_U837 ))
                    {
                        REMOVE_BLIP( l_U837 );
                    }
                    l_U594 = 10;
                    break;
                    case 6:
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U838 );
                    GET_GAME_TIMER( ref l_U718 );
                    l_U594 = 11;
                    break;
                    case 7:
                    l_U594 = 12;
                    break;
                    case 8:
                    l_U594 = 13;
                    break;
                    case 9:
                    if (DOES_BLIP_EXIST( l_U837 ))
                    {
                        REMOVE_BLIP( l_U837 );
                    }
                    l_U836 = 1;
                    sub_1015( 0, 1, l_U834 );
                    sub_6127( sub_6013( 2 ) );
                    SET_PLAYER_MOOD_PISSED_OFF( sub_10695(), 150 );
                    g_U32928[2] = 0;
                    l_U594 = 3;
                    break;
                }
                break;
                case 10:
                switch (sub_51126( ref l_U838, 2, ref l_U595, ref l_U840, l_U728, 268.63340000, ref l_U812, l_U731, ref l_U823, l_U726 ))
                {
                    case 1: break;
                    case 0:
                    if (l_U812 >= 3)
                    {
                        if (g_U33842[2])
                        {
                            if (l_U715)
                            {
                                l_U827 = 1;
                            }
                        }
                    }
                    sub_87599( 2, l_U726 );
                    sub_1015( 1, 1, l_U834 );
                    l_U594 = 3;
                    break;
                    case 2:
                    SET_PLAYER_MOOD_PISSED_OFF( sub_10695(), 150 );
                    GET_GAME_TIMER( ref l_U811 );
                    g_U32928[2] = 0;
                    l_U594 = 15;
                    break;
                    default: SCRIPT_ASSERT( "PLAY_DROPOFF_CUTSCENE_ANY_MEANS(ALEX)" );
                }
                break;
                case 11:
                if (l_U812 <= 0)
                {
                    if (sub_87848( 2, 4, ref l_U739, l_U718, ref l_U646, ref l_U648 ))
                    {
                        l_U836 = 1;
                        sub_87599( 2, l_U726 );
                        sub_1015( 1, 1, l_U834 );
                        g_U32928[2] = 0;
                        l_U594 = 1;
                    }
                }
                else if (sub_88190( ref l_U838, 2, l_U837, ref l_U840, l_U728, 268.63340000, ref l_U812, l_U731, ref l_U718, l_U596, ref l_U815, ref l_U597 ))
                {
                    sub_87599( 2, l_U726 );
                    sub_1015( 1, 1, l_U834 );
                    g_U32928[2] = 0;
                    l_U594 = 3;
                }
                break;
                case 12:
                if (sub_94145( ref l_U838, 2, ref l_U840, ref l_U812, ref l_U716, l_U726 ))
                {
                    if (l_U812 <= 1)
                    {
                        sub_1824( 2, -15, "bored first date" );
                        g_U32928[2] = 0;
                        l_U594 = 15;
                    }
                    else
                    {
                        sub_87599( 2, l_U726 );
                        sub_1015( 1, 1, l_U834 );
                        g_U32928[2] = 0;
                        l_U594 = 3;
                    }
                }
                break;
                case 13:
                if (sub_94145( ref l_U838, 2, ref l_U840, ref l_U812, ref l_U716, l_U726 ))
                {
                    if (l_U812 <= 1)
                    {
                        sub_1824( 2, -15, "scared first date" );
                        g_U32928[2] = 0;
                        l_U594 = 15;
                    }
                    else
                    {
                        l_U836 = 1;
                        sub_87599( 2, l_U726 );
                        sub_1015( 1, 1, l_U834 );
                        g_U32928[2] = 0;
                        l_U594 = 3;
                    }
                }
                break;
                case 14:
                if (NOT l_U715)
                {
                    if (NOT (sub_7462( 2 )))
                    {
                        if (sub_15178())
                        {
                            l_U820 = -1;
                            l_U819 = 0;
                            l_U646 = {sub_2836( ref l_U648, 2, 1 )};
                            l_U594 = 5;
                        }
                        else if (sub_99357( 2, ref l_U829, ref l_U830, sub_16037(), ref l_U831 ))
                        {
                            g_U15946[sub_6013( 2 )]._fU8[0]._fU0[1] = 1;
                            GET_GAME_TIMER( ref l_U833 );
                            l_U833 -= sub_1324( 20.00000000 );
                            l_U594 = 3;
                            l_U715 = 1;
                        }
                    }
                }
                else if (IS_PLAYER_PLAYING( sub_10695() ))
                {
                    sub_2510( "  * do discount\n" );
                    if (NOT g_U8378)
                    {
                        sub_2510( "  ** NOT gbAlex_half_price_discount_active\n" );
                        if (g_U8379 < 0)
                        {
                            sub_2510( "  *** begin special ability timer\n" );
                            GET_GAME_TIMER( ref g_U8379 );
                            g_U8378 = 1;
                        }
                        else
                        {
                            SCRIPT_ASSERT( "gbAlex_half_price_discount_active" );
                            g_U8378 = 0;
                            g_U8379 = -1;
                            l_U594 = 3;
                        }
                    }
                    else
                    {
                        sub_2510( "  ** gbAlex_half_price_discount_active - " );
                        sub_2544( (g_U8379 + (sub_1324( 20.00000000 ))) - l_U717 );
                        sub_2765();
                        GET_GAME_TIMER( ref l_U717 );
                        if (l_U717 > (g_U8379 + (sub_1324( 20.00000000 ))))
                        {
                            sub_2510( "  * ALEX DISCOUNT EXPIRED\n" );
                            g_U8378 = 0;
                            g_U8379 = -1;
                            l_U594 = 3;
                        }
                        else if ((sub_7513( sub_6013( 2 ), 1 )) || (g_U15946[sub_6013( 2 )]._fU4))
                        {
                            sub_10421( "GCA_ANSPH", sub_7993( 2, 28 ), 1 );
                            sub_14642( sub_14473( 2 ) );
                            while (NOT (sub_14672( 0 )))
                            {
                                PRINTSTRING( "while IS_PLAYER_CURRENTLY_ON_A_DATE...\n" );
                                WAIT( 0 );
                            }
                            if (g_U15946[sub_6013( 2 )]._fU8[1]._fU0[0])
                            {
                                g_U15946[sub_6013( 2 )]._fU8[1]._fU0[0] = 0;
                            }
                            if (g_U15946[sub_6013( 2 )]._fU8[1]._fU0[1])
                            {
                                g_U15946[sub_6013( 2 )]._fU8[1]._fU0[1] = 0;
                            }
                            if (g_U15946[sub_6013( 2 )]._fU4)
                            {
                                g_U15946[sub_6013( 2 )]._fU4 = 0;
                            }
                        }
                    }
                }
                else
                {
                    g_U8378 = 0;
                    g_U8379 = -1;
                    l_U594 = 3;
                }
                break;
                case 15:
                sub_1541( 2, 0 );
                if (NOT l_U727)
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 367, 1 );
                    l_U727 = 1;
                    sub_101104( sub_6013( 2 ) );
                }
                if (sub_101208( 0, ref l_U811, 2.00000000 ))
                {
                    l_U714 = 0;
                }
                break;
            }
            GET_GAME_TIMER( ref l_U717 );
        }
    }
    sub_101360();
    return;
}

void sub_284(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45, unknown uParam46, unknown uParam47, unknown uParam48, unknown uParam49, unknown uParam50, unknown uParam51, unknown uParam52, unknown uParam53, unknown uParam54, unknown uParam55, unknown uParam56, unknown uParam57, unknown uParam58, unknown uParam59, unknown uParam60, unknown uParam61, unknown uParam62, unknown uParam63)
{
    int I;

    l_U728 = {82.42990000, 1084.30200000, 16.00830000};
    l_U731 = {82.36730000, 1077.31300000, 13.83840000};
    l_U734 = 0.00000000;
    l_U735 = {61.47660000, 1085.48900000, 13.53590000};
    l_U738 = 270.00000000;
    l_U634[0] = 486987393;
    l_U634[1] = -1896659641;
    l_U634[2] = -1961627517;
    l_U634[3] = 418536135;
    l_U634[4] = -2030171296;
    l_U640[0] = 723973206;
    l_U640[1] = 1075851868;
    l_U640[2] = -119658072;
    l_U640[3] = -685276541;
    l_U640[4] = 1937616578;
    sub_506();
    for ( I = 0; I < l_U628; I++ )
    {
        l_U628[I] = 29;
    }
    sub_898( ref l_U834 );
    g_U33839++;
    ProtectedSet(g_U34042[2], 50);
    g_U34005[2] = 0;
    l_U726 = 50;
    l_U812 = 0;
    l_U813 = 0;
    l_U815 = 0;
    l_U814 = 0;
    l_U816 = 0;
    sub_1015( 1, 1, l_U834 );
    sub_1484( ref l_U720 );
    l_U828 = -1;
    sub_1541( 2, 1 );
    return;
}

void sub_506()
{
    l_U598[0] = 50;
    l_U598[1] = 50;
    l_U598[2] = 50;
    l_U598[3] = 50;
    l_U598[4] = 50;
    l_U598[5] = 50;
    l_U598[6] = 50;
    l_U598[7] = 50;
    l_U598[8] = 50;
    l_U598[9] = 60;
    l_U598[10] = 60;
    l_U598[11] = 60;
    l_U598[12] = 60;
    l_U598[13] = 60;
    l_U598[14] = 50;
    l_U598[15] = 50;
    l_U598[20] = 60;
    l_U598[17] = 70;
    l_U598[18] = 70;
    l_U598[19] = 50;
    l_U598[16] = 50;
    l_U598[21] = 80;
    l_U598[22] = 80;
    l_U598[23] = 80;
    l_U598[24] = 80;
    l_U598[25] = 80;
    l_U598[26] = 80;
    l_U598[27] = 80;
    l_U598[28] = 80;
    return;
}

void sub_898(int iParam0)
{
    iParam0->_fU0 = -1;
    iParam0->_fU4 = -1;
    return;
}

void sub_1015(boolean bParam0, boolean bParam1, unknown uParam2, unknown uParam3)
{
    if (bParam0)
    {
        sub_1035( ref l_U720 );
    }
    GET_GAME_TIMER( ref l_U719 );
    if (bParam1)
    {
        GET_GAME_TIMER( ref l_U828 );
        l_U828 += sub_1324( sub_1146( l_U836 ) );
        sub_1383( ref l_U822, 10.00000000, sub_1146( 0 ) );
        l_U836 = 0;
    }
    SETTIMERA( 0 );
    return;
}

void sub_1035(int iParam0)
{
    sub_1048( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_1048(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

float sub_1146(boolean bParam0)
{
    float fVar3;

    fVar3 = 75.00000000;
    if (bParam0)
    {
        fVar3 *= 3.00000000;
    }
    if (g_U33839 <= 1)
    {
        return 75.00000000;
        break;
    }
    if (g_U33839 <= 2)
    {
        return 75.00000000 * 1.50000000;
        break;
    }
    if (g_U33839 <= 3)
    {
        return 75.00000000 * 1.75000000;
        break;
    }
    if (g_U33839 <= 4)
    {
        return 75.00000000 * 2.50000000;
        break;
    }
    return 75.00000000 * 2.50000000;
}

void sub_1324(unknown uParam0)
{
    return ROUND( (uParam0 * 60.00000000) * 1000.00000000 );
}

void sub_1383(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    GET_GAME_TIMER( uParam0 );
    GENERATE_RANDOM_INT_IN_RANGE( sub_1324( uParam1 + (5 * 60.00000000) ), sub_1324( uParam2 - (5 * 60.00000000) ), ref iVar5 );
    (uParam0^) += iVar5;
    return;
}

void sub_1484(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_1541(unknown uParam0, boolean bParam1)
{
    switch (uParam0)
    {
        case 0:
        if ((GET_STAT_FRONTEND_VISIBILITY( 36 )) != bParam1)
        {
            SET_STAT_FRONTEND_VISIBILITY( 36, bParam1 );
        }
        break;
        case 1:
        if ((GET_STAT_FRONTEND_VISIBILITY( 38 )) != bParam1)
        {
            SET_STAT_FRONTEND_VISIBILITY( 38, bParam1 );
        }
        break;
        case 2:
        if ((GET_STAT_FRONTEND_VISIBILITY( 32 )) != bParam1)
        {
            SET_STAT_FRONTEND_VISIBILITY( 32, bParam1 );
        }
        break;
        case 3:
        if ((GET_STAT_FRONTEND_VISIBILITY( 34 )) != bParam1)
        {
            SET_STAT_FRONTEND_VISIBILITY( 34, bParam1 );
        }
        break;
        case 4:
        if ((GET_STAT_FRONTEND_VISIBILITY( 30 )) != bParam1)
        {
            SET_STAT_FRONTEND_VISIBILITY( 30, bParam1 );
        }
        break;
    }
    if (bParam1)
    {
        sub_1824( uParam0, 0, "SET_STAT_GIRL_LIKES_FRONTEND_VISIBILITY()" );
    }
    return;
}

void sub_1824(unknown uParam0, unknown uParam1, unknown uParam2)
{
    ProtectedSet(g_U34042[uParam0], ProtectedGet(g_U34042[uParam0]) + uParam1);
    if (ProtectedGet(g_U34042[uParam0]) > 100)
    {
        ProtectedSet(g_U34042[uParam0], 100);
    }
    else if (ProtectedGet(g_U34042[uParam0]) < 0)
    {
        ProtectedSet(g_U34042[uParam0], 0);
    }
    switch (uParam0)
    {
        case 0:
        SET_FLOAT_STAT( 36, ProtectedGet(g_U34042[uParam0]) );
        break;
        case 1:
        SET_FLOAT_STAT( 38, ProtectedGet(g_U34042[uParam0]) );
        break;
        case 2:
        SET_FLOAT_STAT( 32, ProtectedGet(g_U34042[uParam0]) );
        break;
        case 3:
        SET_FLOAT_STAT( 34, ProtectedGet(g_U34042[uParam0]) );
        break;
        case 4:
        SET_FLOAT_STAT( 30, ProtectedGet(g_U34042[uParam0]) );
        break;
    }
    return;
}

void sub_2244()
{
    l_U589 = 0;
    l_U592 = 0;
    l_U593 = 0;
    return;
}

void sub_2510(unknown uParam0)
{
    return;
}

void sub_2544(unknown uParam0)
{
    if (g_U9231)
    {
        sub_2565( uParam0 );
    }
    return;
}

void sub_2565(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = (iParam0 / 1000) / 60;
    iVar4 = (iParam0 - ((iVar3 * 60) * 1000)) / 1000;
    iVar5 = iParam0 - ((iVar4 + (iVar3 * 60)) * 1000);
    if (iVar3 > 0)
    {
        PRINTINT( iVar3 );
        PRINTSTRING( ":" );
        if (iVar4 < 10)
        {
            PRINTSTRING( "0" );
        }
    }
    PRINTINT( iVar4 );
    PRINTSTRING( "." );
    PRINTINT( iVar5 );
    if (iVar5 < 10)
    {
        PRINTSTRING( "00" );
    }
    else if (iVar5 < 100)
    {
        PRINTSTRING( "0" );
    }
    return;
}

void sub_2765()
{
    if (g_U9231)
    {
        PRINTNL();
    }
    return;
}

void sub_2836(int iParam0, int iParam1, unknown uParam2)
{
    unknown Result;
    unknown uVar6;
    int iVar7;

    sub_2853( iParam0 + 4, iParam0 + 0 );
    iVar7 = uParam2;
    if (iParam1 == 0)
    {
        iVar7++;
    }
    Result._fU4 = sub_2980( iVar7 );
    while (NOT (sub_3045( Result._fU4, iParam1 )))
    {
        iVar7++;
        Result._fU4 = sub_2980( iVar7 );
        WAIT( 0 );
    }
    Result._fU0 = iParam1;
    return Result;
}

void sub_2853(unknown uParam0, unknown uParam1)
{
    (uParam0^) = GET_CURRENT_DAY_OF_WEEK();
    (uParam1^) = sub_2872();
    return;
}

int sub_2872()
{
    int iVar2;

    iVar2 = GET_HOURS_OF_DAY();
    if (iVar2 < 8)
    {
        return 0;
    }
    else if (iVar2 < 12)
    {
        return 1;
    }
    else if (iVar2 < 18)
    {
        return 2;
    };;;
    return 3;
}

void sub_2980(int iParam0)
{
    int I;

    I = GET_CURRENT_DAY_OF_WEEK();
    for ( I += iParam0; I >= 7; I -= 7 )
    {
        ;
    }
    return I;
}

int sub_3045(unknown uParam0, unknown uParam1)
{
    if ((sub_3058( uParam0, uParam1 )) == 0)
    {
        return 1;
    }
    return 0;
}

int sub_3058(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 0, 15 );
        case 1: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 16, 31 );
        case 2: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 0, 15 );
        case 3: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 16, 31 );
    }
    return -1;
}

void sub_3300(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;
    int iVar8;

    uVar7 = sub_3313( uParam0._fU0 );
    iVar8 = uParam0._fU4 * 2;
    if (iParam4 <= 1)
    {
        sub_3422( uParam2, 14, iVar8, 16383, uParam3 );
        sub_4101( uParam3, uVar7, 2 );
        sub_4145( uParam3, 1 );
        sub_4176( uParam3, 0 );
        return sub_4205( uParam3, 0 );
        break;
    }
    sub_3422( uParam2, 18, iVar8, 16383, uParam3 );
    sub_4101( uParam3, uVar7, 2 );
    sub_4145( uParam3, 1 );
    sub_4176( uParam3, 0 );
    return sub_4205( uParam3, 0 );
}

int sub_3313(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return 0;
        break;
        case 1:
        return 8;
        break;
        case 2:
        return 12;
        break;
    }
    return 18;
}

void sub_3422(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_3446( uParam0, 0, iParam4 + 0 );
    sub_3446( uParam1, 1, iParam4 + 0 );
    sub_3446( uParam2, 2, iParam4 + 0 );
    sub_3446( uParam3, 3, iParam4 + 0 );
    sub_3446( 0, 4, iParam4 + 0 );
    sub_3446( 1, 5, iParam4 + 0 );
    sub_3446( 65535, 6, iParam4 + 0 );
    sub_3446( 0, 12, iParam4 + 0 );
    sub_3446( 0, 11, iParam4 + 0 );
    sub_3446( 0, 14, iParam4 + 0 );
    sub_3446( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_3446( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_3446( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_3446(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_4101(int iParam0, unknown uParam1, unknown uParam2)
{
    sub_3446( uParam1, 11, iParam0 + 0 );
    sub_3446( uParam2, 12, iParam0 + 0 );
    return;
}

void sub_4145(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU36 = uParam1;
    return;
}

void sub_4176(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_4205(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_4245())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_4932( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_4731( iVar5 );
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

int sub_4245()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_4279( 5, g_U968[I] )) == 7)
        {
            sub_4731( I );
            return 1;
        }
    }
    return 0;
}

int sub_4279(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_4731(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_4804( 39 );
    return;
}

void sub_4804(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_4932(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_4993( uParam0, g_U968[Result] ))
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

int sub_4993(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

int sub_5304(int iParam0, int iParam1)
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
            if (sub_4993( iParam0->_fU0, g_U968[I] ))
            {
                iParam0->_fU40 = I;
                return sub_4279( 4, g_U968[I] );
            }
        }
        iParam0->_fU40 = -2;
    }
    return 6;
}

void sub_5447(int iParam0)
{
    return g_U968[iParam0->_fU40]._fU32;
}

void sub_5493(int iParam0, int iParam1, unknown uParam2)
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
            if (sub_4993( iParam0->_fU0, g_U968[I] ))
            {
                g_U968[I]._fU16 = uParam2;
                iParam0->_fU40 = I;
            }
        }
    }
    return;
}

int sub_5637(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[16] cVar5;
    unknown uVar9;

    StrCopy( ref cVar5, "DOW_SHORT_DAY_", 16 );
    ConcatString(ref cVar5, uParam0, 16);
    uVar9 = sub_3313( uParam1 );
    sub_5714( "\n time for appointment is ,", uVar9 );
    if ((sub_3058( uParam0, uParam1 )) == 0)
    {
        sub_5753( uParam0, uParam1, uParam2 );
        g_U91._fU520 = 0;
        SET_PHONE_HUD_ITEM( 4, ref cVar5, uVar9 );
        return 1;
    }
    return 0;
}

void sub_5714(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5753(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU0, 0, 15, uParam2 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU0, 16, 31, uParam2 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU4, 0, 15, uParam2 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU4, 16, 31, uParam2 );
        break;
    }
    return;
}

int sub_6013(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return 2;
        break;
        case 1:
        return 10;
        break;
        case 2:
        return 28;
        break;
        case 3:
        return 29;
        break;
        case 4:
        return 30;
        break;
    }
    return 57;
}

void sub_6127(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_6138( uParam0 ) );
    return;
}

int sub_6138(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U64464[uParam0] == 2)
        {
            return 558221221;
        }
        return -1992728631;
        case 1: return 896408642;
        case 3:
        if (g_U64464[uParam0] == 1)
        {
            return -1275031987;
        }
        return 1487004273;
        case 4: return 57218969;
        case 5: return 1445589009;
        case 6: return 155063868;
        case 7: return -617264103;
        case 8: return -1729980128;
        case 9: return 1794146792;
        case 11: return 1710545037;
        case 12: return -1775659292;
        case 13: return 1690783035;
        case 14: return 954215094;
        case 15: return 809067472;
        case 16: return 1169442297;
        case 17: return 1872110126;
        case 18: return 1500493064;
        case 19: return -1826458934;
        case 22: return -366421228;
        case 20: return -379234846;
        case 24: return 237511807;
        case 25: return 237497537;
        case 26: return -1040287406;
        case 27: return -357652594;
        case 52: return 2129490787;
        case 53: return 386513184;
        case 2: return -1080659212;
        case 10: return -773750838;
        case 28: return -1788328884;
        case 29: return 1056837725;
        case 30: return -292713088;
        case 31:
        case 32: return -292713088;
    }
    sub_6801( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_6801(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_6919(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    if ((sub_6932( ref uVar4, uParam0 )) > 3)
    {
        return 0;
        break;
    }
    if ((sub_6932( ref uVar4, uParam0 )) >= 3)
    {
        return 1;
        break;
    }
    if ((sub_6932( ref uVar4, uParam0 )) > -3)
    {
        return 2;
        break;
    }
    return 3;
}

int sub_6932(int iParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;
    int I;
    int iVar8;
    int iVar9;
    boolean bVar10;

    iVar8 = GET_HOURS_OF_DAY();
    iVar9 = GET_CURRENT_DAY_OF_WEEK();
    iParam0->_fU0 = sub_2872();
    iParam0->_fU4 = iVar9;
    bVar10 = false;
    for ( I = 0; I <= 7; I++ )
    {
        if ((iVar9 != uParam1._fU4) AND (NOT bVar10))
        {
            iVar6 += 24;
            iVar9 = sub_7022( iVar9 );
        }
        else
        {
            bVar10 = true;
        }
    }
    switch (uParam1._fU0)
    {
        case 0:
        iVar5 = 0 - iVar8;
        break;
        case 1:
        iVar5 = 8 - iVar8;
        break;
        case 2:
        iVar5 = 12 - iVar8;
        break;
        case 3:
        iVar5 = 18 - iVar8;
        break;
    }
    return iVar5 + iVar6;
}

void sub_7022(int Result)
{
    Result++;
    if (Result > 6)
    {
        Result = 0;
    }
    return Result;
}

int sub_7389(int iParam0)
{
    if (ProtectedGet(g_U34042[iParam0]) < 40)
    {
        if (iParam0 == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_7462(unknown uParam0)
{
    char[16] cVar3;

    if (g_U32928[uParam0] != 0)
    {
        return 1;
    }
    if (g_U33837)
    {
        if ((sub_7513( sub_6013( uParam0 ), 1 )) || (g_U15946[sub_6013( uParam0 )]._fU4))
        {
            switch (uParam0)
            {
                case 0:
                StrCopy( ref cVar3, "GCM_ANSPH", 16 );
                break;
                case 1:
                StrCopy( ref cVar3, "GCK_ANSPH", 16 );
                break;
                case 2:
                StrCopy( ref cVar3, "GCA_ANSPH", 16 );
                break;
                case 3:
                StrCopy( ref cVar3, "GCKK_ANSPH", 16 );
                break;
                case 4:
                StrCopy( ref cVar3, "GCC_ANSPH", 16 );
                break;
            }
            sub_10421( ref cVar3, sub_7993( uParam0, 28 ), 1 );
            sub_14642( sub_14473( uParam0 ) );
            while (NOT (sub_14672( 0 )))
            {
                PRINTSTRING( "while IS_PLAYER_CURRENTLY_ON_A_DATE...\n" );
                WAIT( 0 );
            }
            if (g_U15946[sub_6013( uParam0 )]._fU8[1]._fU0[0])
            {
                g_U15946[sub_6013( uParam0 )]._fU8[1]._fU0[0] = 0;
            }
            if (g_U15946[sub_6013( uParam0 )]._fU8[1]._fU0[1])
            {
                g_U15946[sub_6013( uParam0 )]._fU8[1]._fU0[1] = 0;
            }
            if (g_U15946[sub_6013( uParam0 )]._fU4)
            {
                g_U15946[sub_6013( uParam0 )]._fU4 = 0;
            }
        }
        return 1;
    }
    return 0;
}

int sub_7513(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_2510( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_2510( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
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

string sub_7993(int iParam0, unknown uParam1)
{
    char[16] cVar4;
    char[64] cVar8;
    char[64] cVar24;

    StrCopy( ref cVar4, "GC", 16 );
    switch (iParam0)
    {
        case 0:
        ConcatString(ref cVar4, "M", 16);
        break;
        case 1:
        ConcatString(ref cVar4, "K", 16);
        break;
        case 2:
        ConcatString(ref cVar4, "A", 16);
        break;
        case 3:
        ConcatString(ref cVar4, "KK", 16);
        break;
        case 4:
        ConcatString(ref cVar4, "C", 16);
        break;
    }
    switch (uParam1)
    {
        case 28:
        ConcatString(ref cVar4, "1", 16);
        break;
        case 3:
        PRINTSTRING( "  * get_this_date_speech_audio_block(RADIO_date_speech)\n" );
        break;
        case 0:
        case 1:
        case 2:
        case 4:
        case 7:
        case 8:
        case 9:
        case 10:
        case 12:
        case 13:
        case 11:
        case 14:
        ConcatString(ref cVar4, "2", 16);
        break;
        case 24:
        ConcatString(ref cVar4, "2", 16);
        break;
        case 16:
        case 15:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 25:
        case 26:
        case 23:
        ConcatString(ref cVar4, "3", 16);
        break;
        case 27:
        PRINTSTRING( "  * get_this_date_speech_audio_block(END_POST_COITUS_date_speech)\n" );
        return "";
        break;
        case 5:
        case 22:
        ConcatString(ref cVar4, "C", 16);
        if ((g_U34005[iParam0] <= 0) AND (iParam0 == 0))
        {
            StrCopy( ref cVar8, "invalid conversation_speech_num:", 64 );
            ConcatString(ref cVar8, g_U34005[iParam0], 64);
            SCRIPT_ASSERT( ref cVar8 );
        }
        else if (g_U34005[iParam0] <= 7)
        {
            ConcatString(ref cVar4, "1", 16);
        }
        else
        {
            ConcatString(ref cVar4, "2", 16);
            if (iParam0 == 0)
            {
                return "";
            }
        }
        break;
        case 6:
        ConcatString(ref cVar4, "DC", 16);
        break;
        case 29:
        while (true)
        {
            SCRIPT_ASSERT( "get_this_date_speech_audio_block(''NUMBER_OF_date_speech'')\n" );
            WAIT( 0 );
        }
        break;
        default:
        StrCopy( ref cVar24, "get_this_date_speech_audio_block(''", 64 );
        ConcatString(ref cVar24, sub_8881( uParam1 ), 64);
        ConcatString(ref cVar24, "'')\n", 64);
        while (true)
        {
            SCRIPT_ASSERT( ref cVar24 );
            WAIT( 0 );
        }
    }
    ConcatString(ref cVar4, "AUD", 16);
    if ((GET_LENGTH_OF_LITERAL_STRING( ref cVar4 )) > 0)
    {
        return GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( ref cVar4, 7 );
        break;
    }
    return "null";
}

string sub_8881(unknown uParam0)
{
    char[64] cVar3;

    switch (uParam0)
    {
        case 0:
        return "INTRO_date_speech";
        break;
        case 5:
        return "CONVERSATION_THERE_date_speech";
        break;
        case 6:
        return "CONVERSATION_DRUNK_date_speech";
        break;
        case 1:
        return "CAR_date_speech";
        break;
        case 2:
        return "CLOTHES_date_speech";
        break;
        case 3:
        return "RADIO_date_speech";
        break;
        case 4:
        return " HINT_date_speech";
        break;
        case 7:
        return "ARRIVE_DARTS_date_speech";
        break;
        case 8:
        return "ARRIVE_DRINKING_date_speech";
        break;
        case 9:
        return "ARRIVE_EAT_date_speech";
        break;
        case 10:
        return "ARRIVE_POOL_date_speech";
        break;
        case 12:
        return "ARRIVE_BOWL_date_speech";
        break;
        case 13:
        return "ARRIVE_STRIP_date_speech";
        break;
        case 11:
        return "ARRIVE_SHOW_date_speech";
        break;
        case 14:
        return "ARRIVE_WALK_date_speech";
        break;
        case 16:
        return "LEAVE_DARTS_date_speech";
        break;
        case 15:
        return "LEAVE_BOWL_date_speech";
        break;
        case 17:
        return "LEAVE_DRINKING_date_speech";
        break;
        case 18:
        return "LEAVE_EAT_date_speech";
        break;
        case 19:
        return "LEAVE_POOL_date_speech";
        break;
        case 20:
        return "LEAVE_SHOW_date_speech";
        break;
        case 21:
        return "LEAVE_STRIP_date_speech";
        break;
        case 22:
        return "CONVERSATION_BACK_date_speech";
        break;
        case 23:
        return "SHAG_CARMEN_date_speech";
        break;
        case 24:
        return "SILENCE_date_speech";
        break;
        case 28:
        return "CELLPHONE_date_speech";
        break;
        case 25:
        while (true)
        {
            SCRIPT_ASSERT( "END_FIRST_DATE_good_date_speech - missing\n" );
            WAIT( 0 );
        }
        break;
        case 26:
        return "END_ANOTHER_DATE_bad_date_speech";
        break;
        case 27:
        return "END_POST_COITUS_date_speech";
        break;
        case 29:
        return "NUMBER_OF_date_speech";
        break;
    }
    StrCopy( ref cVar3, "GET_DATE_SPEECH_NAME(", 64 );
    ConcatString(ref cVar3, uParam0, 64);
    ConcatString(ref cVar3, ") not known!!\n", 64);
    SCRIPT_ASSERT( ref cVar3 );
    OPEN_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "ar_dating_speech - " );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar3 );
    CLOSE_DEBUG_FILE();
    return "";
}

int sub_10421(unknown uParam0, unknown uParam1, boolean bParam2)
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
            return sub_10529( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U91._fU368) == 1)
        {
            StrCopy( ref g_U91._fU224[0], uParam1, 16 );
            StrCopy( ref g_U91._fU224[1], uParam0, 16 );
            sub_12478( uVar23, ref g_U91._fU176 );
            g_U91._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_10529(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_2510( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_2510( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_10695() )))
    {
        sub_2510( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_10774() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_10774() ))))
    {
        sub_2510( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_2510( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_11106()) AND (NOT bParam11))
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
                sub_2510( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_11106()) AND (NOT bParam11))
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
    sub_12478( uParam0, ref g_U91._fU176 );
    sub_13859( ref g_U91._fU160 );
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
        sub_14099( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_10695()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_10774()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_11106()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_11163())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_11163()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_10695() )))
    {
        sub_2510( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_2510( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_2510( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_2510( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_10695() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_10774() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_10774(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_2510( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_10774() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_2510( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_2510( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_10695() )))
    {
        sub_2510( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_12478(int iParam0, unknown uParam1)
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

void sub_13859(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_14099(unknown uParam0, unknown uParam1)
{
    return;
}

string sub_14473(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "MICHELLE";
        break;
        case 1:
        return "KATE_MCREARY";
        break;
        case 2:
        return "ALEX";
        break;
        case 3:
        return "KIKI";
        break;
        case 4:
        return "CARMEN";
        break;
    }
    return "DESCRIPTION";
}

void sub_14642(unknown uParam0)
{
    StrCopy( ref g_U91._fU176, uParam0, 32 );
    return;
}

int sub_14672(boolean bParam0)
{
    unknown uVar3;

    if (g_U91._fU60 != -1)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U91._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_10774(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_2510( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

int sub_15178()
{
    if (g_U15946[sub_6013( 2 )]._fU4)
    {
        g_U15946[sub_6013( 2 )]._fU4 = 0;
        l_U813++;
        if (NOT l_U715)
        {
            if (g_U15946[sub_6013( 2 )]._fU8[1]._fU0[0])
            {
                if (sub_15281( 2 ))
                {
                    l_U594 = 15;
                }
                return 0;
            }
            else
            {
                switch (sub_16191( 2, ref l_U813, ref l_U720, l_U724, sub_16037(), 10.00000000, 72.00000000, 144.00000000, ref l_U768, ref l_U819, ref l_U820, ref l_U822, ref l_U828, ref l_U725 ))
                {
                    case 2:
                    sub_1015( 1, 1, l_U834 );
                    break;
                    case 4:
                    return 1;
                    break;
                }
                return 0;
            }
        }
        else if (g_U15946[sub_6013( 2 )]._fU8[1]._fU0[1])
        {
            sub_2510( "contacts[GET_LM_GIRL_PHONE_CONTACT(GF_ALEX)].activities[SELECTED].act[PA_SPECIAL_2]: TRUE\n" );
            if (sub_23204( 2, ref l_U833, ref l_U719, ref l_U829, ref l_U832, 1, 1 ))
            {
                l_U594 = 14;
            }
            return 0;
        }
        else if (g_U15946[sub_6013( 2 )]._fU8[1]._fU0[0])
        {
            if (sub_15281( 2 ))
            {
                l_U594 = 15;
            }
            return 0;
        }
        else
        {
            sub_2510( "contacts[GET_LM_GIRL_PHONE_CONTACT(GF_ALEX)].activities[SELECTED].act[PA_SPECIAL_2]: FALSE\n" );
            switch (sub_16191( 2, ref l_U813, ref l_U720, l_U724, sub_16037(), 10.00000000, 72.00000000, 144.00000000, ref l_U768, ref l_U819, ref l_U820, ref l_U822, ref l_U828, ref l_U725 ))
            {
                case 2:
                sub_1015( 1, 1, l_U834 );
                break;
                case 4:
                return 1;
                break;
            }
            return 0;
        };;;
        break;
    }
    if (sub_7513( sub_6013( 2 ), 1 ))
    {
        sub_2510( "IF IS_PLAYER_CALLING_CONTACT(GET_LM_GIRL_PHONE_CONTACT(GF_ALEX))\n" );
        switch (sub_16191( 2, ref l_U813, ref l_U720, l_U724, sub_16037(), 10.00000000, 72.00000000, 144.00000000, ref l_U768, ref l_U819, ref l_U820, ref l_U822, ref l_U828, ref l_U725 ))
        {
            case 2:
            sub_1015( 1, 1, l_U834 );
            break;
            case 4:
            return 1;
            break;
        }
        return 0;
        break;
    }
    g_U15946[sub_6013( 2 )]._fU8[1]._fU0[0] = 0;
    g_U15946[sub_6013( 2 )]._fU8[1]._fU0[1] = 0;
    if (l_U715)
    {
        sub_24835( 2, ref l_U803 );
    }
    return 0;
}

void sub_15281(unknown uParam0)
{
    char[12] cVar3;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int Result;

    array(ref cVar3, 2);
    StrCopy( ref cVar3[0], "GCKK_CBRKUP", 16 );
    StrCopy( ref cVar3[1], "GCKK_GCBRKUP", 16 );
    switch (uParam0)
    {
        case 0:
        return 0;
        break;
        case 1:
        return 0;
        break;
        case 2:
        StrCopy( ref cVar3[0], "GCA_", 16 );
        StrCopy( ref cVar3[1], "GCA_", 16 );
        break;
        case 3:
        StrCopy( ref cVar3[0], "GCKK_", 16 );
        StrCopy( ref cVar3[1], "GCKK_", 16 );
        break;
        case 4:
        StrCopy( ref cVar3[0], "GCC_", 16 );
        StrCopy( ref cVar3[1], "GCC_", 16 );
        break;
    }
    ConcatString(ref cVar3[0], "CBRKUP", 16);
    ConcatString(ref cVar3[1], "GCBRKUP", 16);
    while (NOT (sub_15538( ref cVar3, sub_7993( uParam0, 28 ), 1 )))
    {
        WAIT( 0 );
    }
    sub_14642( sub_14473( uParam0 ) );
    Result = 0;
    while (NOT (sub_14672( 0 )))
    {
        if (sub_15735() == 3)
        {
            Result = 1;
        }
        WAIT( 0 );
    }
    sub_1824( uParam0, 65436, "YOU_CALL_GIRL_TO_DUMP" );
    sub_15854();
    g_U15946[sub_6013( uParam0 )]._fU8[1]._fU0[0] = 0;
    return Result;
}

int sub_15538(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar5, 2);
    uVar14 = g_U91._fU60;
    if (bParam2)
    {
        return sub_10529( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U91._fU368)
    {
        StrCopy( ref g_U91._fU224[0], uParam1, 16 );
        g_U91._fU224[1] = {(uParam0^)[0]};
        sub_12478( uVar14, ref g_U91._fU176 );
        g_U91._fU368 = 1;
        return 1;
    }
    return 0;
}

int sub_15735()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

void sub_15854()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_15876();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_15876()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_16037()
{
    return sub_16048( 6, 2 );
}

int sub_16048(int iParam0, int iParam1)
{
    int iVar4;
    unknown uVar5;

    GET_TIME_OF_DAY( ref iVar4, ref uVar5 );
    if (iParam1 < iParam0)
    {
        if ((iVar4 < iParam0) AND (iVar4 >= iParam1))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    if ((iVar4 < iParam0) || (iVar4 >= iParam1))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_16191(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    unknown[5] uVar16;
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

    if (sub_7513( sub_6013( uParam0 ), 1 ))
    {
        (uParam1^)++;
        sub_2510( "  * PLAYER CALLING GET_LM_GIRL_PHONE_CONTACT(lm_girl)\n" );
        array(ref uVar16, 5);
        if (sub_16310( uParam0, (uParam2^), ref uParam3, bParam4, uParam5, uParam6, uParam7, ref uVar16 ))
        {
            sub_15538( ref uVar16, sub_7993( uParam0, 28 ), 1 );
            sub_14642( sub_14473( uParam0 ) );
            while (NOT (sub_14672( 0 )))
            {
                WAIT( 0 );
            }
            (uParam9^) = 0;
            (uParam11^) = -1;
            (uParam12^) = -1;
            sub_1824( uParam0, 1, "PLAYER_CALLED_GIRL_FOR_DATE" );
            SET_PHONE_HUD_ITEM( 8, sub_18706( uParam0, 1 ), -1 );
            (uParam13^) = 1;
            g_U15946[sub_6013( uParam0 )]._fU8[1]._fU0[1] = 0;
            sub_15854();
            return 4;
        }
        else
        {
            sub_15538( ref uVar16, sub_7993( uParam0, 28 ), 1 );
            sub_14642( sub_14473( uParam0 ) );
            while (NOT (sub_14672( 0 )))
            {
                WAIT( 0 );
            }
            (uParam9^)++;
            sub_15854();
            g_U15946[sub_6013( uParam0 )]._fU8[1]._fU0[1] = 0;
            if (NOT bParam4)
            {
                sub_1035( uParam2 );
                if (NOT (sub_17256( uParam0 )))
                {
                    if ((sub_16711( (uParam2^) )) < (uParam6 * 60.00000000))
                    {
                        sub_1824( uParam0, 5, "UPSET_CALL_fine" );
                    }
                    else if ((sub_16711( (uParam2^) )) < (uParam6 * 60.00000000))
                    {
                        sub_1824( uParam0, 3, "UPSET_CALL_irate" );
                    }
                    else
                    {
                        sub_1824( uParam0, 1, "UPSET_CALL_v_irate" );
                    }
                }
            }
            else
            {
                sub_1824( uParam0, -1, "PLAYER_CALLEN_GIRL_WHEN_ASLEEP_likes" );
            }
            (uParam11^) += 27000;
            return 0;
        }
    }
    (uParam13^) = 0;
    sub_19347( uParam0, uParam8, uParam9, uParam10 );
    return 0;
}

int sub_16310(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    int I;

    switch (uParam0)
    {
        case 0:
        for ( I = 0; I < (uParam10^); I++ )
        {
            StrCopy( ref (uParam10^)[I], "GCM_", 16 );
        }
        break;
        case 1:
        for ( I = 0; I < (uParam10^); I++ )
        {
            StrCopy( ref (uParam10^)[I], "GCK_", 16 );
        }
        break;
        case 2:
        for ( I = 0; I < (uParam10^); I++ )
        {
            StrCopy( ref (uParam10^)[I], "GCA_", 16 );
        }
        break;
        case 3:
        for ( I = 0; I < (uParam10^); I++ )
        {
            StrCopy( ref (uParam10^)[I], "GCKK_", 16 );
        }
        break;
        case 4:
        for ( I = 0; I < (uParam10^); I++ )
        {
            StrCopy( ref (uParam10^)[I], "GCC_", 16 );
        }
        break;
    }
    if (NOT GET_MISSION_FLAG())
    {
        sub_2510( " * girl answers phone\n" );
        if (NOT bParam6)
        {
            sub_2510( " ** girl NOT asleep\n" );
            if ((sub_16711( uParam1 )) < (uParam7 * 60.00000000))
            {
                sub_2510( " *** call too soon!!! - " );
                sub_2544( sub_16711( uParam1 ) );
                sub_2510( " < " );
                sub_17148( uParam7 * 60.00000000 );
                sub_2765();
                ConcatString(ref (uParam10^)[0], "CGREET", 16);
                ConcatString(ref (uParam10^)[1], "CDT", 16);
                ConcatString(ref (uParam10^)[2], "CDNR", 16);
                ConcatString(ref (uParam10^)[3], "CREJ", 16);
                StrCopy( ref (uParam10^)[4], "END", 16 );
                return 0;
            }
            else if (sub_17256( uParam0 ))
            {
                sub_2510( " *** girl_currently_likes_player\n" );
                if ((sub_16711( uParam1 )) < (uParam8 * 60.00000000))
                {
                    sub_2510( " **** call time ok - " );
                    sub_17411( sub_16711( uParam1 ) );
                    sub_2510( " < " );
                    sub_17148( uParam8 * 60.00000000 );
                    sub_2765();
                    if (NOT (uParam5^))
                    {
                        sub_2510( " ***** NOT girl_had_hated\n" );
                        ConcatString(ref (uParam10^)[0], "CGREET", 16);
                        ConcatString(ref (uParam10^)[1], "CDT", 16);
                        ConcatString(ref (uParam10^)[2], "CDY", 16);
                        ConcatString(ref (uParam10^)[3], "CACC", 16);
                        StrCopy( ref (uParam10^)[4], "END", 16 );
                        return 1;
                    }
                    else
                    {
                        sub_2510( " ***** girl_had_hated\n" );
                        (uParam5^) = 0;
                        ConcatString(ref (uParam10^)[0], "CGREET", 16);
                        ConcatString(ref (uParam10^)[1], "CDT", 16);
                        ConcatString(ref (uParam10^)[2], "CLKY", 16);
                        ConcatString(ref (uParam10^)[3], "CACC", 16);
                        StrCopy( ref (uParam10^)[4], "END", 16 );
                        return 1;
                    }
                }
                else if ((sub_16711( uParam1 )) < (uParam9 * 60.00000000))
                {
                    sub_2510( " **** call time irritating - " );
                    sub_17411( sub_16711( uParam1 ) );
                    sub_2510( " < " );
                    sub_17148( uParam9 * 60.00000000 );
                    sub_2765();
                    ConcatString(ref (uParam10^)[0], "CGREET", 16);
                    ConcatString(ref (uParam10^)[1], "CDT", 16);
                    ConcatString(ref (uParam10^)[2], "CIRATE", 16);
                    ConcatString(ref (uParam10^)[3], "CDY", 16);
                    ConcatString(ref (uParam10^)[4], "CACC", 16);
                    return 1;
                }
                else
                {
                    sub_2510( " **** call time VERY irritating - " );
                    sub_17411( sub_16711( uParam1 ) );
                    sub_2510( " >= " );
                    sub_17148( uParam9 * 60.00000000 );
                    sub_2765();
                    ConcatString(ref (uParam10^)[0], "CGREET", 16);
                    ConcatString(ref (uParam10^)[1], "CDT", 16);
                    ConcatString(ref (uParam10^)[2], "CVIRATE", 16);
                    ConcatString(ref (uParam10^)[3], "CDY", 16);
                    ConcatString(ref (uParam10^)[4], "CACC", 16);
                    return 1;
                }
            }
            else
            {
                sub_2510( " *** NOT girl_currently_likes_player\n" );
                if (NOT (uParam5^))
                {
                    sub_2510( " **** NOT girl_had_hated\n" );
                    ConcatString(ref (uParam10^)[0], "CGREET", 16);
                    ConcatString(ref (uParam10^)[1], "CDT", 16);
                    ConcatString(ref (uParam10^)[2], "CLKN", 16);
                    ConcatString(ref (uParam10^)[3], "CREJ", 16);
                    StrCopy( ref (uParam10^)[4], "END", 16 );
                    return 0;
                }
                else
                {
                    sub_2510( " **** girl_had_hated\n" );
                    ConcatString(ref (uParam10^)[0], "CGREET", 16);
                    ConcatString(ref (uParam10^)[1], "CDT", 16);
                    ConcatString(ref (uParam10^)[2], "CDNG", 16);
                    ConcatString(ref (uParam10^)[3], "CREJ", 16);
                    StrCopy( ref (uParam10^)[4], "END", 16 );
                    return 0;
                }
            }
        }
        else
        {
            sub_2510( " ** girl asleep\n" );
            ConcatString(ref (uParam10^)[0], "CGREET", 16);
            ConcatString(ref (uParam10^)[1], "CSLR", 16);
            ConcatString(ref (uParam10^)[2], "CSL", 16);
            StrCopy( ref (uParam10^)[3], "END", 16 );
            StrCopy( ref (uParam10^)[4], "END", 16 );
            return 0;
        }
    }
    else
    {
        sub_2510( " * girl WONT answer phone\n" );
        ConcatString(ref (uParam10^)[0], "ANSPH", 16);
        StrCopy( ref (uParam10^)[1], "END", 16 );
        StrCopy( ref (uParam10^)[2], "END", 16 );
        StrCopy( ref (uParam10^)[3], "END", 16 );
        StrCopy( ref (uParam10^)[4], "END", 16 );
        return 0;
    }
    SCRIPT_ASSERT( "test0" );
    return 0;
}

int sub_16711(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int I;
    int iVar14;
    int iVar15;

    if (sub_16721( ref uParam0 ))
    {
        iVar6 = 0;
        iVar7 = 0;
        GET_CURRENT_DATE( ref iVar6, ref iVar7 );
        iVar8 = 0;
        iVar9 = 0;
        GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
        iVar10 = (iVar8 * 60) + iVar9;
        if ((uParam0._fU0._fU4 == iVar7) AND (uParam0._fU0._fU0 == iVar6))
        {
            iVar11 = (uParam0._fU8._fU0 * 60) + uParam0._fU8._fU4;
            return iVar10 - iVar11;
        }
        iVar12 = 0;
        for ( I = 0; I < 7; I++ )
        {
            if (NOT (sub_16931( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, I )))
            {
                iVar12++;
            }
        }
        iVar14 = (uParam0._fU8._fU0 * 60) + uParam0._fU8._fU4;
        iVar15 = 1440 * iVar12;
        return (iVar15 + iVar10) - iVar14;
    }
    return -1;
}

int sub_16721(int iParam0)
{
    if (((((ref iParam0->_fU0->_fU4) == -1) AND ((ref iParam0->_fU0->_fU0) == -1)) AND ((ref iParam0->_fU8->_fU0) == -1)) AND ((ref iParam0->_fU8->_fU4) == -1))
    {
        return 0;
    }
    return 1;
}

int sub_16931(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_17148(unknown uParam0)
{
    return;
}

int sub_17256(unknown uParam0)
{
    if (ProtectedGet(g_U34042[uParam0]) >= 60)
    {
        return 1;
        break;
    }
    return 0;
}

void sub_17411(unknown uParam0)
{
    return;
}

string sub_18706(unknown uParam0, boolean bParam1)
{
    switch (uParam0)
    {
        case 0:
        return "MICHELLE";
        break;
        case 1:
        return "KATE";
        break;
        case 2:
        if (bParam1)
        {
            return "ALEX";
        }
        else
        {
            return "2HOT2HANDLE";
        }
        break;
        case 3:
        if (bParam1)
        {
            return "KIKI";
        }
        else
        {
            return "ECOWARRIOR";
        }
        break;
        case 4:
        if (bParam1)
        {
            return "CARMEN";
        }
        else
        {
            return "LCFINEST";
        }
        break;
    }
    return "[null]";
}

void sub_19347(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;

    if ((uParam2^) < 3)
    {
        (uParam3^) = -1;
    }
    else if ((uParam3^) < 0)
    {
        GET_GAME_TIMER( uParam3 );
    }
    else
    {
        GET_GAME_TIMER( ref iVar6 );
        sub_2510( " ## do_stalking_" );
        sub_2510( sub_18706( uParam0, 1 ) );
        sub_2510( "_text(" );
        sub_2544( ((uParam3^) + (sub_1324( 1 ))) - iVar6 );
        sub_2510( ")\n" );
        if (iVar6 > ((uParam3^) + (sub_1324( 1 ))))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar7 );
            if (ProtectedGet(g_U34042[uParam0]) > 55)
            {
                sub_20032( sub_19544( sub_6013( uParam0 ) ), 7 + iVar7, 16383, 16383, uParam1 );
            }
            else
            {
                sub_20032( sub_19544( sub_6013( uParam0 ) ), 10 + iVar7, 16383, 16383, uParam1 );
            }
            sub_20411( uParam1, 0 );
            sub_20440( uParam1, 1 );
            if (sub_20468( uParam3 ))
            {
                if (sub_21805( uParam1 ))
                {
                    (uParam2^) = 0;
                    (uParam3^) = -1;
                    sub_15854();
                }
            }
        }
    }
    return;
}

int sub_19544(unknown uParam0)
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
    sub_6801( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_20032(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_20054( uParam0, 0, iParam4 + 0 );
    sub_20054( uParam1, 1, iParam4 + 0 );
    sub_20054( uParam2, 2, iParam4 + 0 );
    sub_20054( uParam3, 3, iParam4 + 0 );
    sub_20054( 0, 4, iParam4 + 0 );
    sub_20054( 1, 5, iParam4 + 0 );
    sub_20054( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_20054(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_20411(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_20440(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

int sub_20468(unknown uParam0)
{
    if (NOT (sub_20478( 0 )))
    {
        (uParam0^) += 27000;
        PRINTSTRING( "NOT Check_If_Txtmsg_Can_Be_Sent()\n" );
        return 0;
    }
    if (NOT (sub_21293( 1, 1 )))
    {
        (uParam0^) += 27000;
        PRINTSTRING( "NOT CAN_PLAYER_START_CUTSCENE()\n" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U812 ))
    {
        (uParam0^) += 5000;
        PRINTSTRING( "IS_THREAD_ACTIVE(endofMissionCallThread)\n" );
        return 0;
    }
    if (sub_20888())
    {
        (uParam0^) += 27000;
        PRINTSTRING( "IS_PLAYERS_PHONE_IN_SLEEP_MODE()\n" );
        return 0;
    }
    return 1;
}

int sub_20478(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_PLAYER_PLAYING( sub_10695() )))
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    if ((g_U9893._fU4) AND (NOT g_U9893._fU8))
    {
        return 0;
    }
    if (g_U91._fU104)
    {
        return 0;
    }
    if (sub_20566())
    {
        return 0;
    }
    if (sub_20609())
    {
        return 0;
    }
    if (sub_20814())
    {
        return 0;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_20868( uParam0 ))
    {
        return 0;
    }
    return 1;
}

int sub_20566()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_20609()
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

int sub_20814()
{
    if (g_U9078)
    {
        return 1;
    }
    return 0;
}

int sub_20868(int iParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_20888())
    {
        return 1;
    }
    if (sub_20923())
    {
        return 1;
    }
    if (NOT (iParam0 == 0))
    {
        if (NOT (sub_20994( iParam0 )))
        {
            iParam0 = 0;
        }
    }
    if (NOT (iParam0 == 0))
    {
        if (sub_21109( iParam0 ))
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

void sub_20888()
{
    return g_U91._fU540;
}

int sub_20923()
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

int sub_20994(int iParam0)
{
    int iVar3;

    iVar3 = sub_15876();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_21024();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_21024()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_21109(int iParam0)
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

int sub_21293(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_10774(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_10774(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_10774()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_10774() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_10695() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_10695() )))
    {
        return 0;
    }
    return 1;
}

int sub_21805(int iParam0)
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
        if (NOT sub_21875())
        {
            sub_22176( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_22389( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_22176( iVar9 );
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
                ConcatString(ref cVar5, sub_21913( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_21913( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_21875()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_21913( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_22176( I );
            return 1;
        }
    }
    return 0;
}

int sub_21913(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_22176(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_22261( g_U569 - 1 );
    return;
}

void sub_22261(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_22389(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_22454( uParam0, g_U569[Result] ))
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

int sub_22454(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_21913( 0, uParam0 );
        if (iVar14 == (sub_21913( 0, uParam6 )))
        {
            iVar15 = sub_21913( 3, uParam0 );
            if (iVar15 == (sub_21913( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_23204(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5, unknown uParam6)
{
    unknown uVar9;
    int iVar10;
    char[16] cVar11;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    if ((uParam4^) < 3)
    {
        GET_GAME_TIMER( ref iVar10 );
        PRINTSTRING( "iGame_time > iGame_time_since_special_ability+minutes_to_ms(" );
        PRINTFLOAT( 20.00000000 );
        PRINTSTRING( ") - " );
        sub_2565( ((uParam1^) + (sub_1324( 20.00000000 ))) - iVar10 );
        PRINTNL();
        if ((iVar10 < ((uParam1^) + (sub_1324( 20.00000000 )))) AND ((uParam4^) > 0))
        {
            iParam5 = 0;
        }
    }
    else
    {
        PRINTSTRING( "iSpecial_abilities_since_last_date >= 3 - " );
        PRINTINT( (uParam4^) );
        PRINTNL();
        iParam5 = 0;
    }
    array(ref cVar11, 3);
    if (sub_23480( ref cVar11, iParam0, iParam5, uParam6 ))
    {
        if (iParam0 == 4)
        {
            StrCopy( ref cVar11[2], "GCC_CMEDAV", 16 );
        }
        while (NOT (sub_15538( ref cVar11, sub_7993( iParam0, 28 ), 1 )))
        {
            WAIT( 0 );
        }
        sub_14642( sub_14473( iParam0 ) );
        while (NOT (sub_14672( 0 )))
        {
            WAIT( 0 );
        }
        GET_GAME_TIMER( uParam3 );
        GET_GAME_TIMER( uParam2 );
        GET_GAME_TIMER( uParam1 );
        sub_15854();
        (uParam4^)++;
        g_U15946[sub_6013( iParam0 )]._fU8[1]._fU0[1] = 0;
        return 1;
        break;
    }
    while (NOT (sub_15538( ref cVar11, sub_7993( iParam0, 28 ), 1 )))
    {
        WAIT( 0 );
    }
    sub_14642( sub_14473( iParam0 ) );
    while (NOT (sub_14672( 0 )))
    {
        WAIT( 0 );
    }
    sub_15854();
    GET_GAME_TIMER( uParam2 );
    g_U15946[sub_6013( iParam0 )]._fU8[1]._fU0[1] = 0;
    return 0;
}

int sub_23480(unknown uParam0, unknown uParam1, boolean bParam2, boolean bParam3)
{
    int I;

    switch (uParam1)
    {
        case 0:
        SCRIPT_ASSERT( "get_phonecall_from_player_to_girl_for_ability.GF_MICHELLE - no ability" );
        return 0;
        break;
        case 1:
        SCRIPT_ASSERT( "get_phonecall_from_player_to_girl_for_ability.GF_KATE - no ability" );
        return 0;
        break;
        case 2:
        for ( I = 0; I < (uParam0^); I++ )
        {
            StrCopy( ref (uParam0^)[I], "GCA_", 16 );
        }
        break;
        case 3:
        for ( I = 0; I < (uParam0^); I++ )
        {
            StrCopy( ref (uParam0^)[I], "GCKK_", 16 );
        }
        break;
        case 4:
        for ( I = 0; I < (uParam0^); I++ )
        {
            StrCopy( ref (uParam0^)[I], "GCC_", 16 );
        }
        break;
    }
    ConcatString(ref (uParam0^)[0], "CREQSP", 16);
    if (bParam2)
    {
        if (bParam3)
        {
            ConcatString(ref (uParam0^)[1], "CREQSPY", 16);
            return 1;
        }
        else
        {
            ConcatString(ref (uParam0^)[1], "CRSPNN", 16);
            return 0;
        }
        break;
    }
    ConcatString(ref (uParam0^)[1], "CREQSPN", 16);
    return 0;
}

void sub_24835(unknown uParam0, unknown uParam1)
{
    if (g_U15946[sub_6013( uParam0 )]._fU8[0]._fU0[1])
    {
        if (ProtectedGet(g_U34042[uParam0]) < 50.00000000)
        {
            if (sub_24902( uParam0, uParam1, 1 ))
            {
                g_U15946[sub_6013( uParam0 )]._fU8[0]._fU0[1] = 0;
            }
        }
    }
    else if (ProtectedGet(g_U34042[uParam0]) >= 85.00000000)
    {
        if (sub_24902( uParam0, uParam1, 0 ))
        {
            g_U15946[sub_6013( uParam0 )]._fU8[0]._fU0[1] = 1;
        }
    }
    return;
}

int sub_24902(unknown uParam0, unknown uParam1, boolean bParam2)
{
    int iVar5;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar5 );
    if (bParam2)
    {
        sub_20032( sub_19544( sub_6013( uParam0 ) ), 20 + iVar5, 16383, 16383, uParam1 );
    }
    else
    {
        sub_20032( sub_19544( sub_6013( uParam0 ) ), 22 + iVar5, 16383, 16383, uParam1 );
    }
    sub_20411( uParam1, 0 );
    sub_20440( uParam1, 1 );
    if (sub_20468( ref iVar5 ))
    {
        sub_15854();
        return sub_21805( uParam1 );
    }
    return 0;
}

int sub_25246(unknown uParam0, boolean bParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    int iVar13;
    char[12] cVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    char[12] cVar23;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    char[12] cVar32;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    char[16] cVar41;

    GET_GAME_TIMER( ref iVar13 );
    if ((NOT (IS_CHAR_DEAD( sub_10774() ))) AND (IS_PLAYER_PLAYING( sub_10695() )))
    {
        if (GET_MISSION_FLAG())
        {
            if ((uParam2^) <= iVar13)
            {
                (uParam2^) += 27000;
                return 3;
            }
        }
        else
        {
            GET_GAME_TIMER( ref iVar13 );
            if ((uParam2^) <= iVar13)
            {
                if (bParam1)
                {
                    if ((uParam2^) > iVar13)
                    {
                        return 2;
                    }
                }
                else if ((uParam2^) <= 0)
                {
                    return 2;
                }
                else if (IS_WANTED_LEVEL_GREATER( sub_10695(), 0 ))
                {
                    PRINTSTRING( "  WANTED * " );
                    PRINTINT( (uParam2^) );
                    PRINTSTRING( " > " );
                    PRINTINT( iVar13 );
                    (uParam2^) += 27000;
                    PRINTSTRING( " :" );
                    PRINTINT( (uParam2^) );
                    PRINTNL();
                    return 3;
                }
                if (sub_11106())
                {
                    if (sub_20468( uParam2 ))
                    {
                        (uParam3^)++;
                        array(ref cVar14, 2);
                        array(ref cVar23, 2);
                        array(ref cVar32, 2);
                        StrCopy( ref cVar41, "WANNA_DATE_", 16 );
                        ConcatString(ref cVar41, uParam0, 16);
                        switch (uParam0)
                        {
                            case 0:
                            StrCopy( ref cVar14[0], "GCM_", 16 );
                            StrCopy( ref cVar14[1], "GCM_", 16 );
                            StrCopy( ref cVar23[0], "GCM_", 16 );
                            StrCopy( ref cVar23[1], "GCM_", 16 );
                            StrCopy( ref cVar32[0], "GCM_", 16 );
                            StrCopy( ref cVar32[1], "GCM_", 16 );
                            break;
                            case 1:
                            StrCopy( ref cVar14[0], "GCK_", 16 );
                            StrCopy( ref cVar14[1], "GCK_", 16 );
                            StrCopy( ref cVar23[0], "GCK_", 16 );
                            StrCopy( ref cVar23[1], "GCK_", 16 );
                            StrCopy( ref cVar32[0], "GCK_", 16 );
                            StrCopy( ref cVar32[1], "GCK_", 16 );
                            break;
                            case 2:
                            StrCopy( ref cVar14[0], "GCA_", 16 );
                            StrCopy( ref cVar14[1], "GCA_", 16 );
                            StrCopy( ref cVar23[0], "GCA_", 16 );
                            StrCopy( ref cVar23[1], "GCA_", 16 );
                            StrCopy( ref cVar32[0], "GCA_", 16 );
                            StrCopy( ref cVar32[1], "GCA_", 16 );
                            break;
                            case 3:
                            StrCopy( ref cVar14[0], "GCKK_", 16 );
                            StrCopy( ref cVar14[1], "GCKK_", 16 );
                            StrCopy( ref cVar23[0], "GCKK_", 16 );
                            StrCopy( ref cVar23[1], "GCKK_", 16 );
                            StrCopy( ref cVar32[0], "GCKK_", 16 );
                            StrCopy( ref cVar32[1], "GCKK_", 16 );
                            break;
                            case 4:
                            StrCopy( ref cVar14[0], "GCC_", 16 );
                            StrCopy( ref cVar14[1], "GCC_", 16 );
                            StrCopy( ref cVar23[0], "GCC_", 16 );
                            StrCopy( ref cVar23[1], "GCC_", 16 );
                            StrCopy( ref cVar32[0], "GCC_", 16 );
                            StrCopy( ref cVar32[1], "GCC_", 16 );
                            break;
                            default:
                            SCRIPT_ASSERT( "GIRL_CALLS_YOU" );
                            return 0;
                        }
                        if ((sub_16711( uParam4 )) < (uParam9 * 60.00000000))
                        {
                            PRINTSTRING( "  * michelle - ACT_GETCALL_GREET:" );
                            sub_2565( sub_16711( uParam4 ) );
                            PRINTNL();
                            ConcatString(ref cVar14[0], "GCGREET", 16);
                            ConcatString(ref cVar14[1], "GCDT", 16);
                        }
                        else if ((sub_16711( uParam4 )) < (uParam10 * 60.00000000))
                        {
                            PRINTSTRING( "  * michelle - ACT_GETCALL_IRATE:" );
                            sub_2565( sub_16711( uParam4 ) );
                            PRINTNL();
                            ConcatString(ref cVar14[0], "GCIRATE", 16);
                            ConcatString(ref cVar14[1], "GCDT", 16);
                        }
                        else
                        {
                            PRINTSTRING( "  * michelle - ACT_GETCALL_VERYIRATE:" );
                            sub_2565( sub_16711( uParam4 ) );
                            PRINTNL();
                            ConcatString(ref cVar14[0], "GCVIR", 16);
                            ConcatString(ref cVar14[1], "GCDT", 16);
                        }
                        ConcatString(ref cVar23[0], "GCDY", 16);
                        ConcatString(ref cVar23[1], "GCACC", 16);
                        ConcatString(ref cVar32[0], "GCDN", 16);
                        ConcatString(ref cVar32[1], "GCREJ", 16);
                        if (sub_26578( sub_6013( uParam0 ), ref cVar14, ref cVar23, ref cVar32, ref cVar41, sub_7993( uParam0, 28 ), 7000 ))
                        {
                            sub_15854();
                            return 1;
                        }
                    }
                };;;
            }
        }
    }
    else if ((uParam2^) <= iVar13)
    {
        (uParam2^) += 27000;
        return 3;
    }
    return 0;
}

void sub_26578(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    return sub_10529( uParam0, uParam1, uParam5, 1, uParam2, uParam3, uParam4, uParam6, 1, 0, 1, 0, 0, 0 );
}

int sub_26765(int iParam0)
{
    if ((iParam0 == 0) || (iParam0 == 1))
    {
        return 0;
        break;
    }
    if (g_U33842[iParam0])
    {
        if (ProtectedGet(g_U34042[iParam0]) > 60)
        {
            return 1;
        }
        else
        {
            g_U33842[iParam0] = 0;
            return 0;
        }
        break;
    }
    return 0;
}

void sub_26936(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, float fParam10)
{
    int iVar13;
    int iVar14;

    if (((GET_MISSION_FLAG()) || (g_U10978)) || (uParam5))
    {
        (uParam3^) = -1;
    }
    else if ((uParam3^) > 0)
    {
        GET_GAME_TIMER( ref iVar13 );
        if ((sub_16711( uParam6 )) < fParam10)
        {
            (uParam3^) += 30000;
            return;
        }
        if (iVar13 > (uParam3^))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar14 );
            sub_20032( sub_19544( sub_6013( uParam0 ) ), 14 + iVar14, 16383, 16383, uParam1 );
            sub_20411( uParam1, 0 );
            sub_20440( uParam1, 1 );
            if (sub_20468( uParam3 ))
            {
                if (sub_21805( uParam1 ))
                {
                    sub_15854();
                    (uParam2^)++;
                    (uParam3^) = -1;
                }
            }
        }
    }
    return;
}

void sub_27165(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    if ((uParam2^))
    {
        if ((uParam4^) < 0)
        {
            GET_GAME_TIMER( uParam4 );
        }
        else if (sub_27210( uParam0, 0 ))
        {
            GET_GAME_TIMER( ref iVar8 );
            sub_2510( "  * do_saucy_text_" );
            sub_2510( sub_18706( uParam0, 1 ) );
            sub_2510( "_text(" );
            sub_2544( ((uParam4^) + (sub_1324( uParam5 ))) - iVar8 );
            sub_2510( ")\n" );
            if (iVar8 > ((uParam4^) + (sub_1324( uParam5 ))))
            {
                if (sub_20468( uParam4 ))
                {
                    if (sub_27416( uParam0, uParam1, uParam3 ))
                    {
                        sub_15854();
                        (uParam3^)++;
                        (uParam4^) = -1;
                        (uParam2^) = 0;
                    }
                }
            }
        }
        else
        {
            (uParam4^) = -1;
            (uParam2^) = 0;
        }
    }
    return;
}

int sub_27210(int iParam0, float fParam1)
{
    if (ProtectedGet(g_U34042[iParam0]) > 80)
    {
        if (iParam0 != 1)
        {
            if (ProtectedGet(g_U34042[iParam0]) >= fParam1)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_27416(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U91._fU40 != 2)
    {
        return 0;
    }
    sub_20032( sub_19544( sub_6013( uParam0 ) ), 17 + (uParam2^), 16383, 16383, uParam1 );
    sub_20411( uParam1, 0 );
    sub_20440( uParam1, 1 );
    switch (uParam0)
    {
        case 0:
        return 0;
        break;
        case 1:
        return 0;
        break;
        case 2:
        switch ((uParam2^))
        {
            case 0:
            sub_27597( uParam1, 35 );
            break;
            case 1:
            sub_27597( uParam1, 36 );
            break;
            case 2:
            sub_27597( uParam1, 37 );
            break;
            default: return 0;
        }
        break;
        case 3:
        switch ((uParam2^))
        {
            case 0:
            sub_27597( uParam1, 41 );
            break;
            case 1:
            sub_27597( uParam1, 42 );
            break;
            case 2:
            sub_27597( uParam1, 43 );
            break;
            default: return 0;
        }
        break;
        case 4:
        switch ((uParam2^))
        {
            case 0:
            sub_27597( uParam1, 38 );
            break;
            case 1:
            sub_27597( uParam1, 39 );
            break;
            case 2:
            return 0;
            break;
            default: return 0;
        }
        break;
        default: return 0;
    }
    if (sub_21805( uParam1 ))
    {
        (uParam2^)++;
        return 1;
    }
    return 0;
}

void sub_27597(int iParam0, unknown uParam1)
{
    sub_20054( uParam1, 6, iParam0 + 0 );
    return;
}

int sub_27938(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    char[16] cVar6;
    int iVar10;

    if ((uParam2^) < 0)
    {
        GET_GAME_TIMER( uParam2 );
    }
    else
    {
        GET_GAME_TIMER( ref iVar5 );
        sub_2510( "  * send_dumped_text_message(" );
        sub_2544( ((uParam2^) + (sub_1324( 5.00000000 ))) - iVar5 );
        sub_2510( ")\n" );
        if (sub_7513( sub_6013( uParam0 ), 1 ))
        {
            switch (uParam0)
            {
                case 0:
                StrCopy( ref cVar6, "GCM_", 16 );
                break;
                case 1:
                StrCopy( ref cVar6, "GCK_", 16 );
                break;
                case 2:
                StrCopy( ref cVar6, "GCA_", 16 );
                break;
                case 3:
                StrCopy( ref cVar6, "GCKK_", 16 );
                break;
                case 4:
                StrCopy( ref cVar6, "GCC_", 16 );
                break;
            }
            ConcatString(ref cVar6, "ANSPH", 16);
            sub_10421( ref cVar6, sub_7993( uParam0, 28 ), 1 );
            sub_14642( sub_14473( uParam0 ) );
            while (NOT (sub_14672( 0 )))
            {
                WAIT( 0 );
            }
            sub_15854();
            GET_GAME_TIMER( uParam2 );
            return 0;
        }
        if (iVar5 >= ((uParam2^) + (sub_1324( 5.00000000 ))))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar10 );
            sub_20032( sub_19544( sub_6013( uParam0 ) ), 32 + iVar10, 16383, 16383, uParam1 );
            sub_20411( uParam1, 0 );
            sub_20440( uParam1, 1 );
            if (sub_20468( uParam2 ))
            {
                sub_15854();
                GET_GAME_TIMER( uParam2 );
                return sub_21805( uParam1 );
            }
        }
    }
    return 0;
}

int sub_28405(int iParam0)
{
    int I;
    int iVar4;
    unknown[7] uVar5;
    int iVar13;

    if (g_U954 >= 35)
    {
        return 0;
    }
    iVar4 = 1;
    array(ref uVar5, 7);
    switch (iParam0)
    {
        case 1:
        case 3:
        case 12:
        case 14:
        case 16:
        case 18:
        case 20:
        case 22:
        case 24:
        iVar4 = 2;
        break;
        case 28:
        if ((GET_BITS_IN_RANGE( g_U955[iParam0 / 5], (iParam0 mod 5) * 6, ((iParam0 mod 5) * 6) + 5 )) == 63)
        {
            SET_BITS_IN_RANGE( ref g_U955[iParam0 / 5], (iParam0 mod 5) * 6, ((iParam0 mod 5) * 6) + 5, g_U954 );
            g_U954++;
            sub_5714( "\n Updating Alex's blog with story ", iParam0 + 12 );
            return 1;
        }
        iVar4 = 7;
        break;
    }
    sub_28686( ref uVar5, iVar4 );
    for ( I = 0; I <= (iVar4 - 1); I++ )
    {
        iVar13 = iParam0;
        iVar13 += uVar5[I];
        if ((GET_BITS_IN_RANGE( g_U955[iVar13 / 5], (iVar13 mod 5) * 6, ((iVar13 mod 5) * 6) + 5 )) == 63)
        {
            SET_BITS_IN_RANGE( ref g_U955[iVar13 / 5], (iVar13 mod 5) * 6, ((iVar13 mod 5) * 6) + 5, g_U954 );
            g_U954++;
            sub_5714( "\n Updating Alex's blog with story ", iVar13 + 12 );
            return 1;
        }
    }
    return 0;
}

void sub_28686(unknown uParam0, int iParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;

    if (iParam1 <= 1)
    {
        (uParam0^)[0] = 0;
    }
    else if ((uParam0^) >= iParam1)
    {
        for ( I = 0; I <= (iParam1 - 1); I++ )
        {
            (uParam0^)[I] = I;
        }
        for ( I = iParam1 - 1; I >= 1; I += -1 )
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, I + 1, ref uVar6 );
            uVar5 = (uParam0^)[I];
            (uParam0^)[I] = (uParam0^)[uVar6];
            (uParam0^)[uVar6] = uVar5;
        }
    }
    return;
}

int sub_29475(unknown uParam0, int iParam1, unknown uParam2, int iParam3)
{
    if (iParam3 != 1)
    {
        if ((iParam1->_fU0 >= 0) AND (iParam1->_fU4 >= 0))
        {
            if (((sub_29515( iParam1 )) > 90) || ((sub_29515( iParam1 )) < 65476))
            {
                PRINTSTRING( "  * missed date with " );
                PRINTSTRING( sub_18706( uParam0, 1 ) );
                PRINTSTRING( " for " );
                PRINTINT( iParam1->_fU0 );
                PRINTSTRING( ":" );
                PRINTINT( iParam1->_fU4 );
                PRINTSTRING( "    //" );
                PRINTINT( sub_29515( iParam1 ) );
                PRINTNL();
                sub_29762( uParam2, iParam1 );
                PRINT_STRING_IN_STRING( "LATE", sub_18706( uParam0, 1 ), 7500, 1 );
                g_U32928[uParam0] = 4;
                sub_1824( uParam0, -1, "PLAYER_MISSED_DATE_likes" );
                sub_898( iParam1 );
                return 1;
            }
        }
    }
    else
    {
        sub_2510( "  * wait for date with " );
        sub_2510( sub_18706( uParam0, 1 ) );
        sub_2510( " for " );
        sub_17411( iParam1->_fU0 );
        sub_2510( ":" );
        sub_17411( iParam1->_fU4 );
        sub_2510( "    //" );
        sub_17411( sub_29996( iParam1 ) );
        sub_2765();
        if ((iParam1->_fU0 >= 0) AND (iParam1->_fU4 >= 0))
        {
            if (((sub_29996( iParam1 )) > 180) || ((sub_29996( iParam1 )) < 65356))
            {
                PRINTSTRING( "  * missed date through appointment with " );
                PRINTSTRING( sub_18706( uParam0, 1 ) );
                PRINTSTRING( " for " );
                PRINTINT( iParam1->_fU0 );
                PRINTSTRING( ":" );
                PRINTINT( iParam1->_fU4 );
                PRINTSTRING( "    //" );
                PRINTINT( sub_29996( iParam1 ) );
                PRINTNL();
                sub_29762( uParam2, iParam1 );
                PRINT_STRING_IN_STRING( "LATE", sub_18706( uParam0, 1 ), 7500, 1 );
                g_U32928[uParam0] = 4;
                sub_1824( uParam0, -1, "PLAYER_MISSED_DATE_likes" );
                sub_898( iParam1 );
                return 1;
            }
        }
    }
    if (g_U32928[uParam0] == 9)
    {
        sub_29762( uParam2, iParam1 );
        PRINTSTRING( "  * cancelled date with " );
        PRINTSTRING( sub_18706( uParam0, 1 ) );
        PRINTSTRING( " for " );
        PRINTINT( iParam1->_fU0 );
        PRINTSTRING( ":" );
        PRINTINT( iParam1->_fU4 );
        PRINTNL();
        sub_898( iParam1 );
        return 1;
    }
    return 0;
}

int sub_29515(int iParam0)
{
    if ((GET_MINUTES_TO_TIME_OF_DAY( iParam0->_fU0, iParam0->_fU4 )) <= 90)
    {
        return GET_MINUTES_TO_TIME_OF_DAY( iParam0->_fU0, iParam0->_fU4 );
        break;
    }
    return (GET_MINUTES_TO_TIME_OF_DAY( iParam0->_fU0, iParam0->_fU4 )) - 1440;
}

void sub_29762(unknown uParam0, unknown uParam1)
{
    SET_ROUTE( uParam0, 0 );
    REMOVE_BLIP( uParam0 );
    sub_898( uParam1 );
    return;
}

int sub_29996(int iParam0)
{
    if ((GET_MINUTES_TO_TIME_OF_DAY( iParam0->_fU0, iParam0->_fU4 )) <= 180)
    {
        return GET_MINUTES_TO_TIME_OF_DAY( iParam0->_fU0, iParam0->_fU4 );
        break;
    }
    return (GET_MINUTES_TO_TIME_OF_DAY( iParam0->_fU0, iParam0->_fU4 )) - 1440;
}

int sub_30586(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5, unknown uParam6, int iParam7)
{
    boolean bVar10;
    boolean bVar11;
    int iVar12;
    int iVar13;
    unknown uVar14;
    unknown uVar15;
    char[16] cVar16;
    unknown uVar20;

    bVar10 = iParam7 == 1;
    bVar11 = iParam7 == 0;
    if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
    {
        sub_30635( iParam0, uParam2, uParam1, bVar10 );
        l_U202 = 0;
        GET_TIME_OF_DAY( iParam5 + 0, iParam5 + 4 );
        if (NOT bVar10)
        {
            iParam5->_fU0++;
            if ((iParam5->_fU4 mod 30) != 0)
            {
                iVar12 = iParam5->_fU4 / 30;
                iVar12++;
                iVar12 *= 30;
                if (iVar12 >= 60)
                {
                    iParam5->_fU4 = iVar12 mod 30;
                    iParam5->_fU0++;
                }
                else
                {
                    iParam5->_fU4 = iVar12;
                }
            }
            iParam5->_fU0 = iParam5->_fU0 mod 24;
            if (iParam5->_fU0 == 24)
            {
                iParam5->_fU0 = 0;
            }
        }
        else
        {
            switch (iParam0)
            {
                case 0:
                iVar13 = -1;
                break;
                case 1:
                iVar13 = -1;
                break;
                case 2:
                iVar13 = 1;
                break;
                case 3:
                iVar13 = 2;
                break;
                case 4:
                iVar13 = 3;
                break;
            }
            sub_30993( iVar13, ref uVar14, ref uVar15 );
            iParam5->_fU0 = sub_3313( uVar15 );
            iParam5->_fU4 = 0;
        }
        switch (iParam0)
        {
            case 0:
            StrCopy( ref cVar16, "GETTO_GCM", 16 );
            break;
            case 1:
            StrCopy( ref cVar16, "GETTO_GCK", 16 );
            break;
            case 2:
            StrCopy( ref cVar16, "GETTO_GCA", 16 );
            break;
            case 3:
            StrCopy( ref cVar16, "GETTO_GCKK", 16 );
            break;
            case 4:
            StrCopy( ref cVar16, "GETTO_GCC", 16 );
            break;
            default: return 0;
        }
        if (NOT bVar10)
        {
            if ((bVar11) AND (iParam0 == 1))
            {
                if (iParam5->_fU0 < 10)
                {
                    ConcatString(ref cVar16, "w_0", 16);
                }
                else
                {
                    ConcatString(ref cVar16, "w_1", 16);
                }
                if (iParam5->_fU4 < 10)
                {
                    ConcatString(ref cVar16, "0", 16);
                }
                else
                {
                    ConcatString(ref cVar16, "1", 16);
                }
                PRINT_WITH_2_NUMBERS( ref cVar16, iParam5->_fU0, iParam5->_fU4, 7500, 0 );
            }
            else if (iParam5->_fU0 < 10)
            {
                ConcatString(ref cVar16, "_0", 16);
            }
            else
            {
                ConcatString(ref cVar16, "_1", 16);
            }
            if (iParam5->_fU4 < 10)
            {
                ConcatString(ref cVar16, "0", 16);
            }
            else
            {
                ConcatString(ref cVar16, "1", 16);
            }
            PRINT_WITH_2_NUMBERS( ref cVar16, iParam5->_fU0, iParam5->_fU4, 7500, 0 );;
        }
    }
    else if (sub_31488( iParam0 ))
    {
        sub_29762( (uParam1^), iParam5 );
        if ((uParam6^))
        {
            sub_1824( iParam0, -1, "PLAYER_CALLED_GIRL_TO_CANCEL_DATE" );
            SET_PHONE_HUD_ITEM( 9, sub_18706( iParam0, 1 ), -1 );
            (uParam6^) = 0;
        }
        g_U32928[iParam0] = 9;
    }
    if (NOT (sub_29475( iParam0, iParam5, (uParam1^), iParam7 )))
    {
        if (NOT ((g_U10978) || (GET_MISSION_FLAG())))
        {
            if (IS_PLAYER_PLAYING( sub_10695() ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_10774(), ref uVar20 );
                    if (DOES_VEHICLE_EXIST( uVar20 ))
                    {
                        if (NOT (IS_VEH_DRIVEABLE( uVar20 )))
                        {
                            PRINTSTRING( "  * players veh is 'smooshed'!!!\n" );
                            return 0;
                        }
                    }
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_10774(), uParam2._fU0, uParam2._fU4, uParam2._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
                {
                    if (IS_WANTED_LEVEL_GREATER( sub_10695(), 0 ))
                    {
                        if ((NOT g_U33841) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                        {
                            PRINT_HELP_WITH_STRING( "GF_WANTED", sub_18706( iParam0, NOT bVar10 ) );
                            g_U33841 = 1;
                        }
                    }
                    else if (sub_21293( 1, 1 ))
                    {
                        if (sub_32768())
                        {
                            if (NOT g_U9893._fU12)
                            {
                                CLEAR_PRINTS();
                                CLEAR_HELP();
                                if (DOES_BLIP_EXIST( (uParam1^) ))
                                {
                                    if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
                                    {
                                        SET_PLAYER_CONTROL( sub_10695(), 0 );
                                    }
                                    sub_29762( (uParam1^), iParam5 );
                                }
                                sub_32901();
                                g_U8219 = 1;
                                sub_33232();
                                g_U33841 = 0;
                                return 1;
                            }
                        }
                    }
                }
                else if (g_U33841)
                {
                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_10774(), uParam2._fU0, uParam2._fU4, uParam2._fU8, 8.00000000, 8.00000000, 8.00000000, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_10695(), 0 ))))
                    {
                        g_U33841 = 0;
                    }
                }
                if (g_U9890 == 4)
                {
                    l_U202 = 1;
                }
                if (l_U202)
                {
                    if (g_U9890 == 0)
                    {
                        sub_1824( iParam0, 5, "CLEANED_CAR_BEFORE_DATE" );
                        l_U202 = 0;
                    }
                }
                if (NOT (sub_33493( sub_6013( iParam0 ) )))
                {
                    sub_33537( sub_6013( iParam0 ) );
                }
            }
        }
    }
    else if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        sub_29762( (uParam1^), iParam5 );
    };;;
    return 0;
}

void sub_30635(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
{
    ADD_BLIP_FOR_CONTACT( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam4 );
    CHANGE_BLIP_SPRITE( (uParam4^), 54 );
    CHANGE_BLIP_NAME_FROM_TEXT_FILE( (uParam4^), sub_18706( uParam0, NOT bParam5 ) );
    CHANGE_BLIP_DISPLAY( (uParam4^), 2 );
    CHANGE_BLIP_PRIORITY( (uParam4^), 1 );
    return;
}

void sub_30993(int iParam0, unknown uParam1, unknown uParam2)
{
    int J;
    int I;

    for ( J = 0; J <= (7 - 1); J++ )
    {
        for ( I = 0; I <= 3; I++ )
        {
            if ((sub_3058( J, I )) == iParam0)
            {
                (uParam1^) = J;
                (uParam2^) = I;
                return;
            }
        }
    }
    (uParam1^) = 8;
    return;
}

int sub_31488(unknown uParam0)
{
    int[0] iVar3;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    char[16] cVar12;
    int I;

    if (sub_7513( sub_6013( uParam0 ), 1 ))
    {
        array(ref iVar3, 2);
        switch (uParam0)
        {
            case 0:
            for ( I = 0; I < iVar3; I++ )
            {
                StrCopy( ref iVar3[I], "GCM_", 16 );
            }
            StrCopy( ref cVar12, "GCM1AUD", 16 );
            break;
            case 1:
            for ( I = 0; I < iVar3; I++ )
            {
                StrCopy( ref iVar3[I], "GCK_", 16 );
            }
            StrCopy( ref cVar12, "GCK1AUD", 16 );
            break;
            case 2:
            for ( I = 0; I < iVar3; I++ )
            {
                StrCopy( ref iVar3[I], "GCA_", 16 );
            }
            StrCopy( ref cVar12, "GCA1AUD", 16 );
            break;
            case 3:
            if (g_U32976 == 1)
            {
                g_U32976 = 2;
            }
            for ( I = 0; I < iVar3; I++ )
            {
                StrCopy( ref iVar3[I], "GCKK_", 16 );
            }
            StrCopy( ref cVar12, "GCKK1AU", 16 );
            break;
            case 4:
            for ( I = 0; I < iVar3; I++ )
            {
                StrCopy( ref iVar3[I], "GCC_", 16 );
            }
            StrCopy( ref cVar12, "GCC1AUD", 16 );
            break;
        }
        if ((g_U15946[sub_6013( uParam0 )]._fU8[1]._fU0[0]) || (g_U15946[sub_6013( uParam0 )]._fU8[1]._fU0[1]))
        {
            ConcatString(ref iVar3[0], "ANSPH", 16);
            StrCopy( ref iVar3[1], "END", 16 );
            if (sub_15538( ref iVar3, ref cVar12, 1 ))
            {
                while (NOT (sub_14672( 0 )))
                {
                    WAIT( 0 );
                }
                if (g_U15946[sub_6013( uParam0 )]._fU8[1]._fU0[0])
                {
                    PRINT_HELP_WITH_STRING( "GF_S_DUMP", sub_18706( uParam0, 1 ) );
                }
                else if (g_U15946[sub_6013( uParam0 )]._fU8[1]._fU0[1])
                {
                    PRINT_HELP_WITH_STRING( "GF_S_SPEC", sub_18706( uParam0, 1 ) );
                }
                g_U15946[sub_6013( uParam0 )]._fU8[1]._fU0[0] = 0;
                g_U15946[sub_6013( uParam0 )]._fU8[1]._fU0[1] = 0;
                return 0;
            }
        }
        else
        {
            ConcatString(ref iVar3[0], "CCD", 16);
            if (ProtectedGet(g_U34042[uParam0]) > 65)
            {
                ConcatString(ref iVar3[1], "CCDH", 16);
            }
            else if (ProtectedGet(g_U34042[uParam0]) > 50)
            {
                ConcatString(ref iVar3[1], "CCDM", 16);
            }
            else
            {
                ConcatString(ref iVar3[1], "CCDL", 16);
            }
            if (sub_15538( ref iVar3, ref cVar12, 1 ))
            {
                while (NOT (sub_14672( 0 )))
                {
                    WAIT( 0 );
                }
                return 1;
            }
        }
    }
    return 0;
}

int sub_32768()
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

void sub_32901()
{
    sub_32910();
    sub_1484( ref g_U9893._fU68 );
    sub_33018();
    return;
}

void sub_32910()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_33018()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_21913( 1, g_U569[I] )) == 0)
        {
            sub_22176( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_33098())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_33098()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_21913( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_33232()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_21024();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

void sub_33493(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_6138( uParam0 ) );
}

void sub_33537(unknown uParam0)
{
    REQUEST_MODEL( sub_6138( uParam0 ) );
    return;
}

void sub_33627(unknown uParam0, unknown uParam1, int iParam2)
{
    if ((sub_3058( uParam0, uParam1 )) == iParam2)
    {
        sub_5753( uParam0, uParam1, 0 );
    }
    return;
}

int sub_33683()
{
    unknown uVar2;
    int iVar3;

    if (NOT (IS_CHAR_IN_ANY_CAR( sub_10774() )))
    {
        PRINTSTRING( "  * PICKED_UP_GIRL_ON_FOOT\n" );
        return 0;
        break;
    }
    GET_CAR_CHAR_IS_USING( sub_10774(), ref uVar2 );
    if (IS_CAR_DEAD( uVar2 ))
    {
        PRINTSTRING( "  * PICKED_UP_GIRL_IN_DEAD_CAR\n" );
        return 0;
        break;
    }
    GET_CAR_MODEL( uVar2, ref iVar3 );
    if ((iVar3 == 1491375716) || (iVar3 == 1759673526))
    {
        PRINTSTRING( "  * PICKED_UP_GIRL_IN_FORKLIFT\n" );
        return 0;
        break;
    }
    PRINTSTRING( "  * PICKED_UP_GIRL_IN_VALID_CAR\n" );
    return 1;
}

int sub_34107(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, vector vParam4, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    int iVar20;
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
    vector vVar33;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    int iVar40;
    int I;
    unknown uVar42;

    if (sub_34123( uParam1, l_U592 ))
    {
        l_U592 = 4;
    }
    uVar14 = {vParam4 - (vector( 50.00000000, 50.00000000, 50.00000000))};
    uVar17 = {vParam4 + (vector( 50.00000000, 50.00000000, 50.00000000))};
    iVar20 = nil;
    if (IS_PLAYER_PLAYING( sub_10695() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_10774(), ref uVar21 );
        sub_34403( uParam0, ref uVar22, ref uVar31, ref uVar25, ref uVar32, ref uVar28, ref vVar33 );
        if (NOT (IS_CAR_DEAD( uVar21 )))
        {
            switch (l_U592)
            {
                case 0:
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    if (NOT IS_SCREEN_FADING_OUT())
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar21, 0 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar21, 0, ref iVar20 );
                            if (NOT (iVar20 == nil))
                            {
                                CLEAR_CHAR_TASKS( iVar20 );
                            }
                        }
                        DO_SCREEN_FADE_OUT( 125 );
                        SET_PLAYER_CONTROL( sub_10695(), 0 );
                        sub_35196( 0 );
                        CLEAR_PRINTS();
                        CLEAR_HELP();
                        sub_35351( 1 );
                    }
                }
                else
                {
                    sub_35650( uParam2 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    CLEAR_AREA( vParam4.x, vParam4.y, vParam4.z, 50.00000000, 1 );
                    SWITCH_ROADS_OFF( uVar14._fU0, uVar14._fU4, uVar14._fU8, uVar17._fU0, uVar17._fU4, uVar17._fU8 );
                    CLEAR_CHAR_TASKS( sub_10774() );
                    if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar21, 0 )))
                    {
                        GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar21, 0, ref iVar20 );
                        if (NOT (iVar20 == nil))
                        {
                            DELETE_CHAR( ref iVar20 );
                        }
                    }
                    while (NOT (sub_35899( uParam0, uParam7._fU0, uParam7._fU4, ref uParam7._fU8, uParam10, uParam3, 12, 0 )))
                    {
                        WAIT( 0 );
                    }
                    sub_40339( uParam0, sub_40170( uParam0, vParam4 ) );
                    SET_CAM_ACTIVE( l_U573[0], 1 );
                    SET_CAM_ACTIVE( l_U573[1], 1 );
                    CREATE_CAM( 3, ref l_U573[2] );
                    SET_CAM_ACTIVE( l_U573[2], 1 );
                    SET_CAM_PROPAGATE( l_U573[2], 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U573[2], l_U573[0], l_U573[1], uParam11, 0 );
                    if ((NOT (IS_CAR_DEAD( uVar21 ))) AND (IS_PLAYER_PLAYING( sub_10695() )))
                    {
                        SET_CAR_COORDINATES( uVar21, vParam4.x + vVar33.x, vParam4.y + vVar33.y, vParam4.z + vVar33.z );
                        if (IS_CHAR_IN_ANY_HELI( sub_10774() ))
                        {
                            SET_CAR_ENGINE_ON( uVar21, 0, 1 );
                            SET_CAR_HEADING( uVar21, (uParam10 + 270.00000000) mod 360.00000000 );
                            SET_CAR_ENGINE_ON( uVar21, 0, 1 );
                            GET_CLOSEST_MAJOR_CAR_NODE( vParam4.x + vVar33.x, vParam4.y + vVar33.y, vParam4.z + vVar33.z, ref uVar36._fU0, ref uVar36._fU4, ref uVar36._fU8 );
                            CLEAR_AREA( uVar36._fU0, uVar36._fU4, uVar36._fU8, 10.00000000, 1 );
                            SET_CAR_COORDINATES( uVar21, uVar36._fU0, uVar36._fU4, uVar36._fU8 );
                            sub_2510( "SET_HELI_COORDINATES: " );
                            sub_42863( uVar36 );
                            sub_2765();
                        }
                        else if (IS_CHAR_IN_ANY_BOAT( sub_10774() ))
                        {
                            SET_CAR_ENGINE_ON( uVar21, 0, 1 );
                            GET_GROUND_Z_FOR_3D_COORD( vParam4.x + vVar33.x, vParam4.y + vVar33.y, vParam4.z + vVar33.z, ref uVar39 );
                            SET_CAR_HEADING( uVar21, (uParam10 + 270.00000000) mod 360.00000000 );
                            SET_CAR_COORDINATES( uVar21, vParam4.x + vVar33.x, vParam4.y + vVar33.y, uVar39 );
                            APPLY_FORCE_TO_CAR( uVar21, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                            sub_2510( "SET_BOAT_COORDINATES: " );
                            sub_42863( vParam4.y + vVar33 );
                            sub_2765();
                            sub_2510( ", ground " );
                            sub_17148( uVar39 );
                            sub_2765();
                        }
                    }
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    SETTIMERB( 0 );
                    if (ProtectedGet(g_U34042[uParam0]) <= 95.00000000)
                    {
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    }
                    else
                    {
                        SET_NEXT_DESIRED_MOVE_STATE( 3 );
                    }
                    if (NOT (IS_CHAR_INJURED( (uParam3^) )))
                    {
                        if (IS_GROUP_MEMBER( (uParam3^), sub_43260() ))
                        {
                            REMOVE_CHAR_FROM_GROUP( (uParam3^) );
                        }
                        TASK_ENTER_CAR_AS_PASSENGER( (uParam3^), uVar21, -1, 0 );
                        TASK_LOOK_AT_CHAR( sub_10774(), (uParam3^), -1, 0 );
                    }
                    DO_SCREEN_FADE_IN( 125 );
                    l_U592 = 2;
                }
                break;
                case 2:
                iVar40 = 0;
                if ((NOT (IS_CHAR_DEAD( (uParam3^) ))) AND (NOT (IS_CAR_DEAD( uVar21 ))))
                {
                    if (IS_CHAR_SITTING_IN_CAR( (uParam3^), uVar21 ))
                    {
                        iVar40 = 1;
                    }
                }
                if ((NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U573[2] ))) AND ((iVar40) || (TIMERB() > 20000)))
                {
                    if (NOT (IS_CHAR_DEAD( (uParam3^) )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_CAR( (uParam3^), uVar21 )))
                        {
                            CLEAR_CHAR_TASKS( (uParam3^) );
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam3^), uVar21, 0 );
                        }
                    }
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    l_U592 = 5;
                }
                break;
                case 4:
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    if (NOT IS_SCREEN_FADING_OUT())
                    {
                        DO_SCREEN_FADE_OUT( 250 );
                    }
                }
                else if (NOT (IS_CHAR_DEAD( (uParam3^) )))
                {
                    CLEAR_CHAR_TASKS( (uParam3^) );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam3^), uVar21, 0 );
                }
                CLEAR_PRINTS();
                sub_35196( 0 );
                DO_SCREEN_FADE_IN( 125 );
                l_U592 = 5;;
                break;
                case 5:
                for ( I = 0; I < 3; I++ )
                {
                    if (DOES_CAM_EXIST( l_U573[I] ))
                    {
                        SET_CAM_PROPAGATE( l_U573[I], 0 );
                        SET_CAM_ACTIVE( l_U573[I], 0 );
                        DESTROY_CAM( l_U573[I] );
                    }
                }
                GET_CAR_MODEL( uVar21, ref uVar42 );
                if (IS_THIS_MODEL_A_CAR( uVar42 ))
                {
                    CLOSE_ALL_CAR_DOORS( uVar21 );
                }
                SWITCH_ROADS_BACK_TO_ORIGINAL( uVar14._fU0, uVar14._fU4, uVar14._fU8, uVar17._fU0, uVar17._fU4, uVar17._fU8 );
                TASK_CLEAR_LOOK_AT( sub_10774() );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                sub_43888( uParam2 );
                sub_35351( 0 );
                l_U592 = 0;
                return 1;
                break;
            }
        }
    }
    return 0;
}

int sub_34123(unknown uParam0, int iParam1)
{
    if ((uParam0^))
    {
        if (((sub_34140()) AND (IS_SCREEN_FADED_IN())) AND (iParam1 > 0))
        {
            return 1;
        }
        else
        {
            (uParam0^) = 0;
        }
    }
    if (NOT sub_34140())
    {
        (uParam0^) = 1;
    }
    return 0;
}

int sub_34140()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_34403(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = {925.66750000, 182.76820000, 32.15350000};
        (uParam2^) = 272.25730000;
        (uParam3^) = {915.97330000, 181.64750000, 35.23090000};
        (uParam4^) = 272.25730000;
        (uParam5^) = {926.14150000, 181.72850000, 32.23320000};
        (uParam6^) = {0.50000000, -0.50000000, 0.00000000};
        return 1;
        break;
        case 1:
        (uParam1^) = {1396.33900000, 614.12920000, 32.07140000};
        (uParam2^) = 272.59380000;
        (uParam3^) = {1396.33900000, 614.12920000, 32.07140000};
        (uParam4^) = 272.59380000;
        (uParam5^) = {1396.33900000, 614.12920000, 32.07140000};
        (uParam6^) = {0.75000000, 0.00000000, 0.00000000};
        return 1;
        break;
        case 2:
        (uParam1^) = {82.37940000, 1081.39500000, 14.10830000};
        (uParam2^) = 273.11770000;
        (uParam3^) = {82.36730000, 1077.31300000, 13.83840000};
        (uParam4^) = 0.00000000;
        (uParam5^) = {80.76200000, 1081.78600000, 13.60830000};
        (uParam6^) = {0.00000000, 1.00000000, 0.00000000};
        return 0;
        break;
        case 3:
        (uParam1^) = {-166.48210000, -226.81680000, 13.64910000};
        (uParam2^) = 74.66660000;
        (uParam3^) = {-167.32000000, -223.06850000, 13.79190000};
        (uParam4^) = 172.55560000;
        (uParam5^) = {-167.53530000, -226.69950000, 12.71500000};
        (uParam6^) = {0.00000000, -1.00000000, 0.00000000};
        return 1;
        break;
        case 4:
        (uParam1^) = {673.76640000, 1732.21300000, 35.12010000};
        (uParam2^) = 175.59950000;
        (uParam3^) = {672.47860000, 1737.00100000, 36.76160000};
        (uParam4^) = 173.26480000;
        (uParam5^) = {672.71620000, 1730.83200000, 35.12890000};
        (uParam6^) = {0.00000000, -0.75000000, 0.00000000};
        return 1;
        break;
    }
    SCRIPT_ASSERT( "get_dropoff_cutscene_any_means_coords()" );
    return 0;
}

void sub_35196(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 >= 4) AND (g_U8392 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_35351(boolean bParam0)
{
    if (bParam0)
    {
        CLEAR_PRINTS();
        CLEAR_HELP();
        SET_WIDESCREEN_BORDERS( 1 );
        if (IS_PLAYER_PLAYING( sub_10695() ))
        {
            SET_PLAYER_CONTROL( sub_10695(), 0 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_10774(), 1 );
        }
        while (NOT sub_35432())
        {
            WAIT( 0 );
        }
    }
    else
    {
        sub_35535();
        SET_WIDESCREEN_BORDERS( 0 );
        if (IS_PLAYER_PLAYING( sub_10695() ))
        {
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_10774(), 0 );
            SET_PLAYER_CONTROL( sub_10695(), 1 );
            SET_CAM_BEHIND_PED( sub_10774() );
        }
    }
    return;
}

void sub_35432()
{
    return sub_35443( 1, 1 );
}

int sub_35443(boolean bParam0, unknown uParam1)
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

void sub_35535()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_35650(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 1)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

int sub_35899(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, boolean bParam7)
{
    unknown uVar10;

    if (NOT (DOES_CHAR_EXIST( (uParam5^) )))
    {
        if (NOT (sub_33493( sub_6013( uParam0 ) )))
        {
            PRINTSTRING( "CREATE_GIRLFRIEND_ON_FOOT.NOT Has_Contact_Model_Loaded\n" );
            sub_33537( sub_6013( uParam0 ) );
            return 0;
        }
        else if (GET_GROUND_Z_FOR_3D_COORD( uParam1, uParam2, (uParam3^), ref uVar10 ))
        {
            sub_36067( sub_6013( uParam0 ), uParam5, uParam1, uParam2, uVar10, uParam4 );
            if (NOT (DOES_DECISION_MAKER_EXIST( g_U33998 )))
            {
                LOAD_COMBAT_DECISION_MAKER( 1, ref g_U33998 );
            }
            if (NOT (DOES_DECISION_MAKER_EXIST( g_U33997 )))
            {
                COPY_GROUP_CHAR_DECISION_MAKER( 65537, ref g_U33997 );
            }
            sub_37795( uParam0, ref uParam6, (uParam5^) );
            SET_CHAR_NEVER_TARGETTED( (uParam5^), 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam5^), 1 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( (uParam5^), 0 );
            SET_CHAR_NAME_DEBUG( (uParam5^), sub_18706( uParam0, 1 ) );
            if (NOT bParam7)
            {
                sub_39714( 1, (uParam5^), sub_14473( uParam0 ), 0 );
                SET_AMBIENT_VOICE_NAME( (uParam5^), sub_14473( uParam0 ) );
                g_U32917 = uParam6;
            }
            SET_CHAR_NAME_DEBUG( (uParam5^), sub_18706( uParam0, 1 ) );
            SET_GROUP_CHAR_DECISION_MAKER( (uParam5^), g_U33997 );
            SET_COMBAT_DECISION_MAKER( (uParam5^), g_U33998 );
            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( (uParam5^), 0 );
            SET_CHAR_HEALTH( (uParam5^), 300 );
            SET_CHAR_MAX_HEALTH( (uParam5^), 300 );
            sub_6127( sub_6013( uParam0 ) );
            return 1;
        }
        else
        {
            (uParam3^) += 0.50000000;
            PRINTSTRING( "CREATE_" );
            PRINTSTRING( sub_18706( uParam0, 1 ) );
            PRINTSTRING( "_ON_FOOT(" );
            PRINTVECTOR( uParam1, uParam2, (uParam3^) );
            PRINTSTRING( ")\n" );
            return 0;
        }
        break;
    }
    PRINTSTRING( "CREATE_GIRLFRIEND_ON_FOOT.DOES_CHAR_EXIST(girl_ped)\n" );
    return 0;
}

void sub_36067(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_6138( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_36117( uParam0, (uParam1^) );
    return;
}

void sub_36117(unknown uParam0, unknown uParam1)
{
    sub_36129( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_36129(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_36223( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_36767( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_36223(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
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
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
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

void sub_36767(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_36223( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_36223( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_36223( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_36223( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_36223( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_36223( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_36223( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_36223( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_36223( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_36223( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_36223( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_36223( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_36223( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

int sub_37795(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        switch ((uParam1^))
        {
            case 0:
            CLEAR_CHAR_PROP( uParam2, 0 );
            CLEAR_CHAR_PROP( uParam2, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 7, 0, 0 );
            return 1;
            break;
            default:
        }
        break;
        case 1:
        CLEAR_CHAR_PROP( uParam2, 0 );
        CLEAR_CHAR_PROP( uParam2, 1 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 7, 0, 0 );
        if ((uParam1^) == 12)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                (uParam1^) = 1;
                break;
                case 1:
                (uParam1^) = 2;
                break;
            }
        }
        switch ((uParam1^))
        {
            case 1:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 0, 0 );
            PRINTSTRING( "KATE_OUTFIT_0, " );
            return 1;
            break;
            case 2:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 0, 1 );
            PRINTSTRING( "KATE_OUTFIT_1, " );
            return 1;
            break;
        }
        break;
        case 2:
        SET_CHAR_COMPONENT_VARIATION( uParam2, 7, 0, 0 );
        if ((uParam1^) == 12)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                (uParam1^) = 3;
                break;
                case 1:
                (uParam1^) = 4;
                break;
                case 2:
                (uParam1^) = 5;
                break;
            }
        }
        switch ((uParam1^))
        {
            case 3:
            CLEAR_CHAR_PROP( uParam2, 0 );
            CLEAR_CHAR_PROP( uParam2, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 1, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 2 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
            case 4:
            CLEAR_CHAR_PROP( uParam2, 0 );
            CLEAR_CHAR_PROP( uParam2, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 1, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
            case 5:
            CLEAR_CHAR_PROP( uParam2, 0 );
            CLEAR_CHAR_PROP( uParam2, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 2 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 0, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 0, 4 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
        }
        break;
        case 3:
        CLEAR_CHAR_PROP( uParam2, 0 );
        CLEAR_CHAR_PROP( uParam2, 1 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 7, 0, 0 );
        if ((uParam1^) == 12)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                (uParam1^) = 6;
                break;
                case 1:
                (uParam1^) = 7;
                break;
                case 2:
                (uParam1^) = 8;
                break;
            }
        }
        switch ((uParam1^))
        {
            case 6:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
            case 7:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 1, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
            case 8:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 0, 2 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 1, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
        }
        break;
        case 4:
        CLEAR_CHAR_PROP( uParam2, 0 );
        CLEAR_CHAR_PROP( uParam2, 1 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 7, 0, 0 );
        if ((uParam1^) == 12)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                (uParam1^) = 9;
                break;
                case 1:
                (uParam1^) = 10;
                break;
                case 2:
                (uParam1^) = 11;
                break;
            }
        }
        switch ((uParam1^))
        {
            case 9:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
            case 10:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 1, 3 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 1, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 1, 2 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
            case 11:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
        }
        break;
        default:
          case 5:
    }
    return 0;
}

void sub_39714(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U79._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U79._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5714( "\n PED NUMBER ", uParam0 );
    sub_14099( " ADDED WITH VOICE ", uParam2 );
    return;
}

int sub_40170(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int I;
    int iVar8;
    float fVar9;
    float fVar10;
    vector[2] vVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    if (iParam0 == 1)
    {
        iVar6 = 0;
        iVar8 = 2;
        fVar10 = 1E8;
        array(ref vVar11, 2);
        vVar11[0] = {1401.61100000, 612.52510000, 33.90620000};
        vVar11[1] = {1803.06900000, 721.42550000, 27.16900000};
        for ( I = 0; I < 2; I++ )
        {
            fVar9 = VDIST( uParam1, vVar11[I] );
            if (fVar9 < fVar10)
            {
                iVar8 = I;
                fVar10 = fVar9;
                iVar6 = 1;
            }
        }
        return iVar8 == 1;
    }
    return 0;
}

int sub_40339(unknown uParam0, boolean bParam1)
{
    switch (uParam0)
    {
        case 0:
        CREATE_CAM( 14, ref l_U573[0] );
        CREATE_CAM( 14, ref l_U573[1] );
        if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
        {
            SET_CAM_POS( l_U573[0], 925.70480000, 175.37040000, 35.31659000 );
            SET_CAM_ROT( l_U573[0], -6.36406400, -0.00000000, 41.96296000 );
            SET_CAM_POS( l_U573[1], 934.59020000, 170.56520000, 35.11672000 );
            SET_CAM_ROT( l_U573[1], -4.53060000, -0.00000000, 37.72308000 );
        }
        else
        {
            SET_CAM_POS( l_U573[0], 926.71480000, 186.07530000, 32.73375000 );
            SET_CAM_ROT( l_U573[0], 11.31129000, -0.00000000, -168.56970000 );
            SET_CAM_POS( l_U573[1], 924.57400000, 189.54230000, 33.32407000 );
            SET_CAM_ROT( l_U573[1], 9.55143700, -0.00000000, 178.72490000 );
        }
        SET_CAM_FOV( l_U573[0], 35.00000000 );
        SET_CAM_FOV( l_U573[1], 35.00000000 );
        return 1;
        break;
        case 1:
        CREATE_CAM( 14, ref l_U573[0] );
        CREATE_CAM( 14, ref l_U573[1] );
        if (NOT bParam1)
        {
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SET_CAM_POS( l_U573[0], 1410.56500000, 604.95880000, 35.97682000 );
                SET_CAM_ROT( l_U573[0], -14.96956000, -0.00000000, 62.87635000 );
                SET_CAM_POS( l_U573[1], 1410.56500000, 604.95880000, 35.97682000 );
                SET_CAM_ROT( l_U573[1], -14.96956000, -0.00000000, 62.87635000 );
            }
            else
            {
                SET_CAM_POS( l_U573[0], 1410.56500000, 604.95880000, 35.97682000 );
                SET_CAM_ROT( l_U573[0], -14.96956000, -0.00000000, 62.87635000 );
                SET_CAM_POS( l_U573[1], 1410.09700000, 605.19840000, 35.85323000 );
                SET_CAM_ROT( l_U573[1], -11.07345000, -0.00000000, 61.50126000 );
            }
        }
        else if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
        {
            SET_CAM_POS( l_U573[0], 1792.74900000, 713.37750000, 33.80019000 );
            SET_CAM_ROT( l_U573[0], -23.33793000, -0.00000000, -41.91705000 );
            SET_CAM_POS( l_U573[1], 1793.91300000, 714.36320000, 28.76423000 );
            SET_CAM_ROT( l_U573[1], -18.06672000, 0.00000000, -49.70927000 );
        }
        else
        {
            SET_CAM_POS( l_U573[0], 1800.75800000, 710.57040000, 31.18075000 );
            SET_CAM_ROT( l_U573[0], -20.01478000, 0.00000000, -15.10261000 );
            SET_CAM_POS( l_U573[1], 1800.75800000, 710.57040000, 31.18075000 );
            SET_CAM_ROT( l_U573[1], -20.01478000, 0.00000000, -15.10261000 );
        }
        SET_CAM_FOV( l_U573[0], 35.00000000 );
        SET_CAM_FOV( l_U573[1], 35.00000000 );
        return 1;
        break;
        case 2:
        CREATE_CAM( 14, ref l_U573[0] );
        CREATE_CAM( 14, ref l_U573[1] );
        if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
        {
            SET_CAM_POS( l_U573[0], 92.60082000, 1091.36700000, 19.21584000 );
            SET_CAM_ROT( l_U573[0], -17.93174000, -0.00000100, 123.11150000 );
            SET_CAM_POS( l_U573[1], 92.26131000, 1091.14500000, 19.08467000 );
            SET_CAM_ROT( l_U573[1], -17.93173000, -0.00000100, 123.11150000 );
        }
        else
        {
            SET_CAM_POS( l_U573[0], 92.60082000, 1091.36700000, 19.21584000 );
            SET_CAM_ROT( l_U573[0], -17.93174000, -0.00000100, 123.11150000 );
            SET_CAM_POS( l_U573[1], 92.60082000, 1091.36700000, 19.21584000 );
            SET_CAM_ROT( l_U573[1], -17.93174000, -0.00000100, 123.11150000 );
        }
        SET_CAM_FOV( l_U573[0], 35.00000000 );
        SET_CAM_FOV( l_U573[1], 35.00000000 );
        return 1;
        break;
        case 3:
        CREATE_CAM( 14, ref l_U573[0] );
        CREATE_CAM( 14, ref l_U573[1] );
        if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
        {
            SET_CAM_POS( l_U573[0], -176.63110000, -233.79900000, 19.91311000 );
            SET_CAM_ROT( l_U573[0], -25.50266000, -0.00000000, -60.93026000 );
            SET_CAM_POS( l_U573[1], -176.61550000, -233.79030000, 17.87320000 );
            SET_CAM_ROT( l_U573[1], -25.78709000, 0.00000000, -57.95089000 );
        }
        else
        {
            SET_CAM_POS( l_U573[0], -176.63110000, -233.79900000, 19.91311000 );
            SET_CAM_ROT( l_U573[0], -25.50266000, -0.00000000, -60.93026000 );
            SET_CAM_POS( l_U573[1], -175.69160000, -233.16180000, 19.37062000 );
            SET_CAM_ROT( l_U573[1], -26.41940000, 0.00000000, -52.90887000 );
        }
        SET_CAM_FOV( l_U573[0], 35.00000000 );
        SET_CAM_FOV( l_U573[1], 35.00000000 );
        return 1;
        break;
        case 4:
        CREATE_CAM( 14, ref l_U573[0] );
        CREATE_CAM( 14, ref l_U573[1] );
        if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
        {
            SET_CAM_POS( l_U573[0], 679.84650000, 1716.62400000, 39.83520000 );
            SET_CAM_ROT( l_U573[0], -18.82421000, -0.00000000, 35.12740000 );
            SET_CAM_POS( l_U573[1], 679.73770000, 1716.77900000, 39.77067000 );
            SET_CAM_ROT( l_U573[1], -18.82421000, -0.00000000, 35.12740000 );
        }
        else
        {
            SET_CAM_POS( l_U573[0], 679.84650000, 1716.62400000, 39.83520000 );
            SET_CAM_ROT( l_U573[0], -18.82421000, -0.00000000, 35.12740000 );
            SET_CAM_POS( l_U573[1], 679.73770000, 1716.77900000, 39.77067000 );
            SET_CAM_ROT( l_U573[1], -18.82421000, -0.00000000, 35.12740000 );
        }
        SET_CAM_FOV( l_U573[0], 35.00000000 );
        SET_CAM_FOV( l_U573[1], 35.00000000 );
        return 1;
        break;
    }
    return 0;
}

void sub_42863(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U9231)
    {
        PRINTVECTOR( uParam0 );
    }
    return;
}

void sub_43260()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_43888(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 0)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

void sub_44024(unknown uParam0, unknown uParam1)
{
    int I;

    REQUEST_SCRIPT( "go_on_date" );
    while (NOT (HAS_SCRIPT_LOADED( "go_on_date" )))
    {
        REQUEST_SCRIPT( "go_on_date" );
        WAIT( 0 );
    }
    l_U650._fU8._fU0 = 2;
    for ( I = 0; I < l_U634; I++ )
    {
        l_U650._fU8._fU192[I] = l_U634[I];
        l_U650._fU8._fU216[I] = l_U640[I];
    }
    for ( I = 0; I < l_U598; I++ )
    {
        l_U650._fU8._fU48[I] = l_U598[I];
    }
    for ( I = 0; I < l_U628; I++ )
    {
        l_U650._fU8._fU168[I] = l_U628[I];
    }
    l_U650._fU8._fU4 = {l_U728};
    l_U650._fU8._fU32 = {l_U735};
    l_U650._fU8._fU44 = l_U738;
    l_U650._fU8._fU16 = {82.37940000, 1081.39500000, 13.60830000};
    l_U650._fU8._fU28 = 270.00000000;
    l_U650._fU248 = {uParam0};
    l_U650._fU4 = l_U812;
    l_U650._fU0 = l_U838;
    sub_2510( "  *** START_NEW_SCRIPT_WITH_ARGS(''go_on_date'', next_date_struct, SIZE_OF(next_date_struct), ONDATE_STACK_SIZE)\n" );
    START_NEW_SCRIPT_WITH_ARGS( "go_on_date", ref l_U650, 64, 1828 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "go_on_date" );
    l_U594 = 8;
    return;
}

int sub_44646(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
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
    int I;

    if (sub_34123( uParam1, l_U592 ))
    {
        l_U592 = 4;
    }
    sub_44694( uParam0, ref uVar13, ref uVar16, sub_40170( uParam0, uParam4 ) );
    if (IS_PLAYER_PLAYING( sub_10695() ))
    {
        switch (l_U592)
        {
            case 0:
            if (NOT IS_SCREEN_FADED_OUT())
            {
                if (NOT IS_SCREEN_FADING_OUT())
                {
                    DO_SCREEN_FADE_OUT( 125 );
                    SET_PLAYER_CONTROL( sub_10695(), 0 );
                    sub_35196( 0 );
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    sub_35351( 1 );
                }
            }
            else
            {
                CLEAR_AREA( uParam4._fU0, uParam4._fU4, uParam4._fU8, 50.00000000, 1 );
                sub_35650( uParam2 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                if (NOT (DOES_CHAR_EXIST( (uParam3^) )))
                {
                    while (NOT (sub_35899( uParam0, uParam7._fU0, uParam7._fU4, ref uParam7._fU8, uParam10, uParam3, 12, 0 )))
                    {
                        WAIT( 0 );
                    }
                }
                if (IS_PLAYER_PLAYING( sub_10695() ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_10774() );
                    GET_GROUND_Z_FOR_3D_COORD( uParam4._fU0, uParam4._fU4, uParam4._fU8, ref uVar19 );
                    if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
                    {
                        GET_CAR_CHAR_IS_USING( sub_10774(), ref uVar20 );
                        if (NOT (IS_CAR_DEAD( uVar20 )))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar20, 5.00000000, 0.00000000, 0.00000000, ref uVar21._fU0, ref uVar21._fU4, ref uVar21._fU8 );
                            SET_CAR_COORDINATES( uVar20, uVar21._fU0, uVar21._fU4, uVar21._fU8 );
                        }
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_10774(), uParam4._fU0, uParam4._fU4, uVar19 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_10774(), uParam4._fU0, uParam4._fU4, uVar19 );
                    }
                    SET_CHAR_HEADING( sub_10774(), uParam10 + 180.00000000 );
                    if (NOT (IS_CHAR_DEAD( (uParam3^) )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( (uParam3^) );
                        SET_CHAR_COORDINATES( (uParam3^), uParam7._fU0, uParam7._fU4, uParam7._fU8 );
                        SET_CHAR_HEADING( (uParam3^), uParam10 );
                        if (IS_GROUP_MEMBER( (uParam3^), sub_43260() ))
                        {
                            REMOVE_CHAR_FROM_GROUP( (uParam3^) );
                        }
                        TASK_GO_STRAIGHT_TO_COORD( (uParam3^), uVar16._fU0, uVar16._fU4, uVar16._fU8, 2, 8500 );
                    }
                    sub_40339( uParam0, sub_40170( uParam0, uParam4 ) );
                    SET_CAM_ACTIVE( l_U573[0], 1 );
                    SET_CAM_ACTIVE( l_U573[1], 1 );
                    CREATE_CAM( 3, ref l_U573[2] );
                    SET_CAM_ACTIVE( l_U573[2], 1 );
                    SET_CAM_PROPAGATE( l_U573[2], 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U573[2], l_U573[0], l_U573[1], 7500, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    SETTIMERB( 0 );
                    DO_SCREEN_FADE_IN( 125 );
                    l_U592 = 1;
                }
            }
            break;
            case 1:
            if (TIMERB() > 1500)
            {
                TASK_GO_STRAIGHT_TO_COORD( sub_10774(), uVar13._fU0, uVar13._fU4, uVar13._fU8, 2, 8500 );
                l_U592 = 2;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_DEAD( (uParam3^) )))
            {
                if ((NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U573[2] ))) || ((sub_45918( (uParam3^), 17 )) AND (sub_45918( sub_10774(), 17 ))))
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    l_U592 = 5;
                }
            }
            break;
            case 4:
            if (NOT IS_SCREEN_FADED_OUT())
            {
                if (NOT IS_SCREEN_FADING_OUT())
                {
                    DO_SCREEN_FADE_OUT( 250 );
                }
            }
            else if (NOT (IS_CHAR_DEAD( (uParam3^) )))
            {
                CLEAR_CHAR_TASKS( (uParam3^) );
                CLEAR_PRINTS();
                CLEAR_CHAR_TASKS( sub_10774() );
                CLEAR_CHAR_TASKS( (uParam3^) );
                if (GET_GROUND_Z_FOR_3D_COORD( uVar13._fU0, uVar13._fU4, uVar13._fU8, ref uVar24 ))
                {
                    SET_CHAR_COORDINATES( sub_10774(), uVar13._fU0, uVar13._fU4, uVar24 );
                }
                else
                {
                    SET_CHAR_COORDINATES( sub_10774(), uVar13._fU0, uVar13._fU4, uVar13._fU8 );
                }
                SET_CHAR_HEADING( sub_10774(), uParam10 + 180.00000000 );
            }
            sub_35196( 0 );
            DO_SCREEN_FADE_IN( 125 );
            l_U592 = 5;;
            break;
            case 5:
            for ( I = 0; I < 3; I++ )
            {
                if (DOES_CAM_EXIST( l_U573[I] ))
                {
                    SET_CAM_PROPAGATE( l_U573[I], 0 );
                    SET_CAM_ACTIVE( l_U573[I], 0 );
                    DESTROY_CAM( l_U573[I] );
                }
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_43888( uParam2 );
            l_U592 = 0;
            sub_35351( 0 );
            return 1;
            break;
        }
    }
    return 0;
}

int sub_44694(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = {924.63200000, 180.17530000, 33.41720000};
        (uParam2^) = {923.84120000, 180.75400000, 33.41830000};
        return 1;
        break;
        case 1:
        if (NOT bParam3)
        {
            (uParam1^) = {1398.98800000, 612.99620000, 32.92020000};
            (uParam2^) = {1397.18300000, 612.95070000, 32.95230000};
        }
        else
        {
            (uParam1^) = {1804.12600000, 723.32150000, 24.79170000};
            (uParam2^) = {1804.55700000, 725.06910000, 24.79000000};
        }
        return 1;
        break;
        case 2:
        (uParam1^) = {82.17600000, 1082.26200000, 14.61330000};
        (uParam2^) = {81.70850000, 1080.47800000, 14.61330000};
        return 1;
        break;
        case 3:
        (uParam1^) = {-167.57840000, -226.79770000, 14.26360000};
        (uParam2^) = {-167.33360000, -225.70990000, 13.90030000};
        return 1;
        break;
        case 4:
        (uParam1^) = {673.11140000, 1731.01000000, 36.13200000};
        (uParam2^) = {673.07760000, 1732.59400000, 36.12600000};
        return 1;
        break;
    }
    return 0;
}

int sub_45918(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_46602(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[64] cVar6;

    StrCopy( ref cVar6, sub_18706( uParam0, 1 ), 64 );
    ConcatString(ref cVar6, " enjoyed ", 64);
    sub_1824( uParam0, ((uParam1^)[(uParam3^)] / 4) - 5, ref cVar6 );
    sub_46666( uParam0, uParam2, uParam1, (uParam3^) );
    (uParam3^) = 29;
    return;
}

void sub_46666(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3)
{
    int I;
    int J;
    int iVar8;
    int iVar9;

    for ( I = (uParam1^) - 2; I >= 0; I-- )
    {
        (uParam1^)[I + 1] = (uParam1^)[I];
    }
    (uParam1^)[0] = iParam3;
    (uParam2^)[iParam3] -= 5;
    for ( J = 0; J < 29; J++ )
    {
        if (g_U32995[J]._fU36 == g_U32995[iParam3]._fU36)
        {
            (uParam2^)[J]--;
        }
        else
        {
            (uParam2^)[J]++;
        }
        if ((uParam2^)[J] < 0)
        {
            (uParam2^)[J] = 0;
        }
        else if ((uParam2^)[J] > 100)
        {
            (uParam2^)[J] = 100;
        }
    }
    g_U34011[iParam3]++;
    if (CAN_THE_STAT_HAVE_STRING( 661 ))
    {
        iVar9 = 0;
        for ( iVar8 = 0; iVar8 < 29; iVar8++ )
        {
            if (g_U34011[iVar8] > iVar9)
            {
                iVar9 = g_U34011[iVar8];
            }
        }
        if (iParam3 != iVar9)
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 661, sub_47013( iParam3 ) );
        }
    }
    sub_47852( iParam3 );
    return;
}

string sub_47013(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return "st_BELL_BN_N";
        case 1: return "st_BELL_MH_S";
        case 2: return "st_SHOT_BN_E";
        case 3: return "st_SHOT_BX_E";
        case 4: return "st_SHOT_BX_W";
        case 5: return "st_SHOT_MH_MID";
        case 6: return "st_SHOT_MH_N";
        case 7: return "st_SHOT_MH_W";
        case 8: return "st_SHOT_NJ_N";
        case 9: return "st_DINER_BN_SW";
        case 10: return "st_DINER_MH";
        case 11: return "st_DINER_MH_E";
        case 12: return "st_DINER_MH_W";
        case 13: return "st_PIZZA_NJ";
        case 14: return "st_FUKS_NJ";
        case 15: return "st_RSTAR_MH_N";
        case 20: return "st_VLADS_BN_SW";
        case 17: return "st_IRISH_BN_NW";
        case 18: return "st_IRISH_MH_W";
        case 19: return "st_JERK_MH";
        case 16: return "st_HIPHOP_MH_N";
        case 21: return "st_BOWL_BN";
        case 22: return "st_BOWL_MH";
        case 23: return "st_DARTS_BN_NW";
        case 24: return "st_POOL_BN_MID";
        case 25: return "st_STRIP_BX";
        case 26: return "st_STRIP_NJ";
        case 27: return "st_CABARET_BN";
        case 28: return "st_COMEDY_MH";
    }
    SCRIPT_ASSERT( "get_date_place_stat_name()" );
    return "none";
}

void sub_47852(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        sub_48103( 8 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        sub_48103( 8 );
        break;
        case 9:
        case 10:
        case 11:
        case 12:
        sub_48103( 8 );
        break;
        case 13:
        sub_48103( 8 );
        break;
        case 14:
        case 15:
        sub_48103( 8 );
        break;
        case 20:
        case 17:
        case 18:
        case 19:
        case 16:
        sub_48103( 7 );
        break;
        case 21:
        case 22:
        sub_48103( 5 );
        break;
        case 23:
        sub_48103( 6 );
        break;
        case 24:
        sub_48103( 11 );
        break;
        case 25:
        case 26:
        sub_48103( 13 );
        break;
        case 27:
        case 28:
        sub_48103( 12 );
        break;
        default: SCRIPT_ASSERT( "Girlfriend_Achievement_Increase_Stats_For_Activities" );
    }
    return;
}

void sub_48103(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    char[64] cVar6;

    g_U34181._fU344[iParam0]++;
    g_U34181._fU404++;
    iVar3 = g_U34181._fU408;
    if (iVar3 == iParam0)
    {
        return;
    }
    iVar4 = g_U34181._fU344[iVar3];
    iVar5 = g_U34181._fU344[iParam0];
    if (iVar5 < iVar4)
    {
        return;
    }
    g_U34181._fU408 = iParam0;
    StrCopy( ref cVar6, "", 64 );
    sub_48263( iParam0, ref cVar6 );
    if (CAN_THE_STAT_HAVE_STRING( 662 ))
    {
        sub_48662( 662 );
        REGISTER_STRING_FOR_FRONTEND_STAT( 662, ref cVar6 );
    }
    return;
}

void sub_48263(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 4:
        StrCopy( (uParam1^), "statAct_0", 64 );
        break;
        case 5:
        StrCopy( (uParam1^), "statAct_1", 64 );
        break;
        case 6:
        StrCopy( (uParam1^), "statAct_2", 64 );
        break;
        case 7:
        StrCopy( (uParam1^), "statAct_3", 64 );
        break;
        case 8:
        StrCopy( (uParam1^), "statAct_4", 64 );
        break;
        case 9:
        StrCopy( (uParam1^), "statAct_5", 64 );
        break;
        case 10:
        StrCopy( (uParam1^), "statAct_6", 64 );
        break;
        case 11:
        StrCopy( (uParam1^), "statAct_7", 64 );
        break;
        case 12:
        StrCopy( (uParam1^), "statAct_8", 64 );
        break;
        case 13:
        StrCopy( (uParam1^), "statAct_9", 64 );
        break;
        default: sub_6801( "Friend_Achievement_Fill_Activity_String: Unknown activity" );
    }
    return;
}

void sub_48662(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_48971(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    unknown uVar7;
    int iVar8;

    (iParam3^) = {sub_2836( uParam4, 3, 1 )};
    uVar7 = sub_3313( iParam3->_fU0 );
    iVar8 = iParam3->_fU4 * 2;
    sub_3422( uParam1, 15, iVar8, 16383, uParam2 );
    sub_4101( uParam2, uVar7, 2 );
    sub_4145( uParam2, 1 );
    sub_4176( uParam2, 0 );
    return sub_4205( uParam2, 0 );
}

void sub_49143(int iParam0, unknown uParam1, boolean bParam2, int iParam3)
{
    if (bParam2)
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 365, 1 );
    }
    else
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 366, 1 );
    }
    if ((iParam0 == 2) AND (iParam3 >= 0))
    {
        sub_49207( iParam0, iParam3, (uParam1^) );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 364, 1 );
    (uParam1^)++;
    return;
}

void sub_49207(int iParam0, int iParam1, unknown uParam2)
{
    if (iParam0 == 2)
    {
        if (((NOT (sub_49229( iParam0, uParam2 ))) || (iParam1 == 27)) || (iParam1 == 26))
        {
            sub_28405( iParam1 );
        }
    }
    return;
}

int sub_49229(int iParam0, int iParam1)
{
    if (iParam1 <= 0)
    {
        if ((iParam0 == 0) || (iParam0 == 1))
        {
            return 0;
        }
        else
        {
            return 1;
        }
        break;
    }
    return 0;
}

void sub_49395(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_10774() )))
    {
        GET_CAR_CHAR_IS_USING( sub_10774(), ref g_U33853[uParam0]._fU0 );
        if (NOT (IS_CAR_DEAD( g_U33853[uParam0]._fU0 )))
        {
            GET_CAR_MODEL( g_U33853[uParam0]._fU0, ref g_U33853[uParam0]._fU4 );
            if (IS_THIS_MODEL_A_BOAT( g_U33853[uParam0]._fU4 ))
            {
                g_U33853[uParam0]._fU8[0] = -1;
                g_U33853[uParam0]._fU8[1] = -1;
                g_U33853[uParam0]._fU8[2] = -1;
                g_U33853[uParam0]._fU8[3] = -1;
            }
            else
            {
                GET_CAR_COLOURS( g_U33853[uParam0]._fU0, ref g_U33853[uParam0]._fU8[0], ref g_U33853[uParam0]._fU8[1] );
                GET_EXTRA_CAR_COLOURS( g_U33853[uParam0]._fU0, ref g_U33853[uParam0]._fU8[2], ref g_U33853[uParam0]._fU8[3] );
            }
        }
        else
        {
            g_U33853[uParam0]._fU8[0] = -1;
            g_U33853[uParam0]._fU8[1] = -1;
            g_U33853[uParam0]._fU8[2] = -1;
            g_U33853[uParam0]._fU8[3] = -1;
            g_U33853[uParam0]._fU4 = 0;
        }
        sub_49805( sub_10774(), ref g_U33889[uParam0], 1 );
    }
    return;
}

void sub_49805(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_PROP_INDEX( uParam0, 0, iParam1 + 0 );
        if (iParam1->_fU0 == -1)
        {
            iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_10774(), 8 );
            iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_10774(), 8 );
            if ((iVar5 == 1) AND (iVar6 == 0))
            {
                iParam1->_fU0 = 10;
            }
        }
        GET_CHAR_PROP_INDEX( uParam0, 1, iParam1 + 4 );
        iParam1->_fU8 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 0 );
        iParam1->_fU12 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 1 );
        iParam1->_fU16 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 2 );
        iParam1->_fU20 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 3 );
        iParam1->_fU24 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 4 );
        iParam1->_fU28 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 5 );
        iParam1->_fU32 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 6 );
        iParam1->_fU36 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 7 );
        iParam1->_fU40 = GET_CHAR_TEXTURE_VARIATION( uParam0, 0 );
        iParam1->_fU44 = GET_CHAR_TEXTURE_VARIATION( uParam0, 1 );
        iParam1->_fU48 = GET_CHAR_TEXTURE_VARIATION( uParam0, 2 );
        iParam1->_fU52 = GET_CHAR_TEXTURE_VARIATION( uParam0, 3 );
        iParam1->_fU56 = GET_CHAR_TEXTURE_VARIATION( uParam0, 4 );
        iParam1->_fU60 = GET_CHAR_TEXTURE_VARIATION( uParam0, 5 );
        iParam1->_fU64 = GET_CHAR_TEXTURE_VARIATION( uParam0, 6 );
        iParam1->_fU68 = GET_CHAR_TEXTURE_VARIATION( uParam0, 7 );
    }
    else
    {
        iParam1->_fU0 = -1;
        iParam1->_fU4 = -1;
        iParam1->_fU8 = -1;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = -1;
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
        iParam1->_fU28 = -1;
        iParam1->_fU32 = -1;
        iParam1->_fU36 = -1;
        iParam1->_fU40 = -1;
        iParam1->_fU44 = -1;
        iParam1->_fU48 = -1;
        iParam1->_fU52 = -1;
        iParam1->_fU56 = -1;
        iParam1->_fU60 = -1;
        iParam1->_fU64 = -1;
        iParam1->_fU68 = -1;
    }
    if (bParam2)
    {
        if (iParam1->_fU0 == 2)
        {
            iParam1->_fU0 = -1;
        }
    }
    return;
}

void sub_50394(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    sub_3422( uParam0, 17, 16383, 16383, ref uParam1 );
    sub_4145( ref uParam1, 0 );
    sub_4176( ref uParam1, 1 );
    return sub_4205( ref uParam1, 0 );
}

int sub_50590(unknown uParam0, unknown uParam1, boolean bParam2)
{
    int iVar5;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar5 );
    if (bParam2)
    {
        sub_20032( sub_19544( sub_6013( uParam0 ) ), 1 + iVar5, 16383, 16383, uParam1 );
    }
    else
    {
        sub_20032( sub_19544( sub_6013( uParam0 ) ), 4 + iVar5, 16383, 16383, uParam1 );
    }
    sub_20411( uParam1, 0 );
    sub_20440( uParam1, 1 );
    if (sub_20468( ref iVar5 ))
    {
        sub_15854();
        return sub_21805( uParam1 );
    }
    return 0;
}

int sub_50775(int iParam0)
{
    if (ProtectedGet(g_U34042[iParam0]) > 50)
    {
        if (iParam0 == 1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_51126(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    vector vVar16;
    vector vVar19;
    vector vVar22;
    vector vVar25;
    vector vVar28;
    vector vVar31;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    string sVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    boolean bVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    float fVar84;
    vector vVar85;
    int iVar88;
    unknown uVar89;
    unknown uVar90;
    int I;
    unknown uVar92;

    if (IS_PLAYER_PLAYING( sub_10695() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_10774(), ref g_U33980 );
        }
        vVar16 = {0.40000000, 1.90000000, 0.60000000};
        vVar19 = {0.10000000, 0.90000000, -0.15000000};
        vVar22 = {0.30000000, 0.75000000, 1.50000000};
        vVar25 = {0.15000000, 0.25000000, -0.80000000};
        vVar28 = {1.45000000, 4.75000000, -3.02000000};
        vVar31 = {-0.11800000, 0.18400000, -0.36000000};
        sub_34403( iParam1, ref uVar40, ref uVar49, ref uVar43, ref uVar50, ref uVar46, ref uVar51 );
        sVar55 = "partial_smoke";
        g_U32918._fU4 = -1283779168;
        g_U32918._fU8 = {0.09000000, 0.03000000, 0.00000000};
        g_U32918._fU20 = {0.00000000, 0.60320000, 0.16340000};
        if ((NOT (IS_CHAR_DEAD( (uParam0^) ))) || ((uParam2^) >= 7))
        {
            switch ((uParam2^))
            {
                case 0:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (NOT IS_SCREEN_FADED_OUT())
                    {
                        if (IS_PLAYER_CONTROL_ON( sub_10695() ))
                        {
                            SET_PLAYER_CONTROL( sub_10695(), 0 );
                        }
                        sub_35196( 0 );
                        if (NOT IS_SCREEN_FADING_OUT())
                        {
                            DO_SCREEN_FADE_OUT( 125 );
                            sub_35650( uParam3 );
                            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                            CLEAR_PRINTS();
                            CLEAR_HELP();
                            sub_35351( 1 );
                        }
                    }
                    else
                    {
                        l_U587 = 0;
                        CLEAR_AREA( uParam4._fU0, uParam4._fU4, uParam4._fU8, 25.00000000, 1 );
                        CLEAR_CHAR_TASKS( sub_10774() );
                        CLEAR_CHAR_TASKS( (uParam0^) );
                        if ((IS_CHAR_IN_ANY_CAR( sub_10774() )) AND (NOT (IS_CHAR_ON_ANY_BIKE( sub_10774() ))))
                        {
                            if (NOT (IS_CAR_DEAD( g_U33980 )))
                            {
                                SET_CAR_HEADING( g_U33980, uParam7 );
                                SET_CAR_COORDINATES( g_U33980, uParam4._fU0 + uVar51._fU0, uParam4._fU4 + uVar51._fU4, uParam4._fU8 + uVar51._fU8 );
                                if (NOT (sub_51852( sub_10774() )))
                                {
                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam0^), g_U33980, 0 );
                                }
                                else if (IS_CAR_PASSENGER_SEAT_FREE( g_U33980, 1 ))
                                {
                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam0^), g_U33980, 1 );
                                }
                                else if (IS_CAR_PASSENGER_SEAT_FREE( g_U33980, 2 ))
                                {
                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam0^), g_U33980, 2 );
                                }
                                else
                                {
                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam0^), g_U33980, 0 );
                                }
                                sub_52244();
                                WAIT( 0 );;
                            }
                        }
                        else
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( (uParam0^) );
                            if (IS_CHAR_IN_ANY_CAR( (uParam0^) ))
                            {
                                WARP_CHAR_FROM_CAR_TO_COORD( (uParam0^), uVar40._fU0, uVar40._fU4, uVar40._fU8 );
                            }
                            else
                            {
                                SET_CHAR_COORDINATES( (uParam0^), uVar40._fU0, uVar40._fU4, uVar40._fU8 );
                            }
                            SET_CHAR_HEADING( (uParam0^), uVar49 );
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( (uParam0^), 0.00000000, 1.02500000, 1.00000000, ref uVar56._fU0, ref uVar56._fU4, ref uVar56._fU8 );
                            GET_GROUND_Z_FOR_3D_COORD( uVar56._fU0, uVar56._fU4, uVar56._fU8, ref uVar56._fU8 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_10774() );
                            SET_CHAR_HEADING( sub_10774(), 180.00000000 + uVar49 );
                            SET_CHAR_COORDINATES( sub_10774(), uVar56._fU0, uVar56._fU4, uVar56._fU8 );
                            if (NOT (IS_CAR_DEAD( g_U33980 )))
                            {
                                SET_CAR_COORDINATES( g_U33980, uParam4._fU0 + uVar51._fU0, uParam4._fU4 + uVar51._fU4, uParam4._fU8 + uVar51._fU8 );
                                SET_CAR_ON_GROUND_PROPERLY( g_U33980 );
                            }
                        }
                        if (IS_GROUP_MEMBER( (uParam0^), sub_43260() ))
                        {
                            REMOVE_CHAR_FROM_GROUP( (uParam0^) );
                        }
                        sub_39714( 0, sub_10774(), "NIKO", 0 );
                        sub_39714( 1, (uParam0^), sub_14473( iParam1 ), 0 );
                        REQUEST_ANIMS( "amb@dating" );
                        while (NOT (HAVE_ANIMS_LOADED( "amb@dating" )))
                        {
                            REQUEST_ANIMS( "amb@dating" );
                            WAIT( 0 );
                        }
                        WAIT( 0 );
                        if ((IS_PLAYER_PLAYING( sub_10695() )) AND (NOT (IS_CHAR_DEAD( (uParam0^) ))))
                        {
                            bVar59 = false;
                            if ((IS_CHAR_IN_ANY_CAR( sub_10774() )) AND (NOT (IS_CHAR_ON_ANY_BIKE( sub_10774() ))))
                            {
                                if (NOT (IS_CAR_DEAD( g_U33980 )))
                                {
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( g_U33980, 0.00000000, 5.00000000, 0.00000000, ref uVar60._fU0, ref uVar60._fU4, ref uVar60._fU8 );
                                    TASK_LOOK_AT_COORD( sub_10774(), uVar60._fU0, uVar60._fU4, uVar60._fU8, -1, 0 );
                                    CREATE_CAM( 14, ref l_U573[0] );
                                    sub_52982( 0, iParam1, ref uVar34 );
                                    CREATE_CAM( 14, ref l_U573[1] );
                                    GET_PED_BONE_POSITION( sub_10774(), 1205, vVar16, ref uVar63 );
                                    GET_PED_BONE_POSITION( sub_10774(), 1205, vVar19, ref uVar66 );
                                    SET_CAM_POS( l_U573[1], uVar63._fU0, uVar63._fU4, uVar63._fU8 );
                                    POINT_CAM_AT_COORD( l_U573[1], uVar66._fU0, uVar66._fU4, uVar66._fU8 );
                                    SET_CAM_FOV( l_U573[1], 45.00000000 );
                                    CREATE_CAM( 14, ref l_U573[2] );
                                    GET_PED_BONE_POSITION( sub_10774(), 1205, vVar22, ref uVar69 );
                                    GET_PED_BONE_POSITION( sub_10774(), 1205, vVar25, ref uVar72 );
                                    SET_CAM_POS( l_U573[2], uVar69._fU0, uVar69._fU4, uVar69._fU8 );
                                    POINT_CAM_AT_COORD( l_U573[2], uVar72._fU0, uVar72._fU4, uVar72._fU8 );
                                    SET_CAM_FOV( l_U573[2], 45.00000000 );
                                    CREATE_CAM( 14, ref l_U573[3] );
                                    GET_PED_BONE_POSITION( sub_10774(), 1205, vVar28, ref uVar75 );
                                    GET_PED_BONE_POSITION( sub_10774(), 1205, vVar31, ref uVar78 );
                                    SET_CAM_POS( l_U573[3], uVar75._fU0, uVar75._fU4, uVar75._fU8 );
                                    POINT_CAM_AT_COORD( l_U573[3], uVar78._fU0, uVar78._fU4, uVar78._fU8 );
                                    SET_CAM_FOV( l_U573[3], 45.00000000 );
                                    if (sub_49229( iParam1, (uParam8^) ))
                                    {
                                        if (NOT (sub_17256( iParam1 )))
                                        {
                                            if (sub_58884( 25, ref l_U581, (uParam8^), iParam1, 82, 0 ))
                                            {
                                                TASK_LOOK_AT_CHAR( sub_10774(), (uParam0^), -2, 0 );
                                                TASK_LOOK_AT_CHAR( (uParam0^), sub_10774(), -2, 0 );
                                                OPEN_SEQUENCE_TASK( ref uVar54 );
                                                TASK_PAUSE( 0, 1500 );
                                                TASK_LEAVE_CAR( 0, g_U33980 );
                                                TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                                                CLOSE_SEQUENCE_TASK( uVar54 );
                                                TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                                                CLEAR_SEQUENCE_TASK( uVar54 );
                                                sub_49143( iParam1, uParam8, 0, 26 );
                                                bVar59 = true;
                                                l_U587 = 1;
                                                (uParam2^) = 10;
                                            }
                                        }
                                        else if (sub_58884( 25, ref l_U581, (uParam8^), iParam1, 81, 0 ))
                                        {
                                            TASK_LOOK_AT_CHAR( (uParam0^), sub_10774(), -2, 0 );
                                            TASK_LOOK_AT_CHAR( sub_10774(), (uParam0^), -2, 0 );
                                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( sub_10774(), "niko_incar_partial", "amb@dating", 1.00000000, 1, 0, 0, 0, 0 );
                                            REQUEST_MODEL( g_U32918._fU4 );
                                            PRINT_HELP_FOREVER_WITH_STRING( "GET_NUM", sub_18706( iParam1, 1 ) );
                                            (uParam2^) = 1;
                                        }
                                    }
                                    else
                                    {
                                        TASK_LOOK_AT_CHAR( (uParam0^), sub_10774(), -2, 0 );
                                        TASK_LOOK_AT_CHAR( sub_10774(), (uParam0^), -2, 0 );
                                        TASK_PLAY_ANIM_SECONDARY_IN_CAR( sub_10774(), "niko_incar_partial", "amb@dating", 1.00000000, 1, 0, 0, 0, 0 );
                                        PRINT_HELP_FOREVER( "TRY_LUCK" );
                                        (uParam2^) = 2;
                                    }
                                }
                            }
                            else
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( (uParam0^) );
                                GET_GROUND_Z_FOR_3D_COORD( uVar40._fU0, uVar40._fU4, uVar40._fU8, ref uVar40._fU8 );
                                if (IS_CHAR_IN_ANY_CAR( (uParam0^) ))
                                {
                                    WARP_CHAR_FROM_CAR_TO_COORD( (uParam0^), uVar40._fU0, uVar40._fU4, uVar40._fU8 );
                                }
                                else
                                {
                                    SET_CHAR_COORDINATES( (uParam0^), uVar40._fU0, uVar40._fU4, uVar40._fU8 );
                                }
                                SET_CHAR_HEADING( (uParam0^), uVar49 );
                                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( (uParam0^), 0.00000000, 1.02500000, 1.00000000, ref uVar56._fU0, ref uVar56._fU4, ref uVar56._fU8 );
                                GET_GROUND_Z_FOR_3D_COORD( uVar56._fU0, uVar56._fU4, uVar56._fU8, ref uVar56._fU8 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_10774() );
                                SET_CHAR_HEADING( sub_10774(), 180.00000000 + uVar49 );
                                SET_CHAR_COORDINATES( sub_10774(), uVar56._fU0, uVar56._fU4, uVar56._fU8 );
                                CREATE_CAM( 14, ref l_U573[0] );
                                sub_52982( 0, iParam1, ref uVar34 );
                                CREATE_CAM( 14, ref l_U573[1] );
                                sub_52982( 1, iParam1, ref uVar34 );
                                CREATE_CAM( 14, ref l_U573[2] );
                                sub_52982( 2, iParam1, ref uVar34 );
                                CREATE_CAM( 14, ref l_U573[3] );
                                sub_52982( 3, iParam1, ref uVar34 );
                                if (sub_49229( iParam1, (uParam8^) ))
                                {
                                    if (NOT (sub_17256( iParam1 )))
                                    {
                                        if (sub_58884( 25, ref l_U581, (uParam8^), iParam1, 82, 0 ))
                                        {
                                            TASK_LOOK_AT_CHAR( sub_10774(), (uParam0^), -2, 0 );
                                            TASK_LOOK_AT_CHAR( (uParam0^), sub_10774(), -2, 0 );
                                            OPEN_SEQUENCE_TASK( ref uVar54 );
                                            TASK_PAUSE( 0, 1500 );
                                            TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                                            CLOSE_SEQUENCE_TASK( uVar54 );
                                            TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                                            CLEAR_SEQUENCE_TASK( uVar54 );
                                            sub_49143( iParam1, uParam8, 0, 26 );
                                            bVar59 = true;
                                            l_U587 = 1;
                                            (uParam2^) = 10;
                                        }
                                    }
                                    else if (sub_58884( 25, ref l_U581, (uParam8^), iParam1, 81, 0 ))
                                    {
                                        TASK_LOOK_AT_CHAR( sub_10774(), (uParam0^), -2, 0 );
                                        TASK_LOOK_AT_CHAR( (uParam0^), sub_10774(), -2, 0 );
                                        REQUEST_MODEL( g_U32918._fU4 );
                                        PRINT_HELP_FOREVER_WITH_STRING( "GET_NUM", sub_18706( iParam1, 1 ) );
                                        (uParam2^) = 3;
                                    }
                                }
                                else
                                {
                                    TASK_LOOK_AT_CHAR( sub_10774(), (uParam0^), -2, 0 );
                                    TASK_LOOK_AT_CHAR( (uParam0^), sub_10774(), -2, 0 );
                                    PRINT_HELP_FOREVER( "TRY_LUCK" );
                                    (uParam2^) = 4;
                                }
                            }
                            CREATE_CAM( 14, ref l_U573[4] );
                            sub_52982( 4, iParam1, ref uVar34 );
                            CREATE_CAM( 14, ref l_U573[5] );
                            sub_52982( 5, iParam1, ref uVar34 );
                            CREATE_CAM( 3, ref l_U573[6] );
                            if (NOT bVar59)
                            {
                                SET_CAM_ACTIVE( l_U573[0], 1 );
                                SET_CAM_PROPAGATE( l_U573[0], 1 );
                            }
                            else
                            {
                                SET_CAM_ACTIVE( l_U573[0], 1 );
                                SET_CAM_ACTIVE( l_U573[2], 1 );
                                SET_CAM_ACTIVE( l_U573[6], 1 );
                                SET_CAM_PROPAGATE( l_U573[6], 1 );
                                SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[2], 7500, 0 );
                            }
                            l_U588 = 0;
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            while ((sub_75202()) || (sub_75257()))
                            {
                                WAIT( 0 );
                            }
                            SETTIMERB( 0 );
                            sub_49395( iParam1 );
                            REQUEST_ANIMS( "amb@dating" );
                            GET_GAME_TIMER( uParam12 );
                            DO_SCREEN_FADE_IN( 125 );
                        }
                    }
                }
                break;
                case 1:
                if ((NOT (HAVE_ANIMS_LOADED( "amb@dating" ))) || (NOT (HAS_MODEL_LOADED( g_U32918._fU4 ))))
                {
                    PRINTSTRING( "  * ARRIVE_first_SHOT_CSd_c:REQUEST_ANIMS(''amb@dating'')\n" );
                    REQUEST_ANIMS( "amb@dating" );
                    REQUEST_MODEL( g_U32918._fU4 );
                }
                else if (sub_75551( iParam1, uParam12, uParam2 ))
                {
                    if (sub_75202())
                    {
                        if (sub_58884( 25, ref l_U581, (uParam8^), iParam1, 83, 0 ))
                        {
                            SET_CAM_PROPAGATE( l_U573[0], 1 );
                            SET_CAM_ACTIVE( l_U573[1], 1 );
                            SET_CAM_ACTIVE( l_U573[6], 1 );
                            SET_CAM_PROPAGATE( l_U573[6], 1 );
                            SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[1], 14000, 0 );
                            sub_2510( "CONST_INT ARRIVE_FIRST_CAR_DELAY " );
                            sub_17411( 7000 );
                            sub_2765();
                            OPEN_SEQUENCE_TASK( ref uVar54 );
                            TASK_PAUSE( 0, 7000 );
                            TASK_PLAY_ANIM( 0, "pass_text", "amb@dating", 4, 0, 0, 0, 0, 0 );
                            CLOSE_SEQUENCE_TASK( uVar54 );
                            TASK_PERFORM_SEQUENCE( sub_10774(), uVar54 );
                            CLEAR_SEQUENCE_TASK( uVar54 );
                            OPEN_SEQUENCE_TASK( ref uVar54 );
                            TASK_PAUSE( 0, 8500 );
                            TASK_LEAVE_CAR( 0, g_U33980 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                            CLOSE_SEQUENCE_TASK( uVar54 );
                            TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                            CLEAR_SEQUENCE_TASK( uVar54 );
                            if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "GET_NUM", sub_18706( iParam1, 1 ) )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRY_LUCK" )))
                            {
                                CLEAR_HELP();
                            }
                            if (IS_THIS_PRINT_BEING_DISPLAYED( "RESP_SOON", 1, sub_18706( iParam1, 1 ), 0, 0, -1, -1, -1, -1, -1, -1 ))
                            {
                                CLEAR_PRINTS();
                            }
                            switch (iParam1)
                            {
                                case 2:
                                sub_76345( 0, 18 );
                                sub_76407( 0, 0 );
                                break;
                                case 3:
                                sub_76345( 0, 17 );
                                sub_76407( 1, 0 );
                                break;
                                case 4:
                                sub_76345( 0, 16 );
                                sub_76407( 2, 0 );
                                break;
                            }
                            sub_49143( iParam1, uParam8, 1, 27 );
                            (uParam2^) = 5;
                        }
                    }
                    else if (sub_75257())
                    {
                        if (sub_58884( 25, ref l_U581, (uParam8^), iParam1, 84, 0 ))
                        {
                            SET_CAM_PROPAGATE( l_U573[0], 1 );
                            SET_CAM_ACTIVE( l_U573[2], 1 );
                            SET_CAM_ACTIVE( l_U573[6], 1 );
                            SET_CAM_PROPAGATE( l_U573[6], 1 );
                            SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[2], 7500, 0 );
                            OPEN_SEQUENCE_TASK( ref uVar54 );
                            TASK_PAUSE( 0, 1500 );
                            TASK_LEAVE_CAR( 0, g_U33980 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                            CLOSE_SEQUENCE_TASK( uVar54 );
                            TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                            CLEAR_SEQUENCE_TASK( uVar54 );
                            if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "GET_NUM", sub_18706( iParam1, 1 ) )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRY_LUCK" )))
                            {
                                CLEAR_HELP();
                            }
                            if (IS_THIS_PRINT_BEING_DISPLAYED( "RESP_SOON", 1, sub_18706( iParam1, 1 ), 0, 0, -1, -1, -1, -1, -1, -1 ))
                            {
                                CLEAR_PRINTS();
                            }
                            g_U21 = g_U32927;
                            l_U587 = 1;
                            sub_49143( iParam1, uParam8, 0, 26 );
                            (uParam2^) = 10;
                        }
                    }
                }
                break;
                case 2:
                if (NOT (HAVE_ANIMS_LOADED( "amb@dating" )))
                {
                    PRINTSTRING( "  * ARRIVE_another_SHOT_CSd_c:REQUEST_ANIMS(''amb@dating'')\n" );
                    REQUEST_ANIMS( "amb@dating" );
                }
                else if (sub_75551( iParam1, uParam12, uParam2 ))
                {
                    if (sub_75202())
                    {
                        if (sub_27210( iParam1, uParam13 ))
                        {
                            if (sub_58884( 26, ref l_U581, (uParam8^), iParam1, 87, 0 ))
                            {
                                SET_CAM_PROPAGATE( l_U573[0], 1 );
                                SET_CAM_ACTIVE( l_U573[3], 1 );
                                SET_CAM_ACTIVE( l_U573[6], 1 );
                                SET_CAM_PROPAGATE( l_U573[6], 1 );
                                SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[3], 15500, 0 );
                                sub_2510( "CONST_INT ARRIVE_ANOTHER_CAR_BONK_DELAY " );
                                sub_17411( 10500 );
                                sub_2765();
                                if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "GET_NUM", sub_18706( iParam1, 1 ) )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRY_LUCK" )))
                                {
                                    CLEAR_HELP();
                                }
                                if (IS_THIS_PRINT_BEING_DISPLAYED( "RESP_SOON", 1, sub_18706( iParam1, 1 ), 0, 0, -1, -1, -1, -1, -1, -1 ))
                                {
                                    CLEAR_PRINTS();
                                }
                                sub_49143( iParam1, uParam8, 1, 28 );
                                (uParam2^) = 7;
                            }
                        }
                        else if (sub_50775( iParam1 ))
                        {
                            if (sub_58884( 26, ref l_U581, (uParam8^), iParam1, 86, 0 ))
                            {
                                SET_CAM_PROPAGATE( l_U573[0], 1 );
                                SET_CAM_ACTIVE( l_U573[1], 1 );
                                SET_CAM_ACTIVE( l_U573[6], 1 );
                                SET_CAM_PROPAGATE( l_U573[6], 1 );
                                SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[1], 18500, 0 );
                                sub_2510( "CONST_INT ARRIVE_ANOTHER_KISS_DELAY " );
                                sub_17411( 13500 );
                                sub_2765();
                                if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "GET_NUM", sub_18706( iParam1, 1 ) )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRY_LUCK" )))
                                {
                                    CLEAR_HELP();
                                }
                                if (IS_THIS_PRINT_BEING_DISPLAYED( "RESP_SOON", 1, sub_18706( iParam1, 1 ), 0, 0, -1, -1, -1, -1, -1, -1 ))
                                {
                                    CLEAR_PRINTS();
                                }
                                sub_49143( iParam1, uParam8, 1, -1 );
                                (uParam2^) = 5;
                            }
                        }
                        else if (sub_58884( 26, ref l_U581, (uParam8^), iParam1, 85, 0 ))
                        {
                            SET_CAM_PROPAGATE( l_U573[0], 1 );
                            SET_CAM_ACTIVE( l_U573[2], 1 );
                            SET_CAM_ACTIVE( l_U573[6], 1 );
                            SET_CAM_PROPAGATE( l_U573[6], 1 );
                            SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[2], 16000, 0 );
                            sub_2510( "CONST_INT ARRIVE_ANOTHER_CAR_NONE_DELAY " );
                            sub_17411( 12500 );
                            sub_2765();
                            OPEN_SEQUENCE_TASK( ref uVar54 );
                            TASK_PAUSE( 0, 12500 );
                            TASK_LEAVE_CAR( 0, g_U33980 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                            CLOSE_SEQUENCE_TASK( uVar54 );
                            TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                            CLEAR_SEQUENCE_TASK( uVar54 );
                            if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "GET_NUM", sub_18706( iParam1, 1 ) )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRY_LUCK" )))
                            {
                                CLEAR_HELP();
                            }
                            if (IS_THIS_PRINT_BEING_DISPLAYED( "RESP_SOON", 1, sub_18706( iParam1, 1 ), 0, 0, -1, -1, -1, -1, -1, -1 ))
                            {
                                CLEAR_PRINTS();
                            }
                            sub_49143( iParam1, uParam8, 1, -1 );
                            (uParam2^) = 10;
                        };;;
                    }
                    else if (sub_75257())
                    {
                        if (sub_58884( 26, ref l_U581, (uParam8^), iParam1, 88, 0 ))
                        {
                            SET_CAM_PROPAGATE( l_U573[0], 1 );
                            SET_CAM_ACTIVE( l_U573[2], 1 );
                            SET_CAM_ACTIVE( l_U573[6], 1 );
                            SET_CAM_PROPAGATE( l_U573[6], 1 );
                            SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[2], 7500, 0 );
                            OPEN_SEQUENCE_TASK( ref uVar54 );
                            TASK_PAUSE( 0, 1500 );
                            TASK_LEAVE_CAR( 0, g_U33980 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                            CLOSE_SEQUENCE_TASK( uVar54 );
                            TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                            CLEAR_SEQUENCE_TASK( uVar54 );
                            if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "GET_NUM", sub_18706( iParam1, 1 ) )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRY_LUCK" )))
                            {
                                CLEAR_HELP();
                            }
                            if (IS_THIS_PRINT_BEING_DISPLAYED( "RESP_SOON", 1, sub_18706( iParam1, 1 ), 0, 0, -1, -1, -1, -1, -1, -1 ))
                            {
                                CLEAR_PRINTS();
                            }
                            sub_49143( iParam1, uParam8, 0, -1 );
                            (uParam2^) = 10;
                        }
                    }
                }
                break;
                case 3:
                if ((NOT (HAVE_ANIMS_LOADED( "amb@dating" ))) || (NOT (HAS_MODEL_LOADED( g_U32918._fU4 ))))
                {
                    PRINTSTRING( "  * ARRIVE_first_SHOT_CSd_f:REQUEST_ANIMS(''amb@dating'')\n" );
                    REQUEST_ANIMS( "amb@dating" );
                    REQUEST_MODEL( g_U32918._fU4 );
                }
                else if (sub_75551( iParam1, uParam12, uParam2 ))
                {
                    if (sub_75202())
                    {
                        if (sub_58884( 25, ref l_U581, (uParam8^), iParam1, 83, 0 ))
                        {
                            SET_CAM_PROPAGATE( l_U573[0], 1 );
                            SET_CAM_ACTIVE( l_U573[1], 1 );
                            SET_CAM_ACTIVE( l_U573[6], 1 );
                            SET_CAM_PROPAGATE( l_U573[6], 1 );
                            SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[1], 13000, 0 );
                            sub_2510( "CONST_INT ARRIVE_FIRST_FOOT_DELAY " );
                            sub_17411( 8000 );
                            sub_2765();
                            OPEN_SEQUENCE_TASK( ref uVar54 );
                            TASK_PAUSE( 0, 8000 );
                            TASK_PLAY_ANIM( 0, "cellphone_text", "Cellphone", 4, 0, 0, 0, 0, 0 );
                            CLOSE_SEQUENCE_TASK( uVar54 );
                            TASK_PERFORM_SEQUENCE( sub_10774(), uVar54 );
                            CLEAR_SEQUENCE_TASK( uVar54 );
                            OPEN_SEQUENCE_TASK( ref uVar54 );
                            TASK_PAUSE( 0, 9500 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                            CLOSE_SEQUENCE_TASK( uVar54 );
                            TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                            CLEAR_SEQUENCE_TASK( uVar54 );
                            if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "GET_NUM", sub_18706( iParam1, 1 ) )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRY_LUCK" )))
                            {
                                CLEAR_HELP();
                            }
                            if (IS_THIS_PRINT_BEING_DISPLAYED( "RESP_SOON", 1, sub_18706( iParam1, 1 ), 0, 0, -1, -1, -1, -1, -1, -1 ))
                            {
                                CLEAR_PRINTS();
                            }
                            switch (iParam1)
                            {
                                case 2:
                                sub_76345( 0, 18 );
                                sub_76407( 0, 0 );
                                break;
                                case 3:
                                sub_76345( 0, 17 );
                                sub_76407( 1, 0 );
                                break;
                                case 4:
                                sub_76345( 0, 16 );
                                sub_76407( 2, 0 );
                                break;
                            }
                            sub_49143( iParam1, uParam8, 1, 27 );
                            (uParam2^) = 5;
                        }
                    }
                    else if (sub_75257())
                    {
                        if (sub_58884( 25, ref l_U581, (uParam8^), iParam1, 84, 0 ))
                        {
                            SET_CAM_PROPAGATE( l_U573[0], 1 );
                            SET_CAM_ACTIVE( l_U573[2], 1 );
                            SET_CAM_ACTIVE( l_U573[6], 1 );
                            SET_CAM_PROPAGATE( l_U573[6], 1 );
                            SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[2], 9500, 0 );
                            OPEN_SEQUENCE_TASK( ref uVar54 );
                            TASK_PAUSE( 0, 1500 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                            CLOSE_SEQUENCE_TASK( uVar54 );
                            TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                            CLEAR_SEQUENCE_TASK( uVar54 );
                            if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "GET_NUM", sub_18706( iParam1, 1 ) )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRY_LUCK" )))
                            {
                                CLEAR_HELP();
                            }
                            if (IS_THIS_PRINT_BEING_DISPLAYED( "RESP_SOON", 1, sub_18706( iParam1, 1 ), 0, 0, -1, -1, -1, -1, -1, -1 ))
                            {
                                CLEAR_PRINTS();
                            }
                            g_U21 = g_U32927;
                            l_U587 = 1;
                            sub_49143( iParam1, uParam8, 0, 26 );
                            (uParam2^) = 10;
                        }
                    }
                }
                break;
                case 4:
                if (NOT (HAVE_ANIMS_LOADED( "amb@dating" )))
                {
                    PRINTSTRING( "  * ARRIVE_another_SHOT_CSd_f:REQUEST_ANIMS(''amb@dating'')\n" );
                    REQUEST_ANIMS( "amb@dating" );
                }
                else if (sub_75551( iParam1, uParam12, uParam2 ))
                {
                    if (sub_75202())
                    {
                        if (sub_27210( iParam1, uParam13 ))
                        {
                            if (sub_58884( 26, ref l_U581, (uParam8^), iParam1, 87, 0 ))
                            {
                                SET_CAM_PROPAGATE( l_U573[0], 1 );
                                SET_CAM_ACTIVE( l_U573[3], 1 );
                                SET_CAM_ACTIVE( l_U573[6], 1 );
                                SET_CAM_PROPAGATE( l_U573[6], 1 );
                                SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[3], 15500, 0 );
                                sub_2510( "CONST_INT ARRIVE_ANOTHER_FOOT_BONK_DELAY " );
                                sub_17411( 10500 );
                                sub_2765();
                                UNLOCK_RAGDOLL( (uParam0^), 0 );
                                if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "GET_NUM", sub_18706( iParam1, 1 ) )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRY_LUCK" )))
                                {
                                    CLEAR_HELP();
                                }
                                if (IS_THIS_PRINT_BEING_DISPLAYED( "RESP_SOON", 1, sub_18706( iParam1, 1 ), 0, 0, -1, -1, -1, -1, -1, -1 ))
                                {
                                    CLEAR_PRINTS();
                                }
                                sub_49143( iParam1, uParam8, 1, 28 );
                                (uParam2^) = 7;
                            }
                        }
                        else if (sub_50775( iParam1 ))
                        {
                            if (sub_58884( 26, ref l_U581, (uParam8^), iParam1, 86, 0 ))
                            {
                                SET_CAM_PROPAGATE( l_U573[0], 1 );
                                SET_CAM_ACTIVE( l_U573[1], 1 );
                                SET_CAM_ACTIVE( l_U573[6], 1 );
                                SET_CAM_PROPAGATE( l_U573[6], 1 );
                                SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[1], 18500, 0 );
                                sub_2510( "CONST_INT ARRIVE_ANOTHER_KISS_DELAY " );
                                sub_17411( 13500 );
                                sub_2765();
                                if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "GET_NUM", sub_18706( iParam1, 1 ) )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRY_LUCK" )))
                                {
                                    CLEAR_HELP();
                                }
                                if (IS_THIS_PRINT_BEING_DISPLAYED( "RESP_SOON", 1, sub_18706( iParam1, 1 ), 0, 0, -1, -1, -1, -1, -1, -1 ))
                                {
                                    CLEAR_PRINTS();
                                }
                                sub_49143( iParam1, uParam8, 1, -1 );
                                (uParam2^) = 5;
                            }
                        }
                        else if (sub_58884( 26, ref l_U581, (uParam8^), iParam1, 85, 0 ))
                        {
                            SET_CAM_PROPAGATE( l_U573[0], 1 );
                            SET_CAM_ACTIVE( l_U573[2], 1 );
                            SET_CAM_ACTIVE( l_U573[6], 1 );
                            SET_CAM_PROPAGATE( l_U573[6], 1 );
                            SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[2], 16000, 0 );
                            sub_2510( "CONST_INT ARRIVE_ANOTHER_FOOT_NONE_DELAY " );
                            sub_17411( 12500 );
                            sub_2765();
                            OPEN_SEQUENCE_TASK( ref uVar54 );
                            TASK_PAUSE( 0, 12500 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                            CLOSE_SEQUENCE_TASK( uVar54 );
                            TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                            CLEAR_SEQUENCE_TASK( uVar54 );
                            if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "GET_NUM", sub_18706( iParam1, 1 ) )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRY_LUCK" )))
                            {
                                CLEAR_HELP();
                            }
                            if (IS_THIS_PRINT_BEING_DISPLAYED( "RESP_SOON", 1, sub_18706( iParam1, 1 ), 0, 0, -1, -1, -1, -1, -1, -1 ))
                            {
                                CLEAR_PRINTS();
                            }
                            sub_49143( iParam1, uParam8, 1, -1 );
                            (uParam2^) = 10;
                        };;;
                    }
                    else if (sub_75257())
                    {
                        if (sub_58884( 26, ref l_U581, (uParam8^), iParam1, 88, 0 ))
                        {
                            SET_CAM_PROPAGATE( l_U573[0], 1 );
                            SET_CAM_ACTIVE( l_U573[2], 1 );
                            SET_CAM_ACTIVE( l_U573[6], 1 );
                            SET_CAM_PROPAGATE( l_U573[6], 1 );
                            SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[2], 7500, 0 );
                            OPEN_SEQUENCE_TASK( ref uVar54 );
                            TASK_PAUSE( 0, 1500 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                            CLOSE_SEQUENCE_TASK( uVar54 );
                            TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                            CLEAR_SEQUENCE_TASK( uVar54 );
                            if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "GET_NUM", sub_18706( iParam1, 1 ) )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRY_LUCK" )))
                            {
                                CLEAR_HELP();
                            }
                            if (IS_THIS_PRINT_BEING_DISPLAYED( "RESP_SOON", 1, sub_18706( iParam1, 1 ), 0, 0, -1, -1, -1, -1, -1, -1 ))
                            {
                                CLEAR_PRINTS();
                            }
                            sub_49143( iParam1, uParam8, 0, -1 );
                            (uParam2^) = 10;
                        }
                    }
                }
                break;
                case 5:
                if ((NOT (sub_81125( l_U581 ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) ))))
                {
                    if ((uParam8^) <= 1)
                    {
                        if (NOT l_U572)
                        {
                            if (NOT (DOES_OBJECT_EXIST( g_U32918._fU0 )))
                            {
                                if (NOT (HAS_MODEL_LOADED( g_U32918._fU4 )))
                                {
                                    REQUEST_MODEL( g_U32918._fU4 );
                                }
                                else
                                {
                                    GET_CHAR_COORDINATES( sub_10774(), ref uVar81._fU0, ref uVar81._fU4, ref uVar81._fU8 );
                                    CREATE_OBJECT( g_U32918._fU4, uVar81._fU0, uVar81._fU4, uVar81._fU8, ref g_U32918._fU0, 1 );
                                    ATTACH_OBJECT_TO_PED( g_U32918._fU0, sub_10774(), 1232, g_U32918._fU8, g_U32918._fU20, 0 );
                                }
                            }
                            else if ((IS_CHAR_PLAYING_ANIM( sub_10774(), "amb@dating", "pass_text" )) || (IS_CHAR_PLAYING_ANIM( sub_10774(), "Cellphone", "cellphone_text" )))
                            {
                                if (IS_CHAR_PLAYING_ANIM( sub_10774(), "amb@dating", "pass_text" ))
                                {
                                    GET_CHAR_ANIM_CURRENT_TIME( sub_10774(), "amb@dating", "pass_text", ref fVar84 );
                                }
                                else if (IS_CHAR_PLAYING_ANIM( sub_10774(), "Cellphone", "cellphone_text" ))
                                {
                                    GET_CHAR_ANIM_CURRENT_TIME( sub_10774(), "Cellphone", "cellphone_text", ref fVar84 );
                                }
                                else
                                {
                                    sub_81793( sub_6013( iParam1 ) );
                                    g_U15946[sub_6013( iParam1 )]._fU8[0]._fU0[0] = 1;
                                    l_U572 = 1;
                                    (uParam2^) = 6;
                                }
                                if (fVar84 >= 0.50000000)
                                {
                                    sub_81793( sub_6013( iParam1 ) );
                                    g_U15946[sub_6013( iParam1 )]._fU8[0]._fU0[0] = 1;
                                    l_U572 = 1;
                                    (uParam2^) = 6;
                                }
                            }
                        }
                    }
                    else if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar54 );
                        TASK_PLAY_ANIM( 0, "CAR_KISS_DS", "amb@dating", 4, 0, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( uVar54 );
                        TASK_PERFORM_SEQUENCE( sub_10774(), uVar54 );
                        CLEAR_SEQUENCE_TASK( uVar54 );
                        OPEN_SEQUENCE_TASK( ref uVar54 );
                        TASK_PLAY_ANIM( 0, "CAR_KISS_PS", "amb@dating", 4, 0, 0, 0, 0, 0 );
                        TASK_LEAVE_CAR( 0, g_U33980 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                        CLOSE_SEQUENCE_TASK( uVar54 );
                        TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                        CLEAR_SEQUENCE_TASK( uVar54 );
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref uVar54 );
                        TASK_PLAY_ANIM( 0, "Player_Kiss", "amb@dating", 4, 0, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( uVar54 );
                        TASK_PERFORM_SEQUENCE( sub_10774(), uVar54 );
                        CLEAR_SEQUENCE_TASK( uVar54 );
                        OPEN_SEQUENCE_TASK( ref uVar54 );
                        TASK_PLAY_ANIM( 0, "girl_hug", "amb@dating", 4, 0, 0, 0, 0, 0 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                        CLOSE_SEQUENCE_TASK( uVar54 );
                        TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                        CLEAR_SEQUENCE_TASK( uVar54 );
                    }
                    (uParam2^) = 6;;
                }
                break;
                case 6:
                if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U573[6] )))
                {
                    l_U572 = 0;
                    (uParam2^) = 11;
                }
                break;
                case 9:
                if (sub_49229( iParam1, (uParam8^) ))
                {
                    if (sub_58884( 25, ref l_U581, (uParam8^), iParam1, 89, 0 ))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_10774() )))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar54 );
                            TASK_PAUSE( 0, 1500 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                            CLOSE_SEQUENCE_TASK( uVar54 );
                            TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                            CLEAR_SEQUENCE_TASK( uVar54 );
                        }
                        else if (NOT (IS_CAR_DEAD( g_U33980 )))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar54 );
                            TASK_PAUSE( 0, 1500 );
                            TASK_LEAVE_CAR( 0, g_U33980 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                            CLOSE_SEQUENCE_TASK( uVar54 );
                            TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                            CLEAR_SEQUENCE_TASK( uVar54 );
                        }
                        SET_CAM_PROPAGATE( l_U573[0], 1 );
                        SET_CAM_ACTIVE( l_U573[2], 1 );
                        SET_CAM_ACTIVE( l_U573[6], 1 );
                        SET_CAM_PROPAGATE( l_U573[6], 1 );
                        SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[2], 5000, 0 );
                        sub_2510( "CONST_INT BORED_DELAY " );
                        sub_17411( 1500 );
                        sub_2765();
                        if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "GET_NUM", sub_18706( iParam1, 1 ) )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRY_LUCK" )))
                        {
                            CLEAR_HELP();
                        }
                        if (IS_THIS_PRINT_BEING_DISPLAYED( "RESP_SOON", 1, sub_18706( iParam1, 1 ), 0, 0, -1, -1, -1, -1, -1, -1 ))
                        {
                            CLEAR_PRINTS();
                        }
                        l_U587 = 1;
                        g_U21 = g_U32927;
                        sub_49143( iParam1, uParam8, 1, 26 );
                        (uParam2^) = 10;
                    }
                }
                else if (sub_58884( 26, ref l_U581, (uParam8^), iParam1, 89, 0 ))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_10774() )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar54 );
                        TASK_PAUSE( 0, 1500 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                        CLOSE_SEQUENCE_TASK( uVar54 );
                        TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                        CLEAR_SEQUENCE_TASK( uVar54 );
                    }
                    else if (NOT (IS_CAR_DEAD( g_U33980 )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar54 );
                        TASK_PAUSE( 0, 1500 );
                        TASK_LEAVE_CAR( 0, g_U33980 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                        CLOSE_SEQUENCE_TASK( uVar54 );
                        TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                        CLEAR_SEQUENCE_TASK( uVar54 );
                    }
                    SET_CAM_PROPAGATE( l_U573[0], 1 );
                    SET_CAM_ACTIVE( l_U573[2], 1 );
                    SET_CAM_ACTIVE( l_U573[6], 1 );
                    SET_CAM_PROPAGATE( l_U573[6], 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[2], 5000, 0 );
                    sub_2510( "CONST_INT BORED_DELAY " );
                    sub_17411( 1500 );
                    sub_2765();
                    if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "GET_NUM", sub_18706( iParam1, 1 ) )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRY_LUCK" )))
                    {
                        CLEAR_HELP();
                    }
                    if (IS_THIS_PRINT_BEING_DISPLAYED( "RESP_SOON", 1, sub_18706( iParam1, 1 ), 0, 0, -1, -1, -1, -1, -1, -1 ))
                    {
                        CLEAR_PRINTS();
                    }
                    sub_49143( iParam1, uParam8, 1, -1 );
                    (uParam2^) = 10;
                }
                break;
                case 10:
                if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U573[6] )))
                {
                    (uParam2^) = 11;
                }
                break;
                case 7:
                if (NOT (IS_CHAR_DEAD( (uParam0^) )))
                {
                    SET_PED_ENABLE_LEG_IK( (uParam0^), 1 );
                }
                vVar85 = {0.75000000, 0.75000000, 1.50000000};
                if (((IS_SPECIFIC_CAM_INTERPOLATING( l_U573[6] )) AND ((IS_CHAR_ON_SCREEN( sub_10774() )) || (IS_CHAR_ON_SCREEN( (uParam0^) )))) AND (NOT ((LOCATE_CHAR_ON_FOOT_3D( sub_10774(), uParam9._fU0, uParam9._fU4, uParam9._fU8 + 1.00000000, vVar85.x, vVar85.y, vVar85.z, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( (uParam0^), uParam9._fU0, uParam9._fU4, uParam9._fU8 + 1.00000000, vVar85.x, vVar85.y, vVar85.z, 0 )))))
                {
                    if (NOT (sub_81125( l_U581 )))
                    {
                        if (sub_45918( sub_10774(), 29 ))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar54 );
                            TASK_PAUSE( 0, 1000 );
                            if (NOT (IS_CAR_DEAD( g_U33980 )))
                            {
                                if (IS_CHAR_IN_CAR( sub_10774(), g_U33980 ))
                                {
                                    TASK_LEAVE_CAR( 0, g_U33980 );
                                }
                                else
                                {
                                    TASK_PAUSE( 0, 500 );
                                }
                            }
                            else
                            {
                                TASK_PAUSE( 0, 250 );
                            }
                            TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                            CLOSE_SEQUENCE_TASK( uVar54 );
                            TASK_PERFORM_SEQUENCE( sub_10774(), uVar54 );
                            CLEAR_SEQUENCE_TASK( uVar54 );
                        }
                        if (sub_45918( (uParam0^), 29 ))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar54 );
                            if (NOT (IS_CAR_DEAD( g_U33980 )))
                            {
                                if (IS_CHAR_IN_CAR( sub_10774(), g_U33980 ))
                                {
                                    TASK_LEAVE_CAR( 0, g_U33980 );
                                }
                            }
                            TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                            CLOSE_SEQUENCE_TASK( uVar54 );
                            TASK_PERFORM_SEQUENCE( (uParam0^), uVar54 );
                            CLEAR_SEQUENCE_TASK( uVar54 );
                        }
                    }
                }
                else
                {
                    DO_SCREEN_FADE_OUT( 125 );
                    while (IS_SCREEN_FADING_OUT())
                    {
                        WAIT( 0 );
                    }
                    GET_CAM_POS( l_U573[4], ref uVar34._fU0, ref uVar34._fU4, ref uVar34._fU8 );
                    LOAD_SCENE( uVar34._fU0, uVar34._fU4, uVar34._fU8 );
                    WAIT( 2500 );
                    SET_CAM_ACTIVE( l_U573[4], 1 );
                    SET_CAM_ACTIVE( l_U573[5], 1 );
                    SET_CAM_PROPAGATE( l_U573[6], 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[4], l_U573[5], 7500, 0 );
                    SAY_AMBIENT_SPEECH( (uParam0^), "POST_DATE_INNUENDO", 1, 1, 3 );
                    DO_SCREEN_FADE_IN( 125 );
                    (uParam2^) = 8;
                }
                break;
                case 8:
                if (((IS_SPECIFIC_CAM_INTERPOLATING( l_U573[6] )) AND (NOT IS_SCRIPTED_CONVERSATION_ONGOING())) AND (NOT ((sub_34140()) AND (IS_SCREEN_FADED_IN()))))
                {
                    ADD_NEEDED_AT_POSN( uVar34._fU0, uVar34._fU4, uVar34._fU8 );
                    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
                    {
                        SAY_AMBIENT_SPEECH( (uParam0^), "POST_DATE_INNUENDO", 1, 1, 3 );
                    }
                    sub_84570();
                }
                else
                {
                    DO_SCREEN_FADE_OUT( 125 );
                    while (IS_SCREEN_FADING_OUT())
                    {
                        WAIT( 0 );
                    }
                    SET_CAM_PROPAGATE( l_U573[6], 0 );
                    if (DOES_CHAR_EXIST( (uParam0^) ))
                    {
                        sub_84672( uParam0 );
                    }
                    CLEAR_AREA_OF_CHARS( uVar43._fU0, uVar43._fU4, uVar43._fU8, 5.00000000 );
                    if (IS_PLAYER_PLAYING( sub_10695() ))
                    {
                        LOAD_SCENE( uVar43._fU0, uVar43._fU4, uVar43._fU8 );
                        SET_CHAR_HEALTH( sub_10774(), 200 );
                        AWARD_ACHIEVEMENT( 23 );
                        g_U33842[iParam1] = 1;
                        INCREMENT_INT_STAT_NO_MESSAGE( 315, 1 );
                        if (iParam1 == 3)
                        {
                            if (g_U32976 == 0)
                            {
                                g_U32976 = 1;
                            }
                        }
                        else if (g_U32976 == 3)
                        {
                            if (NOT (IS_CAR_DEAD( g_U33980 )))
                            {
                                GET_CAR_MODEL( g_U33980, ref uVar90 );
                                if (IS_THIS_MODEL_A_BIKE( uVar90 ))
                                {
                                    iVar88 = 99;
                                }
                                else
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar88 );
                                }
                                switch (iVar88)
                                {
                                    case 0:
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar89 );
                                    switch (uVar89)
                                    {
                                        case 0:
                                        BURST_CAR_TYRE( g_U33980, 0 );
                                        break;
                                        case 1:
                                        BURST_CAR_TYRE( g_U33980, 1 );
                                        break;
                                        case 2:
                                        BURST_CAR_TYRE( g_U33980, 4 );
                                        break;
                                        case 3:
                                        BURST_CAR_TYRE( g_U33980, 5 );
                                        break;
                                    }
                                    PRINTSTRING( "kiki bursts car tyre " );
                                    PRINTINT( uVar89 );
                                    PRINTNL();
                                    break;
                                    case 1:
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref uVar89 );
                                    switch (uVar89)
                                    {
                                        case 0:
                                        BREAK_CAR_DOOR( g_U33980, 0, 0 );
                                        break;
                                        case 1:
                                        BREAK_CAR_DOOR( g_U33980, 1, 0 );
                                        break;
                                        case 2:
                                        BREAK_CAR_DOOR( g_U33980, 2, 0 );
                                        break;
                                        case 3:
                                        BREAK_CAR_DOOR( g_U33980, 3, 0 );
                                        break;
                                        case 4:
                                        BREAK_CAR_DOOR( g_U33980, 4, 0 );
                                        break;
                                        case 5:
                                        BREAK_CAR_DOOR( g_U33980, 5, 0 );
                                        break;
                                    }
                                    TRIGGER_VEH_ALARM( g_U33980 );
                                    PRINTSTRING( "kiki breaks car door " );
                                    PRINTINT( uVar89 );
                                    PRINTNL();
                                    break;
                                    case 99:
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar89 );
                                    switch (uVar89)
                                    {
                                        case 0:
                                        BURST_CAR_TYRE( g_U33980, 6 );
                                        break;
                                        case 1:
                                        BURST_CAR_TYRE( g_U33980, 7 );
                                        break;
                                    }
                                    PRINTSTRING( "kiki bursts bike tyre " );
                                    PRINTINT( uVar89 );
                                    PRINTNL();
                                    break;
                                }
                            }
                        }
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_10774() );
                        TASK_PLAY_ANIM_FACIAL( sub_10774(), "PLYR_MOOD_HAPPY", "FACIALS@M_HI", 1.00000000, 0, 0, -1 );
                        SET_CHAR_COORDINATES( sub_10774(), uVar46._fU0, uVar46._fU4, uVar46._fU8 );
                        SET_CHAR_HEADING( sub_10774(), uVar50 );
                        sub_58884( 27, ref l_U581, (uParam8^), iParam1, 89, 0 );
                    }
                    (uParam2^) = 11;
                }
                break;
                case 11:
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    if (NOT IS_SCREEN_FADING_OUT())
                    {
                        DO_SCREEN_FADE_OUT( 125 );
                        while (IS_SCREEN_FADING_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                }
                for ( I = 0; I < l_U573; I++ )
                {
                    SET_CAM_PROPAGATE( l_U573[I], 0 );
                    SET_CAM_ACTIVE( l_U573[I], 0 );
                    DESTROY_CAM( l_U573[I] );
                }
                if (DOES_CHAR_EXIST( (uParam0^) ))
                {
                    sub_84672( uParam0 );
                }
                if (IS_VEH_DRIVEABLE( g_U33980 ))
                {
                    SET_CAR_HEADING( g_U33980, uParam7 );
                    SET_CAR_COORDINATES( g_U33980, uParam4._fU0 + uVar51._fU0, uParam4._fU4 + uVar51._fU4, uParam4._fU8 + uVar51._fU8 );
                }
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                sub_43888( uParam3 );
                sub_35351( 0 );
                DO_SCREEN_FADE_IN( 125 );
                sub_6127( sub_6013( iParam1 ) );
                REMOVE_ANIMS( "amb@dating" );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref g_U33980 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( g_U32918._fU4 );
                if (DOES_OBJECT_EXIST( g_U32918._fU0 ))
                {
                    if (IS_OBJECT_ATTACHED( g_U32918._fU0 ))
                    {
                        DETACH_OBJECT( g_U32918._fU0, 1 );
                    }
                    DELETE_OBJECT( ref g_U32918._fU0 );
                }
                if (sub_51852( sub_10774() ))
                {
                    TASK_LEAVE_ANY_CAR( sub_10774() );
                }
                g_U32928[iParam1] = 0;
                g_U9914._fU0 = 1;
                l_U588 = 0;
                SET_CAM_BEHIND_PED( sub_10774() );
                (uParam2^) = 0;
                if (NOT l_U587)
                {
                    SET_PLAYER_MOOD_NORMAL( sub_10695() );
                    return 0;
                }
                else
                {
                    g_U21 = g_U32927;
                    SET_PLAYER_MOOD_PISSED_OFF( sub_10695(), 150 );
                    return 2;
                }
                break;
            }
        }
        else if (NOT (DOES_CHAR_EXIST( (uParam0^) )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                if (IS_VEH_DRIVEABLE( g_U33980 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_10774(), ref g_U33980 );
                    if (NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U33980, 0 )))
                    {
                        GET_CHAR_IN_CAR_PASSENGER_SEAT( g_U33980, 0, ref uVar92 );
                        if (NOT (IS_CHAR_DEAD( uVar92 )))
                        {
                            WARP_CHAR_FROM_CAR_TO_COORD( uVar92, 0.00000000, 0.00000000, 0.00000000 );
                            DELETE_CHAR( ref uVar92 );
                        }
                    }
                    sub_86518( iParam1, g_U33980, 0, uParam0, g_U32917 );
                }
            }
            else
            {
                sub_35899( iParam1, uVar40._fU0, uVar40._fU4, ref uVar40._fU8, uVar49, uParam0, g_U32917, 0 );
            }
        }
    }
    return 1;
}

int sub_51852(int iParam0)
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
                if (sub_51916( uVar3 ))
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

int sub_51916(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

void sub_52244()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "taxi" )) > 0)
    {
        g_U2229 = 1;
    }
    return;
}

int sub_52982(unknown uParam0, unknown uParam1, unknown uParam2)
{
    SET_CAM_FOV( l_U573[uParam0], 45.00000000 );
    switch (uParam1)
    {
        case 0:
        switch (uParam0)
        {
            case 0:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SET_CAM_POS( l_U573[0], 931.16020000, 171.15110000, 35.09428000 );
                SET_CAM_ROT( l_U573[0], -22.07384000, 0.00000000, -6.29595200 );
                return 1;
            }
            else
            {
                SET_CAM_POS( l_U573[0], 927.67380000, 179.90800000, 33.35402000 );
                SET_CAM_ROT( l_U573[0], -6.31084600, -0.00000000, 31.06994000 );
                return 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_KISS)" );
                return 0;
            }
            else
            {
                SET_CAM_POS( l_U573[1], 927.04970000, 180.98150000, 33.44063000 );
                SET_CAM_ROT( l_U573[1], -6.88380400, 0.00000000, 14.33957000 );
                return 1;
            }
            break;
            case 2:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_LEAVE)" );
                return 0;
            }
            else
            {
                SET_CAM_POS( l_U573[2], 928.88130000, 178.36410000, 33.28736000 );
                SET_CAM_ROT( l_U573[2], -4.00963700, 0.00000000, 31.74171000 );
                return 1;
            }
            break;
            case 3:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_BONK_a)" );
                return 0;
            }
            else
            {
                SET_CAM_POS( l_U573[3], 929.27440000, 185.55540000, 33.31898000 );
                SET_CAM_ROT( l_U573[3], -4.52715400, -0.00000000, 115.31050000 );
                return 1;
            }
            break;
            case 4:
            (uParam2^) = {924.11860000, 189.98810000, 51.78023000};
            SET_CAM_POS( l_U573[4], 924.11860000, 189.98810000, 51.78023000 );
            SET_CAM_ROT( l_U573[4], -12.37987000, -0.00000000, 89.73149000 );
            return 1;
            break;
            case 5:
            (uParam2^) = {924.41160000, 189.98670000, 51.84454000};
            SET_CAM_POS( l_U573[5], 924.41160000, 189.98670000, 51.84454000 );
            SET_CAM_ROT( l_U573[5], -4.58764600, 0.00000000, 77.58479000 );
            return 1;
            break;
            case 6:
            SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_INTERP)" );
            return 0;
            break;
            case 7:
            SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(NUMBER_OF_DROPOFF_CAMERA)" );
            return 0;
            break;
        }
        SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(GF_MICHELLE)" );
        return 0;
        break;
        case 1:
        switch (uParam0)
        {
            case 0:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SET_CAM_POS( l_U573[0], 1406.01600000, 607.87900000, 33.93921000 );
                SET_CAM_ROT( l_U573[0], -10.62738000, 0.00000000, 43.36193000 );
                return 1;
            }
            else
            {
                SET_CAM_POS( l_U573[0], 1398.80200000, 611.29380000, 33.39267000 );
                SET_CAM_ROT( l_U573[0], -7.52445000, 0.00000000, 35.38505000 );
                return 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_KISS)" );
                return 0;
            }
            else
            {
                SET_CAM_POS( l_U573[1], 1397.93400000, 612.51280000, 33.42921000 );
                SET_CAM_ROT( l_U573[1], -5.19916200, 0.00000000, 35.47337000 );
                return 1;
            }
            break;
            case 2:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_LEAVE)" );
                return 0;
            }
            else
            {
                SET_CAM_POS( l_U573[2], 1399.16300000, 610.78780000, 33.63214000 );
                SET_CAM_ROT( l_U573[2], -7.63701900, 0.00000000, 30.66969000 );
                return 1;
            }
            break;
            case 3:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_BONK_a)" );
                return 0;
            }
            else
            {
                SET_CAM_POS( l_U573[3], 1399.26400000, 615.60300000, 34.02322000 );
                SET_CAM_ROT( l_U573[3], -23.68636000, 0.00000000, 115.04450000 );
                return 1;
            }
            break;
            case 4:
            (uParam2^) = {1399.73400000, 617.88010000, 35.32579000};
            SET_CAM_POS( l_U573[4], 1399.73400000, 617.88010000, 35.32579000 );
            SET_CAM_ROT( l_U573[4], -14.06457000, -0.00000000, 93.01413000 );
            return 1;
            break;
            case 5:
            (uParam2^) = {1401.23200000, 617.95900000, 35.70159000};
            SET_CAM_POS( l_U573[5], 1401.23200000, 617.95900000, 35.70159000 );
            SET_CAM_ROT( l_U573[5], -14.06457000, -0.00000000, 93.01413000 );
            return 1;
            break;
            case 6:
            SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_INTERP)" );
            return 0;
            break;
            case 7:
            SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(NUMBER_OF_DROPOFF_CAMERA)" );
            return 0;
            break;
        }
        SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(GF_KATE)" );
        return 0;
        break;
        case 2:
        switch (uParam0)
        {
            case 0:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SET_CAM_POS( l_U573[0], 90.76306000, 1087.36700000, 15.32959000 );
                SET_CAM_ROT( l_U573[0], -5.68928200, -0.00000000, 117.45800000 );
                return 1;
            }
            else
            {
                SET_CAM_POS( l_U573[0], 85.46867000, 1086.78100000, 16.22956000 );
                SET_CAM_ROT( l_U573[0], -7.25854300, -0.00000000, 160.97650000 );
                return 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_KISS)" );
                return 0;
            }
            else
            {
                SET_CAM_POS( l_U573[1], 85.46867000, 1086.78100000, 16.22956000 );
                SET_CAM_ROT( l_U573[1], -7.25854300, -0.00000000, 160.97650000 );
                return 1;
            }
            break;
            case 2:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_LEAVE)" );
                return 0;
            }
            else
            {
                SET_CAM_POS( l_U573[2], 85.46867000, 1086.78100000, 16.22956000 );
                SET_CAM_ROT( l_U573[2], -7.25854300, -0.00000000, 160.97650000 );
                return 1;
            }
            break;
            case 3:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_BONK_a)" );
                return 0;
            }
            else
            {
                SET_CAM_POS( l_U573[3], 85.46867000, 1086.78100000, 16.22956000 );
                SET_CAM_ROT( l_U573[3], -7.25854300, -0.00000000, 160.97650000 );
                return 1;
            }
            break;
            case 4:
            (uParam2^) = {82.00831000, 1085.56400000, 22.35279000};
            SET_CAM_POS( l_U573[4], 87.94673000, 1081.92500000, 22.36647000 );
            SET_CAM_ROT( l_U573[4], -2.96365000, -0.00000000, -153.90100000 );
            return 1;
            break;
            case 5:
            (uParam2^) = {81.89210000, 1085.80100000, 22.36647000};
            SET_CAM_POS( l_U573[5], 81.89210000, 1085.80100000, 22.36647000 );
            SET_CAM_ROT( l_U573[5], -2.96365000, -0.00000000, -153.90100000 );
            return 1;
            break;
            case 6:
            SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_INTERP)" );
            return 0;
            break;
            case 7:
            SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(NUMBER_OF_DROPOFF_CAMERA)" );
            return 0;
            break;
        }
        SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(GF_ALEX)" );
        return 0;
        break;
        case 3:
        switch (uParam0)
        {
            case 0:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SET_CAM_POS( l_U573[0], -172.71800000, -233.22240000, 14.93778000 );
                SET_CAM_ROT( l_U573[0], -10.70701000, -0.00000000, -56.07563000 );
                return 1;
            }
            else
            {
                SET_CAM_POS( l_U573[0], -168.55430000, -227.98320000, 14.13084000 );
                SET_CAM_ROT( l_U573[0], -6.61154800, 0.00000000, -45.23386000 );
                return 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_KISS)" );
                return 0;
            }
            else
            {
                SET_CAM_POS( l_U573[1], -167.99470000, -228.13550000, 14.29735000 );
                SET_CAM_ROT( l_U573[1], -11.82389000, 0.00000000, 4.68559500 );
                return 1;
            }
            break;
            case 2:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_LEAVE)" );
                return 0;
            }
            else
            {
                SET_CAM_POS( l_U573[2], -171.53520000, -227.34610000, 14.51459000 );
                SET_CAM_ROT( l_U573[2], -11.77533000, 0.00000000, -66.93198000 );
                return 1;
            }
            break;
            case 3:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_BONK_a)" );
                return 0;
            }
            else
            {
                SET_CAM_POS( l_U573[3], -163.83350000, -227.13360000, 14.91020000 );
                SET_CAM_ROT( l_U573[3], -13.89055000, 0.00000000, 61.95432000 );
                return 1;
            }
            break;
            case 4:
            (uParam2^) = {-163.26860000, -235.88100000, 29.87186000};
            SET_CAM_POS( l_U573[4], -163.26860000, -235.88100000, 29.87186000 );
            SET_CAM_ROT( l_U573[4], -12.78780000, -0.00000000, 10.75124000 );
            return 1;
            break;
            case 5:
            (uParam2^) = {-163.11220000, -236.70500000, 29.68150000};
            SET_CAM_POS( l_U573[5], -163.11220000, -236.70500000, 29.68150000 );
            SET_CAM_ROT( l_U573[5], -12.78780000, -0.00000000, 10.75124000 );
            return 1;
            break;
            case 6:
            SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_INTERP)" );
            return 0;
            break;
            case 7:
            SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(NUMBER_OF_DROPOFF_CAMERA)" );
            return 0;
            break;
        }
        SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(GF_KIKI)" );
        return 0;
        break;
        case 4:
        switch (uParam0)
        {
            case 0:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SET_CAM_POS( l_U573[0], 667.38210000, 1721.16600000, 36.92626000 );
                SET_CAM_ROT( l_U573[0], -14.33974000, -0.00000000, -58.97290000 );
                return 1;
            }
            else
            {
                SET_CAM_POS( l_U573[0], 671.55440000, 1729.73800000, 36.92966000 );
                SET_CAM_ROT( l_U573[0], -17.91815000, -0.00000000, -45.12053000 );
                return 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_KISS)" );
                return 0;
            }
            else
            {
                SET_CAM_POS( l_U573[1], 671.42780000, 1730.93800000, 36.43327000 );
                SET_CAM_ROT( l_U573[1], -9.18106700, 0.00000000, -78.31087000 );
                return 1;
            }
            break;
            case 2:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_LEAVE)" );
                return 0;
            }
            else
            {
                SET_CAM_POS( l_U573[2], 671.64070000, 1727.32800000, 37.20042000 );
                SET_CAM_ROT( l_U573[2], -13.17856000, -0.00000000, -22.70114000 );
                return 1;
            }
            break;
            case 3:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_BONK_a)" );
                return 0;
            }
            else
            {
                SET_CAM_POS( l_U573[3], 675.77680000, 1729.34500000, 36.29319000 );
                SET_CAM_ROT( l_U573[3], -5.27549500, -0.00000000, 37.53292000 );
                return 1;
            }
            break;
            case 4:
            (uParam2^) = {669.24790000, 1734.40300000, 63.19626000};
            SET_CAM_POS( l_U573[4], 669.24790000, 1734.40300000, 63.19626000 );
            SET_CAM_ROT( l_U573[4], -2.74812800, 0.00000000, 54.59719000 );
            return 1;
            break;
            case 5:
            (uParam2^) = {670.50180000, 1733.51200000, 63.27009000};
            SET_CAM_POS( l_U573[5], 670.50180000, 1733.51200000, 63.27009000 );
            SET_CAM_ROT( l_U573[5], -2.74812800, 0.00000000, 54.59719000 );
            return 1;
            break;
            case 6:
            SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(CAM_INTERP)" );
            return 0;
            break;
            case 7:
            SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(NUMBER_OF_DROPOFF_CAMERA)" );
            return 0;
            break;
        }
        SCRIPT_ASSERT( "set_dropoff_cutscene_any_means(GF_CARMEN)" );
        return 0;
        break;
    }
    SCRIPT_ASSERT( "set_dropoff_cutscene_any_means()" );
    return 0;
}

void sub_58884(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, boolean bParam5)
{
    char[16] cVar8;
    unknown[4] uVar12;
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
    char[16] cVar29;
    unknown uVar33;
    string sVar34;

    array(ref uVar12, 4);
    switch (iParam3)
    {
        case 0:
        StrCopy( ref cVar8, "GCM_", 16 );
        break;
        case 1:
        StrCopy( ref cVar8, "GCK_", 16 );
        break;
        case 2:
        StrCopy( ref cVar8, "GCA_", 16 );
        break;
        case 3:
        StrCopy( ref cVar8, "GCKK_", 16 );
        break;
        case 4:
        StrCopy( ref cVar8, "GCC_", 16 );
        break;
    }
    StrCopy( ref cVar29, sub_7993( iParam3, uParam0 ), 16 );
    switch (uParam0)
    {
        case 0:
        switch (uParam4)
        {
            case 1:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "PINTRO", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "INTRO", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (TIME_FIRST_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            sub_1824( iParam3, 2, "TIME_FIRST_opinion" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 2:
            if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_10774() )))
            {
                if (IS_CHAR_ON_ANY_BIKE( sub_10774() ))
                {
                    ConcatString(ref cVar8, "AMNL", 16);
                    sub_1824( iParam3, 2, "ACT_ARRIVEM_NOTLATE" );
                }
                else if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
                {
                    ConcatString(ref cVar8, "ACNL", 16);
                    sub_1824( iParam3, 3, "ACT_ARRIVEC_NOTLATE" );
                }
                else if (IS_CHAR_ON_FOOT( sub_10774() ))
                {
                    ConcatString(ref cVar8, "AFNL", 16);
                    sub_1824( iParam3, 1, "ACT_ARRIVEF_NOTLATE" );
                }
                else
                {
                    PRINTSTRING( "PLAY_NEW_DATE_SPEECH.INTRO_date_speech - player on neither bike, car nor foot?" );
                    return 0;
                };;;
            }
            else
            {
                PRINTSTRING( "PLAY_NEW_DATE_SPEECH.INTRO_date_speech - player getting in to a car...\n" );
                return 0;
            }
            break;
            case 3:
            if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
            {
                ConcatString(ref cVar8, "AL", 16);
                sub_1824( iParam3, -1, "ACT_ARRIVE_LATE" );
            }
            else if (IS_CHAR_ON_FOOT( sub_10774() ))
            {
                ConcatString(ref cVar8, "AFL", 16);
                sub_1824( iParam3, -1, "ACT_ARRIVEF_LATE" );
            }
            else
            {
                SCRIPT_ASSERT( "PLAY_NEW_DATE_SPEECH.INTRO_date_speech - player on neither car nor foot?" );
                return 0;
            }
            break;
            default: return 0;
        }
        break;
        case 5:
        switch (iParam3)
        {
            case 0:
            StrCopy( ref cVar8, "GCMC_", 16 );
            break;
            case 1:
            StrCopy( ref cVar8, "GCKC_", 16 );
            break;
            case 2:
            StrCopy( ref cVar8, "GCAC_", 16 );
            break;
            case 3:
            StrCopy( ref cVar8, "GCKKC_", 16 );
            break;
            case 4:
            StrCopy( ref cVar8, "GCCC_", 16 );
            break;
        }
        ConcatString(ref cVar8, "CON", 16);
        ConcatString(ref cVar8, g_U34005[iParam3], 16);
        g_U34005[iParam3]++;
        break;
        case 6:
        switch (iParam3)
        {
            case 0:
            StrCopy( ref cVar8, "GCMD_", 16 );
            break;
            case 1:
            StrCopy( ref cVar8, "GCKD_", 16 );
            break;
            case 2:
            StrCopy( ref cVar8, "GCAD_", 16 );
            break;
            case 3:
            StrCopy( ref cVar8, "GCKKD_", 16 );
            break;
            case 4:
            StrCopy( ref cVar8, "GCCD_", 16 );
            break;
        }
        ConcatString(ref cVar8, "DRU", 16);
        ConcatString(ref cVar8, g_U33999[iParam3], 16);
        g_U33999[iParam3]++;
        break;
        case 1:
        switch (uParam4)
        {
            case 8:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CG", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCG", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (CAR_GOOD_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            sub_1824( iParam3, 2, "CAR_GOOD_date_opinion" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 9:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CB", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCB", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (CAR_BAD_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            sub_1824( iParam3, -2, "CAR_BAD_date_opinion" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 10:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "COK", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCOK", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (CAR_OK_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            sub_1824( iParam3, 1, "CAR_OK_date_opinion" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 11:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CBK", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCBK", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (CAR_BIKE1_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            sub_1824( iParam3, 1, "CAR_BIKE1_date_opinion" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 12:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CN1", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCN1", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (CAR_NONE1_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            sub_1824( iParam3, 1, "CAR_NONE1_date_opinion" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 16:
            ConcatString(ref cVar8, "CSG", 16);
            sub_1824( iParam3, 1, "CAR_OLD_GOOD_date_opinion" );
            break;
            case 17:
            ConcatString(ref cVar8, "CSB", 16);
            sub_1824( iParam3, -1, "CAR_OLD_BAD_date_opinion" );
            break;
            case 13:
            ConcatString(ref cVar8, "CNG", 16);
            sub_1824( iParam3, 1, "CAR_NEW_GOOD_date_opinion" );
            break;
            case 14:
            ConcatString(ref cVar8, "CNB", 16);
            sub_1824( iParam3, -1, "CAR_NEW_BAD_date_opinion" );
            break;
            case 15:
            sub_2510( "  * text_label_to_play: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref cVar8 );
            sub_2510( "_NULL'' (CAR_NEW_SAME_date_opinion)\n" );
            return 1;
            break;
            case 4:
            ConcatString(ref cVar8, "CN", 16);
            sub_1824( iParam3, 0, "CAR_NONE_date_opinion" );
            break;
            case 5:
            sub_2510( "  * text_label_to_play: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref cVar8 );
            sub_2510( "_NULL'' (CAR_BIKE_date_opinion)\n" );
            return 1;
            break;
            case 6:
            sub_2510( "  * text_label_to_play: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref cVar8 );
            sub_2510( "_NULL'' (CAR_TAXI_date_opinion)\n" );
            return 1;
            break;
            case 7:
            sub_2510( "  * text_label_to_play: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref cVar8 );
            sub_2510( "_NULL'' (CAR_OTHER_date_opinion)\n" );
            return 1;
            break;
            default: return 0;
        }
        break;
        case 2:
        switch (uParam4)
        {
            case 18:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CLG", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCLG", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (CLO_GOOD_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            sub_1824( iParam3, 2, "CLO_GOOD_date_opinion" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 19:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CLOK", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCLOK", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (CLO_OK_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            sub_1824( iParam3, 1, "CLO_OK_date_opinion" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 20:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CLUN", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCLUN", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (CLO_UNUSUAL_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            sub_1824( iParam3, 1, "CLO_UNUSUAL_date_opinion" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 21:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CLB", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCLB", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (CLO_BAD_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            sub_1824( iParam3, -2, "CLO_BAD_date_opinion" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 22:
            ConcatString(ref cVar8, "TORG", 16);
            sub_1824( iParam3, 2, "CLO_TORSO_GOOD_date_opinion" );
            break;
            case 23:
            ConcatString(ref cVar8, "TORB", 16);
            sub_1824( iParam3, -1, "CLO_TORSO_BAD_date_opinion" );
            break;
            case 24:
            ConcatString(ref cVar8, "LG", 16);
            sub_1824( iParam3, 1, "CLO_LEGS_GOOD_date_opinion" );
            break;
            case 25:
            ConcatString(ref cVar8, "LB", 16);
            sub_1824( iParam3, -1, "CLO_LEGS_BAD_date_opinion" );
            break;
            case 26:
            ConcatString(ref cVar8, "FTG", 16);
            sub_1824( iParam3, 1, "CLO_FEET_GOOD_date_opinion" );
            break;
            case 27:
            ConcatString(ref cVar8, "FTB", 16);
            sub_1824( iParam3, -1, "CLO_FEET_BAD_date_opinion" );
            break;
            case 28:
            ConcatString(ref cVar8, "GLSG", 16);
            sub_1824( iParam3, 1, "CLO_GLASSES_GOOD_date_opinion" );
            break;
            case 29:
            ConcatString(ref cVar8, "GLSB", 16);
            sub_1824( iParam3, -1, "CLO_GLASSES_BAD_date_opinion" );
            break;
            case 30:
            ConcatString(ref cVar8, "NOGLSG", 16);
            sub_1824( iParam3, 1, "CLO_NOGLASSES_GOOD_date_opinion" );
            break;
            case 31:
            ConcatString(ref cVar8, "NOGLSB", 16);
            sub_1824( iParam3, -1, "CLO_NOGLASSES_BAD_date_opinion" );
            break;
            case 32:
            ConcatString(ref cVar8, "HATG", 16);
            sub_1824( iParam3, 1, "CLO_HAT_GOOD_date_opinion" );
            break;
            case 33:
            ConcatString(ref cVar8, "HATB", 16);
            sub_1824( iParam3, -1, "CLO_HAT_BAD_date_opinion" );
            break;
            case 34:
            ConcatString(ref cVar8, "NOHATG", 16);
            sub_1824( iParam3, 1, "CLO_NOHAT_GOOD_date_opinion" );
            break;
            case 35:
            ConcatString(ref cVar8, "NOHATB", 16);
            sub_1824( iParam3, -1, "CLO_NOHAT_BAD_date_opinion" );
            break;
            case 36:
            ConcatString(ref cVar8, "SMG", 16);
            sub_1824( iParam3, 3, "CLO_SAME_GOOD_date_opinion" );
            break;
            case 37:
            ConcatString(ref cVar8, "SMB", 16);
            sub_1824( iParam3, -3, "CLO_SAME_BAD_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 3:
        SCRIPT_ASSERT( "RADIO_date_speech" );
        return 1;
        break;
        case 4:
        uVar12[0] = {cVar8};
        ConcatString(ref uVar12[0], "HINT", 16);
        uVar12[1] = {cVar8};
        ConcatString(ref uVar12[1], "HINTR", 16);
        sub_2510( "  * text_labels_to_play[0]: ''" );
        sub_2510( ref cVar29 );
        sub_2510( "'', ''" );
        sub_2510( ref uVar12[0] );
        sub_2510( "'' (HINT_date_speech)\n" );
        sub_2510( "  * text_labels_to_play[1]: ''" );
        sub_2510( ref cVar29 );
        sub_2510( "'', ''" );
        sub_2510( ref uVar12[1] );
        sub_2510( "''\n" );
        return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
        break;
        case 24:
        switch (uParam4)
        {
            case 40:
            ConcatString(ref cVar8, "BTKHM", 16);
            sub_1824( iParam3, -2, "SILENCE_BORED_opinion" );
            break;
            case 41:
            ConcatString(ref cVar8, "BLV", 16);
            sub_1824( iParam3, -5, "SILENCE_LEAVE_opinion" );
            break;
            default: return 0;
        }
        break;
        case 7:
        switch (uParam4)
        {
            case 42:
            ConcatString(ref cVar8, "ARRDN", 16);
            break;
            case 43:
            ConcatString(ref cVar8, "ARRDB", 16);
            break;
            case 44:
            ConcatString(ref cVar8, "ARRDL", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 8:
        switch (uParam4)
        {
            case 45:
            ConcatString(ref cVar8, "ARRPF", 16);
            break;
            case 47:
            ConcatString(ref cVar8, "ARRPG", 16);
            break;
            case 48:
            ConcatString(ref cVar8, "ARRCG", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 9:
        switch (uParam4)
        {
            case 49:
            ConcatString(ref cVar8, "ARRFF", 16);
            break;
            case 50:
            ConcatString(ref cVar8, "ARRHI", 16);
            break;
            case 51:
            ConcatString(ref cVar8, "ARRST", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 10:
        switch (uParam4)
        {
            case 42:
            ConcatString(ref cVar8, "ARRPN", 16);
            break;
            case 43:
            ConcatString(ref cVar8, "ARRPB", 16);
            break;
            case 44:
            ConcatString(ref cVar8, "ARRPL", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 12:
        switch (uParam4)
        {
            case 42:
            ConcatString(ref cVar8, "ARRBN", 16);
            break;
            case 43:
            ConcatString(ref cVar8, "ARRBB", 16);
            break;
            case 44:
            ConcatString(ref cVar8, "ARRBL", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 13:
        switch (uParam4)
        {
            case 42:
            ConcatString(ref cVar8, "ARRSTRN", 16);
            g_U34041 = GET_INT_STAT( 96 );
            break;
            case 43:
            ConcatString(ref cVar8, "ARRSTRB", 16);
            g_U34041 = GET_INT_STAT( 96 );
            break;
            case 44:
            ConcatString(ref cVar8, "ARRSTRL", 16);
            g_U34041 = GET_INT_STAT( 96 );
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 11:
        switch (uParam4)
        {
            case 52:
            if ((iParam3 == 0) || (iParam3 == 1))
            {
                ConcatString(ref cVar8, "ARRSHC", 16);
            }
            else
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar33 );
                g_U32926 = uVar33;
                switch (g_U32926)
                {
                    case 0:
                    ConcatString(ref cVar8, "ARRSR", 16);
                    break;
                    case 1:
                    ConcatString(ref cVar8, "ARRSKW", 16);
                    break;
                    default: return 0;
                }
            }
            break;
            case 53:
            ConcatString(ref cVar8, "ARRSC", 16);
            break;
            case 54:
            ConcatString(ref cVar8, "ARRSHL", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 14:
        switch (uParam4)
        {
            case 42:
            ConcatString(ref cVar8, "ARRWN", 16);
            break;
            case 43:
            ConcatString(ref cVar8, "ARRWB", 16);
            break;
            case 44:
            ConcatString(ref cVar8, "ARRWL", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 16:
        switch (uParam4)
        {
            case 55:
            ConcatString(ref cVar8, "DLW", 16);
            sub_1824( iParam3, 2, "LEAVE_WON_darts_date_opinion" );
            break;
            case 56:
            ConcatString(ref cVar8, "DLD", 16);
            sub_1824( iParam3, 0, "LEAVE_DREW_darts_date_opinion" );
            break;
            case 57:
            ConcatString(ref cVar8, "DLL", 16);
            sub_1824( iParam3, 1, "LEAVE_LOST_darts_date_opinion" );
            break;
            case 58:
            ConcatString(ref cVar8, "DLA", 16);
            sub_1824( iParam3, -1, "LEAVE_ABANDON_darts_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 15:
        switch (uParam4)
        {
            case 55:
            ConcatString(ref cVar8, "BLW", 16);
            sub_1824( iParam3, 2, "LEAVE_WON_bowl_date_opinion" );
            break;
            case 56:
            ConcatString(ref cVar8, "BLD", 16);
            sub_1824( iParam3, 0, "LEAVE_DREW_bowl_date_opinion" );
            break;
            case 57:
            ConcatString(ref cVar8, "BLL", 16);
            sub_1824( iParam3, 1, "LEAVE_LOST_bowl_date_opinion" );
            break;
            case 58:
            ConcatString(ref cVar8, "BLA", 16);
            sub_1824( iParam3, -1, "LEAVE_ABANDON_bowl_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 17:
        switch (uParam4)
        {
            case 62:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "LVVLF", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "LVPLAY", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (LEAVE_VLADS_FIRST_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            if (sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 ))
            {
                g_U33850 = 1;
                return 1;
            }
            break;
            case 63:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "LVFAF", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "LVFP", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (LEAVE_FAUSTINS_FIRST_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            if (sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 ))
            {
                g_U33849 = 1;
                return 1;
            }
            break;
            case 64:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "LVIRF", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "LVIRD", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (LEAVE_IRISH_FIRST_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            if (sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 ))
            {
                g_U33851 = 1;
                return 1;
            }
            break;
            case 65:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "LVVLA", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "LVDENY", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (LEAVE_VLADS_AGAIN_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 66:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "LVFA", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "LFDENY", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (LEAVE_FAUSTINS_AGAIN_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 67:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "GCM_LVIRA", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "GCM_LIDENY", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (LEAVE_IRISH_AGAIN_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 68:
            ConcatString(ref cVar8, "LPG", 16);
            break;
            case 69:
            ConcatString(ref cVar8, "LPF", 16);
            break;
            case 70:
            ConcatString(ref cVar8, "LCG", 16);
            break;
            default: return 0;
        }
        if (iParam3 == 0)
        {
            sub_2510( "  * text_label_to_play: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref cVar8 );
            sub_2510( "_NULL'' ()\n" );
            return 1;
        }
        break;
        case 18:
        switch (uParam4)
        {
            case 59:
            ConcatString(ref cVar8, "LVFF", 16);
            break;
            case 60:
            if (iParam3 == 0)
            {
                ConcatString(ref cVar8, "LVST", 16);
            }
            else
            {
                ConcatString(ref cVar8, "LVHI", 16);
            }
            break;
            case 61:
            ConcatString(ref cVar8, "LVST", 16);
            break;
            default: return 0;
        }
        break;
        case 19:
        switch (uParam4)
        {
            case 55:
            ConcatString(ref cVar8, "PLW", 16);
            sub_1824( iParam3, 2, "LEAVE_WON_pool_date_opinion" );
            break;
            case 56:
            ConcatString(ref cVar8, "PLD", 16);
            sub_1824( iParam3, 0, "LEAVE_DREW_pool_date_opinion" );
            break;
            case 57:
            ConcatString(ref cVar8, "PLL", 16);
            sub_1824( iParam3, 1, "LEAVE_LOST_pool_date_opinion" );
            break;
            case 58:
            ConcatString(ref cVar8, "PLA", 16);
            sub_1824( iParam3, -1, "LEAVE_ABANDON_pool_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 20:
        switch (uParam4)
        {
            case 72:
            ConcatString(ref cVar8, "LSHC", 16);
            sub_1824( iParam3, 2, "LEAVE_COMEDY_date_opinion" );
            break;
            case 73:
            sub_1824( iParam3, 2, "LEAVE_CABARET_date_opinion" );
            if (iParam3 != 0)
            {
                ConcatString(ref cVar8, "LSHCA", 16);
            }
            else
            {
                uVar12[0] = {cVar8};
                ConcatString(ref uVar12[0], "LSHCA", 16);
                if (NOT g_U33849)
                {
                    uVar12[1] = {cVar8};
                    ConcatString(ref uVar12[1], "LVFAF", 16);
                    uVar12[2] = {cVar8};
                    ConcatString(ref uVar12[2], "LVFP", 16);
                }
                else
                {
                    uVar12[1] = {cVar8};
                    ConcatString(ref uVar12[1], "LVFA", 16);
                    uVar12[2] = {cVar8};
                    ConcatString(ref uVar12[2], "LFDENY", 16);
                }
                sub_2510( "  * text_labels_to_play[0]: ''" );
                sub_2510( ref cVar29 );
                sub_2510( "'', ''" );
                sub_2510( ref uVar12[0] );
                sub_2510( "'' (LEAVE_CABARET_date_opinion - GF_MICHELLE)\n" );
                sub_2510( "  * text_labels_to_play[1]: ''" );
                sub_2510( ref cVar29 );
                sub_2510( "'', ''" );
                sub_2510( ref uVar12[1] );
                sub_2510( "''\n" );
                if (sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 ))
                {
                    g_U33849 = 1;
                    return 1;
                }
            }
            break;
            case 75:
            ConcatString(ref cVar8, "LSHE", 16);
            sub_1824( iParam3, -5, "LEAVE_EARLY_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 21:
        switch (uParam4)
        {
            case 74:
            ConcatString(ref cVar8, "LVSTOK", 16);
            sub_1824( iParam3, 3, "LEAVE_STRIP_date_opinion" );
            break;
            case 75:
            ConcatString(ref cVar8, "LVSTE", 16);
            sub_1824( iParam3, -2, "LEAVE_EARLY_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 22:
        switch (iParam3)
        {
            case 0:
            StrCopy( ref cVar8, "GCMC_", 16 );
            break;
            case 1:
            StrCopy( ref cVar8, "GCKC_", 16 );
            break;
            case 2:
            StrCopy( ref cVar8, "GCKA_", 16 );
            break;
            case 3:
            StrCopy( ref cVar8, "GCKKC_", 16 );
            break;
            case 4:
            StrCopy( ref cVar8, "GCCC_", 16 );
            break;
        }
        ConcatString(ref cVar8, "CON", 16);
        ConcatString(ref cVar8, g_U34005[iParam3], 16);
        g_U34005[iParam3]++;
        break;
        case 23:
        switch (uParam4)
        {
            case 76:
            ConcatString(ref cVar8, "HORN", 16);
            break;
            case 77:
            ConcatString(ref cVar8, "SPOT", 16);
            break;
            case 78:
            ConcatString(ref cVar8, "FUN", 16);
            break;
            case 79:
            ConcatString(ref cVar8, "NMOOD", 16);
            break;
            case 80:
            ConcatString(ref cVar8, "INNU", 16);
            break;
            default: return 0;
        }
        break;
        case 25:
        switch (uParam4)
        {
            case 81:
            ConcatString(ref cVar8, "EG", 16);
            break;
            case 82:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "EB", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "EBR", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (RETURN_BAD_date_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 83:
            ConcatString(ref cVar8, "EGY", 16);
            break;
            case 84:
            ConcatString(ref cVar8, "EGN", 16);
            break;
            case 89:
            ConcatString(ref cVar8, "NORSP", 16);
            break;
            default: return 0;
        }
        break;
        case 26:
        switch (uParam4)
        {
            case 85:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "EY", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "EREJ", 16);
            uVar12[2] = {cVar8};
            ConcatString(ref uVar12[2], "EREJR", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (END_A_PYES_GREJ_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            sub_2510( "  * text_labels_to_play[2]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[2] );
            sub_2510( "''\n" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 86:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "EY", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "KISS", 16);
            uVar12[2] = {cVar8};
            ConcatString(ref uVar12[2], "KISSR", 16);
            uVar12[3] = {cVar8};
            ConcatString(ref uVar12[3], "KISSA", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (END_A_PYES_GKISS_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            sub_2510( "  * text_labels_to_play[2]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[2] );
            sub_2510( "''\n" );
            sub_2510( "  * text_labels_to_play[3]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[3] );
            sub_2510( "''\n" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 87:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "EY", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "BONK", 16);
            uVar12[2] = {cVar8};
            ConcatString(ref uVar12[2], "RSP", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (END_A_PYES_GBONK_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            sub_2510( "  * text_labels_to_play[2]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[2] );
            sub_2510( "''\n" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 88:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "ENO", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "NORSP", 16);
            sub_2510( "  * text_labels_to_play[0]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[0] );
            sub_2510( "'' (END_A_PNO_opinion)\n" );
            sub_2510( "  * text_labels_to_play[1]: ''" );
            sub_2510( ref cVar29 );
            sub_2510( "'', ''" );
            sub_2510( ref uVar12[1] );
            sub_2510( "''\n" );
            return sub_59578( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 89:
            ConcatString(ref cVar8, "NORSP", 16);
            break;
            default: return 0;
        }
        break;
        case 27:
        switch (iParam3)
        {
            case 0:
            sVar34 = "POST_MICHELLE";
            break;
            case 1:
            sVar34 = "POST_KATE";
            return 0;
            break;
            case 2:
            sVar34 = "POST_ALEX";
            break;
            case 3:
            sVar34 = "POST_KIKI";
            break;
            case 4:
            sVar34 = "POST_CARMEN";
            break;
            default: return 0;
        }
        SAY_AMBIENT_SPEECH( sub_10774(), sVar34, 1, 1, 3 );
        return 1;
        break;
    }
    if (bParam5)
    {
        sub_2510( "  * unpause text_label_to_play: ''" );
        sub_2510( ref cVar29 );
        sub_2510( "'', ''" );
        sub_2510( ref cVar8 );
        sub_2510( "''\n" );
        return sub_73497( ref cVar8, ref cVar29, uParam1, 6, 1 );
        break;
    }
    sub_2510( "  * text_label_to_play: ''" );
    sub_2510( ref cVar29 );
    sub_2510( "'', ''" );
    sub_2510( ref cVar8 );
    sub_2510( "''\n" );
    return sub_73667( ref cVar8, ref cVar29, uParam1, 6, 1 );
}

void sub_59578(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_59605( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_59605(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_59627( iParam1 )))
    {
        return 0;
    }
    l_U79._fU384 = 0;
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
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_60307( ref g_U8395, ref l_U79 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_59627(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_2510( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_2510( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_2510( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_60307(int iParam0, int iParam1)
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

int sub_73497(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_59605( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_73667(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_59605( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_75202()
{
    if ((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_75257()
{
    if ((IS_CONTROL_PRESSED( 0, 78 )) || (IS_CONTROL_PRESSED( 2, 78 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_75551(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    GET_GAME_TIMER( ref iVar5 );
    PRINTSTRING( "  * is_girl_waiting_for_response " );
    sub_2565( ((uParam1^) + 45000) - iVar5 );
    PRINTNL();
    if (NOT l_U588)
    {
        PRINTSTRING( "  ** bGirl_waits_patient_printed " );
        sub_2565( ((((uParam1^) + 45000) - iVar5) - 7500) + 2500 );
        PRINTNL();
        if ((iVar5 - (uParam1^)) > 35000)
        {
            PRINT_STRING_IN_STRING_NOW( "RESP_SOON", sub_18706( uParam0, 1 ), 7500, 1 );
            l_U588 = 1;
        }
    }
    if ((iVar5 - (uParam1^)) > 45000)
    {
        (uParam2^) = 9;
        return 0;
    }
    return 1;
}

void sub_76345(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

void sub_76407(int iParam0, unknown uParam1)
{
    if (iParam0 <= 2)
    {
        g_U1426[iParam0] = uParam1;
    }
    return;
}

int sub_81125(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_2510( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_2510( "\n speech is not playing" );
    }
    return 0;
}

void sub_81793(unknown uParam0)
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

void sub_84570()
{
    SHAKE_PAD( 0, 5, 128 );
    return;
}

void sub_84672(unknown uParam0)
{
    DELETE_CHAR( uParam0 );
    REMOVE_DECISION_MAKER( g_U33998 );
    REMOVE_DECISION_MAKER( g_U33997 );
    return;
}

int sub_86518(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (DOES_CHAR_EXIST( (uParam3^) )))
    {
        if (NOT (sub_33493( sub_6013( uParam0 ) )))
        {
            PRINTSTRING( "CREATE_GIRLFRIEND_AS_PASSENGER.NOT Has_Contact_Model_Loaded\n" );
            sub_33537( sub_6013( uParam0 ) );
            return 0;
        }
        else
        {
            sub_86658( uParam1, uParam0, uParam4 );
            sub_87036( sub_6013( uParam0 ), uParam3, uParam1, uParam2 );
            if (NOT (DOES_DECISION_MAKER_EXIST( g_U33998 )))
            {
                LOAD_COMBAT_DECISION_MAKER( 1, ref g_U33998 );
            }
            if (NOT (DOES_DECISION_MAKER_EXIST( g_U33997 )))
            {
                COPY_GROUP_CHAR_DECISION_MAKER( 65537, ref g_U33997 );
            }
            sub_37795( uParam0, ref uParam4, (uParam3^) );
            g_U32917 = uParam4;
            SET_CHAR_NEVER_TARGETTED( (uParam3^), 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam3^), 1 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( (uParam3^), 0 );
            sub_39714( 1, (uParam3^), sub_14473( uParam0 ), 0 );
            SET_AMBIENT_VOICE_NAME( (uParam3^), sub_14473( uParam0 ) );
            SET_CHAR_NAME_DEBUG( (uParam3^), sub_18706( uParam0, 1 ) );
            if (IS_CHAR_ON_ANY_BIKE( (uParam3^) ))
            {
                GIVE_PED_HELMET_WITH_OPTS( (uParam3^), 0 );
            }
            SET_GROUP_CHAR_DECISION_MAKER( (uParam3^), g_U33997 );
            SET_COMBAT_DECISION_MAKER( (uParam3^), g_U33998 );
            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( (uParam3^), 0 );
            SET_CHAR_HEALTH( (uParam3^), 300 );
            SET_CHAR_MAX_HEALTH( (uParam3^), 300 );
            sub_6127( sub_6013( uParam0 ) );
            return 1;
        }
        break;
    }
    PRINTSTRING( "CREATE_GIRLFRIEND_AS_PASSENGER.DOES_CHAR_EXIST(girl_ped)\n" );
    return 0;
}

void sub_86658(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int I;
    unknown uVar7;
    int iVar8;

    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar5 );
    for ( I = 0; I < iVar5; I++ )
    {
        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
        {
            PRINTSTRING( "  * IS_CAR_PASSENGER_SEAT_FREE(VehicleIndex, " );
            PRINTINT( I );
            PRINTSTRING( "): " );
            sub_86795( IS_CAR_PASSENGER_SEAT_FREE( uParam0, I ) );
            PRINTNL();
            GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar7 );
            if (NOT (IS_CHAR_DEAD( uVar7 )))
            {
                PRINTSTRING( "  ** ped_in_passenger_seat " );
                PRINTINT( I );
                PRINTNL();
                GET_CHAR_MODEL( uVar7, ref iVar8 );
                if (iVar8 == (sub_6138( sub_6013( uParam1 ) )))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( uVar7, 0.00000000, 0.00000000, 0.00000000 );
                    DELETE_CHAR( ref uVar7 );
                }
            }
        }
    }
    return;
}

void sub_86795(boolean bParam0)
{
    if (bParam0)
    {
        PRINTSTRING( "TRUE" );
    }
    else
    {
        PRINTSTRING( "FALSE" );
    }
    return;
}

void sub_87036(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    CREATE_CHAR_AS_PASSENGER( uParam2, 25, sub_6138( uParam0 ), uParam3, uParam1 );
    sub_36117( uParam0, (uParam1^) );
    return;
}

void sub_87599(unknown uParam0, float fParam1)
{
    if (ProtectedGet(g_U34042[uParam0]) > fParam1)
    {
        SET_PHONE_HUD_ITEM( 8, sub_18706( uParam0, 1 ), -1 );
    }
    else if (ProtectedGet(g_U34042[uParam0]) < fParam1)
    {
        SET_PHONE_HUD_ITEM( 9, sub_18706( uParam0, 1 ), -1 );
    }
    return;
}

int sub_87848(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, unknown uParam5)
{
    int iVar8;
    unknown uVar9;
    int iVar10;

    GET_GAME_TIMER( ref iVar8 );
    if (iVar8 <= (iParam3 + (sub_1324( 20 ))))
    {
        sub_2510( "  * WAIT_FOR_" );
        sub_2510( sub_18706( uParam0, 1 ) );
        sub_2510( "_FIRST_HOSPITAL_CONTACT - " );
        sub_2544( (iParam3 + (sub_1324( 20 ))) - iVar8 );
        sub_2765();
    }
    else
    {
        (iParam4^) = {sub_2836( uParam5, 3, 1 )};
        uVar9 = sub_3313( iParam4->_fU0 );
        iVar10 = iParam4->_fU4 * 2;
        sub_3422( uParam1, 16, iVar10, 16383, uParam2 );
        sub_4101( uParam2, uVar9, 2 );
        sub_4145( uParam2, 1 );
        sub_4176( uParam2, 0 );
        return sub_4205( uParam2, 0 );
    }
    return 0;
}

int sub_88190(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15)
{
    char[8] cVar18;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    char[12] cVar23;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    char[12] cVar32;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    vector vVar42;
    vector vVar45;
    vector vVar48;
    vector vVar51;
    vector vVar54;
    vector vVar57;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    int iVar81;
    unknown uVar82;
    char[16] cVar83;
    int iVar87;
    unknown uVar88;
    boolean bVar89;
    int iVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    int I;

    array(ref cVar18, 1);
    array(ref cVar23, 2);
    array(ref cVar32, 2);
    if (IS_PLAYER_PLAYING( sub_10695() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_10774(), ref uVar41 );
        }
    }
    vVar42 = {0.40000000, 1.90000000, 0.60000000};
    vVar45 = {0.10000000, 0.90000000, -0.15000000};
    vVar48 = {0.30000000, 0.75000000, 1.50000000};
    vVar51 = {0.15000000, 0.25000000, -0.80000000};
    vVar54 = {1.45000000, 4.75000000, -3.02000000};
    vVar57 = {-0.11800000, 0.18400000, -0.36000000};
    sub_34403( iParam1, ref uVar66, ref uVar75, ref uVar69, ref uVar76, ref uVar72, ref uVar77 );
    switch ((uParam15^))
    {
        case 0:
        GET_GAME_TIMER( ref iVar81 );
        if ((iVar81 <= ((uParam12^) + (sub_1324( 20.00000000 )))) AND (NOT ((IS_KEYBOARD_KEY_PRESSED( 11 )) AND ((IS_KEYBOARD_KEY_PRESSED( 29 )) || (IS_KEYBOARD_KEY_PRESSED( 157 ))))))
        {
            sub_2510( "  * WAIT_FOR_" );
            sub_2510( sub_18706( iParam1, 1 ) );
            sub_2510( "_HOSPITAL_CONTACT - " );
            sub_2544( ((uParam12^) + (sub_1324( 20.00000000 ))) - iVar81 );
            sub_2765();
        }
        else if (sub_20468( uParam12 ))
        {
            if (((LOCATE_CHAR_ANY_MEANS_2D( sub_10774(), g_U10090[uParam13]._fU4._fU0, g_U10090[uParam13]._fU4._fU4, 50.00000000 * 1.50000000, 50.00000000 * 1.50000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_2D( sub_10774(), g_U33981[iParam1]._fU0, g_U33981[iParam1]._fU4, 50.00000000 * 1.50000000, 50.00000000 * 1.50000000, 0 ))) || (DOES_CHAR_EXIST( (uParam0^) )))
            {
                if (LOCATE_CHAR_ANY_MEANS_2D( sub_10774(), g_U10090[uParam13]._fU4._fU0, g_U10090[uParam13]._fU4._fU4, 50.00000000 * 1.50000000, 50.00000000 * 1.50000000, 0 ))
                {
                    sub_2510( "  * player too close to hospital: " );
                    sub_42863( g_U10090[uParam13]._fU4 );
                    sub_2765();
                }
                else if (LOCATE_CHAR_ANY_MEANS_2D( sub_10774(), g_U33981[iParam1]._fU0, g_U33981[iParam1]._fU4, 50.00000000 * 1.50000000, 50.00000000 * 1.50000000, 0 ))
                {
                    sub_2510( "  * player too close to dead girl: " );
                    sub_42863( g_U33981[iParam1] );
                    sub_2765();
                }
                else if (DOES_CHAR_EXIST( (uParam0^) ))
                {
                    sub_2510( "  * dead girl_ped EXISTS\n" );
                }
                else
                {
                    sub_2510( "  * some other dead girl call delay???\n" );
                };;;
                (uParam12^) += 15000;
            }
            else if (sub_11106())
            {
                (uParam14^)++;
                switch (iParam1)
                {
                    case 0:
                    StrCopy( ref cVar18[0], "GCM_", 16 );
                    StrCopy( ref cVar23[0], "GCM_", 16 );
                    StrCopy( ref cVar23[1], "GCM_", 16 );
                    StrCopy( ref cVar32[0], "GCM_", 16 );
                    StrCopy( ref cVar32[1], "GCM_", 16 );
                    break;
                    case 1:
                    StrCopy( ref cVar18[0], "GCK_", 16 );
                    StrCopy( ref cVar23[0], "GCK_", 16 );
                    StrCopy( ref cVar23[1], "GCK_", 16 );
                    StrCopy( ref cVar32[0], "GCK_", 16 );
                    StrCopy( ref cVar32[1], "GCK_", 16 );
                    break;
                    case 2:
                    StrCopy( ref cVar18[0], "GCA_", 16 );
                    StrCopy( ref cVar23[0], "GCA_", 16 );
                    StrCopy( ref cVar23[1], "GCA_", 16 );
                    StrCopy( ref cVar32[0], "GCA_", 16 );
                    StrCopy( ref cVar32[1], "GCA_", 16 );
                    break;
                    case 3:
                    StrCopy( ref cVar18[0], "GCKK_", 16 );
                    StrCopy( ref cVar23[0], "GCKK_", 16 );
                    StrCopy( ref cVar23[1], "GCKK_", 16 );
                    StrCopy( ref cVar32[0], "GCKK_", 16 );
                    StrCopy( ref cVar32[1], "GCKK_", 16 );
                    break;
                    case 4:
                    StrCopy( ref cVar18[0], "GCC_", 16 );
                    StrCopy( ref cVar23[0], "GCC_", 16 );
                    StrCopy( ref cVar23[1], "GCC_", 16 );
                    StrCopy( ref cVar32[0], "GCC_", 16 );
                    StrCopy( ref cVar32[1], "GCC_", 16 );
                    break;
                }
                ConcatString(ref cVar18[0], "GCHA", 16);
                ConcatString(ref cVar23[0], "GCHY", 16);
                ConcatString(ref cVar23[1], "GCHAC", 16);
                ConcatString(ref cVar32[0], "GCHN", 16);
                if (ProtectedGet(g_U34042[iParam1]) >= 80)
                {
                    ConcatString(ref cVar32[1], "GCHRHI", 16);
                }
                else if (ProtectedGet(g_U34042[iParam1]) >= 50)
                {
                    ConcatString(ref cVar32[1], "GCHRM", 16);
                }
                else
                {
                    ConcatString(ref cVar32[1], "GCHRLO", 16);
                }
                StrCopy( ref cVar83, "DATE_HOSP_", 16 );
                ConcatString(ref cVar83, iParam1, 16);
                if (sub_26578( sub_6013( iParam1 ), ref cVar18, ref cVar23, ref cVar32, ref cVar83, sub_7993( iParam1, 28 ), 7000 ))
                {
                    (uParam15^) = 1;
                }
            }
        }
        break;
        case 1:
        switch (sub_15735())
        {
            case 0:
            case 3: break;
            case 1:
            case 2:
            case 5:
            case 8:
            sub_2510( "  * current_" );
            sub_2510( sub_18706( iParam1, 1 ) );
            sub_2510( "current_girlfriend_in_hospital_stage = LEAVE_GIRL_AT_HOSPITAL\n" );
            (uParam15^) = 6;
            break;
            case 4:
            case 7:
            if (NOT sub_20566())
            {
                if (NOT (DOES_BLIP_EXIST( g_U10090[uParam13]._fU20 )))
                {
                    ADD_BLIP_FOR_COORD( g_U10090[uParam13]._fU4._fU0, g_U10090[uParam13]._fU4._fU4, g_U10090[uParam13]._fU4._fU8, ref g_U10090[uParam13]._fU20 );
                    CHANGE_BLIP_SPRITE( g_U10090[uParam13]._fU20, 54 );
                }
                if (DOES_CHAR_EXIST( (uParam0^) ))
                {
                    sub_84672( uParam0 );
                }
                sub_2510( "  * current_" );
                sub_2510( sub_18706( iParam1, 1 ) );
                sub_2510( "current_girlfriend_in_hospital_stage = PICKUP_GIRL_FROM_HOSPITAL\n" );
                (uParam15^) = 2;
            }
            break;
            default:
            PRINTSTRING( sub_18706( iParam1, 1 ) );
            PRINTSTRING( "GIRL_IS_CALLING_FROM_HOSPITAL." );
            PRINTINT( sub_15735() );
            PRINTNL();
        }
        break;
        case 2:
        if (NOT (DOES_CHAR_EXIST( (uParam0^) )))
        {
            if (LOCATE_CHAR_ANY_MEANS_2D( sub_10774(), g_U10090[uParam13]._fU4._fU0, g_U10090[uParam13]._fU4._fU4, 50.00000000, 50.00000000, 0 ))
            {
                if (sub_35899( iParam1, g_U10090[uParam13]._fU4._fU0, g_U10090[uParam13]._fU4._fU4, ref g_U10090[uParam13]._fU4._fU8, g_U10090[uParam13]._fU16, uParam0, 12, 0 ))
                {
                    if (DOES_BLIP_EXIST( g_U10090[uParam13]._fU20 ))
                    {
                        REMOVE_BLIP( g_U10090[uParam13]._fU20 );
                    }
                    if (NOT (DOES_BLIP_EXIST( uParam2 )))
                    {
                        ADD_BLIP_FOR_CHAR( (uParam0^), ref uParam2 );
                        SET_ROUTE( uParam2, 1 );
                        CHANGE_BLIP_SPRITE( uParam2, 54 );
                        CHANGE_BLIP_COLOUR( uParam2, 3 );
                    }
                }
            }
        }
        else if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_10774(), (uParam0^), 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                REMOVE_BLIP( uParam2 );
                SET_GROUP_MEMBER( sub_43260(), (uParam0^) );
                sub_2510( "  * current_" );
                sub_2510( sub_18706( iParam1, 1 ) );
                sub_2510( "current_girlfriend_in_hospital_stage = TAKE_GIRL_FROM_HOSPITAL_CS_0\n" );
                (uParam15^) = 3;
            }
        }
        else
        {
            sub_2510( "  * current_" );
            sub_2510( sub_18706( iParam1, 1 ) );
            sub_2510( "current_girlfriend_in_hospital_stage = KILLED_GIRL_AT_HOSPITAL\n" );
            (uParam15^) = 7;
        }
        break;
        case 3:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT IS_SCREEN_FADED_OUT())
            {
                if (IS_PLAYER_CONTROL_ON( sub_10695() ))
                {
                    SET_PLAYER_CONTROL( sub_10695(), 0 );
                }
                sub_35196( 0 );
                if (NOT IS_SCREEN_FADING_OUT())
                {
                    DO_SCREEN_FADE_OUT( 125 );
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    sub_35351( 1 );
                }
            }
            else
            {
                sub_35650( uParam3 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                LOAD_SCENE( uParam4._fU0, uParam4._fU4, uParam4._fU8 );
                CLEAR_AREA( uParam4._fU0, uParam4._fU4, uParam4._fU8, 25.00000000, 1 );
                if ((IS_PLAYER_PLAYING( sub_10695() )) AND (NOT (IS_CHAR_DEAD( (uParam0^) ))))
                {
                    CLEAR_CHAR_TASKS( sub_10774() );
                    CLEAR_CHAR_TASKS( (uParam0^) );
                    if (IS_GROUP_MEMBER( (uParam0^), sub_43260() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( (uParam0^) );
                    }
                    if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
                    {
                        if (NOT (IS_CAR_DEAD( uVar41 )))
                        {
                            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar41, ref iVar87 );
                            if (iVar87 <= 0)
                            {
                                WARP_CHAR_FROM_CAR_TO_COORD( sub_10774(), uVar66._fU0, uVar66._fU4, uVar66._fU8 );
                                return 0;
                            }
                            SET_CAR_HEADING( uVar41, uParam7 );
                            SET_CAR_COORDINATES( uVar41, uParam4._fU0 + uVar77._fU0, uParam4._fU4 + uVar77._fU4, uParam4._fU8 + uVar77._fU8 );
                            if (NOT (IS_CHAR_IN_CAR( (uParam0^), uVar41 )))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( (uParam0^), uVar41, 0 );
                            }
                            GET_CAR_MODEL( uVar41, ref uVar88 );
                            bVar89 = false;
                            iVar90 = 0;
                            if ((NOT (IS_THIS_MODEL_A_BOAT( uVar88 ))) AND (NOT (IS_THIS_MODEL_A_HELI( uVar88 ))))
                            {
                                while ((NOT bVar89) AND (iVar90 < 100))
                                {
                                    PRINTSTRING( "  * GIRL_FINISHED_BEING_KILLED.iSet_car_on_ground_properly_count: " );
                                    PRINTINT( iVar90 );
                                    PRINTNL();
                                    if (NOT (IS_CAR_DEAD( uVar41 )))
                                    {
                                        if (SET_CAR_ON_GROUND_PROPERLY( uVar41 ))
                                        {
                                            bVar89 = true;
                                        }
                                    }
                                    else
                                    {
                                        bVar89 = true;
                                    }
                                    iVar90++;
                                    WAIT( 0 );
                                }
                            }
                        }
                        WAIT( 0 );
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( (uParam0^) );
                        if (IS_CHAR_IN_ANY_CAR( (uParam0^) ))
                        {
                            WARP_CHAR_FROM_CAR_TO_COORD( (uParam0^), uVar66._fU0, uVar66._fU4, uVar66._fU8 );
                        }
                        else
                        {
                            SET_CHAR_COORDINATES( (uParam0^), uVar66._fU0, uVar66._fU4, uVar66._fU8 );
                        }
                        SET_CHAR_HEADING( (uParam0^), uVar75 );
                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( (uParam0^), 0.00000000, 1.00000000, 1.00000000, ref uVar91._fU0, ref uVar91._fU4, ref uVar91._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( uVar91._fU0, uVar91._fU4, uVar91._fU8, ref uVar91._fU8 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_10774() );
                        SET_CHAR_HEADING( sub_10774(), 180.00000000 + uVar75 );
                        SET_CHAR_COORDINATES( sub_10774(), uVar91._fU0, uVar91._fU4, uVar91._fU8 );
                    }
                    sub_39714( 0, sub_10774(), "NIKO", 0 );
                    sub_39714( 1, (uParam0^), sub_14473( iParam1 ), 0 );
                    if (NOT (IS_CAR_DEAD( uVar41 )))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar41, 0.00000000, 5.00000000, 0.00000000, ref uVar94._fU0, ref uVar94._fU4, ref uVar94._fU8 );
                        TASK_LOOK_AT_COORD( sub_10774(), uVar94._fU0, uVar94._fU4, uVar94._fU8, -1, 0 );
                        CREATE_CAM( 14, ref l_U573[0] );
                        sub_52982( 0, iParam1, ref uVar60 );
                        CREATE_CAM( 14, ref l_U573[2] );
                        GET_PED_BONE_POSITION( sub_10774(), 1205, vVar48, ref uVar103 );
                        GET_PED_BONE_POSITION( sub_10774(), 1205, vVar51, ref uVar106 );
                        SET_CAM_POS( l_U573[2], uVar103._fU0, uVar103._fU4, uVar103._fU8 );
                        POINT_CAM_AT_COORD( l_U573[2], uVar106._fU0, uVar106._fU4, uVar106._fU8 );
                        SET_CAM_FOV( l_U573[2], 45.00000000 );
                        if (sub_58884( 26, ref l_U581, (uParam8^), iParam1, 88, 0 ))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar82 );
                            TASK_PAUSE( 0, 1500 );
                            TASK_LEAVE_CAR( 0, uVar41 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                            CLOSE_SEQUENCE_TASK( uVar82 );
                            TASK_PERFORM_SEQUENCE( (uParam0^), uVar82 );
                            CLEAR_SEQUENCE_TASK( uVar82 );
                        }
                    }
                    else
                    {
                        CREATE_CAM( 14, ref l_U573[0] );
                        sub_52982( 0, iParam1, ref uVar60 );
                        CREATE_CAM( 14, ref l_U573[2] );
                        sub_52982( 2, iParam1, ref uVar60 );
                        if (sub_58884( 26, ref l_U581, (uParam8^), iParam1, 88, 0 ))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar82 );
                            TASK_PAUSE( 0, 1500 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, uParam9._fU0, uParam9._fU4, uParam9._fU8, 2, -1 );
                            CLOSE_SEQUENCE_TASK( uVar82 );
                            TASK_PERFORM_SEQUENCE( (uParam0^), uVar82 );
                            CLEAR_SEQUENCE_TASK( uVar82 );
                        }
                    }
                    CREATE_CAM( 3, ref l_U573[6] );
                    SET_CAM_ACTIVE( l_U573[0], 1 );
                    SET_CAM_ACTIVE( l_U573[2], 1 );
                    SET_CAM_ACTIVE( l_U573[6], 1 );
                    SET_CAM_PROPAGATE( l_U573[6], 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[2], 7500, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    SETTIMERB( 0 );
                    DO_SCREEN_FADE_IN( 125 );
                    sub_2510( "  * current_" );
                    sub_2510( sub_18706( iParam1, 1 ) );
                    sub_2510( "current_girlfriend_in_hospital_stage = TAKE_GIRL_FROM_HOSPITAL_CS_1\n" );
                    (uParam15^) = 4;
                }
            }
        }
        break;
        case 4:
        if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U573[6] )))
        {
            sub_2510( "  * current_" );
            sub_2510( sub_18706( iParam1, 1 ) );
            sub_2510( "current_girlfriend_in_hospital_stage = TAKE_GIRL_FROM_HOSPITAL_CS_2\n" );
            (uParam15^) = 5;
        }
        break;
        case 5:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                DO_SCREEN_FADE_OUT( 125 );
            }
        }
        else
        {
            for ( I = 0; I < l_U573; I++ )
            {
                if (DOES_CAM_EXIST( l_U573[I] ))
                {
                    SET_CAM_PROPAGATE( l_U573[I], 0 );
                    SET_CAM_ACTIVE( l_U573[I], 0 );
                    DESTROY_CAM( l_U573[I] );
                }
            }
            if (DOES_CHAR_EXIST( (uParam0^) ))
            {
                sub_84672( uParam0 );
            }
            if (IS_VEH_DRIVEABLE( uVar41 ))
            {
                SET_CAR_HEADING( uVar41, uParam7 );
                SET_CAR_COORDINATES( uVar41, uParam4._fU0 + uVar77._fU0, uParam4._fU4 + uVar77._fU4, uParam4._fU8 + uVar77._fU8 );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_43888( uParam3 );
            sub_35351( 0 );
            DO_SCREEN_FADE_IN( 125 );
            sub_6127( sub_6013( iParam1 ) );
            sub_49395( iParam1 );
            sub_49143( iParam1, uParam8, 1, -1 );
            g_U33981[iParam1] = {0.00000000, 0.00000000, 0.00000000};
            sub_2510( "  * current_" );
            sub_2510( sub_18706( iParam1, 1 ) );
            sub_2510( "current_girlfriend_in_hospital_stage = WAIT_FOR_GIRLS_HOSPITAL_CONTACT\n" );
            (uParam15^) = 0;
            if (DOES_BLIP_EXIST( g_U10090[uParam13]._fU20 ))
            {
                REMOVE_BLIP( g_U10090[uParam13]._fU20 );
            }
            if (DOES_BLIP_EXIST( uParam2 ))
            {
                REMOVE_BLIP( uParam2 );
            }
            return 1;
        }
        break;
        case 6:
        sub_49143( iParam1, uParam8, 0, -1 );
        g_U33981[iParam1] = {0.00000000, 0.00000000, 0.00000000};
        sub_2510( "  * current_" );
        sub_2510( sub_18706( iParam1, 1 ) );
        sub_2510( "current_girlfriend_in_hospital_stage = WAIT_FOR_GIRLS_HOSPITAL_CONTACT\n" );
        (uParam15^) = 0;
        if (DOES_BLIP_EXIST( g_U10090[uParam13]._fU20 ))
        {
            REMOVE_BLIP( g_U10090[uParam13]._fU20 );
        }
        if (DOES_BLIP_EXIST( uParam2 ))
        {
            REMOVE_BLIP( uParam2 );
        }
        if (iParam1 == 3)
        {
            if (g_U32976 == 1)
            {
                g_U32976 = 2;
            }
        }
        return 1;
        break;
        case 7:
        sub_49143( iParam1, uParam8, 0, -1 );
        g_U33981[iParam1] = {0.00000000, 0.00000000, 0.00000000};
        sub_2510( "  * current_" );
        sub_2510( sub_18706( iParam1, 1 ) );
        sub_2510( "current_girlfriend_in_hospital_stage = WAIT_FOR_GIRLS_HOSPITAL_CONTACT\n" );
        (uParam15^) = 0;
        if (DOES_BLIP_EXIST( g_U10090[uParam13]._fU20 ))
        {
            REMOVE_BLIP( g_U10090[uParam13]._fU20 );
        }
        if (DOES_BLIP_EXIST( uParam2 ))
        {
            REMOVE_BLIP( uParam2 );
        }
        if (iParam1 == 3)
        {
            if (g_U32976 == 1)
            {
                g_U32976 = 2;
            }
        }
        return 1;
        break;
    }
    return 0;
}

int sub_94145(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    vector vVar9;
    vector vVar12;
    vector vVar15;
    vector vVar18;
    vector vVar21;
    vector vVar24;
    vector vVar27;
    vector vVar30;
    int I;
    unknown uVar34;
    int iVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    int iVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    boolean bVar53;
    int iVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    int iVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;

    if (sub_34123( uParam4, l_U589 ))
    {
        l_U589 = 3;
    }
    if (IS_PLAYER_PLAYING( sub_10695() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_10774(), ref uVar8 );
        }
    }
    vVar9 = {1.45000000, 4.75000000, 2.25000000};
    vVar12 = {-0.11800000, 0.18400000, -0.36000000};
    vVar15 = {0.30000000, 0.75000000, 1.50000000};
    vVar18 = {0.15000000, 0.25000000, -0.80000000};
    vVar21 = {-0.06000000, 2.56000000, -2.14000000};
    vVar24 = {-0.11800000, 1.36000000, -0.36000000};
    vVar27 = {0, -1.48000000, -2.15000000};
    vVar30 = {-0.16000000, 2.12000000, 0.38000000};
    PRINTSTRING( "current_girlfriend_bored_cutscene_stage: " );
    PRINTINT( l_U589 );
    PRINTNL();
    if (IS_PLAYER_PLAYING( sub_10695() ))
    {
        switch (l_U589)
        {
            case 0:
            if (NOT l_U590)
            {
                if (sub_21293( 1, 1 ))
                {
                    g_U10978 = 1;
                    g_U33837 = 1;
                    if (NOT IS_MINIGAME_IN_PROGRESS())
                    {
                        SET_MINIGAME_IN_PROGRESS( 1 );
                        ALLOW_STUNT_JUMPS_TO_TRIGGER( 0 );
                        l_U591 = 1;
                    }
                    sub_35196( 0 );
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    switch (g_U32928[iParam1])
                    {
                        case 6:
                        sub_35196( 0 );
                        PRINT_STRING_IN_STRING_NOW( "GF_DEAD", sub_18706( iParam1, 1 ), 7500, 1 );
                        ProtectedSet(g_U34042[iParam1], uParam5 + -5.00000000);
                        break;
                        case 7:
                        PRINT_STRING_IN_STRING_NOW( "GF_BORED", sub_18706( iParam1, 1 ), 7500, 1 );
                        ProtectedSet(g_U34042[iParam1], uParam5 + -7.50000000);
                        break;
                        case 8:
                        PRINT_STRING_IN_STRING_NOW( "GF_SCARED", sub_18706( iParam1, 1 ), 7500, 1 );
                        ProtectedSet(g_U34042[iParam1], uParam5 + -10.00000000);
                        break;
                    }
                    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
                    {
                        SET_CHAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
                    }
                    if (NOT (IS_CAR_DEAD( uVar8 )))
                    {
                        SET_CAR_PROOFS( uVar8, 1, 1, 1, 1, 1 );
                        if (IS_PLAYER_CONTROL_ON( sub_10695() ))
                        {
                            SET_PLAYER_CONTROL( sub_10695(), 0 );
                        }
                    }
                    l_U590 = 1;
                }
            }
            else if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    sub_35196( 0 );
                    if (NOT IS_SCREEN_FADING())
                    {
                        DO_SCREEN_FADE_OUT( 125 );
                        sub_33537( sub_6013( iParam1 ) );
                        CLEAR_PRINTS();
                        CLEAR_HELP();
                        sub_95010( 1 );
                    }
                }
                else
                {
                    sub_35650( uParam2 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_10774(), 1 );
                    if (IS_PLAYER_CONTROL_ON( sub_10695() ))
                    {
                        SET_PLAYER_CONTROL( sub_10695(), 0 );
                    }
                    if (IS_PLAYER_PLAYING( sub_10695() ))
                    {
                        CLEAR_CHAR_TASKS( sub_10774() );
                        if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
                        {
                            if (NOT (IS_CAR_DEAD( uVar8 )))
                            {
                                GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar8, ref iVar35 );
                                if (iVar35 <= 0)
                                {
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar8, 0.00000000, 2.00000000, 0.00000000, ref uVar36._fU0, ref uVar36._fU4, ref uVar36._fU8 );
                                    GET_CAR_HEADING( uVar8, ref uVar39 );
                                    GET_GROUND_Z_FOR_3D_COORD( uVar36._fU0, uVar36._fU4, uVar36._fU8, ref uVar40 );
                                    WARP_CHAR_FROM_CAR_TO_COORD( sub_10774(), uVar36._fU0, uVar36._fU4, uVar40 );
                                    SET_CHAR_HEADING( sub_10774(), uVar39 );
                                    return 0;
                                }
                                if (IS_VEH_DRIVEABLE( uVar8 ))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_10774(), ref uVar8 );
                                    if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar8, 0 )))
                                    {
                                        GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar8, 0, ref uVar41 );
                                        if (NOT (IS_CHAR_DEAD( uVar41 )))
                                        {
                                            WARP_CHAR_FROM_CAR_TO_COORD( uVar41, 0.00000000, 0.00000000, 0.00000000 );
                                            DELETE_CHAR( ref uVar41 );
                                        }
                                    }
                                    if (DOES_CHAR_EXIST( (uParam0^) ))
                                    {
                                        if (NOT (IS_CHAR_DEAD( (uParam0^) )))
                                        {
                                            if (IS_CHAR_IN_CAR( (uParam0^), uVar8 ))
                                            {
                                                WARP_CHAR_FROM_CAR_TO_COORD( (uParam0^), 0.00000000, 0.00000000, 0.00000000 );
                                            }
                                        }
                                        DELETE_CHAR( uParam0 );
                                    }
                                    while (NOT (sub_86518( iParam1, uVar8, 0, uParam0, g_U32917 )))
                                    {
                                        PRINTSTRING( "CREATE_GIRLFRIEND_AS_PASSENGER... " );
                                        WAIT( 0 );
                                    }
                                }
                            }
                            WAIT( 0 );
                        }
                        else
                        {
                            WAIT( 1500 );
                            if (IS_PLAYER_PLAYING( sub_10695() ))
                            {
                                GET_INTERIOR_FROM_CHAR( sub_10774(), ref iVar46 );
                                if (iVar46 != nil)
                                {
                                    GET_CHAR_COORDINATES( sub_10774(), ref uVar47._fU0, ref uVar47._fU4, ref uVar47._fU8 );
                                    bVar53 = false;
                                    iVar54 = 0;
                                    while ((NOT bVar53) AND (iVar54 <= 100))
                                    {
                                        if (GET_SAFE_POSITION_FOR_CHAR( uVar47._fU0, uVar47._fU4, uVar47._fU8, 1, ref uVar50._fU0, ref uVar50._fU4, ref uVar50._fU8 ))
                                        {
                                            bVar53 = true;
                                        }
                                        else
                                        {
                                            iVar54++;
                                            PRINTSTRING( "vPlayer_safe_pos = " );
                                            PRINTVECTOR( uVar50 );
                                            PRINTSTRING( "    //" );
                                            PRINTINT( iVar54 );
                                            PRINTNL();
                                        }
                                        WAIT( 0 );
                                    }
                                    if (bVar53)
                                    {
                                        if (IS_PLAYER_PLAYING( sub_10695() ))
                                        {
                                            GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar50._fU0, uVar50._fU4, uVar50._fU8, ref uVar55._fU0, ref uVar55._fU4, ref uVar55._fU8, ref uVar58 );
                                            SET_CHAR_COORDINATES( sub_10774(), uVar50._fU0, uVar50._fU4, uVar50._fU8 );
                                            SET_CHAR_HEADING( sub_10774(), uVar58 );
                                        }
                                    }
                                }
                                if (IS_PLAYER_PLAYING( sub_10695() ))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_10774() );
                                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_10774(), 0.00000000, 2.00000000, 1.00000000, ref uVar42._fU0, ref uVar42._fU4, ref uVar42._fU8 );
                                    if (NOT (IS_CHAR_IN_WATER( sub_10774() )))
                                    {
                                        GET_GROUND_Z_FOR_3D_COORD( uVar42._fU0, uVar42._fU4, uVar42._fU8, ref uVar42._fU8 );
                                    }
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_10774() );
                                    GET_CHAR_HEADING( sub_10774(), ref uVar45 );
                                }
                                if (IS_CHAR_DEAD( (uParam0^) ))
                                {
                                    if (DOES_CHAR_EXIST( (uParam0^) ))
                                    {
                                        DELETE_CHAR( uParam0 );
                                    }
                                    while (NOT (sub_35899( iParam1, uVar42._fU0, uVar42._fU4, ref uVar42._fU8, uVar45 + 180.00000000, uParam0, g_U32917, 0 )))
                                    {
                                        PRINTSTRING( "CREATE_GIRLFRIEND_ON_FOOT... " );
                                        WAIT( 0 );
                                    }
                                }
                                else
                                {
                                    SET_CHAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( (uParam0^) );
                                    SET_CHAR_COORDINATES( (uParam0^), uVar42._fU0, uVar42._fU4, uVar42._fU8 );
                                    SET_CHAR_HEADING( (uParam0^), uVar45 + 180.00000000 );
                                }
                                CLEAR_AREA( uVar42._fU0, uVar42._fU4, uVar42._fU8, 10.00000000, 1 );
                            }
                            else
                            {
                                l_U589 = 4;
                            }
                        }
                        sub_39714( 0, sub_10774(), "NIKO", 0 );
                        sub_39714( 1, (uParam0^), sub_14473( iParam1 ), 0 );
                        CREATE_CAM( 14, ref l_U573[0] );
                        CREATE_CAM( 14, ref l_U573[2] );
                        CREATE_CAM( 3, ref l_U573[6] );
                        if (NOT (IS_CAR_DEAD( uVar8 )))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar8, 0.00000000, 5.00000000, 0.00000000, ref uVar71._fU0, ref uVar71._fU4, ref uVar71._fU8 );
                            TASK_LOOK_AT_COORD( sub_10774(), uVar71._fU0, uVar71._fU4, uVar71._fU8, -1, 0 );
                            CREATE_CAM( 14, ref l_U573[0] );
                            GET_PED_BONE_POSITION( sub_10774(), 1205, vVar9, ref uVar59 );
                            GET_PED_BONE_POSITION( sub_10774(), 1205, vVar12, ref uVar62 );
                            SET_CAM_POS( l_U573[0], uVar59._fU0, uVar59._fU4, uVar59._fU8 );
                            POINT_CAM_AT_COORD( l_U573[0], uVar62._fU0, uVar62._fU4, uVar62._fU8 );
                            SET_CAM_FOV( l_U573[0], 45.00000000 );
                            CREATE_CAM( 14, ref l_U573[2] );
                            GET_PED_BONE_POSITION( sub_10774(), 1205, vVar15, ref uVar65 );
                            GET_PED_BONE_POSITION( sub_10774(), 1205, vVar18, ref uVar68 );
                            SET_CAM_POS( l_U573[2], uVar65._fU0, uVar65._fU4, uVar65._fU8 );
                            POINT_CAM_AT_COORD( l_U573[2], uVar68._fU0, uVar68._fU4, uVar68._fU8 );
                            SET_CAM_FOV( l_U573[2], 45.00000000 );
                            CLEAR_AREA( uVar59._fU0, uVar59._fU4, uVar59._fU8, 25.00000000, 1 );
                        }
                        else
                        {
                            WAIT( 1500 );
                            if ((NOT (IS_CHAR_INJURED( (uParam0^) ))) AND (IS_PLAYER_PLAYING( sub_10695() )))
                            {
                                TASK_LOOK_AT_CHAR( sub_10774(), (uParam0^), -1, 0 );
                                CREATE_CAM( 14, ref l_U573[0] );
                                GET_PED_BONE_POSITION( sub_10774(), 1205, vVar21, ref uVar59 );
                                GET_PED_BONE_POSITION( sub_10774(), 1205, vVar24, ref uVar62 );
                                SET_CAM_POS( l_U573[0], uVar59._fU0, uVar59._fU4, uVar59._fU8 );
                                POINT_CAM_AT_COORD( l_U573[0], uVar62._fU0, uVar62._fU4, uVar62._fU8 );
                                SET_CAM_FOV( l_U573[0], 45.00000000 );
                                CREATE_CAM( 14, ref l_U573[2] );
                                GET_PED_BONE_POSITION( sub_10774(), 1205, vVar27, ref uVar65 );
                                GET_PED_BONE_POSITION( sub_10774(), 1205, vVar30, ref uVar68 );
                                SET_CAM_POS( l_U573[2], uVar65._fU0, uVar65._fU4, uVar65._fU8 );
                                POINT_CAM_AT_COORD( l_U573[2], uVar68._fU0, uVar68._fU4, uVar68._fU8 );
                                SET_CAM_FOV( l_U573[2], 45.00000000 );
                                CLEAR_AREA( uVar59._fU0, uVar59._fU4, uVar59._fU8, 25.00000000, 1 );
                            }
                        }
                        SET_CAM_ACTIVE( l_U573[0], 1 );
                        SET_CAM_ACTIVE( l_U573[2], 1 );
                        SET_CAM_ACTIVE( l_U573[6], 1 );
                        SET_CAM_PROPAGATE( l_U573[6], 1 );
                        SET_CAM_INTERP_STYLE_CORE( l_U573[6], l_U573[0], l_U573[2], 7500, 0 );
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        SETTIMERB( 0 );
                        DO_SCREEN_FADE_IN( 125 );
                        l_U589 = 1;
                    }
                }
            }
            break;
            case 1:
            if (sub_58884( 24, ref l_U581, (uParam3^), iParam1, 41, 0 ))
            {
                iVar74 = 4500;
                if (NOT (IS_CHAR_DEAD( (uParam0^) )))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_10774() ))
                    {
                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_10774(), 0.00000000, 50.00000000, 1.00000000, ref uVar42._fU0, ref uVar42._fU4, ref uVar42._fU8 );
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_10774(), ref uVar8 );
                        OPEN_SEQUENCE_TASK( ref uVar34 );
                        TASK_PAUSE( 0, iVar74 );
                        TASK_LEAVE_CAR( 0, uVar8 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar75._fU0, uVar75._fU4, uVar75._fU8, 2, -1, 1.60000000 );
                        CLOSE_SEQUENCE_TASK( uVar34 );
                        TASK_PERFORM_SEQUENCE( (uParam0^), uVar34 );
                        CLEAR_SEQUENCE_TASK( uVar34 );
                    }
                    else
                    {
                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_10774(), 0.00000000, 50.00000000, 1.00000000, ref uVar42._fU0, ref uVar42._fU4, ref uVar42._fU8 );
                        OPEN_SEQUENCE_TASK( ref uVar34 );
                        TASK_PAUSE( 0, iVar74 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar75._fU0, uVar75._fU4, uVar75._fU8, 2, -1, 1.60000000 );
                        CLOSE_SEQUENCE_TASK( uVar34 );
                        TASK_PERFORM_SEQUENCE( (uParam0^), uVar34 );
                        CLEAR_SEQUENCE_TASK( uVar34 );
                    }
                    l_U589 = 2;
                }
            }
            break;
            case 2:
            if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U573[6] )))
            {
                l_U589 = 4;
            }
            break;
            case 3:
            if (NOT IS_SCREEN_FADED_OUT())
            {
                if (NOT IS_SCREEN_FADING_OUT())
                {
                    DO_SCREEN_FADE_OUT( 250 );
                }
            }
            else
            {
                sub_35196( 0 );
                l_U589 = 4;
            }
            break;
            case 4:
            if (NOT IS_SCREEN_FADED_OUT())
            {
                if (NOT IS_SCREEN_FADING_OUT())
                {
                    DO_SCREEN_FADE_OUT( 125 );
                }
            }
            else
            {
                for ( I = 0; I < l_U573; I++ )
                {
                    if (DOES_CAM_EXIST( l_U573[I] ))
                    {
                        SET_CAM_PROPAGATE( l_U573[I], 0 );
                        SET_CAM_ACTIVE( l_U573[I], 0 );
                        DESTROY_CAM( l_U573[I] );
                    }
                }
                if (DOES_CHAR_EXIST( (uParam0^) ))
                {
                    sub_84672( uParam0 );
                }
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                sub_43888( uParam2 );
                sub_35351( 0 );
                DO_SCREEN_FADE_IN( 125 );
                sub_6127( sub_6013( iParam1 ) );
                sub_49395( iParam1 );
                if (sub_49229( iParam1, (uParam3^) ))
                {
                    sub_49143( iParam1, uParam3, 0, 26 );
                }
                else
                {
                    sub_49143( iParam1, uParam3, 0, -1 );
                }
                l_U589 = 0;
                l_U590 = 0;
                if (iParam1 == 3)
                {
                    if (g_U32976 == 1)
                    {
                        g_U32976 = 2;
                    }
                }
                g_U10978 = 0;
                g_U33837 = 0;
                if ((IS_MINIGAME_IN_PROGRESS()) AND (l_U591))
                {
                    SET_MINIGAME_IN_PROGRESS( 0 );
                    ALLOW_STUNT_JUMPS_TO_TRIGGER( 1 );
                }
                l_U591 = 0;
                sub_98458( ref l_U581, 0 );
                return 1;
            }
            break;
        }
    }
    else
    {
        PRINTSTRING( "test 0\n" );
        for ( I = 0; I < l_U573; I++ )
        {
            if (DOES_CAM_EXIST( l_U573[I] ))
            {
                SET_CAM_PROPAGATE( l_U573[I], 0 );
                SET_CAM_ACTIVE( l_U573[I], 0 );
                DESTROY_CAM( l_U573[I] );
            }
        }
        if (DOES_CHAR_EXIST( (uParam0^) ))
        {
            sub_84672( uParam0 );
        }
        PRINTSTRING( "test 1:" );
        PRINTINT( (uParam2^) );
        PRINTNL();
        if ((uParam2^) > 0)
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_43888( uParam2 );
            sub_35351( 0 );
            DO_SCREEN_FADE_IN( 125 );
        }
        PRINTSTRING( "test 2\n" );
        sub_6127( sub_6013( iParam1 ) );
        sub_49395( iParam1 );
        if (sub_49229( iParam1, (uParam3^) ))
        {
            sub_49143( iParam1, uParam3, 0, 26 );
        }
        else
        {
            sub_49143( iParam1, uParam3, 0, -1 );
        }
        l_U589 = 0;
        l_U590 = 0;
        if (iParam1 == 3)
        {
            if (g_U32976 == 1)
            {
                g_U32976 = 2;
            }
        }
        PRINTSTRING( "test 3\n" );
        g_U32928[iParam1] = 5;
        g_U10978 = 0;
        g_U33837 = 0;
        return 1;
    }
    return 0;
}

void sub_95010(boolean bParam0)
{
    if (bParam0)
    {
        CLEAR_PRINTS();
        CLEAR_HELP();
        SET_PLAYER_CONTROL( sub_10695(), 0 );
        SET_WIDESCREEN_BORDERS( 1 );
    }
    else
    {
        sub_35535();
        SET_WIDESCREEN_BORDERS( 0 );
        SET_PLAYER_CONTROL( sub_10695(), 1 );
        SET_CAM_BEHIND_PED( sub_10774() );
    }
    return;
}

void sub_98458(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

int sub_99357(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    unknown uVar7;
    int iVar8;
    string sVar9;
    char[16] cVar10;
    char[16] cVar14;

    if ((uParam1^) < 0)
    {
        if (((NOT bParam3) AND (NOT ((g_U10978) || (GET_MISSION_FLAG())))) AND (NOT sub_20566()))
        {
            GET_GAME_TIMER( uParam1 );
            GENERATE_RANDOM_FLOAT_IN_RANGE( 2.50000000, 3.50000000, ref uVar7 );
            (uParam2^) = sub_1324( uVar7 );
        }
    }
    else if (NOT (uParam4^))
    {
        if (((bParam3) || ((g_U10978) || (GET_MISSION_FLAG()))) || (sub_20566()))
        {
            (uParam1^) = -1;
            return 0;
        }
        GET_GAME_TIMER( ref iVar8 );
        if (iVar8 <= ((uParam1^) + (uParam2^)))
        {
            sub_2510( "  * " );
            sub_2510( sub_18706( iParam0, 1 ) );
            sub_2510( "_calling_to_intro_special_ability: " );
            sub_2544( ((uParam1^) + (uParam2^)) - iVar8 );
            sub_2765();
        }
        else if (sub_20468( uParam1 ))
        {
            switch (iParam0)
            {
                case 0:
                SCRIPT_ASSERT( "get_phonecall_from_player_to_girl_for_ability.GF_MICHELLE - no ability" );
                return 0;
                break;
                case 1:
                SCRIPT_ASSERT( "get_phonecall_from_player_to_girl_for_ability.GF_KATE - no ability" );
                return 0;
                break;
                case 2:
                sVar9 = "GCA";
                break;
                case 3:
                sVar9 = "GCKK";
                break;
                case 4:
                sVar9 = "GCC";
                break;
            }
            StrCopy( ref cVar10, sVar9, 16 );
            ConcatString(ref cVar10, "_GCSP", 16);
            StrCopy( ref cVar14, sVar9, 16 );
            ConcatString(ref cVar14, "1AUD", 16);
            if ((GET_LENGTH_OF_LITERAL_STRING( ref cVar14 )) > 0)
            {
                if (sub_99965( sub_6013( iParam0 ), ref cVar10, GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( ref cVar14, 7 ), 10000, 0 ))
                {
                    (uParam4^) = 1;
                }
            }
        }
    }
    else if (sub_15735() != 3)
    {
        switch (sub_15735())
        {
            case 1:
            if (iParam0 == 3)
            {
                if (g_U32976 == 1)
                {
                    g_U32976 = 2;
                }
            }
            (uParam4^) = 0;
            (uParam1^) = -1;
            return 0;
            break;
            case 2:
            if (iParam0 == 3)
            {
                if (g_U32976 == 1)
                {
                    g_U32976 = 2;
                }
            }
            (uParam4^) = 0;
            (uParam1^) = -1;
            return 0;
            break;
        }
    }
    else
    {
        while (NOT (sub_14672( 0 )))
        {
            WAIT( 0 );
        }
        sub_15854();
        return 1;
    };;;
    return 0;
}

void sub_99965(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_10529( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

void sub_101104(unknown uParam0)
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

int sub_101208(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    GET_GAME_TIMER( ref iVar5 );
    if (iVar5 > ((uParam1^) + (sub_1324( uParam2 * 60.00000000 ))))
    {
        (uParam1^) = -1;
        sub_76407( uParam0, 1 );
        sub_101265( uParam0, 0 );
        return 1;
    }
    if (g_U1426[uParam0])
    {
        sub_76407( uParam0, 0 );
    }
    return 0;
}

void sub_101265(unknown uParam0, unknown uParam1)
{
    g_U1400[uParam0] = uParam1;
    return;
}

void sub_101360()
{
    sub_101104( sub_6013( 2 ) );
    g_U15946[sub_6013( 2 )]._fU8[0]._fU0[0] = 0;
    g_U15946[sub_6013( 2 )]._fU8[1]._fU0[0] = 0;
    g_U15946[sub_6013( 2 )]._fU8[0]._fU0[1] = 0;
    g_U15946[sub_6013( 2 )]._fU8[1]._fU0[1] = 0;
    sub_1541( 2, 0 );
    g_U33839--;
    sub_101508( 2 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_101508(unknown uParam0)
{
    g_U32928[uParam0] = 0;
    g_U32934[uParam0] = 29;
    g_U32940[uParam0] = 8;
    g_U32946[uParam0] = 8;
    g_U32952[uParam0] = 8;
    g_U32958[uParam0] = 8;
    g_U32964[uParam0] = 8;
    g_U32970[uParam0] = -1;
    g_U33842[uParam0] = 0;
    g_U33853[uParam0]._fU0 = nil;
    g_U33853[uParam0]._fU4 = 0;
    g_U33853[uParam0]._fU8[0] = -1;
    g_U33853[uParam0]._fU8[1] = -1;
    g_U33853[uParam0]._fU8[2] = -1;
    g_U33853[uParam0]._fU8[3] = -1;
    g_U33889[uParam0]._fU0 = -1;
    g_U33889[uParam0]._fU4 = -1;
    g_U33889[uParam0]._fU8 = -1;
    g_U33889[uParam0]._fU12 = -1;
    g_U33889[uParam0]._fU16 = -1;
    g_U33889[uParam0]._fU20 = -1;
    g_U33889[uParam0]._fU24 = -1;
    g_U33889[uParam0]._fU28 = -1;
    g_U33889[uParam0]._fU32 = -1;
    g_U33889[uParam0]._fU36 = -1;
    g_U33889[uParam0]._fU40 = -1;
    g_U33889[uParam0]._fU44 = -1;
    g_U33889[uParam0]._fU48 = -1;
    g_U33889[uParam0]._fU52 = -1;
    g_U33889[uParam0]._fU56 = -1;
    g_U33889[uParam0]._fU60 = -1;
    g_U33889[uParam0]._fU64 = -1;
    g_U33889[uParam0]._fU68 = -1;
    g_U33981[uParam0] = {0.00000000, 0.00000000, 0.00000000};
    g_U33999[uParam0] = 0;
    g_U34005[uParam0] = 0;
    ProtectedSet(g_U34042[uParam0], 0.00000000);
    return;
}