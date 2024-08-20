void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U105 = 0;
    l_U106 = 1;
    l_U107 = 3;
    l_U109 = 350;
    l_U110 = 1.00000000;
    l_U111 = 20.00000000;
    l_U112 = 0.00000000;
    l_U113 = 0.50000000;
    l_U114 = 0;
    l_U119 = 1;
    l_U121 = 0.20000000;
    l_U1088 = 0;
    l_U1117 = 0;
    l_U1128 = 0.30000000;
    l_U1141 = 15.00000000;
    l_U1142 = 20.00000000;
    l_U1143 = 8.00000000;
    l_U1145 = 1.20000000;
    l_U1151 = 0;
    l_U1152 = 85;
    l_U1153 = 8;
    l_U1164 = -1;
    l_U1170 = 9999999;
    l_U1171 = 9999999;
    l_U1172 = 9999999;
    l_U1173 = 9999999;
    l_U1174 = 9999999;
    l_U1175 = 9999999;
    l_U1176 = 99999999;
    l_U1177 = 9999999;
    l_U1182 = 1000;
    l_U1185 = -1;
    l_U1186 = -1;
    l_U1187 = -1;
    l_U1200 = 0;
    l_U1201 = 0;
    l_U1202 = 0;
    l_U1203 = 0;
    l_U1204 = 0;
    l_U1205 = 0;
    l_U1206 = 0;
    l_U1207 = 0;
    l_U1208 = 0;
    l_U1248 = {0.10300000, 0.04000000, -0.04800000};
    l_U1251 = {0.10300000, 0.03700000, 0.03500000};
    l_U1254 = {3.14000000, 0.00000000, 0.00000000};
    l_U1257 = {3.14000000, 3.14000000, 0.00000000};
    l_U1260 = {0.10900000, 0.04100000, -0.03700000};
    l_U1263 = {0.06800000, 0.04000000, 0.02500000};
    l_U1266 = {3.14000000, 0.00000000, 0.00000000};
    l_U1269 = {0.00000000, 0.00000000, 0.00000000};
    l_U1272 = {0.10300000, 0.04000000, -0.03000000};
    l_U1275 = {0.00000000, 0.00000000, 0.00000000};
    l_U1281 = {0.00000000, 0.12000000, 0.00000000};
    l_U1284 = {0.00000000, 0.00000000, 0.00000000};
    PRINTSTRING( "AmbNightClub - Hercules script started" );
    PRINTNL();
    if (sub_671() > 2)
    {
        sub_823();
    }
    l_U1245 = {l_U1287._fU4[0]};
    l_U1149 = sub_6454( l_U1245 );
    if (NOT (l_U1149 == 2))
    {
        sub_823();
    }
    sub_6912();
    SWITCH_PED_PATHS_OFF( -444.59140000, 347.65840000, 8.48240000, -440.59140000, 361.23340000, 13.80740000 );
    while (true)
    {
        sub_14364();
        WAIT( 0 );
    }
    return;
}

void sub_671()
{
    int Result;

    Result = 0;
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubM92" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM2" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM_min" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubHC2" );
    return Result;
}

void sub_823()
{
    int I;

    if (l_U1149 == 1)
    {
        sub_849( g_U30198 );
        sub_849( g_U30199 );
        sub_849( g_U30202 );
        g_U30198 = -1;
        g_U30199 = -1;
        g_U30202 = -1;
    }
    if (l_U1149 == 2)
    {
        sub_849( g_U30201 );
        sub_849( g_U30200 );
        sub_849( g_U30203 );
        g_U30201 = -1;
        g_U30200 = -1;
        g_U30203 = -1;
    }
    if (l_U1149 == 1)
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLOSED_CLUBSEC" ))
        {
            CLEAR_HELP();
        }
    }
    if (l_U1084)
    {
        sub_1794();
    }
    for ( I = 0; I < l_U920; I++ )
    {
        if (l_U920[I]._fU0)
        {
            if (DOES_CHAR_EXIST( l_U920[I]._fU24 ))
            {
                sub_2299( ref l_U920[I], 0 );
            }
        }
    }
    for ( I = 0; I < l_U139; I++ )
    {
        if (l_U139[I]._fU0)
        {
            if (DOES_CHAR_EXIST( l_U139[I]._fU24 ))
            {
                sub_2299( ref l_U139[I], 0 );
            }
        }
    }
    for ( I = 0; I < l_U139; I++ )
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U139[I]._fU44 );
    }
    for ( I = 0; I < l_U920; I++ )
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U920[I]._fU44 );
    }
    if (DOES_OBJECT_EXIST( l_U1210 ))
    {
        DELETE_OBJECT( ref l_U1210 );
    }
    sub_5661();
    switch (l_U1149)
    {
        case 1:
        g_U30218 = 0;
        g_U30219 = 0;
        g_U30220 = 0;
        g_U30221 = 0;
        break;
        case 2:
        g_U30222 = 0;
        g_U30223 = 0;
        g_U30224 = 0;
        g_U30225 = 0;
        break;
    }
    if (g_U30110[l_U1149])
    {
        PRINTSTRING( "g_bWaitingForClubScriptToStreamIn - set to false in club cleanup" );
        PRINTNL();
        g_U30110[l_U1149] = 0;
    }
    if (l_U1095)
    {
        STOP_STREAM();
        l_U1095 = 0;
    }
    if (l_U1096)
    {
        STOP_STREAM();
        l_U1096 = 0;
    }
    if ((l_U1104) || (l_U1106))
    {
        if (IS_PLAYER_PLAYING( sub_2044() ))
        {
            SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3600(), 3.00000000 );
        }
    }
    if (l_U1106)
    {
        if (IS_PLAYER_PLAYING( sub_2044() ))
        {
            SET_ANIM_GROUP_FOR_CHAR( sub_3600(), "MOVE_PLAYER" );
        }
    }
    PRINTSTRING( "CLUB SCRIPT - " );
    switch (l_U1149)
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
    PRINTNL();
    if (g_U30154[l_U1149])
    {
        g_U30154[l_U1149] = 0;
    }
    sub_6224();
    if (l_U1115)
    {
        STOP_STREAM();
        l_U1115 = 0;
    }
    if (l_U1116)
    {
        if (l_U1117)
        {
            MUTE_POSITIONED_RADIO( 0 );
            l_U1116 = 0;
        }
    }
    if (g_U30197 == l_U1149)
    {
        g_U30197 = -1;
    }
    if (l_U1119)
    {
        if (NOT (l_U1186 == -1))
        {
            MUTE_STATIC_EMITTER( l_U1186, 0 );
            l_U1119 = 0;
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_849(int iParam0)
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
            sub_1316( iParam0, 0 );
            sub_1451( g_U29971[iParam0]._fU8 );
            g_U29971[iParam0]._fU8 = 0;
            PRINTSTRING( "FREE_UP_GLOBAL_CLUBPED_SLOT() - slot number " );
            PRINTINT( iParam0 );
            PRINTNL();
        }
    }
    return;
}

void sub_1316(int iParam0, unknown uParam1)
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

void sub_1451(unknown uParam0)
{
    PRINTSTRING( "RELOAD_GLOBAL_CLUBPED_ARRAY() - called with " );
    PRINTINT( uParam0 );
    PRINTNL();
    g_U30128[uParam0] = 1;
    return;
}

void sub_1794()
{
    PRINTSTRING( "RESTORE_DENSITIES() - called by " );
    switch (l_U1149)
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
    PRINTNL();
    SWITCH_GARBAGE_TRUCKS( 1 );
    g_U43642 = 0;
    g_U10935 = 0;
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_REDUCE_VEHICLE_MODEL_BUDGET( 0 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SWITCH_RANDOM_TRAINS( 1 );
    SET_SCENARIO_PED_DENSITY_MULTIPLIER( 1.00000000, 1.00000000 );
    if (IS_PLAYER_PLAYING( sub_2044() ))
    {
        SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( sub_2044(), 1 );
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_2044(), 0 );
    }
    l_U1084 = 0;
    if (NOT l_U1086)
    {
        g_U30102 = 0;
        g_U30103 = 1;
    }
    else
    {
        g_U30102 = 0;
        g_U30103 = 0;
    }
    PRINTSTRING( "SET_INTERIOR_DENSITIES - RESTORE_DENSITIES() called" );
    PRINTNL();
    return;
}

void sub_2044()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2299(int iParam0, boolean bParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (iParam0->_fU24 == g_U30208))
    {
        if (NOT (sub_2330( iParam0->_fU24 )))
        {
            l_U1156++;
            l_U1151--;
            g_U30188--;
            if (iParam0->_fU4 == 14)
            {
                if (DOES_CHAR_EXIST( iParam0->_fU24 ))
                {
                    if (IS_CHAR_INJURED( iParam0->_fU24 ))
                    {
                        l_U1125 = 1;
                    }
                }
                if (NOT (DOES_OBJECT_EXIST( l_U1210 )))
                {
                    sub_2700();
                }
            }
            if ((iParam0->_fU12 == 99) || ((DOES_CHAR_EXIST( iParam0->_fU24 )) AND (IS_CHAR_INJURED( iParam0->_fU24 ))))
            {
                iParam0->_fU20 = 35536;
                iParam0->_fU16 = -1;
            }
            if (DOES_OBJECT_EXIST( iParam0->_fU44 ))
            {
                if (iParam0->_fU52 == 11)
                {
                    DELETE_OBJECT( iParam0 + 44 );
                }
                else
                {
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( iParam0 + 44 );
                }
            }
            if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
            {
                if (HAS_CUTSCENE_FINISHED())
                {
                    SET_CHAR_IN_CUTSCENE( iParam0->_fU24, 0 );
                }
                SET_CHAR_COLLISION( iParam0->_fU24, 1 );
                if (sub_2999( iParam0->_fU56 ))
                {
                    FREEZE_CHAR_POSITION( iParam0->_fU24, 0 );
                }
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU24, 0 );
            }
            else if ((((((((iParam0->_fU4 == 1) || (iParam0->_fU4 == 2)) || (iParam0->_fU4 == 4)) || (iParam0->_fU4 == 6)) || (iParam0->_fU4 == 7)) || (iParam0->_fU4 == 10)) || (iParam0->_fU4 == 12)) || (iParam0->_fU4 == 13))
            {
                if (l_U1149 == 0)
                {
                    g_U30189++;
                }
            }
            if (l_U1086)
            {
                if ((((((((iParam0->_fU4 == 1) || (iParam0->_fU4 == 2)) || (iParam0->_fU4 == 4)) || (iParam0->_fU4 == 6)) || (iParam0->_fU4 == 7)) || (iParam0->_fU4 == 10)) || (iParam0->_fU4 == 12)) || (iParam0->_fU4 == 13))
                {
                    if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                    {
                        CLEAR_CHAR_TASKS( iParam0->_fU24 );
                        if (NOT (IS_CHAR_INJURED( sub_3600() )))
                        {
                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "GUN_RUN", 1, 1, 2 );
                            TASK_SMART_FLEE_CHAR( iParam0->_fU24, sub_3600(), 200.00000000, -1 );
                            SET_CHAR_KEEP_TASK( iParam0->_fU24, 1 );
                            l_U1154++;
                        }
                    }
                }
            }
            if (iParam0->_fU24 == g_U30212)
            {
                g_U30212 = nil;
            }
            if (iParam0->_fU24 == g_U30211)
            {
                g_U30211 = nil;
            }
            if (iParam0->_fU24 == g_U30213)
            {
                g_U30211 = nil;
            }
            if (NOT bParam1)
            {
                sub_3809( iParam0->_fU24 );
            }
            else if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
            {
                if (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))
                {
                    if (NOT (sub_3885( sub_3600(), l_U1149, 0 )))
                    {
                        if (sub_3885( iParam0->_fU24, l_U1149, 0 ))
                        {
                            DELETE_CHAR( iParam0 + 24 );
                        }
                        else
                        {
                            sub_3809( iParam0->_fU24 );
                        }
                    }
                    else
                    {
                        DELETE_CHAR( iParam0 + 24 );
                    }
                }
                else
                {
                    DELETE_CHAR( iParam0 + 24 );
                }
            }
            else
            {
                sub_3809( iParam0->_fU24 );
            }
            iParam0->_fU24 = nil;
            iParam0->_fU12 = 0;
            iParam0->_fU8 = 0;
            if ((l_U1113) || (g_U30114[l_U1149]))
            {
                iParam0->_fU20 = 0;
            }
            if (l_U1088)
            {
                if (l_U1097)
                {
                    PRINTSTRING( "GLOBAL CLUB PED REMOVED - " );
                }
                else
                {
                    PRINTSTRING( "CLUB PED REMOVED - " );
                }
                switch (iParam0->_fU4)
                {
                    case 1:
                    PRINTSTRING( "INTERIOR_CROWD" );
                    break;
                    case 2:
                    PRINTSTRING( "EXTERIOR_CROWD" );
                    break;
                    case 13:
                    PRINTSTRING( "REFUSED_ENTRY" );
                    break;
                    case 4:
                    PRINTSTRING( "INTERIOR_PATROL" );
                    break;
                    case 5:
                    PRINTSTRING( "INTERIOR_STAFF" );
                    break;
                    case 14:
                    PRINTSTRING( "JONI" );
                    break;
                    case 6:
                    PRINTSTRING( "BOTH_PATROL" );
                    break;
                    case 7:
                    PRINTSTRING( "STAIRWELL_PED" );
                    break;
                    case 8:
                    PRINTSTRING( "INTERIOR_BOUNCER" );
                    break;
                    case 9:
                    PRINTSTRING( "EXTERIOR_BOUNCER" );
                    break;
                    case 10:
                    PRINTSTRING( "INTERIOR_DANCER" );
                    break;
                    case 12:
                    PRINTSTRING( "SPECIFIC_DANCER" );
                    break;
                }
                PRINTSTRING( ", iClubPedBeingProcessed = " );
                PRINTINT( l_U1162 );
                PRINTSTRING( ", iTotalPeds = " );
                PRINTINT( l_U1151 );
                PRINTNL();
            }
        }
        else if (iParam0->_fU4 == 14)
        {
            if (DOES_OBJECT_EXIST( l_U1210 ))
            {
                DELETE_OBJECT( ref l_U1210 );
            }
        }
    }
    return;
}

int sub_2330(unknown uParam0)
{
    unknown uVar3;

    if (sub_2341( uParam0 ))
    {
        uVar3 = sub_2412( uParam0 );
        return g_U30132[uVar3];
    }
    return 0;
}

