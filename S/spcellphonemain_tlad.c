void main()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 225;
    l_U3 = -1;
    l_U962 = 1;
    l_U1080 = 0;
    l_U1114 = GET_CURRENT_LANGUAGE();
    l_U1146 = 0;
    l_U1147 = 0;
    l_U1148 = 0;
    g_U94._fU380 = 1;
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_107();
        sub_146( ref l_U1025, 1 );
        g_U94._fU0 = 1000;
        STOP_MOBILE_PHONE_RINGING();
        UNREGISTER_SCRIPT_WITH_AUDIO();
        DESTROY_MOBILE_PHONE();
        TERMINATE_THIS_SCRIPT();
    }
    SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 0 );
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
    GET_SCREEN_RESOLUTION( ref iVar6, ref iVar7 );
    if ((iVar6 * iVar7) <= 480000)
    {
        g_U94._fU496 = 0;
        g_U94._fU500 = 0;
    }
    l_U1148 = 0;
    sub_1067( ref l_U990, ref l_U977 );
    iVar8 = 0;
    sub_2296( ref l_U990 );
    if (g_U94._fU0 == 1000)
    {
        sub_146( ref l_U1025, 1 );
        sub_3136();
        sub_3337();
        if (g_U94._fU40 == 0)
        {
            sub_3796( 1050 );
        }
        else if ((g_U94._fU408) AND (g_U94._fU404 == 1016))
        {
            l_U1046 = sub_3861();
            if (l_U1046 != -1)
            {
                sub_3796( 1016 );
                l_U964 = 1;
            }
            else
            {
                sub_3796( 1002 );
            }
            g_U94._fU404 = 1000;
        }
        else
        {
            sub_3796( 1002 );
        }
    }
    while (true)
    {
        WAIT( 0 );
        sub_4029( ref l_U990, ref l_U977 );
        g_U94._fU428 = l_U6._fU60;
        if (NOT sub_4062())
        {
            if ((sub_4970( ref l_U1025 )) AND (NOT sub_5004()))
            {
                sub_107();
                g_U94._fU0 = 1001;
                g_U94._fU100 = 0;
            }
        }
        else if ((g_U94._fU48) || (g_U94._fU52))
        {
            if ((sub_4970( ref l_U1025 )) AND (NOT sub_5004()))
            {
                sub_107();
                while (NOT (sub_5142( 1 )))
                {
                    WAIT( 0 );
                    sub_5599();
                }
                if (g_U94._fU48)
                {
                    sub_3796( 1004 );
                }
                else
                {
                    sub_3796( 1005 );
                }
            }
        }
        if (sub_36240( iVar8 ))
        {
            switch (g_U94._fU0)
            {
                case 1002:
                sub_5599();
                if (sub_36584( ref l_U1025, 2 ))
                {
                    switch (sub_37618( g_U94._fU524 ))
                    {
                        case 0:
                        sub_3796( 1003 );
                        break;
                        case 6:
                        l_U1043 = -1;
                        switch (g_U94._fU404)
                        {
                            case 1016:
                            l_U1046 = sub_3861();
                            if (l_U1046 != -1)
                            {
                                sub_3796( 1016 );
                                l_U964 = 1;
                            }
                            else
                            {
                                sub_3796( 1011 );
                            }
                            break;
                            default:
                            sub_3796( 1011 );
                            break;
                        }
                        g_U94._fU404 = 1000;
                        break;
                        case 7:
                        case 1:
                        case 18:
                        g_U94._fU404 = 1000;
                        sub_3796( 1001 );
                        break;
                    }
                }
                break;
                case 1003:
                sub_5599();
                if (sub_36584( ref l_U1025, 3 ))
                {
                    switch (sub_37618( g_U94._fU524 ))
                    {
                        case 0:
                        if ((l_U1094 > 0) || ((l_U1094 == 0) AND (l_U1093 != 2)))
                        {
                            if ((l_U1093 == 1) AND (l_U1094 == 0))
                            {
                                if (COMPARE_STRING( ref g_U94._fU128, "" ))
                                {
                                    ;
                                }
                            }
                            l_U1094--;
                        }
                        break;
                        case 1:
                        if (l_U1094 < 3)
                        {
                            l_U1094++;
                        }
                        break;
                        case 3:
                        if (l_U1093 < 3)
                        {
                            l_U1093++;
                        }
                        break;
                        case 2:
                        if (l_U1093 > 1)
                        {
                            l_U1093--;
                        }
                        break;
                        case 8:
                        if (l_U1095 < 10)
                        {
                            ConcatString(ref g_U94._fU128, 0, 16);
                            l_U1093 = 2;
                            l_U1094 = 3;
                            l_U1095++;
                        }
                        break;
                        case 9:
                        if (l_U1095 < 10)
                        {
                            ConcatString(ref g_U94._fU128, 1, 16);
                            l_U1093 = 1;
                            l_U1094 = 0;
                            l_U1095++;
                        }
                        break;
                        case 10:
                        if (l_U1095 < 10)
                        {
                            ConcatString(ref g_U94._fU128, 2, 16);
                            l_U1093 = 2;
                            l_U1094 = 0;
                            l_U1095++;
                        }
                        break;
                        case 11:
                        if (l_U1095 < 10)
                        {
                            ConcatString(ref g_U94._fU128, 3, 16);
                            l_U1093 = 3;
                            l_U1094 = 0;
                            l_U1095++;
                        }
                        break;
                        case 12:
                        if (l_U1095 < 10)
                        {
                            ConcatString(ref g_U94._fU128, 4, 16);
                            l_U1093 = 1;
                            l_U1094 = 1;
                            l_U1095++;
                        }
                        break;
                        case 13:
                        if (l_U1095 < 10)
                        {
                            ConcatString(ref g_U94._fU128, 5, 16);
                            l_U1093 = 2;
                            l_U1094 = 1;
                            l_U1095++;
                        }
                        break;
                        case 14:
                        if (l_U1095 < 10)
                        {
                            ConcatString(ref g_U94._fU128, 6, 16);
                            l_U1093 = 3;
                            l_U1094 = 1;
                            l_U1095++;
                        }
                        break;
                        case 15:
                        if (l_U1095 < 10)
                        {
                            ConcatString(ref g_U94._fU128, 7, 16);
                            l_U1093 = 1;
                            l_U1094 = 2;
                            l_U1095++;
                        }
                        break;
                        case 16:
                        if (l_U1095 < 10)
                        {
                            ConcatString(ref g_U94._fU128, 8, 16);
                            l_U1093 = 2;
                            l_U1094 = 2;
                            l_U1095++;
                        }
                        break;
                        case 17:
                        if (l_U1095 < 10)
                        {
                            ConcatString(ref g_U94._fU128, 9, 16);
                            l_U1093 = 3;
                            l_U1094 = 2;
                            l_U1095++;
                        }
                        break;
                        case 6:
                        switch (iVar5)
                        {
                            case -2:
                            sub_3796( 1002 );
                            break;
                            case -1:
                            g_U94._fU420 = 0;
                            g_U94._fU424 = -2;
                            g_U94._fU124 = 1;
                            g_U94._fU60 = 21;
                            g_U94._fU52 = 1;
                            break;
                            case 12: break;
                            case 10:
                            if (l_U1095 > 0)
                            {
                                l_U1095--;
                                StrCopy( ref g_U94._fU128, GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( ref g_U94._fU128, l_U1095 ), 16 );
                            }
                            break;
                            default:
                            if (l_U1095 < 10)
                            {
                                if (iVar5 == 11)
                                {
                                    ConcatString(ref g_U94._fU128, 0, 16);
                                }
                                else
                                {
                                    ConcatString(ref g_U94._fU128, iVar5, 16);
                                }
                                l_U1095++;
                                if (l_U1095 == 10)
                                {
                                    l_U1093 = 1;
                                    l_U1094 = -1;
                                }
                            }
                            break;
                        }
                        break;
                        case 7:
                        sub_3796( 1002 );
                        break;
                        case 18:
                        sub_3796( 1001 );
                        break;
                    }
                }
                if (l_U1094 == -1)
                {
                    if (l_U1093 == 3)
                    {
                        iVar5 = -2;
                    }
                    else
                    {
                        iVar5 = -1;
                    }
                }
                else
                {
                    iVar5 = l_U1093 + (l_U1094 * 3);
                }
                if ((l_U1095 == 10) || ((l_U1095 == 3) AND (COMPARE_STRING( ref g_U94._fU128, "911" ))))
                {
                    iVar5 = -1;
                }
                sub_24640( iVar5 );
                sub_43123( iVar5 );
                break;
                case 1048:
                l_U1043 = 1048;
                sub_3796( 1011 );
                case 1011:
                case 1012:
                case 1013:
                case 1014:
                case 1015:
                case 1017:
                case 1018:
                case 1019:
                case 1027:
                case 1028:
                case 1036:
                sub_5599();
                if (g_U94._fU0 == 1013)
                {
                    if (NOT g_U15862[g_U94._fU60]._fU196._fU0)
                    {
                        sub_3796( 1012 );
                        break;
                    }
                }
                else if (g_U94._fU0 == 1027)
                {
                    if (NOT g_U94._fU544)
                    {
                        if (l_U6._fU60 == 1031)
                        {
                            PRINT_HELP( "CP_SLEEP_H2" );
                            g_U94._fU544 = 1;
                        }
                    }
                }
                switch (sub_37618( g_U94._fU524 ))
                {
                    case 0:
                    if ((g_U94._fU0 == 1015) AND (l_U1044))
                    {
                        sub_43940( ref l_U6._fU52, ref l_U6._fU60, ref l_U1048, ref l_U1049 );
                    }
                    else
                    {
                        sub_44014( ref l_U6, ref l_U231, ref l_U44 );
                    }
                    break;
                    case 1:
                    if ((g_U94._fU0 == 1015) AND (l_U1044))
                    {
                        sub_44886( ref l_U6._fU52, ref l_U6._fU60, ref l_U1051, ref l_U1048, ref l_U1049 );
                    }
                    else
                    {
                        sub_44964( ref l_U6, ref l_U231, ref l_U44 );
                    }
                    break;
                    case 6:
                    switch (g_U94._fU0)
                    {
                        case 1011:
                        if (l_U6._fU60 == 65486)
                        {
                            if (((NOT g_U12303) AND (NOT IS_MINIGAME_IN_PROGRESS())) AND (IS_SCREEN_FADED_IN()))
                            {
                                g_U825 = 1;
                                sub_3796( 1001 );
                            }
                        }
                        else
                        {
                            switch (l_U6._fU60)
                            {
                                case 1048:
                                if ((# -NULL-0xbdd763()) == 1)
                                {
                                    sub_3796( 1040 );
                                }
                                else if (IS_PLAYER_SIGNED_IN_LOCALLY() == 1)
                                {
                                    sub_46019();
                                }
                                else if (# -NULL-0xc283b9())
                                {
                                    sub_3796( 1041 );
                                }
                                else if ((# -NULL-0xc0e043()) || (# -NULL-0xc0dd40()))
                                {
                                    sub_3796( 1046 );
                                }
                                else
                                {
                                    sub_46183();
                                    if ((# -NULL-0xc0e043()) || (# -NULL-0xc0dd40()))
                                    {
                                        sub_3796( 1046 );
                                    }
                                };;;;
                                break;
                                case 1049:
                                l_U1146 = 1;
                                if (IS_PLAYER_ONLINE())
                                {
                                    if (NETWORK_HAVE_ONLINE_PRIVILEGES())
                                    {
                                        sub_46356( ref l_U1115, 25, -1 );
                                        l_U1147 = 0;
                                        sub_3796( 1037 );
                                    }
                                    else
                                    {
                                        sub_3796( 1044 );
                                    }
                                }
                                else if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
                                {
                                    sub_3796( 1041 );
                                }
                                else if ((# -NULL-0xc0e043()) || (# -NULL-0xc0dd40()))
                                {
                                    sub_3796( 1046 );
                                }
                                else
                                {
                                    sub_46183();
                                    if ((# -NULL-0xc0e043()) || (# -NULL-0xc0dd40()))
                                    {
                                        sub_3796( 1046 );
                                    }
                                };;;
                                break;
                                case 1012:
                                l_U1043 = g_U94._fU72;
                                sub_3796( 1012 );
                                break;
                                case 1032:
                                if (IS_REPLAY_SYSTEM_SAVING())
                                {
                                    l_U1043 = -1;
                                    sub_3796( 1034 );
                                }
                                else
                                {
                                    l_U1043 = -1;
                                    sub_3796( 1033 );
                                }
                                break;
                                default:
                                l_U1043 = -1;
                                sub_3796( l_U6._fU60 );
                                break;
                            }
                        }
                        break;
                        case 1012:
                        if (l_U6._fU4 != 0)
                        {
                            l_U1043 = -1;
                            g_U94._fU60 = l_U6._fU60;
                            if ((g_U94._fU76 != g_U94._fU60) AND ((g_U94._fU68 == g_U94._fU60) || ((sub_13331( g_U15862[g_U94._fU60]._fU0 )) != 0)))
                            {
                                sub_3796( 1013 );
                            }
                            else
                            {
                                g_U94._fU52 = 1;
                            }
                        }
                        break;
                        case 1013:
                        if (l_U6._fU60 != 22)
                        {
                            if (g_U8946 == 0)
                            {
                                if (l_U6._fU60 == 4)
                                {
                                    sub_3796( 1014 );
                                    break;
                                }
                                else
                                {
                                    g_U15862[g_U94._fU60]._fU8[1]._fU0[l_U6._fU60] = 1;
                                    g_U15862[g_U94._fU60]._fU4 = 1;
                                    sub_47471( g_U94._fU60 );
                                }
                            }
                        }
                        g_U94._fU52 = 1;
                        break;
                        case 1014:
                        if (g_U8946 == 0)
                        {
                            g_U15862[g_U94._fU60]._fU8[1]._fU0[4] = 1;
                            g_U15862[g_U94._fU60]._fU4 = 1;
                            sub_47471( g_U94._fU60 );
                            switch (g_U94._fU60)
                            {
                                case 7:
                                g_U11224 = l_U6._fU60;
                                break;
                                case 1:
                                g_U11225 = l_U6._fU60;
                                break;
                            }
                        }
                        g_U94._fU52 = 1;
                        break;
                        case 1015:
                        if (NOT l_U1044)
                        {
                            l_U1043 = -1;
                            l_U1046 = l_U6._fU60;
                            l_U952 = {g_U572[l_U1046]};
                            sub_3796( 1016 );
                        }
                        break;
                        case 1017:
                        l_U1043 = -1;
                        switch (l_U6._fU60)
                        {
                            case 0:
                            l_U1043 = -1;
                            g_U94._fU60 = l_U1053;
                            if ((g_U94._fU76 != g_U94._fU60) AND ((g_U94._fU68 == g_U94._fU60) || ((sub_13331( g_U15862[g_U94._fU60]._fU0 )) != 0)))
                            {
                                sub_3796( 1013 );
                            }
                            else
                            {
                                g_U94._fU52 = 1;
                            }
                            break;
                            case 1:
                            g_U94._fU420 = 0;
                            g_U94._fU424 = -2;
                            g_U94._fU128 = {l_U1054};
                            g_U94._fU60 = 21;
                            g_U94._fU52 = 1;
                            break;
                            case 2:
                            sub_48018( l_U1046 );
                            sub_3796( 1015 );
                            break;
                            case 3: break;
                        }
                        break;
                        case 1018:
                        if (l_U44[l_U6._fU44]._fU72)
                        {
                            l_U1043 = -1;
                            l_U1096 = l_U6._fU60;
                            sub_3796( 1019 );
                        }
                        break;
                        case 1019:
                        if (l_U44[l_U6._fU44]._fU72)
                        {
                            l_U1043 = -1;
                            l_U1097 = l_U6._fU60;
                            sub_3796( 1020 );
                        }
                        break;
                        case 1027:
                        switch (l_U6._fU60)
                        {
                            case 0:
                            l_U1043 = 0;
                            if (g_U94._fU500)
                            {
                                g_U94._fU500 = 0;
                            }
                            else
                            {
                                g_U94._fU500 = 1;
                            }
                            sub_2296( ref l_U990 );
                            sub_3796( 1027 );
                            break;
                            case 1:
                            if (g_U94._fU524)
                            {
                                sub_48439( 1, "CP_NAV_NO", ref l_U6, ref l_U44, ref l_U231, 0 );
                                g_U94._fU524 = 0;
                            }
                            else
                            {
                                sub_48439( 1, "CP_NAV_YES", ref l_U6, ref l_U44, ref l_U231, 0 );
                                g_U94._fU524 = 1;
                            }
                            break;
                            default:
                            if ((g_U94._fU540) AND (l_U6._fU60 == 1031))
                            {
                                g_U94._fU540 = 0;
                                SET_SLEEP_MODE_ACTIVE( 0 );
                                sub_48439( 1031, "CP_SLEEP_ON2", ref l_U6, ref l_U44, ref l_U231, 0 );
                                break;
                            }
                            sub_3796( l_U6._fU60 );
                            break;
                        }
                        break;
                        case 1028:
                        g_U94._fU112 = l_U6._fU60;
                        SET_MOBILE_RING_TYPE( g_U94._fU112 );
                        break;
                        case 1036:
                        sub_16791( l_U6._fU60 );
                        break;
                    }
                    break;
                    case 7:
                    switch (g_U94._fU0)
                    {
                        case 1011:
                        sub_3796( 1002 );
                        break;
                        case 1012:
                        l_U1043 = 1012;
                        sub_3796( 1011 );
                        break;
                        case 1013:
                        l_U1043 = g_U94._fU60;
                        sub_3796( 1012 );
                        break;
                        case 1014:
                        l_U1043 = 4;
                        sub_3796( 1013 );
                        break;
                        case 1015:
                        l_U1043 = 1015;
                        sub_3796( 1011 );
                        break;
                        case 1017:
                        l_U1043 = -1;
                        if (sub_49107( l_U952, g_U572[l_U1046] ))
                        {
                            sub_3796( 1016 );
                        }
                        else
                        {
                            sub_3796( 1015 );
                        }
                        break;
                        case 1018:
                        l_U1043 = 1018;
                        sub_3796( 1011 );
                        break;
                        case 1019:
                        l_U1043 = l_U1096;
                        sub_3796( 1018 );
                        break;
                        case 1027:
                        l_U1043 = 1027;
                        sub_3796( 1011 );
                        break;
                        case 1028:
                        l_U1043 = 1028;
                        sub_3796( 1027 );
                        break;
                        case 1029:
                        l_U1043 = 1029;
                        sub_3796( 1027 );
                        break;
                        case 1036:
                        l_U1043 = 1036;
                        sub_3796( 1011 );
                        break;
                    }
                    break;
                    case 18:
                    sub_3796( 1001 );
                    break;
                }
                break;
                case 1030:
                sub_5599();
                switch (sub_37618( g_U94._fU524 ))
                {
                    case 0:
                    sub_44014( ref l_U6, ref l_U231, ref l_U44 );
                    break;
                    case 1:
                    sub_44964( ref l_U6, ref l_U231, ref l_U44 );
                    break;
                    case 6:
                    if (g_U94._fU396 != l_U6._fU60)
                    {
                        g_U94._fU400 = g_U94._fU396;
                        g_U94._fU396 = l_U6._fU60;
                        WAIT( 0 );
                        g_U94._fU392 = 1;
                        while (g_U94._fU392)
                        {
                            WAIT( 0 );
                        }
                    }
                    break;
                    case 7:
                    l_U1043 = 1030;
                    sub_3796( 1027 );
                    break;
                    case 18:
                    sub_3796( 1001 );
                    break;
                }
                break;
                case 1050:
                sub_5599();
                if (sub_36584( ref l_U1025, 2 ))
                {
                    switch (sub_37618( g_U94._fU524 ))
                    {
                        case 0:
                        sub_44014( ref l_U6, ref l_U231, ref l_U44 );
                        break;
                        case 1:
                        sub_44964( ref l_U6, ref l_U231, ref l_U44 );
                        break;
                        case 6:
                        switch (l_U6._fU60)
                        {
                            case 1060:
                            if ((# -NULL-0xbdd763()) == 1)
                            {
                                sub_3796( 1040 );
                            }
                            else if (IS_PLAYER_SIGNED_IN_LOCALLY() == 1)
                            {
                                sub_46019();
                            }
                            else if ((# -NULL-0xc283b9()) == 1)
                            {
                                sub_3796( 1041 );
                            }
                            else if ((# -NULL-0xc0e043()) || (# -NULL-0xc0dd40()))
                            {
                                sub_3796( 1046 );
                            }
                            else
                            {
                                sub_46183();
                                if ((# -NULL-0xc0e043()) || (# -NULL-0xc0dd40()))
                                {
                                    sub_3796( 1046 );
                                }
                            };;;;
                            break;
                            case 1032:
                            if (IS_REPLAY_SYSTEM_SAVING())
                            {
                                l_U1043 = -1;
                                sub_3796( 1034 );
                            }
                            else
                            {
                                l_U1043 = -1;
                                sub_3796( 1033 );
                            }
                            break;
                            case 1049:
                            l_U1146 = 1;
                            if (IS_PLAYER_ONLINE())
                            {
                                if (NETWORK_HAVE_ONLINE_PRIVILEGES())
                                {
                                    sub_46356( ref l_U1115, 25, -1 );
                                    sub_3796( 1037 );
                                    l_U1147 = 1;
                                }
                                else
                                {
                                    sub_3796( 1044 );
                                }
                            }
                            else if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
                            {
                                sub_3796( 1041 );
                            }
                            else if ((# -NULL-0xc0e043()) || (# -NULL-0xc0dd40()))
                            {
                                sub_3796( 1046 );
                            }
                            else
                            {
                                sub_46183();
                                if ((# -NULL-0xc0e043()) || (# -NULL-0xc0dd40()))
                                {
                                    sub_3796( 1046 );
                                }
                            };;;
                            break;
                        }
                        break;
                        case 7:
                        l_U1043 = -1;
                        sub_3796( 1001 );
                        break;
                    }
                }
                break;
                case 1046:
                case 1047:
                sub_5599();
                if (sub_36584( ref l_U1025, 2 ))
                {
                    if ((sub_37618( g_U94._fU524 )) == 7)
                    {
                        if (g_U94._fU40 == 0)
                        {
                            l_U1043 = -1;
                            sub_3796( 1050 );
                        }
                        else
                        {
                            l_U1043 = 1048;
                            sub_3796( 1011 );
                        }
                    }
                    else if (# -NULL-0xc0de66())
                    {
                        sub_46019();
                    }
                    else if ((g_U94._fU0 == 1046) AND (TIMERA() > 10000))
                    {
                        sub_3796( 1047 );
                    };;;
                }
                break;
                case 1039:
                case 1040:
                case 1016:
                case 1033:
                case 1034:
                case 1041:
                case 1044:
                case 1031:
                sub_5599();
                if (sub_36584( ref l_U1025, 2 ))
                {
                    switch (sub_37618( g_U94._fU524 ))
                    {
                        case 0:
                        sub_43940( ref l_U6._fU52, ref l_U6._fU60, ref l_U1048, ref l_U1049 );
                        break;
                        case 1:
                        sub_44886( ref l_U6._fU52, ref l_U6._fU60, ref l_U1051, ref l_U1048, ref l_U1049 );
                        break;
                        case 7:
                        switch (g_U94._fU0)
                        {
                            case 1039:
                            case 1040:
                            case 1041:
                            if (g_U94._fU40 == 0)
                            {
                                l_U1043 = 1047;
                                sub_3796( 1050 );
                            }
                            else
                            {
                                l_U1043 = 1048;
                                sub_3796( 1011 );
                            }
                            break;
                            case 1044:
                            if (g_U94._fU40 != 0)
                            {
                                if (l_U1146)
                                {
                                    l_U1043 = 1049;
                                }
                                else
                                {
                                    l_U1043 = 1048;
                                }
                                sub_3796( 1011 );
                            }
                            else
                            {
                                sub_3796( 1001 );
                            }
                            break;
                            case 1033:
                            case 1034:
                            if (g_U94._fU40 == 0)
                            {
                                l_U1043 = 1031;
                                sub_3796( 1050 );
                            }
                            else
                            {
                                l_U1043 = 1032;
                                sub_3796( 1011 );
                            }
                            break;
                            case 1031:
                            l_U1043 = 1031;
                            sub_3796( 1027 );
                            break;
                            case 1016:
                            if (l_U964)
                            {
                                l_U1043 = -1;
                                sub_3796( 1002 );
                            }
                            else if (sub_49107( l_U952, g_U572[l_U1046] ))
                            {
                                l_U1043 = l_U1046;
                            }
                            else
                            {
                                l_U1043 = -1;
                            }
                            sub_3796( 1015 );;
                            l_U964 = 0;
                            break;
                        }
                        break;
                        case 6:
                        if (g_U94._fU0 == 1033)
                        {
                            l_U1043 = -1;
                            g_U14 = 1;
                            sub_3796( 1001 );
                        }
                        else if (g_U94._fU0 == 1031)
                        {
                            l_U1043 = 1031;
                            SET_SLEEP_MODE_ACTIVE( 1 );
                            g_U94._fU540 = 1;
                            sub_3796( 1027 );
                        }
                        else if (g_U94._fU0 == 1016)
                        {
                            if (l_U1045)
                            {
                                if (IS_BIT_SET( g_U10959._fU0, 2 ))
                                {
                                    SET_BIT( ref g_U10959._fU0, 4 );
                                    SET_PHONE_HUD_ITEM( 0, "", -1 );
                                }
                                sub_3796( 1001 );
                            }
                            else if (l_U1066)
                            {
                                l_U1043 = -1;
                                sub_3796( 1017 );
                            }
                        };;;
                        break;
                        case 18:
                        sub_3796( 1001 );
                        break;
                    }
                }
                break;
                case 1020:
                sub_5599();
                if (sub_36584( ref l_U1025, 2 ))
                {
                    switch (sub_37618( g_U94._fU524 ))
                    {
                        case 0:
                        sub_44014( ref l_U6, ref l_U231, ref l_U44 );
                        break;
                        case 1:
                        sub_44964( ref l_U6, ref l_U231, ref l_U44 );
                        break;
                        case 7:
                        if (g_U94._fU0 == 1020)
                        {
                            l_U1043 = l_U1097;
                            sub_3796( 1019 );
                        }
                        break;
                        case 18:
                        sub_3796( 1001 );
                        break;
                    }
                }
                break;
                case 1021:
                sub_5599();
                switch (sub_37618( 0 ))
                {
                    case 6:
                    INCREMENT_INT_STAT_NO_MESSAGE( 369, 1 );
                    PLAY_SOUND_FRONTEND( -1, "PHONE_TAKE_PICTURE" );
                    sub_3796( 1022 );
                    break;
                    case 7:
                    g_U94._fU88 = 0;
                    l_U1043 = 1021;
                    sub_3796( 1011 );
                    break;
                    case 18:
                    sub_3796( 1001 );
                    break;
                    default:
                    iVar4 = 0;
                    if (((IS_BUTTON_PRESSED( 0, 1 )) AND (NOT l_U1108)) || ((IS_BUTTON_PRESSED( 0, 3 )) AND (NOT l_U1108)))
                    {
                        if ((((NOT (# -NULL-0xc27bfa())) AND ((GET_PROFILE_SETTING( 4 )) != 0)) || ((# -NULL-0xc27bfa()) AND (IS_SNIPER_INVERTED()))) AND (IS_USING_CONTROLLER()))
                        {
                            GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar3, ref uVar3, ref iVar4 );
                        }
                        else
                        {
                            GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref iVar4, ref uVar3, ref uVar3 );
                        }
                    }
                    if (iVar4 == 0)
                    {
                        GET_KEYBOARD_MOVE_INPUT( ref uVar3, ref iVar4 );
                    }
                    if ((iVar4 > 30) || (iVar4 < 65506))
                    {
                        if (iVar4 > 30)
                        {
                            iVar4 += 50;
                        }
                        else
                        {
                            iVar4 -= 50;
                        }
                        iVar4 = iVar4 / 50;
                        l_U6._fU60 += iVar4;
                        if (l_U6._fU60 < 0)
                        {
                            l_U6._fU60 = 0;
                        }
                        else if (l_U6._fU60 > 49)
                        {
                            l_U6._fU60 = 49;
                        }
                        l_U1107 = 0.15000000 + ((TO_FLOAT( l_U6._fU60 )) * 0.00792000);
                        CELL_CAM_SET_ZOOM( l_U1107 );
                        sub_51774( "\n Camera Zoom is, ", l_U1107 );
                    }
                    break;
                }
                break;
                case 1023: sub_3796( 1024 );
                case 1022:
                sub_5599();
                break;
                case 1024:
                sub_5599();
                switch (sub_37618( g_U94._fU524 ))
                {
                    case 6:
                    if (g_U94._fU88)
                    {
                        sub_3796( 1025 );
                    }
                    break;
                    case 7:
                    CELL_CAM_ACTIVATE( 1, 1 );
                    g_U94._fU0 = 1021;
                    break;
                    case 18:
                    sub_3796( 1001 );
                    break;
                }
                break;
                case 1025:
                sub_5599();
                break;
                case 1029:
                sub_5599();
                if (NOT l_U1100)
                {
                    if (TIMERA() > 700)
                    {
                        START_CUSTOM_MOBILE_PHONE_RINGING( l_U6._fU60 );
                        l_U1100 = 1;
                    }
                }
                switch (sub_37618( g_U94._fU524 ))
                {
                    case 0:
                    sub_44014( ref l_U6, ref l_U231, ref l_U44 );
                    STOP_MOBILE_PHONE_RINGING();
                    SETTIMERA( 0 );
                    l_U1100 = 0;
                    break;
                    case 1:
                    sub_44964( ref l_U6, ref l_U231, ref l_U44 );
                    STOP_MOBILE_PHONE_RINGING();
                    SETTIMERA( 0 );
                    l_U1100 = 0;
                    break;
                    case 6:
                    g_U94._fU108 = l_U6._fU60;
                    break;
                    case 7:
                    STOP_MOBILE_PHONE_RINGING();
                    l_U1043 = 1029;
                    sub_3796( 1027 );
                    break;
                    case 18:
                    STOP_MOBILE_PHONE_RINGING();
                    sub_3796( 1001 );
                    break;
                }
                break;
                case 1037:
                sub_5599();
                if (sub_36584( ref l_U1025, 2 ))
                {
                    switch (sub_37618( g_U94._fU524 ))
                    {
                        case 0:
                        sub_43940( ref l_U6._fU52, ref l_U6._fU60, ref l_U1048, ref l_U1049 );
                        break;
                        case 1:
                        sub_44886( ref l_U6._fU52, ref l_U6._fU60, ref l_U1051, ref l_U1048, ref l_U1049 );
                        break;
                        case 7:
                        l_U1043 = 1049;
                        if (l_U1147)
                        {
                            sub_3796( 1050 );
                        }
                        else
                        {
                            sub_3796( 1011 );
                        }
                        break;
                        case 6:
                        l_U1148 = 1;
                        sub_3796( 1001 );
                        break;
                    }
                }
                break;
                case 1001:
                if (sub_36584( ref l_U1025, 1 ))
                {
                    sub_107();
                    g_U94._fU0 = 1000;
                    sub_8637( ref l_U965 );
                    DESTROY_MOBILE_PHONE();
                    STOP_MOBILE_PHONE_RINGING();
                    UNREGISTER_SCRIPT_WITH_AUDIO();
                    if (l_U1148)
                    {
                        g_U94._fU580 = 1;
                        g_U816 = g_U12303;
                        NETWORK_STORE_GAME_CONFIG( ref l_U1115 );
                        sub_52523();
                    }
                    TERMINATE_THIS_SCRIPT();
                }
                break;
            }
        }
        else
        {
            sub_107();
            sub_8637( ref l_U965 );
            STOP_MOBILE_PHONE_RINGING();
            UNREGISTER_SCRIPT_WITH_AUDIO();
            TERMINATE_THIS_SCRIPT();
        }
    }
    return;
}

void sub_107()
{
    DISPLAY_HUD( 1 );
    CELL_CAM_ACTIVATE( 0, 0 );
    return;
}

void sub_146(int iParam0, unknown uParam1)
{
    iParam0->_fU0 = uParam1;
    sub_170( uParam1, ref g_U94._fU8 );
    sub_800();
    return;
}

void sub_170(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        if ((g_U94._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_287( uParam1, 11.50000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        else
        {
            sub_287( uParam1, 5.00000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        break;
        case 2:
        if ((g_U94._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_287( uParam1, 11.50000000, -11.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        else
        {
            sub_287( uParam1, 5.00000000, -7.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        break;
        case 3:
        if ((g_U94._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_287( uParam1, 11.50000000, 4.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        else
        {
            sub_287( uParam1, 5.00000000, 8.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        break;
        case 4:
        if ((g_U94._fU496) AND (GET_IS_WIDESCREEN()))
        {
            sub_287( uParam1, 11.50000000, -5.25000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        else
        {
            sub_287( uParam1, 5.00000000, -0.75000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, g_U94._fU8._fU24 );
        }
        break;
    }
    return;
}

void sub_287(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    iParam0->_fU0 = {uParam1};
    iParam0->_fU12 = {uParam4};
    iParam0->_fU24 = uParam7;
    iParam0->_fU28 = uParam1._fU0;
    return;
}

void sub_800()
{
    SET_MOBILE_PHONE_SCALE( g_U94._fU8._fU24 );
    SET_MOBILE_PHONE_POSITION( g_U94._fU8._fU0 );
    SET_MOBILE_PHONE_ROTATION( g_U94._fU8._fU12 );
    return;
}

void sub_1067(int iParam0, int iParam1)
{
    sub_1080( iParam0, iParam1 );
    if ((NOT (# -NULL-0xc27c84())) AND (NOT (# -NULL-0xc27bfa())))
    {
        g_U94._fU564 = 2;
    }
    switch (g_U94._fU40)
    {
        case 2:
        sub_1187( iParam1 + 0, 90, 110, 110, 255 );
        sub_1187( iParam1 + 4, 0, 0, 0, 205 );
        sub_1187( iParam1 + 8, 0, 0, 0, 140 );
        sub_1187( iParam1 + 12, 0, 0, 0, 140 );
        sub_1187( iParam1 + 16, 0, 0, 0, 255 );
        sub_1187( iParam1 + 20, 0, 0, 0, 255 );
        sub_1187( iParam1 + 24, 0, 0, 0, 255 );
        sub_1187( iParam1 + 28, 0, 0, 0, 255 );
        sub_1187( iParam1 + 40, 0, 0, 0, 255 );
        sub_1187( iParam1 + 44, 255, 255, 255, 255 );
        sub_1187( iParam1 + 48, 255, 255, 255, 255 );
        sub_1187( ref iParam0->_fU0[0]._fU8, 255, 255, 255, 230 );
        sub_1187( ref iParam0->_fU0[3]._fU8, 255, 255, 255, 230 );
        sub_1187( ref iParam0->_fU0[4]._fU8, 0, 0, 0, 230 );
        sub_1187( ref iParam0->_fU0[5]._fU8, 255, 255, 255, 230 );
        sub_1187( ref iParam0->_fU0[6]._fU8, 0, 0, 0, 230 );
        sub_1187( ref iParam0->_fU0[7]._fU8, 255, 255, 255, 230 );
        break;
        default:
        sub_1187( iParam1 + 0, 90, 110, 110, 255 );
        sub_1187( iParam1 + 4, 20, 30, 30, 255 );
        sub_1187( iParam1 + 8, 40, 60, 60, 255 );
        sub_1187( iParam1 + 12, 30, 50, 50, 255 );
        sub_1187( iParam1 + 16, 40, 60, 60, 255 );
        sub_1187( iParam1 + 20, 40, 60, 60, 255 );
        sub_1187( iParam1 + 24, 40, 60, 60, 255 );
        sub_1187( iParam1 + 28, 40, 60, 60, 255 );
        sub_1187( iParam1 + 32, 80, 100, 100, 255 );
        sub_1187( iParam1 + 36, 40, 60, 60, 255 );
        sub_1187( iParam1 + 40, 0, 0, 0, 255 );
        sub_1187( iParam1 + 44, 255, 255, 255, 255 );
        sub_1187( iParam1 + 48, 255, 255, 255, 255 );
        sub_1187( ref iParam0->_fU0[0]._fU8, 0, 0, 0, 200 );
        sub_1187( ref iParam0->_fU0[3]._fU8, 255, 255, 255, 200 );
        sub_1187( ref iParam0->_fU0[4]._fU8, 0, 0, 0, 200 );
        sub_1187( ref iParam0->_fU0[5]._fU8, 255, 255, 255, 200 );
        sub_1187( ref iParam0->_fU0[6]._fU8, 0, 0, 0, 200 );
        sub_1187( ref iParam0->_fU0[7]._fU8, 255, 255, 255, 200 );
        break;
    }
    return;
}

void sub_1080(int iParam0, unknown uParam1)
{
    sub_1089();
    switch (g_U94._fU40)
    {
        case 2:
        if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
        {
            sub_1187( ref iParam0->_fU0[2]._fU8, 200, 0, 0, 230 );
            sub_1187( ref iParam0->_fU0[1]._fU8, 0, 200, 0, 230 );
        }
        else
        {
            sub_1187( ref iParam0->_fU0[2]._fU8, 204, 43, 71, 230 );
            sub_1187( ref iParam0->_fU0[1]._fU8, 108, 130, 187, 230 );
        }
        break;
        default:
        if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
        {
            sub_1187( ref iParam0->_fU0[2]._fU8, 200, 0, 0, 200 );
            sub_1187( ref iParam0->_fU0[1]._fU8, 0, 200, 0, 200 );
        }
        else
        {
            sub_1187( ref iParam0->_fU0[2]._fU8, 204, 43, 71, 200 );
            sub_1187( ref iParam0->_fU0[1]._fU8, 108, 130, 187, 200 );
        }
        break;
    }
    return;
}

void sub_1089()
{
    g_U94._fU560 = 17;
    g_U94._fU556 = 16;
    return;
}

void sub_1187(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam0, 0, 7, uParam1 );
    SET_BITS_IN_RANGE( uParam0, 8, 15, uParam2 );
    SET_BITS_IN_RANGE( uParam0, 16, 23, uParam3 );
    SET_BITS_IN_RANGE( uParam0, 24, 31, uParam4 );
    return;
}

void sub_2296(int iParam0)
{
    float fVar3;

    fVar3 = 1.85000000;
    switch (g_U94._fU40)
    {
        case 2:
        if (g_U94._fU500)
        {
            fVar3 = 1.55000000;
            sub_2370( ref iParam0->_fU0[3]._fU0, fVar3, fVar3 );
            sub_2370( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
            sub_2370( iParam0 + 100, 0.05000000, 0.89000000 );
            sub_2370( iParam0 + 108, 0.95000000, 0.89000000 );
        }
        else
        {
            sub_2370( ref iParam0->_fU0[3]._fU0, 1.68000000, 1.68000000 );
            sub_2370( ref iParam0->_fU0[0]._fU0, 1.75000000, 1.75000000 );
            sub_2370( iParam0 + 100, 0.05000000, 0.87500000 );
            sub_2370( iParam0 + 108, 0.95000000, 0.87500000 );
        }
        sub_2370( ref iParam0->_fU0[1]._fU0, fVar3, fVar3 );
        sub_2370( ref iParam0->_fU0[2]._fU0, fVar3, fVar3 );
        iParam0->_fU116 = 1678728908;
        sub_2370( iParam0 + 120, fVar3, fVar3 );
        iParam0->_fU128 = 1678728908;
        sub_2370( iParam0 + 132, fVar3, fVar3 );
        sub_2370( ref iParam0->_fU0[4]._fU0, fVar3, fVar3 );
        sub_2370( ref iParam0->_fU0[5]._fU0, fVar3, fVar3 );
        sub_2370( ref iParam0->_fU0[6]._fU0, fVar3, fVar3 );
        sub_2370( ref iParam0->_fU0[7]._fU0, fVar3, fVar3 );
        break;
        default:
        if (g_U94._fU500)
        {
            fVar3 = 1.55000000;
            sub_2370( ref iParam0->_fU0[3]._fU0, fVar3, fVar3 );
            sub_2370( iParam0 + 100, 0.05000000, 0.89000000 );
            sub_2370( iParam0 + 108, 0.95000000, 0.89000000 );
            sub_2370( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
        }
        else
        {
            sub_2370( ref iParam0->_fU0[3]._fU0, 1.75000000, 1.75000000 );
            sub_2370( ref iParam0->_fU0[0]._fU0, 1.75000000, 1.75000000 );
            sub_2370( iParam0 + 100, 0.05000000, 0.87500000 );
            sub_2370( iParam0 + 108, 0.95000000, 0.87500000 );
        }
        sub_2370( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
        sub_2370( ref iParam0->_fU0[1]._fU0, fVar3, fVar3 );
        sub_2370( ref iParam0->_fU0[2]._fU0, fVar3, fVar3 );
        iParam0->_fU116 = 1678728908;
        sub_2370( iParam0 + 120, fVar3, fVar3 );
        iParam0->_fU128 = 1678728908;
        sub_2370( iParam0 + 132, fVar3, fVar3 );
        sub_2370( ref iParam0->_fU0[4]._fU0, fVar3, fVar3 );
        sub_2370( ref iParam0->_fU0[5]._fU0, fVar3, fVar3 );
        sub_2370( ref iParam0->_fU0[6]._fU0, fVar3, fVar3 );
        sub_2370( ref iParam0->_fU0[7]._fU0, fVar3, fVar3 );
        break;
    }
    return;
}

void sub_2370(int iParam0, unknown uParam1, unknown uParam2)
{
    iParam0->_fU0 = uParam1;
    iParam0->_fU4 = uParam2;
    return;
}

void sub_3136()
{
    sub_3173( "\n == Mobile Phone Created" );
    GET_MOBILE_PHONE_RENDER_ID( ref g_U94._fU44 );
    while (g_U94._fU44 == -1)
    {
        WAIT( 0 );
        GET_MOBILE_PHONE_RENDER_ID( ref g_U94._fU44 );
        sub_3173( "\n == Getting Render Target" );
    }
    sub_3173( "\n == Mobile Phone Loaded" );
    g_U94._fU8._fU24 = 324.00000000;
    return;
}

void sub_3173(unknown uParam0)
{
    return;
}

void sub_3337()
{
    int I;

    g_U526._fU124 = 255;
    for ( I = 0; I <= 4; I++ )
    {
        sub_3373( I, 0 );
    }
    return;
}

void sub_3373(int iParam0, boolean bParam1)
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
    sub_3676( iParam0, fVar6, fVar7, fVar8, fVar8, fVar9 );
    return;
}

void sub_3676(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_2370( ref g_U526._fU20[uParam0]._fU0, uParam1, uParam2 );
    sub_2370( ref g_U526._fU20[uParam0]._fU8, uParam3, uParam4 );
    g_U526._fU20[uParam0]._fU16 = uParam5;
    return;
}

void sub_3796(unknown uParam0)
{
    l_U963 = 1;
    g_U94._fU0 = uParam0;
    return;
}

void sub_3861()
{
    int Result;
    unknown uVar3;
    int iVar4;

    iVar4 = -1;
    for ( Result = g_U572 - 1; Result >= 0; Result += -1 )
    {
        if (g_U572[Result]._fU0[0] != -1)
        {
            return Result;
        }
    }
    return iVar4;
}

void sub_4029(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_4062()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_4074() )))
    {
        sub_3173( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_3173( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_3173( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU100) || (g_U94._fU104))
    {
        sub_3173( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_4074() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_4498() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_4498(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_3173( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_4498() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_3173( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_3173( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_4074() )))
    {
        sub_3173( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_4074()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4498()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_4970(int iParam0)
{
    if (iParam0->_fU0 < 5)
    {
        return 1;
    }
    return 0;
}

int sub_5004()
{
    if ((g_U94._fU0 == 1010) || (g_U94._fU0 == 1001))
    {
        return 1;
    }
    return 0;
}

int sub_5142(int iParam0)
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
        sub_5167( ref uVar3, iParam0 );
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

void sub_5167(unknown uParam0, unknown uParam1)
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

void sub_5599()
{
    char[16] cVar2;
    char[16] cVar6;
    float fVar10;

    SET_TEXT_RENDER_ID( g_U94._fU44 );
    switch (g_U94._fU0)
    {
        case 1018:
        case 1019:
        case 1020:
        l_U1098 = GET_HOURS_OF_DAY();
        if (l_U1099 != l_U1098)
        {
            l_U1043 = l_U231[l_U6._fU16[l_U6._fU44]]._fU0;
            g_U94._fU92 = 1;
            l_U1099 = l_U1098;
        }
        break;
        case 1013:
        if (l_U1113 != g_U12303)
        {
            l_U1043 = l_U231[l_U6._fU16[l_U6._fU44]]._fU0;
            g_U94._fU92 = 1;
        }
        break;
    }
    if (sub_5814( ref l_U1114 ))
    {
        sub_5874( ref l_U6, ref l_U44, -1 );
        l_U990._fU116 = 1678728908;
        l_U990._fU128 = 1678728908;
        if (g_U94._fU0 == 1012)
        {
            g_U94._fU92 = 1;
            l_U1043 = l_U6._fU60;
        }
    }
    if ((l_U963) || (g_U94._fU92))
    {
        sub_8324();
    }
    fVar10 = 0.80000000;
    switch (g_U94._fU0)
    {
        case 1002:
        sub_23339( 1, l_U977, 1, 1 );
        switch (g_U94._fU404)
        {
            case 1016:
            StrCopy( ref cVar6, "CP_NAV_READ", 16 );
            break;
            default:
            StrCopy( ref cVar6, "CP_NAV_MENU", 16 );
            break;
        }
        if (l_U1105)
        {
            sub_23411( 0, g_U484._fU0[15], 0.15000000, 0.80000000, 0.20000000, 0.10000000 );
            if (l_U1106)
            {
                sub_23411( 0, g_U484._fU0[16], 0.35000000, 0.80000000, 0.10000000, 0.10000000 );
            }
        }
        else if (l_U1106)
        {
            sub_23411( 0, g_U484._fU0[16], 0.10000000, 0.80000000, 0.10000000, 0.10000000 );
        }
        if (g_U94._fU572)
        {
            sub_23411( 0, g_U484._fU0[17], 0.84500000, 0.25000000, 0.45000000, 0.20000000 );
        }
        if (g_U94._fU540)
        {
            sub_15056( 0, 0, ref l_U990._fU0[4], "CP_SLEEPMODE", 0.50000000, 0.30000000, 0.05000000, 0.95000000, 2, 0, 0, 0, 0, 1 );
        }
        sub_25856( ref l_U990, "CP_NAV_EXIT", ref cVar6, ref l_U977 );
        break;
        case 1003:
        sub_23339( 1, l_U977, 1, 0 );
        if (g_U94._fU40 == 2)
        {
            sub_24369( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, l_U977._fU8 );
        }
        if (l_U1095 != 0)
        {
            sub_15056( 0, 5, ref l_U990._fU0[0], ref g_U94._fU128, 0.90000000, 0.70000000, 0.10000000, 0.90000000, 1, 0, 0, 0, 0, 1 );
        }
        sub_25856( ref l_U990, "BLANK", "BLANK", ref l_U977 );
        if (g_U94._fU52 == 1)
        {
            sub_24640( 0 );
        }
        break;
        case 1015: if (l_U1044)
        {
            sub_23339( 1, l_U977, 1, 0 );
            sub_27080( ref l_U990._fU0[0], ref l_U977, ref l_U965, ref l_U1067, l_U1047, ref l_U1048, ref l_U1049, l_U1051 );
            sub_25856( ref l_U990, "CP_NAV_BACK", "BLANK", ref l_U977 );
            sub_28193( ref l_U6, ref l_U977, l_U6._fU60 );
            break;
        }
        case 1011:
        case 1012:
        case 1013:
        case 1014:
        case 1017:
        case 1018:
        case 1019:
        case 1027:
        case 1028:
        case 1029:
        case 1030:
        case 1036:
        case 1050:
        sub_23339( 1, l_U977, 1, 0 );
        sub_28646( ref l_U6, ref l_U44, ref l_U990, ref l_U977, 0 );
        StrCopy( ref cVar2, "CP_NAV_BACK", 16 );
        StrCopy( ref cVar6, "BLANK", 16 );
        switch (g_U94._fU0)
        {
            case 1050: StrCopy( ref cVar2, "CP_NAV_EXIT", 16 );
            case 1011:
            case 1017:
            case 1036:
            StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
            break;
            case 1027:
            switch (l_U6._fU60)
            {
                case 0:
                case 1:
                StrCopy( ref cVar6, "CP_CHANGE", 16 );
                break;
                default:
                StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
                break;
            }
            break;
            case 1018:
            sub_31348();
            if (l_U44[l_U6._fU44]._fU72)
            {
                StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
            }
            break;
            case 1019:
            sub_31348();
            if (l_U44[l_U6._fU44]._fU72)
            {
                StrCopy( ref cVar6, "CP_NAV_READ", 16 );
            }
            break;
            case 1012:
            if ((g_U94._fU68 == l_U6._fU60) || (l_U44[l_U6._fU44]._fU72))
            {
                StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
            }
            else
            {
                StrCopy( ref cVar6, "CP_NAV_CALL", 16 );
            }
            break;
            case 1013:
            case 1014:
            StrCopy( ref cVar6, "CP_NAV_CALL", 16 );
            break;
            case 1015:
            StrCopy( ref cVar6, "CP_NAV_READ", 16 );
            sub_31703();
            break;
            case 1028:
            if (g_U94._fU112 != l_U6._fU60)
            {
                StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
            }
            break;
            case 1029:
            if (g_U94._fU108 != l_U6._fU60)
            {
                StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
            }
            break;
            case 1030:
            if (g_U94._fU396 != l_U6._fU60)
            {
                StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
            }
            break;
        }
        sub_25856( ref l_U990, ref cVar2, ref cVar6, ref l_U977 );
        break;
        case 1016:
        case 1039:
        case 1040:
        case 1041:
        case 1044:
        case 1046:
        case 1047:
        case 1037:
        case 1031:
        case 1020:
        case 1033:
        case 1034:
        StrCopy( ref cVar2, "CP_NAV_BACK", 16 );
        StrCopy( ref cVar6, "BLANK", 16 );
        sub_23339( 1, l_U977, 1, 0 );
        switch (g_U94._fU0)
        {
            case 1016:
            if (l_U1045)
            {
                StrCopy( ref cVar6, "CP_OPT_REPLAY", 16 );
            }
            else if (l_U1066)
            {
                StrCopy( ref cVar6, "CP_OPT_OPTIONS", 16 );
            }
            break;
            case 1039:
            case 1040:
            case 1041:
            case 1044:
            if (g_U94._fU40 == 0)
            {
                StrCopy( ref cVar2, "CP_NAV_EXIT", 16 );
            }
            break;
            case 1033:
            StrCopy( ref cVar2, "CP_NAV_NO", 16 );
            StrCopy( ref cVar6, "CP_NAV_YES", 16 );
            break;
            case 1031:
            case 1037:
            StrCopy( ref cVar2, "CP_NAV_NO", 16 );
            StrCopy( ref cVar6, "CP_NAV_YES", 16 );
            break;
        }
        sub_27080( ref l_U990._fU0[0], ref l_U977, ref l_U965, ref l_U1067, l_U1047, ref l_U1048, ref l_U1049, l_U1051 );
        sub_25856( ref l_U990, ref cVar2, ref cVar6, ref l_U977 );
        sub_28193( ref l_U6, ref l_U977, l_U6._fU60 );
        break;
        case 1021:
        sub_23339( 1, l_U977, 1, 0 );
        if (l_U1108)
        {
            switch (l_U1109)
            {
                case 0:
                l_U1112 += l_U1110;
                if (l_U1112 >= (0.62500000 + l_U1111))
                {
                    l_U1112 = 0.62500000 + l_U1111;
                    l_U1111 *= 0.75000000;
                    l_U1110 *= 0.75000000;
                    l_U1109++;
                }
                break;
                case 1:
                l_U1112 -= l_U1110;
                if (l_U1112 <= (0.62500000 - l_U1111))
                {
                    l_U1112 = 0.62500000 - l_U1111;
                    l_U1111 *= 0.75000000;
                    l_U1110 *= 0.75000000;
                    l_U1109++;
                }
                break;
                case 2:
                l_U1112 += l_U1110;
                if (l_U1112 >= (0.62500000 + l_U1111))
                {
                    l_U1112 = 0.62500000 + l_U1111;
                    l_U1111 *= 0.75000000;
                    l_U1110 *= 0.75000000;
                    l_U1109++;
                }
                break;
                case 3:
                l_U1112 -= l_U1110;
                if (l_U1112 <= 0.62500000)
                {
                    l_U1112 = 0.62500000;
                    l_U1108 = 0;
                }
                break;
            }
            CELL_CAM_SET_CENTRE_POS( l_U1112, 0.40000000 );
        }
        else if (g_U94._fU516 != 0.00000000)
        {
            l_U1108 = 1;
            l_U1109 = 0;
            l_U1111 = (0.60000000 - l_U1107) * 0.10000000;
            sub_3173( "\n SHAKE AMOUNT IS " );
            sub_32972( l_U1111 );
            l_U1110 = l_U1111 * g_U94._fU516;
            l_U1112 = 0.62500000;
            g_U94._fU516 = 0.00000000;
        }
        if (l_U1080)
        {
            DRAW_SPRITE_PHOTO( 0.48500000, 0.49000000 * 0.65000000, 0.97000000, 0.67000000 * 0.65000000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            l_U1080 = 1;
        }
        sub_28193( ref l_U6, ref l_U977, l_U6._fU60 );
        sub_25856( ref l_U990, "CP_NAV_BACK", "CAMERA_CAPTURE", ref l_U977 );
        break;
        case 1022:
        sub_23339( 1, l_U977, 1, 0 );
        switch (l_U1082)
        {
            case 0:
            l_U1081 += 0.08000000;
            if (l_U1081 >= 0.33500000)
            {
                l_U1081 = 0.50000000;
                l_U1082++;
                CELL_CAM_ACTIVATE( 0, 1 );
            }
            break;
            case 1:
            l_U1081 -= 0.08000000;
            if (l_U1081 <= 0.00000000)
            {
                l_U1081 = 0.00000000;
                sub_3796( 1023 );
            }
            break;
        }
        DRAW_SPRITE_PHOTO( 0.48500000, 0.49000000 * 0.65000000, 0.97000000, 0.67000000 * 0.65000000, 0.00000000, 255, 255, 255, 255 );
        sub_23569( 0, 0.48500000, 0.15500000 + (l_U1081 * 0.50000000), 0.97000000, l_U1081, 0, 0, 0, 255 );
        sub_23569( 0, 0.48500000, 0.82000000 - (l_U1081 * 0.50000000), 0.97000000, l_U1081, 0, 0, 0, 255 );
        sub_28193( ref l_U6, ref l_U977, l_U6._fU60 );
        sub_7048( "\n the scroll be at ", l_U6._fU60 );
        sub_25856( ref l_U990, "BLANK", "BLANK", ref l_U977 );
        break;
        case 1024:
        sub_23339( 1, l_U977, 1, 0 );
        DRAW_SPRITE_PHOTO( 0.48500000, 0.49000000 * 0.65000000, 0.97000000, 0.67000000 * 0.65000000, 0.00000000, 255, 255, 255, 255 );
        sub_28193( ref l_U6, ref l_U977, -1 );
        if (g_U94._fU88)
        {
            sub_25856( ref l_U990, "CP_NAV_BACK", "CP_NAV_SEND", ref l_U977 );
        }
        else
        {
            sub_25856( ref l_U990, "CP_NAV_BACK", "BLANK", ref l_U977 );
        }
        break;
        case 1025:
        sub_23339( 1, l_U977, 1, 0 );
        if (l_U960 == 0.00000000)
        {
            sub_24369( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, l_U977._fU8 );
        }
        if (GET_CURRENT_LANGUAGE() == 6)
        {
            fVar10 = 0.90000000;
        }
        else
        {
            fVar10 = 0.80000000;
        }
        if (l_U1083 < 4)
        {
            sub_15056( 0, 0, ref l_U990._fU0[0], "CP_INFO_SENDING", 0.10000000, 0.20000000, 0.10000000, fVar10, 0, 0, 0, 0, 0, 1 );
            sub_15056( 0, 0, ref l_U990._fU0[0], ref l_U1101, 0.10000000, 0.70000000, 0.10000000, fVar10, 0, 0, 0, 0, 0, 1 );
        }
        else
        {
            sub_15056( 0, 0, ref l_U990._fU0[0], "CP_INFO_SENT", 0.10000000, 0.20000000, 0.10000000, fVar10, 0, 0, 0, 0, 0, 1 );
        }
        switch (l_U1083)
        {
            case 0:
            sub_23411( 0, g_U484._fU0[19], 0.50000000, 0.49500000, 0.50000000, 0.50000000 );
            sub_23411( 0, g_U484._fU0[20], 0.50000000, 0.49500000, 0.50000000, 0.50000000 );
            if (l_U962)
            {
                l_U1084._fU0 -= l_U1086._fU0;
                l_U1084._fU4 -= l_U1086._fU4;
                l_U1088._fU0 -= l_U1090._fU0;
                l_U1088._fU4 -= l_U1090._fU4;
            }
            DRAW_SPRITE_PHOTO( l_U1084._fU0, (0.15500000 * 0.65000000) + l_U1084._fU4, l_U1088._fU0, l_U1088._fU4, 0.00000000, 255, 255, 255, 255 );
            if (l_U1088._fU0 <= 0.35000000)
            {
                l_U1083++;
            }
            break;
            case 1:
            case 2:
            case 3:
            case 4:
            sub_23411( 0, g_U484._fU0[20], 0.50000000, 0.49500000, 0.50000000, 0.50000000 );
            if (l_U962)
            {
                switch (l_U1083)
                {
                    case 1:
                    l_U1084._fU0 += l_U1090._fU0;
                    if (l_U1084._fU0 >= 0.50000000)
                    {
                        l_U1084._fU0 = 0.50000000;
                        l_U1083++;
                    }
                    break;
                    case 2:
                    l_U1084._fU4 += l_U1090._fU4;
                    if (l_U1084._fU4 >= (0.41500000 * 0.65000000))
                    {
                        l_U1083++;
                    }
                    break;
                    case 3:
                    l_U1092 -= 25;
                    if (l_U1092 <= 0)
                    {
                        l_U1092 = 0;
                        l_U1083++;
                        SETTIMERA( 0 );
                    }
                    break;
                    case 4:
                    if (TIMERA() >= 500)
                    {
                        sub_3796( 1001 );
                        l_U1083++;
                    }
                    break;
                }
            }
            DRAW_SPRITE_PHOTO( l_U1084._fU0, (0.15500000 * 0.65000000) + l_U1084._fU4, l_U1088._fU0, l_U1088._fU4, 0.00000000, 255, 255, 255, l_U1092 );
            sub_23411( 0, g_U484._fU0[19], 0.50000000, 0.49500000, 0.50000000, 0.50000000 );
            if (l_U1083 == 5)
            {
                sub_107();
            }
            break;
        }
        sub_25856( ref l_U990, "BLANK", "BLANK", ref l_U977 );
        break;
    }
    sub_34836( ref l_U990._fU0[3], ref l_U977 );
    return;
}

int sub_5814(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_5874(int iParam0, unknown uParam1, int iParam2)
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
        sub_6035( ref (uParam1^)[I] );
        if ((uParam1^)[I]._fU0)
        {
            if ((sub_6318( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU40, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48, fVar8, fVar8 )) > fVar10)
            {
                if ((sub_6318( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU40, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48, fVar9, fVar9 )) > fVar10)
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
                        while ((sub_6318( ref cVar13, 1, 0, 0, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU104++;
                            StrCopy( ref cVar13, GET_STRING_FROM_STRING( ref (uParam1^)[I]._fU8, 0, (uParam1^)[I]._fU104 ), 32 );
                            sub_6819( "\n The following is the cutdown label ", ref cVar13 );
                        }
                    }
                    else
                    {
                        while ((sub_6894( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48, 0, (uParam1^)[I]._fU104, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU104++;
                            sub_7048( "\n Cutdown label end = ", (uParam1^)[I]._fU104 );
                        }
                    }
                    (uParam1^)[I]._fU104--;
                    if (I == iParam0->_fU44)
                    {
                        iParam0->_fU124 = (uParam1^)[I]._fU100;
                        iParam0->_fU128 = (uParam1^)[I]._fU104;
                        iParam0->_fU132 = 1;
                    }
                    sub_6819( "\n The following string is going to scroll ", ref (uParam1^)[I]._fU8 );
                    sub_7048( " starting at ", (uParam1^)[I]._fU100 );
                    sub_7048( " and ending at ", (uParam1^)[I]._fU104 );
                    sub_3173( "." );
                }
                else
                {
                    sub_6819( "\n The following string is using the RetryScale ", ref (uParam1^)[I]._fU8 );
                    (uParam1^)[I]._fU76._fU0 = fVar9;
                    (uParam1^)[I]._fU76._fU4 = fVar9;
                }
            }
            if ((sub_6318( ref (uParam1^)[I]._fU52, (uParam1^)[I]._fU68, 0, 0, fVar8, fVar8 )) > fVar11)
            {
                if ((sub_6318( ref (uParam1^)[I]._fU52, (uParam1^)[I]._fU68, 0, 0, fVar9, fVar9 )) > fVar11)
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
                        while ((sub_6318( ref cVar13, 1, 0, 0, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU120++;
                            StrCopy( ref cVar13, GET_STRING_FROM_STRING( ref (uParam1^)[I]._fU52, 0, (uParam1^)[I]._fU120 ), 32 );
                            sub_6819( "\n The following is the cutdown label ", ref cVar13 );
                        }
                    }
                    else
                    {
                        while ((sub_6894( ref (uParam1^)[I]._fU52, 0, 0, 0, (uParam1^)[I]._fU120, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU120++;
                            sub_7048( "\n Cutdown label end = ", (uParam1^)[I]._fU120 );
                        }
                    }
                    (uParam1^)[I]._fU120--;
                    if (I == iParam0->_fU44)
                    {
                        iParam0->_fU140 = (uParam1^)[I]._fU116;
                        iParam0->_fU144 = (uParam1^)[I]._fU120;
                        iParam0->_fU148 = 1;
                    }
                    sub_6819( "\n The following string is going to scroll ", ref (uParam1^)[I]._fU52 );
                    sub_7048( " starting at ", (uParam1^)[I]._fU116 );
                    sub_7048( " and ending at ", (uParam1^)[I]._fU120 );
                    sub_3173( "." );
                }
                else
                {
                    sub_6819( "\n The following string is using the RetryScale ", ref (uParam1^)[I]._fU52 );
                    (uParam1^)[I]._fU84._fU0 = fVar9;
                    (uParam1^)[I]._fU84._fU4 = fVar9;
                }
            }
        }
    }
    return;
}

void sub_6035(int iParam0)
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

void sub_6318(unknown uParam0, boolean bParam1, boolean bParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_6819(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6894(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SET_TEXT_FONT( 0 );
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_FONT( 2 );
    }
    SET_TEXT_SCALE( uParam5, uParam6 * 0.65000000 );
    return GET_WIDTH_OF_SUBSTRING_GIVEN_TEXT_LABEL( uParam0, uParam1, uParam2, uParam3, uParam4 );
}

void sub_7048(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8324()
{
    int I;
    int iVar3;
    int iVar4;
    int iVar5;
    boolean bVar6;
    char[16] cVar7;
    char[16] cVar11;
    int iVar15;
    unknown uVar16;
    int iVar17;
    int iVar18;

    g_U94._fU528 = 0;
    switch (g_U94._fU0)
    {
        case 1002:
        l_U1093 = 2;
        l_U1094 = 1;
        sub_8637( ref l_U965 );
        l_U1105 = sub_8727();
        l_U1106 = sub_9043();
        l_U964 = 0;
        break;
        case 1011:
        switch (l_U1043)
        {
            case 1021:
            sub_107();
            break;
            default:
        }
        sub_9472( ref l_U6, 1, l_U1043, 0 );
        sub_9556( ref l_U6, ref l_U231, 1012, "CP_OPT_PBOOK", "", 1, 0, 0, 0, 0 );
        sub_9556( ref l_U6, ref l_U231, 1015, "CP_OPT_MESSAGES", "", 1, 0, 0, 0, 0 );
        if (N_747217401())
        {
            sub_9556( ref l_U6, ref l_U231, 1048, "CP_OPT_NETWORK", "", 1, 0, 0, 0, 0 );
            if (NETWORK_IS_ROCKSTART_SESSION_ID_VALID())
            {
                sub_9556( ref l_U6, ref l_U231, 1049, "NTGT_25", "", 1, 0, 0, 0, 0 );
            }
        }
        sub_9556( ref l_U6, ref l_U231, 1018, "CP_OPT_ORGAN", "", 1, 0, 0, 0, 0 );
        if (g_U94._fU40 == 2)
        {
            sub_9556( ref l_U6, ref l_U231, 1021, "CP_OPT_CAMERA", "", 1, 0, 0, 0, 0 );
        }
        sub_9556( ref l_U6, ref l_U231, 1027, "CP_OPT_OPTIONS", "", 1, 0, 0, 0, 0 );
        if ((# -NULL-0xc27e40()) AND (g_U94._fU40 != 0))
        {
            sub_9556( ref l_U6, ref l_U231, 1032, "CP_OPT_REPMENU", "", 1, 0, 0, 0, 0 );
        }
        if (ProtectedGet(g_U94._fU536) != 0)
        {
            sub_9556( ref l_U6, ref l_U231, 1036, "CP_CHEATS", "", 1, 0, 0, 0, 0 );
        }
        if ((NOT (# -NULL-0xc27c84())) AND (NOT (# -NULL-0xc27bfa())))
        {
            if (((g_U826) AND (NOT g_U12303)) AND (NOT IS_MINIGAME_IN_PROGRESS()))
            {
                sub_9556( ref l_U6, ref l_U231, 65486, "CP_6AXIS", "", 1, 0, 0, 0, 0 );
            }
        }
        sub_10328( ref l_U6, ref l_U231, ref l_U44, 1, 1, 0 );
        l_U1146 = 0;
        l_U1147 = 0;
        break;
        case 1013:
        l_U1113 = g_U12303;
        if (g_U15862[g_U94._fU60]._fU196._fU0)
        {
            sub_9472( ref l_U6, 1, l_U1043, 0 );
            iVar3 = 22 - 1;
            if (g_U15862[g_U94._fU60]._fU8[0]._fU0[2])
            {
                StrCopy( ref cVar7, "SP_", 16 );
                ConcatString(ref cVar7, ref g_U15862[g_U94._fU60]._fU196._fU8, 16);
                ConcatString(ref cVar7, "_", 16);
                ConcatString(ref cVar7, 2, 16);
                sub_9556( ref l_U6, ref l_U231, 2, ref cVar7, "", 1, 0, 0, 0, 0 );
            }
            for ( I = 0; I <= iVar3; I++ )
            {
                if (I != 2)
                {
                    if (g_U15862[g_U94._fU60]._fU8[0]._fU0[I])
                    {
                        bVar6 = false;
                        if (I < 5)
                        {
                            StrCopy( ref cVar7, "SP_", 16 );
                            ConcatString(ref cVar7, ref g_U15862[g_U94._fU60]._fU196._fU8, 16);
                            ConcatString(ref cVar7, "_", 16);
                            ConcatString(ref cVar7, I, 16);
                            bVar6 = true;
                        }
                        else if (g_U15862[g_U94._fU60]._fU8[0]._fU0[2])
                        {
                            if (I == 5)
                            {
                                sub_12376( ref cVar7, "CALL_", ref g_U15862[g_U94._fU60]._fU196._fU8, I - 5, -1 );
                                if (NOT (DOES_TEXT_LABEL_EXIST( ref cVar7 )))
                                {
                                    sub_12479( ref cVar7, "CALL", I - 5, -1, -1 );
                                }
                                bVar6 = true;
                            }
                        }
                        else if (NOT g_U12303)
                        {
                            sub_12376( ref cVar7, "CALL_", ref g_U15862[g_U94._fU60]._fU196._fU8, I - 5, -1 );
                            if (NOT (DOES_TEXT_LABEL_EXIST( ref cVar7 )))
                            {
                                sub_12479( ref cVar7, "E1CALL", I - 5, -1, -1 );
                            }
                            bVar6 = true;
                        }
                        else if ((I == 5) AND (g_U94._fU68 == g_U94._fU60))
                        {
                            sub_12376( ref cVar7, "CALL_EXIT_", ref g_U15862[g_U94._fU60]._fU196._fU8, -1, -1 );
                            if (NOT (DOES_TEXT_LABEL_EXIST( ref cVar7 )))
                            {
                                StrCopy( ref cVar7, "CALL_EXIT_JOB", 16 );
                            }
                            bVar6 = true;
                        };;;;
                        if (bVar6)
                        {
                            sub_9556( ref l_U6, ref l_U231, I, ref cVar7, "", 1, 0, 0, 0, 0 );
                        }
                    }
                }
            }
            sub_9556( ref l_U6, ref l_U231, 22, "CP_NAV_CALL", "", 1, 0, 0, 0, 0 );
            sub_10328( ref l_U6, ref l_U231, ref l_U44, 1, 1, 0 );
            break;
        }
        case 1012:
        g_U94._fU0 = 1012;
        sub_12891();
        sub_9472( ref l_U6, 1, l_U1043, 0 );
        sub_13197();
        sub_10328( ref l_U6, ref l_U231, ref l_U44, 1, 1, 0 );
        break;
        case 1014:
        sub_9472( ref l_U6, 1, l_U1043, 0 );
        switch (g_U94._fU60)
        {
            case 7:
            if (g_U15728[33])
            {
                sub_9556( ref l_U6, ref l_U231, 301427732, "HEXER", "", 1, 0, 0, 0, 0 );
            }
            if (g_U15728[34])
            {
                sub_9556( ref l_U6, ref l_U231, -570033273, "ZOMB", "", 1, 0, 0, 0, 0 );
            }
            if (g_U15728[35])
            {
                sub_9556( ref l_U6, ref l_U231, -408052231, "DIABO", "", 1, 0, 0, 0, 0 );
            }
            if (g_U15728[36])
            {
                sub_9556( ref l_U6, ref l_U231, 584879743, "HELLFURY", "", 1, 0, 0, 0, 0 );
            }
            if (g_U15728[37])
            {
                sub_9556( ref l_U6, ref l_U231, 802082487, "LYCAN", "", 1, 0, 0, 0, 0 );
            }
            if (g_U15728[38])
            {
                sub_9556( ref l_U6, ref l_U231, -359167535, "REVENANT", "", 1, 0, 0, 0, 0 );
            }
            if (g_U15728[39])
            {
                sub_9556( ref l_U6, ref l_U231, -1670998136, "DOUBLE", "", 1, 0, 0, 0, 0 );
            }
            if (g_U15728[32])
            {
                sub_9556( ref l_U6, ref l_U231, 1265391242, "HAKUCH", "", 1, 0, 0, 0, 0 );
            }
            if (g_U15728[30])
            {
                sub_9556( ref l_U6, ref l_U231, -159126838, "INNOV", "", 1, 0, 0, 0, 0 );
            }
            if (g_U15728[31])
            {
                sub_9556( ref l_U6, ref l_U231, -114291515, "BATI", "", 1, 0, 0, 0, 0 );
            }
            break;
            case 1:
            if (g_U15728[40])
            {
                sub_9556( ref l_U6, ref l_U231, 7, "CP_JIMSM_0", "", 1, 0, 0, 0, 0 );
            }
            if (g_U15728[45])
            {
                sub_9556( ref l_U6, ref l_U231, 12, "CP_JIMSM_2", "", 1, 0, 0, 0, 0 );
            }
            if (g_U15728[41])
            {
                sub_9556( ref l_U6, ref l_U231, 27, "CP_JIMSM_11", "", 1, 0, 0, 0, 0 );
            }
            if (g_U15728[43])
            {
                sub_9556( ref l_U6, ref l_U231, 26, "CP_JIMSM_12", "", 1, 0, 0, 0, 0 );
            }
            if (g_U15728[55])
            {
                sub_9556( ref l_U6, ref l_U231, 28, "CP_JIMSM_14", "", 1, 0, 0, 0, 0 );
            }
            break;
        }
        sub_10328( ref l_U6, ref l_U231, ref l_U44, 1, 1, 0 );
        break;
        case 1015:
        if (g_U94._fU520)
        {
            g_U94._fU520 = 0;
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
        sub_8637( ref l_U965 );
        iVar3 = sub_14657();
        if (iVar3 == 0)
        {
            l_U1044 = 1;
            StrCopy( ref l_U1067[0], "NO_TXT_MESSAGES", 16 );
            StrCopy( ref l_U1067[1], "", 16 );
            StrCopy( ref l_U1067[2], "", 16 );
            l_U1047 = 0;
            sub_14866( ref l_U990._fU0[0], ref l_U1067, l_U1047, ref l_U1051, ref l_U1050, ref l_U1048, ref l_U1049, ref l_U6._fU44, ref l_U6._fU60, ref l_U6._fU56, ref l_U6._fU52 );
        }
        else
        {
            sub_9472( ref l_U6, 2, l_U1043, 0 );
            for ( I = 0; I <= (iVar3 - 1); I++ )
            {
                sub_15969( ref cVar7, "T1_NAME_", sub_8765( 0, g_U572[(iVar3 - 1) - I] ), -1, -1 );
                if ((sub_8765( 1, g_U572[(iVar3 - 1) - I] )) == 0)
                {
                    StrCopy( ref cVar11, "CP_FAKE_REPLAY", 16 );
                }
                else
                {
                    sub_15969( ref cVar11, "T1", sub_8765( 0, g_U572[(iVar3 - 1) - I] ), sub_8765( 1, g_U572[(iVar3 - 1) - I] ), -1 );
                }
                sub_9556( ref l_U6, ref l_U231, (iVar3 - 1) - I, ref cVar7, ref cVar11, 1, 0, 0, 0, 0 );
            }
            l_U1044 = 0;
            sub_10328( ref l_U6, ref l_U231, ref l_U44, 1, 0, 0.15000000 );
        }
        break;
        case 1020: if (g_U94._fU92)
        {
            if (l_U1096 == GET_CURRENT_DAY_OF_WEEK())
            {
                if (l_U1097 < sub_16260())
                {
                    g_U94._fU0 = 1018;
                    l_U1043 = -1;
                    sub_8324();
                    break;
                }
            }
        }
        case 1016:
        if (g_U94._fU520)
        {
            g_U94._fU520 = 0;
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
        l_U1052 = 0;
        l_U1053 = -1;
        StrCopy( ref l_U1067[0], "", 16 );
        StrCopy( ref l_U1067[1], "", 16 );
        l_U1045 = 0;
        l_U1047 = 0;
        l_U1066 = 0;
        switch (g_U94._fU0)
        {
            case 1016:
            iVar5 = sub_8765( 0, g_U572[l_U1046] );
            I = sub_8765( 1, g_U572[l_U1046] );
            if (iVar5 < 22)
            {
                if (g_U15862[iVar5]._fU196._fU0)
                {
                    l_U1052 = 1;
                    l_U1053 = iVar5;
                    l_U1066 = 1;
                    l_U1067[1] = {g_U15862[iVar5]._fU196._fU8};
                    sub_12376( ref l_U1067[0], "TXTN_", ref l_U1067[1], I, -1 );
                    sub_12376( ref l_U1062, "CONT_", ref l_U1067[1], -1, -1 );
                }
            }
            if (DOES_TEXT_LABEL_EXIST( ref l_U1067[0] ))
            {
                l_U1058 = {l_U1067[0]};
                ConcatString(ref l_U1067[0], "S", 16);
                StrCopy( ref l_U1054, GET_STRING_FROM_TEXT_FILE( ref l_U1067[0] ), 16 );
                l_U1066 = 1;
            }
            else
            {
                StrCopy( ref l_U1058, "", 16 );
            }
            if (((iVar5 == 82) AND (I == 404)) AND ((sub_8765( 4, g_U572[l_U1046] )) == 0))
            {
                sub_16791( 1 );
            }
            sub_17481( ref g_U572[l_U1046] );
            if (NOT sub_8727())
            {
                SET_MESSAGES_WAITING( 0 );
            }
            sub_15969( ref l_U1067[0], "T1", iVar5, I, -1 );
            if (I == 0)
            {
                l_U1045 = 1;
                StrCopy( ref l_U1067[0], "CP_REAL_REPLAY", 16 );
                l_U1067[1] = {g_U10982};
            }
            else
            {
                I = sub_8765( 2, g_U572[l_U1046] );
                if (I != 16383)
                {
                    sub_15969( ref l_U1067[1], "T1", iVar5, I, -1 );
                }
                I = sub_8765( 3, g_U572[l_U1046] );
                if (I != 16383)
                {
                    sub_15969( ref l_U1067[2], "T1", iVar5, I, -1 );
                }
                I = sub_8765( 6, g_U572[l_U1046] );
                if (I != -1)
                {
                    l_U1047 = 1;
                    sub_18049( ref l_U965, I );
                }
                if (g_U572[l_U1046]._fU20)
                {
                    l_U1066 = 1;
                }
            }
            break;
            case 1020:
            sub_18199( ref l_U1067[0], l_U1096, l_U1097 );
            break;
        }
        sub_14866( ref l_U990._fU0[0], ref l_U1067, l_U1047, ref l_U1051, ref l_U1050, ref l_U1048, ref l_U1049, ref l_U6._fU44, ref l_U6._fU60, ref l_U6._fU56, ref l_U6._fU52 );
        break;
        case 1019:
        if (g_U94._fU92)
        {
            if (l_U1096 == GET_CURRENT_DAY_OF_WEEK())
            {
                if (l_U1098 == 0)
                {
                    g_U94._fU0 = 1018;
                    l_U1043 = -1;
                    sub_8324();
                    break;
                }
            }
        }
        if (l_U1096 == GET_CURRENT_DAY_OF_WEEK())
        {
            iVar4 = sub_16260();
        }
        else
        {
            iVar4 = 0;
        }
        if (l_U1043 == -1)
        {
            l_U1043 = sub_18584( l_U1096, iVar4 );
        }
        sub_9472( ref l_U6, 2, l_U1043, 0 );
        for ( I = iVar4; I <= 3; I++ )
        {
            sub_15969( ref cVar7, "CP_ORGAN_", I, -1, -1 );
            sub_18199( ref cVar11, l_U1096, I );
            sub_9556( ref l_U6, ref l_U231, I, ref cVar7, ref cVar11, sub_18733( l_U1096, I ), 0, 0, 0, 0 );
        }
        sub_10328( ref l_U6, ref l_U231, ref l_U44, 1, 1, 0.15000000 );
        break;
        case 1018:
        l_U1098 = GET_HOURS_OF_DAY();
        l_U1099 = l_U1098;
        sub_9472( ref l_U6, 1, l_U1043, 0 );
        iVar15 = GET_CURRENT_DAY_OF_WEEK();
        sub_9556( ref l_U6, ref l_U231, iVar15, "DOW_TODAY", "", sub_18896( iVar15, sub_16260() ), 0, 0, 0, 0 );
        if (iVar15 != (7 - 1))
        {
            for ( I = iVar15 + 1; I <= (7 - 1); I++ )
            {
                sub_15969( ref cVar7, "DOW_DAY_", I, -1, -1 );
                sub_9556( ref l_U6, ref l_U231, I, ref cVar7, "", sub_18896( I, 0 ), 0, 0, 0, 0 );
            }
        }
        if (iVar15 != 0)
        {
            for ( I = 0; I <= (iVar15 - 1); I++ )
            {
                sub_15969( ref cVar7, "DOW_DAY_", I, -1, -1 );
                sub_9556( ref l_U6, ref l_U231, I, ref cVar7, "", sub_18896( I, 0 ), 0, 0, 0, 0 );
            }
        }
        sub_10328( ref l_U6, ref l_U231, ref l_U44, 1, 1, 0.15000000 );
        break;
        case 1021:
        g_U94._fU88 = 0;
        DISPLAY_HUD( 0 );
        CELL_CAM_SET_CENTRE_POS( 0.62500000, 0.40000000 );
        CELL_CAM_SET_ZOOM( 0.37500000 );
        l_U1107 = 0.37500000;
        CELL_CAM_ACTIVATE( 1, 1 );
        l_U1080 = 0;
        l_U6._fU52 = 1;
        l_U6._fU60 = 25;
        l_U6._fU56 = 0.72000000 / 50.00000000;
        l_U1108 = 0;
        l_U1109 = 0;
        l_U1110 = 0.00000000;
        l_U1111 = 0.00000000;
        g_U94._fU516 = 0.00000000;
        break;
        case 1022:
        l_U1082 = 0;
        l_U1081 = 0.00000000;
        break;
        case 1024: break;
        case 1025:
        StrCopy( ref l_U1101, "CONT_", 16 );
        ConcatString(ref l_U1101, ref g_U15862[g_U94._fU60]._fU196._fU8, 16);
        l_U1083 = 0;
        l_U1092 = 255;
        sub_2370( ref l_U1084, 0.48500000, 0.33500000 * 0.65000000 );
        sub_2370( ref l_U1088, 0.97000000, 0.67000000 * 0.65000000 );
        sub_2370( ref l_U1086, l_U1084._fU0 / 25.00000000, l_U1084._fU4 / 25.00000000 );
        sub_2370( ref l_U1090, l_U1088._fU0 / 25.00000000, l_U1088._fU4 / 25.00000000 );
        break;
        case 1017:
        sub_9472( ref l_U6, 2, l_U1043, 0 );
        if (NOT (COMPARE_STRING( ref l_U1058, "" )))
        {
            sub_9556( ref l_U6, ref l_U231, 1, "CP_NAV_CALL", ref l_U1058, 1, 0, 0, 0, 0 );
        }
        if (l_U1052)
        {
            sub_9556( ref l_U6, ref l_U231, 0, "CP_NAV_CALL", ref l_U1062, 1, 0, 0, 0, 0 );
        }
        if (g_U572[l_U1046]._fU20)
        {
            sub_9556( ref l_U6, ref l_U231, 2, "CP_OPT_DELETE", "CP_OPT_MESSAGE", 1, 0, 0, 0, 0 );
        }
        sub_10328( ref l_U6, ref l_U231, ref l_U44, 1, 1, 0 );
        break;
        case 1027:
        sub_9472( ref l_U6, 2, l_U1043, 0 );
        sub_15969( ref cVar7, "CP_RINGTYPE_", g_U94._fU112, -1, -1 );
        sub_9556( ref l_U6, ref l_U231, 1028, "CP_OPT_RINGTYPE", ref cVar7, 1, 0, 0, 0, 0 );
        if (g_U94._fU108 == 60)
        {
            StrCopy( ref cVar7, "CP_RINGTONE_38", 16 );
        }
        else if (g_U94._fU108 == 61)
        {
            StrCopy( ref cVar7, "CP_RINGTONE_39", 16 );
        }
        else
        {
            sub_15969( ref cVar7, "CP_RINGTONE_", g_U94._fU108, -1, -1 );
        }
        sub_9556( ref l_U6, ref l_U231, 1029, "CP_OPT_RINGTONE", ref cVar7, 1, 0, 0, 0, 0 );
        if (g_U94._fU40 == 2)
        {
            sub_15969( ref cVar7, "CP_ANIMTM_", g_U94._fU396, -1, -1 );
            sub_9556( ref l_U6, ref l_U231, 1030, "CP_OPT_THEME", ref cVar7, 1, 0, 0, 0, 0 );
        }
        GET_SCREEN_RESOLUTION( ref iVar17, ref iVar18 );
        if ((iVar17 * iVar18) > 480000)
        {
            if (g_U94._fU500)
            {
                StrCopy( ref cVar7, "CP_TEXT_SMALL", 16 );
            }
            else
            {
                StrCopy( ref cVar7, "CP_TEXT_LARGE", 16 );
            }
            sub_9556( ref l_U6, ref l_U231, 0, "CP_TEXT_SIZE", ref cVar7, 1, 0, 0, 0, 0 );
        }
        if (g_U94._fU524)
        {
            StrCopy( ref cVar7, "CP_NAV_YES", 16 );
        }
        else
        {
            StrCopy( ref cVar7, "CP_NAV_NO", 16 );
        }
        sub_9556( ref l_U6, ref l_U231, 1, "CP_KEYPAD_TONE", ref cVar7, 1, 0, 0, 0, 0 );
        if (NOT g_U12303)
        {
            if (g_U94._fU540)
            {
                sub_9556( ref l_U6, ref l_U231, 1031, "CP_SLEEP_ON1", "CP_SLEEP_OFF", 1, 0, 0, 0, 0 );
            }
            else
            {
                sub_9556( ref l_U6, ref l_U231, 1031, "CP_SLEEP_ON1", "CP_SLEEP_ON2", 1, 0, 0, 0, 0 );
            }
        }
        sub_10328( ref l_U6, ref l_U231, ref l_U44, 1, 1, 0 );
        break;
        case 1028:
        l_U1043 = g_U94._fU112;
        sub_9472( ref l_U6, 1, l_U1043, 0 );
        sub_9556( ref l_U6, ref l_U231, 4, "CP_RINGTYPE_4", "", 1, 0, 0, 0, 0 );
        sub_9556( ref l_U6, ref l_U231, 0, "CP_RINGTYPE_0", "", 1, 0, 0, 0, 0 );
        sub_9556( ref l_U6, ref l_U231, 3, "CP_RINGTYPE_3", "", 1, 0, 0, 0, 0 );
        sub_9556( ref l_U6, ref l_U231, 1, "CP_RINGTYPE_1", "", 1, 0, 0, 0, 0 );
        sub_9556( ref l_U6, ref l_U231, 2, "CP_RINGTYPE_2", "", 1, 0, 0, 0, 0 );
        sub_10328( ref l_U6, ref l_U231, ref l_U44, 1, 1, 0 );
        break;
        case 1029:
        l_U1100 = 0;
        SETTIMERA( 0 );
        l_U1043 = g_U94._fU108;
        sub_9472( ref l_U6, 1, l_U1043, 0 );
        for ( I = 0; I <= 10; I++ )
        {
            sub_15969( ref cVar7, "CP_RINGTONE_", I, -1, -1 );
            sub_9556( ref l_U6, ref l_U231, I, ref cVar7, "", 1, 0, 0, 0, 0 );
        }
        if (g_U94._fU40 == 2)
        {
            for ( I = 11; I <= 37; I++ )
            {
                if ((IS_BIT_SET( g_U94._fU412, I - 11 )) AND (I != 36))
                {
                    sub_15969( ref cVar7, "CP_RINGTONE_", I, -1, -1 );
                    sub_9556( ref l_U6, ref l_U231, I, ref cVar7, "", 1, 0, 0, 0, 0 );
                }
            }
        }
        else if (IS_BIT_SET( g_U94._fU412, 25 ))
        {
            sub_15969( ref cVar7, "CP_RINGTONE_", 36, -1, -1 );
            sub_9556( ref l_U6, ref l_U231, 36, ref cVar7, "", 1, 0, 0, 0, 0 );
        }
        if (IS_BIT_SET( g_U94._fU412, 27 ))
        {
            sub_9556( ref l_U6, ref l_U231, 60, "CP_RINGTONE_38", "", 1, 0, 0, 0, 0 );
        }
        if (IS_BIT_SET( g_U94._fU412, 28 ))
        {
            sub_9556( ref l_U6, ref l_U231, 61, "CP_RINGTONE_39", "", 1, 0, 0, 0, 0 );
        }
        sub_10328( ref l_U6, ref l_U231, ref l_U44, 1, 1, 0 );
        break;
        case 1030:
        l_U1043 = g_U94._fU396;
        sub_9472( ref l_U6, 1, l_U1043, 0 );
        for ( I = 0; I <= 13; I++ )
        {
            if (IS_BIT_SET( g_U94._fU416, I ))
            {
                sub_15969( ref cVar7, "CP_ANIMTM_", I, -1, -1 );
                sub_9556( ref l_U6, ref l_U231, I, ref cVar7, "", 1, 0, 0, 0, 0 );
            }
        }
        sub_10328( ref l_U6, ref l_U231, ref l_U44, 1, 1, 0 );
        break;
        case 1003:
        l_U1095 = 0;
        StrCopy( ref g_U94._fU128, "", 16 );
        break;
        case 1039:
        StrCopy( ref l_U1067[0], "CP_SC_SIGN_INPC", 16 );
        StrCopy( ref l_U1067[1], "", 16 );
        StrCopy( ref l_U1067[2], "", 16 );
        l_U1047 = 0;
        sub_14866( ref l_U990._fU0[0], ref l_U1067, l_U1047, ref l_U1051, ref l_U1050, ref l_U1048, ref l_U1049, ref l_U6._fU44, ref l_U6._fU60, ref l_U6._fU56, ref l_U6._fU52 );
        break;
        case 1040:
        if (# -NULL-0xc27bfa())
        {
            StrCopy( ref l_U1067[0], "NT_HACKED", 16 );
            StrCopy( ref l_U1067[1], "", 16 );
            StrCopy( ref l_U1067[2], "", 16 );
            l_U1047 = 0;
            sub_14866( ref l_U990._fU0[0], ref l_U1067, l_U1047, ref l_U1051, ref l_U1050, ref l_U1048, ref l_U1049, ref l_U6._fU44, ref l_U6._fU60, ref l_U6._fU56, ref l_U6._fU52 );
        }
        break;
        case 1041:
        if (# -NULL-0xc27c84())
        {
            StrCopy( ref l_U1067[0], "CP_SIGN_IN", 16 );
        }
        else if (# -NULL-0xc27bfa())
        {
            StrCopy( ref l_U1067[0], "CP_SIGN_INPC", 16 );
        }
        else
        {
            StrCopy( ref l_U1067[0], "CP_SIGN_INPS3", 16 );
        }
        StrCopy( ref l_U1067[1], "", 16 );
        StrCopy( ref l_U1067[2], "", 16 );
        l_U1047 = 0;
        sub_14866( ref l_U990._fU0[0], ref l_U1067, l_U1047, ref l_U1051, ref l_U1050, ref l_U1048, ref l_U1049, ref l_U6._fU44, ref l_U6._fU60, ref l_U6._fU56, ref l_U6._fU52 );
        break;
        case 1044:
        if (# -NULL-0xc27c84())
        {
            StrCopy( ref l_U1067[0], "CP_CANT_PLAY", 16 );
        }
        else if (# -NULL-0xc27bfa())
        {
            StrCopy( ref l_U1067[0], "CP_CANT_PLAYPC", 16 );
        }
        else
        {
            StrCopy( ref l_U1067[0], "CP_CANT_PLAYPS3", 16 );
        }
        StrCopy( ref l_U1067[1], "", 16 );
        StrCopy( ref l_U1067[2], "", 16 );
        l_U1047 = 0;
        sub_14866( ref l_U990._fU0[0], ref l_U1067, l_U1047, ref l_U1051, ref l_U1050, ref l_U1048, ref l_U1049, ref l_U6._fU44, ref l_U6._fU60, ref l_U6._fU56, ref l_U6._fU52 );
        break;
        case 1033:
        StrCopy( ref l_U1067[0], "CP_REPLAY_WARN", 16 );
        StrCopy( ref l_U1067[1], "", 16 );
        StrCopy( ref l_U1067[2], "", 16 );
        l_U1047 = 0;
        sub_14866( ref l_U990._fU0[0], ref l_U1067, l_U1047, ref l_U1051, ref l_U1050, ref l_U1048, ref l_U1049, ref l_U6._fU44, ref l_U6._fU60, ref l_U6._fU56, ref l_U6._fU52 );
        break;
        case 1034:
        StrCopy( ref l_U1067[0], "MO_VE_WAIT", 16 );
        StrCopy( ref l_U1067[1], "", 16 );
        StrCopy( ref l_U1067[2], "", 16 );
        l_U1047 = 0;
        sub_14866( ref l_U990._fU0[0], ref l_U1067, l_U1047, ref l_U1051, ref l_U1050, ref l_U1048, ref l_U1049, ref l_U6._fU44, ref l_U6._fU60, ref l_U6._fU56, ref l_U6._fU52 );
        break;
        case 1031:
        StrCopy( ref l_U1067[0], "CP_SLEEP_WARN", 16 );
        StrCopy( ref l_U1067[1], "", 16 );
        StrCopy( ref l_U1067[2], "", 16 );
        l_U1047 = 0;
        sub_14866( ref l_U990._fU0[0], ref l_U1067, l_U1047, ref l_U1051, ref l_U1050, ref l_U1048, ref l_U1049, ref l_U6._fU44, ref l_U6._fU60, ref l_U6._fU56, ref l_U6._fU52 );
        break;
        case 1032: break;
        case 1036:
        sub_9472( ref l_U6, 1, l_U1043, 0 );
        for ( I = 0; I <= 22; I++ )
        {
            if (IS_BIT_SET( ProtectedGet(g_U94._fU536), I ))
            {
                sub_15969( ref cVar7, "CP_CHEATS_", I, -1, -1 );
                sub_9556( ref l_U6, ref l_U231, I, ref cVar7, "", 1, 0, 0, 0, 0 );
            }
        }
        sub_10328( ref l_U6, ref l_U231, ref l_U44, 1, 1, 0 );
        break;
        case 1050:
        sub_9472( ref l_U6, 1, l_U1043, 0 );
        if (N_747217401())
        {
            sub_9556( ref l_U6, ref l_U231, 1048, "CP_OPT_NETWORK", "", 1, 0, 0, 0, 0 );
            if (NETWORK_IS_ROCKSTART_SESSION_ID_VALID())
            {
                sub_9556( ref l_U6, ref l_U231, 1049, "NTGT_25", "", 1, 0, 0, 0, 0 );
            }
        }
        sub_9556( ref l_U6, ref l_U231, 1032, "CP_OPT_REPMENU", "", 1, 0, 0, 0, 0 );
        sub_10328( ref l_U6, ref l_U231, ref l_U44, 1, 1, 0 );
        l_U1147 = 1;
        break;
        case 1046:
        SETTIMERA( 0 );
        StrCopy( ref l_U1067[0], "CP_GAMEPROV", 16 );
        StrCopy( ref l_U1067[1], "", 16 );
        StrCopy( ref l_U1067[2], "", 16 );
        l_U1047 = 0;
        sub_14866( ref l_U990._fU0[0], ref l_U1067, l_U1047, ref l_U1051, ref l_U1050, ref l_U1048, ref l_U1049, ref l_U6._fU44, ref l_U6._fU60, ref l_U6._fU56, ref l_U6._fU52 );
        break;
        case 1047:
        StrCopy( ref l_U1067[0], "CP_GAMEPROVTO", 16 );
        StrCopy( ref l_U1067[1], "", 16 );
        StrCopy( ref l_U1067[2], "", 16 );
        l_U1047 = 0;
        sub_14866( ref l_U990._fU0[0], ref l_U1067, l_U1047, ref l_U1051, ref l_U1050, ref l_U1048, ref l_U1049, ref l_U6._fU44, ref l_U6._fU60, ref l_U6._fU56, ref l_U6._fU52 );
        break;
        case 1037:
        if (g_U12303)
        {
            StrCopy( ref l_U1067[0], "CP_MISS_WARN", 16 );
        }
        else
        {
            StrCopy( ref l_U1067[0], "CP_START_GAME", 16 );
        }
        StrCopy( ref l_U1067[1], "", 16 );
        StrCopy( ref l_U1067[2], "", 16 );
        l_U1047 = 0;
        sub_14866( ref l_U990._fU0[0], ref l_U1067, l_U1047, ref l_U1051, ref l_U1050, ref l_U1048, ref l_U1049, ref l_U6._fU44, ref l_U6._fU60, ref l_U6._fU56, ref l_U6._fU52 );
        break;
    }
    l_U963 = 0;
    g_U94._fU92 = 0;
    return;
}

void sub_8637(int iParam0)
{
    if (iParam0->_fU40)
    {
        RELEASE_TEXTURE( iParam0->_fU36 );
        iParam0->_fU40 = 0;
    }
    if (NOT (COMPARE_STRING( iParam0 + 0, "" )))
    {
        MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( iParam0 + 0 );
    }
    iParam0->_fU44 = 0;
    return;
}

int sub_8727()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_8765( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_8765(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

int sub_9043()
{
    int J;
    int I;
    int iVar4;
    unknown uVar5;

    iVar4 = GET_CURRENT_DAY_OF_WEEK();
    uVar5 = sub_9068( GET_HOURS_OF_DAY() );
    for ( J = 0; J <= 6; J++ )
    {
        if (J == iVar4)
        {
            for ( I = uVar5; I <= 3; I++ )
            {
                if ((sub_9176( J, I )) > 1)
                {
                    return 1;
                }
            }
        }
        else
        {
            for ( I = 0; I <= 3; I++ )
            {
                if ((sub_9176( J, I )) > 1)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_9068(int iParam0)
{
    if (iParam0 < 8)
    {
        return 0;
    }
    else if (iParam0 < 12)
    {
        return 1;
    }
    else if (iParam0 < 18)
    {
        return 2;
    };;;
    return 3;
}

int sub_9176(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( g_U468[uParam0]._fU0, 0, 15 );
        case 1: return GET_BITS_IN_RANGE( g_U468[uParam0]._fU0, 16, 31 );
        case 2: return GET_BITS_IN_RANGE( g_U468[uParam0]._fU4, 0, 15 );
        case 3: return GET_BITS_IN_RANGE( g_U468[uParam0]._fU4, 16, 31 );
    }
    return -1;
}

void sub_9472(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    iParam0->_fU4 = 0;
    iParam0->_fU0 = uParam1;
    iParam0->_fU12 = 0;
    iParam0->_fU8 = uParam2;
    iParam0->_fU64 = uParam3;
    return;
}

void sub_9556(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
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
        sub_3173( "\n SIMPLE OPTIONS ARRAY TO SMALL TO ADD " );
        sub_3173( uParam3 );
        sub_3173( " TO THE PHONE OPTIONS." );
    }
    return;
}

void sub_10328(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int I;
    int iVar9;
    float fVar10;
    float fVar11;

    fVar10 = 0.49500000;
    fVar11 = 0.93000000;
    g_U94._fU492 = 1000 / iParam0->_fU4;
    sub_10385( ref g_U94._fU492, 100, 500 );
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
        sub_7048( "\n menuStruct.total is ", iParam0->_fU4 );
        sub_7048( "\n menuStruct.memory is ", iParam0->_fU8 );
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
        sub_11103( ref (uParam2^)[I] );
    }
    for ( I = 0; I <= (iVar9 - 1); I++ )
    {
        sub_11178( ref (uParam1^)[iParam0->_fU16[I]], ref (uParam2^)[I] );
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
            sub_2370( iParam0 + 68, fVar10, 0.19000000 );
            if (g_U94._fU40 == 2)
            {
                sub_2370( iParam0 + 76, fVar11, 0.12000000 );
            }
            else
            {
                sub_2370( iParam0 + 76, fVar11, 0.75000000 / 6 );
            }
            iParam0->_fU100 = -0.04500000;
        }
        else
        {
            sub_2370( iParam0 + 68, fVar10, 0.25000000 );
            if (g_U94._fU40 == 2)
            {
                sub_2370( iParam0 + 76, fVar11, 0.24000000 );
            }
            else
            {
                sub_2370( iParam0 + 76, fVar11, 0.75000000 / 3 );
            }
            iParam0->_fU100 = -0.09000000;
            iParam0->_fU104 = 0.01000000;
        }
    }
    else if (iParam0->_fU0 == 1)
    {
        sub_2370( iParam0 + 68, fVar10, 0.22000000 );
        if (g_U94._fU40 == 2)
        {
            sub_2370( iParam0 + 76, fVar11, 0.18000000 );
        }
        else
        {
            sub_2370( iParam0 + 76, fVar11, 0.75000000 / 4 );
        }
        iParam0->_fU100 = -0.05500000;
    }
    else
    {
        sub_2370( iParam0 + 68, fVar10, 0.31000000 );
        if (g_U94._fU40 == 2)
        {
            sub_2370( iParam0 + 76, fVar11, 0.36000000 );
        }
        else
        {
            sub_2370( iParam0 + 76, fVar11, 0.75000000 / 2 );
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
    sub_5874( iParam0, uParam2, -1 );
    return;
}

int sub_10385(unknown uParam0, int iParam1, int iParam2)
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

void sub_11103(int iParam0)
{
    iParam0->_fU0 = 0;
    return;
}

void sub_11178(int iParam0, int iParam1)
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

void sub_12376(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    ConcatString((uParam0^), uParam2, 16);
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
    return;
}

void sub_12479(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_12891()
{
    g_U15862[8]._fU196._fU4 = 5;
    g_U15862[3]._fU196._fU4 = 10;
    g_U15862[0]._fU196._fU4 = 20;
    g_U15862[13]._fU196._fU4 = 25;
    g_U15862[7]._fU196._fU4 = 30;
    g_U15862[4]._fU196._fU4 = 40;
    g_U15862[1]._fU196._fU4 = 50;
    g_U15862[15]._fU196._fU4 = 60;
    g_U15862[5]._fU196._fU4 = 70;
    g_U15862[2]._fU196._fU4 = 80;
    g_U15862[6]._fU196._fU4 = 90;
    g_U15862[10]._fU196._fU4 = 300;
    g_U15862[19]._fU196._fU4 = 310;
    g_U15862[18]._fU196._fU4 = 330;
    g_U15862[12]._fU196._fU4 = 340;
    return;
}

void sub_13197()
{
    int I;
    int J;
    int iVar4;
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
    char[16] cVar23;

    for ( I = 0; I <= (22 - 1); I++ )
    {
        if ((g_U15862[I]._fU196._fU0) AND (g_U15862[I]._fU196._fU4 != -1))
        {
            StrCopy( ref cVar23, "CONT_", 16 );
            ConcatString(ref cVar23, ref g_U15862[I]._fU196._fU8, 16);
            if ((g_U94._fU76 != I) AND ((g_U94._fU68 == I) || ((sub_13331( g_U15862[I]._fU0 )) != 0)))
            {
                iVar4 = 1;
            }
            else
            {
                iVar4 = 0;
            }
            sub_9556( ref l_U6, ref l_U231, g_U15862[I]._fU0, ref cVar23, "", iVar4, 0, 0, 0, 0 );
        }
    }
    for ( I = 0; I <= (l_U6._fU4 - 2); I++ )
    {
        for ( J = 0; J <= (l_U6._fU4 - (I + 2)); J++ )
        {
            if (g_U15862[l_U231[J]._fU0]._fU196._fU4 > (g_U15862[l_U231[J + 1]._fU0]._fU196._fU4))
            {
                uVar5 = {l_U231[J]};
                l_U231[J] = {l_U231[J + 1]};
                l_U231[J + 1] = {uVar5};
                if (l_U6._fU12)
                {
                    if (l_U6._fU8 == J)
                    {
                        l_U6._fU8++;
                    }
                    else if (l_U6._fU8 == (J + 1))
                    {
                        l_U6._fU8--;
                    }
                }
            }
        }
    }
    return;
}

void sub_13331(unknown uParam0)
{
    int I;
    int Result;

    Result = 0;
    if (NOT g_U12303)
    {
        for ( I = 0; I <= (22 - 1); I++ )
        {
            if (g_U15862[uParam0]._fU8[0]._fU0[I])
            {
                Result++;
            }
        }
    }
    else
    {
        for ( I = 0; I <= 4; I++ )
        {
            if (g_U15862[uParam0]._fU8[0]._fU0[I])
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_14657()
{
    int Result;

    for ( Result = 0; Result <= (g_U572 - 1); Result++ )
    {
        if (g_U572[Result]._fU0[0] == -1)
        {
            return Result;
        }
    }
    return g_U572;
}

void sub_14866(unknown uParam0, unknown uParam1, boolean bParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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
    sub_15056( 0, 7, uParam0, "", uVar13._fU0, uVar13._fU4, uVar15._fU0, uVar15._fU4, 0, 0, 0, 0, 0, 1 );
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

void sub_15056(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, float fParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, int iParam13)
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
        if (sub_15151( uParam3 ))
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
    SET_TEXT_COLOUR( sub_15387( iParam2 + 8, 0 ), sub_15387( iParam2 + 8, 1 ), sub_15387( iParam2 + 8, 2 ), sub_15387( iParam2 + 8, 3 ) );
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

int sub_15151(unknown uParam0)
{
    if ((GET_LENGTH_OF_LITERAL_STRING( uParam0 )) >= 6)
    {
        return COMPARE_STRING( GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( uParam0, 6 ), "TM_82_" );
    }
    return 0;
}

void sub_15387(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( (uParam0^), 0, 7 );
        case 1: return GET_BITS_IN_RANGE( (uParam0^), 8, 15 );
        case 2: return GET_BITS_IN_RANGE( (uParam0^), 16, 23 );
    }
    return GET_BITS_IN_RANGE( (uParam0^), 24, 31 );
}

void sub_15969(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    ConcatString((uParam0^), uParam2, 16);
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
    return;
}

int sub_16260()
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

int sub_16791(unknown uParam0)
{
    SET_BIT( 1, uParam0 );
    switch (uParam0)
    {
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        if (IS_INTERIOR_SCENE())
        {
            return 0;
        }
        break;
    }
    switch (uParam0)
    {
        case 0:
        ACTIVATE_CHEAT( 2 );
        ACTIVATE_CHEAT( 1 );
        break;
        case 1:
        ACTIVATE_CHEAT( 2 );
        break;
        case 2:
        ACTIVATE_CHEAT( 1 );
        break;
        case 3:
        ACTIVATE_CHEAT( 0 );
        break;
        case 4:
        ACTIVATE_CHEAT( 4 );
        break;
        case 5:
        ACTIVATE_CHEAT( 3 );
        break;
        case 7:
        ACTIVATE_CHEAT( 6 );
        break;
        case 8:
        ACTIVATE_CHEAT( 7 );
        break;
        case 9:
        ACTIVATE_CHEAT( 10 );
        break;
        case 10:
        ACTIVATE_CHEAT( 8 );
        break;
        case 11:
        ACTIVATE_CHEAT( 15 );
        break;
        case 12:
        ACTIVATE_CHEAT( 9 );
        break;
        case 13:
        ACTIVATE_CHEAT( 11 );
        break;
        case 14:
        ACTIVATE_CHEAT( 12 );
        break;
        case 15:
        ACTIVATE_CHEAT( 13 );
        break;
        case 16:
        ACTIVATE_CHEAT( 14 );
        break;
        case 17:
        ACTIVATE_CHEAT( 16 );
        break;
        case 18:
        ACTIVATE_CHEAT( 17 );
        break;
        case 19:
        ACTIVATE_CHEAT( 18 );
        break;
        case 20:
        ACTIVATE_CHEAT( 19 );
        break;
        case 21:
        ACTIVATE_CHEAT( 20 );
        break;
        case 22:
        ACTIVATE_CHEAT( 21 );
        break;
    }
    return 1;
    break;
    2;
    1;
    ref g_U94._fU536;
    1;
    ref g_U94._fU536;
    break;
}

void sub_17481(unknown uParam0)
{
    switch (sub_8765( 4, (uParam0^) ))
    {
        case 0:
        case 1:
        sub_17535( 3, 4, uParam0 );
        break;
        case 2:
        sub_17535( 4, 4, uParam0 );
        break;
    }
    return;
}

void sub_17535(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_18049(int iParam0, unknown uParam1)
{
    sub_8637( iParam0 );
    sub_18071( iParam0 + 0, uParam1 );
    REQUEST_STREAMED_TXD( iParam0 + 0, 1 );
    iParam0->_fU32 = uParam1;
    iParam0->_fU44 = 1;
    return;
}

void sub_18071(unknown uParam0, int iParam1)
{
    StrCopy( (uParam0^), "phone_photo_", 32 );
    ConcatString((uParam0^), iParam1 / 5, 32);
    return;
}

void sub_18199(unknown uParam0, unknown uParam1, unknown uParam2)
{
    StrCopy( (uParam0^), "CP_APMNT_", 16 );
    switch (uParam2)
    {
        case 0:
        ConcatString((uParam0^), GET_BITS_IN_RANGE( g_U468[uParam1]._fU0, 0, 15 ), 16);
        break;
        case 1:
        ConcatString((uParam0^), GET_BITS_IN_RANGE( g_U468[uParam1]._fU0, 16, 31 ), 16);
        break;
        case 2:
        ConcatString((uParam0^), GET_BITS_IN_RANGE( g_U468[uParam1]._fU4, 0, 15 ), 16);
        break;
        case 3:
        ConcatString((uParam0^), GET_BITS_IN_RANGE( g_U468[uParam1]._fU4, 16, 31 ), 16);
        break;
    }
    return;
}

int sub_18584(unknown uParam0, unknown uParam1)
{
    int Result;

    for ( Result = uParam1; Result <= 3; Result++ )
    {
        if ((sub_9176( uParam0, Result )) != 0)
        {
            return Result;
        }
    }
    return -1;
}

int sub_18733(unknown uParam0, unknown uParam1)
{
    if ((sub_9176( uParam0, uParam1 )) == 0)
    {
        return 0;
    }
    return 1;
}

int sub_18896(unknown uParam0, unknown uParam1)
{
    int I;

    for ( I = uParam1; I <= 3; I++ )
    {
        if ((sub_9176( uParam0, I )) != 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_23339(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, boolean bParam14, boolean bParam15)
{
    switch (g_U94._fU40)
    {
        case 2:
        if (bParam14)
        {
            sub_23411( 0, g_U526._fU0[0], 0.50000000, 0.50000000, 1.00000000, 1.00000000 );
            sub_23569( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, g_U831 );
        }
        sub_23680( uParam0 );
        if (bParam15)
        {
            if (NOT g_U94._fU540)
            {
                sub_23411( 0, g_U526._fU0[1], 0.50000000, 0.50000000, 0.85000000, 0.41000000 );
            }
        }
        break;
        default:
        sub_24369( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, uParam1._fU0 );
        if ((g_U94._fU0 == 1002) AND (NOT g_U94._fU540))
        {
            sub_24101( 0, g_U484._fU0[19], 0.50000000, 0.60000000, 0.80000000, 0.40000000, uParam1._fU12, 0 );
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
            sub_24640( 0 );
        }
        break;
    }
    return;
}

void sub_23411(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_23569(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_23680(int iParam0)
{
    int I;
    unknown uVar4;

    switch (iParam0)
    {
        case 2:
        if (g_U526._fU124 > 0)
        {
            g_U526._fU124 -= 25;
            sub_10385( ref g_U526._fU124, 0, 255 );
            break;
        }
        break;
        case 1: sub_23786();
        case 0:
        if (iParam0 != 2)
        {
            if (g_U526._fU124 < 255)
            {
                g_U526._fU124 += 25;
                sub_10385( ref g_U526._fU124, 0, 255 );
            }
        }
        sub_1187( ref uVar4, 255, 255, 255, g_U526._fU124 );
        for ( I = 0; I <= 4; I++ )
        {
            sub_24101( 0, g_U526._fU0[2], g_U526._fU20[I]._fU0._fU0, g_U526._fU20[I]._fU0._fU4, g_U526._fU20[I]._fU8._fU0, g_U526._fU20[I]._fU8._fU4, uVar4, 0 );
        }
        break;
    }
    return;
}

void sub_23786()
{
    int I;

    for ( I = 0; I <= 4; I++ )
    {
        g_U526._fU20[I]._fU0._fU4 += g_U526._fU20[I]._fU16;
        if ((g_U526._fU20[I]._fU0._fU4 + (g_U526._fU20[I]._fU8._fU4 * 0.50000000)) < 0.00000000)
        {
            sub_3373( I, 1 );
        }
    }
    return;
}

void sub_24101(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, uParam7, sub_15387( ref uParam6, 0 ), sub_15387( ref uParam6, 1 ), sub_15387( ref uParam6, 2 ), sub_15387( ref uParam6, 3 ) );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, uParam7, sub_15387( ref uParam6, 0 ), sub_15387( ref uParam6, 1 ), sub_15387( ref uParam6, 2 ), sub_15387( ref uParam6, 3 ) );
    }
    return;
}

void sub_24369(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (iParam0 == 0)
    {
        DRAW_RECT( uParam1, uParam2 * 0.65000000, uParam3, uParam4 * 0.65000000, sub_15387( ref uParam5, 0 ), sub_15387( ref uParam5, 1 ), sub_15387( ref uParam5, 2 ), sub_15387( ref uParam5, 3 ) );
    }
    else
    {
        DRAW_RECT( uParam1, 0.65000000 + (uParam2 * 0.35000000), uParam3, uParam4 * 0.35000000, sub_15387( ref uParam5, 0 ), sub_15387( ref uParam5, 1 ), sub_15387( ref uParam5, 2 ), sub_15387( ref uParam5, 3 ) );
    }
    return;
}

void sub_24640(int iParam0)
{
    int I;

    sub_23569( 1, 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
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
                sub_24811( 1, g_U484._fU0[I], 0.15500000 + (((I - 1) mod 3) * 0.35000000), 0.30000000 + (((I - 1) / 3) * 0.20500000), 0.20000000, 0.17000000, 200, 200, 200, 255, 0 );
            }
            else
            {
                sub_23411( 1, g_U484._fU0[I], 0.15500000 + (((I - 1) mod 3) * 0.35000000), 0.30000000 + (((I - 1) / 3) * 0.20500000), 0.20000000, 0.17000000 );
            }
        }
    }
    if ((NOT (# -NULL-0xc27c84())) AND (NOT (# -NULL-0xc27bfa())))
    {
        if (iParam0 != -1)
        {
            sub_24811( 1, g_U484._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 108, 130, 187, 255, 0 );
        }
        else
        {
            sub_24811( 1, g_U484._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 100, 169, 249, 255, 0 );
        }
        if (iParam0 != -2)
        {
            sub_24811( 1, g_U484._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 204, 43, 71, 255, 0 );
        }
        else
        {
            sub_24811( 1, g_U484._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 250, 105, 141, 255, 0 );
        }
    }
    else if (iParam0 != -1)
    {
        sub_24811( 1, g_U484._fU0[13], 0.19500000, 0.08500000, 0.04800000, 0.90100000, 0, 100, 0, 255, l_U0 );
    }
    else
    {
        sub_24811( 1, g_U484._fU0[13], 0.19500000, 0.08500000, 0.04800000, 0.90100000, 0, 200, 0, 255, l_U0 );
    }
    if (iParam0 != -2)
    {
        sub_24811( 1, g_U484._fU0[14], 0.78800000, 0.07500000, 0.05100000, 0.80100000, 100, 0, 0, 255, l_U1 );
    }
    else
    {
        sub_24811( 1, g_U484._fU0[14], 0.78800000, 0.07500000, 0.05100000, 0.80100000, 200, 0, 0, 255, l_U1 );
    }
    return;
}

void sub_24811(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_25856(int iParam0, unknown uParam1, unknown uParam2, int iParam3)
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
        sub_25937( iParam0, uParam2, uParam1 );
    }
    uVar8 = sub_26126( uParam1, 0, iParam0->_fU0[2]._fU0._fU0, iParam0->_fU0[2]._fU0._fU4 );
    switch (g_U94._fU40)
    {
        case 2:
        if (g_U94._fU528)
        {
            sub_23569( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, 0, 0, 0, 255 );
        }
        else
        {
            sub_24369( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, iParam3->_fU4 );
        }
        break;
        default:
        sub_24369( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, iParam3->_fU4 );
        sub_24369( 0, 0.50000000, 0.88000000, 1.00000000, 0.01000000, iParam3->_fU16 );
        sub_24369( 0, 0.50000000, 0.94000000, 0.01000000, 0.12000000, iParam3->_fU20 );
        break;
    }
    if (iParam0->_fU116 != 1678728908)
    {
        sub_15056( 0, 0, ref iParam0->_fU0[1], uParam2, ref iParam0->_fU100->_fU0, ref iParam0->_fU100->_fU4, 0.00000000, 1.00000000, 0, 0, 0, 0, g_U94._fU564, 1 );
    }
    if (iParam0->_fU128 != 1678728908)
    {
        sub_15056( 0, 0, ref iParam0->_fU0[2], uParam1, (ref iParam0->_fU108->_fU0) - uVar8, ref iParam0->_fU108->_fU4, 0.00000000, ref iParam0->_fU108->_fU0, 0, 0, 0, 0, g_U94._fU564, 1 );
    }
    return;
}

void sub_25937(int iParam0, string sParam1, string sParam2)
{
    boolean bVar5;
    int[2] iVar6;

    bVar5 = true;
    array(ref iVar6, 2);
    sub_25968( ref iParam0->_fU0[1]._fU0, iParam0 + 120 );
    sub_25968( ref iParam0->_fU0[2]._fU0, iParam0 + 132 );
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
        if (((sub_26126( sParam1, iVar6[0], iParam0->_fU0[1]._fU0._fU0, iParam0->_fU0[1]._fU0._fU4 )) + (sub_26126( sParam2, iVar6[1], iParam0->_fU0[2]._fU0._fU0, iParam0->_fU0[2]._fU0._fU4 ))) > 0.90000000)
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

void sub_25968(int iParam0, int iParam1)
{
    iParam0->_fU0 = iParam1->_fU0;
    iParam0->_fU4 = iParam1->_fU4;
    return;
}

void sub_26126(unknown uParam0, boolean bParam1, unknown uParam2, unknown uParam3)
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

void sub_27080(unknown uParam0, int iParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7)
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
            sub_24369( 0, 0.50000000, 0.50500000, 0.90000000, 0.75000000, iParam1->_fU8 );
        }
        else
        {
            sub_24369( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, iParam1->_fU8 );
        }
        break;
        default:
        sub_24369( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, iParam1->_fU0 );
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
        if (sub_27434( iParam2 ))
        {
            sub_23411( 0, iParam2->_fU36, 0.50000000, 0.49000000 - ((iVar16 + 1) * fVar14), 0.85000000, 0.67000000 );
        }
        else
        {
            sub_27715( uParam0, 0.49000000 - ((iVar16 + 1) * fVar14), iVar16 );
        }
        sub_15056( 0, 7, uParam0, "", uVar10._fU0, uVar10._fU4, uVar12._fU0, uVar12._fU4, 0, 0, 0, 0, 0, 1 );
        SET_TEXT_LINE_DISPLAY( (uParam5^), (uParam6^) );
    }
    else
    {
        sub_15056( 0, 7, uParam0, "", uVar10._fU0, uVar10._fU4, uVar12._fU0, uVar12._fU4, 0, 0, 0, 0, 0, 1 );
        SET_TEXT_LINE_DISPLAY( (uParam5^), (uParam6^) );
    }
    DISPLAY_TEXT_WITH_TWO_STRINGS( uVar10._fU0, uVar10._fU4, ref (uParam3^)[0], ref (uParam3^)[1], ref (uParam3^)[2] );
    if (g_U94._fU528)
    {
        sub_24640( 0 );
    }
    return;
}

int sub_27434(int iParam0)
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
            sub_27495( ref uVar3, iParam0->_fU32 );
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

void sub_27495(unknown uParam0, int iParam1)
{
    StrCopy( (uParam0^), "photo_", 16 );
    ConcatString((uParam0^), iParam1 mod 5, 16);
    return;
}

void sub_27715(unknown uParam0, unknown uParam1, int iParam2)
{
    sub_23569( 0, 0.50000000, uParam1 - 0.33500000, 0.85000000, 0.01000000, 255, 255, 255, 150 );
    sub_23569( 0, 0.50000000, uParam1 + 0.33500000, 0.85000000, 0.01000000, 255, 255, 255, 150 );
    sub_23569( 0, 0.07500000, uParam1, 0.01000000, 0.67000000, 255, 255, 255, 150 );
    sub_23569( 0, 0.92500000, uParam1, 0.01000000, 0.67000000, 255, 255, 255, 150 );
    if (iParam2 >= -6)
    {
        sub_15056( 0, 0, uParam0, "PHOTO_LOADING", 0.09000000, uParam1 - 0.32000000, 0.10000000, 0.90000000, 0, 0, 0, 0, 0, 1 );
    }
    else
    {
        sub_7048( "\n photo sections", iParam2 );
    }
    return;
}

void sub_28193(int iParam0, int iParam1, int iParam2)
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
            sub_24369( 0, 0.95000000, 0.50500000, 0.01000000, 0.75000000, iParam1->_fU28 );
            sub_24369( 0, 0.95000000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.05000000, iParam0->_fU56, iParam1->_fU36 );
            sub_24369( 0, 0.95000000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.05000000 * 0.70000000, iParam0->_fU56 * 0.70000000, iParam1->_fU32 );
        }
        else
        {
            sub_24369( 0, 0.97000000, 0.49000000, 0.00700000, 0.72000000, iParam1->_fU28 );
            sub_24369( 0, 0.98500000, 0.13000000, 0.03000000, 0.00700000, iParam1->_fU28 );
            sub_24369( 0, 0.98500000, 0.85000000, 0.03000000, 0.00700000, iParam1->_fU28 );
            sub_24369( 0, 0.98500000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.03000000, iParam0->_fU56, iParam1->_fU28 );
        }
    }
    return;
}

void sub_28646(int iParam0, unknown uParam1, int iParam2, int iParam3, boolean bParam4)
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
        sub_24369( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, iParam3->_fU8 );
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
                sub_24369( 0, ref iParam0->_fU68->_fU0, fVar8, ref iParam0->_fU76->_fU0, ref iParam0->_fU76->_fU4, iParam3->_fU8 );
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
                    sub_29129( ref (uParam1^)[I]._fU8, iParam0, 1, (uParam1^)[I]._fU40, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
                }
                sub_29674( ref (uParam1^)[I]._fU8, iParam0->_fU124, iParam0->_fU128, ref iParam0->_fU84->_fU0, fVar8 + iParam0->_fU100, (uParam1^)[I]._fU76._fU0, (uParam1^)[I]._fU76._fU4, ref iParam2->_fU0[iVar11], ref iParam0->_fU84->_fU0, ref iParam0->_fU84->_fU4, (uParam1^)[I]._fU40, iVar9, iVar10, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
            }
            else
            {
                sub_29674( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU100, (uParam1^)[I]._fU104, ref iParam0->_fU84->_fU0, fVar8 + iParam0->_fU100, (uParam1^)[I]._fU76._fU0, (uParam1^)[I]._fU76._fU4, ref iParam2->_fU0[iVar11], ref iParam0->_fU84->_fU0, ref iParam0->_fU84->_fU4, (uParam1^)[I]._fU40, iVar9, iVar10, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
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
            sub_29674( ref (uParam1^)[I]._fU8, 0, iVar13, ref iParam0->_fU84->_fU0, fVar8 + iParam0->_fU100, (uParam1^)[I]._fU76._fU0, (uParam1^)[I]._fU76._fU4, ref iParam2->_fU0[iVar11], ref iParam0->_fU84->_fU0, ref iParam0->_fU84->_fU4, (uParam1^)[I]._fU40, iVar9, iVar10, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
        }
        if (iParam0->_fU0 == 2)
        {
            if ((uParam1^)[I]._fU108)
            {
                if ((iParam0->_fU44 == I) AND (iParam0->_fU136))
                {
                    if (iParam0->_fU116 >= 5)
                    {
                        sub_29129( ref (uParam1^)[I]._fU52, iParam0, 0, (uParam1^)[I]._fU68, 0, 0 );
                    }
                    sub_29674( ref (uParam1^)[I]._fU52, iParam0->_fU140, iParam0->_fU144, ref iParam0->_fU92->_fU0, fVar8 + iParam0->_fU104, (uParam1^)[I]._fU84._fU0, (uParam1^)[I]._fU84._fU4, ref iParam2->_fU0[iVar12], ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, (uParam1^)[I]._fU68, 0, 0, 0, 0 );
                }
                else
                {
                    sub_29674( ref (uParam1^)[I]._fU52, (uParam1^)[I]._fU116, (uParam1^)[I]._fU120, ref iParam0->_fU92->_fU0, fVar8 + iParam0->_fU104, (uParam1^)[I]._fU84._fU0, (uParam1^)[I]._fU84._fU4, ref iParam2->_fU0[iVar12], ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, (uParam1^)[I]._fU68, 0, 0, 0, 0 );
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
                sub_29674( ref (uParam1^)[I]._fU52, 0, iVar14, ref iParam0->_fU92->_fU0, fVar8 + iParam0->_fU104, (uParam1^)[I]._fU84._fU0, (uParam1^)[I]._fU84._fU4, ref iParam2->_fU0[iVar12], ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, (uParam1^)[I]._fU68, 0, 0, 0, 0 );
            }
        }
    }
    sub_28193( iParam0, iParam3, -1 );
    return;
}

void sub_29129(unknown uParam0, int iParam1, boolean bParam2, boolean bParam3, unknown uParam4, unknown uParam5)
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

void sub_29674(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, float fParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8, unknown uParam9, boolean bParam10, boolean bParam11, boolean bParam12, unknown uParam13, unknown uParam14)
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
            SET_TEXT_COLOUR( sub_15387( iParam7 + 8, 0 ), sub_15387( iParam7 + 8, 1 ), sub_15387( iParam7 + 8, 2 ), sub_15387( iParam7 + 8, 3 ) );
        }
        else if ((g_U94._fU40 == 2) || (bParam12))
        {
            if (g_U94._fU396 == 13)
            {
                if (NOT bParam12)
                {
                    SET_TEXT_COLOUR( 200, 0, 0, sub_15387( iParam7 + 8, 3 ) );
                }
                else
                {
                    SET_TEXT_COLOUR( sub_15387( iParam7 + 8, 0 ), sub_15387( iParam7 + 8, 1 ), sub_15387( iParam7 + 8, 2 ), sub_15387( iParam7 + 8, 3 ) );
                }
            }
            else
            {
                SET_TEXT_COLOUR( 130, 130, 130, sub_15387( iParam7 + 8, 3 ) );
            }
        }
        else
        {
            SET_TEXT_COLOUR( 70, 70, 70, sub_15387( iParam7 + 8, 3 ) );
        }
    }
    else
    {
        SET_TEXT_COLOUR( sub_15387( iParam7 + 8, 0 ), sub_15387( iParam7 + 8, 1 ), sub_15387( iParam7 + 8, 2 ), sub_15387( iParam7 + 8, 3 ) );
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

void sub_31348()
{
    int I;
    float fVar3;

    for ( I = 0; I <= 5; I++ )
    {
        if (l_U44[I]._fU0)
        {
            if (l_U44[I]._fU72)
            {
                fVar3 = l_U6._fU68._fU4 + (l_U6._fU76._fU4 * I);
                sub_23411( 0, g_U484._fU0[16], 0.12000000, fVar3, 0.14000000, 0.07000000 );
            }
        }
    }
    return;
}

void sub_31703()
{
    int I;
    float fVar3;

    for ( I = 0; I <= 5; I++ )
    {
        if (l_U44[I]._fU0)
        {
            if (sub_31751( l_U44[I]._fU4 ))
            {
                fVar3 = l_U6._fU68._fU4 + (l_U6._fU76._fU4 * I);
                if (fVar3 <= 0.85000000)
                {
                    sub_23411( 0, g_U484._fU0[15], 0.12000000, fVar3, 0.14000000, 0.07000000 );
                }
            }
        }
    }
    return;
}

int sub_31751(unknown uParam0)
{
    if ((sub_8765( 4, g_U572[uParam0] )) == 0)
    {
        return 1;
    }
    return 0;
}

void sub_32972(unknown uParam0)
{
    return;
}

void sub_34836(unknown uParam0, int iParam1)
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
        sub_24369( 0, 0.50000000, 0.06000000, 1.00000000, 0.12000000, iParam1->_fU12 );
        if (NOT g_U94._fU540)
        {
            switch (iVar5)
            {
                case 4: sub_23569( 0, 0.20000000, 0.06000000, 0.02500000, 0.08000000, 255, 255, 255, 255 );
                case 3: sub_23569( 0, 0.16000000, 0.07000000, 0.02500000, 0.06000000, 255, 255, 255, 255 );
                case 2: sub_23569( 0, 0.12000000, 0.08000000, 0.02500000, 0.04000000, 255, 255, 255, 255 );
                case 1:
                sub_23569( 0, 0.08000000, 0.09000000, 0.02500000, 0.02000000, 255, 255, 255, 255 );
                break;
            }
        }
        StrCopy( ref cVar7, "DOW_SHORT_DAY_", 16 );
        ConcatString(ref cVar7, GET_CURRENT_DAY_OF_WEEK(), 16);
        if (g_U94._fU500)
        {
            sub_15056( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01500000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_35425( uParam0, 0.79000000, 0.01500000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        else
        {
            sub_15056( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01000000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_35425( uParam0, 0.79000000, 0.01000000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        break;
        default:
        sub_24369( 0, 0.50000000, 0.06500000, 1.00000000, 0.13000000, iParam1->_fU12 );
        if (NOT g_U94._fU540)
        {
            switch (iVar5)
            {
                case 4: sub_23569( 0, 0.20000000, 0.06500000, 0.02500000, 0.08000000, 255, 255, 255, 255 );
                case 3: sub_23569( 0, 0.16000000, 0.07500000, 0.02500000, 0.06000000, 255, 255, 255, 255 );
                case 2: sub_23569( 0, 0.12000000, 0.08500000, 0.02500000, 0.04000000, 255, 255, 255, 255 );
                case 1:
                sub_23569( 0, 0.08000000, 0.09500000, 0.02500000, 0.02000000, 255, 255, 255, 255 );
                break;
            }
        }
        StrCopy( ref cVar7, "DOW_SHORT_DAY_", 16 );
        ConcatString(ref cVar7, GET_CURRENT_DAY_OF_WEEK(), 16);
        if (g_U94._fU500)
        {
            sub_15056( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01500000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_35425( uParam0, 0.79000000, 0.01500000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        else
        {
            sub_15056( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01000000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_35425( uParam0, 0.79000000, 0.01000000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        break;
    }
    return;
}

void sub_35425(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
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
    sub_15056( 0, 6, uParam0, ref cVar7, uParam1 - 0.02000000, uParam2, 0.00000000, uParam1 - 0.02000000, 1, 0, 0, iParam3, 0, 1 );
    sub_15056( 0, 0, uParam0, "CP_TIME_SEP", uParam1, uParam2 - 0.01000000, 0.00000000, 1.00000000, 2, 0, 0, 0, 0, 1 );
    if (iParam4 < 10)
    {
        StrCopy( ref cVar7, "CP_TIME_ZERO", 16 );
    }
    else
    {
        StrCopy( ref cVar7, "CP_TIME_NOZERO", 16 );
    }
    sub_15056( 0, 6, uParam0, ref cVar7, uParam1 + 0.02000000, uParam2, 0.00000000, 1.00000000, 0, 0, 0, iParam4, 0, 1 );
    return;
}

int sub_36240(int iParam0)
{
    if (iParam0 == g_U558)
    {
        return 1;
    }
    return 0;
}

void sub_36584(int iParam0, int iParam1)
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
            sub_36864( iParam0, iVar5 );
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
            sub_37308( iParam0, iParam0->_fU0, iParam1 );
            iParam0->_fU0 = (iParam0->_fU0 * 10) + iParam1;
        }
        else
        {
            sub_36864( iParam0, iVar5 );
        }
        if ((NOT Result) || (iVar5))
        {
            sub_800();
        }
    }
    else
    {
        Result = true;
    }
    return Result;
}

void sub_36864(int iParam0, boolean bParam1)
{
    unknown uVar4;

    GET_FRAME_TIME( ref uVar4 );
    if (iParam0->_fU0 > 5)
    {
        sub_36937( ref g_U94._fU8._fU0, (ref ref iParam0->_fU4->_fU0->_fU0) * uVar4, (ref ref iParam0->_fU4->_fU0->_fU4) * uVar4, (ref ref iParam0->_fU4->_fU0->_fU8) * uVar4 );
        sub_36937( ref g_U94._fU8._fU12, (ref ref iParam0->_fU4->_fU12->_fU0) * uVar4, (ref ref iParam0->_fU4->_fU12->_fU4) * uVar4, (ref ref iParam0->_fU4->_fU12->_fU8) * uVar4 );
        if (sub_37044( iParam0 ))
        {
            iParam0->_fU0 = iParam0->_fU0 mod 10;
            if (NOT bParam1)
            {
                sub_146( iParam0, iParam0->_fU0 );
            }
        }
    }
    return;
}

void sub_36937(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    iParam0->_fU0 -= uParam1;
    iParam0->_fU4 -= uParam2;
    iParam0->_fU8 -= uParam3;
    return;
}

int sub_37044(int iParam0)
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

void sub_37308(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    sub_170( uParam1, ref uVar5 );
    sub_170( uParam2, iParam0 + 36 );
    iParam0->_fU68 = 0;
    ref iParam0->_fU4->_fU0 = {(uVar5._fU0._fU0 - (ref ref iParam0->_fU36->_fU0->_fU0)) / 0.18000000, (uVar5._fU0._fU4 - (ref ref iParam0->_fU36->_fU0->_fU4)) / 0.18000000, (uVar5._fU0._fU8 - (ref ref iParam0->_fU36->_fU0->_fU8)) / 0.18000000};
    ref iParam0->_fU4->_fU12 = {(uVar5._fU12._fU0 - (ref ref iParam0->_fU36->_fU12->_fU0)) / 0.18000000, (uVar5._fU12._fU4 - (ref ref iParam0->_fU36->_fU12->_fU4)) / 0.18000000, (uVar5._fU12._fU8 - (ref ref iParam0->_fU36->_fU12->_fU8)) / 0.18000000};
    ref iParam0->_fU4->_fU24 = (uVar5._fU24 - (ref iParam0->_fU36->_fU24)) / 0.18000000;
    return;
}

void sub_37618(unknown uParam0)
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
            Result = sub_37784( iVar4 );
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
            Result = sub_37784( iVar4 );
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
            Result = sub_37784( iVar4 );
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
            Result = sub_37784( iVar4 );
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
            Result = sub_37784( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 3:
        if ((NOT (IS_BUTTON_PRESSED( 0, 11 ))) AND (NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 1 ))))
        {
            Result = sub_37784( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 18:
        if ((NOT (IS_CONTROL_PRESSED( 2, 22 ))) AND (NOT IS_USING_CONTROLLER()))
        {
            Result = sub_37784( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        Result = sub_37784( iVar4 );
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
            uVar6 = sub_40364( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 7:
        if ((((NOT IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND ((IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 182 ))))) AND (NOT (IS_MOUSE_BUTTON_PRESSED( 2 ))))
        {
            uVar6 = sub_40364( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        uVar6 = sub_40364( iVar4 );
        break;
    }
    if (IS_NUMLOCK_ENABLED())
    {
        switch (g_U570)
        {
            case 8:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 82 )))
            {
                iVar7 = sub_40826( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 9:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 79 )))
            {
                iVar7 = sub_40826( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 10:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 80 )))
            {
                iVar7 = sub_40826( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 11:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 81 )))
            {
                iVar7 = sub_40826( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 12:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 75 )))
            {
                iVar7 = sub_40826( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 13:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 76 )))
            {
                iVar7 = sub_40826( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 14:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 77 )))
            {
                iVar7 = sub_40826( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 15:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 71 )))
            {
                iVar7 = sub_40826( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 16:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 72 )))
            {
                iVar7 = sub_40826( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 17:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 73 )))
            {
                iVar7 = sub_40826( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            default:
            iVar7 = sub_40826( iVar4 );
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

void sub_37784(unknown uParam0)
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
            sub_38185( 2, uParam0 );
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
            sub_38185( 8, uParam0 );
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
            sub_38185( 8, uParam0 );
            break;
        }
    }
    else if (((bVar3) AND (NOT bVar5)) AND (NOT bVar4))
    {
        g_U568 = 3;
        if ((g_U94._fU0 == 1003) || (g_U94._fU0 == 1009))
        {
            sub_38185( 7, uParam0 );
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
            sub_38185( 8, uParam0 );
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
            sub_38185( 2, uParam0 );
            break;
        }
    }
    else if (((bVar6) AND (NOT bVar5)) AND (NOT bVar4))
    {
        g_U568 = 2;
        if ((g_U94._fU0 == 1003) || (g_U94._fU0 == 1009))
        {
            sub_38185( 3, uParam0 );
        }
    }
    else
    {
        g_U568 = 19;
    };;;;;;;
    return g_U568;
}

void sub_38185(unknown uParam0, unknown uParam1)
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
            sub_3173( "\n playing keypadTone 10.0" );
            break;
            case 1:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 0.00000000 );
            sub_3173( "\n playing keypadTone 0.0" );
            break;
            case 2:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 1.00000000 );
            sub_3173( "\n playing keypadTone 1.0" );
            break;
            case 3:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 2.00000000 );
            sub_3173( "\n playing keypadTone 2.0" );
            break;
            case 4:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 3.00000000 );
            sub_3173( "\n playing keypadTone 3.0" );
            break;
            case 5:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 4.00000000 );
            sub_3173( "\n playing keypadTone 4.0" );
            break;
            case 6:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 5.00000000 );
            sub_3173( "\n playing keypadTone 5.0" );
            break;
            case 7:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 6.00000000 );
            sub_3173( "\n playing keypadTone 6.0" );
            break;
            case 8:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 7.00000000 );
            sub_3173( "\n playing keypadTone 7.0" );
            break;
            case 9:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 8.00000000 );
            sub_3173( "\n playing keypadTone 8.0" );
            break;
            case 10:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 9.00000000 );
            sub_3173( "\n playing keypadTone 9.0" );
            break;
            case 11:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 11.00000000 );
            sub_3173( "\n playing keypadTone 11.0" );
            break;
        }
        RELEASE_SOUND_ID( uVar4 );
    }
    return;
}

void sub_40364(unknown uParam0)
{
    if ((((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 181 )))) || (IS_MOUSE_BUTTON_PRESSED( 1 )))
    {
        g_U569 = 6;
        switch (g_U94._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_38185( 6, uParam0 );
            break;
        }
    }
    else if ((((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 78 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 182 )))) || (IS_MOUSE_BUTTON_PRESSED( 2 )))
    {
        g_U569 = 7;
        if (g_U94._fU0 != 1007)
        {
            sub_38185( 4, uParam0 );
        }
    }
    else
    {
        g_U569 = 19;
    }
    return g_U569;
}

void sub_40826(unknown uParam0)
{
    g_U570 = 19;
    if (((g_U94._fU0 == 1003) || (g_U94._fU0 == 1009)) AND (IS_NUMLOCK_ENABLED()))
    {
        if (IS_GAME_KEYBOARD_KEY_PRESSED( 82 ))
        {
            g_U570 = 8;
            sub_38185( 0, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 79 ))
        {
            g_U570 = 9;
            sub_38185( 1, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 80 ))
        {
            g_U570 = 10;
            sub_38185( 2, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 81 ))
        {
            g_U570 = 11;
            sub_38185( 3, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 75 ))
        {
            g_U570 = 12;
            sub_38185( 4, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 76 ))
        {
            g_U570 = 13;
            sub_38185( 5, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 77 ))
        {
            g_U570 = 14;
            sub_38185( 6, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 71 ))
        {
            g_U570 = 15;
            sub_38185( 7, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 72 ))
        {
            g_U570 = 16;
            sub_38185( 8, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 73 ))
        {
            g_U570 = 17;
            sub_38185( 9, uParam0 );
        };;;;;;;;;;
    }
    return g_U570;
}

void sub_43123(int iParam0)
{
    if (iParam0 < 1)
    {
        return;
    }
    if (# -NULL-0xc27c84())
    {
        sub_24811( 1, g_U484._fU88[iParam0 - 1], 0.15500000 + (((iParam0 - 1) mod 3) * 0.35000000), 0.30000000 + (((iParam0 - 1) / 3) * 0.20500000), 0.20000000, 0.17000000, 0, 200, 0, 255, 0 );
        if (iParam0 != 12)
        {
            sub_23411( 1, g_U484._fU144[0], (0.15500000 + (((iParam0 - 1) mod 3) * 0.35000000)) + 0.03800000, 0.30000000 + (((iParam0 - 1) / 3) * 0.20500000), 0.10000000, 0.14000000 );
        }
    }
    else if (# -NULL-0xc27bfa())
    {
        sub_24811( 1, g_U484._fU88[iParam0 - 1], 0.15500000 + (((iParam0 - 1) mod 3) * 0.35000000), 0.30000000 + (((iParam0 - 1) / 3) * 0.20500000), 0.20000000, 0.17000000, 0, 200, 0, 255, 0 );
        if ((iParam0 != 12) AND (IS_USING_CONTROLLER()))
        {
            sub_23411( 1, g_U484._fU144[0], (0.15500000 + (((iParam0 - 1) mod 3) * 0.35000000)) + 0.03800000, 0.30000000 + (((iParam0 - 1) / 3) * 0.20500000), 0.10000000, 0.14000000 );
        }
    }
    else
    {
        sub_24811( 1, g_U484._fU88[iParam0 - 1], 0.15500000 + (((iParam0 - 1) mod 3) * 0.35000000), 0.30000000 + (((iParam0 - 1) / 3) * 0.20500000), 0.20000000, 0.17000000, 108, 130, 187, 255, 0 );
        if (iParam0 != 12)
        {
            sub_23411( 1, g_U484._fU144[0], 0.15500000 + (((iParam0 - 1) mod 3) * 0.35000000), 0.30000000 + (((iParam0 - 1) / 3) * 0.20500000), 0.10000000, 0.14000000 );
        }
    }
    return;
}

void sub_43940(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_44014(int iParam0, unknown uParam1, unknown uParam2)
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
            sub_44296( uParam2 );
            iParam0->_fU16[iParam0->_fU44] = iVar6;
            sub_11178( ref (uParam1^)[iVar6], ref (uParam2^)[iParam0->_fU44] );
            sub_5874( iParam0, uParam2, iParam0->_fU44 );
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
                sub_11178( ref (uParam1^)[iParam0->_fU16[I]], ref (uParam2^)[I] );
            }
            sub_5874( iParam0, uParam2, -1 );
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

void sub_44296(unknown uParam0)
{
    int I;

    for ( I = (uParam0^) - 2; I >= 0; I += -1 )
    {
        (uParam0^)[I + 1] = {(uParam0^)[I]};
    }
    return;
}

void sub_44886(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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

void sub_44964(int iParam0, unknown uParam1, unknown uParam2)
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
            sub_45258( uParam2 );
            iParam0->_fU16[iParam0->_fU44] = iVar6;
            sub_11178( ref (uParam1^)[iVar6], ref (uParam2^)[iParam0->_fU44] );
            sub_5874( iParam0, uParam2, iParam0->_fU44 );
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
                sub_11178( ref (uParam1^)[I], ref (uParam2^)[I] );
            }
            sub_5874( iParam0, uParam2, -1 );
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

void sub_45258(unknown uParam0)
{
    int I;

    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        (uParam0^)[I - 1] = {(uParam0^)[I]};
    }
    return;
}

void sub_46019()
{
    if ((# -NULL-0xbdd763()) == 1)
    {
        sub_3796( 1040 );
    }
    else if (IS_PLAYER_SIGNED_IN_LOCALLY() == 1)
    {
        while (NOT (sub_5142( 2 )))
        {
            WAIT( 0 );
            sub_5599();
        }
    }
    else
    {
        sub_3796( 1041 );
    }
    return;
}

void sub_46183()
{
    DO_SCREEN_FADE_OUT_UNHACKED( 0 );
    PAUSE_GAME();
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    SHOW_SIGNIN_UI();
    while (IS_SYSTEM_UI_SHOWING())
    {
        WAIT( 0 );
    }
    UNPAUSE_GAME();
    DO_SCREEN_FADE_IN_UNHACKED( 0 );
    return;
}

void sub_46356(int iParam0, int iParam1, int iParam2)
{
    int I;

    for ( I = 0; I <= (iParam0->_fU0 - 1); I++ )
    {
        iParam0->_fU0[I] = 0;
    }
    if (iParam2 == -1)
    {
        iParam2 = 1;
        iParam0->_fU0[4] = iParam2;
        g_U16 = iParam2;
    }
    if (iParam1 != -1)
    {
        iParam0->_fU0[0] = iParam1;
        iParam0->_fU0[1] = 0;
        iParam0->_fU0[2] = sub_46461( iParam1 );
        iParam0->_fU0[3] = 0;
        iParam0->_fU0[4] = iParam2;
        g_U16 = iParam2;
        iParam0->_fU0[5] = sub_46888( iParam1 );
    }
    return;
}

void sub_46461(unknown uParam0)
{
    return sub_46473( uParam0, 0 );
}

int sub_46473(unknown uParam0, boolean bParam1)
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

int sub_46888(unknown uParam0)
{
    switch (uParam0)
    {
        case 21:
        return 8;
        break;
        case 18:
        case 22:
        return 2;
        break;
    }
    return 0;
}

void sub_47471(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = iParam0 / 32;
    iVar4 = iParam0 mod 32;
    if (iVar3 > 2)
    {
        return;
    }
    if (iVar4 > 32)
    {
        return;
    }
    SET_BIT( ref g_U12300[iVar3], iVar4 );
    return;
}

void sub_48018(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_48103( g_U572 - 1 );
    return;
}

void sub_48103(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

void sub_48439(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
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
            sub_5874( uParam2, uParam3, I );
        }
    }
    return;
}

int sub_49107(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_8765( 0, uParam0 );
        if (iVar14 == (sub_8765( 0, uParam6 )))
        {
            iVar15 = sub_8765( 3, uParam0 );
            if (iVar15 == (sub_8765( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_51774(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_52523()
{
    sub_52532();
    sub_53264();
    g_U11 = 1;
    return;
}

void sub_52532()
{
    if (IS_NETWORK_GAME_RUNNING())
    {
        g_U39248 = 1;
        FAKE_DEATHARREST();
        if (NETWORK_IS_SESSION_STARTED())
        {
            sub_3173( "\n #### networkSetup.sch - NETWORK_IS_SESSION_STARTED is returning TRUE. " );
            if (NETWORK_END_SESSION())
            {
                sub_3173( "\n #### networkSetup.sch - called NETWORK_END_SESSION. " );
                while (NETWORK_END_SESSION_PENDING())
                {
                    WAIT( 0 );
                    sub_3173( "\n #### networkSetup.sch - NETWORK_END_SESSION_PENDING is returning TRUE. " );
                    g_U39248 = 1;
                }
            }
        }
        if ((NOT NETWORK_IS_RENDEZVOUS()) || (NETWORK_HAVE_ACCEPTED_INVITE()))
        {
            NETWORK_LEAVE_GAME();
            sub_3173( "\n #### networkSetup.sch - called NETWORK_LEAVE_GAME(). " );
            while (NETWORK_LEAVE_GAME_PENDING())
            {
                WAIT( 0 );
                sub_3173( "\n #### networkSetup.sch - NETWORK_LEAVE_GAME_PENDING is returning TRUE. " );
                g_U39248 = 1;
            }
        }
        else
        {
            sub_3173( "\n #### networkSetup.sch - not leaving game as NETWORK_IS_RENDEZVOUS is returning TRUE. " );
        }
    }
    else
    {
        sub_3173( "\n #### networkSetup.sch - IS_NETWORK_GAME_RUNNING is returning FALSE no need to clean up. " );
    }
    return;
}

void sub_53264()
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

    array(ref uVar2._fU0, 10);
    ref uVar2;
    uVar2._fU0[0] = g_U94._fU40;
    uVar2._fU0[1] = g_U94._fU108;
    uVar2._fU0[2] = g_U94._fU112;
    uVar2._fU0[3] = g_U94._fU396;
    if (g_U94._fU500)
    {
        uVar2._fU0[4] = 1;
    }
    else
    {
        uVar2._fU0[4] = 0;
    }
    if (g_U94._fU524)
    {
        uVar2._fU0[5] = 1;
    }
    else
    {
        uVar2._fU0[5] = 0;
    }
    uVar2._fU0[6] = g_U94._fU656;
    if ((g_U15862[12]._fU196._fU0) || (g_U94._fU1488))
    {
        uVar2._fU0[7] = 1;
    }
    else
    {
        uVar2._fU0[7] = 0;
    }
    STORE_SCRIPT_VALUES_FOR_NETWORK_GAME( ref uVar2 );
    return;
}
