void main()
{
    int I;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U172 = 0;
    l_U192 = 0;
    l_U193 = 22;
    l_U194 = 0;
    l_U930 = 1;
    l_U931 = 0;
    l_U933 = 0;
    l_U934 = 0;
    l_U935 = 0;
    l_U936 = 0;
    l_U938 = -1;
    l_U939 = 1;
    l_U977 = "CLOTH_RETAIL_Room01";
    l_U978 = {-25.00000000, -35.00000000, -5.00000000};
    l_U981 = {35.00000000, 10.00000000, 15.00000000};
    l_U984 = {-274.01480000, 1366.67600000, 24.60018000};
    l_U987 = {-287.11480000, 1366.67600000, 29.56718000};
    l_U990 = 12.00000000;
    StrCopy( ref l_U991, "blank", 16 );
    StrCopy( ref l_U995, "blank", 16 );
    StrCopy( ref l_U999, "blank", 16 );
    l_U1012 = 0;
    l_U1013 = 0;
    l_U1014 = 0;
    l_U1015 = 0;
    l_U1016 = 0;
    l_U1017 = 0;
    l_U1019 = -1;
    l_U1020 = 5000;
    l_U1021 = 0;
    l_U1022 = 0;
    l_U1009 = {l_U1023._fU4[0]};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_356();
    }
    while (l_U930)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U194)
            {
                case 0:
                if (l_U976 == nil)
                {
                    GET_INTERIOR_AT_COORDS( l_U1009._fU0, l_U1009._fU4, l_U1009._fU8, ref l_U976 );
                }
                else
                {
                    g_U8834 = 1;
                    sub_2802();
                    sub_5756();
                    l_U194 = 1;
                }
                break;
                case 1:
                if (NOT l_U933)
                {
                    if (sub_6684())
                    {
                        if (IS_CHAR_WAITING_FOR_WORLD_COLLISION( l_U940._fU0 ))
                        {
                            ACTIVATE_INTERIOR( l_U976, 1 );
                        }
                        else
                        {
                            l_U933 = 1;
                        }
                    }
                }
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_572(), l_U984._fU0, l_U984._fU4, l_U984._fU8, l_U987._fU0, l_U987._fU4, l_U987._fU8, l_U990, 0 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U940._fU0 )))
                    {
                        SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U940._fU0, l_U984._fU0, l_U984._fU4, l_U984._fU8, l_U987._fU0, l_U987._fU4, l_U987._fU8, l_U990 );
                        if (sub_7031( l_U940._fU0, l_U977 ))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U940._fU0, sub_572() );
                            l_U194 = 2;
                        }
                    }
                }
                break;
                case 2:
                if (sub_7105())
                {
                    l_U935 = 0;
                    if (sub_13702( l_U977, l_U1009 ))
                    {
                        for ( l_U1008 = 0; l_U1008 < 22; l_U1008++ )
                        {
                            if ((LOCATE_CHAR_ON_FOOT_3D( sub_572(), l_U195[l_U1008]._fU8._fU0, l_U195[l_U1008]._fU8._fU4, l_U195[l_U1008]._fU8._fU8, l_U195[l_U1008]._fU32._fU0, l_U195[l_U1008]._fU32._fU4, l_U195[l_U1008]._fU32._fU8, 0 )) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U995 ))))
                            {
                                if (NOT (sub_14098( ref g_U8848, l_U937, ref l_U938 )))
                                {
                                    sub_5800( "  ** clothes_info[" );
                                    sub_6043( l_U1008 );
                                    sub_5800( "]." );
                                    SCRIPT_ASSERT( "ped_comp in MODO_MANHAT_5.sc not found!" );
                                    sub_10178();
                                }
                                l_U935 = 1;
                                StrCopy( ref l_U999, l_U195[l_U1008]._fU0, 16 );
                            }
                            GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U976, l_U195[l_U1008]._fU20, ref l_U195[l_U1008]._fU8 );
                        }
                    }
                    if ((NOT l_U935) AND (sub_7031( sub_572(), l_U977 )))
                    {
                        if (IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            for ( I = 0; I < 22; I++ )
                            {
                                if (NOT (IS_STRING_NULL( l_U195[I]._fU4 )))
                                {
                                    if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", l_U195[I]._fU4 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", l_U195[I]._fU4 )))
                                    {
                                        CLEAR_HELP();
                                    }
                                }
                                sub_805( 2, "BLANK" );
                            }
                        }
                        StrCopy( ref l_U999, "null", 16 );
                        l_U939 = 1;
                    }
                }
                else if (IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    for ( I = 0; I < 22; I++ )
                    {
                        if (NOT (IS_STRING_NULL( l_U195[I]._fU4 )))
                        {
                            if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", l_U195[I]._fU4 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", l_U195[I]._fU4 )))
                            {
                                CLEAR_HELP();
                            }
                        }
                        sub_805( 2, "BLANK" );
                    }
                }
                break;
                case 3:
                if (sub_14873( l_U195[l_U193], l_U1005, ref l_U937, ref l_U1003, ref l_U1004, 1, l_U1007, l_U940._fU120, l_U940._fU0 ))
                {
                    l_U194 = 2;
                }
                break;
                case 5:
                if (sub_21384( l_U195[l_U193], l_U1005, ref l_U937, ref l_U1003, ref l_U1004, 1, l_U1007, l_U940._fU120, l_U940._fU0 ))
                {
                    l_U194 = 2;
                }
                break;
                case 6:
                switch (l_U193)
                {
                    case 19:
                    if (sub_22841( ref l_U926, l_U1005, ref l_U937, ref l_U1003, ref l_U1004, 1, l_U1007, l_U940._fU120, l_U940._fU0 ))
                    {
                        l_U194 = 2;
                    }
                    break;
                    case 20:
                    case 21:
                    if (sub_22841( ref l_U922, l_U1005, ref l_U937, ref l_U1003, ref l_U1004, 1, l_U1007, l_U940._fU120, l_U940._fU0 ))
                    {
                        l_U194 = 2;
                    }
                    break;
                    default: PRINTSTRING( "more baddness... " );
                }
                break;
            }
        }
        else
        {
            l_U930 = 0;
        }
    }
    sub_356();
    return;
}

void sub_356()
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U940._fU0 );
    sub_378();
    REMOVE_DECISION_MAKER( l_U940._fU40 );
    REMOVE_DECISION_MAKER( l_U940._fU44 );
    REMOVE_ANIMS( "clothing" );
    if (NOT (IS_CHAR_DEAD( sub_572() )))
    {
        FREEZE_CHAR_POSITION( sub_572(), 0 );
        if ((IS_PLAYER_PLAYING( sub_639() )) AND (l_U931))
        {
            SET_PLAYER_CONTROL( sub_639(), 1 );
            l_U931 = 0;
        }
    }
    sub_731( ref l_U1004, ref l_U1003, ref l_U995, ref l_U991, 1, IS_THIS_A_MINIGAME_SCRIPT() );
    StrCopy( ref g_U8848, "blank", 16 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_378()
{
    int I;

    if (l_U39 != 0)
    {
        for ( I = 0; I <= (l_U39 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U6[I] );
            if (IS_THIS_MODEL_A_PED( l_U6[I] ))
            {
                DONT_SUPPRESS_PED_MODEL( l_U6[I] );
            }
            if (IS_THIS_MODEL_A_PED( l_U6[I] ))
            {
                DONT_SUPPRESS_CAR_MODEL( l_U6[I] );
            }
        }
    }
    l_U39 = 0;
    return;
}

void sub_572()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_639()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_731(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        if (IS_CAM_PROPAGATING( (uParam0^) ))
        {
            SET_CAM_PROPAGATE( (uParam0^), 0 );
            SET_CAM_ACTIVE( (uParam0^), 0 );
        }
        DESTROY_CAM( (uParam0^) );
    }
    sub_805( 5, uParam2 );
    sub_805( 2, uParam3 );
    sub_805( 2, "BLANK" );
    if (bParam5)
    {
        if (g_U8780)
        {
            sub_1185( sub_572(), l_U173 );
            sub_2370();
            g_U8780 = 0;
        }
    }
    if (g_U8779 != 1)
    {
        sub_2413();
        g_U8779 = 1;
    }
    return;
}

void sub_805(int iParam0, string sParam1)
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
                    sub_1026();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_639(), 1 );
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