int sub_2341(int iParam0)
{
    int I;

    for ( I = 0; I < 11; I++ )
    {
        if (g_U29971[I]._fU12 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2412(int iParam0)
{
    int Result;

    if (sub_2341( iParam0 ))
    {
        for ( Result = 0; Result < 11; Result++ )
        {
            if (g_U29971[Result]._fU12 == iParam0)
            {
                return Result;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "GET_CLUBPED_GLOBAL_SLOT_NUMBER - ped is not a global clubped!" );
    }
    return -1;
}

void sub_2700()
{
    CREATE_OBJECT( 159317168, -473.08840000, 145.66880000, 8.85860000, ref l_U1210, 1 );
    SET_OBJECT_HEADING( l_U1210, 294.49840000 - 180 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1210, "E2_MaisonsecurRoom" );
    FREEZE_OBJECT_POSITION( l_U1210, 1 );
    return;
}

int sub_2999(unknown uParam0)
{
    switch (uParam0)
    {
        case 2:
        return 1;
        break;
        default:
    }
    switch (l_U1149)
    {
        case 2:
        switch (uParam0)
        {
            case 71:
            case 72:
            case 81:
            case 82:
            case 41:
            case 42:
            return 1;
            break;
        }
        break;
        case 1:
        switch (uParam0)
        {
            case 34:
            case 35:
            case 43:
            case 44:
            case 45:
            case 46:
            case 52:
            case 53:
            case 56:
            return 1;
            break;
        }
        break;
        case 0:
        switch (uParam0)
        {
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            return 1;
            break;
        }
        break;
    }
    return 0;
}

void sub_3600()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3809(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_3885(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_3913( uParam0, uParam1 ))
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

int sub_3913(unknown uParam0, unknown uParam1)
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
            if (IS_CHAR_IN_AREA_3D( sub_3600(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_5661()
{
    g_U30093[l_U1149] = 0;
    g_U30145[l_U1149] = 0;
    return;
}

void sub_6224()
{
    if (NOT (HAS_SOUND_FINISHED( l_U1185 )))
    {
        STOP_SOUND( l_U1185 );
    }
    RELEASE_SOUND_ID( l_U1185 );
    l_U1185 = -1;
    l_U1180 = 0;
    return;
}

int sub_6454(vector vParam0)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    uVar5 = {(vector( 5.10000000, 425.76000000, -393.78000000)) - vParam0};
    if ((VMAG( uVar5 )) < 20.00000000)
    {
        PRINTSTRING( "GET_NEAREST_NIGHTCLUB_FROM_COORDS = CLUB_BAHAMA_MAMAS" );
        PRINTNL();
        return 0;
    }
    uVar5 = {(vector( 7.56070000, 149.43310000, -483.90180000)) - vParam0};
    if ((VMAG( uVar5 )) < 20.00000000)
    {
        PRINTSTRING( "GET_NEAREST_NIGHTCLUB_FROM_COORDS = CLUB_MAISONETTE_9" );
        PRINTNL();
        return 1;
    }
    uVar5 = {(vector( 11.71660000, 351.76230000, -431.82560000)) - vParam0};
    if ((VMAG( uVar5 )) < 20.00000000)
    {
        PRINTSTRING( "GET_NEAREST_NIGHTCLUB_FROM_COORDS = CLUB_HERCULES" );
        PRINTNL();
        return 2;
    }
    PRINTSTRING( "GET_NEAREST_NIGHTCLUB_FROM_COORDS = not recognised" );
    PRINTNL();
    return -1;
}

void sub_6912()
{
    unknown uVar2;

    l_U981[18]._fU0 = "DANCE_1_A_01";
    l_U981[19]._fU0 = "DANCE_1_A_02";
    l_U981[20]._fU0 = "DANCE_2_A_01";
    l_U981[21]._fU0 = "DANCE_2_A_02";
    l_U981[22]._fU0 = "DANCE_3_A_01";
    l_U981[23]._fU0 = "DANCE_3_A_02";
    l_U981[24]._fU0 = "DANCE_4_A_01";
    l_U981[25]._fU0 = "DANCE_4_A_02";
    l_U981[26]._fU0 = "DANCEA";
    l_U981[27]._fU0 = "DANCEB";
    l_U981[28]._fU0 = "DANCEC";
    l_U981[29]._fU0 = "DANCED";
    l_U981[30]._fU0 = "F_BAR_LEAN_A";
    l_U981[31]._fU0 = "F_BAR_LEAN_B";
    l_U981[32]._fU0 = "F_BAR_LEAN_C";
    l_U981[33]._fU0 = "F_BAR_LEAN_D";
    l_U981[34]._fU0 = "CHAT_CHATA";
    l_U981[35]._fU0 = "F_DANCE_A";
    l_U981[36]._fU0 = "F_DANCE_B";
    l_U981[37]._fU0 = "F_STAND_A";
    l_U981[38]._fU0 = "F_STAND_B";
    l_U981[39]._fU0 = "F_STAND_C";
    l_U981[40]._fU0 = "F_STAND_D";
    l_U981[41]._fU0 = "FEMALE_CHAIR_ALONE";
    l_U981[42]._fU0 = "FEMALE_CHAIR_CHAT";
    l_U981[43]._fU0 = "BRTNDR_ARM_UP_DANCE";
    l_U981[44]._fU0 = "BRTNDR_DANCE_A";
    l_U981[45]._fU0 = "BRTNDR_FLIRT";
    l_U981[46]._fU0 = "BRTNDR_MIX_DRINK";
    l_U981[47]._fU0 = "BRTNDR_MIX_DRINKB";
    l_U981[48]._fU0 = "BRTNDR_POINT_DANCE";
    l_U981[49]._fU0 = "BRTNDR_TURN_DANCE";
    l_U981[50]._fU0 = "CHAT_BRTNDR_A";
    l_U981[51]._fU0 = "CHAT_PNTR_A";
    l_U981[52]._fU0 = "CHIT_CHATA";
    l_U981[53]._fU0 = "DANCEA";
    l_U981[54]._fU0 = "GAY_BREAKOUT";
    l_U981[55]._fU0 = "GAY_DANCE_A";
    l_U981[56]._fU0 = "GAY_DANCE_B";
    l_U981[57]._fU0 = "GAY_DANCE_C";
    l_U981[58]._fU0 = "GAY_DANCE_D";
    l_U981[59]._fU0 = "GAY_DANCE_STAGE_A";
    l_U981[60]._fU0 = "GAY_DANCE_STAGE_B";
    l_U981[61]._fU0 = "GAY_DANCE_STAGE_C";
    l_U981[62]._fU0 = "GAY_DANCE_STAGE_D";
    l_U981[63]._fU0 = "GAY_DANCE_STAGE_E";
    l_U981[64]._fU0 = "GAY_GAY_DANCEA";
    l_U981[65]._fU0 = "GAY_HAND_TWIRL";
    l_U981[66]._fU0 = "M_BARTENDER_DANCE";
    l_U981[67]._fU0 = "M_SOLO";
    l_U981[68]._fU0 = "CHATTING_PAIR_A";
    l_U981[69]._fU0 = "CHATTING_PAIR_B";
    l_U981[70]._fU0 = "CHATTING_BRTNDR";
    l_U981[71]._fU0 = "COUCH_CHAT_L";
    l_U981[72]._fU0 = "COUCH_CHAT_R";
    l_U981[73]._fU0 = "STAND_DANCE";
    l_U981[74]._fU0 = "STAND_COQUETTE";
    l_U981[75]._fU0 = "HOT_SHIT";
    l_U981[76]._fU0 = "STAND_CHECKOUT";
    l_U981[77]._fU0 = "TABLE_LONELY";
    l_U981[78]._fU0 = "TABLE_FLIRTING_A";
    l_U981[79]._fU0 = "TABLE_FLIRTING_B";
    l_U981[80]._fU0 = "FLIRT_BAR";
    l_U981[81]._fU0 = "MALE_CHAIR_CHAT";
    l_U981[82]._fU0 = "MALE_CHAIR_ALONE";
    GET_WEAPONTYPE_MODEL( 12, ref l_U1197[0] );
    GET_WEAPONTYPE_MODEL( 7, ref l_U1197[1] );
    l_U1208 = 1662473323;
    l_U1206 = 0;
    l_U126._fU4 = {-430.31660000, 350.37160000, 10.71670000};
    l_U126._fU16 = {-427.34160000, 353.64660000, 13.71670000};
    l_U126._fU28 = {-430.31660000, 350.37160000, 10.71670000};
    l_U126._fU40 = {-427.34160000, 353.64660000, 13.71670000};
    l_U126._fU0 = 1;
    if (g_U30222 == 0)
    {
        g_U30222 = 284474691;
    }
    if (g_U30223 == 0)
    {
        g_U30223 = -1438129870;
    }
    if (g_U30224 == 0)
    {
        g_U30224 = -1064645793;
    }
    if (g_U30225 == 0)
    {
        g_U30225 = -808865642;
    }
    if (g_U30144)
    {
        if (NOT g_U12379)
        {
            g_U30144 = 0;
        }
    }
    if (NOT g_U30144)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar2 );
        switch (uVar2)
        {
            case 0:
            l_U1201 = 563038535;
            break;
            case 1:
            l_U1201 = -525685978;
            break;
            case 2:
            l_U1201 = -699328461;
            break;
            case 3:
            l_U1202 = 284474691;
            break;
            case 4:
            l_U1202 = 1668078208;
            break;
        }
        l_U1202 = -1438129870;
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar2 );
        switch (uVar2)
        {
            case 0:
            l_U1204 = -1064645793;
            break;
            case 1:
            l_U1204 = -1608957460;
            break;
        }
        l_U1205 = -808865642;
        g_U30222 = l_U1201;
        g_U30223 = l_U1202;
        g_U30224 = l_U1204;
        g_U30225 = l_U1205;
    }
    else
    {
        l_U1201 = g_U30222;
        l_U1202 = g_U30223;
        l_U1204 = g_U30224;
        l_U1205 = g_U30225;
    }
    l_U139[0]._fU0 = 1;
    l_U139[0]._fU52 = 5;
    l_U139[0]._fU4 = 7;
    l_U139[0]._fU56 = 17;
    l_U139[0]._fU28 = {-438.89600000, 349.11720000, 10.71170000};
    l_U139[0]._fU40 = 0.00000000;
    l_U139[1]._fU0 = 1;
    l_U139[1]._fU52 = 6;
    l_U139[1]._fU4 = 7;
    l_U139[1]._fU56 = 17;
    l_U139[1]._fU28 = {-438.76610000, 350.98550000, 10.71170000};
    l_U139[1]._fU40 = 180.00000000;
    l_U139[2]._fU0 = 1;
    l_U139[2]._fU52 = 2;
    l_U139[2]._fU4 = 7;
    l_U139[2]._fU56 = 17;
    l_U139[2]._fU28 = {-439.46770000, 351.93640000, 10.71170000};
    l_U139[2]._fU40 = 209.47600000;
    l_U139[3]._fU0 = 1;
    l_U139[3]._fU52 = 2;
    l_U139[3]._fU4 = 2;
    l_U139[3]._fU56 = 15;
    l_U139[3]._fU28 = {-442.03000000, 359.67040000, 9.85630000};
    l_U139[3]._fU40 = 80.32720000;
    l_U139[4]._fU0 = 1;
    l_U139[4]._fU52 = 2;
    l_U139[4]._fU4 = 2;
    l_U139[4]._fU56 = 15;
    l_U139[4]._fU28 = {-442.79010000, 360.50380000, 9.72450000};
    l_U139[4]._fU40 = 241.18940000;
    l_U139[5]._fU0 = 1;
    l_U139[5]._fU52 = 2;
    l_U139[5]._fU4 = 2;
    l_U139[5]._fU56 = 15;
    l_U139[5]._fU28 = {-443.37470000, 353.99330000, 10.56200000};
    l_U139[5]._fU40 = 314.34420000;
    l_U139[6]._fU0 = 1;
    l_U139[6]._fU52 = 2;
    l_U139[6]._fU4 = 2;
    l_U139[6]._fU56 = 17;
    l_U139[6]._fU28 = {-442.28310000, 355.18140000, 10.25570000};
    l_U139[6]._fU40 = 17.86760000;
    l_U139[7]._fU0 = 1;
    l_U139[7]._fU52 = 2;
    l_U139[7]._fU4 = 2;
    l_U139[7]._fU56 = 17;
    l_U139[7]._fU28 = {-443.04320000, 355.14850000, 10.26960000};
    l_U139[7]._fU40 = 346.40920000;
    l_U139[8]._fU0 = 1;
    l_U139[8]._fU52 = 2;
    l_U139[8]._fU4 = 2;
    l_U139[8]._fU56 = 17;
    l_U139[8]._fU28 = {-442.49180000, 354.21900000, 10.41700000};
    l_U139[8]._fU40 = 0.51030000;
    l_U139[9]._fU0 = 1;
    l_U139[9]._fU52 = 1;
    l_U139[9]._fU4 = 2;
    l_U139[9]._fU56 = 2;
    l_U139[9]._fU28 = {-441.32170000, 353.43850000, 10.80000000};
    l_U139[9]._fU40 = 90.00000000;
    l_U139[10]._fU0 = 1;
    l_U139[10]._fU52 = 2;
    l_U139[10]._fU4 = 2;
    l_U139[10]._fU56 = 17;
    l_U139[10]._fU28 = {-443.03730000, 353.16360000, 10.59520000};
    l_U139[10]._fU40 = 346.92920000;
    l_U139[11]._fU0 = 1;
    l_U139[11]._fU52 = 2;
    l_U139[11]._fU4 = 1;
    l_U139[11]._fU56 = 81;
    l_U139[11]._fU28 = {-436.86300000, 348.84200000, 10.70000000};
    l_U139[11]._fU40 = 266.00000000;
    l_U139[12]._fU0 = 1;
    l_U139[12]._fU52 = 2;
    l_U139[12]._fU4 = 1;
    l_U139[12]._fU56 = 71;
    l_U139[12]._fU28 = {-435.78980000, 347.97560000, 10.70000000};
    l_U139[12]._fU40 = 320.00000000;
    l_U139[13]._fU0 = 1;
    l_U139[13]._fU52 = 1;
    l_U139[13]._fU4 = 1;
    l_U139[13]._fU56 = 42;
    l_U139[13]._fU28 = {-434.50100000, 348.74200000, 10.70000000};
    l_U139[13]._fU40 = 71.50000000;
    l_U139[14]._fU0 = 1;
    l_U139[14]._fU52 = 2;
    l_U139[14]._fU4 = 1;
    l_U139[14]._fU56 = 81;
    l_U139[14]._fU28 = {-430.59670000, 355.24800000, 10.70000000};
    l_U139[14]._fU40 = 220.00000000;
    l_U139[15]._fU0 = 1;
    l_U139[15]._fU52 = 2;
    l_U139[15]._fU4 = 1;
    l_U139[15]._fU56 = 82;
    l_U139[15]._fU28 = {-429.86420000, 355.36800000, 10.70000000};
    l_U139[15]._fU40 = 180.00000000;
    l_U139[16]._fU0 = 1;
    l_U139[16]._fU52 = 2;
    l_U139[16]._fU4 = 1;
    l_U139[16]._fU56 = 71;
    l_U139[16]._fU28 = {-428.69420000, 355.37800000, 10.70000000};
    l_U139[16]._fU40 = 180.00000000;
    l_U139[17]._fU0 = 1;
    l_U139[17]._fU52 = 2;
    l_U139[17]._fU4 = 1;
    l_U139[17]._fU56 = 72;
    l_U139[17]._fU28 = {-428.11670000, 355.36300000, 10.73250000};
    l_U139[17]._fU40 = 180.00000000;
    l_U139[18]._fU0 = 1;
    l_U139[18]._fU52 = 1;
    l_U139[18]._fU4 = 1;
    l_U139[18]._fU56 = 42;
    l_U139[18]._fU28 = {-429.84100000, 349.65600000, 10.75000000};
    l_U139[18]._fU40 = 225.00000000;
    l_U139[19]._fU0 = 1;
    l_U139[19]._fU52 = 2;
    l_U139[19]._fU4 = 1;
    l_U139[19]._fU56 = 82;
    l_U139[19]._fU28 = {-427.99420000, 347.95300000, 10.70000000};
    l_U139[19]._fU40 = 60.00000000;
    l_U139[20]._fU0 = 1;
    l_U139[20]._fU52 = 2;
    l_U139[20]._fU4 = 1;
    l_U139[20]._fU56 = 81;
    l_U139[20]._fU28 = {-428.37800000, 349.83100000, 10.70000000};
    l_U139[20]._fU40 = 180.00000000;
    l_U139[21]._fU0 = 1;
    l_U139[21]._fU52 = 1;
    l_U139[21]._fU4 = 1;
    l_U139[21]._fU56 = 42;
    l_U139[21]._fU28 = {-429.95300000, 348.10600000, 10.80000000};
    l_U139[21]._fU40 = 299.70000000;
    l_U139[22]._fU0 = 1;
    l_U139[22]._fU52 = 2;
    l_U139[22]._fU4 = 10;
    l_U139[22]._fU56 = 55;
    l_U139[22]._fU28 = {-432.61750000, 348.88740000, 11.48890000};
    l_U139[22]._fU40 = 333.02840000;
    l_U139[23]._fU0 = 1;
    l_U139[23]._fU52 = 2;
    l_U139[23]._fU4 = 10;
    l_U139[23]._fU56 = 60;
    l_U139[23]._fU28 = {-426.23560000, 349.32950000, 10.89420000};
    l_U139[23]._fU40 = 90.00000000;
    l_U139[24]._fU0 = 1;
    l_U139[24]._fU52 = 2;
    l_U139[24]._fU4 = 10;
    l_U139[24]._fU56 = 61;
    l_U139[24]._fU28 = {-426.09700000, 350.39040000, 10.88420000};
    l_U139[24]._fU40 = 88.80000000;
    l_U139[25]._fU0 = 1;
    l_U139[25]._fU52 = 2;
    l_U139[25]._fU4 = 10;
    l_U139[25]._fU56 = 62;
    l_U139[25]._fU28 = {-426.13060000, 352.99730000, 10.90670000};
    l_U139[25]._fU40 = 0.00000000;
    l_U139[26]._fU0 = 1;
    l_U139[26]._fU52 = 2;
    l_U139[26]._fU4 = 10;
    l_U139[26]._fU56 = 63;
    l_U139[26]._fU28 = {-426.44170000, 354.05190000, 10.90920000};
    l_U139[26]._fU40 = 90.00000000;
    l_U139[27]._fU0 = 1;
    l_U139[27]._fU52 = 2;
    l_U139[27]._fU4 = 10;
    l_U139[27]._fU56 = 57;
    l_U139[27]._fU28 = {-428.17170000, 351.13060000, 10.71170000};
    l_U139[27]._fU40 = 60.00000000;
    l_U139[28]._fU0 = 1;
    l_U139[28]._fU52 = 2;
    l_U139[28]._fU4 = 10;
    l_U139[28]._fU56 = 55;
    l_U139[28]._fU28 = {-429.17000000, 350.99700000, 10.71170000};
    l_U139[28]._fU40 = 250.00000000;
    l_U139[29]._fU0 = 1;
    l_U139[29]._fU52 = 4;
    l_U139[29]._fU4 = 12;
    l_U139[29]._fU56 = 0;
    l_U139[29]._fU28 = {-428.33090000, 352.75670000, 10.71170000};
    l_U139[29]._fU40 = 101.80030000;
    l_U139[30]._fU0 = 1;
    l_U139[30]._fU52 = 2;
    l_U139[30]._fU4 = 1;
    l_U139[30]._fU56 = 75;
    l_U139[30]._fU28 = {-432.07710000, 350.27730000, 10.66920000};
    l_U139[30]._fU40 = 330.00000000;
    l_U139[31]._fU0 = 1;
    l_U139[31]._fU52 = 2;
    l_U139[31]._fU4 = 1;
    l_U139[31]._fU56 = 77;
    l_U139[31]._fU28 = {-432.39160000, 351.16450000, 10.71170000};
    l_U139[31]._fU40 = 230.00000000;
    l_U139[32]._fU0 = 1;
    l_U139[32]._fU52 = 1;
    l_U139[32]._fU4 = 1;
    l_U139[32]._fU56 = 34;
    l_U139[32]._fU28 = {-431.18200000, 351.12500000, 10.71000000};
    l_U139[32]._fU40 = 73.00000000;
    l_U139[33]._fU0 = 1;
    l_U139[33]._fU52 = 2;
    l_U139[33]._fU4 = 1;
    l_U139[33]._fU56 = 68;
    l_U139[33]._fU28 = {-433.69060000, 351.18840000, 10.70670000};
    l_U139[33]._fU40 = 35.00000000;
    l_U139[34]._fU0 = 1;
    l_U139[34]._fU52 = 2;
    l_U139[34]._fU4 = 1;
    l_U139[34]._fU56 = 53;
    l_U139[34]._fU28 = {-432.98720000, 348.28920000, 11.51100000};
    l_U139[34]._fU40 = 0.00000000;
    l_U139[35]._fU0 = 1;
    l_U139[35]._fU52 = 2;
    l_U139[35]._fU4 = 1;
    l_U139[35]._fU56 = 78;
    l_U139[35]._fU28 = {-434.94570000, 350.96030000, 10.70920000};
    l_U139[35]._fU40 = 290.00000000;
    l_U139[36]._fU0 = 1;
    l_U139[36]._fU52 = 2;
    l_U139[36]._fU4 = 1;
    l_U139[36]._fU56 = 73;
    l_U139[36]._fU28 = {-434.42640000, 350.42990000, 10.71170000};
    l_U139[36]._fU40 = 347.09200000;
    l_U139[37]._fU0 = 1;
    l_U139[37]._fU52 = 2;
    l_U139[37]._fU4 = 1;
    l_U139[37]._fU56 = 7;
    l_U139[37]._fU28 = {-435.15970000, 353.10320000, 10.71170000};
    l_U139[37]._fU40 = 340.00000000;
    l_U139[38]._fU0 = 1;
    l_U139[38]._fU52 = 2;
    l_U139[38]._fU4 = 1;
    l_U139[38]._fU56 = 79;
    l_U139[38]._fU28 = {-434.09180000, 351.55860000, 10.70920000};
    l_U139[38]._fU40 = 160.00000000;
    l_U139[39]._fU0 = 1;
    l_U139[39]._fU52 = 2;
    l_U139[39]._fU4 = 1;
    l_U139[39]._fU56 = 76;
    l_U139[39]._fU28 = {-431.94700000, 352.92950000, 10.70000000};
    l_U139[39]._fU40 = 310.00000000;
    l_U139[40]._fU0 = 1;
    l_U139[40]._fU52 = 2;
    l_U139[40]._fU4 = 1;
    l_U139[40]._fU56 = 69;
    l_U139[40]._fU28 = {-431.51670000, 353.75260000, 10.72200000};
    l_U139[40]._fU40 = 190.00000000;
    l_U139[41]._fU0 = 1;
    l_U139[41]._fU52 = 2;
    l_U139[41]._fU4 = 1;
    l_U139[41]._fU56 = 54;
    l_U139[41]._fU28 = {-435.72690000, 350.27790000, 10.71170000};
    l_U139[41]._fU40 = 174.30760000;
    l_U139[42]._fU0 = 1;
    l_U139[42]._fU52 = 2;
    l_U139[42]._fU4 = 1;
    l_U139[42]._fU56 = 7;
    l_U139[42]._fU28 = {-433.41520000, 349.82590000, 10.71170000};
    l_U139[42]._fU40 = 146.31030000;
    l_U139[43]._fU0 = 1;
    l_U139[43]._fU52 = 2;
    l_U139[43]._fU4 = 1;
    l_U139[43]._fU56 = 77;
    l_U139[43]._fU28 = {-434.02070000, 349.37320000, 10.71170000};
    l_U139[43]._fU40 = 305.95370000;
    l_U139[44]._fU0 = 1;
    l_U139[44]._fU52 = 1;
    l_U139[44]._fU4 = 1;
    l_U139[44]._fU56 = 6;
    l_U139[44]._fU28 = {-430.74330000, 349.74510000, 10.71170000};
    l_U139[44]._fU40 = 340.25490000;
    l_U139[45]._fU0 = 1;
    l_U139[45]._fU52 = 2;
    l_U139[45]._fU4 = 1;
    l_U139[45]._fU56 = 60;
    l_U139[45]._fU28 = {-430.39950000, 350.96100000, 10.71170000};
    l_U139[45]._fU40 = 310.00000000;
    l_U139[46]._fU0 = 1;
    l_U139[46]._fU52 = 2;
    l_U139[46]._fU4 = 2;
    l_U139[46]._fU56 = 15;
    l_U139[46]._fU28 = {-442.04520000, 350.96160000, 10.91890000};
    l_U139[46]._fU40 = 125.40230000;
    l_U139[47]._fU0 = 1;
    l_U139[47]._fU52 = 1;
    l_U139[47]._fU4 = 2;
    l_U139[47]._fU56 = 15;
    l_U139[47]._fU28 = {-443.33050000, 349.91380000, 11.07270000};
    l_U139[47]._fU40 = 309.72730000;
    l_U139[48]._fU0 = 1;
    l_U139[48]._fU52 = 2;
    l_U139[48]._fU4 = 2;
    l_U139[48]._fU56 = 15;
    l_U139[48]._fU28 = {-441.96570000, 349.07830000, 11.13840000};
    l_U139[48]._fU40 = 60.40030000;
    l_U139[49]._fU0 = 1;
    l_U139[49]._fU52 = 2;
    l_U139[49]._fU4 = 1;
    l_U139[49]._fU56 = 74;
    l_U139[49]._fU28 = {-432.75670000, 352.92900000, 10.71170000};
    l_U139[49]._fU40 = 40.00000000;
    l_U139[50]._fU0 = 1;
    l_U139[50]._fU52 = 2;
    l_U139[50]._fU4 = 1;
    l_U139[50]._fU56 = 65;
    l_U139[50]._fU28 = {-434.55240000, 347.99370000, 10.71170000};
    l_U139[50]._fU40 = 330.00000000;
    l_U1065[0]._fU0 = {0.00000000, 0.00000000, 0.00000000};
    l_U1065[0]._fU12 = 0.00000000;
    l_U1065[0]._fU24 = 0;
    l_U1065[0]._fU16 = 0;
    return;
}

void sub_14364()
{
    int I;
    int J;
    int iVar4;
    int iVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;
    boolean bVar9;
    boolean bVar10;
    int iVar11;

    l_U1156 = 0;
    l_U1157 = 0;
    l_U1154 = 0;
    l_U1155 = 0;
    GET_FRAME_TIME( ref uVar6 );
    l_U1159 = ROUND( uVar6 * 1000.00000000 );
    l_U1160++;
    if (l_U1160 > 9)
    {
        l_U1160 = 0;
    }
    if (l_U1149 == 1)
    {
        if (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "rocco1" )) == 0))
        {
            g_U30120[l_U1149] = 1;
        }
    }
    if (NOT l_U1114)
    {
        if ((g_U30181) AND (l_U1149 == 0))
        {
            PRINTSTRING( "club locked due to g_bBahamaMamasIsShutDown = TRUE" );
            PRINTNL();
            if (NOT (sub_3885( sub_3600(), 0, 0 )))
            {
                g_U30149[l_U1149] = 1;
                l_U1114 = 1;
            }
        }
        else if (NOT g_U15811[35])
        {
            if ((NOT g_U12379) AND (NOT g_U30153))
            {
                if (NOT (l_U1149 == 2))
                {
                    if (NOT (IS_THREAD_ACTIVE( g_U30226[l_U1149] )))
                    {
                        if (((NOT (sub_14729( sub_3600(), l_U1149, 1094713344 ))) || ((l_U1121) AND (NOT (sub_3885( sub_3600(), l_U1149, 0 ))))) || (g_U30110[l_U1149]))
                        {
                            GET_TIME_OF_DAY( ref iVar7, ref uVar8 );
                            if ((iVar7 >= 6) AND (iVar7 < 21))
                            {
                                PRINTSTRING( "club locked due to time of day" );
                                PRINTNL();
                                g_U30149[l_U1149] = 1;
                                l_U1114 = 1;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            PRINTSTRING( "club locked due to g_flagMissionFlowFlags[MFF_CLUBS_SHUTDOWN] = TRUE" );
            PRINTNL();
            g_U30149[l_U1149] = 1;
            l_U1114 = 1;
        }
    }
    else
    {
        GET_TIME_OF_DAY( ref iVar7, ref uVar8 );
        if (NOT ((g_U30181) AND (l_U1149 == 0)))
        {
            if (NOT g_U15811[35])
            {
                if (((((g_U12379) || (IS_THREAD_ACTIVE( g_U30226[l_U1149] ))) || ((iVar7 >= 21) || (iVar7 < 6))) || (g_U30153)) || (sub_3885( sub_3600(), l_U1149, 0 )))
                {
                    PRINTSTRING( "club opened due to something" );
                    PRINTNL();
                    g_U30149[l_U1149] = 0;
                    l_U1114 = 0;
                    l_U1125 = 0;
                }
            }
        }
    }
    if (((sub_15432( sub_3600(), l_U1149 )) AND (IS_PLAYER_PLAYING( sub_2044() ))) AND (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "rocco1" )) > 0)))
    {
        sub_16412();
        if (g_U30154[l_U1149])
        {
            if (l_U1105)
            {
                if (HAS_CUTSCENE_FINISHED())
                {
                    PRINTSTRING( "nightclub header - thinks mocap has finished, setting g_bShowClubPedsInCutscene = FALSE for club " );
                    switch (l_U1149)
                    {
                        case 2:
                        PRINTSTRING( "HERCULES" );
                        break;
                        case 0:
                        PRINTSTRING( "BAHAMA_MAMAS" );
                        break;
                        case 1:
                        PRINTSTRING( "MAISONETTE 9" );
                        break;
                    }
                    PRINTNL();
                    g_U30154[l_U1149] = 0;
                }
            }
            else if (HAS_CUTSCENE_LOADED())
            {
                if (NOT HAS_CUTSCENE_FINISHED())
                {
                    l_U1105 = 1;
                }
            }
        }
        else if (l_U1108)
        {
            if (sub_14729( sub_3600(), l_U1149, 20.00000000 ))
            {
                sub_17098( l_U1149, 0 );
                l_U1108 = 0;
            }
        }
        else if (NOT (sub_14729( sub_3600(), l_U1149, 20.00000000 )))
        {
            sub_17098( l_U1149, 1 );
            l_U1108 = 1;
        };;;
        sub_21263();
        sub_21692();
        sub_22558();
        sub_23938();
        sub_24113();
        switch (l_U1148)
        {
            case 0:
            if (sub_3885( sub_3600(), l_U1149, 0 ))
            {
                if ((sub_24963( sub_3600(), l_U1149 )) AND (NOT g_U30093[l_U1149]))
                {
                    if (NOT (sub_25030( sub_3600(), l_U1149 )))
                    {
                        sub_25824();
                        l_U1148 = 1;
                    }
                }
            }
            break;
            case 1:
            if ((NOT (sub_3885( sub_3600(), l_U1149, 0 ))) || (NOT (sub_24963( sub_3600(), l_U1149 ))))
            {
                sub_1794();
                l_U1148 = 0;
            }
            break;
        }
        if ((NOT g_U30149[l_U1149]) || (sub_25748()))
        {
            if ((NOT g_U30120[l_U1149]) || (sub_25748()))
            {
                if (g_U30128[l_U1149])
                {
                    PRINTSTRING( "g_ReloadGlobalClubpeds[] = TRUE" );
                    PRINTNL();
                    for ( I = 0; I < l_U920; I++ )
                    {
                        if (l_U920[I]._fU0)
                        {
                            iVar4 = sub_27098( l_U920[I]._fU24, ref g_U29971 );
                            bVar9 = false;
                            if (NOT (iVar4 == -1))
                            {
                                if (NOT g_U29971[iVar4]._fU0)
                                {
                                    bVar9 = true;
                                }
                            }
                            if (iVar4 == -1)
                            {
                                bVar9 = true;
                            }
                            if (bVar9)
                            {
                                if (DOES_CHAR_EXIST( l_U920[I]._fU24 ))
                                {
                                    sub_2299( ref l_U920[I], 0 );
                                }
                                l_U920[I]._fU24 = nil;
                                l_U920[I]._fU0 = 0;
                                l_U920[I]._fU4 = 0;
                                l_U920[I]._fU28 = {0.00000000, 0.00000000, 0.00000000};
                                l_U920[I]._fU40 = 0.00000000;
                                l_U920[I]._fU48 = 0;
                                l_U920[I]._fU52 = 0;
                                l_U920[I]._fU56 = 0;
                                l_U920[I]._fU8 = 0;
                                l_U920[I]._fU12 = 0;
                                l_U920[I]._fU16 = 0;
                                l_U920[I]._fU20 = 0;
                                l_U920[I]._fU44 = nil;
                            }
                        }
                    }
                    for ( I = 0; I < g_U29971; I++ )
                    {
                        if (g_U29971[I]._fU0)
                        {
                            if (g_U29971[I]._fU8 == l_U1149)
                            {
                                bVar10 = false;
                                for ( J = 0; J < l_U920; J++ )
                                {
                                    if (DOES_CHAR_EXIST( l_U920[J]._fU24 ))
                                    {
                                        if (g_U29971[I]._fU12 == l_U920[J]._fU24)
                                        {
                                            bVar10 = true;
                                        }
                                    }
                                }
                                iVar11 = -1;
                                if (NOT bVar10)
                                {
                                    for ( J = 0; J < l_U920; J++ )
                                    {
                                        if (l_U920[J]._fU0 == 0)
                                        {
                                            iVar11 = J;
                                            J = l_U920;
                                        }
                                    }
                                    if (NOT (iVar11 == -1))
                                    {
                                        l_U920[iVar11]._fU8 = 0;
                                        l_U920[iVar11]._fU12 = 0;
                                        l_U920[iVar11]._fU16 = 0;
                                        l_U920[iVar11]._fU20 = 0;
                                        l_U920[iVar11]._fU24 = nil;
                                        l_U920[iVar11]._fU44 = nil;
                                        l_U920[iVar11]._fU0 = g_U29971[I]._fU0;
                                        l_U920[iVar11]._fU4 = g_U29971[I]._fU4;
                                        l_U920[iVar11]._fU28 = {g_U29971[I]._fU16};
                                        l_U920[iVar11]._fU40 = g_U29971[I]._fU28;
                                        l_U920[iVar11]._fU52 = g_U29971[I]._fU36;
                                        l_U920[iVar11]._fU56 = g_U29971[I]._fU40;
                                        l_U920[iVar11]._fU48 = g_U29971[I]._fU32;
                                        l_U1165[iVar11] = I;
                                    }
                                    else
                                    {
                                        PRINTSTRING( "g_ClubPEd slot = " );
                                        PRINTINT( I );
                                        PRINTNL();
                                        SCRIPT_ASSERT( "could not find free slot in clubpedsfromglobal" );
                                    }
                                }
                            }
                        }
                    }
                    g_U30128[l_U1149] = 0;
                }
                if (l_U1094)
                {
                    l_U1094 = 0;
                }
                if (NOT l_U1120)
                {
                    if (l_U1084)
                    {
                        STORE_WANTED_LEVEL( sub_2044(), ref iVar5 );
                        if (NOT (l_U1158 == iVar5))
                        {
                            DONT_DISPATCH_COPS_FOR_PLAYER( sub_2044(), 1 );
                            CLEAR_AREA_OF_COPS( l_U1245._fU0, l_U1245._fU4, l_U1245._fU8, 1000.00000000 );
                            l_U1120 = 1;
                            PRINTSTRING( "CLEAR_AREA_OF_COPS - called 2" );
                            PRINTNL();
                        }
                        l_U1158 = iVar5;
                    }
                }
                else if (NOT l_U1084)
                {
                    l_U1120 = 0;
                }
                if (g_U30104)
                {
                    sub_28288();
                    g_U30104 = 0;
                }
                if (l_U1160 == 0)
                {
                    sub_28839();
                }
                sub_29178();
                sub_29847();
                sub_30519();
                sub_31536();
                sub_33257();
                if (g_U30158[l_U1149])
                {
                    if (IS_THREAD_ACTIVE( g_U30230[l_U1149] ))
                    {
                        for ( I = 0; I < l_U920; I++ )
                        {
                            sub_37526( ref l_U920[I] );
                        }
                        for ( I = 0; I < l_U139; I++ )
                        {
                            sub_37526( ref l_U139[I] );
                        }
                        l_U1107 = 1;
                    }
                    g_U30158[l_U1149] = 0;
                }
                else if (l_U1107)
                {
                    if (NOT (IS_THREAD_ACTIVE( g_U30230[l_U1149] )))
                    {
                        g_U30251 = {0.00000000, 0.00000000, 0.00000000};
                        g_U30254 = {0.00000000, 0.00000000, 0.00000000};
                    }
                }
                if (g_U30114[l_U1149])
                {
                    PRINTSTRING( "g_bForceReloadOfClubPeds = TRUE - removing peds" );
                    PRINTNL();
                    for ( I = 0; I < l_U920; I++ )
                    {
                        sub_37643( ref l_U920[I], 1 );
                    }
                    for ( I = 0; I < l_U139; I++ )
                    {
                        sub_37643( ref l_U139[I], 1 );
                    }
                    if ((IS_SCREEN_FADED_OUT()) || (sub_3885( sub_3600(), l_U1149, 0 )))
                    {
                        sub_26124( l_U1245, 50.00000000, 0 );
                    }
                    sub_38671();
                }
                if (NOT g_U30119)
                {
                    l_U1097 = 1;
                    l_U1088 = 1;
                    for ( l_U1162 = 0; l_U1162 < l_U920; l_U1162++ )
                    {
                        sub_38916( ref l_U920[l_U1162] );
                    }
                    l_U1088 = 0;
                    l_U1097 = 0;
                    for ( l_U1162 = 0; l_U1162 < l_U139; l_U1162++ )
                    {
                        sub_38916( ref l_U139[l_U1162] );
                    }
                    sub_66502();
                }
                else if (NOT g_U12379)
                {
                    g_U30119 = 0;
                }
                if (g_U30114[l_U1149])
                {
                    g_U30114[l_U1149] = 0;
                }
                if (g_U30097[l_U1149])
                {
                    if (NOT l_U1099)
                    {
                        PRINTSTRING( "CLUB SCRIPT - g_bReduceClubPeds = TRUE" );
                        PRINTNL();
                        switch (l_U1149)
                        {
                            case 0:
                            sub_67409( ref l_U920 );
                            sub_67409( ref l_U139 );
                            l_U1152 = 75;
                            break;
                            case 1:
                            for ( I = 0; I < l_U139; I++ )
                            {
                                if (l_U139[I]._fU4 == 8)
                                {
                                    l_U139[I]._fU0 = 0;
                                }
                            }
                            l_U1152 = 75;
                            break;
                            case 2:
                            l_U1152 = 75;
                            break;
                        }
                        l_U1099 = 1;
                    }
                }
                else if (l_U1099)
                {
                    l_U1152 = 85;
                    l_U1099 = 0;
                }
                if (g_U30109)
                {
                    for ( I = 0; I < l_U920; I++ )
                    {
                        if ((l_U920[I]._fU4 == 10) || (l_U920[I]._fU4 == 12))
                        {
                            l_U920[I]._fU16 = 0;
                        }
                    }
                    for ( I = 0; I < l_U139; I++ )
                    {
                        if ((l_U139[I]._fU4 == 10) || (l_U139[I]._fU4 == 12))
                        {
                            l_U139[I]._fU16 = 0;
                        }
                    }
                    g_U30109 = 0;
                }
                if (NOT (g_U30209 == nil))
                {
                    PRINTSTRING( "g_PedToDelete not NULL" );
                    PRINTNL();
                    for ( I = 0; I < l_U920; I++ )
                    {
                        if (l_U920[I]._fU24 == g_U30209)
                        {
                            sub_37643( ref l_U920[I], 1 );
                            if (NOT (l_U920[I]._fU4 == 14))
                            {
                                l_U920[I]._fU20 = 35536;
                            }
                            else
                            {
                                l_U920[I]._fU20 = 99999;
                                l_U1125 = 0;
                            }
                        }
                    }
                    for ( I = 0; I < l_U139; I++ )
                    {
                        if (l_U139[I]._fU24 == g_U30209)
                        {
                            sub_37643( ref l_U139[I], 1 );
                            if (NOT (l_U139[I]._fU4 == 14))
                            {
                                l_U139[I]._fU20 = 35536;
                            }
                            else
                            {
                                l_U139[I]._fU20 = 99999;
                            }
                        }
                    }
                    g_U30209 = nil;
                }
                if (g_U30110[l_U1149])
                {
                    PRINTSTRING( "g_bWaitingForClubScriptToStreamIn[iThisClub] - calling have_assets_for_Club_loaded..." );
                    PRINTNL();
                    if (l_U1108)
                    {
                        PRINTSTRING( "bClubIsUsingReducedMemory = TRUE" );
                        PRINTNL();
                    }
                    if (sub_68423( l_U1149, l_U1108 ))
                    {
                        if ((l_U1157 == 0) AND (l_U1127))
                        {
                            g_U30110[l_U1149] = 0;
                            l_U1127 = 0;
                        }
                    }
                    if (g_U30110[l_U1149])
                    {
                        if (NOT l_U1127)
                        {
                            for ( I = 0; I < l_U920; I++ )
                            {
                                l_U920[I]._fU20 = 99999;
                            }
                            for ( I = 0; I < l_U139; I++ )
                            {
                                l_U139[I]._fU20 = 99999;
                            }
                            l_U1127 = 1;
                        }
                    }
                }
                if (g_U30166)
                {
                    if (NOT (IS_THREAD_ACTIVE( g_U30234 )))
                    {
                        PRINTSTRING( "g_bHideMovingClubPeds - script that was hiding peds is no longer active" );
                        PRINTNL();
                        g_U30166 = 0;
                    }
                }
            }
            else if (g_U12379)
            {
                sub_70702();
            }
            else
            {
                g_U30120[l_U1149] = 0;
            }
        }
        else if ((IS_THREAD_ACTIVE( g_U30226[l_U1149] )) || (l_U1114))
        {
            sub_70702();
            if (g_U30110[l_U1149])
            {
                g_U30110[l_U1149] = 0;
            }
        }
        else
        {
            l_U1125 = 0;
            g_U30149[l_U1149] = 0;
            l_U1114 = 0;
        }
    }
    else
    {
        sub_823();
    }
    if (g_U30179)
    {
        if (NOT (IS_THREAD_ACTIVE( g_U30250 )))
        {
            PRINTSTRING( "g_bDontDoDanceWalk - script that was hiding peds is no longer active" );
            PRINTNL();
            g_U30179 = 0;
        }
    }
    if (l_U1112)
    {
        sub_71309();
        l_U1112 = 0;
    }
    sub_74772();
    if (g_U30197 == l_U1149)
    {
        if ((l_U1115) AND (l_U1179 > 1))
        {
            sub_78576( l_U1149 );
        }
    }
    if (NOT l_U1123)
    {
        if (l_U1149 == 2)
        {
            if (IS_PLAYER_CONTROL_ON( sub_2044() ))
            {
                GET_TIME_OF_DAY( ref iVar7, ref uVar8 );
                if ((iVar7 > 7) AND (iVar7 < 18))
                {
                    if (sub_3885( sub_3600(), l_U1149, 0 ))
                    {
                        if (sub_79290( "E2MF1_GAY", ref l_U1214, 3 ))
                        {
                            l_U1123 = 1;
                        }
                    }
                }
            }
        }
    }
    if (l_U1113)
    {
        if (NOT l_U1126)
        {
            for ( I = 0; I < l_U920; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U920[I]._fU24 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U920[I]._fU24 );
                }
            }
            for ( I = 0; I < l_U139; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U139[I]._fU24 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U139[I]._fU24 );
                }
            }
            l_U1126 = 1;
        }
    }
    else
    {
        l_U1126 = 0;
    }
    if (g_U30124[l_U1149])
    {
        sub_17292( l_U1149 );
        g_U30124[l_U1149] = 0;
    }
    return;
}

