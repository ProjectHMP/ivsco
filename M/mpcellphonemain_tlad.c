void main()
{
    unknown uVar2;
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
    int iVar18;
    int iVar19;
    int iVar20;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 225;
    l_U3 = -1;
    l_U2132 = 0;
    l_U2164 = -1;
    l_U2167 = GET_CURRENT_LANGUAGE();
    l_U2168 = -1;
    l_U2169 = -1;
    l_U2170 = -1;
    SETTIMERA( 0 );
    g_U94._fU380 = 1;
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 0 );
    SET_OVERRIDE_NO_SPRINTING_ON_PHONE_IN_MULTIPLAYER( 0 );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    switch (g_U829)
    {
        case 0:
        g_U94._fU496 = GET_IS_HIDEF();
        break;
        case 1:
        g_U94._fU496 = 1;
        break;
        case 2:
        g_U94._fU496 = 0;
        break;
    }
    GET_SCREEN_RESOLUTION( ref iVar18, ref iVar19 );
    if ((iVar18 * iVar19) <= 480000)
    {
        g_U94._fU496 = 0;
        g_U94._fU500 = 0;
    }
    sub_271( ref l_U2046, ref l_U2033 );
    iVar20 = 4;
    sub_1500( ref l_U2046 );
    if (g_U94._fU0 == 1000)
    {
        sub_2335( ref l_U2081, 1 );
        sub_3064();
        sub_3265();
        sub_3708( 1002 );
    }
    while (true)
    {
        WAIT( 0 );
        sub_3762( ref l_U2046, ref l_U2033 );
        if ((((NOT IS_PLAYER_ONLINE()) AND (IS_IN_LAN_MODE() == 0)) || ((IS_IN_LAN_MODE() == 1) AND (NOT NETWORK_IS_NETWORK_AVAILABLE()))) AND (g_U94._fU0 != 1001))
        {
            sub_3708( 1001 );
        }
        else if (NOT sub_3846())
        {
            if ((sub_4412( ref l_U2081 )) AND (NOT sub_4446()))
            {
                g_U94._fU0 = 1001;
                g_U94._fU100 = 0;
            }
        }
        else if ((g_U94._fU48) || (g_U94._fU52))
        {
            if ((sub_4412( ref l_U2081 )) AND (NOT sub_4446()))
            {
                STOP_MOBILE_PHONE_RINGING();
                if (g_U94._fU48)
                {
                    sub_3708( 1004 );
                }
                else
                {
                    sub_3708( 1005 );
                }
                sub_4616( 5 );
            }
        }
        else if (g_U94._fU632 == 1)
        {
            sub_3708( 1066 );
        };;;;
        if (sub_5092( iVar20 ))
        {
            switch (g_U94._fU0)
            {
                case 1002:
                sub_5370();
                if (sub_27453( ref l_U2081, 2 ))
                {
                    switch (sub_28487( g_U94._fU524 ))
                    {
                        case 6:
                        l_U2111 = -1;
                        sub_3708( 1060 );
                        break;
                        case 7:
                        case 1:
                        case 18:
                        sub_3708( 1001 );
                        break;
                    }
                }
                break;
                case 1060:
                case 1062:
                case 1064:
                case 1074:
                case 1077:
                case 1080:
                case 1086:
                sub_5370();
                switch (sub_28487( g_U94._fU524 ))
                {
                    case 0:
                    sub_32665( ref l_U5, ref l_U230, ref l_U43 );
                    break;
                    case 1:
                    sub_33501( ref l_U5, ref l_U230, ref l_U43 );
                    break;
                    case 7:
                    switch (g_U94._fU0)
                    {
                        case 1060:
                        sub_3708( 1002 );
                        break;
                        case 1062:
                        case 1077:
                        case 1086:
                        l_U2111 = g_U94._fU0;
                        sub_3708( 1060 );
                        break;
                        case 1080:
                        l_U2111 = 1080;
                        sub_3708( 1077 );
                        break;
                        case 1064:
                        l_U2111 = l_U2163;
                        sub_3708( 1062 );
                        break;
                    }
                    break;
                    case 6:
                    switch (g_U94._fU0)
                    {
                        case 1060:
                        switch (l_U5._fU60)
                        {
                            case 1048:
                            while (NOT (sub_4616( 6 )))
                            {
                                WAIT( 0 );
                                sub_5370();
                            }
                            break;
                            case 1062:
                            l_U2111 = -1;
                            l_U2112 = -1;
                            sub_3708( 1062 );
                            break;
                            default:
                            l_U2111 = -1;
                            sub_3708( l_U5._fU60 );
                            break;
                        }
                        break;
                        case 1062:
                        l_U2111 = -1;
                        if (l_U5._fU60 == 100)
                        {
                            sub_3708( 1099 );
                        }
                        else if (l_U5._fU60 == 20)
                        {
                            sub_3708( 1073 );
                        }
                        else
                        {
                            l_U2163 = l_U5._fU60;
                            StrCopy( ref l_U2139, 16, l_U230[l_U5._fU16[l_U5._fU44]]._fU4, 8);
                            sub_3708( 1064 );
                        }
                        break;
                        case 1064:
                        switch (l_U5._fU60)
                        {
                            case 0:
                            l_U2111 = -1;
                            if ((((NETWORK_IS_PLAYER_BLOCKED_BY_ME( l_U2163 )) || (NETWORK_AM_I_BLOCKED_BY_PLAYER( l_U2163 ))) || (NETWORK_IS_PLAYER_MUTED_BY_ME( l_U2163 ))) || (NETWORK_AM_I_MUTED_BY_PLAYER( l_U2163 )))
                            {
                                sub_3708( 1071 );
                                sub_3101( "/n ***************" );
                                sub_3101( " NOT GOT PRIV" );
                                sub_3101( "/n ***************" );
                            }
                            else if (NOT (NETWORK_PLAYER_HAS_HEADSET( GET_PLAYER_ID() )))
                            {
                                sub_3708( 1069 );
                            }
                            else if (NOT (NETWORK_PLAYER_HAS_HEADSET( l_U2163 )))
                            {
                                sub_3708( 1070 );
                            }
                            else
                            {
                                g_U94._fU636 = l_U2163;
                                g_U94._fU632 = 2;
                                StrCopy( ref g_U94._fU584, 8, l_U2139, 16);
                                sub_3708( 1066 );
                            };;;
                            break;
                            case 3:
                            g_U94._fU636 = 33;
                            g_U94._fU632 = 4;
                            sub_3708( 1064 );
                            break;
                            case 1:
                            NETWORK_SHOW_PLAYER_PROFILE_UI( l_U2163 );
                            break;
                            case 5:
                            if (NETWORK_IS_PLAYER_MUTED_BY_ME( l_U2163 ))
                            {
                                NETWORK_SET_PLAYER_MUTED( l_U2163, 0 );
                                if (NETWORK_IS_PLAYER_MUTED_BY_ME( l_U2163 ))
                                {
                                    sub_3708( 1092 );
                                }
                                else
                                {
                                    sub_5655( 5, "CP_MUTE", ref l_U5, ref l_U43, ref l_U230, 1 );
                                }
                            }
                            else
                            {
                                NETWORK_SET_PLAYER_MUTED( l_U2163, 1 );
                                sub_5655( 5, "CP_UNMUTE", ref l_U5, ref l_U43, ref l_U230, 1 );
                            }
                            break;
                            case 2:
                            l_U2111 = -1;
                            if (GET_NUMBER_OF_PLAYERS() > 2)
                            {
                                if (IS_NETWORK_PLAYER_ACTIVE( l_U2163 ))
                                {
                                    ProtectedSet(g_U94._fU668, l_U2163);
                                }
                                else
                                {
                                    ProtectedSet(g_U94._fU668, -1);
                                }
                                sub_3708( 1064 );
                            }
                            else
                            {
                                sub_3708( 1065 );
                            }
                            break;
                            case 4:
                            ProtectedSet(g_U94._fU668, -1);
                            l_U2111 = -1;
                            sub_3708( 1064 );
                            break;
                        }
                        break;
                        case 1077:
                        l_U2111 = -1;
                        sub_3708( l_U5._fU60 );
                        break;
                        case 1086:
                        if (GET_NUMBER_OF_PLAYERS() > (sub_35428( l_U5._fU60, 0 )))
                        {
                            sub_3708( 1086 );
                        }
                        else
                        {
                            ProtectedSet(g_U94._fU660, l_U5._fU60);
                            sub_3708( 1087 );
                        }
                        break;
                    }
                    break;
                    case 18:
                    l_U2111 = -1;
                    sub_3708( 1001 );
                    break;
                }
                break;
                case 1099:
                case 1100:
                sub_5370();
                if (sub_27453( ref l_U2081, 2 ))
                {
                    switch (sub_28487( g_U94._fU524 ))
                    {
                        case 0:
                        sub_35971( ref l_U5._fU52, ref l_U5._fU60, ref l_U2114, ref l_U2115 );
                        break;
                        case 1:
                        sub_36059( ref l_U5._fU52, ref l_U5._fU60, ref l_U2118, ref l_U2114, ref l_U2115 );
                        break;
                        case 7:
                        l_U2111 = 100;
                        sub_3708( 1012 );
                        break;
                        case 18:
                        l_U2111 = -1;
                        sub_3708( 1001 );
                        break;
                    }
                }
                if (g_U94._fU0 == 1099)
                {
                    if (TIMERA() >= 1500)
                    {
                        sub_3708( 1100 );
                    }
                }
                break;
                case 1093:
                sub_5370();
                if (sub_27453( ref l_U2081, 2 ))
                {
                    switch (sub_28487( g_U94._fU524 ))
                    {
                        case 0:
                        sub_32665( ref l_U5, ref l_U230, ref l_U43 );
                        break;
                        case 1:
                        sub_33501( ref l_U5, ref l_U230, ref l_U43 );
                        break;
                        case 7:
                        l_U2111 = 1093;
                        sub_3708( 1060 );
                        break;
                        case 6:
                        NETWORK_ACCEPT_INVITE( l_U5._fU60 );
                        sub_3708( 1001 );
                        break;
                        case 18:
                        l_U2111 = -1;
                        sub_3708( 1001 );
                        break;
                    }
                }
                break;
                case 1094:
                sub_5370();
                if (sub_27453( ref l_U2081, 2 ))
                {
                    switch (sub_28487( g_U94._fU524 ))
                    {
                        case 0:
                        sub_35971( ref l_U5._fU52, ref l_U5._fU60, ref l_U2114, ref l_U2115 );
                        break;
                        case 1:
                        sub_36059( ref l_U5._fU52, ref l_U5._fU60, ref l_U2118, ref l_U2114, ref l_U2115 );
                        break;
                        case 7:
                        l_U2111 = 1093;
                        sub_3708( 1060 );
                        break;
                        case 18:
                        l_U2111 = -1;
                        sub_3708( 1001 );
                        break;
                    }
                }
                break;
                case 1081:
                sub_5370();
                switch (sub_28487( g_U94._fU524 ))
                {
                    case 0:
                    sub_32665( ref l_U5, ref l_U230, ref l_U43 );
                    break;
                    case 1:
                    sub_33501( ref l_U5, ref l_U230, ref l_U43 );
                    break;
                    case 7:
                    l_U2111 = 1081;
                    sub_3708( 1060 );
                    break;
                    case 6:
                    l_U2155 = {l_U43[l_U5._fU44]._fU8};
                    if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
                    {
                        sub_3708( 1083 );
                    }
                    else if (NETWORK_IS_FRIEND_IN_SAME_TITLE( ref l_U2155 ))
                    {
                        sub_36796( ref l_U2155, ref l_U2171, 1 );
                        sub_3708( 1084 );
                    }
                    break;
                    case 18:
                    l_U2111 = -1;
                    sub_3708( 1001 );
                    break;
                }
                break;
                case 1082:
                case 1084:
                sub_5370();
                switch (sub_28487( g_U94._fU524 ))
                {
                    case 0:
                    sub_35971( ref l_U5._fU52, ref l_U5._fU60, ref l_U2114, ref l_U2115 );
                    break;
                    case 1:
                    sub_36059( ref l_U5._fU52, ref l_U5._fU60, ref l_U2118, ref l_U2114, ref l_U2115 );
                    break;
                    case 7:
                    switch (g_U94._fU0)
                    {
                        case 1082:
                        l_U2111 = 1081;
                        sub_3708( 1060 );
                        break;
                        case 1084:
                        if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
                        {
                            l_U2111 = 0;
                            sub_3708( 1083 );
                        }
                        else
                        {
                            l_U2111 = GET_HASH_KEY( ref l_U2155 );
                            sub_3708( 1081 );
                        }
                        break;
                    }
                    break;
                    case 18:
                    l_U2111 = -1;
                    sub_3708( 1001 );
                    break;
                }
                break;
                case 1083:
                sub_5370();
                switch (sub_28487( g_U94._fU524 ))
                {
                    case 0:
                    sub_32665( ref l_U5, ref l_U230, ref l_U43 );
                    break;
                    case 1:
                    sub_33501( ref l_U5, ref l_U230, ref l_U43 );
                    break;
                    case 7:
                    l_U2111 = GET_HASH_KEY( ref l_U2155 );
                    sub_3708( 1081 );
                    break;
                    case 6:
                    switch (l_U5._fU60)
                    {
                        case 0:
                        sub_36796( ref l_U2155, ref l_U2171, 1 );
                        sub_3708( 1084 );
                        break;
                        case 1:
                        NETWORK_SHOW_FRIEND_PROFILE_UI( ref l_U2155 );
                        break;
                    }
                    break;
                    case 18:
                    l_U2111 = -1;
                    sub_3708( 1001 );
                    break;
                }
                break;
                case 1063:
                case 1088:
                case 1078:
                case 1079:
                case 1087:
                case 1069:
                case 1070:
                case 1071:
                case 1065:
                case 1092:
                sub_5370();
                switch (sub_28487( g_U94._fU524 ))
                {
                    case 0:
                    sub_35971( ref l_U5._fU52, ref l_U5._fU60, ref l_U2114, ref l_U2115 );
                    break;
                    case 1:
                    sub_36059( ref l_U5._fU52, ref l_U5._fU60, ref l_U2118, ref l_U2114, ref l_U2115 );
                    break;
                    case 7:
                    switch (g_U94._fU0)
                    {
                        case 1063:
                        case 1088:
                        l_U2111 = g_U94._fU0;
                        sub_3708( 1060 );
                        break;
                        case 1078:
                        case 1079:
                        l_U2111 = g_U94._fU0;
                        sub_3708( 1077 );
                        break;
                        case 1087:
                        l_U2111 = 1086;
                        sub_3708( 1060 );
                        break;
                        case 1069:
                        case 1070:
                        case 1071:
                        l_U2111 = 0;
                        sub_3708( 1064 );
                        break;
                        case 1084:
                        l_U2111 = 0;
                        sub_3708( 1083 );
                        break;
                        case 1065:
                        l_U2111 = -1;
                        sub_3708( 1064 );
                        break;
                        case 1092:
                        l_U2111 = 5;
                        sub_3708( 1064 );
                        break;
                    }
                    break;
                    case 6:
                    switch (g_U94._fU0)
                    {
                        case 1088:
                        g_U13 = 1;
                        while (true)
                        {
                            WAIT( 0 );
                            sub_5370();
                        }
                        break;
                        case 1087:
                        sub_3708( 1001 );
                        break;
                    }
                    break;
                }
                break;
                case 1066:
                sub_5370();
                if (sub_27453( ref l_U2081, 2 ))
                {
                    sub_7010( "\n The net state is ", g_U94._fU632 );
                    switch (sub_28487( g_U94._fU524 ))
                    {
                        case 7:
                        STOP_MOBILE_PHONE_RINGING();
                        switch (g_U94._fU632)
                        {
                            case 2:
                            case 3:
                            case 1:
                            g_U94._fU636 = 33;
                            g_U94._fU632 = 4;
                            break;
                            case 4:
                            case 9:
                            l_U2111 = -1;
                            sub_3708( 1062 );
                            break;
                            case 6:
                            STOP_SOUND( l_U2164 );
                            RELEASE_SOUND_ID( l_U2164 );
                            l_U2111 = -1;
                            sub_3708( 1062 );
                            break;
                        }
                        break;
                        case 6:
                        switch (g_U94._fU632)
                        {
                            case 1:
                            g_U94._fU632 = 9;
                            sub_3708( 1066 );
                            break;
                            default:
                        }
                        break;
                    }
                }
                break;
                case 1001:
                if (sub_27453( ref l_U2081, 1 ))
                {
                    g_U94._fU0 = 1000;
                    SET_TEXT_TO_USE_TEXT_FILE_COLOURS( 1 );
                    DESTROY_MOBILE_PHONE();
                    STOP_MOBILE_PHONE_RINGING();
                    UNREGISTER_SCRIPT_WITH_AUDIO();
                    TERMINATE_THIS_SCRIPT();
                }
                break;
                default:
                l_U2111 = g_U94._fU0;
                sub_3708( 1060 );
                break;
            }
        }
        else
        {
            SET_TEXT_TO_USE_TEXT_FILE_COLOURS( 1 );
            UNREGISTER_SCRIPT_WITH_AUDIO();
            TERMINATE_THIS_SCRIPT();
        }
    }
    return;
}