void sub_1026()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_1185(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
{
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
    unknown uVar37;
    unknown uVar38;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        sub_1214( uParam0, ref uVar21, 0 );
        if (uParam1._fU0 != uVar21._fU0)
        {
            if (uParam1._fU0 != 10)
            {
                if (uParam1._fU0 < 0)
                {
                    CLEAR_CHAR_PROP( sub_572(), 0 );
                }
                else
                {
                    SET_CHAR_PROP_INDEX( sub_572(), 0, uParam1._fU0 );
                }
            }
            else
            {
                CLEAR_CHAR_PROP( uParam0, 0 );
                if (((GET_CHAR_DRAWABLE_VARIATION( sub_572(), 8 )) != 1) || ((GET_CHAR_TEXTURE_VARIATION( sub_572(), 8 )) != 0))
                {
                    SET_CHAR_COMPONENT_VARIATION( sub_572(), 8, 1, 0 );
                }
            }
        }
        if (uParam1._fU4 != uVar21._fU4)
        {
            if (uParam1._fU4 < 0)
            {
                CLEAR_CHAR_PROP( sub_572(), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( uParam0, 1, uParam1._fU4 );
            }
        }
        if ((uParam1._fU8 != uVar21._fU8) || (uParam1._fU40 != uVar21._fU40))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 0, uParam1._fU8, uParam1._fU40 );
        }
        if ((uParam1._fU12 != uVar21._fU12) || (uParam1._fU44 != uVar21._fU44))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 1, uParam1._fU12, uParam1._fU44 );
        }
        if ((uParam1._fU16 != uVar21._fU16) || (uParam1._fU48 != uVar21._fU48))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 2, uParam1._fU16, uParam1._fU48 );
        }
        if ((uParam1._fU20 != uVar21._fU20) || (uParam1._fU52 != uVar21._fU52))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 3, uParam1._fU20, uParam1._fU52 );
        }
        if ((uParam1._fU24 != uVar21._fU24) || (uParam1._fU56 != uVar21._fU56))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 4, uParam1._fU24, uParam1._fU56 );
        }
        if ((uParam1._fU28 != uVar21._fU28) || (uParam1._fU60 != uVar21._fU60))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 5, uParam1._fU28, uParam1._fU60 );
        }
        if ((uParam1._fU32 != uVar21._fU32) || (uParam1._fU64 != uVar21._fU64))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 6, uParam1._fU32, uParam1._fU64 );
        }
        if ((uParam1._fU36 != uVar21._fU36) || (uParam1._fU68 != uVar21._fU68))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 7, uParam1._fU36, uParam1._fU68 );
        }
    }
    return;
}

void sub_1214(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_PROP_INDEX( uParam0, 0, iParam1 + 0 );
        if (iParam1->_fU0 == -1)
        {
            iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_572(), 8 );
            iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_572(), 8 );
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