int sub_14729(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_14740( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_3885( uParam0, uParam1, 0 ))
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

vector sub_14740(unknown uParam0)
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

int sub_15432(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = false;
    if (IS_PLAYER_PLAYING( sub_2044() ))
    {
        if (sub_15466( sub_3600() ))
        {
            if (((sub_15706( sub_3600() )) == 5) || ((sub_15706( sub_3600() )) == 3))
            {
                bVar4 = true;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT bVar4)
        {
            switch (uParam1)
            {
                case 0:
                if ((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.02980000, 396.49390000, 13.40960000, 150.00000000, 150.00000000, 50.00000000, 0 )) || (NOT (IS_CHAR_INJURED( g_U30208 ))))
                {
                    return 1;
                }
                break;
                case 1:
                if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -483.56000000, 153.63000000, 7.55000000, 150.00000000, 150.00000000, 50.00000000, 0 ))
                {
                    return 1;
                }
                break;
                case 2:
                if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -438.87000000, 355.55000000, 11.93000000, 150.00000000, 150.00000000, 50.00000000, 0 ))
                {
                    return 1;
                }
                break;
            }
        }
        else
        {
            switch (uParam1)
            {
                case 0:
                if ((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.02980000, 396.49390000, 13.40960000, 150.00000000, 150.00000000, 150.00000000, 0 )) || (NOT (IS_CHAR_INJURED( g_U30208 ))))
                {
                    return 1;
                }
                break;
                case 1:
                if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -483.56000000, 153.63000000, 7.55000000, 150.00000000, 150.00000000, 150.00000000, 0 ))
                {
                    return 1;
                }
                break;
                case 2:
                if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -438.87000000, 355.55000000, 11.93000000, 150.00000000, 150.00000000, 150.00000000, 0 ))
                {
                    return 1;
                }
                break;
            }
        }
    }
    PRINTSTRING( "CLUB NO LONGER WITHIN ACTIVATION RANGE" );
    PRINTNL();
    return 0;
}

int sub_15466(unknown uParam0)
{
    int iVar3;

    if (sub_15475())
    {
        iVar3 = sub_15541( uParam0 );
        if (iVar3 < 0)
        {
            return 0;
        }
        else if (g_U2692[iVar3]._fU60)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

int sub_15475()
{
    if ((HAS_MODEL_LOADED( 1490460832 )) AND (HAVE_ANIMS_LOADED( "PARACHUTE" )))
    {
        return 1;
    }
    return 0;
}

int sub_15541(int iParam0)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < g_U2692; Result++ )
    {
        if (g_U2692[Result]._fU0 == iParam0)
        {
            if (g_U2692[Result]._fU56)
            {
                return Result;
            }
        }
    }
    return -1;
}

int sub_15706(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_15541( uParam0 );
    if (iVar3 >= 0)
    {
        return g_U2692[iVar3]._fU4;
        break;
    }
    SCRIPT_ASSERT( "GET_PARACHUTE_PED_STATE: Ped does not have a parachute equipped." );
    return 0;
}

void sub_16412()
{
    if (NOT l_U1083)
    {
        PRINTSTRING( "INITIALISE_CLUB() - start" );
        PRINTNL();
        sub_16474();
        PRINTSTRING( "INITIALISE_CLUB() - 1" );
        PRINTNL();
        COPY_SHARED_CHAR_DECISION_MAKER( 65539, ref g_U30182 );
        COPY_SHARED_CHAR_DECISION_MAKER( 65539, ref g_U30183 );
        COPY_SHARED_COMBAT_DECISION_MAKER( 65560, ref g_U30184 );
        COPY_SHARED_COMBAT_DECISION_MAKER( 65568, ref g_U30185 );
        sub_5661();
        if (NOT (sub_14729( sub_3600(), l_U1149, 20.00000000 )))
        {
            sub_17098( l_U1149, 1 );
            l_U1108 = 1;
        }
        if (l_U1149 == 1)
        {
            l_U1220[0]._fU0 = {-473.94560000, 159.98590000, 9.67320000};
            l_U1220[1]._fU0 = {-473.93990000, 162.85640000, 9.67420000};
            l_U1220[2]._fU0 = {-473.94610000, 165.78630000, 9.67380000};
            l_U1220[3]._fU0 = {-468.53060000, 158.77260000, 9.67420000};
            l_U1220[4]._fU0 = {-468.53060000, 160.82300000, 9.67420000};
            l_U1220[5]._fU0 = {-469.03140000, 164.52770000, 9.66570000};
        }
        if (l_U1149 == 0)
        {
            g_U30189 = 0;
        }
        sub_1451( l_U1149 );
        if (l_U1149 == 1)
        {
            g_U30198 = sub_18510();
            if (NOT (g_U30198 == -1))
            {
                g_U29971[g_U30198]._fU0 = 1;
                g_U29971[g_U30198]._fU4 = 14;
                g_U29971[g_U30198]._fU8 = 1;
                g_U29971[g_U30198]._fU16 = {-473.14230000, 145.59760000, 8.95000000};
                g_U29971[g_U30198]._fU28 = 324.01530000;
                g_U29971[g_U30198]._fU40 = 2;
                g_U29971[g_U30198]._fU36 = 0;
                g_U29971[g_U30198]._fU32 = -882058861;
            }
            g_U30199 = sub_18510();
            if (NOT (g_U30199 == -1))
            {
                g_U29971[g_U30199]._fU0 = 1;
                g_U29971[g_U30199]._fU8 = 1;
                g_U29971[g_U30199]._fU36 = 9;
                g_U29971[g_U30199]._fU32 = sub_19321( 9 );
                g_U29971[g_U30199]._fU4 = 9;
                g_U29971[g_U30199]._fU16 = {-467.43100000, 152.37370000, 8.86880000};
                g_U29971[g_U30199]._fU28 = 270.00000000;
            }
            g_U30202 = sub_18510();
            if (NOT (g_U30202 == -1))
            {
                g_U29971[g_U30202]._fU0 = 1;
                g_U29971[g_U30202]._fU8 = 1;
                g_U29971[g_U30202]._fU36 = 7;
                g_U29971[g_U30202]._fU32 = sub_19321( 7 );
                g_U29971[g_U30202]._fU4 = 5;
                g_U29971[g_U30202]._fU16 = {-481.30330000, 158.76740000, 6.68390000};
                g_U29971[g_U30202]._fU28 = 157.70500000;
                g_U29971[g_U30202]._fU40 = 17;
            }
            sub_1451( 1 );
        }
        if (l_U1149 == 2)
        {
            g_U30201 = sub_18510();
            if (NOT (g_U30201 == -1))
            {
                g_U29971[g_U30201]._fU0 = 1;
                g_U29971[g_U30201]._fU4 = 5;
                g_U29971[g_U30201]._fU8 = 2;
                g_U29971[g_U30201]._fU16 = {-434.46780000, 354.59100000, 10.71170000};
                g_U29971[g_U30201]._fU28 = 180.00000000;
                g_U29971[g_U30201]._fU40 = 44;
                g_U29971[g_U30201]._fU36 = 0;
                g_U29971[g_U30201]._fU32 = 284474691;
            }
            g_U30200 = sub_18510();
            if (NOT (g_U30200 == -1))
            {
                g_U29971[g_U30200]._fU0 = 1;
                g_U29971[g_U30200]._fU4 = 9;
                g_U29971[g_U30200]._fU8 = 2;
                g_U29971[g_U30200]._fU16 = {-442.04090000, 358.27740000, 10.04620000};
                g_U29971[g_U30200]._fU28 = 106.88260000;
                g_U29971[g_U30200]._fU40 = 0;
                g_U29971[g_U30200]._fU36 = 10;
                g_U29971[g_U30200]._fU32 = sub_19321( 10 );
            }
            g_U30203 = sub_18510();
            if (NOT (g_U30203 == -1))
            {
                g_U29971[g_U30203]._fU0 = 1;
                g_U29971[g_U30203]._fU4 = 10;
                g_U29971[g_U30203]._fU8 = 2;
                g_U29971[g_U30203]._fU16 = {-426.79110000, 351.86660000, 10.90920000};
                g_U29971[g_U30203]._fU28 = 90.00000000;
                g_U29971[g_U30203]._fU40 = 59;
                g_U29971[g_U30203]._fU36 = 2;
            }
            sub_1451( 2 );
        }
        sub_20785();
        l_U1083 = 1;
        l_U1121 = 1;
    }
    else if (l_U1121)
    {
        l_U1121 = 0;
    }
    return;
}

void sub_16474()
{
    l_U981[0]._fU0 = "null";
    l_U981[1]._fU0 = "BOUNCER_GREETING";
    l_U981[2]._fU0 = "FEMALE_CHAIR_ALONE";
    l_U981[3]._fU0 = "FEMALE_IDLE";
    l_U981[4]._fU0 = "FEMALE_PUKE";
    l_U981[5]._fU0 = "FEMALE_SHOCKED";
    l_U981[6]._fU0 = "FEMALE_STAND_CHAT";
    l_U981[7]._fU0 = "MALE_STAND_CHAT";
    l_U981[8]._fU0 = "GIRL_A_ARGUE";
    l_U981[9]._fU0 = "GIRL_B_ARGUE";
    l_U981[10]._fU0 = "MALE_PUKE";
    l_U981[11]._fU0 = "M_DRUNK_A";
    l_U981[12]._fU0 = "M_DRUNK_B";
    l_U981[13]._fU0 = "F_STAND_B";
    l_U981[14]._fU0 = "F_STAND_D";
    l_U981[15]._fU0 = "Scenario_SmokingOutsideOffice";
    l_U981[16]._fU0 = "Scenario_Bouncer";
    l_U981[17]._fU0 = "HangOut_Street";
    return;
}

void sub_17098(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        PRINTSTRING( "SET_CLUB_USES_REDUCED_MEMORY - called TRUE - for " );
        switch (uParam0)
        {
            case 2:
            PRINTSTRING( "HERCULES" );
            break;
            case 0:
            PRINTSTRING( "BAHAMA_MAMAS" );
            break;
            case 1:
            PRINTSTRING( "MAISONETTE 9" );
            break;
        }
        PRINTNL();
        sub_17292( uParam0 );
    }
    else
    {
        PRINTSTRING( "SET_CLUB_USES_REDUCED_MEMORY - called FALSE - for " );
        switch (uParam0)
        {
            case 2:
            PRINTSTRING( "HERCULES" );
            break;
            case 0:
            PRINTSTRING( "BAHAMA_MAMAS" );
            break;
            case 1:
            PRINTSTRING( "MAISONETTE 9" );
            break;
        }
        PRINTNL();
    }
    g_U30162[uParam0] = bParam1;
    return;
}

void sub_17292(unknown uParam0)
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
        sub_17642( g_U30218 );
        sub_17642( g_U30219 );
        sub_17642( g_U30220 );
        sub_17642( g_U30221 );
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
        sub_17642( g_U30222 );
        sub_17642( g_U30223 );
        sub_17642( g_U30224 );
        sub_17642( g_U30225 );
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

void sub_17642(int iParam0)
{
    if (NOT (iParam0 == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( iParam0 );
    }
    return;
}

int sub_18510()
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
                sub_849( Result );
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

int sub_19321(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return 0;
        break;
        case 1:
        return sub_19450( l_U1149, 1 );
        break;
        case 3:
        return l_U1204;
        break;
        case 4:
        return l_U1205;
        break;
        case 2:
        return sub_19450( l_U1149, 0 );
        break;
        case 5:
        return l_U1201;
        break;
        case 6:
        return l_U1202;
        break;
        case 7:
        return l_U1206;
        break;
        case 8:
        return l_U1200;
        break;
        case 9:
        return -1446884113;
        break;
        case 10:
        return 1662473323;
        break;
        case 11:
        return l_U1207;
        break;
    }
    SCRIPT_ASSERT( "GET_MODEL_NAME - unrecognised input" );
    return 0;
}

int sub_19450(unknown uParam0, boolean bParam1)
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

void sub_20785()
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
    unknown uVar18;
    unknown uVar19;

    return;
}

void sub_21263()
{
    float fVar2;

    GET_FRAME_TIME( ref fVar2 );
    fVar2 *= 1000.00000000;
    l_U1144 += fVar2;
    if (NOT (IS_CONTROL_PRESSED( 2, 1 )))
    {
        l_U1144 = 0.00000000;
    }
    if (IS_PLAYER_PLAYING( sub_2044() ))
    {
        if ((NOT g_U30153) AND (NOT g_U30179))
        {
            if (NOT l_U1104)
            {
                if ((NOT g_U30093[l_U1149]) AND (NOT l_U1106))
                {
                    if (sub_3913( sub_3600(), l_U1149 ))
                    {
                        SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3600(), 1.00000000 );
                        l_U1104 = 1;
                    }
                }
            }
            else if ((NOT (sub_3913( sub_3600(), l_U1149 ))) || (g_U30093[l_U1149]))
            {
                SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3600(), 3.00000000 );
                l_U1104 = 0;
            }
            else if (l_U1144 > 500.00000000)
            {
                SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3600(), l_U1145 );
            }
            else
            {
                SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3600(), 1.00000000 );
            }
            if (l_U1106)
            {
                SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3600(), 3.00000000 );
                l_U1104 = 0;
            }
        }
        else if (l_U1104)
        {
            SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3600(), 3.00000000 );
            l_U1104 = 0;
        }
    }
    if (IS_PLAYER_PLAYING( sub_2044() ))
    {
        if ((l_U1104) || (l_U1106))
        {
            ;
        }
        else if (NOT g_U30153)
        {
            ;
        }
    }
    return;
}

void sub_21692()
{
    string sVar2;
    boolean bVar3;

    switch (l_U1149)
    {
        case 0:
        case 1:
        case 2:
        sVar2 = "MOVE_PLAYER_CLUB";
        break;
    }
    bVar3 = false;
    switch (l_U1149)
    {
        case 0:
        if (l_U1178 == 3)
        {
            bVar3 = true;
        }
        break;
        case 2:
        if (l_U1178 == 0)
        {
            bVar3 = true;
        }
        break;
        case 1:
        if ((l_U1178 == 5) || (l_U1178 == 7))
        {
            bVar3 = true;
        }
        break;
    }
    if (bVar3)
    {
        if (l_U1144 > 500.00000000)
        {
            bVar3 = false;
        }
    }
    if (IS_PLAYER_PLAYING( sub_2044() ))
    {
        if ((NOT g_U30153) AND (NOT g_U30179))
        {
            if (NOT l_U1106)
            {
                if ((NOT g_U30093[l_U1149]) AND (NOT g_U30153))
                {
                    if (sub_3913( sub_3600(), l_U1149 ))
                    {
                        if (NOT (sub_21992( sub_3600() )))
                        {
                            if (bVar3)
                            {
                                if (sub_22153( sVar2 ))
                                {
                                    BLOCK_CHAR_AMBIENT_ANIMS( sub_3600(), 1 );
                                    SET_ANIM_GROUP_FOR_CHAR( sub_3600(), sVar2 );
                                    l_U1106 = 1;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_3600(), 1 );
                SET_DISABLE_PLAYER_SHOVE_ANIMATION( sub_3600(), 1 );
                if (((((NOT (sub_3913( sub_3600(), l_U1149 ))) || (g_U30093[l_U1149])) || (g_U30153)) || (NOT bVar3)) || (sub_21992( sub_3600() )))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( sub_3600(), 0 );
                    SET_DISABLE_PLAYER_SHOVE_ANIMATION( sub_3600(), 0 );
                    SET_ANIM_GROUP_FOR_CHAR( sub_3600(), "MOVE_PLAYER" );
                    REMOVE_ANIMS( sVar2 );
                    l_U1106 = 0;
                }
            }
        }
        else if (l_U1106)
        {
            BLOCK_CHAR_AMBIENT_ANIMS( sub_3600(), 0 );
            SET_DISABLE_PLAYER_SHOVE_ANIMATION( sub_3600(), 0 );
            SET_ANIM_GROUP_FOR_CHAR( sub_3600(), "MOVE_PLAYER" );
            REMOVE_ANIMS( sVar2 );
            l_U1106 = 0;
        }
    }
    return;
}

int sub_21992(int iParam0)
{
    if (iParam0 == nil)
    {
        return 0;
    }
    if ((sub_22017( iParam0 )) == -1)
    {
        return 0;
    }
    return 1;
}

int sub_22017(int iParam0)
{
    int Result;

    if (iParam0 == nil)
    {
        return -1;
    }
    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (NOT (g_U9105[Result]._fU0 == -1))
        {
            if (iParam0 == g_U9105[Result]._fU4)
            {
                return Result;
            }
        }
    }
    return -1;
}

int sub_22153(unknown uParam0)
{
    if (NOT (sub_22164( uParam0 )))
    {
        REQUEST_ANIMS( uParam0 );
        if (HAVE_ANIMS_LOADED( uParam0 ))
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_22164(unknown uParam0)
{
    if (IS_STRING_NULL( uParam0 ))
    {
        return 1;
    }
    else if (COMPARE_STRING( uParam0, "" ))
    {
        return 1;
    }
    return 0;
}

void sub_22558()
{
    int iVar2;
    vector vVar3;
    boolean bVar6;
    int iVar7;
    float fVar8;
    unknown uVar9;

    switch (l_U1149)
    {
        case 0:
        iVar2 = 725112888;
        vVar3 = {-398.00000000, 398.00000000, 15.00000000};
        break;
        case 2:
        iVar2 = 1316667213;
        vVar3 = {-440.00000000, 358.00000000, 12.00000000};
        break;
        case 1:
        iVar2 = -175426899;
        vVar3 = {-468.00000000, 153.00000000, 10.00000000};
        break;
    }
    if (l_U1149 == 1)
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -397503281, -474.00000000, 162.00000000, 10.00000000, 1, 0.00000000 );
    }
    if (NOT g_U30167)
    {
        if (((HAS_CUTSCENE_FINISHED()) AND (IS_PLAYER_CONTROL_ON( sub_2044() ))) || (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0) AND (l_U1149 == 0)))
        {
            if (IS_PLAYER_PLAYING( sub_2044() ))
            {
                if (g_U30153)
                {
                    sub_22837( l_U1149, 0 );
                }
                else if ((((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0) AND (l_U1149 == 0)) || (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "E2EndCredits" )) > 0) AND (l_U1149 == 0)))
                {
                    if ((IS_WANTED_LEVEL_GREATER( sub_2044(), 0 )) AND (NOT (sub_3885( sub_3600(), l_U1149, 0 ))))
                    {
                        sub_22837( l_U1149, 2 );
                    }
                    else
                    {
                        sub_22837( l_U1149, 1 );
                    }
                }
                else if (((IS_WANTED_LEVEL_GREATER( sub_2044(), 0 )) || (g_U30093[l_U1149])) || (g_U30149[l_U1149]))
                {
                    sub_22837( l_U1149, 2 );
                }
                else if (l_U1149 == 0)
                {
                    sub_22837( l_U1149, 2 );
                }
                else
                {
                    sub_22837( l_U1149, 0 );
                };;;;
            }
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( vVar3.x, vVar3.y, vVar3.z, 1.50000000, iVar2 ))
            {
                switch (g_U30192[l_U1149])
                {
                    case 0:
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, 0, fVar8 );
                    l_U1100 = 0;
                    break;
                    case 1:
                    l_U1100 = 0;
                    GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, ref bVar6, ref fVar8 );
                    if (fVar8 > -1.00000000)
                    {
                        GET_FRAME_TIME( ref uVar9 );
                        fVar8 += uVar9 * -1.00000000;
                    }
                    else
                    {
                        fVar8 = -1.00000000;
                    }
                    if ((IS_SCREEN_FADED_OUT()) || (NOT (sub_23292( vVar3, 2.00000000 ))))
                    {
                        fVar8 = -1.00000000;
                    }
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, 1, fVar8 );
                    break;
                    case 2:
                    iVar7 = 0;
                    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0)
                    {
                        if (NOT (sub_3885( sub_3600(), l_U1149, 0 )))
                        {
                            iVar7 = 1;
                        }
                    }
                    else if (NOT (sub_3885( sub_3600(), l_U1149, 1 )))
                    {
                        iVar7 = 1;
                    }
                    if (sub_23467())
                    {
                        iVar7 = 0;
                    }
                    if ((l_U1100) || (iVar7))
                    {
                        GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, ref bVar6, ref fVar8 );
                        if (fVar8 > 0.00000000)
                        {
                            if (fVar8 < 0.05000000)
                            {
                                fVar8 = 0.00000000;
                            }
                            else
                            {
                                GET_FRAME_TIME( ref uVar9 );
                                fVar8 += uVar9 * -1.00000000;
                            }
                        }
                        else if (fVar8 > -0.05000000)
                        {
                            fVar8 = 0.00000000;
                        }
                        else
                        {
                            GET_FRAME_TIME( ref uVar9 );
                            fVar8 += uVar9;
                        }
                        if ((IS_SCREEN_FADED_OUT()) || (NOT (sub_23292( vVar3, 2.00000000 ))))
                        {
                            fVar8 = 0.00000000;
                        }
                        if (fVar8 == 0.00000000)
                        {
                            l_U1100 = 1;
                        }
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, 1, fVar8 );
                    }
                    else
                    {
                        GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, ref bVar6, ref fVar8 );
                        if (bVar6)
                        {
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, 0, fVar8 );
                        }
                    }
                    break;
                }
            }
        }
    }
    else if (NOT (IS_THREAD_ACTIVE( g_U30235 )))
    {
        g_U30167 = 0;
    }
    if (l_U1100)
    {
        ;
    }
    return;
}

void sub_22837(unknown uParam0, unknown uParam1)
{
    g_U30192[uParam0] = uParam1;
    return;
}

int sub_23292(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 ))
    {
        return 1;
    }
    return 0;
}

int sub_23467()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (DOES_GROUP_EXIST( sub_23476() ))
    {
        for ( I = 0; I < 7; I++ )
        {
            GET_GROUP_MEMBER( sub_23476(), I, ref uVar5 );
            if (NOT (IS_CHAR_INJURED( uVar5 )))
            {
                if (sub_14729( uVar5, l_U1149, 1094713344 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_23476()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_23938()
{
    float fVar2;

    GET_FRAME_TIME( ref fVar2 );
    fVar2 *= 1000.00000000;
    l_U1170 += ROUND( fVar2 );
    l_U1171 += ROUND( fVar2 );
    l_U1172 += ROUND( fVar2 );
    l_U1173 += ROUND( fVar2 );
    l_U1176 += ROUND( fVar2 );
    l_U1174 += ROUND( fVar2 );
    l_U1177 += ROUND( fVar2 );
    return;
}

void sub_24113()
{
    if (NOT l_U1103)
    {
        if (IS_PLAYER_PLAYING( sub_2044() ))
        {
            if (g_U30149[l_U1149])
            {
                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3600() )))
                {
                    if (((NOT sub_24185()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())) AND (NOT g_U12379))
                    {
                        switch (l_U1149)
                        {
                            case 0:
                            if (IS_CHAR_IN_AREA_3D( sub_3600(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 ))
                            {
                                PRINT_HELP( "CLUB_CLOSED" );
                                l_U1103 = 1;
                            }
                            break;
                            case 1:
                            if (IS_CHAR_IN_AREA_3D( sub_3600(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 ))
                            {
                                PRINT_HELP( "CLUB_CLOSED" );
                                l_U1103 = 1;
                            }
                            break;
                            case 2:
                            if (IS_CHAR_IN_AREA_3D( sub_3600(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 ))
                            {
                                PRINT_HELP( "CLUB_CLOSED" );
                                l_U1103 = 1;
                            }
                            break;
                        }
                    }
                }
            }
        }
    }
    else
    {
        switch (l_U1149)
        {
            case 0:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3600(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 )))
            {
                l_U1103 = 0;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3600(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 )))
            {
                l_U1103 = 0;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3600(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 )))
            {
                l_U1103 = 0;
            }
            break;
        }
        if (NOT l_U1103)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLUB_CLOSED" ))
            {
                CLEAR_HELP();
            }
        }
    }
    return;
}

int sub_24185()
{
    if (((IS_MESSAGE_BEING_DISPLAYED()) || (sub_24201())) || (sub_24252()))
    {
        return 1;
    }
    return 0;
}

int sub_24201()
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        return 1;
    }
    return 0;
}

int sub_24252()
{
    if ((g_U95._fU0 == 1007) || (g_U95._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_24963(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            if (NOT (sub_25030( sub_3600(), l_U1149 )))
            {
                if (sub_3913( uParam0, uParam1 ))
                {
                    if (((((IS_CHAR_IN_AREA_3D( uParam0, -398.50490000, 401.49280000, 3.67440000, -378.30490000, 440.81780000, 8.50000000, 0 )) || (IS_CHAR_IN_AREA_3D( uParam0, -384.02620000, 431.87570000, 4.64940000, -368.82620000, 442.87570000, 8.74940000, 0 ))) || (IS_CHAR_IN_AREA_3D( uParam0, -379.40620000, 417.46790000, 3.72430000, -377.38120000, 421.04290000, 9.87430000, 0 ))) || (IS_CHAR_IN_AREA_3D( uParam0, -380.04610000, 428.22680000, 4.52430000, -376.77110000, 432.22680000, 9.84930000, 0 ))) || (IS_CHAR_IN_AREA_3D( uParam0, -398.11870000, 396.36870000, 4.70370000, -395.56870000, 402.74370000, 12.52870000, 0 )))
                    {
                        return 1;
                    }
                }
                if (IS_CHAR_IN_AREA_3D( uParam0, -397.47520000, 394.72470000, 4.22000000, -390.12520000, 401.97470000, 10.47000000, 0 ))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (sub_3913( uParam0, uParam1 ))
            {
                if (NOT (sub_25030( sub_3600(), l_U1149 )))
                {
                    if (IS_CHAR_IN_AREA_3D( uParam0, -490.11110000, 138.91470000, 6.40490000, -468.06110000, 166.93970000, 14.45490000, 0 ))
                    {
                        return 1;
                    }
                }
            }
            break;
            case 2:
            if (NOT (sub_25030( sub_3600(), l_U1149 )))
            {
                if (sub_3913( uParam0, uParam1 ))
                {
                    if (IS_CHAR_IN_AREA_3D( uParam0, -439.82380000, 347.38690000, 9.49160000, -424.74880000, 355.93690000, 14.94170000, 0 ))
                    {
                        return 1;
                    }
                }
            }
            break;
        }
    }
    if (sub_25748())
    {
        return 1;
    }
    return 0;
}

int sub_25030(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            if (IS_CHAR_IN_AREA_3D( uParam0, -400.75690000, 397.53590000, 13.41520000, -396.75690000, 401.28590000, 16.41520000, 0 ))
            {
                return 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_AREA_3D( sub_3600(), -468.92590000, 152.57140000, 7.86410000, -467.90090000, 154.02140000, 11.86410000, 0 ))
            {
                return 1;
            }
            break;
            case 2:
            if (IS_CHAR_IN_AREA_3D( uParam0, -440.23210000, 355.07540000, 10.71670000, -436.60710000, 359.22540000, 13.71670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

int sub_25748()
{
    return 0;
}

void sub_25824()
{
    unknown uVar2;

    PRINTSTRING( "SET_INTERIOR_DENSITIES() - called by " );
    switch (l_U1149)
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
    PRINTNL();
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    SET_REDUCE_VEHICLE_MODEL_BUDGET( 1 );
    SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    SWITCH_RANDOM_TRAINS( 0 );
    g_U43642 = 1;
    g_U10935 = 1;
    SET_SCENARIO_PED_DENSITY_MULTIPLIER( 0.00000000, 0.00000000 );
    CLEAR_AREA_OF_CHARS( l_U1245._fU0, l_U1245._fU4, l_U1245._fU8, 1000.00000000 );
    sub_26124( l_U1245, 1000.00000000, 0 );
    CLEAR_AREA_OF_COPS( l_U1245._fU0, l_U1245._fU4, l_U1245._fU8, 1000.00000000 );
    if (IS_PLAYER_PLAYING( sub_2044() ))
    {
        SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( sub_2044(), 0 );
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_2044(), 1 );
    }
    GET_INTERIOR_AT_COORDS( l_U1245._fU0, l_U1245._fU4, l_U1245._fU8, ref uVar2 );
    ACTIVATE_INTERIOR( uVar2, 1 );
    l_U1084 = 1;
    if (NOT l_U1086)
    {
        g_U30102 = 1;
        g_U30103 = 0;
    }
    else
    {
        g_U30102 = 0;
        g_U30103 = 0;
    }
    if (l_U1149 == 1)
    {
        l_U1186 = FIND_STATIC_EMITTER_INDEX( "EP2_MAISONETTE9_TOILET_AMBIENCE" );
    }
    PRINTSTRING( "SET_INTERIOR_DENSITIES - SET_INTERIOR_DENSITIES() called" );
    PRINTNL();
    return;
}

void sub_26124(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar7 );
    if (DOES_VEHICLE_EXIST( uVar7 ))
    {
        if (NOT (IS_CAR_DEAD( uVar7 )))
        {
            GET_CAR_COORDINATES( uVar7, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            GET_CAR_HEADING( uVar7, ref uVar11 );
            sub_26216( uParam0, uParam3, uVar8, uVar11, uParam4 );
        }
    }
    return;
}

void sub_26216(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8)
{
    unknown uVar11;
    boolean bVar12;

    bVar12 = false;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar11 );
    if (DOES_VEHICLE_EXIST( uVar11 ))
    {
        if (NOT (IS_CAR_DEAD( uVar11 )))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3600(), uVar11 )))
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
            }
        }
    }
    if (bVar12)
    {
        if (DOES_VEHICLE_EXIST( uVar11 ))
        {
            sub_26531( uVar11 );
        }
    }
    return;
}

