void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    l_U132 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (true)
    {
        WAIT( 0 );
        if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
        {
            sub_72();
            l_U132 = 0;
        }
        if (IS_PLAYER_PLAYING( sub_142() ))
        {
            switch (l_U132)
            {
                case 0:
                l_U132 = 1;
                break;
                case 1:
                if (NOT (IS_CHAR_DEAD( sub_248() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_248(), -1728.45300000, 334.51860000, 26.59330000, 3, 3, 3, 0 ))
                    {
                        sub_342();
                        sub_1862();
                        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "AmbMemorialCreation" )) == 0)
                        {
                            REQUEST_SCRIPT( "AmbMemorialCreation" );
                            l_U132 = 2;
                        }
                        else
                        {
                            l_U132 = 3;
                        }
                    }
                }
                break;
                case 2:
                sub_1862();
                if (HAS_SCRIPT_LOADED( "AmbMemorialCreation" ))
                {
                    START_NEW_SCRIPT( "AmbMemorialCreation", 1024 );
                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "AmbMemorialCreation" );
                    l_U132 = 3;
                }
                break;
                case 3:
                sub_1862();
                if (NOT (IS_CHAR_DEAD( sub_248() )))
                {
                    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "AmbMemorialCreation" )) == 0)
                    {
                        l_U132 = 0;
                    }
                }
                break;
                case 4: break;
            }
        }
    }
    return;
}

void sub_72()
{
    int I;

    for ( I = 0; I <= 23; I++ )
    {
        g_U10408[I] = 0;
        g_U9908[I]._fU60 = -1;
    }
    return;
}

void sub_142()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_248()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_342()
{
    g_U10317[0]._fU0 = {-1719.54400000, 333.75900000, 32.42600000};
    g_U10317[0]._fU12 = {-1719.74000000, 333.39000000, 32.48600000};
    g_U10317[1]._fU0 = {-1719.14400000, 334.44900000, 32.42600000};
    g_U10317[1]._fU12 = {-1719.33000000, 334.10000000, 32.48600000};
    g_U10317[2]._fU0 = {-1718.73400000, 335.15900000, 32.42600000};
    g_U10317[2]._fU12 = {-1718.93000000, 334.80000000, 32.48600000};
    g_U10317[0]._fU24 = -1748171483;
    g_U10317[1]._fU24 = 909822822;
    g_U10317[2]._fU24 = 1773123381;
    g_U10317[0]._fU28 = 2139840377;
    g_U10317[1]._fU28 = 991862029;
    g_U10317[2]._fU28 = 7615040;
    g_U10317[0]._fU32 = 95800742;
    g_U10317[1]._fU32 = -792783923;
    g_U10317[2]._fU32 = -812372503;
    g_U9690[0] = {-1715.99400000, 339.89900000, 32.99600000};
    g_U9690[1] = {-1715.99400000, 339.89900000, 32.36600000};
    g_U9690[2] = {-1716.43400000, 339.14900000, 32.34600000};
    g_U9690[3] = {-1716.45400000, 339.10900000, 32.96600000};
    g_U9690[4] = {-1716.89400000, 338.33900000, 32.96600000};
    g_U9690[5] = {-1716.89400000, 338.33900000, 32.34600000};
    g_U9690[6] = {-1717.34400000, 337.55900000, 32.95600000};
    g_U9690[7] = {-1717.35400000, 337.55900000, 32.35600000};
    g_U9690[8] = {-1717.79400000, 336.78900000, 32.94600000};
    g_U9690[9] = {-1717.81400000, 336.74900000, 32.35600000};
    g_U9690[10] = {-1718.21400000, 336.05900000, 32.92600000};
    g_U9690[11] = {-1718.26400000, 335.96900000, 32.33600000};
    g_U9690[12] = {-1719.33400000, 334.11900000, 31.68600000};
    g_U9690[13] = {-1719.78400000, 333.32900000, 31.71600000};
    g_U9690[14] = {-1720.24400000, 332.54900000, 31.71600000};
    g_U9690[15] = {-1720.70400000, 331.73900000, 31.71600000};
    g_U9690[16] = {-1720.51400000, 332.06900000, 32.43600000};
    g_U9690[17] = {-1720.95400000, 331.31900000, 32.44600000};
    g_U9690[18] = {-1721.10400000, 331.04900000, 31.73600000};
    g_U9690[19] = {-1721.34400000, 330.63900000, 32.46600000};
    g_U9690[20] = {-1721.52400000, 330.31900000, 31.72600000};
    g_U9690[21] = {-1721.95400000, 329.57900000, 31.72600000};
    g_U9690[22] = {-1721.74400000, 329.94900000, 32.44600000};
    g_U9690[23] = {-1722.16400000, 329.20900000, 32.45600000};
    g_U9766[0] = {-1716.18000000, 339.57000000, 33.05600000};
    g_U9766[1] = {-1716.18000000, 339.57000000, 32.43600000};
    g_U9766[2] = {-1716.62000000, 338.80000000, 32.41600000};
    g_U9766[3] = {-1716.64000000, 338.77000000, 33.02600000};
    g_U9766[4] = {-1717.09000000, 337.98000000, 33.03600000};
    g_U9766[5] = {-1717.08000000, 338.00000000, 32.42600000};
    g_U9766[6] = {-1717.52000000, 337.23000000, 33.01600000};
    g_U9766[7] = {-1717.54500000, 337.20000000, 32.42600000};
    g_U9766[8] = {-1717.97000000, 336.46000000, 33.01600000};
    g_U9766[9] = {-1718.01000000, 336.39000000, 32.41600000};
    g_U9766[10] = {-1718.41000000, 335.71000000, 32.98600000};
    g_U9766[11] = {-1718.48000000, 335.58000000, 32.42600000};
    g_U9766[12] = {-1719.52000000, 333.78000000, 31.74600000};
    g_U9766[13] = {-1719.99000000, 332.97000000, 31.78600000};
    g_U9766[14] = {-1720.44000000, 332.19000000, 31.77600000};
    g_U9766[15] = {-1720.90000000, 331.39000000, 31.78600000};
    g_U9766[16] = {-1720.72000000, 331.70000000, 32.49600000};
    g_U9766[17] = {-1721.15000000, 330.98000000, 32.52600000};
    g_U9766[18] = {-1721.31000000, 330.68000000, 31.79600000};
    g_U9766[19] = {-1721.54000000, 330.29000000, 32.56600000};
    g_U9766[20] = {-1721.72000000, 329.97000000, 31.79600000};
    g_U9766[21] = {-1722.15000000, 329.22000000, 31.79600000};
    g_U9766[22] = {-1721.93000000, 329.60000000, 32.50600000};
    g_U9766[23] = {-1722.36000000, 328.87000000, 32.53600000};
    return;
}