void sub_2370()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_2413()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown uVar5;

    GET_GROUP_SIZE( sub_2422(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_2422(), I, ref uVar5 );
            if ((NOT (IS_CHAR_INJURED( uVar5 ))) AND (IS_PLAYER_PLAYING( sub_639() )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( uVar5 )))
                {
                    CLEAR_CHAR_TASKS( uVar5 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_GOTO_CHAR_OFFSET( uVar5, sub_572(), -1, 2.50000000, 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_2422()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2802()
{
    l_U940._fU4 = -1056268969;
    l_U940._fU8 = {-280.68430000, 1365.63000000, 24.63230000};
    sub_2847();
    sub_4653();
    sub_5702();
    sub_1214( sub_572(), ref l_U173, 0 );
    StrCopy( ref g_U8848, "blank", 16 );
    return;
}

void sub_2847()
{
    sub_2927( 0, -3.50000000, -5.03750000, 1.00000000, 0.70000000, 0.90000000, 1.50000000, -3.29500000, -3.63800000, 1.00000000, -285.43420000, 1359.51500000, 24.63280000, 198.36000000 );
    sub_2927( 1, -3.50000000, -3.23750000, 1.00000000, 0.70000000, 0.90000000, 1.50000000, -3.29500000, -3.63800000, 1.00000000, -285.10400000, 1361.30000000, 24.63280000, 34.56000000 );
    sub_2927( 2, -2.10000000, -5.03750000, 1.00000000, 0.70000000, 0.90000000, 1.50000000, -2.09500000, -3.63750000, 1.00000000, -282.83810000, 1359.54600000, 24.63270000, 241.20000000 );
    sub_2927( 3, -2.10000000, -3.23750000, 1.00000000, 0.70000000, 0.90000000, 1.50000000, -2.09500000, -3.63750000, 1.00000000, -282.56810000, 1361.51600000, 24.63270000, 38.52000000 );
    sub_2927( 4, -0.69500000, -5.03750000, 1.00000000, 0.70000000, 0.90000000, 1.50000000, -0.49500000, -5.03750000, 1.00000000, -282.22550000, 1359.31600000, 24.63220000, 183.24000000 );
    sub_2927( 5, -0.69500000, -3.23750000, 1.00000000, 0.70000000, 0.90000000, 1.50000000, -0.49500000, -3.53750000, 1.00000000, -282.13550000, 1361.43400000, 24.63220000, 77.04000000 );
    sub_2927( 6, 0.75000000, -5.03750000, 1.00000000, 0.75000000, 0.90000000, 1.50000000, 0.70500000, -5.03750000, 1.00000000, -279.82120000, 1359.22500000, 24.63220000, 170.28000000 );
    sub_2927( 7, 0.75000000, -3.23750000, 1.00000000, 0.75000000, 0.90000000, 1.50000000, 0.70500000, -3.53750000, 1.00000000, -279.64120000, 1361.63600000, 24.63220000, 64.44000000 );
    sub_2927( 8, 2.30500000, -5.03750000, 1.00000000, 0.75000000, 0.90000000, 1.50000000, 2.40500000, -4.79800000, 1.00000000, -279.37800000, 1359.13600000, 24.63220000, 205.56000000 );
    sub_2927( 9, 2.30500000, -3.23750000, 1.00000000, 0.75000000, 0.90000000, 1.50000000, 2.40500000, -3.53750000, 1.00000000, -279.37800000, 1361.43400000, 24.63220000, 51.48000000 );
    sub_2927( 10, 3.95000000, -5.03750000, 1.00000000, 0.90000000, 0.90000000, 1.50000000, 3.57500000, -4.79750000, 1.00000000, -276.83600000, 1358.84000000, 24.63220000, 231.84000000 );
    sub_2927( 11, 3.95000000, -3.23750000, 1.00000000, 0.90000000, 0.90000000, 1.50000000, 3.50000000, -3.53750000, 1.00000000, -276.67550000, 1361.60400000, 24.63220000, 347.04000000 );
    sub_2927( 12, -4.96000000, -9.02500000, 1.00000000, 1.00000000, 0.85000000, 1.50000000, -5.16000000, -7.22500000, 1.00000000, -285.34080000, 1355.62000000, 24.63240000, 292.68000000 );
    sub_2927( 13, -4.96000000, -7.32500000, 1.00000000, 1.00000000, 0.85000000, 1.50000000, -5.16000000, -7.22500000, 1.00000000, -285.43080000, 1357.40000000, 24.62200000, 250.00000000 );
    sub_2927( 14, -4.96000000, -4.23750000, 1.00000000, 0.75000000, 1.00000000, 1.50000000, -2.65500000, 1.36250000, 1.00000000, -285.63110000, 1360.02300000, 24.63300000, 222.48000000 );
    sub_2927( 15, -4.96000000, -1.22500000, 1.00000000, 1.00000000, 0.85000000, 1.50000000, -5.16000000, -1.22500000, 1.00000000, -285.16080000, 1363.04100000, 24.63240000, 240.00000000 );
    sub_2927( 16, -4.71000000, 0.82500000, 1.00000000, 1.25000000, 1.20000000, 1.50000000, -5.16000000, 0.47500000, 1.00000000, -285.16080000, 1365.00000000, 24.63240000, 279.72000000 );
    sub_2927( 17, 3.55000000, 1.36300000, 1.00000000, 0.90000000, 0.80000000, 1.50000000, 3.80500000, 1.36250000, 1.00000000, -277.97060000, 1365.32100000, 24.63280000, 241.20000000 );
    sub_2927( 18, 5.35000000, 1.36300000, 1.00000000, 0.90000000, 0.80000000, 1.50000000, 6.50000000, -0.12500000, 1.00000000, -275.77350000, 1364.83400000, 24.63240000, 165.00000000 );
    sub_2927( 19, -2.86000000, -9.12500000, 1.00000000, 1.10000000, 0.75000000, 1.50000000, -3.16000000, -10.14500000, 1.00000000, -284.06830000, 1355.77000000, 24.63250000, 180.00000000 );
    sub_2927( 20, 3.90000000, -9.12500000, 1.00000000, 1.20000000, 0.75000000, 1.50000000, 6.50000000, -7.00000000, 1.00000000, -277.09360000, 1355.76200000, 24.63240000, 186.00000000 );
    sub_2927( 21, 6.10000000, -8.10000000, 1.00000000, 1.00000000, 1.85000000, 1.50000000, 6.50000000, -8.50000000, 1.00000000, -275.75050000, 1355.96500000, 24.63210000, 270.00000000 );
    return;
}

void sub_2927(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    l_U195[uParam0]._fU20 = {uParam1};
    l_U195[uParam0]._fU32 = {uParam4};
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U976, l_U195[uParam0]._fU20, ref l_U195[uParam0]._fU8 );
    l_U195[uParam0]._fU44 = {uParam7};
    l_U195[uParam0]._fU56 = {uParam10};
    l_U195[uParam0]._fU68 = uParam13;
    return;
}

void sub_4653()
{
    sub_4701( 0, -285.26730000, 1357.94200000, 26.05647000, -5.93110500, -0.00000000, 6.11925400, 45.00000000 );
    sub_4701( 1, -285.95310000, 1363.87600000, 25.74338000, -4.28226500, 0.00000000, -159.80550000, 45.00000000 );
    sub_4701( 2, -281.83620000, 1358.26700000, 25.87825000, -0.67026800, 0.00000000, 40.25751000, 45.00000000 );
    sub_4701( 3, -283.44250000, 1364.06700000, 25.56329000, -1.35285800, -0.00000000, -157.70590000, 45.00000000 );
    sub_4701( 4, -282.96480000, 1356.53300000, 25.72100000, -5.58437800, -0.00000000, -20.03690000, 45.00000000 );
    sub_4701( 5, -283.11490000, 1364.21700000, 25.79455000, -7.90652700, -0.00000000, -156.87700000, 45.00000000 );
    sub_4701( 6, -279.03240000, 1356.33600000, 25.50126000, -2.29133400, 0.00000000, 19.92876000, 45.00000000 );
    sub_4701( 7, -279.30380000, 1364.57700000, 25.86644000, -10.76821000, -0.00000000, 169.51370000, 45.00000000 );
    sub_4701( 8, -278.91130000, 1357.36100000, 25.89170000, -1.44913700, 0.00000000, 17.37921000, 45.00000000 );
    sub_4701( 9, -280.23910000, 1362.92600000, 26.04679000, -8.36518100, 0.00000000, -147.67890000, 45.00000000 );
    sub_4701( 10, -275.93820000, 1357.43500000, 25.91911000, -0.82381000, 0.00000000, 28.35691000, 45.00000000 );
    sub_4701( 11, -275.73520000, 1363.02500000, 25.98920000, -4.07092100, -0.00000000, 154.10170000, 45.00000000 );
    sub_4701( 12, -283.97800000, 1356.32800000, 26.02860000, -4.80971400, -0.00000000, 119.39640000, 45.00000000 );
    sub_4701( 13, -284.35040000, 1356.28800000, 25.99253000, -2.76296800, -0.00000000, 46.30105000, 45.00000000 );
    sub_4701( 14, -284.99400000, 1358.55300000, 26.10016000, -7.45345600, 0.00000000, 27.11959000, 45.00000000 );
    sub_4701( 15, -283.57830000, 1362.52600000, 26.08505000, -8.04248700, 0.00000000, 77.05931000, 45.00000000 );
    sub_4701( 16, -283.15810000, 1364.41900000, 25.97610000, -8.27773600, 0.00000000, 73.07284000, 45.00000000 );
    sub_4701( 17, -276.43640000, 1363.28000000, 26.03255000, -4.05362700, -0.00000000, 43.66415000, 45.00000000 );
    sub_4701( 18, -277.11800000, 1363.28800000, 26.11416000, -4.28817800, -0.00000000, -33.59678000, 45.00000000 );
    sub_4701( 19, -285.30680000, 1355.36500000, 24.91185000, -1.01929100, 0.00000000, -78.60535000, 45.00000000 );
    sub_4701( 20, -278.36720000, 1354.91000000, 25.19579000, -16.73037000, -0.00000100, -58.45360000, 45.00000000 );
    sub_4701( 21, -274.73400000, 1354.69400000, 25.05148000, -13.86558000, 0.00000000, 29.62065000, 45.00000000 );
    return;
}

void sub_4701(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    l_U195[uParam0]._fU104 = {uParam1};
    l_U195[uParam0]._fU116 = {uParam4};
    l_U195[uParam0]._fU128 = uParam7;
    return;
}

void sub_5702()
{
    return;
}

void sub_5756()
{
    sub_5772( l_U940._fU4 );
    GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1005 );
    GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1006 );
    while (NOT sub_5916())
    {
        WAIT( 0 );
    }
    # -sub_C1FFC0-0xc214c8( 3, ref l_U940._fU40 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U940._fU44 );
    CREATE_CHAR( 4, l_U940._fU4, l_U940._fU8._fU0, l_U940._fU8._fU4, l_U940._fU8._fU8, ref l_U940._fU0, 1 );
    SET_CHAR_HEADING( l_U940._fU0, 230.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U940._fU0, l_U977 );
    sub_6232();
    SET_CHAR_HEADING( l_U940._fU0, 70.00000000 );
    SET_CHAR_DECISION_MAKER( l_U940._fU0, l_U940._fU40 );
    SET_COMBAT_DECISION_MAKER( l_U940._fU0, l_U940._fU44 );
    sub_6352( "" );
    sub_6479( 0, sub_572(), "NIKO", 0 );
    sub_6479( 3, l_U940._fU0, "MONO_ASST", 0 );
    return;
}

void sub_5772(unknown uParam0)
{
    sub_5800( "REQUEST_A_MODEL(" );
    sub_5800( GET_MODEL_NAME_FOR_DEBUG( uParam0 ) );
    sub_5800( ")\n" );
    REQUEST_MODEL( uParam0 );
    l_U6[l_U39] = uParam0;
    l_U39++;
    return;
}

void sub_5800(unknown uParam0)
{
    return;
}

int sub_5916()
{
    int I;

    if (l_U39 != 0)
    {
        for ( I = 0; I <= (l_U39 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U6[I] )))
            {
                REQUEST_MODEL( l_U6[I] );
                sub_5800( "REQUEST_MODEL(" );
                sub_5800( GET_MODEL_NAME_FOR_DEBUG( l_U6[I] ) );
                sub_5800( ") [" );
                sub_6043( I );
                sub_5800( "]\n" );
                return 0;
            }
        }
    }
    return 1;
}

void sub_6043(unknown uParam0)
{
    return;
}

void sub_6232()
{
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U940._fU0 );
    sub_1214( l_U940._fU0, ref l_U940._fU48, 0 );
    return;
}

void sub_6352(unknown uParam0)
{
    StrCopy( ref l_U74._fU0, uParam0, 16 );
    sub_6371();
    return;
}

void sub_6371()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U74._fU16[I]._fU0 = nil;
        StrCopy( ref l_U74._fU16[I]._fU4, "", 32 );
        l_U74._fU344[I] = 0;
    }
    return;
}