void sub_26531(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_27098(int iParam0, unknown uParam1)
{
    int Result;

    for ( Result = 0; Result < (uParam1^); Result++ )
    {
        if (NOT (iParam0 == nil))
        {
            if ((uParam1^)[Result]._fU12 == iParam0)
            {
                return Result;
            }
        }
    }
    return -1;
}

void sub_28288()
{
    float fVar2;

    fVar2 = 99999.90000000;
    if (NOT (g_U30206 == nil))
    {
        l_U1192 = g_U30206;
        g_U30206 = nil;
    }
    if (NOT (IS_CHAR_INJURED( g_U30208 )))
    {
        g_U30206 = g_U30208;
        fVar2 = 0.00000000;
        PRINTSTRING( "GET_NEAREST_DANCER() - mission dance ped" );
        PRINTNL();
    }
    sub_28432( ref l_U920, ref fVar2 );
    sub_28432( ref l_U139, ref fVar2 );
    if (g_U30206 == nil)
    {
        PRINTSTRING( "GET_NEAREST_DANCER() - none found" );
        PRINTNL();
        g_U30109 = 1;
    }
    return;
}

void sub_28432(unknown uParam0, unknown uParam1)
{
    int I;
    float fVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    if (IS_PLAYER_PLAYING( sub_2044() ))
    {
        GET_CHAR_COORDINATES( sub_3600(), ref vVar6.x, ref vVar6.y, ref vVar6.z );
    }
    for ( I = 0; I < (uParam0^); I++ )
    {
        if ((uParam0^)[I]._fU0)
        {
            if (((uParam0^)[I]._fU4 == 10) || ((uParam0^)[I]._fU4 == 12))
            {
                if (sub_28546( (uParam0^)[I]._fU52 ))
                {
                    if ((uParam0^)[I]._fU16 == 0)
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU24 )))
                        {
                            GET_CHAR_COORDINATES( (uParam0^)[I]._fU24, ref vVar9.x, ref vVar9.y, ref vVar9.z );
                            uVar12 = {vVar9 - vVar6};
                            fVar5 = VMAG( uVar12 );
                            if (fVar5 < (uParam1^))
                            {
                                g_U30206 = l_U139[I]._fU24;
                                (uParam1^) = fVar5;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_28546(int iParam0)
{
    if (((iParam0 == 1) || (iParam0 == 3)) || (iParam0 == 4))
    {
        return 1;
    }
    return 0;
}

void sub_28839()
{
    int I;
    vector vVar3;
    vector vVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;
    float fVar14;

    fVar12 = 1E7;
    fVar13 = 999999.90000000;
    l_U1190 = nil;
    l_U1191 = nil;
    if (IS_PLAYER_PLAYING( sub_2044() ))
    {
        GET_CHAR_COORDINATES( sub_3600(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        if (sub_3885( sub_3600(), l_U1149, 0 ))
        {
            for ( I = 0; I < l_U139; I++ )
            {
                if (l_U139[I]._fU4 == 8)
                {
                    if (NOT (IS_CHAR_INJURED( l_U139[I]._fU24 )))
                    {
                        GET_CHAR_COORDINATES( l_U139[I]._fU24, ref vVar6.x, ref vVar6.y, ref vVar6.z );
                        uVar9 = {vVar6 - vVar3};
                        if ((ABSF( uVar9._fU8 )) < 4.00000000)
                        {
                            fVar14 = VMAG( uVar9 );
                            if (fVar14 < fVar12)
                            {
                                fVar13 = fVar12;
                                l_U1191 = l_U1190;
                                l_U1190 = l_U139[I]._fU24;
                                fVar12 = fVar14;
                            }
                            else if (fVar14 < fVar13)
                            {
                                fVar13 = fVar14;
                                l_U1191 = l_U139[I]._fU24;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_29178()
{
    if (NOT l_U1102)
    {
        if (IS_PLAYER_PLAYING( sub_2044() ))
        {
            if ((g_U30093[l_U1149]) AND (NOT (g_U30192[l_U1149] == 1)))
            {
                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3600() )))
                {
                    if ((NOT sub_24185()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                    {
                        switch (l_U1149)
                        {
                            case 0:
                            if (IS_CHAR_IN_AREA_3D( sub_3600(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 ))
                            {
                                PRINT_HELP( "CLUB_KICKED" );
                                l_U1102 = 1;
                            }
                            break;
                            case 1:
                            if (IS_CHAR_IN_AREA_3D( sub_3600(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 ))
                            {
                                PRINT_HELP( "CLUB_KICKED" );
                                l_U1102 = 1;
                            }
                            break;
                            case 2:
                            if (IS_CHAR_IN_AREA_3D( sub_3600(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 ))
                            {
                                PRINT_HELP( "CLUB_KICKED" );
                                l_U1102 = 1;
                            }
                            break;
                        }
                    }
                }
            }
        }
    }
    else
    {
        switch (l_U1149)
        {
            case 0:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3600(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 )))
            {
                l_U1102 = 0;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3600(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 )))
            {
                l_U1102 = 0;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3600(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 )))
            {
                l_U1102 = 0;
            }
            break;
        }
        if (NOT l_U1102)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLUB_KICKED" ))
            {
                CLEAR_HELP();
            }
        }
    }
    return;
}

void sub_29847()
{
    if (NOT l_U1101)
    {
        if (IS_PLAYER_PLAYING( sub_2044() ))
        {
            if (NOT g_U30093[l_U1149])
            {
                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3600() )))
                {
                    if (IS_WANTED_LEVEL_GREATER( sub_2044(), 0 ))
                    {
                        if ((NOT sub_24185()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                        {
                            switch (l_U1149)
                            {
                                case 0:
                                if (IS_CHAR_IN_AREA_3D( sub_3600(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 ))
                                {
                                    PRINT_HELP( "CLUB_WANTED" );
                                    l_U1101 = 1;
                                }
                                break;
                                case 1:
                                if (IS_CHAR_IN_AREA_3D( sub_3600(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 ))
                                {
                                    PRINT_HELP( "CLUB_WANTED" );
                                    l_U1101 = 1;
                                }
                                break;
                                case 2:
                                if (IS_CHAR_IN_AREA_3D( sub_3600(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 ))
                                {
                                    PRINT_HELP( "CLUB_WANTED" );
                                    l_U1101 = 1;
                                }
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        switch (l_U1149)
        {
            case 0:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3600(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 )))
            {
                l_U1101 = 0;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3600(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 )))
            {
                l_U1101 = 0;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3600(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 )))
            {
                l_U1101 = 0;
            }
            break;
        }
        if (NOT l_U1101)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLUB_WANTED" ))
            {
                CLEAR_HELP();
            }
        }
    }
    return;
}

void sub_30519()
{
    boolean bVar2;

    if ((IS_PLAYER_PLAYING( sub_2044() )) AND (NOT g_U30093[l_U1149]))
    {
        if (((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3600() ))) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_2044(), 0 )))) AND (NOT g_U43025))
        {
            if (NOT l_U1098)
            {
                if (NOT l_U1085)
                {
                    if (NOT (sub_3913( sub_3600(), l_U1149 )))
                    {
                        if (sub_30649( sub_3600() ))
                        {
                            switch (l_U1149)
                            {
                                case 0:
                                if (IS_CHAR_IN_AREA_3D( sub_3600(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 ))
                                {
                                    bVar2 = true;
                                }
                                break;
                                case 1:
                                if (IS_CHAR_IN_AREA_3D( sub_3600(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 ))
                                {
                                    bVar2 = true;
                                }
                                break;
                                case 2:
                                if (IS_CHAR_IN_AREA_3D( sub_3600(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 ))
                                {
                                    bVar2 = true;
                                }
                                break;
                            }
                        }
                    }
                    if (bVar2)
                    {
                        if (NOT sub_31101())
                        {
                            TASK_SWAP_WEAPON( sub_3600(), 0 );
                            l_U1154++;
                            PRINT_HELP( "STR_WEA" );
                            l_U1085 = 1;
                            l_U1098 = 1;
                        }
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( sub_3600(), 127, ref l_U1212 );
                    if (l_U1212 == 7)
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_3600(), 0, 0 );
                        l_U1085 = 0;
                    }
                }
            }
            else
            {
                switch (l_U1149)
                {
                    case 0:
                    if (NOT (IS_CHAR_IN_AREA_3D( sub_3600(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 )))
                    {
                        l_U1098 = 0;
                    }
                    break;
                    case 1:
                    if (NOT (IS_CHAR_IN_AREA_3D( sub_3600(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 )))
                    {
                        l_U1098 = 0;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_IN_AREA_3D( sub_3600(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 )))
                    {
                        l_U1098 = 0;
                    }
                    break;
                }
            }
        }
    }
    return;
}

int sub_30649(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    vVar3 = {sub_14740( l_U1149 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam0, 0.00000000, 1.00000000, 0.00000000, ref vVar9.x, ref vVar9.y, ref vVar9.z );
        uVar12 = {vVar3 - vVar6};
        uVar12._fU8 = 0.00000000;
        uVar15 = {vVar9 - vVar6};
        uVar15._fU8 = 0.00000000;
        if (((sub_30791( uVar12, uVar15 )) > 0.00000000) AND ((VMAG2( uVar12 )) > 0.50000000))
        {
            return 1;
        }
    }
    return 0;
}

float sub_30791(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return ((uParam0._fU0 * uParam3._fU0) + (uParam0._fU4 * uParam3._fU4)) + (uParam0._fU8 * uParam3._fU8);
}

int sub_31101()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_3600() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_3600(), ref iVar2 );
        if ((((iVar2 == 0) || (iVar2 == 45)) || (iVar2 == 46)) || (iVar2 == 41))
        {
            return 1;
        }
    }
    return 0;
}

void sub_31536()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (NOT g_U30101)
    {
        if (NOT l_U1086)
        {
            if (sub_14729( sub_3600(), l_U1149, 1094713344 ))
            {
                if ((IS_CHAR_SHOOTING( sub_3600() )) || (sub_31604()))
                {
                    g_U30093[l_U1149] = 1;
                    PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - shots fired inside club" );
                    PRINTNL();
                    GET_GAME_TIMER( ref l_U1189 );
                    l_U1086 = 1;
                }
            }
        }
    }
    if (NOT g_U30093[l_U1149])
    {
        if (IS_PLAYER_PLAYING( sub_2044() ))
        {
            if ((sub_14729( sub_3600(), l_U1149, 1094713344 )) || ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0))
            {
                sub_32108( ref l_U920 );
                sub_32108( ref l_U139 );
            }
            if (sub_3885( sub_3600(), l_U1149, 0 ))
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3600() ))
                {
                    PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - player is in a car inside the club" );
                    PRINTNL();
                    g_U30093[l_U1149] = 1;
                }
            }
        }
    }
    else if (NOT l_U1090)
    {
        sub_32108( ref l_U920 );
        sub_32108( ref l_U139 );
    }
    return;
}

int sub_31604()
{
    switch (l_U1149)
    {
        case 0:
        if (((IS_BULLET_IN_BOX( -398.50490000, 401.49280000, 3.67440000, -378.30490000, 440.81780000, 7.67440000, 0 )) || (IS_BULLET_IN_BOX( -384.02620000, 431.87570000, 4.64940000, -368.82620000, 442.87570000, 8.74940000, 0 ))) || (IS_BULLET_IN_BOX( -398.38180000, 411.76870000, 4.22430000, -383.38180000, 434.24370000, 8.17430000, 0 )))
        {
            return 1;
        }
        break;
        case 1:
        if (IS_BULLET_IN_BOX( -490.11110000, 138.91470000, 6.40490000, -468.06110000, 166.93970000, 14.45490000, 0 ))
        {
            return 1;
        }
        break;
        case 2:
        if (IS_BULLET_IN_BOX( -439.94970000, 347.42230000, 9.81670000, -423.12470000, 356.29730000, 15.11670000, 0 ))
        {
            return 1;
        }
        break;
    }
    return 0;
}

void sub_32108(unknown uParam0)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if ((uParam0^)[I]._fU0)
        {
            if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU24 )))
            {
                if (NOT g_U30153)
                {
                    if (NOT sub_31101())
                    {
                        if ((IS_PLAYER_TARGETTING_CHAR( sub_2044(), (uParam0^)[I]._fU24 )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2044(), (uParam0^)[I]._fU24 )))
                        {
                            g_U30093[l_U1149] = 1;
                            PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - targetting ped" );
                            PRINTNL();
                            l_U1090 = 1;
                            if (((uParam0^)[I]._fU4 == 8) || ((uParam0^)[I]._fU4 == 9))
                            {
                                g_U30145[l_U1149] = 1;
                                l_U1090 = 1;
                            }
                        }
                    }
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^)[I]._fU24, sub_3600(), 0 ))
                    {
                        if ((l_U1149 == 0) || (((uParam0^)[I]._fU4 == 8) || ((uParam0^)[I]._fU4 == 9)))
                        {
                            PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - player damaged a club ped" );
                            PRINTNL();
                            g_U30093[l_U1149] = 1;
                            if (((uParam0^)[I]._fU4 == 8) || ((uParam0^)[I]._fU4 == 9))
                            {
                                g_U30145[l_U1149] = 1;
                                l_U1090 = 1;
                            }
                        }
                    }
                    if (((uParam0^)[I]._fU4 == 8) || ((uParam0^)[I]._fU4 == 9))
                    {
                        if (IS_PED_IN_COMBAT( (uParam0^)[I]._fU24 ))
                        {
                            PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - bouncers are in combat" );
                            PRINTNL();
                            g_U30093[l_U1149] = 1;
                            l_U1090 = 1;
                            g_U30145[l_U1149] = 1;
                        }
                    }
                }
            }
            else if (((uParam0^)[I]._fU4 == 8) || ((uParam0^)[I]._fU4 == 9))
            {
                g_U30145[l_U1149] = 1;
                l_U1090 = 1;
            }
        }
    }
    if (l_U1090)
    {
        if (NOT l_U1091)
        {
            sub_32847();
            l_U1091 = 1;
        }
    }
    return;
}

void sub_32847()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < l_U139; I++ )
    {
        if ((l_U139[I]._fU4 == 8) || (l_U139[I]._fU4 == 9))
        {
            if (NOT (IS_CHAR_INJURED( l_U139[I]._fU24 )))
            {
                if ((l_U139[I]._fU48 == -1446884113) || (l_U139[I]._fU48 == 1662473323))
                {
                    GIVE_WEAPON_TO_CHAR( l_U139[I]._fU24, 12, 999, 0 );
                }
                else
                {
                    GIVE_WEAPON_TO_CHAR( l_U139[I]._fU24, 7, 999, 0 );
                }
            }
        }
    }
    return;
}

void sub_33257()
{
    unknown uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    boolean bVar7;
    int iVar8;
    int I;

    bVar7 = false;
    if (sub_3885( sub_3600(), l_U1149, 0 ))
    {
        if (sub_33290())
        {
            if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dancing" )) == 0) AND (NOT l_U1093))
            {
                if (NOT g_U30093[l_U1149])
                {
                    if (sub_33747( sub_3600() ))
                    {
                        if (NOT (IS_PED_IN_COMBAT( sub_3600() )))
                        {
                            if (NOT (IS_CHAR_DUCKING( sub_3600() )))
                            {
                                if (sub_31101())
                                {
                                    if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2044() ))
                                    {
                                        bVar7 = true;
                                    }
                                }
                            }
                        }
                    }
                }
                GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref iVar5, ref iVar6 );
                if (iVar5 < 0)
                {
                    iVar5 *= -1;
                }
                if (iVar6 < 0)
                {
                    iVar6 *= -1;
                }
                if (bVar7)
                {
                    if ((iVar3 < 10) AND (iVar4 < 10))
                    {
                        ;
                    }
                }
                iVar8 = 1;
                if (g_U12379)
                {
                    if ((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony1" )) > 0)) AND (NOT g_U30105))
                    {
                        iVar8 = 0;
                    }
                }
                if ((IS_AUTO_SAVE_IN_PROGRESS()) || (g_U10953._fU4))
                {
                    iVar8 = 0;
                }
                if (IS_CHAR_DEAD( sub_3600() ))
                {
                    iVar8 = 0;
                }
                if (NOT (IS_PLAYER_PLAYING( sub_2044() )))
                {
                    iVar8 = 0;
                }
                if (g_U12381)
                {
                    iVar8 = 0;
                }
                if ((sub_24252()) || (sub_34121()))
                {
                    iVar8 = 0;
                }
                if (NOT g_U22957)
                {
                    iVar8 = 0;
                }
                if (NOT (CAN_PLAYER_START_MISSION( sub_2044() )))
                {
                    iVar8 = 0;
                }
                if (NOT (sub_34204( 1, 1 )))
                {
                    iVar8 = 0;
                }
                if (IS_BIT_SET( g_U10938._fU0, 4 ))
                {
                    iVar8 = 0;
                }
                if (NOT sub_34523())
                {
                    iVar8 = 0;
                }
                if (NOT (IS_CHAR_INJURED( g_U30208 )))
                {
                    l_U1196 = g_U30208;
                }
                if (NOT (IS_CHAR_INJURED( l_U1196 )))
                {
                    if (LOCATE_CHAR_ON_FOOT_3D( l_U1196, l_U1278._fU0, l_U1278._fU4, l_U1278._fU8, 0.70000000, 0.70000000, 2.50000000, 0 ))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1196, sub_3600(), 0 ))
                        {
                            iVar8 = 0;
                        }
                    }
                    else
                    {
                        iVar8 = 0;
                    }
                }
                else
                {
                    iVar8 = 0;
                }
                if (g_U30105)
                {
                    SET_PLAYER_CONTROL( sub_2044(), 1 );
                }
                if (sub_21992( sub_3600() ))
                {
                    iVar8 = 0;
                }
                if ((((bVar7) || (g_U30105)) AND (sub_34776( 2, 0 ))) AND (iVar8))
                {
                    l_U1211 = "DANC_H01";
                    if (((NOT l_U1087) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) || (g_U30105))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1196 )))
                        {
                            if (l_U1176 > 30000)
                            {
                                SAY_AMBIENT_SPEECH( l_U1196, "DANCING_GAME_ASK", 1, 1, 2 );
                                TASK_LOOK_AT_CHAR( l_U1196, sub_3600(), 5000, 0 );
                                PRINTSTRING( "SAY_AMBIENT_SPEECH - DANCING_GAME_ASK" );
                                PRINTNL();
                                l_U1176 = 0;
                            }
                        }
                        if ((sub_35260( 2, l_U1211, 0 )) || (g_U30105))
                        {
                            g_U30206 = l_U1196;
                            g_U30190 = l_U1149;
                            l_U1122 = 0;
                            START_NEW_SCRIPT( "dancing", 1024 );
                            l_U1087 = 1;
                            l_U1093 = 1;
                            sub_35940( 2, l_U1211 );
                            SET_PLAYER_CONTROL( sub_2044(), 0 );
                        }
                    }
                    else if (NOT (IS_CONTROL_PRESSED( 2, 23 )))
                    {
                        l_U1087 = 0;
                    }
                }
                else if (NOT (sub_22164( l_U1211 )))
                {
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( l_U1211 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1196 )))
                        {
                            SAY_AMBIENT_SPEECH( l_U1196, "DANCING_REJECTED", 1, 1, 2 );
                            PRINTSTRING( "SAY_AMBIENT_SPEECH - DANCING_GAME_ASK" );
                            PRINTNL();
                        }
                    }
                }
                sub_35940( 2, l_U1211 );;
            }
            else if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dancing" )) == 0)
            {
                if (g_U30106)
                {
                    if (NOT l_U1122)
                    {
                        switch (l_U1149)
                        {
                            case 1:
                            switch (l_U1161)
                            {
                                case 0:
                                if (IS_PLAYER_PLAYING( sub_2044() ))
                                {
                                    SET_PLAYER_CONTROL( sub_2044(), 1 );
                                }
                                REQUEST_SCRIPT( "toilet_activity" );
                                if (NOT IS_SCREEN_FADED_OUT())
                                {
                                    if (NOT IS_SCREEN_FADING())
                                    {
                                        DO_SCREEN_FADE_OUT( 1000 );
                                    }
                                }
                                else if (HAS_SCRIPT_LOADED( "toilet_activity" ))
                                {
                                    g_U30205 = g_U30206;
                                    g_U30191 = 0;
                                    START_NEW_SCRIPT( "toilet_activity", 512 );
                                    l_U1161++;
                                }
                                break;
                                case 1:
                                if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "toilet_activity" )) == 0)
                                {
                                    if (IS_PLAYER_PLAYING( sub_2044() ))
                                    {
                                        SET_PLAYER_CONTROL( sub_2044(), 1 );
                                    }
                                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "toilet_activity" );
                                    PRINTSTRING( "Reset Dancing Globals after toilet activity" );
                                    PRINTNL();
                                    sub_36913();
                                    l_U1093 = 0;
                                    l_U1161 = 0;
                                }
                                break;
                            }
                            break;
                            case 0:
                            l_U1093 = 0;
                            l_U1161 = 0;
                            break;
                            case 2:
                            PRINTSTRING( "Reset Dancing Globals - passed, hercules" );
                            PRINTNL();
                            l_U1093 = 0;
                            l_U1161 = 0;
                            sub_36913();
                            break;
                        }
                    }
                    else
                    {
                        l_U1093 = 0;
                        l_U1161 = 0;
                        sub_36913();
                    }
                }
                else if (g_U30107)
                {
                    switch (l_U1149)
                    {
                        case 1:
                        sub_36913();
                        l_U1093 = 0;
                        break;
                        case 0:
                        l_U1093 = 0;
                        break;
                        case 2:
                        sub_36913();
                        l_U1093 = 0;
                        break;
                    }
                    for ( I = 0; I < l_U920; I++ )
                    {
                        if (l_U920[I]._fU0)
                        {
                            if (l_U920[I]._fU4 == 12)
                            {
                                sub_2299( ref l_U920[I], 1 );
                            }
                        }
                    }
                    for ( I = 0; I < l_U139; I++ )
                    {
                        if (l_U139[I]._fU0)
                        {
                            if (l_U139[I]._fU4 == 12)
                            {
                                sub_2299( ref l_U139[I], 1 );
                            }
                        }
                    }
                }
                else
                {
                    sub_36913();
                    l_U1093 = 0;
                }
            }
            else if (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "busstop" )) == 0))
            {
                l_U1122 = 1;
            };;;
        }
    }
    return;
}

int sub_33290()
{
    switch (l_U1149)
    {
        case 2:
        REQUEST_SCRIPT( "dancing" );
        REQUEST_ANIMS( "missamb_herc_female" );
        REQUEST_ANIMS( "missamb_herc_male" );
        if (((HAS_SCRIPT_LOADED( "dancing" )) AND (HAVE_ANIMS_LOADED( "missamb_herc_female" ))) AND (HAVE_ANIMS_LOADED( "missamb_herc_male" )))
        {
            return 1;
        }
        break;
        case 1:
        REQUEST_SCRIPT( "dancing" );
        REQUEST_ANIMS( "missamb_m9" );
        if ((HAS_SCRIPT_LOADED( "dancing" )) AND (HAVE_ANIMS_LOADED( "missamb_m9" )))
        {
            return 1;
        }
        break;
        case 0:
        REQUEST_SCRIPT( "dancing" );
        REQUEST_ANIMS( "missamb_bama" );
        if ((HAS_SCRIPT_LOADED( "dancing" )) AND (HAVE_ANIMS_LOADED( "missamb_bama" )))
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_33747(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_AREA_3D( uParam0, l_U126._fU4._fU0, l_U126._fU4._fU4, l_U126._fU4._fU8, l_U126._fU16._fU0, l_U126._fU16._fU4, l_U126._fU16._fU8, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_34121()
{
    if (g_U560 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_34204(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3600() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3600(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3600() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3600(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3600()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3600() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3600() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2044() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2044() )))
    {
        return 0;
    }
    return 1;
}

int sub_34523()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

int sub_34776(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_2044() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_2044() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2044() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_34872())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_3600() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_34957())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_34872()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_34957()
{
    return sub_34968( 0, 0 );
}

int sub_34968(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((uParam1) AND (g_U560 != 9))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

int sub_35260(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_34776( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_2044(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_35535();
                l_U3 = 1;
                g_U10535 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U10535 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U2 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U2)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U2 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_35535()
{
    return sub_34968( 1, 1 );
}

void sub_35940(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U10536 ))
        {
            if ((g_U10534 == iParam0) AND (l_U5))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_36161();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_2044(), 1 );
                l_U4 = 0;
            }
            if (l_U2)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U2 = 0;
            }
        }
    }
    return;
}

void sub_36161()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_36913()
{
    g_U30105 = 0;
    g_U30106 = 0;
    g_U30107 = 0;
    g_U30108 = 0;
    PRINTSTRING( "RESET_DANCING_GLOBALS() - Called" );
    PRINTNL();
    return;
}

void sub_37526(int iParam0)
{
    if (iParam0->_fU0)
    {
        if (NOT (iParam0->_fU24 == g_U30207))
        {
            if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
            {
                if (IS_CHAR_IN_AREA_3D( iParam0->_fU24, g_U30251._fU0, g_U30251._fU4, g_U30251._fU8, g_U30254._fU0, g_U30254._fU4, g_U30254._fU8, 0 ))
                {
                    sub_37643( iParam0, 1 );
                }
            }
        }
    }
    return;
}

void sub_37643(int iParam0, boolean bParam1)
{
    int iVar4;

    iVar4 = 1;
    if ((iParam0->_fU24 == g_U30208) AND (bParam1))
    {
        if (DOES_CHAR_EXIST( iParam0->_fU24 ))
        {
            PRINTSTRING( "Deleting g_MissionDancePedID" );
            PRINTNL();
            DELETE_CHAR( iParam0 + 24 );
        }
    }
    if ((NOT (iParam0->_fU24 == g_U30208)) || (iParam0->_fU24 == nil))
    {
        if (NOT (sub_2330( iParam0->_fU24 )))
        {
            if (DOES_CHAR_EXIST( iParam0->_fU24 ))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                {
                    GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 26, ref l_U1212 );
                    if (NOT (l_U1212 == 7))
                    {
                        if (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))
                        {
                            iVar4 = 0;
                        }
                    }
                    GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 91, ref l_U1212 );
                    if (NOT (l_U1212 == 7))
                    {
                        iVar4 = 0;
                    }
                    if (IS_PLAYER_PLAYING( sub_2044() ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), iParam0->_fU24, 5.00000000, 5.00000000, 2.00000000, 0 ))
                        {
                            if (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))
                            {
                                iVar4 = 0;
                            }
                        }
                    }
                }
                if (l_U1100)
                {
                    if (NOT (sub_3913( sub_3600(), l_U1149 )))
                    {
                        bParam1 = true;
                    }
                }
                if ((iVar4) || (bParam1))
                {
                    iParam0->_fU8 = 0;
                    iParam0->_fU12 = 0;
                    if (l_U1088)
                    {
                        PRINTSTRING( "CLUB_PED_REMOVED - called from REMOVE_CLUB_PED" );
                        PRINTNL();
                    }
                    sub_2299( iParam0, 1 );
                    sub_38123( iParam0 );
                }
            }
            else if (bParam1)
            {
                iParam0->_fU8 = 0;
                iParam0->_fU12 = 0;
                iParam0->_fU16 = 0;
            }
        }
    }
    return;
}

void sub_38123(int iParam0)
{
    if (NOT (iParam0->_fU48 == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( iParam0->_fU48 );
    }
    switch (iParam0->_fU4)
    {
        case 10:
        case 12:
        sub_38189();
        break;
        default:
        REMOVE_ANIMS( "missnightclub" );
        break;
    }
    return;
}

void sub_38189()
{
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "dancing" );
    return;
}

void sub_38671()
{
    PRINTSTRING( "RESET_CLUB_VARIABLES() - called" );
    PRINTNL();
    l_U1085 = 0;
    l_U1086 = 0;
    l_U1087 = 0;
    l_U1089 = 0;
    l_U1090 = 0;
    l_U1091 = 0;
    l_U1092 = 0;
    l_U1093 = 0;
    l_U1094 = 0;
    sub_1794();
    g_U30102 = 0;
    g_U30103 = 0;
    l_U1148 = 0;
    l_U1146 = 0;
    l_U1147 = 0;
    l_U1150 = 0;
    l_U1154 = 0;
    l_U1156 = 0;
    l_U1157 = 0;
    l_U1158 = 0;
    sub_5661();
    return;
}