void sub_1862()
{
    int I;

    for ( I = 0; I <= 23; I++ )
    {
        if (g_U9592[I]._fU12 == 1)
        {
            if (g_U9908[I]._fU64 == 0)
            {
                g_U9908[I]._fU28 = sub_1932( g_U9592[I]._fU0 );
                g_U9908[I]._fU24 = sub_3614( g_U9592[I]._fU4 );
                sub_4689( g_U9592[I]._fU8, I );
                g_U9908[I]._fU64 = 1;
            }
        }
    }
    return;
}

int sub_1932(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar3 = {sub_1943( uParam0 )};
    if (COMPARE_STRING( ref uVar3, "RECLOST_0" ))
    {
        return -236892701;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_1" ))
    {
        return 2065310171;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_2" ))
    {
        return -970244918;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_3" ))
    {
        return 496043853;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_4" ))
    {
        return 582036037;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_5" ))
    {
        return -164239926;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_6" ))
    {
        return -484472173;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_7" ))
    {
        return 755076677;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_8" ))
    {
        return 1305283019;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_9" ))
    {
        return -1115602421;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_10" ))
    {
        return 909672892;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_11" ))
    {
        return 926605839;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_12" ))
    {
        return -1334518690;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_13" ))
    {
        return 157755506;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_14" ))
    {
        return -136391281;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_15" ))
    {
        return 1670663665;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_16" ))
    {
        return 1226586722;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_17" ))
    {
        return 289584459;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_18" ))
    {
        return 1102680561;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_19" ))
    {
        return 1040968112;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_20" ))
    {
        return 1486268613;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_21" ))
    {
        return 1948873348;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_22" ))
    {
        return -1761620861;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_23" ))
    {
        return 2114615220;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_25" ))
    {
        return 991862029;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_28" ))
    {
        return 7615040;
    }
    else if (COMPARE_STRING( ref uVar3, "RECLOST_29" ))
    {
        return 2139840377;
    };;;;;;;;;;;;;;;;;;;;;;;;;;;
    return 0;
}

void sub_1943(int iParam0)
{
    int iVar3;
    char[16] Result;
    int iVar8;

    iVar3 = 30;
    StrCopy( ref Result, "RECLOST_", 16 );
    if ((iParam0 < 0) || (iParam0 >= iVar3))
    {
        SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: NameID out of range" );
        return Result;
    }
    iVar8 = iParam0;
    if (iVar8 >= 40)
    {
        SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: more than 40 Lost Member names?" );
        return Result;
    }
    if (iVar8 >= 30)
    {
        ConcatString(ref Result, "3", 16);
        iVar8 -= 30;
    }
    if (iVar8 >= 20)
    {
        ConcatString(ref Result, "2", 16);
        iVar8 -= 20;
    }
    if (iVar8 >= 10)
    {
        ConcatString(ref Result, "1", 16);
        iVar8 -= 10;
    }
    switch (iVar8)
    {
        case 0:
        ConcatString(ref Result, "0", 16);
        break;
        case 1:
        ConcatString(ref Result, "1", 16);
        break;
        case 2:
        ConcatString(ref Result, "2", 16);
        break;
        case 3:
        ConcatString(ref Result, "3", 16);
        break;
        case 4:
        ConcatString(ref Result, "4", 16);
        break;
        case 5:
        ConcatString(ref Result, "5", 16);
        break;
        case 6:
        ConcatString(ref Result, "6", 16);
        break;
        case 7:
        ConcatString(ref Result, "7", 16);
        break;
        case 8:
        ConcatString(ref Result, "8", 16);
        break;
        case 9:
        ConcatString(ref Result, "9", 16);
        break;
        default: SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: array position not in range 0 - 9" );
    }
    return Result;
}

int sub_3614(int iParam0)
{
    if (iParam0 == 0)
    {
        if (NOT (sub_3637( 1865726236 )))
        {
            return 1865726236;
        }
    }
    else if (iParam0 == 1)
    {
        if (NOT (sub_3637( 1624775779 )))
        {
            return 1624775779;
        }
    }
    else if (iParam0 == 2)
    {
        if (NOT (sub_3637( -1011752427 )))
        {
            return -1011752427;
        }
    }
    else if (iParam0 == 3)
    {
        if (NOT (sub_3637( -1253423802 )))
        {
            return -1253423802;
        }
    }
    else if (iParam0 == 4)
    {
        if (NOT (sub_3637( -1472189646 )))
        {
            return -1472189646;
        }
    }
    else if (iParam0 == 5)
    {
        if (NOT (sub_3637( -1702522947 )))
        {
            return -1702522947;
        }
    }
    else if (iParam0 == 6)
    {
        if (NOT (sub_3637( -1005067543 )))
        {
            return -1005067543;
        }
    }
    else if (iParam0 == 7)
    {
        if (NOT (sub_3637( -1246476766 )))
        {
            return -1246476766;
        }
    }
    else if (iParam0 == 8)
    {
        if (NOT (sub_3637( -1469174890 )))
        {
            return -1469174890;
        }
    }
    else if (iParam0 == 9)
    {
        if (NOT (sub_3637( 1757768624 )))
        {
            return 1757768624;
        }
    }
    else if (iParam0 == 10)
    {
        if (NOT (sub_3637( 1510788671 )))
        {
            return 1510788671;
        }
    }
    else if (iParam0 == 11)
    {
        if (NOT (sub_3637( 1163044043 )))
        {
            return 1163044043;
        }
    }
    else if (iParam0 == 12)
    {
        if (NOT (sub_3637( 915212096 )))
        {
            return 915212096;
        }
        else if (NOT (sub_3637( 1436960358 )))
        {
            return 1436960358;
        }
    }
    else if (iParam0 == 13)
    {
        if (NOT (sub_3637( -1584341694 )))
        {
            return -1584341694;
        }
    }
    else if (iParam0 == 14)
    {
        if (NOT (sub_3637( 869794258 )))
        {
            return 869794258;
        }
    }
    else if (iParam0 == 15)
    {
        if (NOT (sub_3637( 2116818553 )))
        {
            return 2116818553;
        }
    }
    else if (iParam0 == 16)
    {
        if (NOT (sub_3637( -1335264525 )))
        {
            return -1335264525;
        }
    }
    else if (iParam0 == 17)
    {
        if (NOT (sub_3637( -635285908 )))
        {
            return -635285908;
        }
    }
    else if (iParam0 == 18)
    {
        if (NOT (sub_3637( -1933331544 )))
        {
            return -1933331544;
        }
    }
    else if (iParam0 == 19)
    {
        if (NOT (sub_3637( -815154701 )))
        {
            return -815154701;
        }
    }
    else if (iParam0 == 20)
    {
        if (NOT (sub_3637( 481055863 )))
        {
            return 481055863;
        }
    }
    else if (iParam0 == 21)
    {
        if (NOT (sub_3637( 733934236 )))
        {
            return 733934236;
        }
    }
    else if (iParam0 == 22)
    {
        if (NOT (sub_3637( 153595246 )))
        {
            return 153595246;
        }
    }
    else if (iParam0 == 23)
    {
        if (NOT (sub_3637( -107803071 )))
        {
            return -107803071;
        }
    }
    else if (iParam0 == 24)
    {
        if (NOT (sub_3637( 132164316 )))
        {
            return 132164316;
        }
    };;;;;;;;;;;;;;;;;;;;;;;;;
    return 0;
}

int sub_3637(int iParam0)
{
    int I;

    for ( I = 0; I <= 23; I++ )
    {
        if (g_U9908[I]._fU24 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_4689(unknown uParam0, unknown uParam1)
{
    if ((sub_4700( uParam0 )) == 1)
    {
        g_U9908[uParam1]._fU32 = sub_4745( uParam0 );
    }
    else
    {
        g_U9908[uParam1]._fU32 = sub_4998( uParam0 );
        g_U9908[uParam1]._fU36 = sub_5295( uParam0 );
    }
    return;
}

int sub_4700(int iParam0)
{
    if (iParam0 < 10)
    {
        return 1;
        break;
    }
    return 2;
}

int sub_4745(int iParam0)
{
    if (iParam0 == 0)
    {
        return -1385032160;
    }
    else if (iParam0 == 1)
    {
        return -1137069137;
    }
    else if (iParam0 == 2)
    {
        return 435777325;
    }
    else if (iParam0 == 3)
    {
        return 1929978187;
    }
    else if (iParam0 == 4)
    {
        return -804070579;
    }
    else if (iParam0 == 5)
    {
        return -565315645;
    }
    else if (iParam0 == 6)
    {
        return -1416162730;
    }
    else if (iParam0 == 7)
    {
        return 948317254;
    }
    else if (iParam0 == 8)
    {
        return -2033366829;
    }
    else if (iParam0 == 9)
    {
        return -1794480819;
    };;;;;;;;;;
    return 0;
}

int sub_4998(int iParam0)
{
    if ((iParam0 >= 10) AND (iParam0 < 20))
    {
        return -1137069137;
    }
    else if ((iParam0 >= 20) AND (iParam0 < 30))
    {
        return 435777325;
    }
    else if ((iParam0 >= 30) AND (iParam0 < 40))
    {
        return 1929978187;
    }
    else if ((iParam0 >= 40) AND (iParam0 < 50))
    {
        return -804070579;
    }
    else if ((iParam0 >= 50) AND (iParam0 < 60))
    {
        return -565315645;
    }
    else if ((iParam0 >= 60) AND (iParam0 < 70))
    {
        return -1416162730;
    }
    else if ((iParam0 >= 70) AND (iParam0 < 80))
    {
        return 948317254;
    }
    else if ((iParam0 >= 80) AND (iParam0 < 90))
    {
        return -2033366829;
    }
    else if ((iParam0 >= 90) AND (iParam0 < 100))
    {
        return -1794480819;
    };;;;;;;;;
    return 0;
}

int sub_5295(int iParam0)
{
    while (iParam0 >= 10)
    {
        iParam0 -= 10;
        WAIT( 0 );
    }
    if (iParam0 == 0)
    {
        return -1385032160;
    }
    else if (iParam0 == 1)
    {
        return -1137069137;
    }
    else if (iParam0 == 2)
    {
        return 435777325;
    }
    else if (iParam0 == 3)
    {
        return 1929978187;
    }
    else if (iParam0 == 4)
    {
        return -804070579;
    }
    else if (iParam0 == 5)
    {
        return -565315645;
    }
    else if (iParam0 == 6)
    {
        return -1416162730;
    }
    else if (iParam0 == 7)
    {
        return 948317254;
    }
    else if (iParam0 == 8)
    {
        return -2033366829;
    }
    else if (iParam0 == 9)
    {
        return -1794480819;
    };;;;;;;;;;
    return 0;
}