void sub_6479(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U74._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U74._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_6563( "\n PED NUMBER ", uParam0 );
    sub_6603( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_6563(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6603(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_6684()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CHAR_DEAD( l_U940._fU0 )))
    {
        if (IS_CHAR_ON_SCREEN( l_U940._fU0 ))
        {
            GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U976, l_U978, ref uVar2 );
            GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U976, l_U981, ref uVar5 );
            if (IS_CHAR_IN_AREA_3D( sub_572(), uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

boolean sub_7031(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
    return iVar4 == (GET_HASH_KEY( uParam1 ));
}

int sub_7105()
{
    if (NOT (IS_CHAR_INJURED( l_U940._fU0 )))
    {
        if (sub_7031( sub_572(), l_U977 ))
        {
            if (sub_7031( l_U940._fU0, l_U977 ))
            {
                if ((IS_CHAR_IN_ANY_CAR( sub_572() )) || (IS_WANTED_LEVEL_GREATER( sub_639(), 0 )))
                {
                    if (NOT l_U1013)
                    {
                        sub_7234( 1, ref l_U940._fU120, 1, ref l_U940._fU0 );
                        l_U1013 = 1;
                        l_U1014 = 0;
                        l_U1022 = 1;
                    }
                    return 0;
                }
                else if (NOT g_U8781)
                {
                    if (NOT l_U1021)
                    {
                        PRINT_HELP( "CLO_CANT" );
                        l_U1021 = 1;
                    }
                    return 0;
                }
                else if (NOT l_U1013)
                {
                    if (NOT l_U1022)
                    {
                        sub_7234( 3, ref l_U940._fU120, 1, ref l_U940._fU0 );
                        l_U1013 = 1;
                        l_U1014 = 0;
                    }
                }
                if (((IS_CHAR_SHOOTING( sub_572() )) || (g_U10570)) || (l_U934))
                {
                    if (sub_7031( sub_572(), l_U977 ))
                    {
                        if (sub_9458( l_U940._fU0, 91 ))
                        {
                            CLEAR_CHAR_TASKS( l_U940._fU0 );
                            TASK_COMBAT( l_U940._fU0, sub_572() );
                        }
                        ALTER_WANTED_LEVEL_NO_DROP( sub_639(), 1 );
                        if (IS_CHAR_SHOOTING( sub_572() ))
                        {
                            SAY_AMBIENT_SPEECH( l_U940._fU0, "SHOP_SHOTS_FIRED", 1, 0, 0 );
                        }
                        if (g_U10570)
                        {
                            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_639() );
                            PLAY_SOUND_FROM_POSITION( -1, "SHOP_ALARMS_KLAXON", l_U1009 );
                        }
                        else
                        {
                            WAIT( 500 );
                            PLAY_SOUND_FROM_POSITION( -1, "SHOP_ALARMS_RANDOM", l_U1009 );
                        }
                        l_U934 = 1;
                    }
                }
                else if ((IS_PLAYER_TARGETTING_CHAR( sub_639(), l_U940._fU0 )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_639(), l_U940._fU0 )))
                {
                    if (NOT l_U1015)
                    {
                        if (IS_CHAR_ARMED( sub_572(), 4 ))
                        {
                            sub_7234( 7, ref l_U940._fU120, 1, ref l_U940._fU0 );
                        }
                        else
                        {
                            sub_7234( 6, ref l_U940._fU120, 1, ref l_U940._fU0 );
                        }
                        l_U1015 = 1;
                    }
                }
                else if (NOT (sub_9866( l_U940._fU120 )))
                {
                    l_U1015 = 0;
                }
                if (NOT (sub_9866( l_U940._fU120 )))
                {
                    if (l_U1019 < 0)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 6000, 10000, ref l_U1020 );
                        GET_GAME_TIMER( ref l_U1019 );
                    }
                    else if (NOT l_U1017)
                    {
                        GET_GAME_TIMER( ref l_U1018 );
                        sub_5800( "  ** time to bitch: " );
                        sub_6043( (l_U1019 + l_U1020) - l_U1018 );
                        sub_10178();
                        if (l_U1018 > (l_U1019 + l_U1020))
                        {
                            switch (sub_10234())
                            {
                                case 0:
                                sub_7234( 8, ref l_U940._fU120, 1, ref l_U940._fU0 );
                                break;
                                case 1:
                                sub_7234( 10, ref l_U940._fU120, 1, ref l_U940._fU0 );
                                break;
                                case 2:
                                sub_7234( 9, ref l_U940._fU120, 1, ref l_U940._fU0 );
                                break;
                            }
                            l_U1017 = 1;
                        }
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U1019 );
                }
                if (sub_9458( l_U940._fU0, 115 ))
                {
                    if (TIMERB() > l_U1006)
                    {
                        if (sub_9458( l_U940._fU0, 34 ))
                        {
                            CLEAR_CHAR_TASKS( l_U940._fU0 );
                            TASK_START_SCENARIO_AT_POSITION( l_U940._fU0, "Scenario_Standing", l_U940._fU8, l_U940._fU20 );
                            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1006 );
                        }
                    }
                    else if (sub_9458( l_U940._fU0, 34 ))
                    {
                        CLEAR_CHAR_TASKS( l_U940._fU0 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U940._fU0, sub_572() );
                    }
                }
                else
                {
                    SETTIMERB( 0 );
                }
                if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U940._fU0, sub_572(), 0 )) AND (NOT l_U1016))
                {
                    sub_7234( 0, ref l_U940._fU120, 1, ref l_U940._fU0 );
                    l_U1016 = 1;
                    l_U1022 = 1;
                };;;
            }
            else if (NOT l_U936)
            {
                if (NOT (sub_7031( l_U940._fU0, l_U977 )))
                {
                    if (sub_7031( sub_572(), l_U977 ))
                    {
                        CLEAR_HELP();
                        PRINT_HELP( "SHOP_H_EMPTY" );
                        l_U936 = 1;
                    }
                }
            }
            return 0;;
        }
        else if (l_U936)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_H_EMPTY" ))
            {
                CLEAR_HELP();
            }
        }
        if (NOT l_U934)
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_2D( l_U940._fU0, l_U940._fU8._fU0, l_U940._fU8._fU4, 1.00000000, 1.00000000, 0 )))
            {
                if (sub_9458( l_U940._fU0, 17 ))
                {
                    TASK_GO_STRAIGHT_TO_COORD( l_U940._fU0, l_U940._fU8._fU0, l_U940._fU8._fU4, l_U940._fU8._fU8, 2, -2 );
                }
            }
            else
            {
                TASK_STAND_STILL( l_U940._fU0, -2 );
            }
        }
        if (NOT l_U1014)
        {
            if (NOT l_U1022)
            {
                sub_7234( 2, ref l_U940._fU120, 1, ref l_U940._fU0 );
                l_U1014 = 1;
            }
        }
        if ((sub_13218( sub_572(), l_U940._fU0 )) >= 25.00000000)
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLO_CANT" )))
            {
                l_U1021 = 0;
            }
            l_U1013 = 0;
        }
        if (NOT (sub_9866( l_U940._fU120 )))
        {
            if (IS_KEYBOARD_KEY_PRESSED( 2 ))
            {
                sub_7234( 1, ref l_U940._fU120, 1, ref l_U940._fU0 );
            }
            else if (IS_KEYBOARD_KEY_PRESSED( 3 ))
            {
                sub_7234( 11, ref l_U940._fU120, 1, ref l_U940._fU0 );
            }
            else if (IS_KEYBOARD_KEY_PRESSED( 4 ))
            {
                sub_7234( 12, ref l_U940._fU120, 1, ref l_U940._fU0 );
            };;;
        }
        return 1;
        break;
    }
    if (NOT l_U936)
    {
        if (DOES_CHAR_EXIST( l_U940._fU0 ))
        {
            PRINT_HELP( "SHOP_H_DEAD" );
            l_U936 = 1;
        }
    }
    return 0;
}

void sub_7234(int iParam0, unknown uParam1, int iParam2, unknown uParam3)
{
    char[16] cVar6;

    switch (iParam2)
    {
        case 0:
        StrCopy( ref cVar6, "CS1_", 16 );
        break;
        case 2:
        StrCopy( ref cVar6, "CS2_", 16 );
        break;
        case 1:
        StrCopy( ref cVar6, "CS3_", 16 );
        break;
        case 3:
        return 1;
        break;
        default:
          case 4: return 0;
    }
    switch (iParam0)
    {
        case 0:
        ConcatString(ref cVar6, "ATTACK", 16);
        break;
        case 1:
        ConcatString(ref cVar6, "GOAWAY", 16);
        break;
        case 2:
        ConcatString(ref cVar6, "GOODBYE", 16);
        break;
        case 3:
        ConcatString(ref cVar6, "GREET", 16);
        break;
        case 4:
        ConcatString(ref cVar6, "PANIC", 16);
        break;
        case 5:
        ConcatString(ref cVar6, "PURCH", 16);
        break;
        case 6:
        ConcatString(ref cVar6, "MONKEY", 16);
        break;
        case 7:
        ConcatString(ref cVar6, "TARGET", 16);
        break;
        case 8:
        ConcatString(ref cVar6, "NEG", 16);
        break;
        case 9:
        ConcatString(ref cVar6, "COMP", 16);
        break;
        case 10:
        ConcatString(ref cVar6, "ADVICE", 16);
        break;
        case 11:
        ConcatString(ref cVar6, "BARR", 16);
        break;
        case 12:
        ConcatString(ref cVar6, "WARN", 16);
        break;
        default:
          case 13: return 0;
    }
    if (NOT (IS_CHAR_DEAD( (uParam3^) )))
    {
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_572() );
    }
    if ((sub_7716()) AND (iParam2 == 0))
    {
        if (NOT g_U8839)
        {
            if (iParam0 == 5)
            {
                PRINTSTRING( "  * skipping speech ''" );
                PRINTSTRING( ref cVar6 );
                PRINTSTRING( "'' because ''roman3'' running and dateSpeech = CLOTHES_SHOP_PLAYER_PURCHASES  - " );
                PRINTSTRING( "gbPKMAL_25_displayed:" );
                sub_7934( g_U8839 );
                PRINTNL();
                g_U8839 = 1;
                return 0;
            }
        }
        if (NOT g_U8836)
        {
            if (iParam0 == 3)
            {
                PRINTSTRING( "  * skipping speech ''" );
                PRINTSTRING( ref cVar6 );
                PRINTSTRING( "'' because ''roman3'' running and dateSpeech = CLOTHES_SHOP_GREETING  - " );
                PRINTSTRING( "bClothes_bought_in_roman3:" );
                sub_7934( g_U8836 );
                PRINTNL();
                return 0;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( (uParam3^) )))
    {
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_572() );
    }
    sub_5800( "  * PLAY_SHOP_ASST_SPEECH(''" );
    sub_5800( ref cVar6 );
    sub_5800( "'')\n" );
    return sub_8298( ref cVar6, uParam1, 1, 0 );
}