void sub_38916(int iParam0)
{
    if (iParam0->_fU0)
    {
        iParam0->_fU20 += l_U1159;
        if (iParam0->_fU8 == 0)
        {
            if (DOES_CHAR_EXIST( iParam0->_fU24 ))
            {
                sub_37643( iParam0, 0 );
            }
            else if (NOT l_U1086)
            {
                if (iParam0->_fU20 > 0)
                {
                    switch (iParam0->_fU4)
                    {
                        case 1:
                        case 4:
                        case 5:
                        case 8:
                        case 10:
                        case 12:
                        if (((sub_3885( sub_3600(), l_U1149, 1 )) || (sub_24963( sub_3600(), l_U1149 ))) AND ((NOT g_U30103) || (sub_25748())))
                        {
                            iParam0->_fU8 = 1;
                        }
                        break;
                        case 14:
                        if ((NOT l_U1125) AND (NOT g_U30180))
                        {
                            if ((NOT g_U30102) AND (NOT l_U1108))
                            {
                                if (NOT (sub_39231( sub_3600(), l_U1149 )))
                                {
                                    iParam0->_fU8 = 1;
                                }
                            }
                        }
                        else if (g_U30180)
                        {
                            if ((NOT g_U30153) AND (NOT g_U12379))
                            {
                                g_U30180 = 0;
                            }
                        }
                        break;
                        case 2:
                        case 9:
                        case 13:
                        if (sub_39364( (iParam0^) ))
                        {
                            iParam0->_fU8 = 1;
                        }
                        else if (NOT g_U30102)
                        {
                            if (NOT (sub_39231( sub_3600(), l_U1149 )))
                            {
                                iParam0->_fU8 = 1;
                            }
                        }
                        break;
                        case 6:
                        case 7:
                        if ((NOT g_U30102) AND (NOT l_U1108))
                        {
                            if (NOT (sub_39231( sub_3600(), l_U1149 )))
                            {
                                iParam0->_fU8 = 1;
                            }
                        }
                        break;
                    }
                }
            }
        }
        if (iParam0->_fU8 == 1)
        {
            if ((NOT l_U1086) AND (sub_39537( iParam0 )))
            {
                switch (iParam0->_fU4)
                {
                    case 1:
                    case 5:
                    case 8:
                    case 10:
                    case 12:
                    if (sub_3885( sub_3600(), l_U1149, 1 ))
                    {
                        if (((sub_39692( iParam0 )) AND (sub_24963( sub_3600(), l_U1149 ))) AND ((NOT g_U30103) || (sub_25748())))
                        {
                            sub_40511( iParam0 );
                        }
                    }
                    else
                    {
                        sub_37643( iParam0, 0 );
                    }
                    break;
                    case 14:
                    if (sub_47962( sub_3600(), l_U1149 ))
                    {
                        if (sub_39692( iParam0 ))
                        {
                            sub_40511( iParam0 );
                        }
                    }
                    break;
                    case 2:
                    case 13:
                    if (sub_39692( iParam0 ))
                    {
                        if (sub_48049( sub_3600(), l_U1149 ))
                        {
                            if (NOT g_U30102)
                            {
                                if (NOT l_U1086)
                                {
                                    sub_40511( iParam0 );
                                }
                            }
                        }
                    }
                    break;
                    case 9:
                    if (sub_39692( iParam0 ))
                    {
                        if ((sub_48049( sub_3600(), l_U1149 )) || (sub_39364( (iParam0^) )))
                        {
                            if ((NOT g_U30102) || (sub_39364( (iParam0^) )))
                            {
                                sub_40511( iParam0 );
                            }
                        }
                    }
                    break;
                    case 6:
                    if ((sub_48049( sub_3600(), l_U1149 )) || (sub_3913( sub_3600(), l_U1149 )))
                    {
                        if (sub_39692( iParam0 ))
                        {
                            sub_40511( iParam0 );
                        }
                    }
                    break;
                    case 4:
                    if (sub_3885( sub_3600(), l_U1149, 1 ))
                    {
                        if (((sub_39692( iParam0 )) AND (sub_24963( sub_3600(), l_U1149 ))) AND (NOT g_U30103))
                        {
                            sub_40511( iParam0 );
                        }
                    }
                    else
                    {
                        sub_37643( iParam0, 0 );
                    }
                    break;
                    case 7:
                    if (sub_47962( sub_3600(), l_U1149 ))
                    {
                        if (sub_39692( iParam0 ))
                        {
                            sub_40511( iParam0 );
                        }
                    }
                    break;
                }
            }
        }
        if (iParam0->_fU8 == 2)
        {
            if (l_U1086)
            {
                sub_48667( iParam0 );
            }
            else
            {
                switch (iParam0->_fU4)
                {
                    case 1:
                    case 5:
                    case 8:
                    case 10:
                    case 12:
                    if ((sub_24963( sub_3600(), l_U1149 )) AND ((NOT g_U30103) || (sub_25748())))
                    {
                        sub_48667( iParam0 );
                    }
                    else
                    {
                        sub_37643( iParam0, 0 );
                    }
                    break;
                    case 14:
                    sub_48667( iParam0 );
                    break;
                    case 6:
                    if (NOT (sub_39231( sub_3600(), l_U1149 )))
                    {
                        sub_48667( iParam0 );
                    }
                    else
                    {
                        sub_37643( iParam0, 0 );
                    }
                    break;
                    case 4:
                    if ((sub_24963( sub_3600(), l_U1149 )) AND (NOT g_U30103))
                    {
                        sub_48667( iParam0 );
                    }
                    else
                    {
                        sub_37643( iParam0, 0 );
                    }
                    break;
                    case 2:
                    case 9:
                    case 13:
                    if (sub_39364( (iParam0^) ))
                    {
                        sub_48667( iParam0 );
                    }
                    else if ((sub_48049( sub_3600(), l_U1149 )) AND (NOT g_U30102))
                    {
                        sub_48667( iParam0 );
                    }
                    else
                    {
                        sub_37643( iParam0, 0 );
                    }
                    break;
                    case 7:
                    if (sub_47962( sub_3600(), l_U1149 ))
                    {
                        sub_48667( iParam0 );
                    }
                    else
                    {
                        sub_37643( iParam0, 0 );
                    }
                    break;
                }
            }
        }
    }
    else if (DOES_CHAR_EXIST( iParam0->_fU24 ))
    {
        sub_37643( iParam0, 0 );
    }
    else if (NOT g_U30097[l_U1149])
    {
        if (NOT (iParam0->_fU4 == 0))
        {
            if (IS_SCREEN_FADED_OUT())
            {
                iParam0->_fU0 = 1;
            }
            else if ((((NOT (sub_3885( sub_3600(), l_U1149, 0 ))) AND (NOT (iParam0->_fU4 == 2))) AND (NOT (iParam0->_fU4 == 13))) AND (NOT (iParam0->_fU4 == 9)))
            {
                iParam0->_fU0 = 1;
            }
            else if (NOT (sub_23292( iParam0->_fU28, 1.50000000 )))
            {
                iParam0->_fU0 = 1;
            };;;
        }
    };;;
    return;
}

int sub_39231(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (sub_3913( uParam0, uParam1 )))
        {
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar4 );
            if (NOT (iVar4 == nil))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_39364(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14)
{
    if ((uParam0._fU52 == 9) || (uParam0._fU52 == 10))
    {
        return 1;
    }
    return 0;
}

int sub_39537(unknown uParam0)
{
    return 1;
}

int sub_39692(int iParam0)
{
    int iVar3;

    if (iParam0->_fU0)
    {
        iVar3 = sub_39713( iParam0 );
        if (NOT (iVar3 == 0))
        {
            REQUEST_MODEL( iVar3 );
            REQUEST_ANIMS( "missnightclub" );
            if (HAS_MODEL_LOADED( iVar3 ))
            {
                return 1;
            }
            else if (IS_SCREEN_FADED_OUT())
            {
                if (NOT g_U30176)
                {
                    LOAD_ALL_OBJECTS_NOW();
                }
            }
        }
        else
        {
            PRINTSTRING( "ARE_ASSETS_LOADED_FOR_CREATING_CLUB_PED - " );
            if (l_U1097)
            {
                PRINTSTRING( "global club ped " );
                PRINTINT( l_U1162 );
            }
            else
            {
                PRINTSTRING( "club ped " );
                PRINTINT( l_U1162 );
            }
            PRINTNL();
            SCRIPT_ASSERT( "ARE_ASSETS_LOADED_FOR_CREATING_CLUB_PED - trying to load DUMMY_MODEL_FOR_SCRIPT" );
        }
    }
    return 0;
}

void sub_39713(int iParam0)
{
    if (((((g_U30162[l_U1149]) || (iParam0->_fU4 == 2)) || (iParam0->_fU4 == 13)) || (iParam0->_fU4 == 6)) || (iParam0->_fU4 == 7))
    {
        if (((iParam0->_fU52 == 2) || (iParam0->_fU52 == 5)) || (iParam0->_fU52 == 6))
        {
            iParam0->_fU48 = l_U1201;
            return iParam0->_fU48;
        }
        if (((iParam0->_fU52 == 1) || (iParam0->_fU52 == 3)) || (iParam0->_fU52 == 4))
        {
            iParam0->_fU48 = l_U1204;
            return iParam0->_fU48;
        }
    }
    if (NOT (iParam0->_fU52 == 0))
    {
        iParam0->_fU48 = sub_19321( iParam0->_fU52 );
    }
    if (iParam0->_fU48 == 0)
    {
        if (l_U1088)
        {
            PRINTSTRING( "inPed.iModel = " );
            PRINTINT( iParam0->_fU52 );
            PRINTNL();
            if (l_U1097)
            {
                PRINTSTRING( "Global iClubPedBeingProcessed = " );
                PRINTINT( l_U1162 );
                PRINTNL();
            }
            else
            {
                PRINTSTRING( "iClubPedBeingProcessed = " );
                PRINTINT( l_U1162 );
                PRINTNL();
            }
        }
    }
    return iParam0->_fU48;
}

void sub_40511(int iParam0)
{
    unknown uVar3;
    string sVar4;
    unknown uVar5;
    char[16] cVar6;

    if (iParam0->_fU0)
    {
        if ((sub_40532( iParam0 )) || (l_U1113))
        {
            if (((sub_40603( iParam0 )) || (g_U30114[l_U1149])) || (l_U1113))
            {
                if ((NOT (sub_41434( iParam0->_fU28, g_U30251, g_U30254 ))) || (l_U1113))
                {
                    if ((sub_41534( iParam0 )) || (l_U1113))
                    {
                        if (HAS_MODEL_LOADED( iParam0->_fU48 ))
                        {
                            if (NOT (DOES_CHAR_EXIST( iParam0->_fU24 )))
                            {
                                if (((NOT g_U30093[l_U1149]) || (sub_3885( sub_3600(), l_U1149, 0 ))) || (l_U1113))
                                {
                                    if (sub_42176( iParam0->_fU56 ))
                                    {
                                        sVar4 = l_U981[iParam0->_fU56]._fU0;
                                    }
                                    else
                                    {
                                        sVar4 = "";
                                    }
                                    if (NOT (DOES_CHAR_EXIST( iParam0->_fU24 )))
                                    {
                                        CLEAR_AREA( ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 1.20000000, 0 );
                                        if (NOT (sub_28546( iParam0->_fU52 )))
                                        {
                                            CREATE_CHAR( 4, iParam0->_fU48, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0 + 24, 1 );
                                        }
                                        else
                                        {
                                            CREATE_CHAR( 5, iParam0->_fU48, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0 + 24, 1 );
                                        }
                                        if (DOES_CHAR_EXIST( iParam0->_fU24 ))
                                        {
                                            sub_42426( iParam0 );
                                            if (sub_2999( iParam0->_fU56 ))
                                            {
                                                SET_CHAR_COLLISION( iParam0->_fU24, 0 );
                                                FREEZE_CHAR_POSITION( iParam0->_fU24, 1 );
                                            }
                                            SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam0->_fU24 );
                                            SET_CHAR_HEADING( iParam0->_fU24, iParam0->_fU40 );
                                            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( iParam0->_fU24, 1 );
                                            if (((NOT (iParam0->_fU4 == 2)) AND (NOT (iParam0->_fU4 == 7))) AND (NOT (iParam0->_fU4 == 13)))
                                            {
                                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU24, 1 );
                                            }
                                            if (sub_2999( iParam0->_fU56 ))
                                            {
                                                SET_CHAR_SUFFERS_CRITICAL_HITS( iParam0->_fU24, 0 );
                                            }
                                            uVar5 = sub_43269( iParam0->_fU28 );
                                            if (NOT (sub_22164( uVar5 )))
                                            {
                                                SET_ROOM_FOR_CHAR_BY_NAME( iParam0->_fU24, uVar5 );
                                            }
                                            SET_PED_ALPHA( iParam0->_fU24, 255 );
                                            if (l_U1097)
                                            {
                                                StrCopy( ref cVar6, "Global Ped ", 16 );
                                            }
                                            else
                                            {
                                                StrCopy( ref cVar6, "Club Ped ", 16 );
                                            }
                                            ConcatString(ref cVar6, l_U1162, 16);
                                            SET_CHAR_NAME_DEBUG( iParam0->_fU24, ref cVar6 );
                                            if (sub_44641( iParam0 ))
                                            {
                                                SET_CHAR_IN_CUTSCENE( iParam0->_fU24, 1 );
                                            }
                                            sub_44691( iParam0->_fU56, iParam0 + 56, -1 );
                                            if (iParam0->_fU52 == 10)
                                            {
                                                SET_CHAR_PROP_INDEX( iParam0->_fU24, 1, 0 );
                                                SET_CHAR_PROP_INDEX( iParam0->_fU24, 0, 0 );
                                            }
                                            if ((iParam0->_fU4 == 10) || (iParam0->_fU4 == 12))
                                            {
                                                SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( iParam0->_fU24, 1 );
                                            }
                                            if (l_U1097)
                                            {
                                                PRINTSTRING( "**** copying ped id back to g_clubped ****" );
                                                PRINTNL();
                                                uVar3 = sub_45403( iParam0->_fU24, ref l_U920 );
                                                PRINTSTRING( "i = " );
                                                PRINTINT( uVar3 );
                                                PRINTNL();
                                                PRINTSTRING( "iClubPedsFromGlobalSlotNumber[i] = " );
                                                PRINTINT( l_U1165[uVar3] );
                                                PRINTNL();
                                                uVar3 = l_U1165[uVar3];
                                                g_U29971[uVar3]._fU12 = iParam0->_fU24;
                                                PRINTSTRING( "inPed.iModel = " );
                                                PRINTINT( iParam0->_fU52 );
                                                PRINTNL();
                                                PRINTSTRING( "inPed.iType = " );
                                                PRINTINT( iParam0->_fU4 );
                                                PRINTNL();
                                            }
                                            else if (((((((iParam0->_fU4 == 1) || (iParam0->_fU4 == 2)) || (iParam0->_fU4 == 3)) || (iParam0->_fU4 == 4)) || (iParam0->_fU4 == 6)) || (iParam0->_fU4 == 7)) || (iParam0->_fU4 == 10))
                                            {
                                                ALWAYS_USE_HEAD_ON_HORN_ANIM_WHEN_DEAD_IN_CAR( iParam0->_fU24, 1 );
                                            }
                                            if (l_U1149 == 1)
                                            {
                                                if (NOT (g_U30198 == -1))
                                                {
                                                    if (g_U29971[g_U30198]._fU12 == iParam0->_fU24)
                                                    {
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 1, 0, 0 );
                                                        CLEAR_AREA( ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 1.00000000, 0 );
                                                        if (DOES_OBJECT_EXIST( l_U1210 ))
                                                        {
                                                            DELETE_OBJECT( ref l_U1210 );
                                                        }
                                                        sub_2700();
                                                    }
                                                }
                                            }
                                            if (iParam0->_fU4 == 12)
                                            {
                                                l_U1196 = iParam0->_fU24;
                                                l_U1278 = {iParam0->_fU28};
                                            }
                                            if (iParam0->_fU4 == 9)
                                            {
                                                switch (l_U1149)
                                                {
                                                    case 2:
                                                    g_U30211 = iParam0->_fU24;
                                                    break;
                                                    case 0:
                                                    if (NOT (DOES_CHAR_EXIST( g_U30213 )))
                                                    {
                                                        g_U30213 = iParam0->_fU24;
                                                    }
                                                    break;
                                                    case 1:
                                                    g_U30212 = iParam0->_fU24;
                                                    break;
                                                }
                                            }
                                            if (l_U1149 == 2)
                                            {
                                                if (NOT (g_U30201 == -1))
                                                {
                                                    if (g_U29971[g_U30201]._fU12 == iParam0->_fU24)
                                                    {
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 0, 0, 1 );
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 1, 0, 1 );
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 2, 0, 0 );
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 3, 1, 0 );
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 7, 0, 1 );
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                                    {
                                        if ((iParam0->_fU4 == 8) || (iParam0->_fU4 == 9))
                                        {
                                            SET_CHAR_DECISION_MAKER( iParam0->_fU24, g_U30183 );
                                            SET_COMBAT_DECISION_MAKER( iParam0->_fU24, g_U30184 );
                                            SET_CHAR_WILL_USE_COVER( iParam0->_fU24, 1 );
                                            SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU24, iParam0->_fU28, 10.00000000 );
                                            SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU24, 23 );
                                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU24, 0 );
                                        }
                                        else
                                        {
                                            SET_CHAR_DECISION_MAKER( iParam0->_fU24, g_U30182 );
                                        }
                                        if (g_U12379)
                                        {
                                            if ((((NOT (iParam0->_fU4 == 8)) AND (NOT (iParam0->_fU4 == 5))) AND (NOT (iParam0->_fU4 == 9))) AND (NOT (iParam0->_fU4 == 14)))
                                            {
                                                SET_CHAR_NEVER_TARGETTED( iParam0->_fU24, 1 );
                                            }
                                        }
                                        if (iParam0->_fU4 == 2)
                                        {
                                            if (NOT (sub_22164( sVar4 )))
                                            {
                                                if (COMPARE_STRING( sVar4, "Scenario_SmokingOutsideOffice" ))
                                                {
                                                    if (sub_28546( iParam0->_fU52 ))
                                                    {
                                                        GIVE_PED_AMBIENT_OBJECT( iParam0->_fU24, -2037134882 );
                                                    }
                                                    else
                                                    {
                                                        GIVE_PED_AMBIENT_OBJECT( iParam0->_fU24, -268530289 );
                                                    }
                                                }
                                            }
                                        }
                                        sub_46524( iParam0, 0 );
                                        iParam0->_fU8 = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_40532(unknown uParam0)
{
    if (g_U30188 >= l_U1152)
    {
        return 0;
    }
    if (l_U1157 > l_U1153)
    {
        return 0;
    }
    return 1;
}

int sub_40603(int iParam0)
{
    int iVar3;
    unknown uVar4;

    if (((NOT IS_SCREEN_FADED_OUT()) AND (NOT g_U30114[l_U1149])) AND (IS_PLAYER_CONTROL_ON( sub_2044() )))
    {
        if (((iParam0->_fU4 == 2) || (iParam0->_fU4 == 9)) || (iParam0->_fU4 == 13))
        {
            GET_INTERIOR_FROM_CHAR( sub_3600(), ref iVar3 );
            if (iVar3 == nil)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3600(), ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 40.00000000, 40.00000000, 40.00000000, 0 ))
                {
                    GET_GAME_VIEWPORT_ID( ref uVar4 );
                    if (NOT (iParam0->_fU4 == 9))
                    {
                        if (CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 2.00000000 ))
                        {
                            return 0;
                        }
                    }
                    else if (CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 1.20000000 ))
                    {
                        return 0;
                    }
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3600(), ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
            {
                GET_GAME_VIEWPORT_ID( ref uVar4 );
                if (NOT (iParam0->_fU4 == 9))
                {
                    if (CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 2.00000000 ))
                    {
                        return 0;
                    }
                }
                else if (CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 1.20000000 ))
                {
                    return 0;
                }
            }
        }
        if ((iParam0->_fU16 == -1) AND (iParam0->_fU20 > 0))
        {
            if (sub_3885( sub_3600(), l_U1149, 0 ))
            {
                GET_GAME_VIEWPORT_ID( ref uVar4 );
                if ((CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 2.00000000 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3600(), ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
                {
                    return 0;
                }
            }
        }
        if (iParam0->_fU4 == 12)
        {
            GET_GAME_VIEWPORT_ID( ref uVar4 );
            if ((CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 1.50000000 )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3600(), ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 7.00000000, 7.00000000, 5.00000000, 0 )))
            {
                return 0;
            }
        }
        if (iParam0->_fU20 < 0)
        {
            if (NOT (sub_2330( iParam0->_fU24 )))
            {
                return 0;
            }
        }
    }
    if (NOT (iParam0->_fU4 == 12))
    {
        if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dancing" )) > 0) AND (NOT IS_SCREEN_FADED_OUT()))
        {
            return 0;
        }
    }
    return 1;
}

int sub_41434(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if ((((((uParam0._fU0 > uParam3._fU0) AND (uParam0._fU4 > uParam3._fU4)) AND (uParam0._fU8 > uParam3._fU8)) AND (uParam0._fU0 < uParam6._fU0)) AND (uParam0._fU4 < uParam6._fU4)) AND (uParam0._fU8 < uParam6._fU8))
    {
        return 1;
    }
    return 0;
}

int sub_41534(int iParam0)
{
    switch (iParam0->_fU4)
    {
        case 8:
        case 9:
        case 5:
        return 1;
        break;
        case 14:
        if (g_U15811[31])
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 7:
        if (l_U1149 == 2)
        {
            return 1;
        }
        else if (sub_41679( iParam0->_fU56 ))
        {
            return 1;
        }
        break;
        case 2:
        if (iParam0->_fU56 == 2)
        {
            if (sub_41679( 3 ))
            {
                return 1;
            }
        }
        else if (sub_41679( iParam0->_fU56 ))
        {
            return 1;
        }
        break;
        case 13:
        return 1;
        break;
        default:
        if (sub_41679( iParam0->_fU56 ))
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_41679(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    unknown uVar6;

    switch (uParam0)
    {
        case 4:
        case 10:
        case 8:
        case 9:
        case 11:
        case 12:
        iVar3 = 4;
        iVar4 = 6;
        break;
        case 15:
        if ((l_U1149 == 0) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0))
        {
            return 1;
        }
        else
        {
            iVar3 = 23;
            iVar4 = 4;
        }
        break;
        case 3:
        case 17:
        if ((l_U1149 == 0) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0))
        {
            return 1;
        }
        else
        {
            iVar3 = 22;
            iVar4 = 6;
        }
        break;
        default:
        return 1;
        break;
    }
    GET_TIME_OF_DAY( ref iVar5, ref uVar6 );
    if (iVar4 < iVar3)
    {
        if ((iVar5 >= iVar3) || (iVar5 < iVar4))
        {
            return 1;
        }
    }
    else if ((iVar5 >= iVar3) AND (iVar5 < iVar4))
    {
        return 1;
    }
    return 0;
}

int sub_42176(int iParam0)
{
    if (((iParam0 == 15) || (iParam0 == 16)) || (iParam0 == 17))
    {
        return 1;
    }
    return 0;
}

void sub_42426(int iParam0)
{
    l_U1151++;
    g_U30188++;
    l_U1157++;
    if (l_U1088)
    {
        PRINTSTRING( "CLUB PED CREATED - " );
        switch (iParam0->_fU4)
        {
            case 1:
            PRINTSTRING( "INTERIOR_CROWD" );
            break;
            case 2:
            PRINTSTRING( "EXTERIOR_CROWD" );
            break;
            case 13:
            PRINTSTRING( "REFUSED_ENTRY" );
            break;
            case 4:
            PRINTSTRING( "INTERIOR_PATROL" );
            break;
            case 5:
            PRINTSTRING( "INTERIOR_STAFF" );
            break;
            case 14:
            PRINTSTRING( "JONI" );
            break;
            case 6:
            PRINTSTRING( "BOTH_PATROL" );
            break;
            case 7:
            PRINTSTRING( "STAIRWELL_PED" );
            break;
            case 8:
            PRINTSTRING( "INTERIOR_BOUNCER" );
            break;
            case 9:
            PRINTSTRING( "EXTERIOR_BOUNCER" );
            break;
            case 10:
            PRINTSTRING( "INTERIOR_DANCER" );
            break;
            case 12:
            PRINTSTRING( "SPECIFIC_DANCER" );
            break;
        }
        PRINTSTRING( ", iTotalPeds = " );
        PRINTINT( l_U1151 );
        if (l_U1097)
        {
            PRINTSTRING( ", global club ped - " );
            PRINTINT( l_U1162 );
        }
        else
        {
            PRINTSTRING( ", club ped - " );
            PRINTINT( l_U1162 );
        }
        PRINTNL();
    }
    return;
}

string sub_43269(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_41434( uParam0, -489.24960000, 137.39240000, 10.33000000, -476.42460000, 167.81740000, 13.62370000 ))
    {
        return "E2_MaisonRoomTop";
    }
    if (sub_41434( uParam0, -489.53600000, 138.46910000, 5.00000000, -476.73600000, 165.44410000, 10.60640000 ))
    {
        if (NOT (sub_41434( uParam0, -489.38310000, 158.32430000, 5.00000000, -479.73310000, 161.82430000, 9.68890000 )))
        {
            return "E2_MaisonRoommain";
        }
    }
    if (sub_41434( uParam0, -489.38310000, 158.32430000, 5.00000000, -479.73310000, 161.82430000, 9.68890000 ))
    {
        return "E2_Maisonbar";
    }
    if (sub_41434( uParam0, -476.68000000, 154.01000000, 5.00000000, -471.46310000, 156.21000000, 11.86410000 ))
    {
        return "E2_MaisonRoomsteps1";
    }
    if (sub_41434( uParam0, -476.23730000, 156.22570000, 5.00000000, -471.66230000, 166.60070000, 11.67420000 ))
    {
        return "E2_MaisonRoomt2";
    }
    if (sub_41434( uParam0, -471.24200000, 156.18820000, 5.00000000, -468.24200000, 166.56320000, 11.67410000 ))
    {
        return "E2_MaisonRoomt03";
    }
    if (sub_41434( uParam0, -474.83110000, 144.02730000, 5.00000000, -470.93110000, 150.60230000, 11.86380000 ))
    {
        return "E2_MaisonsecurRoom";
    }
    if ((sub_41434( uParam0, -471.45100000, 139.90120000, 5.00000000, -468.07600000, 156.20120000, 11.86410000 )) || (sub_41434( uParam0, -473.07430000, 139.93400000, 5.00000000, -467.99930000, 142.23400000, 11.86410000 )))
    {
        return "E2_MaisonRoomfront";
    }
    if (sub_41434( uParam0, -476.64990000, 139.87450000, 5.00000000, -473.07490000, 142.12450000, 11.33070000 ))
    {
        return "E2_MaisonRoomsteps2";
    }
    if (sub_41434( uParam0, -440.38200000, 354.95600000, 9.00000000, -437.18200000, 358.75600000, 13.71660000 ))
    {
        return "Room_Entrance";
    }
    if (sub_41434( uParam0, -440.03200000, 347.35350000, 9.00000000, -437.43200000, 354.97850000, 13.71670000 ))
    {
        return "Room_lobby";
    }
    if (sub_41434( uParam0, -437.35140000, 347.40860000, 9.00000000, -424.87640000, 356.00860000, 13.71670000 ))
    {
        return "Room_Bar";
    }
    if (sub_41434( uParam0, -403.71630000, 397.53020000, 12.00000000, -396.67000000, 401.95520000, 16.41520000 ))
    {
        return "gayclubvestibule";
    }
    if (sub_41434( uParam0, -397.62090000, 393.82890000, 4.00000000, -389.79590000, 401.52890000, 13.29600000 ))
    {
        return "gayclubstrs";
    }
    if (sub_41434( uParam0, -400.69110000, 401.43300000, 1.00000000, -379.14110000, 417.88300000, 7.67430000 ))
    {
        return "gayclubroom";
    }
    if ((sub_41434( uParam0, -398.37480000, 417.79220000, 4.00000000, -377.19980000, 431.96720000, 12.05160000 )) || (sub_41434( uParam0, -397.59980000, 431.71720000, 4.00000000, -383.42480000, 441.21720000, 12.05160000 )))
    {
        return "gaydanceflr";
    }
    if (sub_41434( uParam0, -383.11910000, 432.43100000, 4.00000000, -369.26910000, 442.85600000, 8.17430000 ))
    {
        return "gaybackoffice";
    }
    return "";
}

int sub_44641(unknown uParam0)
{
    return 0;
}

int sub_44691(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown uVar5;
    int iVar6;

    iVar6 = -1;
    switch (uParam0)
    {
        case 8:
        case 9:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar5 );
        switch (uVar5)
        {
            case 0:
            iVar6 = 8;
            break;
            case 1:
            iVar6 = 9;
            break;
        }
        break;
        case 11:
        case 12:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar5 );
        switch (uVar5)
        {
            case 0:
            iVar6 = 11;
            break;
            case 1:
            iVar6 = 12;
            break;
        }
        break;
    }
    if (l_U1149 == 1)
    {
        switch (uParam0)
        {
            case 47:
            case 20:
            case 21:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                iVar6 = 47;
                break;
                case 1:
                iVar6 = 20;
                break;
                case 2:
                iVar6 = 21;
                break;
            }
            break;
            case 22:
            case 23:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                iVar6 = 22;
                break;
                case 1:
                iVar6 = 23;
                break;
            }
            break;
        }
    }
    if (l_U1149 == 2)
    {
        switch (uParam0)
        {
            case 44:
            case 48:
            case 49:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                iVar6 = 44;
                break;
                case 1:
                iVar6 = 48;
                break;
                case 2:
                iVar6 = 49;
                break;
            }
            break;
        }
    }
    if (iVar6 == -1)
    {
        (uParam1^) = uParam0;
        return 1;
        break;
    }
    if (iParam2 == -1)
    {
        (uParam1^) = iVar6;
        return 1;
        break;
    }
    if (iVar6 == iParam2)
    {
        return 0;
        break;
    }
    (uParam1^) = iVar6;
    return 1;
}

int sub_45403(int iParam0, unknown uParam1)
{
    int Result;

    for ( Result = 0; Result < (uParam1^); Result++ )
    {
        if (NOT (iParam0 == nil))
        {
            if ((uParam1^)[Result]._fU24 == iParam0)
            {
                return Result;
            }
        }
    }
    return -1;
}