void sub_271(int iParam0, int iParam1)
{
    sub_284( iParam0, iParam1 );
    if ((NOT (# -NULL-0xc27c84())) AND (NOT (# -NULL-0xc27bfa())))
    {
        g_U94._fU564 = 2;
    }
    switch (g_U94._fU40)
    {
        case 2:
        sub_391( iParam1 + 0, 90, 110, 110, 255 );
        sub_391( iParam1 + 4, 0, 0, 0, 205 );
        sub_391( iParam1 + 8, 0, 0, 0, 140 );
        sub_391( iParam1 + 12, 0, 0, 0, 140 );
        sub_391( iParam1 + 16, 0, 0, 0, 255 );
        sub_391( iParam1 + 20, 0, 0, 0, 255 );
        sub_391( iParam1 + 24, 0, 0, 0, 255 );
        sub_391( iParam1 + 28, 0, 0, 0, 255 );
        sub_391( iParam1 + 40, 0, 0, 0, 255 );
        sub_391( iParam1 + 44, 255, 255, 255, 255 );
        sub_391( iParam1 + 48, 255, 255, 255, 255 );
        sub_391( ref iParam0->_fU0[0]._fU8, 255, 255, 255, 230 );
        sub_391( ref iParam0->_fU0[3]._fU8, 255, 255, 255, 230 );
        sub_391( ref iParam0->_fU0[4]._fU8, 0, 0, 0, 230 );
        sub_391( ref iParam0->_fU0[5]._fU8, 255, 255, 255, 230 );
        sub_391( ref iParam0->_fU0[6]._fU8, 0, 0, 0, 230 );
        sub_391( ref iParam0->_fU0[7]._fU8, 255, 255, 255, 230 );
        break;
        default:
        sub_391( iParam1 + 0, 90, 110, 110, 255 );
        sub_391( iParam1 + 4, 20, 30, 30, 255 );
        sub_391( iParam1 + 8, 40, 60, 60, 255 );
        sub_391( iParam1 + 12, 30, 50, 50, 255 );
        sub_391( iParam1 + 16, 40, 60, 60, 255 );
        sub_391( iParam1 + 20, 40, 60, 60, 255 );
        sub_391( iParam1 + 24, 40, 60, 60, 255 );
        sub_391( iParam1 + 28, 40, 60, 60, 255 );
        sub_391( iParam1 + 32, 80, 100, 100, 255 );
        sub_391( iParam1 + 36, 40, 60, 60, 255 );
        sub_391( iParam1 + 40, 0, 0, 0, 255 );
        sub_391( iParam1 + 44, 255, 255, 255, 255 );
        sub_391( iParam1 + 48, 255, 255, 255, 255 );
        sub_391( ref iParam0->_fU0[0]._fU8, 0, 0, 0, 200 );
        sub_391( ref iParam0->_fU0[3]._fU8, 255, 255, 255, 200 );
        sub_391( ref iParam0->_fU0[4]._fU8, 0, 0, 0, 200 );
        sub_391( ref iParam0->_fU0[5]._fU8, 255, 255, 255, 200 );
        sub_391( ref iParam0->_fU0[6]._fU8, 0, 0, 0, 200 );
        sub_391( ref iParam0->_fU0[7]._fU8, 255, 255, 255, 200 );
        break;
    }
    return;
}

void sub_284(int iParam0, unknown uParam1)
{
    sub_293();
    switch (g_U94._fU40)
    {
        case 2:
        if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
        {
            sub_391( ref iParam0->_fU0[2]._fU8, 200, 0, 0, 230 );
            sub_391( ref iParam0->_fU0[1]._fU8, 0, 200, 0, 230 );
        }
        else
        {
            sub_391( ref iParam0->_fU0[2]._fU8, 204, 43, 71, 230 );
            sub_391( ref iParam0->_fU0[1]._fU8, 108, 130, 187, 230 );
        }
        break;
        default:
        if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
        {
            sub_391( ref iParam0->_fU0[2]._fU8, 200, 0, 0, 200 );
            sub_391( ref iParam0->_fU0[1]._fU8, 0, 200, 0, 200 );
        }
        else
        {
            sub_391( ref iParam0->_fU0[2]._fU8, 204, 43, 71, 200 );
            sub_391( ref iParam0->_fU0[1]._fU8, 108, 130, 187, 200 );
        }
        break;
    }
    return;
}

void sub_293()
{
    g_U94._fU560 = 17;
    g_U94._fU556 = 16;
    return;
}

void sub_391(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam0, 0, 7, uParam1 );
    SET_BITS_IN_RANGE( uParam0, 8, 15, uParam2 );
    SET_BITS_IN_RANGE( uParam0, 16, 23, uParam3 );
    SET_BITS_IN_RANGE( uParam0, 24, 31, uParam4 );
    return;
}

void sub_1500(int iParam0)
{
    float fVar3;

    fVar3 = 1.85000000;
    switch (g_U94._fU40)
    {
        case 2:
        if (g_U94._fU500)
        {
            fVar3 = 1.55000000;
            sub_1574( ref iParam0->_fU0[3]._fU0, fVar3, fVar3 );
            sub_1574( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
            sub_1574( iParam0 + 100, 0.05000000, 0.89000000 );
            sub_1574( iParam0 + 108, 0.95000000, 0.89000000 );
        }
        else
        {
            sub_1574( ref iParam0->_fU0[3]._fU0, 1.68000000, 1.68000000 );
            sub_1574( ref iParam0->_fU0[0]._fU0, 1.75000000, 1.75000000 );
            sub_1574( iParam0 + 100, 0.05000000, 0.87500000 );
            sub_1574( iParam0 + 108, 0.95000000, 0.87500000 );
        }
        sub_1574( ref iParam0->_fU0[1]._fU0, fVar3, fVar3 );
        sub_1574( ref iParam0->_fU0[2]._fU0, fVar3, fVar3 );
        iParam0->_fU116 = 1678728908;
        sub_1574( iParam0 + 120, fVar3, fVar3 );
        iParam0->_fU128 = 1678728908;
        sub_1574( iParam0 + 132, fVar3, fVar3 );
        sub_1574( ref iParam0->_fU0[4]._fU0, fVar3, fVar3 );
        sub_1574( ref iParam0->_fU0[5]._fU0, fVar3, fVar3 );
        sub_1574( ref iParam0->_fU0[6]._fU0, fVar3, fVar3 );
        sub_1574( ref iParam0->_fU0[7]._fU0, fVar3, fVar3 );
        break;
        default:
        if (g_U94._fU500)
        {
            fVar3 = 1.55000000;
            sub_1574( ref iParam0->_fU0[3]._fU0, fVar3, fVar3 );
            sub_1574( iParam0 + 100, 0.05000000, 0.89000000 );
            sub_1574( iParam0 + 108, 0.95000000, 0.89000000 );
            sub_1574( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
        }
        else
        {
            sub_1574( ref iParam0->_fU0[3]._fU0, 1.75000000, 1.75000000 );
            sub_1574( ref iParam0->_fU0[0]._fU0, 1.75000000, 1.75000000 );
            sub_1574( iParam0 + 100, 0.05000000, 0.87500000 );
            sub_1574( iParam0 + 108, 0.95000000, 0.87500000 );
        }
        sub_1574( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
        sub_1574( ref iParam0->_fU0[1]._fU0, fVar3, fVar3 );
        sub_1574( ref iParam0->_fU0[2]._fU0, fVar3, fVar3 );
        iParam0->_fU116 = 1678728908;
        sub_1574( iParam0 + 120, fVar3, fVar3 );
        iParam0->_fU128 = 1678728908;
        sub_1574( iParam0 + 132, fVar3, fVar3 );
        sub_1574( ref iParam0->_fU0[4]._fU0, fVar3, fVar3 );
        sub_1574( ref iParam0->_fU0[5]._fU0, fVar3, fVar3 );
        sub_1574( ref iParam0->_fU0[6]._fU0, fVar3, fVar3 );
        sub_1574( ref iParam0->_fU0[7]._fU0, fVar3, fVar3 );
        break;
    }
    return;
}

void sub_1574(int iParam0, unknown uParam1, unknown uParam2)
{
    iParam0->_fU0 = uParam1;
    iParam0->_fU4 = uParam2;
    return;
}

void sub_2335(int iParam0, unknown uParam1)
{
    iParam0->_fU0 = uParam1;
    sub_2359( uParam1, ref g_U94._fU8 );
    sub_2989();
    return;
}

void sub_2359(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        if ((g_U94._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_2476( uParam1, 11.50000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        else
        {
            sub_2476( uParam1, 5.00000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        break;
        case 2:
        if ((g_U94._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_2476( uParam1, 11.50000000, -11.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        else
        {
            sub_2476( uParam1, 5.00000000, -7.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        break;
        case 3:
        if ((g_U94._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_2476( uParam1, 11.50000000, 4.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        else
        {
            sub_2476( uParam1, 5.00000000, 8.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        break;
        case 4:
        if ((g_U94._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_2476( uParam1, 11.50000000, -5.25000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        else
        {
            sub_2476( uParam1, 5.00000000, -0.75000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        break;
    }
    return;
}

void sub_2476(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    iParam0->_fU0 = {uParam1};
    iParam0->_fU12 = {uParam4};
    iParam0->_fU24 = uParam7;
    iParam0->_fU28 = uParam1._fU0;
    return;
}

void sub_2989()
{
    SET_MOBILE_PHONE_SCALE( g_U94._fU8._fU24 );
    SET_MOBILE_PHONE_POSITION( g_U94._fU8._fU0 );
    SET_MOBILE_PHONE_ROTATION( g_U94._fU8._fU12 );
    return;
}

void sub_3064()
{
    sub_3101( "\n == Mobile Phone Created" );
    GET_MOBILE_PHONE_RENDER_ID( ref g_U94._fU44 );
    while (g_U94._fU44 == -1)
    {
        WAIT( 0 );
        GET_MOBILE_PHONE_RENDER_ID( ref g_U94._fU44 );
        sub_3101( "\n == Getting Render Target" );
    }
    sub_3101( "\n == Mobile Phone Loaded" );
    g_U94._fU8._fU24 = 324.00000000;
    return;
}

void sub_3101(unknown uParam0)
{
    return;
}

void sub_3265()
{
    int I;

    g_U526._fU124 = 255;
    for ( I = 0; I <= 4; I++ )
    {
        sub_3301( I, 0 );
    }
    return;
}

void sub_3301(int iParam0, boolean bParam1)
{
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref uVar4 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref uVar5 );
    switch (iParam0 / 2)
    {
        case 0:
        fVar6 = 0.10000000 + (uVar4 * 0.20000000);
        fVar8 = 0.20000000 + (uVar5 * 0.05000000);
        fVar9 = -0.01400000 + (uVar5 * 0.00050000);
        break;
        case 1:
        fVar6 = 0.20000000 + (uVar4 * 0.15000000);
        fVar8 = 0.50000000 + (uVar5 * 0.05000000);
        fVar9 = -0.01100000 + (uVar5 * 0.00050000);
        break;
        case 2:
        fVar6 = 0.40000000 + (uVar4 * 0.05000000);
        fVar8 = 0.90000000 + (uVar5 * 0.05000000);
        fVar9 = -0.00800000 + (uVar5 * 0.00050000);
        break;
    }
    if (bParam1)
    {
        fVar7 = 1.00000000 + (fVar8 * 0.50000000);
    }
    else
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.20000000, 0.81000000, ref fVar7 );
    }
    sub_3604( iParam0, fVar6, fVar7, fVar8, fVar8, fVar9 );
    return;
}

void sub_3604(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_1574( ref g_U526._fU20[uParam0]._fU0, uParam1, uParam2 );
    sub_1574( ref g_U526._fU20[uParam0]._fU8, uParam3, uParam4 );
    g_U526._fU20[uParam0]._fU16 = uParam5;
    return;
}

void sub_3708(unknown uParam0)
{
    l_U2031 = 1;
    g_U94._fU0 = uParam0;
    return;
}

void sub_3762(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_3846()
{
    if (NOT (IS_PLAYER_PLAYING( sub_3855() )))
    {
        sub_3101( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_3101( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_3101( "\n PHONE CHECK - .overrideCellphoneChecks is returning TRUE." );
        return 1;
    }
    if ((g_U94._fU100) || (g_U94._fU104))
    {
        sub_3101( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_CONTROL_ON( sub_3855() )))
    {
        sub_3101( "\n PHONE CHECK - IS_PLAYER_CONTROL_ON is returning FALSE" );
        return 0;
    }
    if (IS_IN_SPECTATOR_MODE())
    {
        sub_3101( "\n PHONE CHECK - player IS_IN_SPECTATOR_MODE" );
        return 0;
    }
    return 1;
}

void sub_3855()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_4412(int iParam0)
{
    if (iParam0->_fU0 < 5)
    {
        return 1;
    }
    return 0;
}

int sub_4446()
{
    if ((g_U94._fU0 == 1010) || (g_U94._fU0 == 1001))
    {
        return 1;
    }
    return 0;
}

int sub_4616(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (iParam0 != g_U558)
    {
        sub_4641( ref uVar3, iParam0 );
        REQUEST_SCRIPT( ref uVar3 );
        if (NOT (HAS_SCRIPT_LOADED( ref uVar3 )))
        {
            REQUEST_SCRIPT( ref uVar3 );
        }
        else
        {
            g_U558 = iParam0;
            g_U559[g_U558] = START_NEW_SCRIPT( ref uVar3, 16888 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref uVar3 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_4641(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        StrCopy( (uParam0^), "SPcellphoneMain", 32 );
        break;
        case 1:
        StrCopy( (uParam0^), "SPcellphoneCalling", 32 );
        break;
        case 2:
        StrCopy( (uParam0^), "SPcellphoneNetwork", 32 );
        break;
        case 3:
        StrCopy( (uParam0^), "SPcellphoneTutorial", 32 );
        break;
        case 4:
        StrCopy( (uParam0^), "MPcellphoneMain", 32 );
        break;
        case 5:
        StrCopy( (uParam0^), "MPcellphoneCalling", 32 );
        break;
        case 6:
        StrCopy( (uParam0^), "MPcellphoneNetwork", 32 );
        break;
        case 7:
        StrCopy( (uParam0^), "MPcellphoneParty", 32 );
        break;
    }
    return;
}

int sub_5092(int iParam0)
{
    if (iParam0 == g_U558)
    {
        return 1;
    }
    return 0;
}

void sub_5370()
{
    char[16] cVar2;
    char[16] cVar6;

    SET_TEXT_RENDER_ID( g_U94._fU44 );
    SET_TEXT_TO_USE_TEXT_FILE_COLOURS( 0 );
    switch (g_U94._fU0)
    {
        case 1060:
        if (sub_5485( ref l_U2170 ))
        {
            sub_5547( ref l_U2175, 0 );
            sub_5655( 1093, ref l_U2175, ref l_U5, ref l_U43, ref l_U230, 1 );
        }
        break;
        case 1064:
        if ((l_U2163 >= 0) AND (l_U2163 < 32))
        {
            if (IS_NETWORK_PLAYER_ACTIVE( l_U2163 ))
            {
                if (COMPARE_STRING( ref l_U2139, GET_PLAYER_NAME( sub_8274( l_U2163 ) ) ))
                {
                    break;
                }
            }
        }
        l_U2112 = -1;
        case 1062:
        case 1063:
        if (l_U2112 != GET_NUMBER_OF_PLAYERS())
        {
            l_U2112 = GET_NUMBER_OF_PLAYERS();
            if ((l_U2112 <= 1) AND (NOT g_U94._fU1488))
            {
                l_U2111 = -1;
                g_U94._fU0 = 1063;
            }
            else
            {
                l_U2111 = -1;
                if ((l_U5._fU60 >= 0) AND (l_U5._fU60 < 32))
                {
                    if (g_U94._fU0 == 1062)
                    {
                        if (IS_NETWORK_PLAYER_ACTIVE( l_U5._fU60 ))
                        {
                            l_U2111 = l_U5._fU60;
                        }
                    }
                }
                g_U94._fU0 = 1062;
            }
            l_U2031 = 1;
        }
        break;
        case 1081:
        case 1082:
        if (sub_8512( ref l_U2168, ref l_U2169 ))
        {
            l_U2111 = l_U5._fU60;
            sub_3708( 1081 );
        }
        break;
        case 1093:
        case 1094:
        if (sub_5485( ref l_U2170 ))
        {
            l_U2111 = l_U5._fU60;
            sub_3708( 1093 );
        }
        break;
    }
    switch (g_U94._fU0)
    {
        case 1066:
        case 1064:
        if (l_U2166 != g_U94._fU632)
        {
            if ((l_U2166 != 2) AND (g_U94._fU632 != 3))
            {
                l_U2031 = 1;
            }
            l_U2166 = g_U94._fU632;
        }
        break;
    }
    if ((l_U2031) || (g_U94._fU92))
    {
        sub_8750();
    }
    if (sub_17432( ref l_U2167 ))
    {
        sub_5836( ref l_U5, ref l_U43, -1 );
        l_U2046._fU116 = 1678728908;
        l_U2046._fU128 = 1678728908;
    }
    switch (g_U94._fU0)
    {
        case 1002:
        sub_17756( 1, l_U2033, 1, 1 );
        if (g_U94._fU572)
        {
            sub_17828( 0, g_U484._fU0[17], 0.84500000, 0.25000000, 0.45000000, 0.20000000 );
        }
        sub_20004( ref l_U2046, "CP_NAV_EXIT", "CP_NAV_MENU", ref l_U2033 );
        sub_20992( ref l_U2046._fU0[3], ref l_U2033 );
        break;
        case 1066:
        sub_17756( 1, l_U2033, 1, 0 );
        switch (g_U94._fU632)
        {
            case 4:
            case 9:
            StrCopy( ref cVar2, "CP_NAV_BACK", 16 );
            StrCopy( ref cVar6, "BLANK", 16 );
            break;
            case 1:
            StrCopy( ref cVar2, "CP_NAV_HANG_UP", 16 );
            StrCopy( ref cVar6, "CP_ANSWER", 16 );
            break;
            case 3:
            case 2:
            StrCopy( ref cVar2, "CP_NAV_HANG_UP", 16 );
            StrCopy( ref cVar6, "BLANK", 16 );
            break;
            case 6:
            if (TIMERB() > 4000)
            {
                if (l_U2165)
                {
                    l_U2165 = 0;
                    STOP_MOBILE_PHONE_RINGING();
                    PLAY_SOUND_FRONTEND( l_U2164, "PHONE_ENGAGED_TONES" );
                    sub_8992( ref l_U5, 1, 0, 1 );
                    sub_9076( ref l_U5, ref l_U230, 0, ref g_U94._fU584, "", 1, 1, 0, 0, 0 );
                    sub_9076( ref l_U5, ref l_U230, 1, "CP_BUSY", "", 1, 0, 0, 0, 0 );
                    sub_9687( ref l_U5, ref l_U230, ref l_U43, 1, 1, 0 );
                }
            }
            StrCopy( ref cVar2, "CP_NAV_BACK", 16 );
            StrCopy( ref cVar6, "BLANK", 16 );
            break;
        }
        sub_22744( ref l_U5, ref l_U43, ref l_U2046, ref l_U2033, 0 );
        sub_20004( ref l_U2046, ref cVar2, ref cVar6, ref l_U2033 );
        sub_20992( ref l_U2046._fU0[3], ref l_U2033 );
        break;
        case 1081:
        sub_25638( ref l_U5, ref l_U43, ref l_U2046, ref l_U2033 );
        sub_20992( ref l_U2046._fU0[3], ref l_U2033 );
        break;
        case 1060:
        case 1062:
        case 1064:
        case 1077:
        case 1080:
        case 1083:
        case 1093:
        case 1086:
        sub_17756( 1, l_U2033, 1, 0 );
        sub_22744( ref l_U5, ref l_U43, ref l_U2046, ref l_U2033, 0 );
        switch (g_U94._fU0)
        {
            case 1080:
            StrCopy( ref cVar6, "BLANK", 16 );
            break;
            case 1093:
            StrCopy( ref cVar6, "CP_OPT_ACCEPT", 16 );
            break;
            case 1086:
            StrCopy( ref cVar6, "CP_NAV_VOTE", 16 );
            break;
            default:
            StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
            break;
        }
        sub_20004( ref l_U2046, "CP_NAV_BACK", ref cVar6, ref l_U2033 );
        sub_20992( ref l_U2046._fU0[3], ref l_U2033 );
        break;
        case 1063:
        case 1069:
        case 1070:
        case 1071:
        case 1088:
        case 1078:
        case 1079:
        case 1082:
        case 1084:
        case 1094:
        case 1065:
        case 1087:
        case 1099:
        case 1100:
        case 1092:
        sub_17756( 1, l_U2033, 1, 0 );
        sub_26207( ref l_U2046._fU0[0], ref l_U2033, ref l_U2099, ref l_U2119, 0, ref l_U2114, ref l_U2115, l_U2118 );
        sub_25159( ref l_U5, ref l_U2033, l_U5._fU60 );
        switch (g_U94._fU0)
        {
            case 1088:
            StrCopy( ref cVar6, "CP_NAV_LEAVE", 16 );
            break;
            case 1087:
            StrCopy( ref cVar6, "CP_NAV_EXIT", 16 );
            break;
            default:
            StrCopy( ref cVar6, "BLANK", 16 );
            break;
        }
        sub_20004( ref l_U2046, "CP_NAV_BACK", ref cVar6, ref l_U2033 );
        sub_20992( ref l_U2046._fU0[3], ref l_U2033 );
        break;
    }
    SET_TEXT_TO_USE_TEXT_FILE_COLOURS( 1 );
    return;
}

int sub_5485(unknown uParam0)
{
    if (g_U94._fU568 != (uParam0^))
    {
        (uParam0^) = g_U94._fU568;
        return 1;
    }
    return 0;
}

void sub_5547(unknown uParam0, boolean bParam1)
{
    StrCopy( (uParam0^), GET_STRING_FROM_TEXT_FILE( "CP_OPT_INVIT" ), 32 );
    ConcatString((uParam0^), " (", 32);
    if (bParam1)
    {
        ConcatString((uParam0^), 0, 32);
    }
    else
    {
        ConcatString((uParam0^), g_U94._fU568, 32);
    }
    ConcatString((uParam0^), ")", 32);
    return;
}

void sub_5655(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
{
    int I;

    for ( I = 0; I <= ((uParam4^) - 1); I++ )
    {
        if ((uParam4^)[I]._fU0 == iParam0)
        {
            if (bParam5)
            {
                StrCopy( ref (uParam4^)[I]._fU4, uParam1, 32 );
            }
            else
            {
                StrCopy( ref (uParam4^)[I]._fU48, uParam1, 16 );
            }
        }
    }
    for ( I = 0; I <= ((uParam3^) - 1); I++ )
    {
        if ((uParam3^)[I]._fU4 == iParam0)
        {
            if (bParam5)
            {
                StrCopy( ref (uParam3^)[I]._fU8, uParam1, 32 );
            }
            else
            {
                StrCopy( ref (uParam3^)[I]._fU52, uParam1, 16 );
            }
            sub_5836( uParam2, uParam3, I );
        }
    }
    return;
}

void sub_5836(int iParam0, unknown uParam1, int iParam2)
{
    int I;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    unknown uVar12;
    char[32] cVar13;

    iVar6 = 0;
    iVar7 = (uParam1^) - 1;
    if (iParam2 != -1)
    {
        iVar6 = iParam2;
        iVar7 = iParam2;
    }
    if ((g_U94._fU496) AND (g_U94._fU500))
    {
        fVar8 = 1.55000000;
        fVar9 = 1.40000000;
    }
    else
    {
        fVar8 = 1.90000000;
        fVar9 = 1.80000000;
    }
    fVar10 = (ref iParam0->_fU84->_fU4) - (ref iParam0->_fU84->_fU0);
    fVar11 = (ref iParam0->_fU92->_fU4) - (ref iParam0->_fU92->_fU0);
    for ( I = iVar6; I <= iVar7; I++ )
    {
        sub_5997( ref (uParam1^)[I] );
        if ((uParam1^)[I]._fU0)
        {
            if ((sub_6280( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU40, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48, fVar8, fVar8 )) > fVar10)
            {
                if ((sub_6280( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU40, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48, fVar9, fVar9 )) > fVar10)
                {
                    (uParam1^)[I]._fU92 = 1;
                    if ((uParam1^)[I]._fU40)
                    {
                        (uParam1^)[I]._fU96 = GET_LENGTH_OF_LITERAL_STRING( ref (uParam1^)[I]._fU8 );
                    }
                    else
                    {
                        (uParam1^)[I]._fU96 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL_INS_NUM( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
                    }
                    (uParam1^)[I]._fU100 = 0;
                    (uParam1^)[I]._fU104 = 4;
                    if ((uParam1^)[I]._fU40)
                    {
                        StrCopy( ref cVar13, GET_STRING_FROM_STRING( ref (uParam1^)[I]._fU8, 0, (uParam1^)[I]._fU104 ), 32 );
                        while ((sub_6280( ref cVar13, 1, 0, 0, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU104++;
                            StrCopy( ref cVar13, GET_STRING_FROM_STRING( ref (uParam1^)[I]._fU8, 0, (uParam1^)[I]._fU104 ), 32 );
                            sub_6781( "\n The following is the cutdown label ", ref cVar13 );
                        }
                    }
                    else
                    {
                        while ((sub_6856( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48, 0, (uParam1^)[I]._fU104, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU104++;
                            sub_7010( "\n Cutdown label end = ", (uParam1^)[I]._fU104 );
                        }
                    }
                    (uParam1^)[I]._fU104--;
                    if (I == iParam0->_fU44)
                    {
                        iParam0->_fU124 = (uParam1^)[I]._fU100;
                        iParam0->_fU128 = (uParam1^)[I]._fU104;
                        iParam0->_fU132 = 1;
                    }
                    sub_6781( "\n The following string is going to scroll ", ref (uParam1^)[I]._fU8 );
                    sub_7010( " starting at ", (uParam1^)[I]._fU100 );
                    sub_7010( " and ending at ", (uParam1^)[I]._fU104 );
                    sub_3101( "." );
                }
                else
                {
                    sub_6781( "\n The following string is using the RetryScale ", ref (uParam1^)[I]._fU8 );
                    (uParam1^)[I]._fU76._fU0 = fVar9;
                    (uParam1^)[I]._fU76._fU4 = fVar9;
                }
            }
            if ((sub_6280( ref (uParam1^)[I]._fU52, (uParam1^)[I]._fU68, 0, 0, fVar8, fVar8 )) > fVar11)
            {
                if ((sub_6280( ref (uParam1^)[I]._fU52, (uParam1^)[I]._fU68, 0, 0, fVar9, fVar9 )) > fVar11)
                {
                    (uParam1^)[I]._fU108 = 1;
                    if ((uParam1^)[I]._fU68)
                    {
                        (uParam1^)[I]._fU112 = GET_LENGTH_OF_LITERAL_STRING( ref (uParam1^)[I]._fU52 );
                    }
                    else
                    {
                        (uParam1^)[I]._fU112 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( ref (uParam1^)[I]._fU52 );
                    }
                    (uParam1^)[I]._fU116 = 0;
                    (uParam1^)[I]._fU120 = 4;
                    if ((uParam1^)[I]._fU68)
                    {
                        StrCopy( ref cVar13, GET_STRING_FROM_STRING( ref (uParam1^)[I]._fU52, 0, (uParam1^)[I]._fU120 ), 32 );
                        while ((sub_6280( ref cVar13, 1, 0, 0, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU120++;
                            StrCopy( ref cVar13, GET_STRING_FROM_STRING( ref (uParam1^)[I]._fU52, 0, (uParam1^)[I]._fU120 ), 32 );
                            sub_6781( "\n The following is the cutdown label ", ref cVar13 );
                        }
                    }
                    else
                    {
                        while ((sub_6856( ref (uParam1^)[I]._fU52, 0, 0, 0, (uParam1^)[I]._fU120, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU120++;
                            sub_7010( "\n Cutdown label end = ", (uParam1^)[I]._fU120 );
                        }
                    }
                    (uParam1^)[I]._fU120--;
                    if (I == iParam0->_fU44)
                    {
                        iParam0->_fU140 = (uParam1^)[I]._fU116;
                        iParam0->_fU144 = (uParam1^)[I]._fU120;
                        iParam0->_fU148 = 1;
                    }
                    sub_6781( "\n The following string is going to scroll ", ref (uParam1^)[I]._fU52 );
                    sub_7010( " starting at ", (uParam1^)[I]._fU116 );
                    sub_7010( " and ending at ", (uParam1^)[I]._fU120 );
                    sub_3101( "." );
                }
                else
                {
                    sub_6781( "\n The following string is using the RetryScale ", ref (uParam1^)[I]._fU52 );
                    (uParam1^)[I]._fU84._fU0 = fVar9;
                    (uParam1^)[I]._fU84._fU4 = fVar9;
                }
            }
        }
    }
    return;
}

void sub_5997(int iParam0)
{
    iParam0->_fU92 = 0;
    iParam0->_fU96 = 0;
    iParam0->_fU100 = 0;
    iParam0->_fU104 = 0;
    iParam0->_fU108 = 0;
    iParam0->_fU112 = 0;
    iParam0->_fU116 = 0;
    iParam0->_fU120 = 0;
    if ((g_U94._fU496) AND (g_U94._fU500))
    {
        ref iParam0->_fU76->_fU0 = 1.55000000;
        ref iParam0->_fU76->_fU4 = 1.55000000;
        ref iParam0->_fU84->_fU0 = 1.55000000;
        ref iParam0->_fU84->_fU4 = 1.55000000;
    }
    else
    {
        ref iParam0->_fU76->_fU0 = 1.90000000;
        ref iParam0->_fU76->_fU4 = 1.90000000;
        ref iParam0->_fU84->_fU0 = 1.90000000;
        ref iParam0->_fU84->_fU4 = 1.90000000;
    }
    return;
}

void sub_6280(unknown uParam0, boolean bParam1, boolean bParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    SET_TEXT_FONT( 0 );
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_FONT( 2 );
    }
    SET_TEXT_SCALE( uParam4, uParam5 * 0.65000000 );
    if (bParam1)
    {
        return GET_STRING_WIDTH_WITH_STRING( "STRING", uParam0 );
    }
    else if (bParam2)
    {
        return GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam3 );
    }
    return GET_STRING_WIDTH( uParam0 );
}

void sub_6781(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6856(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SET_TEXT_FONT( 0 );
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_FONT( 2 );
    }
    SET_TEXT_SCALE( uParam5, uParam6 * 0.65000000 );
    return GET_WIDTH_OF_SUBSTRING_GIVEN_TEXT_LABEL( uParam0, uParam1, uParam2, uParam3, uParam4 );
}

void sub_7010(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8274(unknown uParam0)
{
    return CONVERT_INT_TO_PLAYERINDEX( uParam0 );
}

int sub_8512(unknown uParam0, unknown uParam1)
{
    (uParam0^) = NETWORK_GET_FRIEND_COUNT();
    if ((uParam0^) != (uParam1^))
    {
        (uParam1^) = (uParam0^);
        return 1;
    }
    return 0;
}

void sub_8750()
{
    int I;
    unknown uVar3;
    char[16] cVar4;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    g_U94._fU528 = 0;
    switch (g_U94._fU0)
    {
        case 1060:
        sub_8992( ref l_U5, 1, l_U2111, 0 );
        sub_9076( ref l_U5, ref l_U230, 1062, "CP_OPT_PBOOK", "", 1, 0, 0, 0, 0 );
        sub_9076( ref l_U5, ref l_U230, 1088, "CP_OPT_LEAVE", "", 1, 0, 0, 0, 0 );
        sub_9076( ref l_U5, ref l_U230, 1077, "CP_NET_GINFO", "", 1, 0, 0, 0, 0 );
        sub_9076( ref l_U5, ref l_U230, 1048, "CP_OPT_NETWORK", "", 1, 0, 0, 0, 0 );
        if (((NETWORK_IS_SESSION_INVITABLE()) || (# -NULL-0xc27c84())) || (# -NULL-0xc27bfa()))
        {
            sub_9076( ref l_U5, ref l_U230, 1081, "CP_OPT_FRIENDS", "", 1, 0, 0, 0, 0 );
        }
        if ((NOT (# -NULL-0xc27c84())) AND (NOT (# -NULL-0xc27bfa())))
        {
            sub_5547( ref l_U2175, 0 );
            sub_9076( ref l_U5, ref l_U230, 1093, ref l_U2175, "", 1, 1, 0, 0, 0 );
        }
        if ((NOT NETWORK_IS_GAME_RANKED()) AND (g_U94._fU664))
        {
            sub_9076( ref l_U5, ref l_U230, 1086, "CP_OPT_GVOTE", "", 1, 0, 0, 0, 0 );
        }
        sub_9687( ref l_U5, ref l_U230, ref l_U43, 1, 1, 0 );
        l_U2112 = -1;
        break;
        case 1062:
        l_U2112 = GET_NUMBER_OF_PLAYERS();
        if ((l_U2112 <= 1) AND (NOT g_U94._fU1488))
        {
            ;
        }
        else
        {
            sub_8992( ref l_U5, 1, l_U2111, 0 );
            for ( I = 0; I <= 31; I++ )
            {
                if ((I != GET_PLAYER_ID()) AND (IS_NETWORK_PLAYER_ACTIVE( I )))
                {
                    sub_9076( ref l_U5, ref l_U230, I, GET_PLAYER_NAME( sub_8274( I ) ), "", 1, 1, 0, 0, 0 );
                }
            }
            if (g_U94._fU1488)
            {
                sub_9076( ref l_U5, ref l_U230, 100, "CP_ZIT", "", 1, 0, 0, 0, 0 );
            }
            sub_9687( ref l_U5, ref l_U230, ref l_U43, 1, 1, 0 );
        }
        break;
        case 1099:
        SETTIMERA( 0 );
        l_U2183 = GET_AUDIBLE_MUSIC_TRACK_TEXT_ID();
        StrCopy( ref l_U2119[0], "CP_ZIT_CONNECT", 16 );
        StrCopy( ref l_U2119[1], "", 16 );
        StrCopy( ref l_U2119[2], "", 16 );
        sub_11698( ref l_U2046._fU0[0], ref l_U2119, 0, ref l_U2118, ref l_U2116, ref l_U2114, ref l_U2115, ref l_U5._fU44, ref l_U5._fU60, ref l_U5._fU56, ref l_U5._fU52 );
        break;
        case 1100:
        if (IS_GAME_IN_CONTROL_OF_MUSIC())
        {
            l_U2183 = GET_AUDIBLE_MUSIC_TRACK_TEXT_ID();
            StrCopy( ref l_U2119[0], "T182_", 16 );
            ConcatString(ref l_U2119[0], l_U2183, 16);
            if (l_U2183 > 1)
            {
                if (DOES_TEXT_LABEL_EXIST( ref l_U2119[0] ))
                {
                    REPORT_TAGGED_RADIO_TRACK( l_U2183 );
                }
                else
                {
                    sub_7010( "\n setting Zit! ID to 1 as no text exists for ", l_U2183 );
                    sub_3101( "\n" );
                    l_U2183 = 1;
                }
            }
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 290, 295, ref l_U2183 );
        }
        StrCopy( ref l_U2119[0], "T182_", 16 );
        ConcatString(ref l_U2119[0], l_U2183, 16);
        StrCopy( ref l_U2119[1], "", 16 );
        StrCopy( ref l_U2119[2], "", 16 );
        sub_11698( ref l_U2046._fU0[0], ref l_U2119, 0, ref l_U2118, ref l_U2116, ref l_U2114, ref l_U2115, ref l_U5._fU44, ref l_U5._fU60, ref l_U5._fU56, ref l_U5._fU52 );
        break;
        case 1063:
        StrCopy( ref l_U2119[0], "EMPTY_PHONEBOOK", 16 );
        StrCopy( ref l_U2119[1], "", 16 );
        StrCopy( ref l_U2119[2], "", 16 );
        sub_11698( ref l_U2046._fU0[0], ref l_U2119, 0, ref l_U2118, ref l_U2116, ref l_U2114, ref l_U2115, ref l_U5._fU44, ref l_U5._fU60, ref l_U5._fU56, ref l_U5._fU52 );
        break;
        case 1065:
        StrCopy( ref l_U2119[0], "CP_KICK_MSG", 16 );
        StrCopy( ref l_U2119[1], "", 16 );
        StrCopy( ref l_U2119[2], "", 16 );
        sub_11698( ref l_U2046._fU0[0], ref l_U2119, 0, ref l_U2118, ref l_U2116, ref l_U2114, ref l_U2115, ref l_U5._fU44, ref l_U5._fU60, ref l_U5._fU56, ref l_U5._fU52 );
        break;
        case 1064:
        sub_8992( ref l_U5, 1, l_U2111, 0 );
        if (g_U94._fU632 != 9)
        {
            sub_9076( ref l_U5, ref l_U230, 0, "CP_NET_CALL", "", 1, 0, 0, 0, 0 );
        }
        else
        {
            sub_9076( ref l_U5, ref l_U230, 3, "CP_NAV_HANG_UP", "", 1, 0, 0, 0, 0 );
        }
        if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
        {
            sub_9076( ref l_U5, ref l_U230, 1, "CP_NET_GAMERC", "", 1, 0, 0, 0, 0 );
        }
        if (g_U94._fU636 != l_U2163)
        {
            if (NETWORK_IS_PLAYER_MUTED_BY_ME( l_U2163 ))
            {
                sub_9076( ref l_U5, ref l_U230, 5, "CP_UNMUTE", "", 1, 0, 0, 0, 0 );
            }
            else
            {
                sub_9076( ref l_U5, ref l_U230, 5, "CP_MUTE", "", 1, 0, 0, 0, 0 );
            }
        }
        if (NOT NETWORK_IS_GAME_RANKED())
        {
            if (GET_NUMBER_OF_PLAYERS() > 2)
            {
                if (ProtectedGet(g_U94._fU668) == l_U2163)
                {
                    sub_9076( ref l_U5, ref l_U230, 4, "CP_UNKICKPLAYER", "", 1, 0, 0, 0, 0 );
                }
                else
                {
                    sub_9076( ref l_U5, ref l_U230, 2, "CP_KICKPLAYER", "", 1, 0, 0, 0, 0 );
                }
            }
            else
            {
                ProtectedSet(g_U94._fU668, -1);
            }
        }
        sub_9687( ref l_U5, ref l_U230, ref l_U43, 1, 1, 0 );
        break;
        case 1069:
        case 1070:
        case 1071:
        switch (g_U94._fU0)
        {
            case 1069:
            if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
            {
                StrCopy( ref l_U2119[0], "CP_TP_HEADSET", 16 );
            }
            else
            {
                StrCopy( ref l_U2119[0], "CP_TP_HEADPS3", 16 );
            }
            break;
            case 1070:
            if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
            {
                StrCopy( ref l_U2119[0], "CP_OP_HEADSET", 16 );
            }
            else
            {
                StrCopy( ref l_U2119[0], "CP_OP_HEADPS3", 16 );
            }
            break;
            case 1071:
            if ((NETWORK_IS_PLAYER_BLOCKED_BY_ME( l_U2163 )) || (NETWORK_IS_PLAYER_MUTED_BY_ME( l_U2163 )))
            {
                StrCopy( ref l_U2119[0], "CP_NOT_GOT_PRI2", 16 );
            }
            else
            {
                StrCopy( ref l_U2119[0], "CP_NOT_GOT_PRIV", 16 );
            }
            break;
        }
        StrCopy( ref l_U2119[1], "", 16 );
        StrCopy( ref l_U2119[2], "", 16 );
        sub_11698( ref l_U2046._fU0[0], ref l_U2119, 0, ref l_U2118, ref l_U2116, ref l_U2114, ref l_U2115, ref l_U5._fU44, ref l_U5._fU60, ref l_U5._fU56, ref l_U5._fU52 );
        break;
        case 1066:
        SETTIMERB( 0 );
        switch (g_U94._fU632)
        {
            case 9:
            STOP_MOBILE_PHONE_RINGING();
            NETWORK_SET_TALKER_FOCUS( g_U94._fU636 );
            sub_8992( ref l_U5, 1, 0, 1 );
            sub_9076( ref l_U5, ref l_U230, 0, ref g_U94._fU584, "", 1, 1, 0, 0, 0 );
            sub_9687( ref l_U5, ref l_U230, ref l_U43, 1, 1, 0 );
            break;
            case 1:
            switch (g_U94._fU112)
            {
                case 0:
                case 1:
                case 4:
                START_CUSTOM_MOBILE_PHONE_RINGING( g_U94._fU108 );
                break;
            }
            sub_8992( ref l_U5, 1, 0, 1 );
            sub_9076( ref l_U5, ref l_U230, 0, ref g_U94._fU584, "", 1, 1, 0, 0, 0 );
            sub_9076( ref l_U5, ref l_U230, 1, "CP_INFO_CALLING", "", 1, 0, 0, 0, 0 );
            sub_9687( ref l_U5, ref l_U230, ref l_U43, 1, 1, 0 );
            break;
            case 2:
            case 3:
            START_MOBILE_PHONE_CALLING();
            sub_8992( ref l_U5, 1, 1, 1 );
            sub_9076( ref l_U5, ref l_U230, 0, "CP_INFO_CALLING", "", 1, 0, 0, 0, 0 );
            sub_9076( ref l_U5, ref l_U230, 1, ref g_U94._fU584, "", 1, 1, 0, 0, 0 );
            sub_9687( ref l_U5, ref l_U230, ref l_U43, 1, 1, 0 );
            break;
            case 4:
            STOP_MOBILE_PHONE_RINGING();
            sub_8992( ref l_U5, 1, 0, 1 );
            sub_9076( ref l_U5, ref l_U230, 0, ref g_U94._fU584, "", 1, 1, 0, 0, 0 );
            sub_9076( ref l_U5, ref l_U230, 1, "CP_INFO_DISCON", "", 1, 0, 0, 0, 0 );
            sub_9687( ref l_U5, ref l_U230, ref l_U43, 1, 1, 0 );
            break;
            case 6:
            STOP_MOBILE_PHONE_RINGING();
            l_U2165 = 1;
            l_U2164 = GET_SOUND_ID();
            sub_8992( ref l_U5, 1, 1, 1 );
            sub_9076( ref l_U5, ref l_U230, 0, "CP_INFO_CALLING", "", 1, 0, 0, 0, 0 );
            sub_9076( ref l_U5, ref l_U230, 1, ref g_U94._fU584, "", 1, 1, 0, 0, 0 );
            sub_9687( ref l_U5, ref l_U230, ref l_U43, 1, 1, 0 );
            break;
        }
        break;
        case 1088:
        StrCopy( ref l_U2119[0], "CP_INFO_LEAVE", 16 );
        StrCopy( ref l_U2119[1], "", 16 );
        StrCopy( ref l_U2119[2], "", 16 );
        sub_11698( ref l_U2046._fU0[0], ref l_U2119, 0, ref l_U2118, ref l_U2116, ref l_U2114, ref l_U2115, ref l_U5._fU44, ref l_U5._fU60, ref l_U5._fU56, ref l_U5._fU52 );
        break;
        case 1077:
        sub_8992( ref l_U5, 1, l_U2111, 0 );
        StrCopy( ref cVar4, "NTGT_", 16 );
        sub_14901( ref cVar4, "NTGT", NETWORK_GET_GAME_MODE(), -1, -1 );
        sub_9076( ref l_U5, ref l_U230, 1078, ref cVar4, "", 1, 0, 0, 0, 0 );
        if (NOT (COMPARE_STRING( ref g_U94._fU640, "" )))
        {
            sub_9076( ref l_U5, ref l_U230, 1079, "CP_NET_CBRIEF", "", 1, 0, 0, 0, 0 );
        }
        if (NETWORK_GET_GAME_MODE() != 25)
        {
            sub_9076( ref l_U5, ref l_U230, 1080, "CP_NET_OPTION", "", 1, 0, 0, 0, 0 );
        }
        sub_9687( ref l_U5, ref l_U230, ref l_U43, 1, 1, 0 );
        break;
        case 1078:
        sub_14901( ref l_U2119[0], "CP_MAX", NETWORK_GET_GAME_MODE(), -1, -1 );
        sub_14901( ref l_U2119[1], "CP_DESCRP", NETWORK_GET_GAME_MODE(), -1, -1 );
        StrCopy( ref l_U2119[2], "", 16 );
        sub_11698( ref l_U2046._fU0[0], ref l_U2119, 0, ref l_U2118, ref l_U2116, ref l_U2114, ref l_U2115, ref l_U5._fU44, ref l_U5._fU60, ref l_U5._fU56, ref l_U5._fU52 );
        break;
        case 1079:
        l_U2119[0] = {g_U94._fU640};
        StrCopy( ref l_U2119[1], "", 16 );
        StrCopy( ref l_U2119[2], "", 16 );
        sub_11698( ref l_U2046._fU0[0], ref l_U2119, 0, ref l_U2118, ref l_U2116, ref l_U2114, ref l_U2115, ref l_U5._fU44, ref l_U5._fU60, ref l_U5._fU56, ref l_U5._fU52 );
        break;
        case 1080:
        sub_8992( ref l_U5, 2, l_U2111, 0 );
        for ( I = 0; I <= (g_U94._fU676 - 1); I++ )
        {
            if (NOT (COMPARE_STRING( ref g_U94._fU676[I], "" )))
            {
                sub_9076( ref l_U5, ref l_U230, 1, ref g_U94._fU676[I], ref g_U94._fU1080[I], 1, 0, 0, 0, 0 );
            }
            else
            {
                I = g_U94._fU676;
            }
        }
        sub_9687( ref l_U5, ref l_U230, ref l_U43, 1, 1, 0 );
        break;
        case 1081:
        l_U2168 = NETWORK_GET_FRIEND_COUNT();
        l_U2169 = l_U2168;
        if (l_U2168 != 0)
        {
            sub_15604( ref l_U5, ref l_U43, ref l_U230, l_U2111, 0 );
            break;
        }
        case 1082:
        g_U94._fU0 = 1082;
        StrCopy( ref l_U2119[0], "CP_NO_FRIENDS", 16 );
        StrCopy( ref l_U2119[1], "", 16 );
        StrCopy( ref l_U2119[2], "", 16 );
        sub_11698( ref l_U2046._fU0[0], ref l_U2119, 0, ref l_U2118, ref l_U2116, ref l_U2114, ref l_U2115, ref l_U5._fU44, ref l_U5._fU60, ref l_U5._fU56, ref l_U5._fU52 );
        break;
        case 1083:
        sub_8992( ref l_U5, 1, l_U2111, 0 );
        if (NETWORK_IS_SESSION_INVITABLE())
        {
            sub_9076( ref l_U5, ref l_U230, 0, "CP_OPT_INVITE", "", 1, 0, 0, 0, 0 );
        }
        sub_9076( ref l_U5, ref l_U230, 1, "CP_NET_GAMERC", "", 1, 0, 0, 0, 0 );
        sub_9687( ref l_U5, ref l_U230, ref l_U43, 1, 1, 0 );
        break;
        case 1084:
        l_U2119[0] = {l_U2171};
        StrCopy( ref l_U2119[1], "", 16 );
        StrCopy( ref l_U2119[2], "", 16 );
        sub_11698( ref l_U2046._fU0[0], ref l_U2119, 0, ref l_U2118, ref l_U2116, ref l_U2114, ref l_U2115, ref l_U5._fU44, ref l_U5._fU60, ref l_U5._fU56, ref l_U5._fU52 );
        break;
        case 1093:
        l_U2170 = g_U94._fU568;
        if (g_U94._fU568 != 0)
        {
            sub_16275( ref l_U5, ref l_U43, ref l_U230, l_U2111 );
            break;
        }
        case 1094:
        g_U94._fU0 = 1094;
        StrCopy( ref l_U2119[0], "NO_INVITES", 16 );
        StrCopy( ref l_U2119[1], "", 16 );
        StrCopy( ref l_U2119[2], "", 16 );
        l_U2117 = 0;
        sub_11698( ref l_U2046._fU0[0], ref l_U2119, l_U2117, ref l_U2118, ref l_U2116, ref l_U2114, ref l_U2115, ref l_U5._fU44, ref l_U5._fU60, ref l_U5._fU56, ref l_U5._fU52 );
        break;
        case 1086:
        sub_16537( ref l_U5, ref l_U43, ref l_U230, l_U2111, NETWORK_IS_GAME_RANKED(), 1, 1 );
        break;
        case 1087:
        StrCopy( ref l_U2119[0], "CP_INFO_VOTE", 16 );
        StrCopy( ref l_U2119[1], "NTGT_", 16 );
        ConcatString(ref l_U2119[1], ProtectedGet(g_U94._fU660), 16);
        StrCopy( ref l_U2119[2], "", 16 );
        sub_11698( ref l_U2046._fU0[0], ref l_U2119, 0, ref l_U2118, ref l_U2116, ref l_U2114, ref l_U2115, ref l_U5._fU44, ref l_U5._fU60, ref l_U5._fU56, ref l_U5._fU52 );
        break;
        case 1092:
        if (# -NULL-0xc27bfa())
        {
            StrCopy( ref l_U2119[0], "CP_MUTE_WARN_PC", 16 );
        }
        else
        {
            StrCopy( ref l_U2119[0], "CP_MUTE_WARN", 16 );
        }
        StrCopy( ref l_U2119[1], "", 16 );
        StrCopy( ref l_U2119[2], "", 16 );
        sub_11698( ref l_U2046._fU0[0], ref l_U2119, 0, ref l_U2118, ref l_U2116, ref l_U2114, ref l_U2115, ref l_U5._fU44, ref l_U5._fU60, ref l_U5._fU56, ref l_U5._fU52 );
        break;
    }
    l_U2031 = 0;
    g_U94._fU92 = 0;
    return;
}

void sub_8992(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    iParam0->_fU4 = 0;
    iParam0->_fU0 = uParam1;
    iParam0->_fU12 = 0;
    iParam0->_fU8 = uParam2;
    iParam0->_fU64 = uParam3;
    return;
}

void sub_9076(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    if (iParam0->_fU4 < (uParam1^))
    {
        if (NOT iParam0->_fU12)
        {
            if (iParam2 == iParam0->_fU8)
            {
                iParam0->_fU8 = iParam0->_fU4;
                iParam0->_fU12 = 1;
            }
        }
        (uParam1^)[iParam0->_fU4]._fU0 = iParam2;
        StrCopy( ref (uParam1^)[iParam0->_fU4]._fU4, uParam3, 32 );
        (uParam1^)[iParam0->_fU4]._fU36 = uParam6;
        (uParam1^)[iParam0->_fU4]._fU40 = uParam8;
        (uParam1^)[iParam0->_fU4]._fU44 = uParam9;
        StrCopy( ref (uParam1^)[iParam0->_fU4]._fU48, uParam4, 16 );
        (uParam1^)[iParam0->_fU4]._fU64 = uParam7;
        (uParam1^)[iParam0->_fU4]._fU68 = uParam5;
        iParam0->_fU4++;
    }
    else
    {
        sub_3101( "\n SIMPLE OPTIONS ARRAY TO SMALL TO ADD " );
        sub_3101( uParam3 );
        sub_3101( " TO THE PHONE OPTIONS." );
    }
    return;
}

void sub_9687(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int I;
    int iVar9;
    float fVar10;
    float fVar11;

    fVar10 = 0.49500000;
    fVar11 = 0.93000000;
    g_U94._fU492 = 1000 / iParam0->_fU4;
    sub_9744( ref g_U94._fU492, 100, 500 );
    if (g_U94._fU500)
    {
        iVar9 = 6;
    }
    else
    {
        iVar9 = 4;
    }
    if (iParam0->_fU0 == 2)
    {
        iVar9 = iVar9 / 2;
    }
    if (((iParam0->_fU4 < iVar9) || (NOT iParam0->_fU12)) || ((iParam0->_fU12) AND (iParam0->_fU8 < iVar9)))
    {
        for ( I = 0; I <= (iVar9 - 1); I++ )
        {
            iParam0->_fU16[I] = I;
        }
        if (iParam0->_fU12)
        {
            iParam0->_fU44 = iParam0->_fU8;
        }
        else
        {
            iParam0->_fU44 = 0;
        }
    }
    else if ((iParam0->_fU4 - iParam0->_fU8) < iVar9)
    {
        sub_7010( "\n menuStruct.total is ", iParam0->_fU4 );
        sub_7010( "\n menuStruct.memory is ", iParam0->_fU8 );
        for ( I = 0; I <= (iVar9 - 1); I++ )
        {
            iParam0->_fU16[I] = iParam0->_fU4 - (iVar9 - I);
            if (I == (iVar9 - (iParam0->_fU4 - iParam0->_fU8)))
            {
                iParam0->_fU44 = I;
            }
        }
    }
    else
    {
        iParam0->_fU16[0] = iParam0->_fU8;
        iParam0->_fU44 = 0;
        for ( I = 1; I <= (iVar9 - 1); I++ )
        {
            iParam0->_fU16[I] = iParam0->_fU16[0] + I;
            if (iParam0->_fU16[I] >= iParam0->_fU4)
            {
                iParam0->_fU16[I] -= iParam0->_fU4;
            }
        }
    }
    if (iParam0->_fU4 < iVar9)
    {
        iParam0->_fU48 = iParam0->_fU4;
        iParam0->_fU52 = 0;
        iVar9 = iParam0->_fU4;
    }
    else
    {
        iParam0->_fU48 = iVar9;
        iParam0->_fU52 = 1;
        if (g_U94._fU40 == 2)
        {
            iParam0->_fU56 = 0.72000000 / (TO_FLOAT( iParam0->_fU4 ));
        }
        else
        {
            iParam0->_fU56 = 0.75000000 / (TO_FLOAT( iParam0->_fU4 ));
        }
    }
    for ( I = 0; I <= 5; I++ )
    {
        sub_10462( ref (uParam2^)[I] );
    }
    for ( I = 0; I <= (iVar9 - 1); I++ )
    {
        sub_10537( ref (uParam1^)[iParam0->_fU16[I]], ref (uParam2^)[I] );
    }
    iParam0->_fU60 = (uParam2^)[iParam0->_fU44]._fU4;
    if (g_U94._fU40 != 2)
    {
        if (iParam0->_fU52)
        {
            fVar10 = 0.47500000;
            fVar11 = 0.95000000;
        }
        else
        {
            fVar10 = 0.50000000;
            fVar11 = 1.00000000;
        }
    }
    if (g_U94._fU500)
    {
        if (iParam0->_fU0 == 1)
        {
            sub_1574( iParam0 + 68, fVar10, 0.19000000 );
            if (g_U94._fU40 == 2)
            {
                sub_1574( iParam0 + 76, fVar11, 0.12000000 );
            }
            else
            {
                sub_1574( iParam0 + 76, fVar11, 0.75000000 / 6 );
            }
            iParam0->_fU100 = -0.04500000;
        }
        else
        {
            sub_1574( iParam0 + 68, fVar10, 0.25000000 );
            if (g_U94._fU40 == 2)
            {
                sub_1574( iParam0 + 76, fVar11, 0.24000000 );
            }
            else
            {
                sub_1574( iParam0 + 76, fVar11, 0.75000000 / 3 );
            }
            iParam0->_fU100 = -0.09000000;
            iParam0->_fU104 = 0.01000000;
        }
    }
    else if (iParam0->_fU0 == 1)
    {
        sub_1574( iParam0 + 68, fVar10, 0.22000000 );
        if (g_U94._fU40 == 2)
        {
            sub_1574( iParam0 + 76, fVar11, 0.18000000 );
        }
        else
        {
            sub_1574( iParam0 + 76, fVar11, 0.75000000 / 4 );
        }
        iParam0->_fU100 = -0.05500000;
    }
    else
    {
        sub_1574( iParam0 + 68, fVar10, 0.31000000 );
        if (g_U94._fU40 == 2)
        {
            sub_1574( iParam0 + 76, fVar11, 0.36000000 );
        }
        else
        {
            sub_1574( iParam0 + 76, fVar11, 0.75000000 / 2 );
        }
        iParam0->_fU100 = -0.14500000;
        iParam0->_fU104 = 0.03500000;
    }
    ref iParam0->_fU84->_fU0 = 0.05000000 + uParam5;
    ref iParam0->_fU84->_fU4 = 0.95000000;
    ref iParam0->_fU92->_fU0 = 0.05000000 + uParam5;
    ref iParam0->_fU92->_fU4 = 0.95000000;
    iParam0->_fU120 = uParam3;
    iParam0->_fU136 = uParam4;
    iParam0->_fU132 = 1;
    iParam0->_fU148 = 1;
    iParam0->_fU108 = -5;
    iParam0->_fU112 = -5;
    iParam0->_fU116 = -5;
    sub_5836( iParam0, uParam2, -1 );
    return;
}

int sub_9744(unknown uParam0, int iParam1, int iParam2)
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

void sub_10462(int iParam0)
{
    iParam0->_fU0 = 0;
    return;
}

void sub_10537(int iParam0, int iParam1)
{
    iParam1->_fU4 = iParam0->_fU0;
    iParam1->_fU8 = {iParam0->_fU4};
    iParam1->_fU40 = iParam0->_fU36;
    iParam1->_fU44 = iParam0->_fU40;
    iParam1->_fU48 = iParam0->_fU44;
    iParam1->_fU52 = {iParam0->_fU48};
    iParam1->_fU68 = iParam0->_fU64;
    iParam1->_fU72 = iParam0->_fU68;
    iParam1->_fU0 = 1;
    return;
}

void sub_11698(unknown uParam0, unknown uParam1, boolean bParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    int iVar17;

    if (g_U94._fU500)
    {
        uVar13._fU0 = 0.08000000;
        uVar13._fU4 = 0.10000000;
        uVar15._fU0 = 0.08000000;
        uVar15._fU4 = 0.92000000;
        iVar17 = 6;
    }
    else if (g_U94._fU40 == 2)
    {
        uVar13._fU0 = 0.10000000;
        uVar15._fU0 = 0.10000000;
    }
    else
    {
        uVar13._fU0 = 0.05000000;
        uVar15._fU0 = 0.05000000;
    }
    uVar13._fU4 = 0.10000000;
    uVar15._fU4 = 0.90000000;
    iVar17 = 5;;
    sub_11888( 0, 7, uParam0, "", uVar13._fU0, uVar13._fU4, uVar15._fU0, uVar15._fU4, 0, 0, 0, 0, 0, 1 );
    (uParam4^) = GET_NUMBER_LINES_WITH_SUBSTRINGS( uVar13._fU0, uVar13._fU4, ref (uParam1^)[0], ref (uParam1^)[1], ref (uParam1^)[2] );
    (uParam5^) = 0;
    (uParam7^) = 0;
    (uParam8^) = 0;
    if (bParam2)
    {
        g_U94._fU528 = 1;
        (uParam3^) = (uParam4^) + iVar17;
    }
    else
    {
        (uParam3^) = (uParam4^);
    }
    if ((uParam3^) <= iVar17)
    {
        (uParam6^) = (uParam4^) - 1;
        (uParam10^) = 0;
    }
    else
    {
        (uParam6^) = iVar17 - 1;
        (uParam10^) = 1;
        (uParam9^) = 0.72000000 / ((uParam3^) - (iVar17 - 1));
    }
    return;
}

void sub_11888(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, float fParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, int iParam13)
{
    float fVar16;
    float fVar17;

    fVar16 = ref iParam2->_fU0->_fU0;
    fVar17 = ref iParam2->_fU0->_fU4;
    if ((IS_JAPANESE_VERSION()) AND (iParam13 == 1))
    {
        SET_TEXT_FONT( 2 );
    }
    else
    {
        SET_TEXT_FONT( 0 );
    }
    switch (uParam0)
    {
        case 0:
        if (sub_11983( uParam3 ))
        {
            fVar16 *= 0.80000000;
            fVar17 *= 0.80000000;
        }
        SET_TEXT_SCALE( fVar16, fVar17 * 0.65000000 );
        fParam5 *= 0.65000000;
        break;
        case 1:
        SET_TEXT_SCALE( ref iParam2->_fU0->_fU0, (ref iParam2->_fU0->_fU4) * 0.35000000 );
        fParam5 *= 0.35000000;
        break;
    }
    switch (uParam8)
    {
        case 1:
        SET_TEXT_RIGHT_JUSTIFY( 1 );
        break;
        case 2:
        SET_TEXT_CENTRE( 1 );
        break;
    }
    SET_TEXT_WRAP( uParam6, uParam7 );
    SET_TEXT_COLOUR( sub_12219( iParam2 + 8, 0 ), sub_12219( iParam2 + 8, 1 ), sub_12219( iParam2 + 8, 2 ), sub_12219( iParam2 + 8, 3 ) );
    SET_TEXT_DROPSHADOW( uParam12, 0, 0, 0, 255 );
    switch (uParam1)
    {
        case 2:
        case 1: SET_TEXT_LINE_DISPLAY( 0, 0 );
        case 0:
        DISPLAY_TEXT( uParam4, fParam5, uParam3 );
        break;
        case 4:
        SET_TEXT_LINE_DISPLAY( uParam9, uParam10 );
        DISPLAY_TEXT( uParam4, fParam5, uParam3 );
        break;
        case 5:
        SET_TEXT_LINE_DISPLAY( 0, 0 );
        SET_TEXT_USE_UNDERSCORE( 1 );
        DISPLAY_TEXT_WITH_LITERAL_STRING( uParam4, fParam5, "STRING", uParam3 );
        SET_TEXT_USE_UNDERSCORE( 0 );
        break;
        case 6:
        DISPLAY_TEXT_WITH_NUMBER( uParam4, fParam5, uParam3, uParam11 );
        break;
    }
    return;
}

int sub_11983(unknown uParam0)
{
    if ((GET_LENGTH_OF_LITERAL_STRING( uParam0 )) >= 6)
    {
        return COMPARE_STRING( GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( uParam0, 6 ), "TM_82_" );
    }
    return 0;
}

void sub_12219(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( (uParam0^), 0, 7 );
        case 1: return GET_BITS_IN_RANGE( (uParam0^), 8, 15 );
        case 2: return GET_BITS_IN_RANGE( (uParam0^), 16, 23 );
    }
    return GET_BITS_IN_RANGE( (uParam0^), 24, 31 );
}

void sub_14901(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_15604(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int I;
    char[32] cVar8;
    float fVar16;

    fVar16 = 0.00000000;
    if (NOT (# -NULL-0xc27c84()))
    {
        fVar16 = 0.15000000;
    }
    sub_8992( uParam0, 1, uParam3, 0 );
    if ((uParam4) AND ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa())))
    {
        sub_9076( uParam0, uParam2, -2, "CP_MARK_FRIEND", "", 0, 0, 0, 0, 0 );
    }
    for ( I = 0; I <= (NETWORK_GET_FRIEND_COUNT() - 1); I++ )
    {
        StrCopy( ref cVar8, NETWORK_GET_FRIEND_NAME( I ), 32 );
        sub_9076( uParam0, uParam2, GET_HASH_KEY( ref cVar8 ), ref cVar8, "", 0, 1, 0, 0, 0 );
    }
    if ((uParam4) AND ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa())))
    {
        if (NETWORK_GET_FRIEND_COUNT() <= 15)
        {
            sub_9076( uParam0, uParam2, -3, "CP_INVITE_ALL", "", 0, 0, 0, 0, 0 );
        }
    }
    sub_9687( uParam0, uParam2, uParam1, 1, 0, fVar16 );
    return;
}

void sub_16275(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int I;

    sub_8992( uParam0, 1, uParam3, 0 );
    for ( I = 0; I <= (g_U94._fU568 - 1); I++ )
    {
        sub_9076( uParam0, uParam2, I, NETWORK_GET_UNACCEPTED_INVITER_NAME( I ), "", 0, 1, 0, 0, 0 );
    }
    sub_9687( uParam0, uParam2, uParam1, 1, 0, 0 );
    return;
}

void sub_16537(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_8992( uParam0, 1, uParam3, 0 );
    if ((uParam6) AND (uParam4))
    {
        sub_16571( uParam0, uParam2 );
    }
    else
    {
        sub_16687( uParam0, uParam2, uParam4, uParam5, uParam6 );
    }
    sub_9687( uParam0, uParam2, uParam1, 1, 1, 0 );
    return;
}

void sub_16571(unknown uParam0, unknown uParam1)
{
    sub_9076( uParam0, uParam1, 21, "NTGT_21", "", 1, 0, 0, 0, 0 );
    sub_9076( uParam0, uParam1, 18, "NTGT_18", "", 1, 0, 0, 0, 0 );
    sub_9076( uParam0, uParam1, 22, "NTGT_22", "", 1, 0, 0, 0, 0 );
    return;
}

void sub_16687(unknown uParam0, unknown uParam1, boolean bParam2, boolean bParam3, boolean bParam4)
{
    sub_9076( uParam0, uParam1, 24, "NTGT_24", "", 1, 0, 0, 0, 0 );
    sub_9076( uParam0, uParam1, 21, "NTGT_21", "", 1, 0, 0, 0, 0 );
    sub_9076( uParam0, uParam1, 20, "NTGT_20", "", 1, 0, 0, 0, 0 );
    if ((NOT bParam3) || (GET_NUMBER_OF_PLAYERS() <= 8))
    {
        sub_9076( uParam0, uParam1, 19, "NTGT_19", "", 1, 0, 0, 0, 0 );
    }
    sub_9076( uParam0, uParam1, 23, "NTGT_23", "", 1, 0, 0, 0, 0 );
    if (((NOT bParam3) || (GET_NUMBER_OF_PLAYERS() <= 2)) AND (NOT bParam4))
    {
        sub_9076( uParam0, uParam1, 17, "NTGT_17", "", 1, 0, 0, 0, 0 );
    }
    sub_9076( uParam0, uParam1, 18, "NTGT_18", "", 1, 0, 0, 0, 0 );
    sub_9076( uParam0, uParam1, 22, "NTGT_22", "", 1, 0, 0, 0, 0 );
    if (NOT bParam2)
    {
        sub_9076( uParam0, uParam1, 16, "NTGT_E1_FREEMDE", "", 1, 0, 0, 0, 0 );
    }
    if (bParam2 == 1)
    {
        SET_ONLINE_LAN( 0 );
        g_U93 = 0;
    }
    if ((NOT bParam4) AND (NOT GET_ONLINE_LAN()))
    {
        sub_9076( uParam0, uParam1, 8, "CP_PARTY_MODE", "", 1, 0, 0, 0, 0 );
    }
    return;
}

int sub_17432(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_17756(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, boolean bParam14, boolean bParam15)
{
    switch (g_U94._fU40)
    {
        case 2:
        if (bParam14)
        {
            sub_17828( 0, g_U526._fU0[0], 0.50000000, 0.50000000, 1.00000000, 1.00000000 );
            sub_17986( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, g_U831 );
        }
        sub_18097( uParam0 );
        if (bParam15)
        {
            if (NOT g_U94._fU540)
            {
                sub_17828( 0, g_U526._fU0[1], 0.50000000, 0.50000000, 0.85000000, 0.41000000 );
            }
        }
        break;
        default:
        sub_18786( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, uParam1._fU0 );
        if ((g_U94._fU0 == 1002) AND (NOT g_U94._fU540))
        {
            sub_18518( 0, g_U484._fU0[19], 0.50000000, 0.60000000, 0.80000000, 0.40000000, uParam1._fU12, 0 );
        }
        break;
    }
    switch (g_U94._fU0)
    {
        case 1003:
        case 1009: break;
        default:
        if (NOT g_U94._fU528)
        {
            sub_19057( 0 );
        }
        break;
    }
    return;
}

void sub_17828(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, 0.00000000, 255, 255, 255, 255 );
    }
    return;
}

void sub_17986(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if (iParam0 == 0)
    {
        DRAW_RECT( uParam1, uParam2 * 0.65000000, uParam3, uParam4 * 0.65000000, uParam5, uParam6, uParam7, uParam8 );
    }
    else
    {
        DRAW_RECT( uParam1, 0.65000000 + (uParam2 * 0.35000000), uParam3, uParam4 * 0.35000000, uParam5, uParam6, uParam7, uParam8 );
    }
    return;
}

void sub_18097(int iParam0)
{
    int I;
    unknown uVar4;

    switch (iParam0)
    {
        case 2:
        if (g_U526._fU124 > 0)
        {
            g_U526._fU124 -= 25;
            sub_9744( ref g_U526._fU124, 0, 255 );
            break;
        }
        break;
        case 1: sub_18203();
        case 0:
        if (iParam0 != 2)
        {
            if (g_U526._fU124 < 255)
            {
                g_U526._fU124 += 25;
                sub_9744( ref g_U526._fU124, 0, 255 );
            }
        }
        sub_391( ref uVar4, 255, 255, 255, g_U526._fU124 );
        for ( I = 0; I <= 4; I++ )
        {
            sub_18518( 0, g_U526._fU0[2], g_U526._fU20[I]._fU0._fU0, g_U526._fU20[I]._fU0._fU4, g_U526._fU20[I]._fU8._fU0, g_U526._fU20[I]._fU8._fU4, uVar4, 0 );
        }
        break;
    }
    return;
}

void sub_18203()
{
    int I;

    for ( I = 0; I <= 4; I++ )
    {
        g_U526._fU20[I]._fU0._fU4 += g_U526._fU20[I]._fU16;
        if ((g_U526._fU20[I]._fU0._fU4 + (g_U526._fU20[I]._fU8._fU4 * 0.50000000)) < 0.00000000)
        {
            sub_3301( I, 1 );
        }
    }
    return;
}

void sub_18518(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, uParam7, sub_12219( ref uParam6, 0 ), sub_12219( ref uParam6, 1 ), sub_12219( ref uParam6, 2 ), sub_12219( ref uParam6, 3 ) );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, uParam7, sub_12219( ref uParam6, 0 ), sub_12219( ref uParam6, 1 ), sub_12219( ref uParam6, 2 ), sub_12219( ref uParam6, 3 ) );
    }
    return;
}

void sub_18786(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (iParam0 == 0)
    {
        DRAW_RECT( uParam1, uParam2 * 0.65000000, uParam3, uParam4 * 0.65000000, sub_12219( ref uParam5, 0 ), sub_12219( ref uParam5, 1 ), sub_12219( ref uParam5, 2 ), sub_12219( ref uParam5, 3 ) );
    }
    else
    {
        DRAW_RECT( uParam1, 0.65000000 + (uParam2 * 0.35000000), uParam3, uParam4 * 0.35000000, sub_12219( ref uParam5, 0 ), sub_12219( ref uParam5, 1 ), sub_12219( ref uParam5, 2 ), sub_12219( ref uParam5, 3 ) );
    }
    return;
}

void sub_19057(int iParam0)
{
    int I;

    sub_17986( 1, 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    if ((NOT IS_USING_CONTROLLER()) AND (iParam0 > 0))
    {
        iParam0 = 0;
    }
    for ( I = 1; I <= 12; I++ )
    {
        if (iParam0 != I)
        {
            if (g_U94._fU496)
            {
                sub_19228( 1, g_U484._fU0[I], 0.15500000 + (((I - 1) mod 3) * 0.35000000), 0.30000000 + (((I - 1) / 3) * 0.20500000), 0.20000000, 0.17000000, 200, 200, 200, 255, 0 );
            }
            else
            {
                sub_17828( 1, g_U484._fU0[I], 0.15500000 + (((I - 1) mod 3) * 0.35000000), 0.30000000 + (((I - 1) / 3) * 0.20500000), 0.20000000, 0.17000000 );
            }
        }
    }
    if ((NOT (# -NULL-0xc27c84())) AND (NOT (# -NULL-0xc27bfa())))
    {
        if (iParam0 != -1)
        {
            sub_19228( 1, g_U484._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 108, 130, 187, 255, 0 );
        }
        else
        {
            sub_19228( 1, g_U484._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 100, 169, 249, 255, 0 );
        }
        if (iParam0 != -2)
        {
            sub_19228( 1, g_U484._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 204, 43, 71, 255, 0 );
        }
        else
        {
            sub_19228( 1, g_U484._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 250, 105, 141, 255, 0 );
        }
    }
    else if (iParam0 != -1)
    {
        sub_19228( 1, g_U484._fU0[13], 0.19500000, 0.08500000, 0.04800000, 0.90100000, 0, 100, 0, 255, l_U0 );
    }
    else
    {
        sub_19228( 1, g_U484._fU0[13], 0.19500000, 0.08500000, 0.04800000, 0.90100000, 0, 200, 0, 255, l_U0 );
    }
    if (iParam0 != -2)
    {
        sub_19228( 1, g_U484._fU0[14], 0.78800000, 0.07500000, 0.05100000, 0.80100000, 100, 0, 0, 255, l_U1 );
    }
    else
    {
        sub_19228( 1, g_U484._fU0[14], 0.78800000, 0.07500000, 0.05100000, 0.80100000, 200, 0, 0, 255, l_U1 );
    }
    return;
}

void sub_19228(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, uParam10, uParam6, uParam7, uParam8, uParam9 );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, uParam10, uParam6, uParam7, uParam8, uParam9 );
    }
    return;
}

void sub_20004(int iParam0, unknown uParam1, unknown uParam2, int iParam3)
{
    int iVar6;
    int iVar7;
    unknown uVar8;

    iVar6 = GET_HASH_KEY( uParam2 );
    iVar7 = GET_HASH_KEY( uParam1 );
    if ((iVar6 != iParam0->_fU116) || (iVar7 != iParam0->_fU128))
    {
        iParam0->_fU116 = iVar6;
        iParam0->_fU128 = iVar7;
        sub_20085( iParam0, uParam2, uParam1 );
    }
    uVar8 = sub_20274( uParam1, 0, iParam0->_fU0[2]._fU0._fU0, iParam0->_fU0[2]._fU0._fU4 );
    switch (g_U94._fU40)
    {
        case 2:
        if (g_U94._fU528)
        {
            sub_17986( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, 0, 0, 0, 255 );
        }
        else
        {
            sub_18786( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, iParam3->_fU4 );
        }
        break;
        default:
        sub_18786( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, iParam3->_fU4 );
        sub_18786( 0, 0.50000000, 0.88000000, 1.00000000, 0.01000000, iParam3->_fU16 );
        sub_18786( 0, 0.50000000, 0.94000000, 0.01000000, 0.12000000, iParam3->_fU20 );
        break;
    }
    if (iParam0->_fU116 != 1678728908)
    {
        sub_11888( 0, 0, ref iParam0->_fU0[1], uParam2, ref iParam0->_fU100->_fU0, ref iParam0->_fU100->_fU4, 0.00000000, 1.00000000, 0, 0, 0, 0, g_U94._fU564, 1 );
    }
    if (iParam0->_fU128 != 1678728908)
    {
        sub_11888( 0, 0, ref iParam0->_fU0[2], uParam1, (ref iParam0->_fU108->_fU0) - uVar8, ref iParam0->_fU108->_fU4, 0.00000000, ref iParam0->_fU108->_fU0, 0, 0, 0, 0, g_U94._fU564, 1 );
    }
    return;
}

void sub_20085(int iParam0, string sParam1, string sParam2)
{
    boolean bVar5;
    int[2] iVar6;

    bVar5 = true;
    array(ref iVar6, 2);
    sub_20116( ref iParam0->_fU0[1]._fU0, iParam0 + 120 );
    sub_20116( ref iParam0->_fU0[2]._fU0, iParam0 + 132 );
    if (iParam0->_fU116 == 1678728908)
    {
        sParam1 = "A";
        iVar6[0] = 1;
    }
    if (iParam0->_fU128 == 1678728908)
    {
        sParam2 = "A";
        iVar6[1] = 1;
    }
    bVar5 = true;
    while (bVar5)
    {
        if (((sub_20274( sParam1, iVar6[0], iParam0->_fU0[1]._fU0._fU0, iParam0->_fU0[1]._fU0._fU4 )) + (sub_20274( sParam2, iVar6[1], iParam0->_fU0[2]._fU0._fU0, iParam0->_fU0[2]._fU0._fU4 ))) > 0.90000000)
        {
            iParam0->_fU0[1]._fU0._fU0 *= 0.80000000;
            iParam0->_fU0[1]._fU0._fU4 *= 0.80000000;
            iParam0->_fU0[2]._fU0._fU0 *= 0.80000000;
            iParam0->_fU0[2]._fU0._fU4 *= 0.80000000;
        }
        else
        {
            bVar5 = false;
        }
    }
    return;
}

void sub_20116(int iParam0, int iParam1)
{
    iParam0->_fU0 = iParam1->_fU0;
    iParam0->_fU4 = iParam1->_fU4;
    return;
}

void sub_20274(unknown uParam0, boolean bParam1, unknown uParam2, unknown uParam3)
{
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_FONT( 2 );
    }
    else
    {
        SET_TEXT_FONT( 0 );
    }
    SET_TEXT_SCALE( uParam2, uParam3 * 0.65000000 );
    if (bParam1)
    {
        return GET_STRING_WIDTH_WITH_STRING( "STRING", uParam0 );
    }
    return GET_STRING_WIDTH( uParam0 );
}

void sub_20992(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    char[16] cVar7;

    iVar5 = GET_BITS_IN_RANGE( g_U94._fU96, 0, 15 );
    iVar6 = GET_BITS_IN_RANGE( g_U94._fU96, 16, 31 );
    iVar6++;
    if (iVar6 >= 120)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 301, ref iVar4 );
        if (iVar4 < 70)
        {
            if (iVar5 > 1)
            {
                iVar5--;
                SET_BITS_IN_RANGE( ref g_U94._fU96, 0, 15, iVar5 );
            }
        }
        else if (iVar4 > 200)
        {
            if (iVar5 < 4)
            {
                iVar5++;
                SET_BITS_IN_RANGE( ref g_U94._fU96, 0, 15, iVar5 );
            }
        }
        SET_BITS_IN_RANGE( ref g_U94._fU96, 16, 31, 0 );
    }
    else
    {
        SET_BITS_IN_RANGE( ref g_U94._fU96, 16, 31, iVar6 );
    }
    switch (g_U94._fU40)
    {
        case 2:
        sub_18786( 0, 0.50000000, 0.06000000, 1.00000000, 0.12000000, iParam1->_fU12 );
        if (NOT g_U94._fU540)
        {
            switch (iVar5)
            {
                case 4: sub_17986( 0, 0.20000000, 0.06000000, 0.02500000, 0.08000000, 255, 255, 255, 255 );
                case 3: sub_17986( 0, 0.16000000, 0.07000000, 0.02500000, 0.06000000, 255, 255, 255, 255 );
                case 2: sub_17986( 0, 0.12000000, 0.08000000, 0.02500000, 0.04000000, 255, 255, 255, 255 );
                case 1:
                sub_17986( 0, 0.08000000, 0.09000000, 0.02500000, 0.02000000, 255, 255, 255, 255 );
                break;
            }
        }
        StrCopy( ref cVar7, "DOW_SHORT_DAY_", 16 );
        ConcatString(ref cVar7, GET_CURRENT_DAY_OF_WEEK(), 16);
        if (g_U94._fU500)
        {
            sub_11888( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01500000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_21581( uParam0, 0.79000000, 0.01500000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        else
        {
            sub_11888( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01000000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_21581( uParam0, 0.79000000, 0.01000000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        break;
        default:
        sub_18786( 0, 0.50000000, 0.06500000, 1.00000000, 0.13000000, iParam1->_fU12 );
        if (NOT g_U94._fU540)
        {
            switch (iVar5)
            {
                case 4: sub_17986( 0, 0.20000000, 0.06500000, 0.02500000, 0.08000000, 255, 255, 255, 255 );
                case 3: sub_17986( 0, 0.16000000, 0.07500000, 0.02500000, 0.06000000, 255, 255, 255, 255 );
                case 2: sub_17986( 0, 0.12000000, 0.08500000, 0.02500000, 0.04000000, 255, 255, 255, 255 );
                case 1:
                sub_17986( 0, 0.08000000, 0.09500000, 0.02500000, 0.02000000, 255, 255, 255, 255 );
                break;
            }
        }
        StrCopy( ref cVar7, "DOW_SHORT_DAY_", 16 );
        ConcatString(ref cVar7, GET_CURRENT_DAY_OF_WEEK(), 16);
        if (g_U94._fU500)
        {
            sub_11888( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01500000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_21581( uParam0, 0.79000000, 0.01500000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        else
        {
            sub_11888( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01000000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_21581( uParam0, 0.79000000, 0.01000000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        break;
    }
    return;
}

void sub_21581(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    char[16] cVar7;

    if (iParam3 < 10)
    {
        StrCopy( ref cVar7, "CP_TIME_ZERO", 16 );
    }
    else
    {
        StrCopy( ref cVar7, "CP_TIME_NOZERO", 16 );
    }
    sub_11888( 0, 6, uParam0, ref cVar7, uParam1 - 0.02000000, uParam2, 0.00000000, uParam1 - 0.02000000, 1, 0, 0, iParam3, 0, 1 );
    sub_11888( 0, 0, uParam0, "CP_TIME_SEP", uParam1, uParam2 - 0.01000000, 0.00000000, 1.00000000, 2, 0, 0, 0, 0, 1 );
    if (iParam4 < 10)
    {
        StrCopy( ref cVar7, "CP_TIME_ZERO", 16 );
    }
    else
    {
        StrCopy( ref cVar7, "CP_TIME_NOZERO", 16 );
    }
    sub_11888( 0, 6, uParam0, ref cVar7, uParam1 + 0.02000000, uParam2, 0.00000000, 1.00000000, 0, 0, 0, iParam4, 0, 1 );
    return;
}

void sub_22744(int iParam0, unknown uParam1, int iParam2, int iParam3, boolean bParam4)
{
    int I;
    float fVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;

    iVar10 = 0;
    iParam0->_fU112++;
    iParam0->_fU116++;
    if ((iParam0->_fU64) AND (g_U94._fU40 == 2))
    {
        sub_18786( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, iParam3->_fU8 );
    }
    for ( I = 0; I <= (iParam0->_fU48 - 1); I++ )
    {
        fVar8 = (ref iParam0->_fU68->_fU4) + ((ref iParam0->_fU76->_fU4) * I);
        iVar9 = 0;
        if (bParam4)
        {
            if ((uParam1^)[I]._fU0)
            {
                if (g_U94._fU0 == 1085)
                {
                    if ((uParam1^)[I]._fU4 != 1000)
                    {
                        iVar9 = 1;
                    }
                    else if (NOT (COMPARE_STRING( ref (uParam1^)[I]._fU8, "CP_OPT_INVITE" )))
                    {
                        iVar9 = 1;
                    }
                }
                else if ((uParam1^)[I]._fU72)
                {
                    iVar9 = 1;
                }
            }
        }
        if ((iParam0->_fU44 == I) || (iParam0->_fU64))
        {
            if (NOT iParam0->_fU64)
            {
                sub_18786( 0, ref iParam0->_fU68->_fU0, fVar8, ref iParam0->_fU76->_fU0, ref iParam0->_fU76->_fU4, iParam3->_fU8 );
            }
            iVar11 = 5;
            iVar12 = 7;
            iVar10 = 1;
        }
        else
        {
            iVar11 = 4;
            iVar12 = 6;
            iVar10 = 0;
        }
        if ((uParam1^)[I]._fU92)
        {
            if ((iParam0->_fU44 == I) AND (iParam0->_fU120))
            {
                if (iParam0->_fU112 >= 5)
                {
                    sub_23227( ref (uParam1^)[I]._fU8, iParam0, 1, (uParam1^)[I]._fU40, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
                }
                sub_23772( ref (uParam1^)[I]._fU8, iParam0->_fU124, iParam0->_fU128, ref iParam0->_fU84->_fU0, fVar8 + iParam0->_fU100, (uParam1^)[I]._fU76._fU0, (uParam1^)[I]._fU76._fU4, ref iParam2->_fU0[iVar11], ref iParam0->_fU84->_fU0, ref iParam0->_fU84->_fU4, (uParam1^)[I]._fU40, iVar9, iVar10, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
            }
            else
            {
                sub_23772( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU100, (uParam1^)[I]._fU104, ref iParam0->_fU84->_fU0, fVar8 + iParam0->_fU100, (uParam1^)[I]._fU76._fU0, (uParam1^)[I]._fU76._fU4, ref iParam2->_fU0[iVar11], ref iParam0->_fU84->_fU0, ref iParam0->_fU84->_fU4, (uParam1^)[I]._fU40, iVar9, iVar10, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
            }
        }
        else
        {
            iVar13 = 0;
            if ((uParam1^)[I]._fU40)
            {
                iVar13 = GET_LENGTH_OF_LITERAL_STRING( ref (uParam1^)[I]._fU8 );
            }
            else
            {
                iVar13 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL_INS_NUM( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
            }
            sub_23772( ref (uParam1^)[I]._fU8, 0, iVar13, ref iParam0->_fU84->_fU0, fVar8 + iParam0->_fU100, (uParam1^)[I]._fU76._fU0, (uParam1^)[I]._fU76._fU4, ref iParam2->_fU0[iVar11], ref iParam0->_fU84->_fU0, ref iParam0->_fU84->_fU4, (uParam1^)[I]._fU40, iVar9, iVar10, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
        }
        if (iParam0->_fU0 == 2)
        {
            if ((uParam1^)[I]._fU108)
            {
                if ((iParam0->_fU44 == I) AND (iParam0->_fU136))
                {
                    if (iParam0->_fU116 >= 5)
                    {
                        sub_23227( ref (uParam1^)[I]._fU52, iParam0, 0, (uParam1^)[I]._fU68, 0, 0 );
                    }
                    sub_23772( ref (uParam1^)[I]._fU52, iParam0->_fU140, iParam0->_fU144, ref iParam0->_fU92->_fU0, fVar8 + iParam0->_fU104, (uParam1^)[I]._fU84._fU0, (uParam1^)[I]._fU84._fU4, ref iParam2->_fU0[iVar12], ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, (uParam1^)[I]._fU68, 0, 0, 0, 0 );
                }
                else
                {
                    sub_23772( ref (uParam1^)[I]._fU52, (uParam1^)[I]._fU116, (uParam1^)[I]._fU120, ref iParam0->_fU92->_fU0, fVar8 + iParam0->_fU104, (uParam1^)[I]._fU84._fU0, (uParam1^)[I]._fU84._fU4, ref iParam2->_fU0[iVar12], ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, (uParam1^)[I]._fU68, 0, 0, 0, 0 );
                }
            }
            else
            {
                iVar14 = 0;
                if ((uParam1^)[I]._fU68)
                {
                    iVar14 = GET_LENGTH_OF_LITERAL_STRING( ref (uParam1^)[I]._fU52 );
                }
                else
                {
                    iVar14 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( ref (uParam1^)[I]._fU52 );
                }
                sub_23772( ref (uParam1^)[I]._fU52, 0, iVar14, ref iParam0->_fU92->_fU0, fVar8 + iParam0->_fU104, (uParam1^)[I]._fU84._fU0, (uParam1^)[I]._fU84._fU4, ref iParam2->_fU0[iVar12], ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, (uParam1^)[I]._fU68, 0, 0, 0, 0 );
            }
        }
    }
    sub_25159( iParam0, iParam3, -1 );
    return;
}

void sub_23227(unknown uParam0, int iParam1, boolean bParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    iVar8 = 0;
    if (bParam3)
    {
        iVar8 = GET_LENGTH_OF_LITERAL_STRING( uParam0 );
    }
    else
    {
        iVar8 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL_INS_NUM( uParam0, uParam4, uParam5 );
    }
    if (bParam2)
    {
        if (iParam1->_fU132)
        {
            if (iParam1->_fU128 < iVar8)
            {
                iParam1->_fU124++;
                iParam1->_fU128++;
                iParam1->_fU112 = 0;
            }
            else
            {
                iParam1->_fU132 = 0;
                iParam1->_fU112 = -10;
            }
        }
        else if (iParam1->_fU124 > 0)
        {
            iParam1->_fU124--;
            iParam1->_fU128--;
            iParam1->_fU112 = 0;
        }
        else
        {
            iParam1->_fU132 = 1;
            iParam1->_fU112 = -10;
        }
    }
    else if (iParam1->_fU148)
    {
        if (iParam1->_fU144 < iVar8)
        {
            iParam1->_fU140++;
            iParam1->_fU144++;
            iParam1->_fU116 = 0;
        }
        else
        {
            iParam1->_fU148 = 0;
            iParam1->_fU116 = -10;
        }
    }
    else if (iParam1->_fU140 > 0)
    {
        iParam1->_fU140--;
        iParam1->_fU144--;
        iParam1->_fU116 = 0;
    }
    else
    {
        iParam1->_fU148 = 1;
        iParam1->_fU116 = -10;
    };;;
    return;
}

void sub_23772(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, float fParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8, unknown uParam9, boolean bParam10, boolean bParam11, boolean bParam12, unknown uParam13, unknown uParam14)
{
    SET_TEXT_FONT( 0 );
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_FONT( 2 );
    }
    SET_TEXT_SCALE( uParam5, uParam6 * 0.65000000 );
    SET_TEXT_WRAP( uParam8, uParam9 );
    if (bParam11)
    {
        if (NETWORK_IS_FRIEND_ONLINE( uParam0 ))
        {
            SET_TEXT_COLOUR( sub_12219( iParam7 + 8, 0 ), sub_12219( iParam7 + 8, 1 ), sub_12219( iParam7 + 8, 2 ), sub_12219( iParam7 + 8, 3 ) );
        }
        else if ((g_U94._fU40 == 2) || (bParam12))
        {
            if (g_U94._fU396 == 13)
            {
                if (NOT bParam12)
                {
                    SET_TEXT_COLOUR( 200, 0, 0, sub_12219( iParam7 + 8, 3 ) );
                }
                else
                {
                    SET_TEXT_COLOUR( sub_12219( iParam7 + 8, 0 ), sub_12219( iParam7 + 8, 1 ), sub_12219( iParam7 + 8, 2 ), sub_12219( iParam7 + 8, 3 ) );
                }
            }
            else
            {
                SET_TEXT_COLOUR( 130, 130, 130, sub_12219( iParam7 + 8, 3 ) );
            }
        }
        else
        {
            SET_TEXT_COLOUR( 70, 70, 70, sub_12219( iParam7 + 8, 3 ) );
        }
    }
    else
    {
        SET_TEXT_COLOUR( sub_12219( iParam7 + 8, 0 ), sub_12219( iParam7 + 8, 1 ), sub_12219( iParam7 + 8, 2 ), sub_12219( iParam7 + 8, 3 ) );
    }
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 0 );
    fParam4 *= 0.65000000;
    if (bParam10)
    {
        SET_TEXT_USE_UNDERSCORE( 1 );
        DISPLAY_TEXT_WITH_LITERAL_SUBSTRING( uParam3, fParam4, "STRING", uParam0, uParam1, uParam2 );
        SET_TEXT_USE_UNDERSCORE( 0 );
    }
    else
    {
        DISPLAY_TEXT_SUBSTRING( uParam3, fParam4, uParam0, uParam13, uParam14, uParam1, uParam2 );
    }
    return;
}

void sub_25159(int iParam0, int iParam1, int iParam2)
{
    int iVar5;

    if (iParam2 != -1)
    {
        iVar5 = iParam2;
    }
    else
    {
        iVar5 = iParam0->_fU16[iParam0->_fU44];
    }
    if (iParam0->_fU52)
    {
        if (g_U94._fU40 == 1)
        {
            sub_18786( 0, 0.95000000, 0.50500000, 0.01000000, 0.75000000, iParam1->_fU28 );
            sub_18786( 0, 0.95000000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.05000000, iParam0->_fU56, iParam1->_fU36 );
            sub_18786( 0, 0.95000000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.05000000 * 0.70000000, iParam0->_fU56 * 0.70000000, iParam1->_fU32 );
        }
        else
        {
            sub_18786( 0, 0.97000000, 0.49000000, 0.00700000, 0.72000000, iParam1->_fU28 );
            sub_18786( 0, 0.98500000, 0.13000000, 0.03000000, 0.00700000, iParam1->_fU28 );
            sub_18786( 0, 0.98500000, 0.85000000, 0.03000000, 0.00700000, iParam1->_fU28 );
            sub_18786( 0, 0.98500000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.03000000, iParam0->_fU56, iParam1->_fU28 );
        }
    }
    return;
}

void sub_25638(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    boolean bVar6;
    int I;
    float fVar8;
    char[16] cVar9;

    bVar6 = # -NULL-0xc27c84();
    sub_17756( 1, (uParam3^), 1, 0 );
    sub_22744( iParam0, uParam1, uParam2, uParam3, 1 );
    StrCopy( ref cVar9, "BLANK", 16 );
    if (bVar6)
    {
        StrCopy( ref cVar9, "CP_NAV_SELECT", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        if (((uParam1^)[I]._fU0) AND ((uParam1^)[I]._fU72))
        {
            if (NETWORK_IS_FRIEND_IN_SAME_TITLE( ref (uParam1^)[I]._fU8 ))
            {
                fVar8 = (ref iParam0->_fU68->_fU4) + ((ref iParam0->_fU76->_fU4) * I);
                sub_17828( 0, g_U484._fU0[18], 0.11000000, fVar8, 0.20000000, 0.10000000 );
                if ((I == iParam0->_fU44) AND (NOT bVar6))
                {
                    StrCopy( ref cVar9, "CP_OPT_INVITE", 16 );
                }
            }
        }
    }
    sub_20004( uParam2, "CP_NAV_BACK", ref cVar9, uParam3 );
    return;
}

void sub_26207(unknown uParam0, int iParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7)
{
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    int iVar15;
    int iVar16;

    iVar15 = 5;
    switch (g_U94._fU40)
    {
        case 2:
        if ((uParam4) AND ((uParam6^) != (iParam7 - 1)))
        {
            sub_18786( 0, 0.50000000, 0.50500000, 0.90000000, 0.75000000, iParam1->_fU8 );
        }
        else
        {
            sub_18786( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, iParam1->_fU8 );
        }
        break;
        default:
        sub_18786( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, iParam1->_fU0 );
        break;
    }
    if (g_U94._fU500)
    {
        uVar10._fU0 = 0.08000000;
        uVar10._fU4 = 0.10000000;
        uVar12._fU0 = 0.08000000;
        uVar12._fU4 = 0.92000000;
        iVar15 = 6;
    }
    else if (g_U94._fU40 == 2)
    {
        uVar10._fU0 = 0.10000000;
        uVar12._fU0 = 0.10000000;
    }
    else
    {
        uVar10._fU0 = 0.05000000;
        uVar12._fU0 = 0.05000000;
    }
    uVar10._fU4 = 0.10000000;
    uVar12._fU4 = 0.90000000;
    iVar15 = 5;;
    fVar14 = 0.67000000 / (TO_FLOAT( iVar15 ));
    iVar16 = (uParam6^) - iParam7;
    if ((uParam4) AND (iVar16 < iVar15))
    {
        if (sub_26561( iParam2 ))
        {
            sub_17828( 0, iParam2->_fU36, 0.50000000, 0.49000000 - ((iVar16 + 1) * fVar14), 0.85000000, 0.67000000 );
        }
        else
        {
            sub_26842( uParam0, 0.49000000 - ((iVar16 + 1) * fVar14), iVar16 );
        }
        sub_11888( 0, 7, uParam0, "", uVar10._fU0, uVar10._fU4, uVar12._fU0, uVar12._fU4, 0, 0, 0, 0, 0, 1 );
        SET_TEXT_LINE_DISPLAY( (uParam5^), (uParam6^) );
    }
    else
    {
        sub_11888( 0, 7, uParam0, "", uVar10._fU0, uVar10._fU4, uVar12._fU0, uVar12._fU4, 0, 0, 0, 0, 0, 1 );
        SET_TEXT_LINE_DISPLAY( (uParam5^), (uParam6^) );
    }
    DISPLAY_TEXT_WITH_TWO_STRINGS( uVar10._fU0, uVar10._fU4, ref (uParam3^)[0], ref (uParam3^)[1], ref (uParam3^)[2] );
    if (g_U94._fU528)
    {
        sub_19057( 0 );
    }
    return;
}

int sub_26561(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (iParam0->_fU40)
    {
        return 1;
    }
    if (iParam0->_fU44)
    {
        if (HAS_STREAMED_TXD_LOADED( iParam0 + 0 ))
        {
            sub_26622( ref uVar3, iParam0->_fU32 );
            iParam0->_fU36 = GET_TEXTURE_FROM_STREAMED_TXD( iParam0 + 0, ref uVar3 );
            iParam0->_fU40 = 1;
            return 1;
        }
    }
    else
    {
        SCRIPT_ASSERT( "CELLPHONE - photo texture now loaded for some reason" );
    }
    return 0;
}

void sub_26622(unknown uParam0, int iParam1)
{
    StrCopy( (uParam0^), "photo_", 16 );
    ConcatString((uParam0^), iParam1 mod 5, 16);
    return;
}

void sub_26842(unknown uParam0, unknown uParam1, int iParam2)
{
    sub_17986( 0, 0.50000000, uParam1 - 0.33500000, 0.85000000, 0.01000000, 255, 255, 255, 150 );
    sub_17986( 0, 0.50000000, uParam1 + 0.33500000, 0.85000000, 0.01000000, 255, 255, 255, 150 );
    sub_17986( 0, 0.07500000, uParam1, 0.01000000, 0.67000000, 255, 255, 255, 150 );
    sub_17986( 0, 0.92500000, uParam1, 0.01000000, 0.67000000, 255, 255, 255, 150 );
    if (iParam2 >= -6)
    {
        sub_11888( 0, 0, uParam0, "PHOTO_LOADING", 0.09000000, uParam1 - 0.32000000, 0.10000000, 0.90000000, 0, 0, 0, 0, 0, 1 );
    }
    else
    {
        sub_7010( "\n photo sections", iParam2 );
    }
    return;
}

void sub_27453(int iParam0, int iParam1)
{
    boolean Result;
    int iVar5;

    if (g_U94._fU380)
    {
        Result = false;
        iVar5 = 0;
        if (g_U94._fU0 == 1004)
        {
            if ((g_U94._fU112 == 3) || (g_U94._fU112 == 4))
            {
                iVar5 = 1;
                if (g_U94._fU116)
                {
                    SHAKE_PAD( 0, 100, 256 );
                    g_U94._fU8._fU0._fU0 += 0.25000000;
                    if (g_U94._fU8._fU0._fU0 >= (g_U94._fU8._fU28 + 0.50000000))
                    {
                        g_U94._fU116 = 0;
                    }
                }
                else
                {
                    SHAKE_PAD( 0, 100, 128 );
                    g_U94._fU8._fU0._fU0 -= 0.25000000;
                    if (g_U94._fU8._fU0._fU0 <= (g_U94._fU8._fU28 - 0.50000000))
                    {
                        g_U94._fU116 = 1;
                    }
                }
            }
        }
        if (iParam0->_fU0 == iParam1)
        {
            sub_27733( iParam0, iVar5 );
            if (iParam1 == 1)
            {
                SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 0 );
            }
            Result = true;
        }
        else if (iParam1 == 1)
        {
            SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 1 );
        }
        if ((iParam0->_fU0 < 5) AND (iParam1 < 5))
        {
            sub_28177( iParam0, iParam0->_fU0, iParam1 );
            iParam0->_fU0 = (iParam0->_fU0 * 10) + iParam1;
        }
        else
        {
            sub_27733( iParam0, iVar5 );
        }
        if ((NOT Result) || (iVar5))
        {
            sub_2989();
        }
    }
    else
    {
        Result = true;
    }
    return Result;
}

void sub_27733(int iParam0, boolean bParam1)
{
    unknown uVar4;

    GET_FRAME_TIME( ref uVar4 );
    if (iParam0->_fU0 > 5)
    {
        sub_27806( ref g_U94._fU8._fU0, (ref ref iParam0->_fU4->_fU0->_fU0) * uVar4, (ref ref iParam0->_fU4->_fU0->_fU4) * uVar4, (ref ref iParam0->_fU4->_fU0->_fU8) * uVar4 );
        sub_27806( ref g_U94._fU8._fU12, (ref ref iParam0->_fU4->_fU12->_fU0) * uVar4, (ref ref iParam0->_fU4->_fU12->_fU4) * uVar4, (ref ref iParam0->_fU4->_fU12->_fU8) * uVar4 );
        if (sub_27913( iParam0 ))
        {
            iParam0->_fU0 = iParam0->_fU0 mod 10;
            if (NOT bParam1)
            {
                sub_2335( iParam0, iParam0->_fU0 );
            }
        }
    }
    return;
}

void sub_27806(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    iParam0->_fU0 -= uParam1;
    iParam0->_fU4 -= uParam2;
    iParam0->_fU8 -= uParam3;
    return;
}

int sub_27913(int iParam0)
{
    if ((ref ref iParam0->_fU4->_fU0->_fU4) >= 0.00000000)
    {
        if (g_U94._fU8._fU0._fU4 <= (ref ref iParam0->_fU36->_fU0->_fU4))
        {
            g_U94._fU8._fU0._fU4 = ref ref iParam0->_fU36->_fU0->_fU4;
            return 1;
        }
    }
    else if (g_U94._fU8._fU0._fU4 >= (ref ref iParam0->_fU36->_fU0->_fU4))
    {
        g_U94._fU8._fU0._fU4 = ref ref iParam0->_fU36->_fU0->_fU4;
        return 1;
    }
    return 0;
}

void sub_28177(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    sub_2359( uParam1, ref uVar5 );
    sub_2359( uParam2, iParam0 + 36 );
    iParam0->_fU68 = 0;
    ref iParam0->_fU4->_fU0 = {(uVar5._fU0._fU0 - (ref ref iParam0->_fU36->_fU0->_fU0)) / 0.18000000, (uVar5._fU0._fU4 - (ref ref iParam0->_fU36->_fU0->_fU4)) / 0.18000000, (uVar5._fU0._fU8 - (ref ref iParam0->_fU36->_fU0->_fU8)) / 0.18000000};
    ref iParam0->_fU4->_fU12 = {(uVar5._fU12._fU0 - (ref ref iParam0->_fU36->_fU12->_fU0)) / 0.18000000, (uVar5._fU12._fU4 - (ref ref iParam0->_fU36->_fU12->_fU4)) / 0.18000000, (uVar5._fU12._fU8 - (ref ref iParam0->_fU36->_fU12->_fU8)) / 0.18000000};
    ref iParam0->_fU4->_fU24 = (uVar5._fU24 - (ref iParam0->_fU36->_fU24)) / 0.18000000;
    return;
}

void sub_28487(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int Result;
    unknown uVar6;
    int iVar7;
    int iVar8;

    iVar4 = uParam0;
    iVar7 = 19;
    iVar8 = 0;
    GET_MOUSE_WHEEL( ref iVar8 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        return 19;
    }
    switch (g_U568)
    {
        case 1:
        if ((((NOT (IS_BUTTON_PRESSED( 0, 9 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 )))) AND (iVar8 <= 0)) AND ((NOT (IS_CONTROL_PRESSED( 2, 22 ))) || (NOT IS_USING_CONTROLLER())))
        {
            Result = sub_28653( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if ((iVar3 >= g_U571) AND (g_U94._fU484))
            {
                g_U568 = 5;
                return 19;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 5:
        if (((NOT (IS_BUTTON_PRESSED( 0, 9 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 )))) AND (iVar8 <= 0))
        {
            Result = sub_28653( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if (iVar3 >= g_U94._fU488)
            {
                g_U94._fU488 = iVar3 + g_U94._fU492;
                return 1;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 0:
        if ((((NOT (IS_BUTTON_PRESSED( 0, 8 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 21 )))) AND (iVar8 >= 0))
        {
            Result = sub_28653( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if ((iVar3 >= g_U571) AND (g_U94._fU484))
            {
                g_U568 = 4;
                return 19;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 4:
        if (((NOT (IS_BUTTON_PRESSED( 0, 8 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 )))) AND (iVar8 >= 0))
        {
            Result = sub_28653( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if (iVar3 >= g_U94._fU488)
            {
                g_U94._fU488 = iVar3 + g_U94._fU492;
                return 0;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 2:
        if ((NOT (IS_BUTTON_PRESSED( 0, 10 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 1 ))))
        {
            Result = sub_28653( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 3:
        if ((NOT (IS_BUTTON_PRESSED( 0, 11 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 1 ))))
        {
            Result = sub_28653( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 18:
        if ((NOT (IS_CONTROL_PRESSED( 2, 22 ))) AND (NOT IS_USING_CONTROLLER()))
        {
            Result = sub_28653( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        Result = sub_28653( iVar4 );
        break;
    }
    if (Result != 19)
    {
        iVar4 = 0;
    }
    switch (g_U569)
    {
        case 6:
        if ((((NOT IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 77 )))) AND ((IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 181 ))))) AND (NOT (IS_MOUSE_BUTTON_PRESSED( 1 ))))
        {
            uVar6 = sub_31233( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 7:
        if ((((NOT IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND ((IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 182 ))))) AND (NOT (IS_MOUSE_BUTTON_PRESSED( 2 ))))
        {
            uVar6 = sub_31233( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        uVar6 = sub_31233( iVar4 );
        break;
    }
    if (IS_NUMLOCK_ENABLED())
    {
        switch (g_U570)
        {
            case 8:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 82 )))
            {
                iVar7 = sub_31695( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 9:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 79 )))
            {
                iVar7 = sub_31695( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 10:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 80 )))
            {
                iVar7 = sub_31695( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 11:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 81 )))
            {
                iVar7 = sub_31695( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 12:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 75 )))
            {
                iVar7 = sub_31695( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 13:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 76 )))
            {
                iVar7 = sub_31695( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 14:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 77 )))
            {
                iVar7 = sub_31695( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 15:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 71 )))
            {
                iVar7 = sub_31695( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 16:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 72 )))
            {
                iVar7 = sub_31695( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 17:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 73 )))
            {
                iVar7 = sub_31695( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            default:
            iVar7 = sub_31695( iVar4 );
            break;
        }
    }
    if (Result != 19)
    {
        return Result;
    }
    if (iVar7 != 19)
    {
        return iVar7;
    }
    return uVar6;
}

void sub_28653(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;

    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    GET_MOUSE_WHEEL( ref iVar11 );
    if (IS_CONTROL_PRESSED( 2, 21 ))
    {
        iVar9 = 1;
    }
    if (IS_CONTROL_PRESSED( 2, 22 ))
    {
        iVar10 = 1;
    }
    if ((IS_BUTTON_PRESSED( 0, 11 )) || (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 1 )))
    {
        bVar3 = true;
    }
    if ((IS_BUTTON_PRESSED( 0, 9 )) || (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 )))
    {
        bVar4 = true;
    }
    if (IS_BUTTON_PRESSED( 0, 8 ))
    {
        bVar5 = true;
    }
    if ((IS_BUTTON_PRESSED( 0, 10 )) || (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 1 )))
    {
        bVar6 = true;
    }
    if (((iVar11 > 0) AND (g_U94._fU0 != 1002)) AND (g_U94._fU0 != 1003))
    {
        iVar7 = 1;
    }
    if ((((IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 )) AND (g_U94._fU0 != 1000)) AND (g_U94._fU0 != 1002)) || ((((iVar11 < 0) AND (g_U94._fU0 != 1000)) AND (g_U94._fU0 != 1002)) AND (g_U94._fU0 != 1003)))
    {
        iVar8 = 1;
    }
    if ((iVar9) AND ((g_U94._fU0 == 1000) || (g_U94._fU0 == 1002)))
    {
        GET_GAME_TIMER( ref g_U571 );
        g_U571 += 500;
        g_U568 = 0;
        switch (g_U94._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_29054( 2, uParam0 );
            break;
        }
    }
    else if ((iVar10) AND (NOT IS_USING_CONTROLLER()))
    {
        GET_GAME_TIMER( ref g_U571 );
        g_U571 += 500;
        g_U568 = 18;
        switch (g_U94._fU0)
        {
            case 1005: break;
            default:
            sub_29054( 8, uParam0 );
            break;
        }
    }
    else if ((iVar10) AND (g_U94._fU0 == 1002))
    {
        GET_GAME_TIMER( ref g_U571 );
        g_U571 += 500;
        g_U568 = 1;
        switch (g_U94._fU0)
        {
            case 1005: break;
            default:
            sub_29054( 8, uParam0 );
            break;
        }
    }
    else if (((bVar3) AND (NOT bVar5)) AND (NOT bVar4))
    {
        g_U568 = 3;
        if ((g_U94._fU0 == 1003) || (g_U94._fU0 == 1009))
        {
            sub_29054( 7, uParam0 );
        }
    }
    else if ((((bVar4) || (iVar7)) AND (NOT bVar3)) AND (NOT bVar6))
    {
        GET_GAME_TIMER( ref g_U571 );
        g_U571 += 500;
        g_U94._fU488 = 0;
        g_U568 = 1;
        switch (g_U94._fU0)
        {
            case 1005: break;
            default:
            sub_29054( 8, uParam0 );
            break;
        }
    }
    else if ((((bVar5) || (iVar8)) AND (NOT bVar3)) AND (NOT bVar6))
    {
        GET_GAME_TIMER( ref g_U571 );
        g_U571 += 500;
        g_U94._fU488 = 0;
        g_U568 = 0;
        switch (g_U94._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_29054( 2, uParam0 );
            break;
        }
    }
    else if (((bVar6) AND (NOT bVar5)) AND (NOT bVar4))
    {
        g_U568 = 2;
        if ((g_U94._fU0 == 1003) || (g_U94._fU0 == 1009))
        {
            sub_29054( 3, uParam0 );
        }
    }
    else
    {
        g_U568 = 19;
    };;;;;;;
    return g_U568;
}

void sub_29054(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if ((uParam1) AND ((NOT g_U94._fU376) || (g_U94._fU0 == 1005)))
    {
        uVar4 = GET_SOUND_ID();
        if (g_U94._fU0 == 1005)
        {
            PLAY_SOUND_FRONTEND( uVar4, "PHONE_PRESS_KEY_SPEED" );
        }
        else
        {
            PLAY_SOUND_FRONTEND( uVar4, "PHONE_PRESS_KEY" );
        }
        switch (uParam0)
        {
            case 0:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 10.00000000 );
            sub_3101( "\n playing keypadTone 10.0" );
            break;
            case 1:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 0.00000000 );
            sub_3101( "\n playing keypadTone 0.0" );
            break;
            case 2:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 1.00000000 );
            sub_3101( "\n playing keypadTone 1.0" );
            break;
            case 3:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 2.00000000 );
            sub_3101( "\n playing keypadTone 2.0" );
            break;
            case 4:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 3.00000000 );
            sub_3101( "\n playing keypadTone 3.0" );
            break;
            case 5:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 4.00000000 );
            sub_3101( "\n playing keypadTone 4.0" );
            break;
            case 6:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 5.00000000 );
            sub_3101( "\n playing keypadTone 5.0" );
            break;
            case 7:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 6.00000000 );
            sub_3101( "\n playing keypadTone 6.0" );
            break;
            case 8:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 7.00000000 );
            sub_3101( "\n playing keypadTone 7.0" );
            break;
            case 9:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 8.00000000 );
            sub_3101( "\n playing keypadTone 8.0" );
            break;
            case 10:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 9.00000000 );
            sub_3101( "\n playing keypadTone 9.0" );
            break;
            case 11:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 11.00000000 );
            sub_3101( "\n playing keypadTone 11.0" );
            break;
        }
        RELEASE_SOUND_ID( uVar4 );
    }
    return;
}

void sub_31233(unknown uParam0)
{
    if ((((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 181 )))) || (IS_MOUSE_BUTTON_PRESSED( 1 )))
    {
        g_U569 = 6;
        switch (g_U94._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_29054( 6, uParam0 );
            break;
        }
    }
    else if ((((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 78 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 182 )))) || (IS_MOUSE_BUTTON_PRESSED( 2 )))
    {
        g_U569 = 7;
        if (g_U94._fU0 != 1007)
        {
            sub_29054( 4, uParam0 );
        }
    }
    else
    {
        g_U569 = 19;
    }
    return g_U569;
}

void sub_31695(unknown uParam0)
{
    g_U570 = 19;
    if (((g_U94._fU0 == 1003) || (g_U94._fU0 == 1009)) AND (IS_NUMLOCK_ENABLED()))
    {
        if (IS_GAME_KEYBOARD_KEY_PRESSED( 82 ))
        {
            g_U570 = 8;
            sub_29054( 0, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 79 ))
        {
            g_U570 = 9;
            sub_29054( 1, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 80 ))
        {
            g_U570 = 10;
            sub_29054( 2, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 81 ))
        {
            g_U570 = 11;
            sub_29054( 3, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 75 ))
        {
            g_U570 = 12;
            sub_29054( 4, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 76 ))
        {
            g_U570 = 13;
            sub_29054( 5, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 77 ))
        {
            g_U570 = 14;
            sub_29054( 6, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 71 ))
        {
            g_U570 = 15;
            sub_29054( 7, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 72 ))
        {
            g_U570 = 16;
            sub_29054( 8, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 73 ))
        {
            g_U570 = 17;
            sub_29054( 9, uParam0 );
        };;;;;;;;;;
    }
    return g_U570;
}

void sub_32665(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int iVar6;

    if (iParam0->_fU44 > 0)
    {
        iParam0->_fU44--;
        iParam0->_fU108 = -5;
        iParam0->_fU112 = -5;
        iParam0->_fU116 = -5;
        iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
        iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
        iParam0->_fU132 = 1;
        iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
        iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
        iParam0->_fU148 = 1;
    }
    else if (iParam0->_fU52)
    {
        if ((iParam0->_fU16[iParam0->_fU44] - 1) >= 0)
        {
            iVar6 = iParam0->_fU16[iParam0->_fU44] - 1;
            for ( I = iParam0->_fU48 - 1; I >= 1; I += -1 )
            {
                iParam0->_fU16[I] = iParam0->_fU16[I - 1];
            }
            sub_32947( uParam2 );
            iParam0->_fU16[iParam0->_fU44] = iVar6;
            sub_10537( ref (uParam1^)[iVar6], ref (uParam2^)[iParam0->_fU44] );
            sub_5836( iParam0, uParam2, iParam0->_fU44 );
            iParam0->_fU108 = -5;
            iParam0->_fU112 = -5;
            iParam0->_fU116 = -5;
            iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
            iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
            iParam0->_fU132 = 1;
            iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
            iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
            iParam0->_fU148 = 1;
        }
        else
        {
            iParam0->_fU44 = iParam0->_fU48 - 1;
            for ( I = 0; I <= (iParam0->_fU48 - 1); I++ )
            {
                iParam0->_fU16[I] = iParam0->_fU4 - (iParam0->_fU48 - I);
                sub_10537( ref (uParam1^)[iParam0->_fU16[I]], ref (uParam2^)[I] );
            }
            sub_5836( iParam0, uParam2, -1 );
        }
    }
    else
    {
        iParam0->_fU44 = iParam0->_fU4 - 1;
        iParam0->_fU108 = -5;
        iParam0->_fU112 = -5;
        iParam0->_fU116 = -5;
        iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
        iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
        iParam0->_fU132 = 1;
        iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
        iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
        iParam0->_fU148 = 1;
    }
    iParam0->_fU60 = (uParam2^)[iParam0->_fU44]._fU4;
    return;
}

void sub_32947(unknown uParam0)
{
    int I;

    for ( I = (uParam0^) - 2; I >= 0; I += -1 )
    {
        (uParam0^)[I + 1] = {(uParam0^)[I]};
    }
    return;
}

void sub_33501(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int iVar6;

    if (iParam0->_fU44 < (iParam0->_fU48 - 1))
    {
        iParam0->_fU44++;
        iParam0->_fU108 = -5;
        iParam0->_fU112 = -5;
        iParam0->_fU116 = -5;
        iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
        iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
        iParam0->_fU132 = 1;
        iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
        iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
        iParam0->_fU148 = 1;
    }
    else if (iParam0->_fU52)
    {
        if ((iParam0->_fU16[iParam0->_fU44] + 1) < iParam0->_fU4)
        {
            iVar6 = iParam0->_fU16[iParam0->_fU44] + 1;
            for ( I = 0; I <= (iParam0->_fU48 - 2); I++ )
            {
                iParam0->_fU16[I] = iParam0->_fU16[I + 1];
            }
            sub_33795( uParam2 );
            iParam0->_fU16[iParam0->_fU44] = iVar6;
            sub_10537( ref (uParam1^)[iVar6], ref (uParam2^)[iParam0->_fU44] );
            sub_5836( iParam0, uParam2, iParam0->_fU44 );
            iParam0->_fU108 = -5;
            iParam0->_fU112 = -5;
            iParam0->_fU116 = -5;
            iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
            iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
            iParam0->_fU132 = 1;
            iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
            iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
            iParam0->_fU148 = 1;
        }
        else
        {
            iParam0->_fU44 = 0;
            for ( I = 0; I <= (iParam0->_fU48 - 1); I++ )
            {
                iParam0->_fU16[I] = I;
                sub_10537( ref (uParam1^)[I], ref (uParam2^)[I] );
            }
            sub_5836( iParam0, uParam2, -1 );
        }
    }
    else
    {
        iParam0->_fU44 = 0;
        iParam0->_fU108 = -5;
        iParam0->_fU112 = -5;
        iParam0->_fU116 = -5;
        iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
        iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
        iParam0->_fU132 = 1;
        iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
        iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
        iParam0->_fU148 = 1;
    }
    iParam0->_fU60 = (uParam2^)[iParam0->_fU44]._fU4;
    return;
}

void sub_33795(unknown uParam0)
{
    int I;

    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        (uParam0^)[I - 1] = {(uParam0^)[I]};
    }
    return;
}

int sub_35428(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        switch (uParam0)
        {
            case 23: return 8;
            case 18: return 8;
            case 19: return 4;
            case 20: return 16;
            case 22: return 8;
            case 24: return 16;
            case 21: return 16;
            case 16: return 16;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 23: return 16;
            case 18: return 16;
            case 19: return 8;
            case 20: return 32;
            case 22: return 16;
            case 24: return 32;
            case 25: return 16;
            case 21: return 32;
            case 16: return 32;
            case 8: return 8;
            case 17: return 2;
        }
    }
    PRINTSTRING( "##### MAX_PLAYERS_FOR_GAMEMODE has been passed in the gamemode " );
    PRINTINT( uParam0 );
    PRINTNL();
    return -1;
}

void sub_35971(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if ((uParam0^))
    {
        if ((uParam2^) > 0)
        {
            (uParam2^)--;
            (uParam3^)--;
            (uParam1^)--;
        }
    }
    return;
}

void sub_36059(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if ((uParam0^))
    {
        if ((uParam4^) < ((uParam2^) - 1))
        {
            (uParam3^)++;
            (uParam4^)++;
            (uParam1^)++;
        }
    }
    return;
}

void sub_36796(unknown uParam0, unknown uParam1, boolean bParam2)
{
    char[16] cVar5;

    if (sub_36807( uParam0 ))
    {
        StrCopy( (uParam1^), "INVITE_MSG_0", 16 );
    }
    else if (GET_NUMBER_OF_PLAYERS() == NETWORK_GET_MAX_SLOTS())
    {
        StrCopy( (uParam1^), "INVITE_MSG_1", 16 );
    }
    else if (bParam2)
    {
        PLAY_SOUND_FRONTEND( -1, "MOBILE_PHONE_INVITE_FRIEND" );
    }
    StrCopy( ref cVar5, "E1_INVITE_", 16 );
    ConcatString(ref cVar5, NETWORK_GET_GAME_MODE(), 16);
    NETWORK_INVITE_FRIEND( uParam0, GET_STRING_FROM_TEXT_FILE( ref cVar5 ) );
    StrCopy( (uParam1^), "CP_INVITE_MSG", 16 );;;
    return;
}

int sub_36807(unknown uParam0)
{
    int I;
    int iVar4;

    iVar4 = GET_HASH_KEY( uParam0 );
    for ( I = 0; I <= 31; I++ )
    {
        if ((I != GET_PLAYER_ID()) AND (IS_NETWORK_PLAYER_ACTIVE( I )))
        {
            if (iVar4 == (GET_HASH_KEY( GET_PLAYER_NAME( sub_8274( I ) ) )))
            {
                if (COMPARE_STRING( uParam0, GET_PLAYER_NAME( sub_8274( I ) ) ))
                {
                    return 1;
                }
                else
                {
                    sub_3101( "\n HASH KEYs were the same but strings dont match" );
                }
            }
            else
            {
                sub_7010( "\n HASH KEY for friend ", iVar4 );
                sub_7010( " does not match player hash ", GET_HASH_KEY( GET_PLAYER_NAME( sub_8274( I ) ) ) );
            }
        }
        else
        {
            sub_6781( "\n ", uParam0 );
            sub_3101( " is either this player or is not active" );
        }
    }
    return 0;
}