void sub_7716()
{
    int Result;

    Result = 0;
    return Result;
}

void sub_7934(boolean bParam0)
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

void sub_8298(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_8321( uParam0, ref l_U74._fU0, uParam1, uParam2, uParam3 );
}

void sub_8321(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_8375( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_8375(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_8397( iParam1 )))
    {
        return 0;
    }
    l_U74._fU384 = 0;
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
    sub_9077( ref g_U8868, ref l_U74 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_8397(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_5800( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_5800( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_5800( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_9077(int iParam0, int iParam1)
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

int sub_9458(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_9866(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_5800( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_5800( "\n speech is not playing" );
    }
    return 0;
}

void sub_10178()
{
    if (g_U10602)
    {
        PRINTNL();
    }
    return;
}

int sub_10234()
{
    boolean bVar2;
    int iVar3;
    boolean bVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    bVar2 = false;
    iVar3 = 0;
    bVar4 = false;
    sub_10253( ref uVar5 );
    sub_10471( ref uVar6 );
    sub_10710( ref uVar7 );
    if (bVar4)
    {
        if (bVar2)
        {
            return 2;
        }
        else
        {
            return 1;
        }
        break;
    }
    if ((bVar2) || (iVar3))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_10253(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_572(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_572(), 5 );
    bVar8 = false;
    for ( I = 0; I < 2; I++ )
    {
        if (NOT bVar8)
        {
            sub_10321( I, ref iVar6, ref iVar7 );
            if ((iVar6 == iVar3) AND (iVar7 == iVar4))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 2;
    }
    return;
}

void sub_10321(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        default:
          case 2:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_10471(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_572(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_572(), 2 );
    bVar8 = false;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT bVar8)
        {
            sub_10539( I, ref iVar6, ref iVar7 );
            if ((iVar6 == iVar3) AND (iVar7 == iVar4))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 3;
    }
    return;
}

void sub_10539(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 2:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        default:
          case 3:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_10710(unknown uParam0)
{
    boolean bVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int I;

    bVar3 = false;
    sub_10724( 0, ref uVar4 );
    for ( I = 0; I < 10; I++ )
    {
        if (((I != 0) AND (I != 1)) AND ((NOT bVar3) == 1))
        {
            if (sub_12135( I, 0, 0 ))
            {
                (uParam0^) = I;
                bVar3 = true;
            }
        }
    }
    if (NOT bVar3)
    {
        (uParam0^) = 0;
    }
    return;
}

void sub_10724(unknown uParam0, int iParam1)
{
    switch (uParam0)
    {
        case 1:
        iParam1->_fU0 = g_U8789._fU0;
        iParam1->_fU4 = g_U8789._fU4;
        iParam1->_fU8 = g_U8789._fU8;
        iParam1->_fU12 = g_U8789._fU12;
        iParam1->_fU16 = g_U8789._fU16;
        iParam1->_fU20 = g_U8789._fU20;
        iParam1->_fU24 = g_U8789._fU24;
        break;
        case 0:
        sub_10923( iParam1 + 0 );
        sub_10471( iParam1 + 4 );
        sub_10253( iParam1 + 8 );
        sub_11288( iParam1 + 12 );
        sub_11494( iParam1 + 16 );
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
        break;
        case 2:
        iParam1->_fU0 = 0;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 3:
        iParam1->_fU0 = 1;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 4:
        iParam1->_fU0 = 2;
        iParam1->_fU4 = 1;
        iParam1->_fU8 = 1;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 5:
        iParam1->_fU0 = 3;
        iParam1->_fU4 = 2;
        iParam1->_fU8 = 1;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 6:
        iParam1->_fU0 = 4;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 7:
        iParam1->_fU0 = 5;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 8:
        iParam1->_fU0 = 6;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 9:
        iParam1->_fU0 = 7;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        default:
          case 10:
        iParam1->_fU0 = 8;
        iParam1->_fU4 = 3;
        iParam1->_fU8 = 2;
        iParam1->_fU12 = 1;
        iParam1->_fU16 = 1;
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
    }
    return;
}

void sub_10923(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_572(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_572(), 1 );
    bVar8 = false;
    for ( I = 0; I < 8; I++ )
    {
        if (NOT bVar8)
        {
            sub_10991( I, ref iVar6, ref iVar7 );
            if ((iVar6 == iVar3) AND (iVar7 == iVar4))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 8;
    }
    return;
}

void sub_10991(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 2:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 3:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 4:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 5:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 6:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 7:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        default:
          case 8:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_11288(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;

    GET_CHAR_PROP_INDEX( sub_572(), 0, ref iVar3 );
    (uParam0^) = 1;
    bVar6 = false;
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT bVar6)
        {
            sub_11341( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == 0)
    {
        uVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_572(), 8 );
        uVar8 = GET_CHAR_TEXTURE_VARIATION( sub_572(), 8 );
    }
    if (NOT bVar6)
    {
        (uParam0^) = 1;
    }
    return;
}

void sub_11341(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = -1;
        break;
        default:
          case 1: (uParam1^) = 2147483647;
    }
    return;
}

void sub_11494(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_572(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT bVar6)
        {
            sub_11543( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 1;
    }
    return;
}

void sub_11543(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = -1;
        break;
        default:
          case 1: (uParam1^) = 2147483647;
    }
    return;
}

int sub_12135(unknown uParam0, unknown uParam1, boolean bParam2)
{
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

    sub_10724( uParam0, ref uVar5 );
    sub_10724( uParam1, ref uVar12 );
    if ((uVar5._fU0 != uVar12._fU0) AND (NOT ((uVar5._fU0 == 8) || (uVar12._fU0 == 8))))
    {
        return 0;
    }
    if ((uVar5._fU4 != uVar12._fU4) AND (NOT ((uVar5._fU4 == 3) || (uVar12._fU4 == 3))))
    {
        return 0;
    }
    if ((uVar5._fU8 != uVar12._fU8) AND (NOT ((uVar5._fU8 == 2) || (uVar12._fU8 == 2))))
    {
        return 0;
    }
    if (bParam2)
    {
        if ((uVar5._fU12 != uVar12._fU12) AND (NOT ((uVar5._fU12 == 1) || (uVar12._fU12 == 1))))
        {
            return 0;
        }
        if ((uVar5._fU16 != uVar12._fU16) AND (NOT ((uVar5._fU16 == 1) || (uVar12._fU16 == 1))))
        {
            return 0;
        }
    }
    return 1;
}

void sub_13218(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    if ((NOT (DOES_CHAR_EXIST( uParam0 ))) || (NOT (DOES_CHAR_EXIST( uParam1 ))))
    {
        return 9999.00000000;
        break;
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    else
    {
        N_1363505769( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
    }
    else
    {
        N_1363505769( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
    }
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref Result );
    return Result;
}

int sub_13702(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if (sub_7031( sub_572(), uParam0 ))
    {
        if (NOT (HAVE_ANIMS_LOADED( "clothing" )))
        {
            REQUEST_ANIMS( "clothing" );
        }
        else if (NOT l_U1012)
        {
            l_U1012 = 1;
        }
        return 1;;
    }
    else if (HAVE_ANIMS_LOADED( "clothing" ))
    {
        GET_CHAR_COORDINATES( sub_572(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar6._fU0, uVar6._fU4, uParam1._fU0, uParam1._fU4, ref fVar9 );
        if (fVar9 > 15.00000000)
        {
            REMOVE_ANIMS( "clothing" );
            l_U1012 = 0;
        }
    }
    return 0;
}

int sub_14098(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    if (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( uParam0, uParam1 ))
    {
        if ((uParam2^) < 0)
        {
            GET_GAME_TIMER( uParam2 );
        }
        GET_GAME_TIMER( ref iVar5 );
        sub_5800( "  ''" );
        sub_5800( uParam0 );
        sub_5800( "'', " );
        sub_6043( uParam1 );
        sub_5800( "    //" );
        sub_6043( iVar5 - (uParam2^) );
        sub_5800( "\n" );
        if ((iVar5 - (uParam2^)) > 2000)
        {
            CLEAR_HELP();
        }
        return 1;
    }
    (uParam2^) = -1;
    return 0;
}

int sub_14873(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, int iParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45)
{
    int iVar48;

    if ((sub_9458( sub_572(), 80 )) AND (sub_9458( sub_572(), 88 )))
    {
        if (TIMERA() > iParam33)
        {
            TASK_PLAY_ANIM( sub_572(), "examine shirt", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref iParam33 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    if (g_U8842)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( (uParam34^) );
        iVar48 = (uParam34^) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar48 );
        PRINTSTRING( "  (50%)\n" );
    }
    else
    {
        iVar48 = (uParam34^);
    }
    if (sub_15154())
    {
        if ((NOT (IS_SCORE_GREATER( sub_639(), iVar48 - 1 ))) AND (NOT sub_15234()))
        {
            CLEAR_PRINTS();
            PRINT_HELP( sub_15312( uParam0._fU76, 0, 0 ) );
            while (NOT (sub_16156( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            return 1;
        }
        else
        {
            CLEAR_PRINTS();
            if (NOT sub_19497())
            {
                iVar48 = 0;
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8844, sub_15312( uParam0._fU76, 1, 1 ), 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8848, sub_15312( uParam0._fU76, 1, 1 ), 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8852, sub_15312( uParam0._fU76, 1, 1 ), 16 );
                    break;
                }
                PRINT_HELP( sub_15312( uParam0._fU76, 1, 1 ) );
            }
            else
            {
                PRINT_HELP_WITH_NUMBER( sub_15312( uParam0._fU76, 1, 0 ), iVar48 );
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8844, sub_15312( uParam0._fU76, 1, 0 ), 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8848, sub_15312( uParam0._fU76, 1, 0 ), 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8852, sub_15312( uParam0._fU76, 1, 0 ), 16 );
                    break;
                }
            }
            sub_19865( uParam37, uParam0._fU76, iVar48, uParam39, uParam45 );
            while (NOT (sub_16156( uParam35, uParam36, "null", "LB_TRYON", uParam37, 0, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            (uParam34^) = iVar48;
            return 1;
        }
    }
    else if (sub_20177( "null" ))
    {
        CLEAR_HELP();
        while (NOT (sub_16156( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_15312( uParam0._fU76, 3, 0 ), 4, "", "", "", iVar48, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_15312( uParam0._fU76, 3, 0 ), iVar48, 7500, 1 );
    };;;
    DISPLAY_CASH( 1 );
    return 0;
}

int sub_15154()
{
    if ((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_15234()
{
    if (g_U8837)
    {
        if (g_U8836)
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

string sub_15312(unknown uParam0, unknown uParam1, boolean bParam2)
{
    int iVar5;

    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        iVar5 = 0;
        break;
        case 8: iVar5 = 5;
    }
    switch (iVar5)
    {
        case 0:
        switch (uParam1)
        {
            case 0:
            return "HELP_POOR_T";
            break;
            case 1:
            if (NOT bParam2)
            {
                return "HELP_BOUGHT_T";
            }
            else
            {
                return "HELP_BOUGHT_T_F";
            }
            break;
            case 2:
            return "HELP_BUY_T";
            break;
            case 3:
            if (NOT g_U8842)
            {
                return "BUY_JACKET";
            }
            else
            {
                return "BUY_JACKET_A";
            }
            break;
        }
        break;
        case 1:
        switch (uParam1)
        {
            case 0:
            return "HELP_POOR_S";
            break;
            case 1:
            if (NOT bParam2)
            {
                return "HELP_BOUGHT_S";
            }
            else
            {
                return "HELP_BOUGHT_S_F";
            }
            break;
            case 2:
            return "HELP_BUY_S";
            break;
            case 3:
            if (NOT g_U8842)
            {
                return "BUY_SHIRT";
            }
            else
            {
                return "BUY_SHIRT_A";
            }
            break;
        }
        break;
        case 2:
        switch (uParam1)
        {
            case 0:
            return "HELP_POOR_J";
            break;
            case 1:
            if (NOT bParam2)
            {
                return "HELP_BOUGHT_J";
            }
            else
            {
                return "HELP_BOUGHT_J_F";
            }
            break;
            case 2:
            return "HELP_BUY_J";
            break;
            case 3:
            if (NOT g_U8842)
            {
                return "BUY_SWEATER";
            }
            else
            {
                return "BUY_SWEATER_A";
            }
            break;
        }
        break;
    }
    return "somethings gone wrong in get_torso_print_here()";
}

int sub_16156(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, unknown uParam6, boolean bParam7)
{
    unknown uVar10;
    int iVar11;

    if (((NOT IS_SCREEN_FADED_OUT()) AND (NOT bParam7)) AND (bParam5))
    {
        if (NOT IS_SCREEN_FADING())
        {
            DO_SCREEN_FADE_OUT( 0 );
            if (bParam5)
            {
                if (sub_16220( g_U8779, ref uVar10 ))
                {
                    PLAY_SOUND_FROM_PED( -1, sub_16277( uVar10 ), sub_572() );
                }
            }
        }
        return 0;
        break;
    }
    while (sub_16821())
    {
        WAIT( 0 );
    }
    sub_805( 5, uParam2 );
    sub_805( 5, "LB_LEAVE_H" );
    sub_805( 5, "BLANK" );
    sub_805( 2, uParam3 );
    sub_805( 2, "BLANK" );
    CLEAR_CHAR_TASKS( sub_572() );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_572(), 0 );
    if (bParam5)
    {
        sub_1185( sub_572(), l_U173 );
    }
    GET_GAME_TIMER( ref iVar11 );
    INCREMENT_INT_STAT_NO_MESSAGE( 50, iVar11 - (uParam6^) );
    switch (uParam4)
    {
        case 0:
        g_U8856 += iVar11 - (uParam6^);
        break;
        case 1:
        g_U8857 += iVar11 - (uParam6^);
        break;
        case 2:
        g_U8858 += iVar11 - (uParam6^);
        break;
    }
    (uParam6^) = 0;
    REGISTER_STRING_FOR_FRONTEND_STAT( 668, sub_17121() );
    CLEAR_PRINTS();
    SET_CAM_BEHIND_PED( sub_572() );
    FREEZE_CHAR_POSITION( sub_572(), 0 );
    sub_2370();
    g_U8780 = 0;
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 0 );
    }
    SET_PLAYER_CONTROL( sub_639(), 1 );
    SET_EVERYONE_IGNORE_PLAYER( sub_639(), 0 );
    sub_1026();
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    sub_19269( uParam0 );
    SET_USE_HIGHDOF( 0 );
    if (DOES_CAM_EXIST( (uParam1^) ))
    {
        if (IS_CAM_PROPAGATING( (uParam1^) ))
        {
            SET_CAM_PROPAGATE( (uParam1^), 0 );
            SET_CAM_ACTIVE( (uParam1^), 0 );
        }
        DESTROY_CAM( (uParam1^) );
    }
    sub_2413();
    g_U8779 = 1;
    return 1;
}

int sub_16220(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        return 1;
        break;
        default:
    }
    return 0;
}

string sub_16277(unknown uParam0)
{
    char[64] cVar3;

    switch (uParam0)
    {
        case 0:
        return "WARDROBE_CHANGE_TOP";
        break;
        case 1:
        return "WARDROBE_CHANGE_TOP_ZIP";
        break;
        case 2:
        return "WARDROBE_CHANGE_JACKET_LEATHER";
        break;
        case 3:
        return "WARDROBE_CHANGE_JACKET_LEATHER_ZIP";
        break;
        case 4:
        return "WARDROBE_CHANGE_PANTS";
        break;
        case 5:
        return "WARDROBE_CHANGE_PANTS_ZIP";
        break;
        case 6:
        return "WARDROBE_CHANGE_SHOES";
        break;
        case 7:
        SCRIPT_ASSERT( "GET_CLOTHES_AUDIO(number_of_clothes_audio)" );
        return "WARDROBE_CHANGE_SHOES";
        break;
    }
    StrCopy( ref cVar3, "GET_CLOTHES_AUDIO(unknown", 64 );
    ConcatString(ref cVar3, uParam0, 64);
    ConcatString(ref cVar3, ")", 64);
    SCRIPT_ASSERT( ref cVar3 );
    return "GET_CLOTHES_AUDIO(unknown this_clothes_audio)";
}

int sub_16821()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

string sub_17121()
{
    if (CAN_THE_STAT_HAVE_STRING( 668 ))
    {
        switch (sub_17145())
        {
            case 0:
            return "BINCO";
            break;
            case 1:
            return "ZIP";
            break;
            case 2:
            return "PERSEUS";
            break;
            case 4:
            PRINTSTRING( "  ** GET_NAME_FAVOURITE_SHOP('NUMBER_OF_CLOTHES_SHOPS') **\n" );
            PRINTSTRING( "  $ L" );
            PRINTINT( g_U8859 );
            PRINTSTRING( ", M" );
            PRINTINT( g_U8860 );
            PRINTSTRING( ", H" );
            PRINTINT( g_U8861 );
            PRINTNL();
            PRINTSTRING( "  # L" );
            PRINTINT( g_U8862 );
            PRINTSTRING( ", M" );
            PRINTINT( g_U8863 );
            PRINTSTRING( ", H" );
            PRINTINT( g_U8864 );
            PRINTNL();
            PRINTSTRING( "  @ L" );
            PRINTINT( g_U8856 );
            PRINTSTRING( ", M" );
            PRINTINT( g_U8857 );
            PRINTSTRING( ", H" );
            PRINTINT( g_U8858 );
            PRINTNL();
            return "null";
            break;
        }
        PRINTSTRING( "  ** GET_NAME_FAVOURITE_SHOP(" );
        PRINTINT( sub_17145() );
        PRINTSTRING( ") **\n" );
        PRINTSTRING( "  $ L" );
        PRINTINT( g_U8859 );
        PRINTSTRING( ", M" );
        PRINTINT( g_U8860 );
        PRINTSTRING( ", H" );
        PRINTINT( g_U8861 );
        PRINTNL();
        PRINTSTRING( "  # L" );
        PRINTINT( g_U8862 );
        PRINTSTRING( ", M" );
        PRINTINT( g_U8863 );
        PRINTSTRING( ", H" );
        PRINTINT( g_U8864 );
        PRINTNL();
        PRINTSTRING( "  @ L" );
        PRINTINT( g_U8856 );
        PRINTSTRING( ", M" );
        PRINTINT( g_U8857 );
        PRINTSTRING( ", H" );
        PRINTINT( g_U8858 );
        PRINTNL();
        SCRIPT_ASSERT( "invalid get_shop_most_money()" );
        return "invalid get_shop_most_money() - ALWYN FUCKED UP AGAIN!!!";
        break;
    }
    return "GET_NAME_FAVOURITE_SHOP()";
}

void sub_17145()
{
    if ((g_U8859 > g_U8860) AND (g_U8859 > g_U8861))
    {
        return 0;
        break;
    }
    if ((g_U8860 > g_U8859) AND (g_U8860 > g_U8861))
    {
        return 1;
        break;
    }
    if ((g_U8861 > g_U8859) AND (g_U8861 > g_U8860))
    {
        return 2;
        break;
    }
    if (((g_U8859 == 0) AND (g_U8859 == 0)) AND (g_U8859 == 0))
    {
        return sub_17294( 8 );
        break;
    }
    if (((g_U8859 == g_U8860) AND (g_U8860 != g_U8861)) AND (g_U8861 != g_U8859))
    {
        return sub_17294( 5 );
        break;
    }
    if (((g_U8859 != g_U8860) AND (g_U8860 == g_U8861)) AND (g_U8861 != g_U8859))
    {
        return sub_17294( 6 );
        break;
    }
    if (((g_U8859 != g_U8860) AND (g_U8860 != g_U8861)) AND (g_U8861 == g_U8859))
    {
        return sub_17294( 7 );
        break;
    }
    return sub_17294( 8 );
}

void sub_17294(int iParam0)
{
    if (((g_U8862 > g_U8863) AND (g_U8862 > g_U8864)) AND (((iParam0 == 5) || (iParam0 == 7)) || (iParam0 == 8)))
    {
        return 0;
        break;
    }
    if (((g_U8863 > g_U8862) AND (g_U8863 > g_U8864)) AND (((iParam0 == 6) || (iParam0 == 5)) || (iParam0 == 8)))
    {
        return 1;
        break;
    }
    if (((g_U8864 > g_U8862) AND (g_U8864 > g_U8863)) AND (((iParam0 == 7) || (iParam0 == 6)) || (iParam0 == 8)))
    {
        return 2;
        break;
    }
    if (((g_U8862 == 0) AND (g_U8862 == 0)) AND (g_U8862 == 0))
    {
        return sub_17488( 8 );
        break;
    }
    if ((((g_U8862 == g_U8863) AND (g_U8863 != g_U8864)) AND (g_U8864 != g_U8862)) AND ((iParam0 == 5) || (iParam0 == 8)))
    {
        return sub_17488( 5 );
        break;
    }
    if ((((g_U8862 != g_U8863) AND (g_U8863 == g_U8864)) AND (g_U8864 != g_U8862)) AND ((iParam0 == 6) || (iParam0 == 8)))
    {
        return sub_17488( 6 );
        break;
    }
    if ((((g_U8862 != g_U8863) AND (g_U8863 != g_U8864)) AND (g_U8864 == g_U8862)) AND ((iParam0 == 7) || (iParam0 == 8)))
    {
        return sub_17488( 7 );
        break;
    }
    return sub_17488( 8 );
}

int sub_17488(int iParam0)
{
    if (((g_U8856 > g_U8857) AND (g_U8856 > g_U8858)) AND (((iParam0 == 5) || (iParam0 == 7)) || (iParam0 == 8)))
    {
        return 0;
        break;
    }
    if (((g_U8857 > g_U8856) AND (g_U8857 > g_U8858)) AND (((iParam0 == 6) || (iParam0 == 5)) || (iParam0 == 8)))
    {
        return 1;
        break;
    }
    if (((g_U8858 > g_U8856) AND (g_U8858 > g_U8857)) AND (((iParam0 == 7) || (iParam0 == 6)) || (iParam0 == 8)))
    {
        return 2;
        break;
    }
    if (((g_U8856 == 0) AND (g_U8856 == 0)) AND (g_U8856 == 0))
    {
        return 4;
        break;
    }
    if ((((g_U8856 == g_U8857) AND (g_U8857 != g_U8858)) AND (g_U8858 != g_U8856)) AND ((iParam0 == 5) || (iParam0 == 8)))
    {
        return 5;
        break;
    }
    if ((((g_U8856 != g_U8857) AND (g_U8857 == g_U8858)) AND (g_U8858 != g_U8856)) AND ((iParam0 == 6) || (iParam0 == 8)))
    {
        return 6;
        break;
    }
    if ((((g_U8856 != g_U8857) AND (g_U8857 != g_U8858)) AND (g_U8858 == g_U8856)) AND ((iParam0 == 7) || (iParam0 == 8)))
    {
        return 7;
        break;
    }
    return 8;
}

void sub_19269(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    SET_WIDESCREEN_BORDERS( 0 );
    if ((uParam0^) != 0)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

int sub_19497()
{
    if (g_U8837)
    {
        if (NOT g_U8836)
        {
            g_U8836 = 1;
            return 0;
        }
        else
        {
            return 1;
        }
        break;
    }
    return 1;
}

void sub_19865(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_639(), -1 * iParam2 );
    g_U8803[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8859 += iParam2;
        g_U8862++;
        break;
        case 1:
        g_U8860 += iParam2;
        g_U8863++;
        break;
        case 2:
        g_U8861 += iParam2;
        g_U8864++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_7234( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_20177(unknown uParam0)
{
    if (sub_20188( 5, 0 ))
    {
        if (sub_20475( 5, uParam0, 0 ))
        {
            sub_805( 5, uParam0 );
            return 1;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_639() )))
    {
        sub_805( 5, uParam0 );
        return 1;
    }
    return 0;
}

int sub_20188(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_639() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_639() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_639() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_20284())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_572() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_20369())
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

int sub_20284()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_20369()
{
    return sub_20380( 0, 0 );
}

int sub_20380(boolean bParam0, unknown uParam1)
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

int sub_20475(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_20188( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_639(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_20750();
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

void sub_20750()
{
    return sub_20380( 1, 1 );
}

int sub_21384(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, int iParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45)
{
    int iVar48;

    iVar48 = (uParam34^);
    if (g_U8842)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar48 );
        iVar48 = (uParam34^) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar48 );
        PRINTSTRING( "  (50%)\n" );
    }
    if (sub_15154())
    {
        if ((NOT (IS_SCORE_GREATER( sub_639(), iVar48 - 1 ))) AND (NOT sub_15234()))
        {
            CLEAR_PRINTS();
            PRINT_HELP( "HELP_POOR_L" );
            while (NOT (sub_16156( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            return 1;
        }
        else
        {
            CLEAR_PRINTS();
            if (NOT sub_19497())
            {
                iVar48 = 0;
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8844, "HELP_BOUGHT_L_F", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8848, "HELP_BOUGHT_L_F", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8852, "HELP_BOUGHT_L_F", 16 );
                    break;
                }
                PRINT_HELP( "HELP_BOUGHT_L_F" );
            }
            else
            {
                PRINT_HELP_WITH_NUMBER( "HELP_BOUGHT_L", iVar48 );
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8844, "HELP_BOUGHT_L", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8848, "HELP_BOUGHT_L", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8852, "HELP_BOUGHT_L", 16 );
                    break;
                }
            }
            sub_22021( uParam37, uParam0._fU80, iVar48, uParam39, uParam45 );
            while (NOT (sub_16156( uParam35, uParam36, "null", "LB_TRYON", uParam37, 0, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            (uParam34^) = iVar48;
            return 1;
        }
    }
    else if (sub_20177( "null" ))
    {
        CLEAR_HELP();
        while (NOT (sub_16156( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT g_U8842)
    {
        if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "BUY_TROUSERS", 4, "", "", "", iVar48, -1, -1, -1, -1, -1 )))
        {
            PRINT_WITH_NUMBER( "BUY_TROUSERS", iVar48, 7500, 1 );
        }
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "BUY_TROUSERS_A", 4, "", "", "", iVar48, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( "BUY_TROUSERS_A", iVar48, 7500, 1 );
    };;;;
    if ((sub_9458( sub_572(), 80 )) AND (sub_9458( sub_572(), 88 )))
    {
        if (TIMERA() > iParam33)
        {
            TASK_PLAY_ANIM( sub_572(), "examine legs", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref iParam33 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    DISPLAY_CASH( 1 );
    return 0;
}

void sub_22021(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_639(), -1 * iParam2 );
    g_U8812[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8859 += iParam2;
        g_U8862++;
        break;
        case 1:
        g_U8860 += iParam2;
        g_U8863++;
        break;
        case 2:
        g_U8861 += iParam2;
        g_U8864++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_7234( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_22841(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    unknown uVar16;
    int iVar17;
    string sVar18;
    int iVar19;
    unknown uVar20;
    int iVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    sub_10253( ref uVar16 );
    iVar17 = (uParam2^);
    if (g_U8842)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar17 );
        iVar17 = (uParam2^) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar17 );
        PRINTSTRING( "  (50%)\n" );
    }
    if (g_U8816[uVar16])
    {
        if ((NOT g_U8836) AND (NOT g_U15811[6]))
        {
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", sub_23033( uVar16 ) )))
            {
                CLEAR_HELP();
                PRINT_HELP_FOREVER_WITH_STRING( "LB_TRYON_R3", sub_23033( uVar16 ) );
            }
            sVar18 = "LB_TRYON_R3";
        }
        else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "HELP_OWN_F", sub_23033( uVar16 ) )))
        {
            CLEAR_HELP();
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_F", sub_23033( uVar16 ) );
        }
        sVar18 = "HELP_OWN_F";;
    }
    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BUY_F" )))
    {
        CLEAR_HELP();
        PRINT_HELP_FOREVER( "HELP_BUY_F" );
    }
    sVar18 = "HELP_BUY_F";;
    GET_KEYBOARD_MOVE_INPUT( ref iVar19, ref uVar20 );
    if (IS_BUTTON_PRESSED( 0, 0 ))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar21, ref uVar22, ref uVar23, ref uVar24 );
        if (NOT IS_USING_CONTROLLER())
        {
            GET_KEYBOARD_MOVE_INPUT( ref iVar21, ref uVar22 );
        }
        if (iVar21 < 65472)
        {
            sub_23533( 1, uParam0 );
        }
        else if (iVar21 >= 64)
        {
            sub_23533( 0, uParam0 );
        }
    }
    else if (((IS_BUTTON_PRESSED( 0, 10 )) || (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 ))) || (iVar19 < 65472))
    {
        sub_23533( 1, uParam0 );
    }
    else if (((IS_BUTTON_PRESSED( 0, 11 )) || (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 ))) || (iVar19 >= 64))
    {
        sub_23533( 0, uParam0 );
    }
    else if (sub_15154())
    {
        if (NOT ((g_U8816[uVar16]) AND (NOT ((g_U8836) || (g_U15811[6])))))
        {
            CLEAR_PRINTS();
            if (NOT sub_19497())
            {
                iVar17 = 0;
                PRINT_HELP( "HELP_BOUGHT_F_F" );
                switch (uParam5)
                {
                    case 0:
                    StrCopy( ref g_U8844, "HELP_BOUGHT_F_F", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8848, "HELP_BOUGHT_F_F", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8852, "HELP_BOUGHT_F_F", 16 );
                    break;
                }
                sub_24281( uParam5, uVar16, iVar17, uParam7, uParam13 );
                while (NOT (sub_16156( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 0, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                (uParam2^) = iVar17;
                return 1;
            }
            else if (NOT (IS_SCORE_GREATER( sub_639(), iVar17 - 1 )))
            {
                CLEAR_PRINTS();
                PRINT_HELP( "HELP_POOR_F" );
                while (NOT (sub_16156( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 1, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                return 1;
            }
            else
            {
                CLEAR_PRINTS();
                PRINT_HELP_WITH_NUMBER( "HELP_BOUGHT_F", iVar17 );
                switch (uParam5)
                {
                    case 0:
                    StrCopy( ref g_U8844, "HELP_BOUGHT_F", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8848, "HELP_BOUGHT_F", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8852, "HELP_BOUGHT_F", 16 );
                    break;
                }
                sub_24281( uParam5, uVar16, iVar17, uParam7, uParam13 );
                while (NOT (sub_16156( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 0, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                (uParam2^) = iVar17;
                return 1;
            }
        }
    }
    else if (sub_20177( "BLANK" ))
    {
        CLEAR_HELP();
        while (NOT (sub_16156( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 1, ref uParam6, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_24982( uVar16, 3, 0 ), 4, "", "", "", iVar17, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_24982( uVar16, 3, 0 ), iVar17, 7500, 1 );
    };;;;;;
    if ((sub_9458( sub_572(), 80 )) AND (sub_9458( sub_572(), 88 )))
    {
        if (TIMERA() > iParam1)
        {
            TASK_PLAY_ANIM( sub_572(), "examine shoes", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref iParam1 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    DISPLAY_CASH( 1 );
    return 0;
}

string sub_23033(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "clo_FEET_0_0";
        break;
        case 1:
        return "clo_FEET_1_0";
        break;
        case 2: return "NUMBER_OF_PLAYER_CLOTHES_FEET";
    }
    SCRIPT_ASSERT( "get_feet_americanAmbiance_name - null" );
    return "null feet";
}

void sub_23533(boolean bParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    int iVar7;

    if (IS_SCREEN_FADED_IN())
    {
        iVar5 = -1;
        iVar6 = -1;
        sub_10253( ref iVar7 );
        for ( I = 0; I < (uParam1^); I++ )
        {
            if (iVar7 == (uParam1^)[I])
            {
                iVar5 = I;
            }
        }
        if (bParam0)
        {
            sub_5800( "  * left (iThis_foot: " );
            sub_6043( iVar5 );
            iVar6 = iVar5 - 1;
            if (iVar6 < 0)
            {
                iVar6 += (uParam1^);
            }
        }
        else
        {
            sub_5800( "  * right (iThis_foot: " );
            sub_6043( iVar5 );
            iVar6 = iVar5 + 1;
            if (iVar6 >= (uParam1^))
            {
                iVar6 -= (uParam1^);
            }
        }
        DO_SCREEN_FADE_OUT( 125 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        CLEAR_PRINTS();
        sub_5800( "),  next: " );
        sub_6043( iVar6 );
        sub_10178();
        sub_23825( (uParam1^)[iVar6] );
        DO_SCREEN_FADE_IN( 125 );
    }
    WAIT( 0 );
    return;
}

void sub_23825(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_10321( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_572(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_572(), 5 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_572(), 5, iVar3, iVar4 );
    }
    return;
}

void sub_24281(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_639(), -1 * iParam2 );
    g_U8816[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8859 += iParam2;
        g_U8862++;
        break;
        case 1:
        g_U8860 += iParam2;
        g_U8863++;
        break;
        case 2:
        g_U8861 += iParam2;
        g_U8864++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_7234( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

string sub_24982(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam1)
    {
        case 0:
        return "CLOTHES_PRINT_POOR";
        break;
        case 1:
        return "CLOTHES_PRINT_BOUGHT";
        break;
        case 2:
        return "CLOTHES_PRINT_BUY_HELP";
        break;
        case 3:
        switch (uParam0)
        {
            case 0:
            if (NOT g_U8842)
            {
                return "buy_FEET_0_0";
            }
            else
            {
                return "buy_FEET_0_0_A";
            }
            break;
            default:
              case 2: return "NUMBER_OF_PLAYER_CLOTHES_FEET";
        }
        break;
        default:
          case 4: return "NUMBER_OF_TORSO_PRINT";
    }
    return "get_feet_print_here()";
}