void sub_46524(int iParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (NOT (iParam0->_fU12 == 99))
        {
            if ((iParam0->_fU4 == 1) || (iParam0->_fU4 == 7))
            {
                if (sub_46583( iParam0->_fU56 ))
                {
                    if (NOT (DOES_OBJECT_EXIST( iParam0->_fU44 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), iParam0->_fU24, l_U1143, l_U1143, l_U1143, 0 ))
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 1 );
                            if (NOT (sub_28546( iParam0->_fU52 )))
                            {
                                CREATE_OBJECT( 568449139, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0 + 44, 1 );
                                if (NOT (sub_47057( iParam0->_fU56 )))
                                {
                                    ATTACH_OBJECT_TO_PED( iParam0->_fU44, iParam0->_fU24, 1219, l_U1248, l_U1254, 0 );
                                }
                                else
                                {
                                    ATTACH_OBJECT_TO_PED( iParam0->_fU44, iParam0->_fU24, 1232, l_U1251, l_U1257, 0 );
                                }
                            }
                            else
                            {
                                CREATE_OBJECT( -937089801, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0 + 44, 1 );
                                if (NOT (sub_47057( iParam0->_fU56 )))
                                {
                                    ATTACH_OBJECT_TO_PED( iParam0->_fU44, iParam0->_fU24, 1219, l_U1260, l_U1266, 0 );
                                }
                                else
                                {
                                    ATTACH_OBJECT_TO_PED( iParam0->_fU44, iParam0->_fU24, 1232, l_U1263, l_U1269, 0 );
                                }
                            }
                        }
                    }
                    else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), iParam0->_fU24, l_U1143, l_U1143, l_U1143, 0 )))
                    {
                        DELETE_OBJECT( iParam0 + 44 );
                    }
                }
            }
            if (iParam0->_fU52 == 11)
            {
                BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 1 );
                if (NOT (DOES_OBJECT_EXIST( iParam0->_fU44 )))
                {
                    CREATE_OBJECT( -433173805, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0 + 44, 1 );
                    ATTACH_OBJECT_TO_PED( iParam0->_fU44, iParam0->_fU24, 1232, l_U1272, l_U1275, 0 );
                }
            }
        }
        else
        {
            BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 0 );
            if (l_U1155 < 5)
            {
                if (DOES_OBJECT_EXIST( iParam0->_fU44 ))
                {
                    if (IS_OBJECT_ATTACHED( iParam0->_fU44 ))
                    {
                        DETACH_OBJECT( iParam0->_fU44, 1 );
                    }
                    if (iParam0->_fU52 == 11)
                    {
                        DELETE_OBJECT( iParam0 + 44 );
                    }
                    l_U1155++;
                }
            }
        }
    }
    else
    {
        BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 0 );
        if (DOES_OBJECT_EXIST( iParam0->_fU44 ))
        {
            DELETE_OBJECT( iParam0 + 44 );
        }
    }
    return;
}

int sub_46583(unknown uParam0)
{
    switch (uParam0)
    {
        case 6:
        case 7:
        case 13:
        case 14:
        return 1;
        break;
    }
    switch (l_U1149)
    {
        case 1:
        switch (uParam0)
        {
            case 32:
            case 33:
            case 55:
            case 37:
            case 27:
            case 28:
            case 29:
            case 38:
            case 39:
            case 40:
            case 30:
            case 56:
            case 35:
            return 1;
            break;
        }
        break;
        case 2:
        switch (uParam0)
        {
            case 72:
            case 77:
            return 1;
            break;
        }
        break;
        case 0:
        switch (uParam0)
        {
            case 30:
            case 44:
            case 36:
            case 33:
            case 32:
            return 1;
            break;
        }
        break;
    }
    return 0;
}

int sub_47057(unknown uParam0)
{
    switch (uParam0)
    {
        case 6:
        case 13:
        case 14:
        return 1;
        break;
    }
    switch (l_U1149)
    {
        case 1:
        switch (uParam0)
        {
            case 32:
            case 33:
            case 55:
            case 39:
            case 38:
            case 36:
            case 37:
            case 40:
            case 56:
            case 30:
            return 1;
            break;
        }
        break;
        case 2:
        switch (uParam0)
        {
            case 77:
            return 1;
            break;
            default:
        }
        break;
        case 0:
        switch (uParam0)
        {
            case 30:
            case 44:
            case 36:
            case 33:
            return 1;
            break;
        }
        break;
    }
    return 0;
}

int sub_47962(unknown uParam0, unknown uParam1)
{
    if (sub_39231( uParam0, uParam1 ))
    {
        return 0;
    }
    return 1;
}

int sub_48049(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_INTERIOR_FROM_CHAR( uParam0, ref iVar4 );
        if (iVar4 == nil)
        {
            return 1;
        }
        else if (sub_39231( uParam0, uParam1 ))
        {
            return 0;
        }
        switch (uParam1)
        {
            case 0:
            if (IS_CHAR_IN_AREA_3D( uParam0, -403.27530000, 397.40990000, 11.52820000, -390.00030000, 402.20990000, 16.40320000, 0 ))
            {
                return 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_AREA_3D( uParam0, -471.63720000, 141.73170000, 7.86390000, -467.71220000, 164.73170000, 11.86390000, 0 ))
            {
                return 1;
            }
            break;
            case 2:
            if (IS_CHAR_IN_AREA_3D( uParam0, -440.63380000, 353.59830000, 10.66670000, -437.50880000, 358.02330000, 13.71670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    if (sub_25748())
    {
        return 1;
    }
    return 0;
}

void sub_48667(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    boolean bVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int iVar12;
    unknown uVar13;
    unknown uVar14;
    string sVar15;

    if (DOES_CHAR_EXIST( iParam0->_fU24 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
        {
            if (NOT (sub_2330( iParam0->_fU24 )))
            {
                if (iParam0->_fU4 == 14)
                {
                    if (NOT (DOES_OBJECT_EXIST( l_U1210 )))
                    {
                        sub_2700();
                    }
                }
                sub_46524( iParam0, 0 );
                uVar13 = l_U981[iParam0->_fU56]._fU0;
                uVar14 = sub_48796( iParam0->_fU56 );
                if (sub_42176( iParam0->_fU56 ))
                {
                    sVar15 = l_U981[iParam0->_fU56]._fU0;
                }
                else
                {
                    sVar15 = "";
                }
                if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                {
                    if (g_U30166)
                    {
                        if (sub_50312( iParam0 ))
                        {
                            SET_CHAR_VISIBLE( iParam0->_fU24, 0 );
                            SET_CHAR_COLLISION( iParam0->_fU24, 0 );
                            SET_CHAR_COORDINATES( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8 );
                        }
                    }
                    else if (NOT (sub_2999( iParam0->_fU56 )))
                    {
                        SET_CHAR_COLLISION( iParam0->_fU24, 1 );
                    }
                    SET_CHAR_VISIBLE( iParam0->_fU24, 1 );;
                }
                if (sub_44641( iParam0 ))
                {
                    SET_CHAR_IN_CUTSCENE( iParam0->_fU24, 1 );
                }
                else
                {
                    SET_CHAR_IN_CUTSCENE( iParam0->_fU24, 0 );
                }
                if (NOT (iParam0->_fU12 == 99))
                {
                    if ((sub_2999( iParam0->_fU56 )) || (sub_46583( iParam0->_fU56 )))
                    {
                        BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 1 );
                    }
                }
                if (NOT l_U1086)
                {
                    if (sub_50782( iParam0 ))
                    {
                        if (l_U1113)
                        {
                            if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                            {
                                SET_CHAR_COORDINATES( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8 );
                                SET_CHAR_HEADING( iParam0->_fU24, iParam0->_fU40 );
                            }
                            else
                            {
                                DELETE_CHAR( iParam0 + 24 );
                            }
                            iParam0->_fU12 = 0;
                        }
                        else if (iParam0->_fU12 == 99)
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 0 );
                            if (sub_2999( iParam0->_fU56 ))
                            {
                                SET_CHAR_COLLISION( iParam0->_fU24, 1 );
                                FREEZE_CHAR_POSITION( iParam0->_fU24, 0 );
                            }
                            if (NOT (sub_21992( iParam0->_fU24 )))
                            {
                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 25, ref l_U1212 );
                                if (l_U1212 == 7)
                                {
                                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( iParam0->_fU24, sub_3600(), 0 ))
                                    {
                                        if (IS_CHAR_MALE( iParam0->_fU24 ))
                                        {
                                            GET_CHAR_HEALTH( iParam0->_fU24, ref iVar12 );
                                            if ((NOT sub_31101()) || (iVar12 < 180))
                                            {
                                                TASK_SMART_FLEE_CHAR( iParam0->_fU24, sub_3600(), 200.00000000, -1 );
                                                SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                                            }
                                            else if (NOT (IS_PED_IN_COMBAT( iParam0->_fU24 )))
                                            {
                                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1212 );
                                                if (l_U1212 == 7)
                                                {
                                                    OPEN_SEQUENCE_TASK( ref l_U1213 );
                                                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3600() );
                                                    TASK_LOOK_AT_CHAR( 0, sub_3600(), 20000, 0 );
                                                    TASK_STAND_STILL( 0, 20000 );
                                                    CLOSE_SEQUENCE_TASK( l_U1213 );
                                                    TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1213 );
                                                    CLEAR_SEQUENCE_TASK( l_U1213 );
                                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "BUMP", 1, 1, 2 );
                                                }
                                            }
                                            else if (NOT (IS_PLAYER_CONTROL_ON( sub_2044() )))
                                            {
                                                CLEAR_CHAR_LAST_DAMAGE_ENTITY( iParam0->_fU24 );
                                            };;;
                                        }
                                        else if (iParam0->_fU4 == 14)
                                        {
                                            l_U1125 = 1;
                                            GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 17, ref l_U1212 );
                                            if (l_U1212 == 7)
                                            {
                                                TASK_SMART_FLEE_CHAR( iParam0->_fU24, sub_3600(), 200.00000000, -1 );
                                                SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                                            }
                                        }
                                        else
                                        {
                                            TASK_SMART_FLEE_CHAR( iParam0->_fU24, sub_3600(), 200.00000000, -1 );
                                            SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                                        }
                                    }
                                    else
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 26, ref l_U1212 );
                                        if (l_U1212 == 7)
                                        {
                                            TASK_WANDER_STANDARD( iParam0->_fU24 );
                                            if (NOT (iParam0->_fU4 == 12))
                                            {
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "BUMP", 1, 1, 2 );
                                            }
                                            else
                                            {
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "DANCING_GAME_FAIL", 1, 1, 2 );
                                            }
                                            TASK_LOOK_AT_CHAR( iParam0->_fU24, sub_3600(), 5000, 0 );
                                        }
                                    }
                                }
                                else if (iParam0->_fU4 == 14)
                                {
                                    GET_CHAR_COORDINATES( iParam0->_fU24, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                                    if (uVar4._fU8 > 10.50000000)
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 17, ref l_U1212 );
                                        if (l_U1212 == 7)
                                        {
                                            TASK_GO_STRAIGHT_TO_COORD( iParam0->_fU24, -472.13280000, 149.16770000, 9.86390000, 3, -2 );
                                        }
                                    }
                                }
                            }
                            if ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), iParam0->_fU24, 15.00000000, 15.00000000, 5.00000000, 0 ))))
                            {
                                if (l_U1088)
                                {
                                    PRINTSTRING( "CLUB_PED_REMOVED - called from UPDATE_CLUB_PED progress = 99" );
                                    PRINTNL();
                                }
                                sub_2299( iParam0, 1 );
                            }
                        }
                        else if (iParam0->_fU12 == -1)
                        {
                            CLEAR_CHAR_TASKS( iParam0->_fU24 );
                            iParam0->_fU12++;
                        }
                        switch (iParam0->_fU4)
                        {
                            case 8:
                            case 9:
                            if (iParam0->_fU4 == 9)
                            {
                                if (NOT (iParam0->_fU24 == g_U30210))
                                {
                                    if (IS_PLAYER_PLAYING( sub_2044() ))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), iParam0->_fU24, 40.00000000, 40.00000000, 40.00000000, 0 ))
                                        {
                                            g_U30210 = iParam0->_fU24;
                                        }
                                    }
                                }
                            }
                            if (NOT g_U30118)
                            {
                                switch (iParam0->_fU12)
                                {
                                    case 0:
                                    if (NOT g_U30093[l_U1149])
                                    {
                                        if (NOT (IS_PED_IN_COMBAT( iParam0->_fU24 )))
                                        {
                                            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 0.50000000, 0.50000000, 2.00000000, 0 )))
                                            {
                                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1212 );
                                                if (l_U1212 == 7)
                                                {
                                                    OPEN_SEQUENCE_TASK( ref l_U1213 );
                                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 2, -1, 0.50000000 );
                                                    TASK_ACHIEVE_HEADING( 0, iParam0->_fU40 );
                                                    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Bouncer", -1082130432 );
                                                    CLOSE_SEQUENCE_TASK( l_U1213 );
                                                    TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1213 );
                                                    l_U1154 += 3;
                                                    CLEAR_SEQUENCE_TASK( l_U1213 );
                                                    SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU24, iParam0->_fU28, 10.00000000 );
                                                }
                                            }
                                            else if (HAVE_ANIMS_LOADED( "misstony06" ))
                                            {
                                                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0->_fU24, "misstony06", "bouncer_greeting" )))
                                                {
                                                    GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1212 );
                                                    if (l_U1212 == 7)
                                                    {
                                                        OPEN_SEQUENCE_TASK( ref l_U1213 );
                                                        TASK_ACHIEVE_HEADING( 0, iParam0->_fU40 );
                                                        TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Bouncer", -1082130432 );
                                                        CLOSE_SEQUENCE_TASK( l_U1213 );
                                                        TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1213 );
                                                        l_U1154 += 2;
                                                        CLEAR_SEQUENCE_TASK( l_U1213 );
                                                        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU24, iParam0->_fU28, 10.00000000 );
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1212 );
                                                if (l_U1212 == 7)
                                                {
                                                    OPEN_SEQUENCE_TASK( ref l_U1213 );
                                                    TASK_ACHIEVE_HEADING( 0, iParam0->_fU40 );
                                                    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Bouncer", -1082130432 );
                                                    CLOSE_SEQUENCE_TASK( l_U1213 );
                                                    TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1213 );
                                                    l_U1154 += 2;
                                                    CLEAR_SEQUENCE_TASK( l_U1213 );
                                                    SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU24, iParam0->_fU28, 10.00000000 );
                                                }
                                            }
                                        }
                                        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( iParam0->_fU24, sub_3600(), 2.00000000, 2.00000000, 2.00000000, 0 ))
                                        {
                                            TASK_LOOK_AT_CHAR( iParam0->_fU24, sub_3600(), 2000, 0 );
                                        }
                                        else
                                        {
                                            TASK_CLEAR_LOOK_AT( iParam0->_fU24 );
                                        }
                                        if (NOT sub_31101())
                                        {
                                            if ((iParam0->_fU24 == l_U1190) || (iParam0->_fU24 == l_U1191))
                                            {
                                                CLEAR_CHAR_TASKS( iParam0->_fU24 );
                                                iParam0->_fU20 = 0;
                                                iParam0->_fU12 = 1;
                                            }
                                        }
                                    }
                                    else if ((iParam0->_fU24 == l_U1190) || (iParam0->_fU24 == l_U1191))
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 91, ref l_U1212 );
                                        if (l_U1212 == 7)
                                        {
                                            SET_CHAR_RELATIONSHIP( iParam0->_fU24, 5, 0 );
                                            TASK_COMBAT( iParam0->_fU24, sub_3600() );
                                        }
                                    }
                                    else if (iParam0->_fU4 == 9)
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 91, ref l_U1212 );
                                        if (l_U1212 == 7)
                                        {
                                            SET_CHAR_RELATIONSHIP( iParam0->_fU24, 5, 0 );
                                            TASK_COMBAT( iParam0->_fU24, sub_3600() );
                                        }
                                    };;;
                                    break;
                                    case 1:
                                    if (NOT sub_31101())
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1212 );
                                        if (l_U1212 == 7)
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U1213 );
                                            TASK_GOTO_CHAR_OFFSET( 0, sub_3600(), 60000, 1.50000000, 0 );
                                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3600() );
                                            CLOSE_SEQUENCE_TASK( l_U1213 );
                                            TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1213 );
                                            CLEAR_SEQUENCE_TASK( l_U1213 );
                                        }
                                        else
                                        {
                                            bVar7 = true;
                                        }
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( iParam0->_fU24, sub_3600(), 2.00000000, 2.00000000, 2.00000000, 0 ))
                                        {
                                            bVar7 = true;
                                        }
                                        if (bVar7)
                                        {
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "BOUNCER_POLITE_WARNING", 1, 1, 2 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - BOUNCER_POLITE_WARNING" );
                                            PRINTNL();
                                            iParam0->_fU20 = 0;
                                            iParam0->_fU12++;
                                        }
                                    }
                                    else
                                    {
                                        CLEAR_CHAR_TASKS( iParam0->_fU24 );
                                        iParam0->_fU12 = 0;
                                    }
                                    break;
                                    case 2:
                                    if ((NOT sub_31101()) AND (sub_3885( sub_3600(), l_U1149, 0 )))
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1212 );
                                        if (l_U1212 == 7)
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U1213 );
                                            TASK_GOTO_CHAR_OFFSET( 0, sub_3600(), 60000, 1.50000000, 0 );
                                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3600() );
                                            CLOSE_SEQUENCE_TASK( l_U1213 );
                                            TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1213 );
                                            CLEAR_SEQUENCE_TASK( l_U1213 );
                                        }
                                        if (iParam0->_fU20 > 7000)
                                        {
                                            g_U30093[l_U1149] = 1;
                                            PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - not put away weapon!" );
                                            PRINTNL();
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "BOUNCER_ARMED_EJECTION", 1, 1, 2 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - BOUNCER_ARMED_EJECTION" );
                                            PRINTNL();
                                            iParam0->_fU12 = 0;
                                        }
                                    }
                                    else
                                    {
                                        CLEAR_CHAR_TASKS( iParam0->_fU24 );
                                        iParam0->_fU12 = 0;
                                    }
                                    break;
                                }
                            }
                            break;
                            case 4:
                            case 6:
                            if (sub_54405( iParam0 ))
                            {
                                CLEAR_CHAR_TASKS( iParam0->_fU24 );
                                iParam0->_fU12 = 99;
                            }
                            else
                            {
                                switch (iParam0->_fU12)
                                {
                                    case 0:
                                    if (sub_51000())
                                    {
                                        sub_54551( iParam0 );
                                        if (NOT (iParam0->_fU16 == -1))
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U1213 );
                                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U1065[iParam0->_fU16]._fU0._fU0, l_U1065[iParam0->_fU16]._fU0._fU4, l_U1065[iParam0->_fU16]._fU0._fU8, 2, -2, 0.30000000 );
                                            if (NOT (sub_54874( iParam0->_fU16 )))
                                            {
                                                TASK_ACHIEVE_HEADING( 0, l_U1065[iParam0->_fU16]._fU12 );
                                            }
                                            if (sub_42176( l_U1065[iParam0->_fU16]._fU24 ))
                                            {
                                                if (IS_CHAR_MALE( iParam0->_fU24 ))
                                                {
                                                    TASK_START_SCENARIO_IN_PLACE( 0, l_U981[l_U1065[iParam0->_fU16]._fU24]._fU0, -1082130432 );
                                                }
                                                else
                                                {
                                                    TASK_PLAY_ANIM( 0, "female_idle", "missnightclub", 2.00000000, 0, 0, 0, 0, -1 );
                                                }
                                            }
                                            else if (NOT (sub_54874( iParam0->_fU16 )))
                                            {
                                                if (l_U1088)
                                                {
                                                    PRINTSTRING( "TASK_PLAY_ANIM - patrol" );
                                                    PRINTNL();
                                                }
                                                TASK_PLAY_ANIM( 0, l_U981[l_U1065[iParam0->_fU16]._fU24]._fU0, sub_48796( l_U1065[iParam0->_fU16]._fU24 ), 8.00000000, 0, 0, 0, 0, -1 );
                                            }
                                            CLOSE_SEQUENCE_TASK( l_U1213 );
                                            TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1213 );
                                            l_U1154 += 4;
                                            CLEAR_SEQUENCE_TASK( l_U1213 );
                                            iParam0->_fU20 = 0;
                                            iParam0->_fU12++;
                                        }
                                        else
                                        {
                                            PRINTSTRING( "Nightclub script - Patrol ped could not find free patrol point!" );
                                            PRINTNL();
                                        }
                                    }
                                    break;
                                    case 1:
                                    if (sub_51000())
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1212 );
                                        if ((l_U1212 == 7) || (iParam0->_fU20 > 30000))
                                        {
                                            if (NOT (iParam0->_fU16 == -1))
                                            {
                                                l_U1065[iParam0->_fU16]._fU20 = nil;
                                            }
                                            iParam0->_fU12 = 0;
                                        }
                                        else if (NOT (LOCATE_CHAR_ON_FOOT_3D( iParam0->_fU24, l_U1065[iParam0->_fU16]._fU0._fU0, l_U1065[iParam0->_fU16]._fU0._fU4, l_U1065[iParam0->_fU16]._fU0._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
                                        {
                                            iParam0->_fU20 = 0;
                                        }
                                    }
                                    else
                                    {
                                        CLEAR_CHAR_TASKS( iParam0->_fU24 );
                                        iParam0->_fU12 = 99;
                                    }
                                    break;
                                }
                            }
                            break;
                            case 10:
                            case 12:
                            if (sub_54405( iParam0 ))
                            {
                                iParam0->_fU12 = 99;
                            }
                            else if ((NOT (g_U30207 == iParam0->_fU24)) AND (NOT (g_U30205 == iParam0->_fU24)))
                            {
                                if (NOT (sub_55689( iParam0 )))
                                {
                                    sub_55900( iParam0 );
                                }
                                else
                                {
                                    GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 131, ref l_U1212 );
                                    if (l_U1212 == 7)
                                    {
                                        if (l_U1212 == 7)
                                        {
                                            if (iParam0->_fU56 == 0)
                                            {
                                                sub_56161( iParam0 );
                                            }
                                            else if (NOT (sub_22164( uVar14 )))
                                            {
                                                if (NOT (sub_22164( uVar13 )))
                                                {
                                                    if (sub_22153( uVar14 ))
                                                    {
                                                        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 1.00000000, ref uVar3 );
                                                        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 16, uVar3 );
                                                    }
                                                }
                                                else
                                                {
                                                    sub_56161( iParam0 );
                                                }
                                            }
                                            else
                                            {
                                                sub_56161( iParam0 );
                                            }
                                        }
                                    }
                                }
                            }
                            break;
                            default:
                            if ((sub_54405( iParam0 )) || (NOT (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))))
                            {
                                iParam0->_fU12 = 99;
                            }
                            else
                            {
                                switch (iParam0->_fU12)
                                {
                                    case 0:
                                    if (l_U1154 < 30)
                                    {
                                        if (NOT (sub_55689( iParam0 )))
                                        {
                                            sub_55900( iParam0 );
                                        }
                                        else if (sub_42176( iParam0->_fU56 ))
                                        {
                                            if (NOT (sub_22164( sVar15 )))
                                            {
                                                if (l_U1088)
                                                {
                                                    PRINTSTRING( "UPDATE_CLUB_PED - " );
                                                    if (l_U1097)
                                                    {
                                                        PRINTSTRING( "global club ped " );
                                                        PRINTINT( l_U1162 );
                                                    }
                                                    else
                                                    {
                                                        PRINTSTRING( "club ped " );
                                                        PRINTINT( l_U1162 );
                                                    }
                                                    PRINTSTRING( "given scenario " );
                                                    PRINTSTRING( sVar15 );
                                                    PRINTNL();
                                                }
                                                TASK_START_SCENARIO_IN_PLACE( iParam0->_fU24, sVar15, -1082130432 );
                                                l_U1154++;
                                                iParam0->_fU12++;
                                            }
                                        }
                                        else if (sub_50370( iParam0->_fU56 ))
                                        {
                                            if (sub_57008( (iParam0^) ))
                                            {
                                                if (NOT (sub_22164( uVar14 )))
                                                {
                                                    if (NOT (sub_22164( uVar13 )))
                                                    {
                                                        if (sub_22153( uVar14 ))
                                                        {
                                                            TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 192, 0.00000000 );
                                                            if (sub_57336( iParam0->_fU56 ))
                                                            {
                                                                sub_57398( iParam0->_fU24 );
                                                            }
                                                            l_U1154++;
                                                            iParam0->_fU12++;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        else if (sub_57565( iParam0->_fU56 ))
                                        {
                                            if (NOT (IS_CHAR_PLAYING_ANIM( iParam0->_fU24, uVar14, uVar13 )))
                                            {
                                                if (sub_44691( iParam0->_fU56, iParam0 + 56, iParam0->_fU56 ))
                                                {
                                                    uVar13 = l_U981[iParam0->_fU56]._fU0;
                                                    uVar14 = sub_48796( iParam0->_fU56 );
                                                    if (NOT (sub_22164( uVar14 )))
                                                    {
                                                        if (NOT (sub_22164( uVar13 )))
                                                        {
                                                            if (sub_22153( uVar14 ))
                                                            {
                                                                if (iParam0->_fU4 == 2)
                                                                {
                                                                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 144, 0.00000000 );
                                                                }
                                                                else
                                                                {
                                                                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 16, 0.00000000 );
                                                                }
                                                                l_U1154++;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        else if (NOT (sub_22164( uVar14 )))
                                        {
                                            if (NOT (sub_22164( uVar13 )))
                                            {
                                                if (sub_22153( uVar14 ))
                                                {
                                                    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 1.00000000, ref uVar3 );
                                                    if (iParam0->_fU4 == 2)
                                                    {
                                                        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 144, uVar3 );
                                                    }
                                                    else
                                                    {
                                                        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 16, uVar3 );
                                                    }
                                                    l_U1154++;
                                                    iParam0->_fU12++;
                                                    if (l_U1088)
                                                    {
                                                        PRINTSTRING( "UPDATE_CLUB_PED - " );
                                                        if (l_U1097)
                                                        {
                                                            PRINTSTRING( "global club ped " );
                                                            PRINTINT( l_U1162 );
                                                        }
                                                        else
                                                        {
                                                            PRINTSTRING( "club ped " );
                                                            PRINTINT( l_U1162 );
                                                        }
                                                        PRINTSTRING( "given TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE " );
                                                        PRINTSTRING( uVar13 );
                                                        PRINTSTRING( ", " );
                                                        PRINTSTRING( uVar14 );
                                                        PRINTSTRING( ", fTemp = " );
                                                        PRINTFLOAT( uVar3 );
                                                        PRINTNL();
                                                    }
                                                }
                                            }
                                        };;;;;
                                    }
                                    break;
                                    case 1:
                                    if (NOT (sub_22164( sVar15 )))
                                    {
                                        iParam0->_fU12++;
                                    }
                                    else if ((NOT (sub_22164( uVar13 ))) AND (NOT (sub_22164( uVar14 ))))
                                    {
                                        if (sub_50370( iParam0->_fU56 ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 131, ref l_U1212 );
                                            if (l_U1212 == 7)
                                            {
                                                if (sub_58386( iParam0->_fU56 ))
                                                {
                                                    sub_58469( iParam0->_fU24, 90000 );
                                                }
                                                iParam0->_fU12 = 99;
                                            }
                                        }
                                        else if (IS_CHAR_PLAYING_ANIM( iParam0->_fU24, uVar14, uVar13 ))
                                        {
                                            iParam0->_fU12++;
                                        }
                                    }
                                    break;
                                    case 2:
                                    bVar7 = false;
                                    GET_CHAR_COORDINATES( iParam0->_fU24, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                                    if (IS_PLAYER_PLAYING( sub_2044() ))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3600(), uVar4._fU0, uVar4._fU4, uVar4._fU8, l_U1128, l_U1128, 2.00000000, 0 ))
                                        {
                                            PRINTSTRING( "UPDATE_CLUB_PED - player collides with club ped - " );
                                            if (l_U1097)
                                            {
                                                PRINTSTRING( "global club ped " );
                                                PRINTINT( l_U1162 );
                                            }
                                            else
                                            {
                                                PRINTSTRING( "club ped " );
                                                PRINTINT( l_U1162 );
                                            }
                                            PRINTNL();
                                            bVar7 = true;
                                        }
                                    }
                                    if (sub_22164( sVar15 ))
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 71, ref l_U1212 );
                                        if (l_U1212 == 7)
                                        {
                                            GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 131, ref l_U1212 );
                                            if (l_U1212 == 7)
                                            {
                                                PRINTSTRING( "UPDATE_CLUB_PED - club ped finished playing anim task - " );
                                                if (l_U1097)
                                                {
                                                    PRINTSTRING( "global club ped " );
                                                    PRINTINT( l_U1162 );
                                                }
                                                else
                                                {
                                                    PRINTSTRING( "club ped " );
                                                    PRINTINT( l_U1162 );
                                                }
                                                PRINTNL();
                                                bVar7 = true;
                                            }
                                            if ((NOT (sub_22164( uVar13 ))) AND (NOT (sub_22164( uVar14 ))))
                                            {
                                                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0->_fU24, uVar14, uVar13 )))
                                                {
                                                    PRINTSTRING( "UPDATE_CLUB_PED - ped is not playing anim - " );
                                                    if (l_U1097)
                                                    {
                                                        PRINTSTRING( "global club ped " );
                                                        PRINTINT( l_U1162 );
                                                    }
                                                    else
                                                    {
                                                        PRINTSTRING( "club ped " );
                                                        PRINTINT( l_U1162 );
                                                    }
                                                    PRINTNL();
                                                    bVar7 = true;
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 114, ref l_U1212 );
                                        if (l_U1212 == 7)
                                        {
                                            if ((NOT (iParam0->_fU4 == 5)) AND (NOT (iParam0->_fU4 == 5)))
                                            {
                                                PRINTSTRING( "UPDATE_CLUB_PED - club ped finished playing scenario task" );
                                                if (l_U1097)
                                                {
                                                    PRINTSTRING( "global club ped " );
                                                    PRINTINT( l_U1162 );
                                                }
                                                else
                                                {
                                                    PRINTSTRING( "club ped " );
                                                    PRINTINT( l_U1162 );
                                                }
                                                PRINTNL();
                                                bVar7 = true;
                                            }
                                            else
                                            {
                                                TASK_START_SCENARIO_IN_PLACE( iParam0->_fU24, sVar15, -1082130432 );
                                            }
                                        }
                                    }
                                    if (bVar7)
                                    {
                                        if (NOT (iParam0->_fU24 == g_U30208))
                                        {
                                            iParam0->_fU12 = 99;
                                        }
                                    }
                                    else if (sub_22164( sVar15 ))
                                    {
                                        if (NOT (sub_22164( uVar13 )))
                                        {
                                            if (NOT (LOCATE_CHAR_ON_FOOT_3D( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 0.20000000, 0.20000000, 2.00000000, 0 )))
                                            {
                                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 71, ref l_U1212 );
                                                if (l_U1212 == 7)
                                                {
                                                    TASK_CHAR_SLIDE_TO_COORD_AND_PLAY_ANIM( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0->_fU40, 0.10000000, uVar13, uVar14, 4.00000000, 1, 0, 0, 0, -1 );
                                                }
                                            }
                                        }
                                    }
                                    break;
                                }
                            }
                            break;
                        };;;
                    }
                }
                else if (l_U1100)
                {
                    if (sub_3885( iParam0->_fU24, l_U1149, 0 ))
                    {
                        sub_37643( iParam0, 1 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                {
                    switch (iParam0->_fU4)
                    {
                        case 8:
                        case 9:
                        switch (iParam0->_fU12)
                        {
                            case 0:
                            if (g_U30093[l_U1149])
                            {
                                if (l_U1154 < 30)
                                {
                                    SET_CHAR_RELATIONSHIP( iParam0->_fU24, 5, 0 );
                                    TASK_COMBAT( iParam0->_fU24, sub_3600() );
                                    l_U1154++;
                                    SET_CHAR_KEEP_TASK( iParam0->_fU24, 1 );
                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "BOUNCER_ARMED_EJECTION", 1, 1, 2 );
                                    PRINTSTRING( "SAY_AMBIENT_SPEECH - BOUNCER_ARMED_EJECTION" );
                                    PRINTNL();
                                    iParam0->_fU12++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                            {
                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 91, ref l_U1212 );
                                if ((l_U1212 == 7) AND (l_U1154 < 30))
                                {
                                    SET_CHAR_RELATIONSHIP( iParam0->_fU24, 5, 0 );
                                    TASK_COMBAT( iParam0->_fU24, sub_3600() );
                                    l_U1154++;
                                    SET_CHAR_KEEP_TASK( iParam0->_fU24, 1 );
                                }
                            }
                            break;
                        }
                        break;
                        default:
                        switch (iParam0->_fU12)
                        {
                            case 99:
                            BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 0 );
                            if (sub_2999( iParam0->_fU56 ))
                            {
                                SET_CHAR_COLLISION( iParam0->_fU24, 1 );
                                FREEZE_CHAR_POSITION( iParam0->_fU24, 0 );
                            }
                            if (sub_3885( iParam0->_fU24, l_U1149, 0 ))
                            {
                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 25, ref l_U1212 );
                                if (l_U1212 == 7)
                                {
                                    if (l_U1154 < 30)
                                    {
                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar8 );
                                        switch (uVar8)
                                        {
                                            case 0:
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "GUN_RUN", 1, 1, 2 );
                                            break;
                                            case 1:
                                            SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                                            break;
                                            case 2:
                                            SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "HIGH_FALL", "PAIN_VOICE", 1, 1, 2 );
                                            break;
                                            case 3:
                                            SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC_SHORT", "PAIN_VOICE", 1, 1, 2 );
                                            break;
                                        }
                                        TASK_SMART_FLEE_CHAR( iParam0->_fU24, sub_3600(), 200.00000000, -1 );
                                        SET_CHAR_KEEP_TASK( iParam0->_fU24, 1 );
                                        l_U1154++;
                                    }
                                }
                            }
                            else
                            {
                                sub_2299( iParam0, 0 );
                            }
                            if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                            {
                                if ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), iParam0->_fU24, 15.00000000, 15.00000000, 5.00000000, 0 ))))
                                {
                                    if (l_U1088)
                                    {
                                        PRINTSTRING( "CLUB_PED_REMOVED - called from UPDATE_CLUB_PED progress (shooting)  = 99" );
                                        PRINTNL();
                                    }
                                    sub_2299( iParam0, 0 );
                                }
                            }
                            break;
                            default:
                            iParam0->_fU12 = 99;
                            break;
                        }
                        break;
                    }
                }
            }
            else if (iParam0->_fU4 == 14)
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( iParam0->_fU24, sub_3600(), 0 ))
                {
                    l_U1125 = 1;
                }
            }
            if (iParam0->_fU4 == 14)
            {
                if (DOES_OBJECT_EXIST( l_U1210 ))
                {
                    DELETE_OBJECT( ref l_U1210 );
                }
            }
            sub_46524( iParam0, 1 );
            iParam0->_fU12 = -1;;
        }
        else if (iParam0->_fU4 == 14)
        {
            l_U1125 = 1;
        }
        if (l_U1088)
        {
            PRINTSTRING( "CLUB_PED_REMOVED - called from UPDATE_CLUB_PED 3" );
            PRINTNL();
        }
        sub_2299( iParam0, 0 );;
    }
    sub_61558( iParam0 );
    return;
}

string sub_48796(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        return "missnightclub";
        break;
        case 15:
        case 16:
        case 17:
        return "";
        break;
    }
    switch (l_U1149)
    {
        case 1:
        switch (uParam0)
        {
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            case 46:
            case 47:
            case 48:
            case 49:
            case 50:
            case 51:
            case 52:
            case 53:
            case 54:
            case 55:
            case 56:
            return "missamb_m9";
            break;
        }
        break;
        case 0:
        switch (uParam0)
        {
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            return "missamb_bama";
            break;
        }
        break;
        case 2:
        switch (uParam0)
        {
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            return "missamb_herc_female";
            break;
            case 43:
            case 44:
            case 45:
            case 46:
            case 47:
            case 48:
            case 49:
            case 50:
            case 51:
            case 52:
            case 53:
            case 54:
            case 55:
            case 56:
            case 57:
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            case 66:
            case 67:
            case 68:
            case 69:
            case 70:
            case 71:
            case 72:
            case 73:
            case 74:
            case 75:
            case 76:
            case 77:
            case 78:
            case 79:
            case 80:
            case 81:
            case 82:
            return "missamb_herc_male";
            break;
        }
        break;
    }
    return "";
}

int sub_50312(int iParam0)
{
    if (iParam0->_fU12 == 99)
    {
        return 1;
    }
    if ((iParam0->_fU4 == 4) || (iParam0->_fU4 == 6))
    {
        return 1;
    }
    if (sub_50370( iParam0->_fU56 ))
    {
        return 1;
    }
    return 0;
}

int sub_50370(unknown uParam0)
{
    switch (uParam0)
    {
        case 4:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        return 1;
        break;
    }
    switch (l_U1149)
    {
        case 1:
        switch (uParam0)
        {
            case 20:
            case 21:
            case 22:
            case 23:
            case 47:
            return 1;
            break;
        }
        break;
        default:
    }
    return 0;
}

int sub_50782(int iParam0)
{
    if (iParam0->_fU0)
    {
        if (sub_39692( iParam0 ))
        {
            REQUEST_ANIMS( "missnightclub" );
            switch (iParam0->_fU4)
            {
                case 4:
                case 6:
                if (sub_50914( iParam0 ))
                {
                    if (sub_51000())
                    {
                        return 1;
                    }
                }
                break;
                case 10:
                case 12:
                if (sub_50914( iParam0 ))
                {
                    if (sub_33290())
                    {
                        return 1;
                    }
                }
                break;
                case 1:
                case 3:
                case 5:
                case 14:
                if (sub_50914( iParam0 ))
                {
                    return 1;
                }
                break;
                default:
                if (HAVE_ANIMS_LOADED( "missnightclub" ))
                {
                    return 1;
                }
                break;
            }
        }
    }
    return 0;
}

int sub_50914(int iParam0)
{
    unknown uVar3;

    uVar3 = sub_48796( iParam0->_fU56 );
    if (NOT (sub_22164( uVar3 )))
    {
        REQUEST_ANIMS( uVar3 );
        if (HAVE_ANIMS_LOADED( uVar3 ))
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_51000()
{
    int I;
    int Result;
    unknown uVar4;

    Result = 1;
    for ( I = 0; I < l_U1065; I++ )
    {
        uVar4 = sub_48796( l_U1065[I]._fU24 );
        if (NOT (sub_22164( uVar4 )))
        {
            REQUEST_ANIMS( uVar4 );
            if (NOT (HAVE_ANIMS_LOADED( uVar4 )))
            {
                Result = 0;
            }
        }
        if (NOT (HAVE_ANIMS_LOADED( "missnightclub" )))
        {
            REQUEST_ANIMS( "missnightclub" );
            Result = 0;
        }
    }
    return Result;
}

int sub_54405(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
    {
        if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( iParam0->_fU24, sub_3600(), 0 )) || (IS_PED_RAGDOLL( iParam0->_fU24 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_54551(int iParam0)
{
    int I;
    boolean bVar4;

    for ( I = 0; I < l_U1065; I++ )
    {
        if ((NOT (I == iParam0->_fU16)) AND (NOT (l_U1065[I]._fU20 == iParam0->_fU24)))
        {
            if (IS_CHAR_INJURED( l_U1065[I]._fU20 ))
            {
                l_U1065[I]._fU20 = nil;
            }
            if (l_U1065[I]._fU20 == nil)
            {
                bVar4 = true;
                if (l_U1065[I]._fU16 == 1)
                {
                    if (NOT (sub_28546( iParam0->_fU52 )))
                    {
                        bVar4 = false;
                    }
                }
                if (bVar4)
                {
                    l_U1065[I]._fU20 = iParam0->_fU24;
                    iParam0->_fU16 = I;
                    return;
                }
            }
        }
        else
        {
            iParam0->_fU16 = -1;
            l_U1065[I]._fU20 = nil;
        }
    }
    return;
}

int sub_54874(unknown uParam0)
{
    if (NOT (sub_42176( l_U1065[uParam0]._fU24 )))
    {
        if ((sub_22164( l_U981[l_U1065[uParam0]._fU24]._fU0 )) || (sub_22164( sub_48796( l_U1065[uParam0]._fU24 ) )))
        {
            return 1;
        }
    }
    return 0;
}

int sub_55689(int iParam0)
{
    unknown uVar3;
    float fVar4;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
    {
        if (LOCATE_CHAR_ON_FOOT_3D( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 0.50000000, 0.50000000, 2.00000000, 0 ))
        {
            GET_CHAR_HEADING( iParam0->_fU24, ref uVar3 );
            fVar4 = iParam0->_fU40 - uVar3;
            if (fVar4 < -180.00000000)
            {
                fVar4 += 360.00000000;
            }
            if (fVar4 > 180.00000000)
            {
                fVar4 -= 360.00000000;
            }
            if (fVar4 < 0.00000000)
            {
                fVar4 *= -1.00000000;
            }
            if (fVar4 < 15.00000000)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_55900(int iParam0)
{
    GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1212 );
    if (l_U1212 == 7)
    {
        OPEN_SEQUENCE_TASK( ref l_U1213 );
        TASK_GO_STRAIGHT_TO_COORD( 0, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 2, -2 );
        TASK_CHAR_SLIDE_TO_COORD( 0, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0->_fU40, 1061158912 );
        TASK_ACHIEVE_HEADING( 0, iParam0->_fU40 );
        CLOSE_SEQUENCE_TASK( l_U1213 );
        TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U1213 );
        l_U1154 += 3;
        CLEAR_SEQUENCE_TASK( l_U1213 );
    }
    return;
}

void sub_56161(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    switch (l_U1149)
    {
        case 1:
        if (sub_28546( iParam0->_fU52 ))
        {
            sub_44691( 25, ref uVar4, -1 );
        }
        else
        {
            sub_44691( 48, ref uVar4, -1 );
        }
        break;
        case 0:
        if (sub_28546( iParam0->_fU52 ))
        {
            sub_44691( 20, ref uVar4, -1 );
        }
        else
        {
            sub_44691( 21, ref uVar4, -1 );
        }
        break;
        case 2:
        if (sub_28546( iParam0->_fU52 ))
        {
            sub_44691( 18, ref uVar4, -1 );
        }
        else
        {
            sub_44691( 53, ref uVar4, -1 );
        }
        break;
    }
    uVar5 = sub_48796( uVar4 );
    uVar6 = l_U981[uVar4]._fU0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
    {
        if (NOT (sub_22164( uVar5 )))
        {
            if (NOT (sub_22164( uVar6 )))
            {
                if (sub_22153( uVar5 ))
                {
                    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 1.00000000, ref uVar7 );
                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar6, uVar5, 4.00000000, -1, 16, uVar7 );
                }
            }
        }
    }
    return;
}

int sub_57008(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14)
{
    if (NOT (IS_CHAR_INJURED( uParam0._fU24 )))
    {
        if (NOT (sub_3885( uParam0._fU24, l_U1149, 0 )))
        {
            if (IS_CHAR_ON_SCREEN( uParam0._fU24 ))
            {
                if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), uParam0._fU24, 60.00000000, 60.00000000, 60.00000000, 0 )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2044(), uParam0._fU24 )))
                {
                    return 1;
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), uParam0._fU24, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                return 1;
            }
        }
        else if (sub_3885( sub_3600(), l_U1149, 0 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), uParam0._fU24, 5.00000000, 5.00000000, 5.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_57336(unknown uParam0)
{
    switch (uParam0)
    {
        case 4:
        case 10:
        return 1;
        break;
    }
    return 0;
}

void sub_57398(unknown uParam0)
{
    int I;
    boolean bVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        for ( I = 0; I < l_U1073; I++ )
        {
            if (NOT bVar4)
            {
                if (NOT (DOES_CHAR_EXIST( l_U1073[I]._fU0 )))
                {
                    l_U1073[I]._fU0 = uParam0;
                    l_U1073[I]._fU4 = -1;
                    l_U1073[I]._fU8 = 0;
                    bVar4 = true;
                }
            }
        }
    }
    return;
}

int sub_57565(unknown uParam0)
{
    if (l_U1149 == 2)
    {
        switch (uParam0)
        {
            case 44:
            case 48:
            case 49:
            return 1;
            break;
        }
    }
    return 0;
}

int sub_58386(unknown uParam0)
{
    switch (uParam0)
    {
        case 4:
        case 10:
        case 11:
        case 12:
        return 1;
        break;
    }
    return 0;
}

int sub_58469(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    if (iParam0 == nil)
    {
        return 0;
    }
    if (NOT (DOES_CHAR_EXIST( iParam0 )))
    {
        return 0;
    }
    iVar4 = sub_58513( iParam0 );
    if (NOT (iVar4 == -1))
    {
        return 1;
    }
    iVar5 = sub_58622( iParam0 );
    if (NOT (iVar5 == -1))
    {
        return 1;
    }
    if ((iParam1 == 0) || (iParam1 < 0))
    {
        SCRIPT_ASSERT( "Attempt to Make_Ped_Drunk but ragdoll msec requested is NOT_DRUNK or a negative value" );
        return 0;
    }
    iVar6 = sub_58819();
    if (iVar6 == -1)
    {
        PRINTSTRING( "\n\n\nAll drunk request slots are full - Need to increase MAX_NUMBER_OF_DRUNK_REQUESTS\n\n" );
        return 0;
    }
    g_U9074[iVar6]._fU0 = 0;
    g_U9074[iVar6]._fU4 = iParam0;
    g_U9074[iVar6]._fU8 = iParam1;
    g_U9074[iVar6]._fU12 = iParam1;
    g_U9074[iVar6]._fU16 = nil;
    g_U9074[iVar6]._fU20 = nil;
    if (iParam0 == sub_3600())
    {
        g_U9199 = 1;
    }
    return 1;
}

int sub_58513(int iParam0)
{
    int I;

    if (iParam0 == nil)
    {
        return -1;
    }
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (iParam0 == g_U9105[I]._fU4)
        {
            return g_U9105[I]._fU0;
        }
    }
    return -1;
}

int sub_58622(int iParam0)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (g_U9074[Result]._fU4 == iParam0)
        {
            return Result;
        }
    }
    return -1;
}

int sub_58819()
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (g_U9074[Result]._fU0 == 16)
        {
            return Result;
        }
    }
    return -1;
}

void sub_61558(int iParam0)
{
    boolean bVar3;
    boolean bVar4;
    int iVar5;
    unknown uVar6;

    if (DOES_CHAR_EXIST( iParam0->_fU24 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
        {
            if (sub_46583( iParam0->_fU56 ))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 1 );
            }
            if (NOT (IS_AMBIENT_SPEECH_PLAYING( iParam0->_fU24 )))
            {
                if (NOT (sub_2330( iParam0->_fU24 )))
                {
                    if (sub_22164( sub_48796( iParam0->_fU56 ) ))
                    {
                        uVar6 = l_U981[iParam0->_fU56]._fU0;
                    }
                    if (NOT l_U1086)
                    {
                        if (iParam0->_fU20 > 10000)
                        {
                            switch (iParam0->_fU4)
                            {
                                case 9:
                                if (NOT (g_U30192[l_U1149] == 2))
                                {
                                    if (l_U1170 > 30000)
                                    {
                                        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( iParam0->_fU24, sub_3600(), 1.50000000, 1.50000000, 2.00000000, 0 ))
                                        {
                                            if (NOT sub_24185())
                                            {
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "GREET_LUIS", 1, 1, 0 );
                                                PRINTSTRING( "SAY_AMBIENT_SPEECH - GREET_LUIS" );
                                                PRINTNL();
                                                l_U1170 = 0;
                                                iParam0->_fU20 = 0;
                                            }
                                        }
                                    }
                                }
                                else if (l_U1170 > 30000)
                                {
                                    if (LOCATE_CHAR_ON_FOOT_CHAR_3D( iParam0->_fU24, sub_3600(), 1.50000000, 1.50000000, 2.00000000, 0 ))
                                    {
                                        if (NOT sub_24185())
                                        {
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "NIGHTCLUB_REFUSE_ENTRY", 1, 0, 0 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - NIGHTCLUB_REFUSE_ENTRY 1" );
                                            PRINTNL();
                                            l_U1170 = 0;
                                            iParam0->_fU20 = 0;
                                        }
                                    }
                                }
                                if (l_U1110)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1195 )))
                                    {
                                        if ((NOT (IS_AMBIENT_SPEECH_PLAYING( l_U1195 ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( iParam0->_fU24 ))))
                                        {
                                            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar5 );
                                            switch (iVar5)
                                            {
                                                case 0:
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "NIGHTCLUB_REFUSE_ENTRY", 1, 0, 0 );
                                                PRINTSTRING( "SAY_AMBIENT_SPEECH - NIGHTCLUB_REFUSE_ENTRY 2" );
                                                PRINTNL();
                                                break;
                                                case 1:
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "BOUNCER_AGGRESSIVE_NO", 1, 0, 0 );
                                                PRINTSTRING( "SAY_AMBIENT_SPEECH - BOUNCER_AGGRESSIVE_NO" );
                                                PRINTNL();
                                                break;
                                                case 2:
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "BOUNCER_DISMISSIVE_NO", 1, 0, 0 );
                                                PRINTSTRING( "SAY_AMBIENT_SPEECH - BOUNCER_DISMISSIVE_NO" );
                                                PRINTNL();
                                                break;
                                            }
                                            TASK_LOOK_AT_CHAR( iParam0->_fU24, l_U1195, 3000, 0 );
                                            l_U1110 = 0;
                                        }
                                    }
                                }
                                break;
                                case 1:
                                case 7:
                                case 3:
                                case 4:
                                case 6:
                                bVar3 = true;
                                if (DOES_CHAR_EXIST( l_U1193 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1193 )))
                                    {
                                        if ((IS_AMBIENT_SPEECH_PLAYING( l_U1193 )) || (l_U1193 == iParam0->_fU24))
                                        {
                                            bVar3 = false;
                                        }
                                    }
                                }
                                if (l_U1149 == 2)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU24, -438.89600000, 349.11720000, 10.71170000, 0.50000000, 0.50000000, 2.00000000, 0 ))
                                    {
                                        bVar4 = true;
                                    }
                                }
                                if (l_U1149 == 0)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU24, -438.89600000, 349.11720000, 10.71170000, 0.50000000, 0.50000000, 2.00000000, 0 ))
                                    {
                                        bVar4 = true;
                                    }
                                }
                                if (NOT bVar4)
                                {
                                    if (bVar3)
                                    {
                                        if (NOT l_U1111)
                                        {
                                            if (((l_U1172 > 6000) AND (iParam0->_fU20 > 20000)) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), iParam0->_fU24, 2.00000000, 2.00000000, 2.00000000, 0 )))
                                            {
                                                GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref iVar5 );
                                                if (iVar5 < 2)
                                                {
                                                    if ((sub_62930( iParam0->_fU24 )) || (l_U1149 == 0))
                                                    {
                                                        l_U1193 = iParam0->_fU24;
                                                        SAY_AMBIENT_SPEECH( iParam0->_fU24, "NOT_BEING_SERVED", 1, 1, 2 );
                                                        PRINTSTRING( "SAY_AMBIENT_SPEECH - NOT_BEING_SERVED" );
                                                        PRINTNL();
                                                        iParam0->_fU20 = 0;
                                                        l_U1172 = 0;
                                                    }
                                                    else if (sub_28546( iParam0->_fU52 ))
                                                    {
                                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar5 );
                                                        switch (iVar5)
                                                        {
                                                            case 0:
                                                            l_U1193 = iParam0->_fU24;
                                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "COMMENT_ON_LUIS", 1, 1, 2 );
                                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - COMMENT_ON_LUIS" );
                                                            PRINTNL();
                                                            iParam0->_fU20 = 0;
                                                            l_U1172 = 0;
                                                            break;
                                                            case 1:
                                                            l_U1193 = iParam0->_fU24;
                                                            SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "GIGGLE", "PAIN_VOICE", 1, 1, 2 );
                                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - GIGGLE" );
                                                            PRINTNL();
                                                            iParam0->_fU20 = 0;
                                                            l_U1172 = 0;
                                                            break;
                                                        }
                                                        TASK_LOOK_AT_CHAR( iParam0->_fU24, sub_3600(), 5000, 0 );
                                                    }
                                                    else
                                                    {
                                                        l_U1193 = iParam0->_fU24;
                                                        SAY_AMBIENT_SPEECH( iParam0->_fU24, "CONV_DANCEFLOOR_STATE", 1, 1, 2 );
                                                        PRINTSTRING( "SAY_AMBIENT_SPEECH - CONV_DANCEFLOOR_STATE" );
                                                        PRINTNL();
                                                        iParam0->_fU20 = 0;
                                                        l_U1172 = 0;
                                                        l_U1111 = 1;
                                                    }
                                                }
                                                else if ((sub_63773( iParam0->_fU24 )) AND (l_U1177 > 20000))
                                                {
                                                    l_U1193 = iParam0->_fU24;
                                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "EXCITED_CHEER", 1, 1, 2 );
                                                    PRINTSTRING( "SAY_AMBIENT_SPEECH - EXCITED_CHEER" );
                                                    PRINTNL();
                                                    l_U1177 = 0;
                                                    l_U1172 = 0;
                                                }
                                                else
                                                {
                                                    l_U1193 = iParam0->_fU24;
                                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "CONV_DANCEFLOOR_STATE", 1, 1, 2 );
                                                    PRINTSTRING( "SAY_AMBIENT_SPEECH - CONV_DANCEFLOOR_STATE" );
                                                    PRINTNL();
                                                    iParam0->_fU20 = 0;
                                                    l_U1172 = 0;
                                                    l_U1111 = 1;
                                                }
                                            }
                                        }
                                        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), iParam0->_fU24, 3.00000000, 3.00000000, 2.00000000, 0 ))
                                        {
                                            l_U1193 = iParam0->_fU24;
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "CONV_DANCEFLOOR_RESP", 1, 1, 2 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - CONV_DANCEFLOOR_RESP" );
                                            PRINTNL();
                                            iParam0->_fU20 = 0;
                                            l_U1111 = 0;
                                        }
                                    }
                                }
                                else if ((l_U1172 > 5000) AND (iParam0->_fU20 > 5000))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), iParam0->_fU24, 2.00000000, 2.00000000, 2.00000000, 0 ))
                                    {
                                        l_U1193 = iParam0->_fU24;
                                        SAY_AMBIENT_SPEECH( iParam0->_fU24, "ATTENDANT_NO_TICKET", 1, 1, 2 );
                                        PRINTSTRING( "SAY_AMBIENT_SPEECH - ATTENDANT_NO_TICKET" );
                                        PRINTNL();
                                        iParam0->_fU20 = 0;
                                    }
                                }
                                break;
                                case 5:
                                if (iParam0->_fU48 == l_U1207)
                                {
                                    if (l_U1174 > 300000)
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), iParam0->_fU24, 1.50000000, 1.50000000, 2.00000000, 0 ))
                                        {
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "OFFER_COLOGNE", 1, 1, 2 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - OFFER_COLOGNE" );
                                            PRINTNL();
                                            TASK_LOOK_AT_CHAR( iParam0->_fU24, sub_3600(), 10000, 0 );
                                            l_U1174 = 0;
                                        }
                                    }
                                }
                                break;
                                case 14:
                                if (iParam0->_fU48 == -882058861)
                                {
                                    if (l_U1174 > 300000)
                                    {
                                        if (IS_CHAR_IN_AREA_3D( sub_3600(), -474.83110000, 144.02730000, 5.00000000, -470.93110000, 150.60230000, 11.86380000, 0 ))
                                        {
                                            if (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))
                                            {
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "GENERIC_HI", 1, 1, 2 );
                                                PRINTSTRING( "SAY_AMBIENT_SPEECH - joni says hi" );
                                                PRINTNL();
                                                TASK_LOOK_AT_CHAR( iParam0->_fU24, sub_3600(), 25000, 0 );
                                                l_U1174 = 0;
                                            }
                                        }
                                    }
                                }
                                break;
                                case 2:
                                bVar3 = true;
                                if (DOES_CHAR_EXIST( l_U1194 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1194 )))
                                    {
                                        if ((IS_AMBIENT_SPEECH_PLAYING( l_U1194 )) || (l_U1194 == iParam0->_fU24))
                                        {
                                            bVar3 = false;
                                        }
                                    }
                                }
                                if (bVar3)
                                {
                                    if (NOT (sub_22164( uVar6 )))
                                    {
                                        if (COMPARE_STRING( uVar6, "Scenario_SmokingOutsideOffice" ))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), iParam0->_fU24, 4.00000000, 4.00000000, 2.00000000, 0 ))
                                            {
                                                if (NOT l_U1109)
                                                {
                                                    if (l_U1173 > 300000)
                                                    {
                                                        l_U1194 = iParam0->_fU24;
                                                        SAY_AMBIENT_SPEECH( iParam0->_fU24, "CONV_SMOKE_STATE", 1, 0, 0 );
                                                        PRINTSTRING( "SAY_AMBIENT_SPEECH - CONV_SMOKE_STATE" );
                                                        PRINTNL();
                                                        iParam0->_fU20 = 0;
                                                        l_U1109 = 1;
                                                        l_U1173 = 0;
                                                    }
                                                }
                                                else
                                                {
                                                    l_U1194 = iParam0->_fU24;
                                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "CONV_SMOKE_RESP", 1, 0, 0 );
                                                    PRINTSTRING( "SAY_AMBIENT_SPEECH - CONV_SMOKE_RESP" );
                                                    PRINTNL();
                                                    iParam0->_fU20 = 0;
                                                    l_U1109 = 0;
                                                }
                                            }
                                        }
                                    }
                                }
                                break;
                                case 13:
                                if (iParam0->_fU20 > 20000)
                                {
                                    if (NOT l_U1110)
                                    {
                                        if (NOT (IS_CHAR_INJURED( g_U30210 )))
                                        {
                                            TASK_LOOK_AT_CHAR( iParam0->_fU24, g_U30210, 3000, 0 );
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "NIGHTCLUB_REFUSE_PLEAD", 1, 0, 0 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - NIGHTCLUB_REFUSE_PLEAD" );
                                            PRINTNL();
                                            l_U1195 = iParam0->_fU24;
                                            l_U1110 = 1;
                                            iParam0->_fU20 = 0;
                                        }
                                    }
                                }
                                break;
                            }
                        }
                    }
                    else
                    {
                        switch (iParam0->_fU4)
                        {
                            case 1:
                            case 7:
                            case 3:
                            case 4:
                            case 6:
                            case 10:
                            case 12:
                            if (iParam0->_fU20 > 3000)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iVar5 );
                                switch (iVar5)
                                {
                                    case 0:
                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "GUN_RUN", 1, 1, 2 );
                                    break;
                                    case 1:
                                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                                    break;
                                    case 2:
                                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "HIGH_FALL", "PAIN_VOICE", 1, 1, 2 );
                                    break;
                                    case 3:
                                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC_SHORT", "PAIN_VOICE", 1, 1, 2 );
                                    break;
                                }
                                iParam0->_fU20 = 0;
                            }
                            break;
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_62930(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (l_U1149)
        {
            case 0:
            if ((IS_CHAR_IN_AREA_3D( uParam0, -399.23300000, 404.80890000, 3.59930000, -391.15800000, 411.48390000, 7.67430000, 0 )) || (IS_CHAR_IN_AREA_3D( uParam0, -398.35210000, 436.67440000, 4.69930000, -386.22710000, 438.67440000, 8.17430000, 0 )))
            {
                return 1;
            }
            break;
            case 2:
            if (IS_CHAR_IN_AREA_3D( uParam0, -437.19730000, 352.37860000, 10.19170000, -430.17230000, 355.72860000, 13.71660000, 0 ))
            {
                return 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_AREA_3D( uParam0, -486.86260000, 156.69480000, 6.05520000, -480.53760000, 158.54480000, 9.55520000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

int sub_63773(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_AREA_3D( uParam0, l_U126._fU28._fU0, l_U126._fU28._fU4, l_U126._fU28._fU8, l_U126._fU40._fU0, l_U126._fU40._fU4, l_U126._fU40._fU8, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_66502()
{
    int I;

    for ( I = 0; I < l_U1073; I++ )
    {
        sub_66535( ref l_U1073[I] );
    }
    return;
}

void sub_66535(int iParam0)
{
    int iVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        iVar3 = 0;
        if (IS_CHAR_PLAYING_ANIM( iParam0->_fU0, "missnightclub", "MALE_puke" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( iParam0->_fU0, "missnightclub", "MALE_puke", ref uVar4 );
            iVar3 = 1;
        }
        else if (IS_CHAR_PLAYING_ANIM( iParam0->_fU0, "missnightclub", "female_puke" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( iParam0->_fU0, "missnightclub", "female_puke", ref uVar4 );
            iVar3 = 2;
        }
        if (iVar3 > 0)
        {
            if (sub_66765( iVar3, uVar4 ))
            {
                if (NOT iParam0->_fU8)
                {
                    iParam0->_fU4 = START_PTFX_ON_PED_BONE( "drink_champagne_vomit", iParam0->_fU0, l_U1281, l_U1284, 1205, 1.00000000 );
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU0, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                    iParam0->_fU8 = 1;
                }
            }
            else if (iParam0->_fU8)
            {
                STOP_PTFX( iParam0->_fU4 );
                iParam0->_fU8 = 0;
            }
        }
        else if (iParam0->_fU8)
        {
            STOP_PTFX( iParam0->_fU4 );
            iParam0->_fU8 = 0;
        }
    }
    else if (iParam0->_fU0 != nil)
    {
        if (iParam0->_fU8)
        {
            STOP_PTFX( iParam0->_fU4 );
        }
        iParam0->_fU0 = nil;
        iParam0->_fU8 = 0;
        iParam0->_fU4 = -1;
    }
    return;
}

int sub_66765(int iParam0, float fParam1)
{
    if (NOT g_U30166)
    {
        if (iParam0 == 1)
        {
            if (((((fParam1 >= 0.24000000) AND (fParam1 <= 0.30000000)) || ((fParam1 >= 0.41000000) AND (fParam1 <= 0.44000000))) || ((fParam1 >= 0.77000000) AND (fParam1 <= 0.81000000))) || ((fParam1 >= 0.85000000) AND (fParam1 <= 0.87000000)))
            {
                return 1;
            }
            return 0;
        }
        else if (iParam0 == 2)
        {
            if ((((fParam1 >= 0.25000000) AND (fParam1 <= 0.26000000)) || ((fParam1 >= 0.54000000) AND (fParam1 <= 0.56000000))) || ((fParam1 >= 0.71000000) AND (fParam1 <= 0.74000000)))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_67409(unknown uParam0)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if (((((((((uParam0^)[I]._fU4 == 8) || ((uParam0^)[I]._fU4 == 9)) || ((uParam0^)[I]._fU4 == 2)) || ((uParam0^)[I]._fU4 == 13)) || ((uParam0^)[I]._fU4 == 6)) || ((uParam0^)[I]._fU4 == 7)) || ((uParam0^)[I]._fU4 == 5)) || ((uParam0^)[I]._fU4 == 14))
        {
            (uParam0^)[I]._fU0 = 0;
        }
        if (NOT (l_U139[I]._fU24 == g_U30208))
        {
            if (DOES_CHAR_EXIST( (uParam0^)[I]._fU24 ))
            {
                sub_2299( ref (uParam0^)[I], 1 );
                (uParam0^)[I]._fU8 = 0;
                (uParam0^)[I]._fU12 = 0;
            }
        }
    }
    return;
}

int sub_68423(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        sub_68443( uParam0, 0 );
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

void sub_68443(unknown uParam0, boolean bParam1)
{
    sub_68454( uParam0 );
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

void sub_68454(unknown uParam0)
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

void sub_70702()
{
    unknown uVar2;

    if (NOT l_U1094)
    {
        sub_70726( ref l_U920 );
        sub_70726( ref l_U139 );
        sub_70954();
        l_U1094 = 1;
    }
    return;
}

void sub_70726(unknown uParam0)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if ((uParam0^)[I]._fU0)
        {
            if (NOT ((uParam0^)[I]._fU48 == 0))
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( (uParam0^)[I]._fU48 );
            }
        }
        if (l_U1088)
        {
            PRINTSTRING( "REMOVE_CLUB_PED - called from REMOVE_ALL_CLUB_PEDS_AND_UNLOAD_ASSETS_FROM_CLUBPED_ARRAY" );
            PRINTNL();
        }
        sub_37643( ref (uParam0^)[I], 1 );
    }
    return;
}

void sub_70954()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < l_U1065; I++ )
    {
        uVar3 = sub_48796( l_U1065[I]._fU24 );
        if (NOT (sub_22164( uVar3 )))
        {
            REMOVE_ANIMS( uVar3 );
        }
    }
    return;
}

void sub_71309()
{
    int I;
    int iVar3;

    OPEN_DEBUG_FILE();
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "// *********************************************************************************************" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    switch (l_U1149)
    {
        case 0:
        SAVE_STRING_TO_DEBUG_FILE( "//    BAHAMA MAMAS CLUB DETAILS" );
        break;
        case 2:
        SAVE_STRING_TO_DEBUG_FILE( "//    HERCULES CLUB DETAILS" );
        break;
        case 1:
        SAVE_STRING_TO_DEBUG_FILE( "//    MAISONETTE 9 CLUB DETAILS" );
        break;
    }
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "// *********************************************************************************************" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "// club peds " );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    for ( I = 0; I < l_U139; I++ )
    {
        if (l_U139[I]._fU0)
        {
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].bIsActive = TRUE" );
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].iModel = " );
            switch (l_U139[I]._fU52)
            {
                case 0:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_CUSTOM" );
                SAVE_NEWLINE_TO_DEBUG_FILE();
                SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
                SAVE_INT_TO_DEBUG_FILE( iVar3 );
                SAVE_STRING_TO_DEBUG_FILE( "].ModelName = //  this needs to be filled out manually " );
                break;
                case 1:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_RANDOM_FEMALE" );
                break;
                case 2:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_RANDOM_MALE" );
                break;
                case 3:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_FEMALE_1" );
                break;
                case 4:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_FEMALE_2" );
                break;
                case 5:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_MALE_1" );
                break;
                case 6:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_MALE_2" );
                break;
                case 7:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_BAR_STAFF" );
                break;
                case 8:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_BOUNCER" );
                break;
                case 9:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_DESSIE" );
                break;
                case 10:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_TROY" );
                break;
                case 11:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_BATHROOM_ATTENDANT" );
                break;
            }
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].iType = " );
            switch (l_U139[I]._fU4)
            {
                case 1:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_INTERIOR_CROWD" );
                break;
                case 2:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_EXTERIOR_CROWD" );
                break;
                case 13:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_REFUSED_ENTRY" );
                break;
                case 3:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_BOTH_CROWD" );
                break;
                case 4:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_INTERIOR_PATROL" );
                break;
                case 5:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_INTERIOR_STAFF" );
                break;
                case 14:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_JONI" );
                break;
                case 6:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_BOTH_PATROL" );
                break;
                case 7:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_STAIRWELL_PED" );
                break;
                case 8:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_INTERIOR_BOUNCER" );
                break;
                case 9:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_EXTERIOR_BOUNCER" );
                break;
                case 10:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_INTERIOR_DANCER" );
                break;
                case 11:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_EXTERIOR_ONLOOKER" );
                break;
                case 12:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_SPECIFIC_DANCER" );
                break;
            }
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].iClubAnim = CLUB_ANIM_" );
            if (l_U139[I]._fU56 > 17)
            {
                switch (l_U1149)
                {
                    case 0:
                    SAVE_STRING_TO_DEBUG_FILE( "BM_" );
                    break;
                    case 2:
                    if (l_U139[I]._fU56 < 43)
                    {
                        SAVE_STRING_TO_DEBUG_FILE( "HERC_FEMALE_" );
                    }
                    else
                    {
                        SAVE_STRING_TO_DEBUG_FILE( "HERC_MALE_" );
                    }
                    break;
                    case 1:
                    SAVE_STRING_TO_DEBUG_FILE( "M9_" );
                    break;
                }
            }
            if (NOT (sub_22164( l_U981[l_U139[I]._fU56]._fU0 )))
            {
                SAVE_STRING_TO_DEBUG_FILE( l_U981[l_U139[I]._fU56]._fU0 );
            }
            else
            {
                PRINTSTRING( "iClubAnim = " );
                PRINTINT( l_U139[I]._fU56 );
                PRINTNL();
                SCRIPT_ASSERT( "club anim strname is null!" );
            }
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].pos = <<" );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U139[I]._fU28._fU0 );
            SAVE_STRING_TO_DEBUG_FILE( ", " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U139[I]._fU28._fU4 );
            SAVE_STRING_TO_DEBUG_FILE( ", " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U139[I]._fU28._fU8 );
            SAVE_STRING_TO_DEBUG_FILE( ">>" );
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].fHeading = " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U139[I]._fU40 );
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_NEWLINE_TO_DEBUG_FILE();
            iVar3++;
        }
    }
    SAVE_NEWLINE_TO_DEBUG_FILE();
    iVar3 = 0;
    SAVE_STRING_TO_DEBUG_FILE( "// patrol points" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    for ( I = 0; I < l_U1065; I++ )
    {
        SAVE_STRING_TO_DEBUG_FILE( "PatrolPoints[" );
        SAVE_INT_TO_DEBUG_FILE( iVar3 );
        SAVE_STRING_TO_DEBUG_FILE( "].pos = <<" );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U1065[I]._fU0._fU0 );
        SAVE_STRING_TO_DEBUG_FILE( ", " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U1065[I]._fU0._fU4 );
        SAVE_STRING_TO_DEBUG_FILE( ", " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U1065[I]._fU0._fU8 );
        SAVE_STRING_TO_DEBUG_FILE( ">>" );
        SAVE_NEWLINE_TO_DEBUG_FILE();
        SAVE_STRING_TO_DEBUG_FILE( "PatrolPoints[" );
        SAVE_INT_TO_DEBUG_FILE( iVar3 );
        SAVE_STRING_TO_DEBUG_FILE( "].heading = " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U1065[I]._fU12 );
        SAVE_NEWLINE_TO_DEBUG_FILE();
        SAVE_STRING_TO_DEBUG_FILE( "PatrolPoints[" );
        SAVE_INT_TO_DEBUG_FILE( iVar3 );
        SAVE_STRING_TO_DEBUG_FILE( "].iClubAnim = CLUB_ANIM_" );
        if (l_U1065[I]._fU24 > 17)
        {
            if ((l_U1149 == 0) || (l_U1149 == 1))
            {
                SAVE_STRING_TO_DEBUG_FILE( "M9_" );
            }
            else if (l_U1065[I]._fU24 < 43)
            {
                SAVE_STRING_TO_DEBUG_FILE( "HERC_FEMALE_" );
            }
            else
            {
                SAVE_STRING_TO_DEBUG_FILE( "HERC_MALE_" );
            }
        }
        SAVE_STRING_TO_DEBUG_FILE( l_U981[l_U1065[I]._fU24]._fU0 );
        SAVE_NEWLINE_TO_DEBUG_FILE();
        SAVE_STRING_TO_DEBUG_FILE( "PatrolPoints[" );
        SAVE_INT_TO_DEBUG_FILE( iVar3 );
        SAVE_STRING_TO_DEBUG_FILE( "].iType = " );
        switch (l_U1065[I]._fU16)
        {
            case 0:
            SAVE_STRING_TO_DEBUG_FILE( "PATROL_POINT_TYPE_DEFAULT" );
            break;
            case 1:
            SAVE_STRING_TO_DEBUG_FILE( "PATROL_POINT_TYPE_FEMALE_ONLY" );
            break;
        }
        SAVE_NEWLINE_TO_DEBUG_FILE();
        SAVE_NEWLINE_TO_DEBUG_FILE();
        iVar3++;
    }
    SAVE_NEWLINE_TO_DEBUG_FILE();
    CLOSE_DEBUG_FILE();
    WAIT( 0 );
    return;
}

void sub_74772()
{
    float fVar2;
    float fVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;

    l_U1178 = GET_AUDIO_ROOM_ID();
    if (l_U1086)
    {
        if (NOT l_U1124)
        {
            GET_GAME_TIMER( ref iVar4 );
            iVar5 = iVar4 - l_U1189;
            if (iVar5 > 10000)
            {
                TRIGGER_POLICE_REPORT( "E2_GENERIC_CLUB_REPORT" );
                l_U1124 = 1;
            }
        }
    }
    if ((l_U1086) || (g_U30178))
    {
        if ((NOT (l_U1186 == -1)) AND (NOT l_U1119))
        {
            MUTE_STATIC_EMITTER( l_U1186, 1 );
            l_U1119 = 1;
        }
    }
    else if (NOT g_U30178)
    {
        if (l_U1119)
        {
            if (NOT (l_U1186 == -1))
            {
                MUTE_STATIC_EMITTER( l_U1186, 0 );
                l_U1119 = 0;
            }
        }
    }
    if (NOT (l_U1183 == l_U1178))
    {
        switch (l_U1149)
        {
            case 0:
            switch (l_U1178)
            {
                case 0:
                l_U1135 = 2.50000000;
                l_U1136 = 2500.00000000;
                l_U1137 = 0.50000000;
                break;
                case 1:
                l_U1135 = 2.50000000;
                l_U1136 = 5000.00000000;
                l_U1137 = 0.60000000;
                break;
                case 2:
                l_U1135 = 2.50000000;
                l_U1136 = 10000.00000000;
                l_U1137 = 0.80000000;
                break;
                case 3:
                l_U1135 = 2.00000000;
                l_U1136 = 15000.00000000;
                l_U1137 = 0.90000000;
                break;
                case 4:
                l_U1135 = 2.50000000;
                l_U1136 = 1500.00000000;
                l_U1137 = 0.20000000;
                break;
                case -1:
                l_U1135 = 5.00000000;
                l_U1136 = 1000.00000000;
                l_U1137 = 0.10000000;
                break;
            }
            break;
            case 1:
            switch (l_U1178)
            {
                case 0:
                l_U1135 = 2.50000000;
                l_U1136 = 5000.00000000;
                l_U1137 = 0.40000000;
                break;
                case 1:
                l_U1135 = 2.50000000;
                l_U1136 = 9000.00000000;
                l_U1137 = 0.60000000;
                break;
                case 2:
                l_U1135 = 2.50000000;
                l_U1136 = 9000.00000000;
                l_U1137 = 0.60000000;
                break;
                case 3:
                l_U1135 = 2.50000000;
                l_U1136 = 2000.00000000;
                l_U1137 = 0.30000000;
                break;
                case 4:
                l_U1135 = 2.50000000;
                l_U1136 = 2000.00000000;
                l_U1137 = 0.30000000;
                break;
                case 5:
                l_U1135 = 2.50000000;
                l_U1136 = 15000.00000000;
                l_U1137 = 0.90000000;
                break;
                case 6:
                l_U1135 = 2.50000000;
                l_U1136 = 13000.00000000;
                l_U1137 = 0.70000000;
                break;
                case 7:
                l_U1135 = 2.50000000;
                l_U1136 = 12000.00000000;
                l_U1137 = 0.80000000;
                break;
                case 8:
                l_U1135 = 2.50000000;
                l_U1136 = 12000.00000000;
                l_U1137 = 0.70000000;
                break;
                case 9:
                l_U1135 = 2.50000000;
                l_U1136 = 900.00000000;
                l_U1137 = 0.10000000;
                break;
                case 10:
                l_U1135 = 2.50000000;
                l_U1136 = 1500.00000000;
                l_U1137 = 0.20000000;
                break;
                case -1:
                l_U1135 = 3.50000000;
                l_U1136 = 1000.00000000;
                l_U1137 = 0.10000000;
                break;
            }
            break;
            case 2:
            switch (l_U1178)
            {
                case 0:
                l_U1135 = 3.00000000;
                l_U1136 = 15000.00000000;
                l_U1137 = 0.80000000;
                break;
                case 1:
                l_U1135 = 5.00000000;
                l_U1136 = 2000.00000000;
                l_U1137 = 0.50000000;
                break;
                case 2:
                l_U1135 = 5.00000000;
                l_U1136 = 2000.00000000;
                l_U1137 = 0.50000000;
                break;
                case -1:
                l_U1135 = 6.00000000;
                l_U1136 = 1000.00000000;
                l_U1137 = 0.10000000;
                break;
            }
            break;
        }
        l_U1129 = l_U1132;
        l_U1130 = l_U1133;
        l_U1131 = l_U1134;
        GET_GAME_TIMER( ref l_U1184 );
    }
    else if (IS_THREAD_ACTIVE( g_U30249 ))
    {
        l_U1137 = g_U30187;
    }
    GET_GAME_TIMER( ref iVar6 );
    iVar7 = iVar6 - l_U1184;
    if (iVar7 < l_U1182)
    {
        fVar8 = (TO_FLOAT( iVar7 )) / (TO_FLOAT( l_U1182 ));
    }
    else
    {
        fVar8 = 1.00000000;
    }
    if (NOT (l_U1178 == -1))
    {
        fVar9 = l_U1135 - l_U1129;
        fVar9 *= fVar8;
        l_U1132 = l_U1129 + fVar9;
        fVar9 = l_U1136 - l_U1130;
        fVar9 *= fVar8;
        l_U1133 = l_U1130 + fVar9;
        fVar9 = l_U1137 - l_U1131;
        fVar9 *= fVar8;
        l_U1134 = l_U1131 + fVar9;
    }
    else
    {
        fVar2 = sub_76323( l_U1149 );
        fVar3 = fVar2;
        if (fVar3 > l_U1141)
        {
            fVar3 = l_U1141;
        }
        fVar3 /= l_U1141;
        l_U1138 = (1.00000000 - fVar3) * l_U1135;
        l_U1139 = l_U1136;
        l_U1140 = l_U1137;
        fVar9 = l_U1138 - l_U1129;
        fVar9 *= fVar8;
        l_U1132 = l_U1129 + fVar9;
        fVar9 = l_U1139 - l_U1130;
        fVar9 *= fVar8;
        l_U1133 = l_U1130 + fVar9;
        fVar9 = l_U1140 - l_U1131;
        fVar9 *= fVar8;
        l_U1134 = l_U1131 + fVar9;
    }
    l_U1183 = l_U1178;
    if (g_U30177)
    {
        if (NOT (IS_THREAD_ACTIVE( g_U30248 )))
        {
            g_U30177 = 0;
            g_U30248 = nil;
        }
    }
    if (NOT (g_U30197 == -1))
    {
        if (NOT (g_U30197 == l_U1149))
        {
            l_U1179 = 0;
        }
        else if (((NOT (sub_14729( sub_3600(), g_U30197, l_U1142 ))) || (g_U30177)) || ((g_U30149[l_U1149]) AND (NOT g_U30154[l_U1149])))
        {
            if (l_U1115)
            {
                if (g_U30177)
                {
                    l_U1187 = GET_STREAM_PLAYTIME();
                    GET_GAME_TIMER( ref l_U1188 );
                }
                else
                {
                    l_U1187 = -1;
                }
            }
            else
            {
                l_U1187 = -1;
            }
            l_U1179 = 0;
            if (NOT (GET_STREAM_PLAYTIME() == -1))
            {
                STOP_STREAM();
            }
            if (l_U1115)
            {
                STOP_STREAM();
                l_U1115 = 0;
            }
            sub_6224();
            if (NOT g_U30177)
            {
                if (l_U1116)
                {
                    if (l_U1117)
                    {
                        MUTE_POSITIONED_RADIO( 0 );
                        l_U1116 = 0;
                    }
                }
            }
            g_U30197 = -1;
        }
    }
    switch (l_U1179)
    {
        case 0:
        if (fVar2 < l_U1141)
        {
            if (g_U30197 == -1)
            {
                if ((((sub_14729( sub_3600(), l_U1149, l_U1142 )) AND (NOT g_U30177)) AND (NOT ((g_U30149[l_U1149]) AND (NOT g_U30154[l_U1149])))) || (g_U30154[l_U1149]))
                {
                    if (GET_STREAM_PLAYTIME() == -1)
                    {
                        l_U1179++;
                        if (NOT l_U1118)
                        {
                            REGISTER_SCRIPT_WITH_AUDIO( 0 );
                            l_U1118 = 1;
                        }
                        if (l_U1117)
                        {
                            MUTE_POSITIONED_RADIO( 1 );
                            l_U1116 = 1;
                        }
                        if (l_U1187 == -1)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 600000, ref l_U1181 );
                            g_U30197 = l_U1149;
                        }
                        else
                        {
                            GET_GAME_TIMER( ref iVar6 );
                            iVar5 = iVar6 - l_U1188;
                            l_U1181 = l_U1187 + iVar5;
                            g_U30197 = l_U1149;
                            PRINTSTRING( "CLUB AUDIO - restarting stream from new position - iStreamOffset = " );
                            PRINTINT( l_U1181 );
                            PRINTNL();
                        }
                    }
                    else
                    {
                        PRINTSTRING( "Club " );
                        switch (l_U1149)
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
                        PRINTSTRING( " is trying to start audio but NOT GET_STREAM_PLAYTIME() = -1" );
                        PRINTNL();
                        STOP_STREAM();
                    }
                }
            }
        }
        break;
        case 1:
        switch (l_U1149)
        {
            case 2:
            if (PRELOAD_STREAM_WITH_START_OFFSET( "DANCING_HERCULES_MIX", l_U1181 ))
            {
                PLAY_STREAM_FRONTEND();
                PRINTSTRING( "PLAY_STREAM_FRONTEND - called with DANCING_HERCULES_MIX" );
                PRINTNL();
                l_U1115 = 1;
                l_U1179++;
            }
            break;
            case 1:
            if (PRELOAD_STREAM_WITH_START_OFFSET( "DANCING_MAISONETTE_MIX", l_U1181 ))
            {
                PLAY_STREAM_FRONTEND();
                PRINTSTRING( "PLAY_STREAM_FRONTEND - called with DANCING_MAISONETTE_MIX" );
                PRINTNL();
                l_U1115 = 1;
                l_U1179++;
            }
            break;
            case 0:
            if (PRELOAD_STREAM_WITH_START_OFFSET( "DANCING_BAHAMAMAMMAS_MIX", l_U1181 ))
            {
                PLAY_STREAM_FRONTEND();
                PRINTSTRING( "PLAY_STREAM_FRONTEND - called with DANCING_BAHAMAMAMMAS_MIX" );
                PRINTNL();
                l_U1115 = 1;
                l_U1179++;
            }
            break;
        }
        break;
        case 2:
        if (l_U1115)
        {
            SET_STREAM_PARAMS( l_U1132, ROUND( l_U1133 ) );
        }
        break;
    }
    switch (l_U1180)
    {
        case 0:
        if (g_U30197 == l_U1149)
        {
            if ((l_U1179 > 0) AND (NOT l_U1086))
            {
                l_U1180++;
            }
        }
        break;
        case 1:
        if (REQUEST_AMBIENT_AUDIO_BANK( "EP2_SFX\CLUB_WALLA" ))
        {
            l_U1185 = GET_SOUND_ID();
            PLAY_SOUND_FRONTEND( l_U1185, "CLUB_WALLA" );
            l_U1180++;
        }
        break;
        case 2:
        if (NOT (l_U1185 == -1))
        {
            if (NOT (HAS_SOUND_FINISHED( l_U1185 )))
            {
                if (NOT l_U1086)
                {
                    SET_VARIABLE_ON_SOUND( l_U1185, "Loudness", l_U1134 );
                }
                else if (sub_3885( sub_3600(), l_U1149, 0 ))
                {
                    switch (l_U1149)
                    {
                        case 1:
                        PLAY_SOUND_FROM_POSITION( -1, "CLUB_WALLA_PANIC", 65053, 150, 9 );
                        break;
                        case 2:
                        PLAY_SOUND_FROM_POSITION( -1, "CLUB_WALLA_PANIC", 65101, 352, 12 );
                        break;
                        case 0:
                        PLAY_SOUND_FROM_POSITION( -1, "CLUB_WALLA_PANIC", 65146, 427, 6 );
                        break;
                    }
                }
                sub_6224();;
            }
            else
            {
                sub_6224();
            }
        }
        else
        {
            sub_6224();
        }
        break;
    }
    return;
}

float sub_76323(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    vVar3 = {sub_14740( uParam0 )};
    GET_GAME_CAM( ref uVar12 );
    if (DOES_CAM_EXIST( uVar12 ))
    {
        GET_CAM_POS( uVar12, ref vVar6.x, ref vVar6.y, ref vVar6.z );
        uVar9 = {vVar6 - vVar3};
        return VMAG( uVar9 );
    }
    return -1.00000000;
}

void sub_78576(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;

    if (NOT l_U125)
    {
        l_U125 = 1;
    }
    if ((g_U10597) || (IS_PLAYER_CONTROL_ON( sub_2044() )))
    {
        if (NOT (sub_78627( iParam0 )))
        {
            if (g_U30197 == iParam0)
            {
                if (GET_STREAM_PLAYTIME() > 0)
                {
                    GET_STREAM_BEAT_INFO( ref l_U115, ref l_U116, ref l_U117 );
                    GET_ROOT_CAM( ref uVar3 );
                    if (DOES_CAM_EXIST( uVar3 ))
                    {
                        GET_CAM_POS( uVar3, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                        switch (iParam0)
                        {
                            case 0:
                            vVar7 = {-390.60390000, 424.73400000, 6.20160000};
                            break;
                            case 1:
                            vVar7 = {-485.47840000, 147.79830000, 6.55100000};
                            break;
                            case 2:
                            vVar7 = {-428.55470000, 351.42450000, 11.72620000};
                            break;
                        }
                        GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, vVar7.x, vVar7.y, vVar7.z, ref l_U120 );
                        l_U123 = l_U110 / (l_U120 * l_U121);
                        if (l_U123 > 1.00000000)
                        {
                            l_U123 = 1.00000000;
                        }
                        else if (l_U123 < 0.00000000)
                        {
                            l_U123 = 0.00000000;
                        }
                        SET_DANCE_SHAKE_ACTIVE_THIS_UPDATE( l_U123 );
                    }
                }
            }
        }
    }
    return;
}

int sub_78627(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        if ((IS_CHAR_IN_AREA_3D( sub_3600(), -474.97280000, 143.74440000, 8.86370000, -471.82280000, 150.54440000, 11.86370000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_3600(), -468.32000000, 156.33000000, 11.46000000, -476.07000000, 166.44000000, 8.74000000, 0 )))
        {
            return 1;
        }
        break;
        case 0:
        if (IS_CHAR_IN_AREA_3D( sub_3600(), -382.97280000, 441.74440000, 8.86370000, -368.82280000, 430.54440000, 5.86370000, 0 ))
        {
            return 1;
        }
        break;
    }
    if (NOT (sub_3885( sub_3600(), uParam0, 0 )))
    {
        return 1;
    }
    return 0;
}

int sub_79290(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_79310( "E2MF2AU", 7 ))
    {
        if (sub_79675( uParam0, uParam1, uParam2, 1 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_79310(unknown uParam0, unknown uParam1)
{
    if (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 ))
    {
        sub_79337( uParam0 );
        if (NOT (IS_CHAR_INJURED( sub_3600() )))
        {
            sub_79474( 0, sub_3600(), "LUIS", 0 );
        }
        return 1;
    }
    else if (NOT (IS_STREAMING_ADDITIONAL_TEXT( uParam1 )))
    {
        REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
    }
    return 0;
}

void sub_79337(unknown uParam0)
{
    StrCopy( ref l_U6._fU0, uParam0, 16 );
    sub_79354();
    return;
}

void sub_79354()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U6._fU16[I]._fU0 = nil;
        StrCopy( ref l_U6._fU16[I]._fU4, "", 32 );
        l_U6._fU344[I] = 0;
    }
    return;
}

void sub_79474(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_79554( "\n PED NUMBER ", uParam0 );
    sub_79594( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_79554(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_79594(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_79675(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_79696( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_79696(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_79750( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_79750(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_79772( iParam1 )))
    {
        return 0;
    }
    l_U6._fU384 = 0;
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
    sub_80460( ref g_U8868, ref l_U6 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_79772(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_79849( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_79849( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_79849( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_79849(unknown uParam0)
{
    return;
}

void sub_80460(int iParam0, int iParam1)
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
