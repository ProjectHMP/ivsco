void main()
{
    int I;
    unknown uVar3;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U172 = 0;
    l_U192 = 0;
    l_U193 = 31;
    l_U194 = 0;
    l_U195 = 0;
    l_U196 = 0;
    l_U1317 = 1;
    l_U1318 = 0;
    l_U1320 = 0;
    l_U1322 = 1;
    l_U1323 = -1;
    l_U1325 = -109247258;
    l_U1329 = "C_RUS_18x12_Room02";
    l_U1333 = {-1.60000000, -6.00000000, 1.40000000};
    l_U1336 = {2.00000000, 2.50000000, 1.50000000};
    l_U1339 = {893.67100000, -442.88300000, 16.76020000};
    l_U1342 = {-5.50000000, 0.50000000, 0.00000000};
    l_U1345 = {6.50000000, 5.75000000, 2.50000000};
    StrCopy( ref l_U1348, "blank", 16 );
    StrCopy( ref l_U1352, "blank", 16 );
    l_U1372 = 0;
    l_U1379 = 4.00000000;
    l_U1388 = -0.40000000;
    l_U1398 = -1;
    l_U1399 = 0;
    l_U1400 = 0;
    l_U1401 = 0;
    l_U1402 = 0;
    l_U1403 = 0;
    l_U1404 = 0;
    l_U1405 = 0;
    l_U1406 = 0;
    l_U1412 = 0;
    l_U1413 = 0;
    l_U1383 = {l_U1417._fU4[0]};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_386();
    }
    while (l_U1317)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U194)
            {
                case 0:
                GET_INTERIOR_AT_COORDS( l_U1383._fU0, l_U1383._fU4, l_U1383._fU8, ref l_U1328 );
                if (l_U1328 != nil)
                {
                    sub_2850();
                    sub_8138();
                    l_U194 = 1;
                }
                break;
                case 1:
                if (NOT g_U8834)
                {
                    if (g_U15811[6])
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 0, 0.00000000 );
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 0, 0.00000000 );
                        l_U194 = 5;
                    }
                    else
                    {
                        l_U194 = 2;
                    }
                }
                else
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 0, 0.00000000 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 0, 0.00000000 );
                    l_U194 = 5;
                }
                break;
                case 2:
                if (l_U1328 == nil)
                {
                    GET_INTERIOR_AT_COORDS( l_U1383._fU0, l_U1383._fU4, l_U1383._fU8, ref l_U1328 );
                }
                else if ((LOCATE_CHAR_ON_FOOT_3D( sub_592(), l_U1339._fU0, l_U1339._fU4, l_U1339._fU8, 1.60000000, 1.60000000, 2.00000000, 0 )) || ((LOCATE_CHAR_ON_FOOT_3D( sub_592(), l_U1383._fU0 + l_U1342._fU0, l_U1383._fU4 + l_U1342._fU4, l_U1383._fU8 + l_U1342._fU8, l_U1345._fU0, l_U1345._fU4, l_U1345._fU8, 0 )) AND (sub_9395( sub_592(), l_U1329 ))))
                {
                    if (sub_9452( l_U1329, l_U1383 ))
                    {
                        if (NOT sub_9690())
                        {
                            if ((g_U15811[6]) || (g_U8834))
                            {
                                l_U194 = 5;
                            }
                            else
                            {
                                sub_9748();
                            }
                        }
                        else
                        {
                            sub_9748();
                        }
                    }
                }
                break;
                case 4:
                if (sub_13629())
                {
                    g_U8834 = 1;
                    l_U194 = 1;
                }
                break;
                case 5:
                l_U1416 = 0;
                if (sub_9452( l_U1329, l_U1383 ))
                {
                    if (sub_9748())
                    {
                        for ( l_U1378 = 0; l_U1378 < 31; l_U1378++ )
                        {
                            if ((LOCATE_CHAR_ON_FOOT_3D( sub_592(), l_U278[l_U1378]._fU8._fU0, l_U278[l_U1378]._fU8._fU4, l_U278[l_U1378]._fU8._fU8, l_U278[l_U1378]._fU32._fU0, l_U278[l_U1378]._fU32._fU4, l_U278[l_U1378]._fU32._fU8, 0 )) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_H_EXIT" ))))
                            {
                                if (NOT (sub_17191( ref g_U8844, l_U1321, ref l_U1323 )))
                                {
                                    ;
                                }
                                l_U1416 = 1;
                            }
                        }
                    }
                    else if (IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        for ( I = 0; I < 31; I++ )
                        {
                            if (NOT (IS_STRING_NULL( l_U278[I]._fU4 )))
                            {
                                if (((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", l_U278[I]._fU4 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", l_U278[I]._fU4 ))) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", l_U278[I]._fU4 )))
                                {
                                    CLEAR_HELP();
                                }
                            }
                            sub_825( 2, "BLANK" );
                        }
                    }
                    if (NOT l_U1416)
                    {
                        if ((((((IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref g_U8844, l_U1321 )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_CS_01" )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_CS_02" )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_CS_05" )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_H_EXIT" ))))
                        {
                            for ( I = 0; I < 31; I++ )
                            {
                                if (NOT (IS_STRING_NULL( l_U278[I]._fU4 )))
                                {
                                    if (((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", l_U278[I]._fU4 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", l_U278[I]._fU4 ))) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", l_U278[I]._fU4 )))
                                    {
                                        CLEAR_HELP();
                                    }
                                }
                                sub_825( 2, "BLANK" );
                            }
                        }
                        sub_825( 2, uVar3 );
                        l_U1322 = 1;
                    }
                    if ((NOT g_U8835) AND (g_U15811[6]))
                    {
                        if (NOT (sub_9395( sub_592(), l_U1329 )))
                        {
                            PRINT_HELP( "SHOP_H_EXIT" );
                            g_U8835 = 1;
                        }
                    }
                }
                break;
                case 6:
                if (sub_18018( l_U278[l_U193], l_U1373, ref l_U1321, ref l_U1362, ref l_U1363, 0, l_U1377, l_U1356, l_U1324 ))
                {
                    l_U194 = 5;
                }
                break;
                case 7:
                if (sub_24425( l_U278[l_U193], l_U1373, ref l_U1321, ref l_U1362, ref l_U1363, 0, l_U1377, l_U1356, l_U1324 ))
                {
                    l_U194 = 5;
                }
                break;
                case 8:
                switch (l_U193)
                {
                    case 0:
                    if (sub_25884( ref l_U1308, l_U1373, ref l_U1321, ref l_U1362, ref l_U1363, 0, l_U1377, l_U1356, l_U1324 ))
                    {
                        l_U194 = 5;
                    }
                    break;
                    case 1:
                    case 2:
                    case 3:
                    if (sub_25884( ref l_U1312, l_U1373, ref l_U1321, ref l_U1362, ref l_U1363, 0, l_U1377, l_U1356, l_U1324 ))
                    {
                        l_U194 = 5;
                    }
                    break;
                    default: PRINTSTRING( "more baddness... " );
                }
                break;
                break;
                case 9:
                if (sub_28919( 0, l_U1377, l_U1356 ))
                {
                    l_U194 = 5;
                }
                break;
                case 10:
                if (sub_31146( 0, l_U1377, l_U1356 ))
                {
                    l_U194 = 5;
                }
                break;
            }
        }
        else
        {
            l_U1317 = 0;
        }
    }
    sub_386();
    return;
}

void sub_386()
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1324 );
    sub_406();
    REMOVE_DECISION_MAKER( l_U1326 );
    REMOVE_DECISION_MAKER( l_U1327 );
    REMOVE_ANIMS( "clothing" );
    if (NOT (IS_CHAR_DEAD( sub_592() )))
    {
        FREEZE_CHAR_POSITION( sub_592(), 0 );
        if ((IS_PLAYER_PLAYING( sub_659() )) AND (l_U1318))
        {
            SET_PLAYER_CONTROL( sub_659(), 1 );
            l_U1318 = 0;
        }
    }
    sub_751( ref l_U1363, ref l_U1362, ref l_U1348, ref l_U1352, 0, IS_THIS_A_MINIGAME_SCRIPT() );
    StrCopy( ref g_U8844, "blank", 16 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_406()
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

void sub_592()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_659()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_751(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
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
    sub_825( 5, uParam2 );
    sub_825( 2, uParam3 );
    sub_825( 2, "BLANK" );
    if (bParam5)
    {
        if (g_U8780)
        {
            sub_1205( sub_592(), l_U173 );
            sub_2390();
            g_U8780 = 0;
        }
    }
    if (g_U8779 != 1)
    {
        sub_2433();
        g_U8779 = 1;
    }
    return;
}

void sub_825(int iParam0, string sParam1)
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
                    sub_1046();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_659(), 1 );
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

void sub_1046()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_1205(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
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
        sub_1234( uParam0, ref uVar21, 0 );
        if (uParam1._fU0 != uVar21._fU0)
        {
            if (uParam1._fU0 != 10)
            {
                if (uParam1._fU0 < 0)
                {
                    CLEAR_CHAR_PROP( sub_592(), 0 );
                }
                else
                {
                    SET_CHAR_PROP_INDEX( sub_592(), 0, uParam1._fU0 );
                }
            }
            else
            {
                CLEAR_CHAR_PROP( uParam0, 0 );
                if (((GET_CHAR_DRAWABLE_VARIATION( sub_592(), 8 )) != 1) || ((GET_CHAR_TEXTURE_VARIATION( sub_592(), 8 )) != 0))
                {
                    SET_CHAR_COMPONENT_VARIATION( sub_592(), 8, 1, 0 );
                }
            }
        }
        if (uParam1._fU4 != uVar21._fU4)
        {
            if (uParam1._fU4 < 0)
            {
                CLEAR_CHAR_PROP( sub_592(), 1 );
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

void sub_1234(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_PROP_INDEX( uParam0, 0, iParam1 + 0 );
        if (iParam1->_fU0 == -1)
        {
            iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_592(), 8 );
            iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_592(), 8 );
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

void sub_2390()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_2433()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown uVar5;

    GET_GROUP_SIZE( sub_2442(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_2442(), I, ref uVar5 );
            if ((NOT (IS_CHAR_INJURED( uVar5 ))) AND (IS_PLAYER_PLAYING( sub_659() )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( uVar5 )))
                {
                    CLEAR_CHAR_TASKS( uVar5 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_GOTO_CHAR_OFFSET( uVar5, sub_592(), -1, 2.50000000, 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_2442()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2850()
{
    sub_2859();
    sub_5316();
    sub_6757();
    sub_6774();
    sub_7400();
    sub_1234( sub_592(), ref l_U173, 0 );
    StrCopy( ref g_U8844, "blank", 16 );
    if (g_U8837)
    {
        if (NOT g_U8834)
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 1, 0.00000000 );
        }
    }
    return;
}

void sub_2859()
{
    sub_2937( 0, 3.30000000, -2.30000000, 1.40000000, 1.10000000, 0.90000000, 1.50000000, 3.90000000, -2.10000000, 1.40000000, 886.55080000, -438.63370000, 14.86010000, 360.00000000 );
    sub_2937( 1, 2.15000000, -5.75000000, 1.40000000, 0.70000000, 1.05000000, 1.50000000, 1.50000000, -6.30000000, 1.40000000, 889.46870000, -439.42720000, 14.86010000, 270.00000000 );
    sub_2937( 2, 3.70000000, -5.20000000, 1.40000000, 1.25000000, 0.50000000, 1.50000000, 3.90000000, -5.20000000, 1.40000000, 889.30960000, -437.99200000, 14.86010000, 360.00000000 );
    sub_2937( 3, 3.30000000, -4.50000000, 1.40000000, 0.55000000, 0.90000000, 1.50000000, 3.90000000, -5.20000000, 1.40000000, 889.40860000, -438.49200000, 14.86010000, 360.00000000 );
    sub_2937( 4, -4.00000000, -3.60000000, 1.40000000, 0.75000000, 1.25000000, 1.50000000, -4.20000000, -3.60000000, 1.40000000, 887.99300000, -444.45670000, 14.86010000, 180.00000000 );
    sub_2937( 5, -6.50000000, -1.90000000, 1.40000000, 1.25000000, 1.25000000, 1.50000000, -7.20000000, -1.90000000, 1.40000000, 886.03130000, -446.80920000, 14.86010000, 180.00000000 );
    sub_2937( 6, -6.50000000, 0.55000000, 1.40000000, 0.50000000, 1.00000000, 1.50000000, -7.40000000, 0.80000000, 1.40000000, 883.48800000, -447.09710000, 14.86010000, 81.36000000 );
    sub_2937( 7, -6.50000000, 1.55000000, 1.40000000, 0.50000000, 1.00000000, 1.50000000, -7.40000000, 0.80000000, 1.40000000, 883.28800000, -447.02710000, 14.86010000, 360.00000000 );
    sub_2937( 8, -6.50000000, 2.55000000, 1.40000000, 0.50000000, 1.00000000, 1.50000000, -7.40000000, 2.30000000, 1.40000000, 881.77180000, -447.65280000, 14.86010000, 318.60000000 );
    sub_2937( 9, -6.70000000, 3.45000000, 1.40000000, 0.40000000, 0.80000000, 1.50000000, -7.40000000, 3.90000000, 1.40000000, 880.65670000, -447.66370000, 14.86010000, 360.00000000 );
    sub_2937( 10, -6.70000000, 4.25000000, 1.40000000, 0.40000000, 0.80000000, 1.50000000, -7.40000000, 3.90000000, 1.40000000, 880.15770000, -447.46470000, 14.86010000, 311.76000000 );
    sub_2937( 11, -7.00000000, 5.40000000, 1.40000000, 0.75000000, 0.50000000, 1.50000000, -7.40000000, 3.90000000, 1.40000000, 879.55770000, -447.76470000, 14.86010000, 335.00000000 );
    sub_2937( 12, -6.10000000, 5.40000000, 1.40000000, 0.75000000, 0.40000000, 1.50000000, -6.30000000, 5.80000000, 1.40000000, 879.62430000, -447.51200000, 14.86010000, 287.64000000 );
    sub_2937( 13, -5.25000000, 5.40000000, 1.40000000, 0.75000000, 0.45000000, 1.50000000, -6.30000000, 5.80000000, 1.40000000, 879.62430000, -446.51200000, 14.86010000, 270.00000000 );
    sub_2937( 14, -4.40000000, 5.40000000, 1.40000000, 0.75000000, 0.40000000, 1.50000000, -4.80000000, 5.80000000, 1.40000000, 879.62430000, -445.61200000, 14.86010000, 270.00000000 );
    sub_2937( 15, -3.20000000, 5.30000000, 1.40000000, 0.75000000, 0.80000000, 1.50000000, -3.30000000, 5.80000000, 1.40000000, 879.62430000, -444.63640000, 14.86010000, 270.00000000 );
    sub_2937( 16, -1.80000000, 5.30000000, 1.40000000, 0.75000000, 0.60000000, 1.50000000, 1.40000000, 5.80000000, 1.40000000, 879.62430000, -443.12100000, 14.86010000, 270.00000000 );
    sub_2937( 17, -0.60000000, 5.30000000, 1.40000000, 0.75000000, 0.60000000, 1.50000000, 1.40000000, 5.80000000, 1.40000000, 879.62430000, -441.82100000, 14.86010000, 206.28000000 );
    sub_2937( 18, 0.60000000, 5.30000000, 1.40000000, 0.75000000, 0.60000000, 1.50000000, 2.90000000, 5.80000000, 1.40000000, 879.62430000, -440.49660000, 14.86010000, 300.00000000 );
    sub_2937( 19, -1.40000000, -0.60000000, 1.40000000, 1.70000000, 0.65000000, 1.50000000, -0.90000000, -0.80000000, 1.40000000, 884.94960000, -443.20320000, 14.86010000, 265.00000000 );
    sub_2937( 20, -1.40000000, 2.50000000, 1.40000000, 1.40000000, 0.65000000, 1.50000000, -0.90000000, 1.60000000, 1.40000000, 883.11180000, -443.20320000, 14.86010000, 265.00000000 );
    sub_2937( 21, 0.00000000, -0.60000000, 1.40000000, 1.70000000, 0.65000000, 1.50000000, -0.90000000, 2.90000000, 1.40000000, 884.94960000, -440.99840000, 14.86010000, 310.00000000 );
    sub_2937( 22, 0.00000000, 2.50000000, 1.40000000, 1.40000000, 0.65000000, 1.50000000, -0.30000000, 2.90000000, 1.40000000, 882.05420000, -440.99840000, 14.86010000, 310.00000000 );
    sub_2937( 23, 1.30000000, -0.10000000, 1.40000000, 1.00000000, 0.60000000, 1.50000000, -0.90000000, -0.80000000, 1.40000000, 884.84960000, -440.30320000, 14.86010000, 136.08000000 );
    sub_2937( 24, 2.40000000, -0.60000000, 1.40000000, 0.50000000, 0.50000000, 1.50000000, -0.90000000, 2.90000000, 1.40000000, 884.94960000, -438.35620000, 14.86010000, 310.00000000 );
    sub_2937( 25, 2.40000000, 0.40000000, 1.40000000, 0.50000000, 0.50000000, 1.50000000, -0.30000000, 2.90000000, 1.40000000, 883.81180000, -438.35620000, 14.86010000, 150.84000000 );
    sub_2937( 26, 3.55000000, 0.60000000, 1.40000000, 0.60000000, 0.60000000, 1.50000000, -0.90000000, 1.60000000, 1.40000000, 883.73480000, -438.04510000, 14.86010000, 180.00000000 );
    sub_2937( 27, 3.55000000, 1.80000000, 1.40000000, 0.60000000, 0.60000000, 1.50000000, -0.90000000, 1.60000000, 1.40000000, 882.83380000, -438.14510000, 14.86010000, 208.44000000 );
    sub_2937( 28, -3.60000000, 3.10000000, 1.40000000, 1.30000000, 1.30000000, 1.50000000, -3.60000000, 3.00000000, 1.40000000, 880.33730000, -444.14280000, 14.86020000, 199.80000000 );
    sub_2937( 29, -3.70000000, -1.55000000, 1.40000000, 1.30000000, 1.30000000, 1.50000000, -3.70000000, -1.55500000, 1.40000000, 886.88420000, -443.88750000, 14.86010000, 296.28000000 );
    sub_2937( 30, -0.75000000, -3.35000000, 1.40000000, 1.00000000, 1.30000000, 1.50000000, -0.75500000, -2.95500000, 1.40000000, 888.34280000, -442.77800000, 14.86010000, 0.00000000 );
    return;
}

void sub_2937(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    l_U278[uParam0]._fU20 = {uParam1};
    l_U278[uParam0]._fU32 = {uParam4};
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U1328, l_U278[uParam0]._fU20, ref l_U278[uParam0]._fU8 );
    l_U278[uParam0]._fU44 = {uParam7};
    l_U278[uParam0]._fU56 = {uParam10};
    l_U278[uParam0]._fU68 = uParam13;
    return;
}

void sub_5316()
{
    sub_5364( 0, 887.37380000, -437.51570000, 15.33330000, -11.61380000, -0.00000000, 142.78080000, 45.00000000 );
    sub_5364( 1, 889.96040000, -440.62840000, 15.17990000, -5.40710000, -0.00000000, 14.99760000, 45.00000000 );
    sub_5364( 2, 890.20290000, -438.89840000, 15.27450000, -4.81610000, -0.00000000, 46.66220000, 45.00000000 );
    sub_5364( 3, 889.98360000, -437.61470000, 15.20750000, -19.17140000, -0.00000000, 141.82150000, 45.00000000 );
    sub_5364( 4, 887.74300000, -445.36600000, 16.41000000, -0.00000000, 0.00000000, -17.61970000, 45.00000000 );
    sub_5364( 5, 885.78100000, -447.73900000, 16.44000000, -0.00000000, 0.00000000, -15.61970000, 45.00000000 );
    sub_5364( 6, 882.22420000, -446.08840000, 16.19200000, -2.88130000, -0.00000000, -129.52450000, 45.00000000 );
    sub_5364( 7, 884.67430000, -445.82060000, 16.03310000, 1.52540000, 0.00000000, 130.29370000, 45.00000000 );
    sub_5364( 8, 882.90160000, -446.87070000, 16.19080000, -1.06890000, 0.00000000, 129.72920000, 45.00000000 );
    sub_5364( 9, 881.71510000, -446.33680000, 16.27750000, -6.31340000, 0.00000000, 144.79260000, 45.00000000 );
    sub_5364( 10, 881.87700000, -446.53170000, 16.13120000, -1.38030000, -0.00000000, 127.53280000, 45.00000000 );
    sub_5364( 11, 880.57140000, -446.54710000, 16.19460000, -2.82760000, -0.00000000, 139.81290000, 45.00000000 );
    sub_5364( 12, 880.98850000, -446.92630000, 16.22140000, -4.05850000, -0.00000000, 115.47170000, 45.00000000 );
    sub_5364( 13, 881.02810000, -446.86690000, 16.28350000, -7.35730000, 0.00000000, 76.35370000, 45.00000000 );
    sub_5364( 14, 880.94430000, -446.11930000, 16.20920000, -1.29170000, -0.00000000, 72.99700000, 45.00000000 );
    sub_5364( 15, 880.98320000, -445.54110000, 16.23680000, -1.14890000, -0.00000000, 52.44150000, 45.00000000 );
    sub_5364( 16, 880.99540000, -444.03410000, 16.18310000, -1.47830000, 0.00000000, 54.58680000, 45.00000000 );
    sub_5364( 17, 880.51270000, -443.11550000, 16.12830000, -0.62840000, -0.00000000, 36.84500000, 45.00000000 );
    sub_5364( 18, 881.50190000, -440.64800000, 16.18430000, -3.46290000, -0.00000000, 84.68120000, 45.00000000 );
    sub_5364( 19, 887.69180000, -443.60670000, 15.66380000, -0.00400000, 0.00000000, 72.43540000, 45.00000000 );
    sub_5364( 20, 885.74800000, -443.56170000, 15.91160000, -4.56790000, -0.00000000, 77.65140000, 45.00000000 );
    sub_5364( 21, 887.63660000, -440.20030000, 15.70070000, -0.23050000, -0.00000000, 111.40480000, 45.00000000 );
    sub_5364( 22, 884.75760000, -440.22490000, 15.96060000, -3.67760000, -0.00000000, 105.52310000, 45.00000000 );
    sub_5364( 23, 882.37380000, -441.00780000, 15.84000000, -2.04930000, -0.00000000, -69.20680000, 45.00000000 );
    sub_5364( 24, 887.74730000, -438.07470000, 15.68770000, -0.89600000, 0.00000000, 95.58960000, 45.00000000 );
    sub_5364( 25, 881.75820000, -439.77580000, 15.96640000, -4.35970000, 0.00000000, -52.81070000, 45.00000000 );
    sub_5364( 26, 882.90330000, -439.35700000, 16.18190000, -0.41620000, -0.00000000, -29.20620000, 45.00000000 );
    sub_5364( 27, 883.20280000, -439.52230000, 16.26300000, -4.24870000, -0.00000000, 16.98330000, 45.00000000 );
    sub_5364( 28, 880.07030000, -446.66920000, 15.89730000, -4.39390000, 0.00000000, -3.82640000, 45.00000000 );
    sub_5364( 29, 889.38820000, -444.31630000, 15.68370000, 0.38010000, -0.00000000, 84.19290000, 45.00000000 );
    sub_5364( 30, 888.99070000, -440.17920000, 15.75850000, -1.46250000, 0.00000000, 165.90310000, 45.00000000 );
    return;
}

void sub_5364(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    l_U278[uParam0]._fU104 = {uParam1};
    l_U278[uParam0]._fU116 = {uParam4};
    l_U278[uParam0]._fU128 = uParam7;
    return;
}

void sub_6757()
{
    return;
}

void sub_6774()
{
    l_U197[0]._fU0 = {0.17000000, 0.11000000, -0.01000000};
    l_U197[0]._fU12 = {1.90000000, -7.30000000, 0.30000000};
    l_U197[0]._fU24 = {0.16000000, 0.10000000, 0};
    l_U197[0]._fU36 = {18.46000000, 23.48000000, -22.68000000};
    l_U197[0]._fU48 = "Hat_russian_Take_Off_L";
    l_U197[0]._fU52 = "Hat_russian_Put_on_L";
    l_U197[0]._fU56 = "Hat_russian_Take_Off_R";
    l_U197[0]._fU60 = "Hat_russian_Put_on_R";
    l_U197[0]._fU64 = 0.42000000;
    l_U197[0]._fU68 = 0.64000000;
    l_U197[0]._fU72 = 0.15000000;
    l_U197[0]._fU76 = 0.46000000;
    l_U197[1]._fU0 = {0.18000000, 0.09000000, -0.13000000};
    l_U197[1]._fU12 = {1.05000000, -0.60000000, 1.52000000};
    l_U197[1]._fU24 = {0.15000000, 0.11000000, 0.13000000};
    l_U197[1]._fU36 = {-1.73000000, -0.65000000, -1.79000000};
    l_U197[1]._fU48 = "Hat_Take_Off_L";
    l_U197[1]._fU52 = "Hat_Put_on_L";
    l_U197[1]._fU56 = "Hat_Take_Off_R";
    l_U197[1]._fU60 = "Hat_Put_on_R";
    l_U197[1]._fU64 = 0.40900000;
    l_U197[1]._fU68 = 0.63000000;
    l_U197[1]._fU72 = 0.15000000;
    l_U197[1]._fU76 = 0.45800000;
    return;
}

void sub_7400()
{
    l_U197[2]._fU0 = {0.11200000, 0.10200000, -0.08800000};
    l_U197[2]._fU12 = {0.64090000, -0.00000000, 1.42630000};
    l_U197[2]._fU24 = {0.10300000, 0.09400000, 0.07900000};
    l_U197[2]._fU36 = {-2.28000000, 0.50500000, -2.10000000};
    l_U197[2]._fU48 = "specs_take_off_l";
    l_U197[2]._fU52 = "specs_put_on_l";
    l_U197[2]._fU56 = "specs_take_off_r";
    l_U197[2]._fU60 = "specs_put_on_r";
    l_U197[2]._fU64 = 0.35000000;
    l_U197[2]._fU68 = 0.75000000;
    l_U197[2]._fU72 = 0.25000000;
    l_U197[2]._fU76 = 0.72500000;
    l_U197[3]._fU0 = {0.12180000, 0.09900000, 0.00120000};
    l_U197[3]._fU12 = {0.64090000, -0.00000000, 1.42630000};
    l_U197[3]._fU24 = {0.14440000, 0.09800000, 0.03880000};
    l_U197[3]._fU36 = {-2.28000000, 0.50500000, -2.10000000};
    l_U197[3]._fU48 = "specs_take_off_l";
    l_U197[3]._fU52 = "specs_put_on_l";
    l_U197[3]._fU56 = "specs_take_off_r";
    l_U197[3]._fU60 = "specs_put_on_r";
    l_U197[3]._fU64 = 0.35000000;
    l_U197[3]._fU68 = 0.75000000;
    l_U197[3]._fU72 = 0.25000000;
    l_U197[3]._fU76 = 0.72500000;
    return;
}

void sub_8138()
{
    sub_8152( l_U1325 );
    GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1373 );
    GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1374 );
    while (NOT sub_8296())
    {
        WAIT( 0 );
    }
    # -sub_C1FFC0-0xc214c8( 1, ref l_U1326 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U1327 );
    CREATE_CHAR( 5, l_U1325, 888.82510000, -447.78480000, 15.86010000, ref l_U1324, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U1324, l_U1329 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1324 );
    SET_CHAR_HEADING( l_U1324, 37.94300000 );
    SET_CHAR_DECISION_MAKER( l_U1324, l_U1326 );
    SET_COMBAT_DECISION_MAKER( l_U1324, l_U1327 );
    SET_CURRENT_CHAR_WEAPON( l_U1324, 0, 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1324, 888.82510000, -447.78480000, 15.86010000, 2.00000000 );
    g_U8838 = 0;
    sub_8687( "" );
    sub_8814( 0, sub_592(), "NIKO", 0 );
    sub_8814( 1, l_U1324, "SHOP_GIRL", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    return;
}

void sub_8152(unknown uParam0)
{
    sub_8180( "REQUEST_A_MODEL(" );
    sub_8180( GET_MODEL_NAME_FOR_DEBUG( uParam0 ) );
    sub_8180( ")\n" );
    REQUEST_MODEL( uParam0 );
    l_U6[l_U39] = uParam0;
    l_U39++;
    return;
}

void sub_8180(unknown uParam0)
{
    return;
}

int sub_8296()
{
    int I;

    if (l_U39 != 0)
    {
        for ( I = 0; I <= (l_U39 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U6[I] )))
            {
                REQUEST_MODEL( l_U6[I] );
                sub_8180( "REQUEST_MODEL(" );
                sub_8180( GET_MODEL_NAME_FOR_DEBUG( l_U6[I] ) );
                sub_8180( ") [" );
                sub_8423( I );
                sub_8180( "]\n" );
                return 0;
            }
        }
    }
    return 1;
}

void sub_8423(unknown uParam0)
{
    return;
}

void sub_8687(unknown uParam0)
{
    StrCopy( ref l_U74._fU0, uParam0, 16 );
    sub_8706();
    return;
}

void sub_8706()
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

void sub_8814(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U74._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U74._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_8898( "\n PED NUMBER ", uParam0 );
    sub_8938( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_8898(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8938(unknown uParam0, unknown uParam1)
{
    return;
}

boolean sub_9395(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
    return iVar4 == (GET_HASH_KEY( uParam1 ));
}

int sub_9452(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if (sub_9395( sub_592(), uParam0 ))
    {
        REQUEST_ANIMS( "clothing" );
        if (NOT (HAVE_ANIMS_LOADED( "clothing" )))
        {
            REQUEST_ANIMS( "clothing" );
        }
        else if (NOT l_U1406)
        {
            l_U1406 = 1;
        }
        return 1;;
    }
    else if (HAVE_ANIMS_LOADED( "clothing" ))
    {
        GET_CHAR_COORDINATES( sub_592(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar6._fU0, uVar6._fU4, uParam1._fU0, uParam1._fU4, ref fVar9 );
        if (fVar9 > 15.00000000)
        {
            REMOVE_ANIMS( "clothing" );
            l_U1406 = 0;
        }
    }
    return 0;
}

void sub_9690()
{
    int Result;

    Result = 0;
    return Result;
}

int sub_9748()
{
    vector vVar2;
    vector vVar5;
    int iVar8;

    if (NOT (IS_CHAR_INJURED( l_U1324 )))
    {
        vVar2 = {-6.60000000, 0.50000000, 0};
        vVar5 = {5.50000000, 5.75000000, 2.50000000};
        if ((sub_9395( sub_592(), l_U1329 )) AND (LOCATE_CHAR_ON_FOOT_3D( sub_592(), l_U1383._fU0 + vVar2.x, l_U1383._fU4 + vVar2.y, l_U1383._fU8 + vVar2.z, vVar5.x + 2.50000000, vVar5.y + 2.50000000, vVar5.z + 2.50000000, 0 )))
        {
            if (sub_9395( l_U1324, l_U1329 ))
            {
                if ((IS_CHAR_IN_ANY_CAR( sub_592() )) || (IS_WANTED_LEVEL_GREATER( sub_659(), 0 )))
                {
                    if (NOT l_U1400)
                    {
                        sub_9981( 1, ref l_U1356, 0, ref l_U1324 );
                        l_U1400 = 1;
                        l_U1401 = 0;
                        l_U1405 = 1;
                    }
                    return 0;
                }
                else if (NOT g_U8781)
                {
                    if (NOT l_U1404)
                    {
                        PRINT_HELP( "CLO_CANT" );
                        l_U1404 = 1;
                    }
                    return 0;
                }
                else if (LOCATE_CHAR_ON_FOOT_3D( sub_592(), l_U1383._fU0 + vVar2.x, l_U1383._fU4 + vVar2.y, l_U1383._fU8 + vVar2.z, vVar5.x, vVar5.y, vVar5.z, 0 ))
                {
                    if (NOT l_U1400)
                    {
                        if (NOT l_U1405)
                        {
                            sub_9981( 3, ref l_U1356, 0, ref l_U1324 );
                            l_U1400 = 1;
                            l_U1401 = 0;
                        }
                    }
                }
                if ((IS_CHAR_SHOOTING( sub_592() )) || (l_U1399))
                {
                    if (sub_12220( l_U1324, 91 ))
                    {
                        sub_9981( 4, ref l_U1356, 0, ref l_U1324 );
                        CLEAR_CHAR_TASKS( l_U1324 );
                        TASK_COMBAT( l_U1324, sub_592() );
                        l_U1399 = 1;
                        WAIT( 500 );
                        PLAY_SOUND_FROM_POSITION( -1, "SHOP_ALARMS_BELL", l_U1383 );
                        l_U1405 = 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref iVar8 );
                    if (sub_12220( l_U1324, 114 ))
                    {
                        if (iVar8 > (l_U1376 + 5000))
                        {
                            CLEAR_CHAR_TASKS( l_U1324 );
                            TASK_START_SCENARIO_IN_PLACE( l_U1324, "Scenario_Standing", -1082130432 );
                            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1374 );
                            GET_GAME_TIMER( ref l_U1375 );
                        }
                    }
                    else if ((sub_12220( l_U1324, 34 )) || (iVar8 > (l_U1375 + 2500)))
                    {
                        CLEAR_CHAR_TASKS( l_U1324 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U1324, sub_592() );
                        GET_GAME_TIMER( ref l_U1376 );
                    }
                    if ((IS_PLAYER_TARGETTING_CHAR( sub_659(), l_U1324 )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_659(), l_U1324 )))
                    {
                        if (NOT l_U1402)
                        {
                            if (IS_CHAR_ARMED( sub_592(), 4 ))
                            {
                                sub_9981( 7, ref l_U1356, 0, ref l_U1324 );
                            }
                            else
                            {
                                sub_9981( 6, ref l_U1356, 0, ref l_U1324 );
                            }
                            l_U1402 = 1;
                        }
                    }
                    else if (NOT (sub_12695( l_U1356 )))
                    {
                        l_U1402 = 0;
                    }
                }
                if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1324, sub_592(), 0 )) AND (NOT l_U1403))
                {
                    sub_9981( 0, ref l_U1356, 0, ref l_U1324 );
                    l_U1403 = 1;
                    l_U1405 = 1;
                };;;
            }
            else if (NOT l_U1320)
            {
                if (NOT (sub_9395( l_U1324, l_U1329 )))
                {
                    if (sub_9395( sub_592(), l_U1329 ))
                    {
                        CLEAR_HELP();
                        PRINT_HELP( "SHOP_H_EMPTY" );
                        l_U1320 = 1;
                    }
                }
            }
            return 0;;
        }
        else if (l_U1320)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_H_EMPTY" ))
            {
                CLEAR_HELP();
            }
        }
        if (l_U1400)
        {
            if (NOT l_U1401)
            {
                if (NOT l_U1405)
                {
                    sub_9981( 2, ref l_U1356, 0, ref l_U1324 );
                    l_U1401 = 1;
                }
            }
        }
        if ((sub_13136( sub_592(), l_U1324 )) >= 25.00000000)
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLO_CANT" )))
            {
                l_U1404 = 0;
            }
            l_U1400 = 0;
        }
        return 1;
        break;
    }
    if (NOT (sub_12695( l_U1356 )))
    {
        sub_13418( ref l_U1356, 0 );
    }
    if (NOT l_U1320)
    {
        if (DOES_CHAR_EXIST( l_U1324 ))
        {
            PRINT_HELP( "SHOP_H_DEAD" );
            l_U1320 = 1;
        }
    }
    g_U8838 = 1;
    return 0;
}

void sub_9981(int iParam0, unknown uParam1, int iParam2, unknown uParam3)
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
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_592() );
    }
    if ((sub_9690()) AND (iParam2 == 0))
    {
        if (NOT g_U8839)
        {
            if (iParam0 == 5)
            {
                PRINTSTRING( "  * skipping speech ''" );
                PRINTSTRING( ref cVar6 );
                PRINTSTRING( "'' because ''roman3'' running and dateSpeech = CLOTHES_SHOP_PLAYER_PURCHASES  - " );
                PRINTSTRING( "gbPKMAL_25_displayed:" );
                sub_10664( g_U8839 );
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
                sub_10664( g_U8836 );
                PRINTNL();
                return 0;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( (uParam3^) )))
    {
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_592() );
    }
    sub_8180( "  * PLAY_SHOP_ASST_SPEECH(''" );
    sub_8180( ref cVar6 );
    sub_8180( "'')\n" );
    return sub_11028( ref cVar6, uParam1, 1, 0 );
}

void sub_10664(boolean bParam0)
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

void sub_11028(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_11051( uParam0, ref l_U74._fU0, uParam1, uParam2, uParam3 );
}

void sub_11051(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_11105( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_11105(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_11127( iParam1 )))
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
    sub_11807( ref g_U8868, ref l_U74 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_11127(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_8180( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_8180( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_8180( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_11807(int iParam0, int iParam1)
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

int sub_12220(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_12695(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_8180( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_8180( "\n speech is not playing" );
    }
    return 0;
}

void sub_13136(unknown uParam0, unknown uParam1)
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

void sub_13418(int iParam0, unknown uParam1)
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

int sub_13629()
{
    int iVar2;
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
    int I;

    if (l_U1398 < 0)
    {
        GET_GAME_TIMER( ref l_U1398 );
    }
    else if (sub_13675( ref l_U1372, l_U195 ))
    {
        GET_GAME_TIMER( ref iVar2 );
        if (iVar2 > (l_U1398 + 2500))
        {
            l_U196 = l_U195;
            l_U195 = 5;
        }
    }
    switch (l_U195)
    {
        case 0:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                DO_SCREEN_FADE_OUT( 125 );
                SET_PLAYER_CONTROL( sub_659(), 0 );
                l_U1318 = 1;
            }
        }
        else
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                if ((LOCATE_CAR_3D( uVar3, l_U1339._fU0, l_U1339._fU4, l_U1339._fU8, 7.50000000, 7.50000000, 7.50000000, 0 )) || (sub_14078( uVar3, l_U1329 )))
                {
                    if (sub_14147( 0, ref uVar4, ref uVar7 ))
                    {
                        SET_CAR_COORDINATES( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
                        SET_CAR_HEADING( uVar3, uVar7 );
                    }
                }
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_592() );
            TASK_TOGGLE_DUCK( sub_592(), 0 );
            SET_CHAR_COORDINATES( sub_592(), l_U1339._fU0, l_U1339._fU4, 14.86010000 );
            SET_CHAR_HEADING( sub_592(), 90.00000000 );
            OPEN_SEQUENCE_TASK( ref l_U1389 );
            TASK_PAUSE( 0, 500 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 889.04720000, -442.97040000, l_U1339._fU8, 2, -1 );
            TASK_PAUSE( 0, 250 );
            TASK_START_SCENARIO_AT_POSITION( 0, "Scenario_Standing", 889.04720000 + l_U1388, -442.97040000, l_U1339._fU8, 90.00000000 );
            CLOSE_SEQUENCE_TASK( l_U1389 );
            TASK_PERFORM_SEQUENCE( sub_592(), l_U1389 );
            CLEAR_SEQUENCE_TASK( l_U1389 );
            REQUEST_INTERIOR_MODELS( -1997562918, l_U1329 );
            while (NOT (HAVE_ANIMS_LOADED( "clothing" )))
            {
                REQUEST_ANIMS( "clothing" );
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1324 )))
            {
                TASK_PLAY_ANIM_UPPER_BODY( l_U1324, "lookaround_a", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            }
            CLEAR_AREA_OF_CHARS( 892.30000000, -444.40000000, 16.10000000, 20.00000000 );
            CLEAR_AREA_OF_OBJECTS( 892.30000000, -444.40000000, 16.10000000, 20.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 0, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 0, 0.00000000 );
            sub_15135( ref l_U1362 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            CREATE_CAM( 14, ref l_U1390[0] );
            SET_CAM_POS( l_U1390[0], 879.75540000, -442.95890000, 16.56979000 );
            SET_CAM_ROT( l_U1390[0], -6.02684600, 0.00000000, -89.05587000 );
            SET_CAM_FOV( l_U1390[0], 70.00000000 );
            CREATE_CAM( 14, ref l_U1390[1] );
            SET_CAM_POS( l_U1390[1], 880.05390000, -442.95400000, 16.53829000 );
            SET_CAM_ROT( l_U1390[1], -6.02684900, 0.00000000, -89.05587000 );
            SET_CAM_FOV( l_U1390[1], 70.00000000 );
            CREATE_CAM( 3, ref l_U1390[2] );
            CREATE_CAM( 14, ref l_U1394[0] );
            SET_CAM_POS( l_U1394[0], 890.22440000, -438.83040000, 16.89151000 );
            SET_CAM_ROT( l_U1394[0], -9.57918500, 0.00000000, 112.57860000 );
            SET_CAM_FOV( l_U1394[0], 45.00000000 );
            CREATE_CAM( 14, ref l_U1394[1] );
            SET_CAM_POS( l_U1394[1], 891.69500000, -442.77040000, 16.70820000 );
            SET_CAM_ROT( l_U1394[1], -5.04089200, -0.00000000, 90.00000000 );
            SET_CAM_FOV( l_U1394[1], 45.00000000 );
            CREATE_CAM( 3, ref l_U1394[2] );
            SET_CAM_ACTIVE( l_U1390[0], 1 );
            SET_CAM_ACTIVE( l_U1390[1], 1 );
            SET_CAM_PROPAGATE( l_U1390[2], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U1390[2], l_U1390[0], l_U1390[1], 10000, 0 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            PRINT_HELP( "SHOP_CS_01" );
            DO_SCREEN_FADE_IN( 125 );
            SETTIMERB( 0 );
            l_U195 = 1;
        }
        break;
        case 1:
        if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U1390[2] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_592() );
            SET_CHAR_COORDINATES( sub_592(), 888.64090000, -442.92180000, 14.85120000 );
            SET_CHAR_HEADING( sub_592(), 90.00000000 );
            GET_GAME_CAM( ref uVar8 );
            GET_CAM_POS( uVar8, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
            GET_CAM_ROT( uVar8, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
            GET_CAM_FOV( uVar8, ref uVar15 );
            SET_CAM_POS( l_U1394[1], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
            SET_CAM_ROT( l_U1394[1], uVar12._fU0, uVar12._fU4, uVar12._fU8 );
            SET_CAM_FOV( l_U1394[1], uVar15 );
            SET_CAM_PROPAGATE( l_U1390[2], 0 );
            SET_CAM_ACTIVE( l_U1394[0], 1 );
            SET_CAM_ACTIVE( l_U1394[1], 1 );
            SET_CAM_PROPAGATE( l_U1394[2], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U1394[2], l_U1394[0], l_U1394[1], 10000, 0 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_592(), l_U1329 );
            PRINT_HELP( "SHOP_CS_02" );
            l_U195 = 4;
        }
        break;
        case 4:
        if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U1394[2] )))
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 500 );
            CLEAR_CHAR_TASKS( sub_592() );
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            l_U195 = 6;
        }
        break;
        case 5:
        if (l_U196 == 1)
        {
            DO_SCREEN_FADE_OUT( 125 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_592() );
        SET_CHAR_COORDINATES( sub_592(), 889.04720000, -442.97040000, 14.86010000 );
        SET_CHAR_HEADING( sub_592(), 90.00000000 );
        CLEAR_PRINTS();
        CLEAR_HELP();
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 125 );
        }
        SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_592() );
        l_U195 = 6;
        break;
        case 6:
        for ( I = 0; I < l_U1390; I++ )
        {
            SET_CAM_PROPAGATE( l_U1390[I], 0 );
            SET_CAM_ACTIVE( l_U1390[I], 0 );
            DESTROY_CAM( l_U1390[I] );
        }
        for ( I = 0; I < l_U1394; I++ )
        {
            SET_CAM_PROPAGATE( l_U1394[I], 0 );
            SET_CAM_ACTIVE( l_U1394[I], 0 );
            DESTROY_CAM( l_U1394[I] );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        sub_16597( ref l_U1362 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 0, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 0, 0.00000000 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_592(), 0 );
        SET_PLAYER_CONTROL( sub_659(), 1 );
        l_U1318 = 0;
        SET_GAME_CAM_HEADING( 0.00000000 );
        if ((NOT g_U8836) AND (g_U8837))
        {
            PRINT_HELP( "SHOP_CS_05" );
        }
        if (NOT (IS_CHAR_INJURED( l_U1324 )))
        {
            CLEAR_CHAR_TASKS( l_U1324 );
            TASK_START_SCENARIO_IN_PLACE( l_U1324, "Scenario_Standing", -1082130432 );
        }
        l_U1372 = 0;
        g_U8834 = 1;
        return 1;
        break;
    }
    return 0;
}

int sub_13675(unknown uParam0, int iParam1)
{
    if ((uParam0^))
    {
        if (((sub_13692()) AND (IS_SCREEN_FADED_IN())) AND (iParam1 > 0))
        {
            return 1;
        }
        else
        {
            (uParam0^) = 0;
        }
    }
    if (NOT sub_13692())
    {
        (uParam0^) = 1;
    }
    return 0;
}

int sub_13692()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_14078(unknown uParam0, unknown uParam1)
{
    return sub_14091( uParam0, uParam1 );
}

boolean sub_14091(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CAR_IN_ROOM( uParam0, ref iVar4 );
    return iVar4 == (GET_HASH_KEY( uParam1 ));
}

int sub_14147(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    switch (uParam0)
    {
        case 0:
        (uParam1^) = {903.47300000, -443.05190000, 15.20300000};
        (uParam2^) = 180.00000000;
        return 1;
        break;
        case 1:
        (uParam1^) = {-281.72640000, 1346.18900000, 24.81270000};
        (uParam2^) = 270.00000000;
        return 1;
        break;
        case 2:
        GET_CHAR_COORDINATES( sub_592(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        switch (sub_14287( uVar5 ))
        {
            case 0:
            (uParam1^) = {22.51870000, 816.93500000, 14.33970000};
            (uParam2^) = 90.00000000;
            return 1;
            break;
            case 1:
            (uParam1^) = {9.57450000, -650.91650000, 14.41290000};
            (uParam2^) = 270.00000000;
            return 1;
            break;
            default:
            (uParam1^) = {0.00000000, 0.00000000, 0.00000000};
            (uParam2^) = 0.00000000;
            return 0;
        }
        break;
    }
    (uParam1^) = {0.00000000, 0.00000000, 0.00000000};
    (uParam2^) = 0.00000000;
    return 0;
}

void sub_14287(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int Result;
    float fVar7;
    float fVar8;
    vector[2] vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    Result = 99;
    fVar8 = 1E8;
    array(ref vVar9, 2);
    vVar9[1] = {10.79090000, -652.65520000, 14.77060000};
    vVar9[0] = {21.83008000, 803.60000000, 13.70000000};
    for ( I = 0; I < 2; I++ )
    {
        fVar7 = VDIST( uParam0, vVar9[I] );
        if (fVar7 < fVar8)
        {
            Result = I;
            fVar8 = fVar7;
        }
    }
    return Result;
}

void sub_15135(unknown uParam0)
{
    SET_WIDESCREEN_BORDERS( 1 );
    BEGIN_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 1)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

void sub_16597(unknown uParam0)
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

int sub_17191(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    if (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( uParam0, uParam1 ))
    {
        if ((uParam2^) < 0)
        {
            GET_GAME_TIMER( uParam2 );
        }
        GET_GAME_TIMER( ref iVar5 );
        sub_8180( "  ''" );
        sub_8180( uParam0 );
        sub_8180( "'', " );
        sub_8423( uParam1 );
        sub_8180( "    //" );
        sub_8423( iVar5 - (uParam2^) );
        sub_8180( "\n" );
        if ((iVar5 - (uParam2^)) > 2000)
        {
            CLEAR_HELP();
        }
        return 1;
    }
    (uParam2^) = -1;
    return 0;
}

int sub_18018(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, int iParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45)
{
    int iVar48;

    if ((sub_12220( sub_592(), 80 )) AND (sub_12220( sub_592(), 88 )))
    {
        if (TIMERA() > iParam33)
        {
            TASK_PLAY_ANIM( sub_592(), "examine shirt", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
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
    if (sub_18299())
    {
        if ((NOT (IS_SCORE_GREATER( sub_659(), iVar48 - 1 ))) AND (NOT sub_18379()))
        {
            CLEAR_PRINTS();
            PRINT_HELP( sub_18457( uParam0._fU76, 0, 0 ) );
            while (NOT (sub_19301( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            return 1;
        }
        else
        {
            CLEAR_PRINTS();
            if (NOT sub_22544())
            {
                iVar48 = 0;
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8844, sub_18457( uParam0._fU76, 1, 1 ), 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8848, sub_18457( uParam0._fU76, 1, 1 ), 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8852, sub_18457( uParam0._fU76, 1, 1 ), 16 );
                    break;
                }
                PRINT_HELP( sub_18457( uParam0._fU76, 1, 1 ) );
            }
            else
            {
                PRINT_HELP_WITH_NUMBER( sub_18457( uParam0._fU76, 1, 0 ), iVar48 );
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8844, sub_18457( uParam0._fU76, 1, 0 ), 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8848, sub_18457( uParam0._fU76, 1, 0 ), 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8852, sub_18457( uParam0._fU76, 1, 0 ), 16 );
                    break;
                }
            }
            sub_22912( uParam37, uParam0._fU76, iVar48, uParam39, uParam45 );
            while (NOT (sub_19301( uParam35, uParam36, "null", "LB_TRYON", uParam37, 0, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            (uParam34^) = iVar48;
            return 1;
        }
    }
    else if (sub_23224( "null" ))
    {
        CLEAR_HELP();
        while (NOT (sub_19301( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_18457( uParam0._fU76, 3, 0 ), 4, "", "", "", iVar48, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_18457( uParam0._fU76, 3, 0 ), iVar48, 7500, 1 );
    };;;
    DISPLAY_CASH( 1 );
    return 0;
}

int sub_18299()
{
    if ((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_18379()
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

string sub_18457(unknown uParam0, unknown uParam1, boolean bParam2)
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

int sub_19301(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, unknown uParam6, boolean bParam7)
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
                if (sub_19365( g_U8779, ref uVar10 ))
                {
                    PLAY_SOUND_FROM_PED( -1, sub_19422( uVar10 ), sub_592() );
                }
            }
        }
        return 0;
        break;
    }
    while (sub_19966())
    {
        WAIT( 0 );
    }
    sub_825( 5, uParam2 );
    sub_825( 5, "LB_LEAVE_H" );
    sub_825( 5, "BLANK" );
    sub_825( 2, uParam3 );
    sub_825( 2, "BLANK" );
    CLEAR_CHAR_TASKS( sub_592() );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_592(), 0 );
    if (bParam5)
    {
        sub_1205( sub_592(), l_U173 );
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
    REGISTER_STRING_FOR_FRONTEND_STAT( 668, sub_20266() );
    CLEAR_PRINTS();
    SET_CAM_BEHIND_PED( sub_592() );
    FREEZE_CHAR_POSITION( sub_592(), 0 );
    sub_2390();
    g_U8780 = 0;
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 0 );
    }
    SET_PLAYER_CONTROL( sub_659(), 1 );
    SET_EVERYONE_IGNORE_PLAYER( sub_659(), 0 );
    sub_1046();
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    sub_16597( uParam0 );
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
    sub_2433();
    g_U8779 = 1;
    return 1;
}

int sub_19365(unknown uParam0, unknown uParam1)
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

string sub_19422(unknown uParam0)
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

int sub_19966()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

string sub_20266()
{
    if (CAN_THE_STAT_HAVE_STRING( 668 ))
    {
        switch (sub_20290())
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
        PRINTINT( sub_20290() );
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

void sub_20290()
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
        return sub_20439( 8 );
        break;
    }
    if (((g_U8859 == g_U8860) AND (g_U8860 != g_U8861)) AND (g_U8861 != g_U8859))
    {
        return sub_20439( 5 );
        break;
    }
    if (((g_U8859 != g_U8860) AND (g_U8860 == g_U8861)) AND (g_U8861 != g_U8859))
    {
        return sub_20439( 6 );
        break;
    }
    if (((g_U8859 != g_U8860) AND (g_U8860 != g_U8861)) AND (g_U8861 == g_U8859))
    {
        return sub_20439( 7 );
        break;
    }
    return sub_20439( 8 );
}

void sub_20439(int iParam0)
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
        return sub_20633( 8 );
        break;
    }
    if ((((g_U8862 == g_U8863) AND (g_U8863 != g_U8864)) AND (g_U8864 != g_U8862)) AND ((iParam0 == 5) || (iParam0 == 8)))
    {
        return sub_20633( 5 );
        break;
    }
    if ((((g_U8862 != g_U8863) AND (g_U8863 == g_U8864)) AND (g_U8864 != g_U8862)) AND ((iParam0 == 6) || (iParam0 == 8)))
    {
        return sub_20633( 6 );
        break;
    }
    if ((((g_U8862 != g_U8863) AND (g_U8863 != g_U8864)) AND (g_U8864 == g_U8862)) AND ((iParam0 == 7) || (iParam0 == 8)))
    {
        return sub_20633( 7 );
        break;
    }
    return sub_20633( 8 );
}

int sub_20633(int iParam0)
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

int sub_22544()
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

void sub_22912(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_659(), -1 * iParam2 );
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
        sub_9981( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_23224(unknown uParam0)
{
    if (sub_23235( 5, 0 ))
    {
        if (sub_23522( 5, uParam0, 0 ))
        {
            sub_825( 5, uParam0 );
            return 1;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_659() )))
    {
        sub_825( 5, uParam0 );
        return 1;
    }
    return 0;
}

int sub_23235(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_659() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_659() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_659() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_23331())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_592() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_23416())
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

int sub_23331()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_23416()
{
    return sub_23427( 0, 0 );
}

int sub_23427(boolean bParam0, unknown uParam1)
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

int sub_23522(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_23235( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_659(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_23797();
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

void sub_23797()
{
    return sub_23427( 1, 1 );
}

int sub_24425(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, int iParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45)
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
    if (sub_18299())
    {
        if ((NOT (IS_SCORE_GREATER( sub_659(), iVar48 - 1 ))) AND (NOT sub_18379()))
        {
            CLEAR_PRINTS();
            PRINT_HELP( "HELP_POOR_L" );
            while (NOT (sub_19301( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            return 1;
        }
        else
        {
            CLEAR_PRINTS();
            if (NOT sub_22544())
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
            sub_25062( uParam37, uParam0._fU80, iVar48, uParam39, uParam45 );
            while (NOT (sub_19301( uParam35, uParam36, "null", "LB_TRYON", uParam37, 0, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            (uParam34^) = iVar48;
            return 1;
        }
    }
    else if (sub_23224( "null" ))
    {
        CLEAR_HELP();
        while (NOT (sub_19301( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
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
    if ((sub_12220( sub_592(), 80 )) AND (sub_12220( sub_592(), 88 )))
    {
        if (TIMERA() > iParam33)
        {
            TASK_PLAY_ANIM( sub_592(), "examine legs", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
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

void sub_25062(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_659(), -1 * iParam2 );
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
        sub_9981( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_25884(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
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

    sub_25895( ref uVar16 );
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
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", sub_26288( uVar16 ) )))
            {
                CLEAR_HELP();
                PRINT_HELP_FOREVER_WITH_STRING( "LB_TRYON_R3", sub_26288( uVar16 ) );
            }
            sVar18 = "LB_TRYON_R3";
        }
        else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "HELP_OWN_F", sub_26288( uVar16 ) )))
        {
            CLEAR_HELP();
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_F", sub_26288( uVar16 ) );
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
            sub_26788( 1, uParam0 );
        }
        else if (iVar21 >= 64)
        {
            sub_26788( 0, uParam0 );
        }
    }
    else if (((IS_BUTTON_PRESSED( 0, 10 )) || (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 ))) || (iVar19 < 65472))
    {
        sub_26788( 1, uParam0 );
    }
    else if (((IS_BUTTON_PRESSED( 0, 11 )) || (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 ))) || (iVar19 >= 64))
    {
        sub_26788( 0, uParam0 );
    }
    else if (sub_18299())
    {
        if (NOT ((g_U8816[uVar16]) AND (NOT ((g_U8836) || (g_U15811[6])))))
        {
            CLEAR_PRINTS();
            if (NOT sub_22544())
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
                sub_27565( uParam5, uVar16, iVar17, uParam7, uParam13 );
                while (NOT (sub_19301( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 0, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                (uParam2^) = iVar17;
                return 1;
            }
            else if (NOT (IS_SCORE_GREATER( sub_659(), iVar17 - 1 )))
            {
                CLEAR_PRINTS();
                PRINT_HELP( "HELP_POOR_F" );
                while (NOT (sub_19301( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 1, ref uParam6, 0 )))
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
                sub_27565( uParam5, uVar16, iVar17, uParam7, uParam13 );
                while (NOT (sub_19301( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 0, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                (uParam2^) = iVar17;
                return 1;
            }
        }
    }
    else if (sub_23224( "BLANK" ))
    {
        CLEAR_HELP();
        while (NOT (sub_19301( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 1, ref uParam6, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_28266( uVar16, 3, 0 ), 4, "", "", "", iVar17, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_28266( uVar16, 3, 0 ), iVar17, 7500, 1 );
    };;;;;;
    if ((sub_12220( sub_592(), 80 )) AND (sub_12220( sub_592(), 88 )))
    {
        if (TIMERA() > iParam1)
        {
            TASK_PLAY_ANIM( sub_592(), "examine shoes", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
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

void sub_25895(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_592(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_592(), 5 );
    bVar8 = false;
    for ( I = 0; I < 2; I++ )
    {
        if (NOT bVar8)
        {
            sub_25963( I, ref iVar6, ref iVar7 );
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

void sub_25963(unknown uParam0, unknown uParam1, unknown uParam2)
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

string sub_26288(unknown uParam0)
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

void sub_26788(boolean bParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    int iVar7;

    if (IS_SCREEN_FADED_IN())
    {
        iVar5 = -1;
        iVar6 = -1;
        sub_25895( ref iVar7 );
        for ( I = 0; I < (uParam1^); I++ )
        {
            if (iVar7 == (uParam1^)[I])
            {
                iVar5 = I;
            }
        }
        if (bParam0)
        {
            sub_8180( "  * left (iThis_foot: " );
            sub_8423( iVar5 );
            iVar6 = iVar5 - 1;
            if (iVar6 < 0)
            {
                iVar6 += (uParam1^);
            }
        }
        else
        {
            sub_8180( "  * right (iThis_foot: " );
            sub_8423( iVar5 );
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
        sub_8180( "),  next: " );
        sub_8423( iVar6 );
        sub_27068();
        sub_27109( (uParam1^)[iVar6] );
        DO_SCREEN_FADE_IN( 125 );
    }
    WAIT( 0 );
    return;
}

void sub_27068()
{
    if (g_U10602)
    {
        PRINTNL();
    }
    return;
}

void sub_27109(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_25963( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_592(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_592(), 5 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_592(), 5, iVar3, iVar4 );
    }
    return;
}

void sub_27565(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_659(), -1 * iParam2 );
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
        sub_9981( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

string sub_28266(unknown uParam0, unknown uParam1, unknown uParam2)
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

int sub_28919(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    int iVar10;
    unknown uVar11;
    string sVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    iVar10 = l_U1321;
    if (g_U8842)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar10 );
        iVar10 = l_U1321 / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar10 );
        PRINTSTRING( "  (50%)\n" );
    }
    sub_29057( ref uVar11 );
    if (g_U8819[uVar11])
    {
        if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "HELP_OWN_H", sub_29290( uVar11 ) )))
        {
            CLEAR_HELP();
            CLEAR_PRINTS();
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_H", sub_29290( uVar11 ) );
        }
        sVar12 = "HELP_OWN_H";
    }
    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BUY_H" )))
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
        PRINT_HELP_FOREVER( "HELP_BUY_H" );
    }
    sVar12 = "HELP_BUY_H";;
    iVar13 = -1;
    iVar14 = -1;
    if (NOT IS_USING_CONTROLLER())
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar13, ref iVar14 );
    }
    if ((IS_BUTTON_PRESSED( 0, 0 )) || ((iVar13 != 0) AND (iVar13 != -1)))
    {
        if (IS_USING_CONTROLLER())
        {
            GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar15, ref uVar16, ref uVar17, ref uVar18 );
        }
        else
        {
            GET_KEYBOARD_MOVE_INPUT( ref iVar15, ref uVar16 );
        }
        if (iVar15 < 65472)
        {
            if (sub_29717( 1 ))
            {
                return sub_29746( sVar12, uParam0, ref uParam1 );
            }
        }
        else if (iVar15 >= 64)
        {
            if (sub_29717( 0 ))
            {
                return sub_29746( sVar12, uParam0, ref uParam1 );
            }
        }
    }
    else if (IS_BUTTON_PRESSED( 0, 10 ))
    {
        if (sub_29717( 1 ))
        {
            return sub_29746( sVar12, uParam0, ref uParam1 );
        }
    }
    else if (IS_BUTTON_PRESSED( 0, 11 ))
    {
        if (sub_29717( 0 ))
        {
            return sub_29746( sVar12, uParam0, ref uParam1 );
        }
    }
    else if (sub_18299())
    {
        CLEAR_PRINTS();
        if (NOT sub_22544())
        {
            iVar10 = 0;
            PRINT_HELP( "HELP_BOUGHT_H_F" );
            sub_30105( 0, uVar11, iVar10, uParam2, l_U1324 );
            while (NOT (sub_19301( ref l_U1362, ref l_U1363, sVar12, "LB_HEAD", uParam0, 0, ref uParam1, 1 )))
            {
                WAIT( 0 );
            }
            l_U1318 = 0;
            return 1;
        }
        else if (NOT (IS_SCORE_GREATER( sub_659(), iVar10 - 1 )))
        {
            CLEAR_PRINTS();
            PRINT_HELP( "HELP_POOR_H" );
            return sub_29746( sVar12, uParam0, ref uParam1 );
        }
        else
        {
            CLEAR_PRINTS();
            PRINT_HELP_WITH_NUMBER( "HELP_BOUGHT_H", iVar10 );
            StrCopy( ref g_U8844, "HELP_BOUGHT_H", 16 );
            sub_30105( 0, uVar11, iVar10, uParam2, l_U1324 );
            while (NOT (sub_19301( ref l_U1362, ref l_U1363, sVar12, "LB_HEAD", uParam0, 0, ref uParam1, 1 )))
            {
                WAIT( 0 );
            }
            l_U1318 = 0;
            return 1;
        }
    }
    else if (sub_23224( "BLANK" ))
    {
        return sub_29746( sVar12, uParam0, ref uParam1 );
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_30644( uVar11, 3, 0 ), 4, "", "", "", iVar10, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_30644( uVar11, 3, 0 ), iVar10, 7500, 1 );
    };;;;;;
    if ((sub_12220( sub_592(), 80 )) AND (sub_12220( sub_592(), 88 )))
    {
        if (TIMERA() > l_U1373)
        {
            TASK_PLAY_ANIM( sub_592(), "Examine Hat_b", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1373 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    DISPLAY_CASH( 1 );
    return 0;
}

void sub_29057(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;

    GET_CHAR_PROP_INDEX( sub_592(), 0, ref iVar3 );
    (uParam0^) = 1;
    bVar6 = false;
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT bVar6)
        {
            sub_29110( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == 0)
    {
        uVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_592(), 8 );
        uVar8 = GET_CHAR_TEXTURE_VARIATION( sub_592(), 8 );
    }
    if (NOT bVar6)
    {
        (uParam0^) = 1;
    }
    return;
}

void sub_29110(unknown uParam0, unknown uParam1)
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

string sub_29290(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "clo_HEAD_NONE";
        break;
        case 1: return "NUMBER_OF_PLAYER_CLOTHES_HEAD";
    }
    SCRIPT_ASSERT( "get_head_americanAmbiance_name - null" );
    return "null head";
}

int sub_29717(unknown uParam0)
{
    return 0;
}

int sub_29746(unknown uParam0, unknown uParam1, unknown uParam2)
{
    CLEAR_HELP();
    if (DOES_OBJECT_EXIST( l_U1407 ))
    {
        DELETE_OBJECT( ref l_U1407 );
    }
    if (DOES_OBJECT_EXIST( l_U1408 ))
    {
        DELETE_OBJECT( ref l_U1408 );
    }
    l_U1412 = 0;
    l_U1413 = 0;
    while (NOT (sub_19301( ref l_U1362, ref l_U1363, uParam0, "LB_HEAD", uParam1, 1, uParam2, 1 )))
    {
        WAIT( 0 );
    }
    l_U1318 = 0;
    return 1;
}

void sub_30105(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_659(), -1 * iParam2 );
    g_U8819[uParam1] = 1;
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
        sub_9981( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

string sub_30644(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

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
            default:
              case 1:
        }
        return "NUMBER_OF_PLAYER_CLOTHES_FEET";
        break;
        default:
          case 4: return "NUMBER_OF_TORSO_PRINT";
    }
    return "get_head_print_here";
}

int sub_31146(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    int iVar10;
    unknown uVar11;
    string sVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    iVar10 = l_U1321;
    if (g_U8842)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar10 );
        iVar10 = l_U1321 / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar10 );
        PRINTSTRING( "  (50%)\n" );
    }
    sub_31284( ref uVar11 );
    sub_8180( "get_eyes_americanAmbiance_name(" );
    sub_8180( sub_31483( uVar11 ) );
    sub_8180( "): ''" );
    sub_8180( sub_31608( uVar11 ) );
    sub_8180( "''\n" );
    if (g_U8821[uVar11])
    {
        if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "HELP_OWN_G", sub_31608( uVar11 ) )))
        {
            CLEAR_HELP();
            CLEAR_PRINTS();
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_G", sub_31608( uVar11 ) );
        }
        sVar12 = "HELP_OWN_G";
    }
    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BUY_G" )))
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
        PRINT_HELP_FOREVER( "HELP_BUY_G" );
    }
    sVar12 = "HELP_BUY_G";;
    iVar13 = -1;
    iVar14 = -1;
    if (NOT IS_USING_CONTROLLER())
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar13, ref iVar14 );
    }
    if ((IS_BUTTON_PRESSED( 0, 0 )) || ((iVar13 != 0) AND (iVar13 != -1)))
    {
        if (IS_USING_CONTROLLER())
        {
            GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar15, ref uVar16, ref uVar17, ref uVar18 );
        }
        else
        {
            GET_KEYBOARD_MOVE_INPUT( ref iVar15, ref uVar16 );
        }
        if (iVar15 < 65472)
        {
            if (sub_32087( 1 ))
            {
                return sub_32116( sVar12, uParam0, ref uParam1 );
            }
        }
        else if (iVar15 >= 64)
        {
            if (sub_32087( 0 ))
            {
                return sub_32116( sVar12, uParam0, ref uParam1 );
            }
        }
    }
    else if (IS_BUTTON_PRESSED( 0, 10 ))
    {
        if (sub_32087( 1 ))
        {
            return sub_32116( sVar12, uParam0, ref uParam1 );
        }
    }
    else if (IS_BUTTON_PRESSED( 0, 11 ))
    {
        if (sub_32087( 0 ))
        {
            return sub_32116( sVar12, uParam0, ref uParam1 );
        }
    }
    else if (sub_18299())
    {
        CLEAR_PRINTS();
        if (NOT sub_22544())
        {
            iVar10 = 0;
            PRINT_HELP( "HELP_BOUGHT_G_F" );
            sub_32475( 0, uVar11, iVar10, uParam2, l_U1324 );
            while (NOT (sub_19301( ref l_U1362, ref l_U1363, sVar12, "LB_EYES", uParam0, 0, ref uParam1, 1 )))
            {
                WAIT( 0 );
            }
            l_U1318 = 0;
            return 1;
        }
        else if (NOT (IS_SCORE_GREATER( sub_659(), iVar10 - 1 )))
        {
            CLEAR_PRINTS();
            PRINT_HELP( "HELP_POOR_G" );
            while (NOT (sub_19301( ref l_U1362, ref l_U1363, sVar12, "LB_EYES", uParam0, 1, ref uParam1, 1 )))
            {
                WAIT( 0 );
            }
            l_U1318 = 0;
            return 1;
        }
        else
        {
            CLEAR_PRINTS();
            PRINT_HELP_WITH_NUMBER( "HELP_BOUGHT_G", iVar10 );
            StrCopy( ref g_U8844, "HELP_BOUGHT_G", 16 );
            sub_32475( 0, uVar11, iVar10, uParam2, l_U1324 );
            while (NOT (sub_19301( ref l_U1362, ref l_U1363, sVar12, "LB_EYES", uParam0, 0, ref uParam1, 1 )))
            {
                WAIT( 0 );
            }
            l_U1318 = 0;
            return 1;
        }
    }
    else if (sub_23224( "BLANK" ))
    {
        CLEAR_HELP();
        while (NOT (sub_19301( ref l_U1362, ref l_U1363, sVar12, "LB_EYES", uParam0, 1, ref uParam1, 1 )))
        {
            WAIT( 0 );
        }
        l_U1318 = 0;
        return 1;
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_33113( uVar11, 3, 0 ), 4, "", "", "", iVar10, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_33113( uVar11, 3, 0 ), iVar10, 7500, 1 );
    };;;;;;
    if ((sub_12220( sub_592(), 80 )) AND (sub_12220( sub_592(), 88 )))
    {
        if (TIMERA() > l_U1373)
        {
            TASK_PLAY_ANIM( sub_592(), "Examine Glasses_b", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1373 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    DISPLAY_CASH( 1 );
    return 0;
}

void sub_31284(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_592(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT bVar6)
        {
            sub_31333( I, ref iVar5 );
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

void sub_31333(unknown uParam0, unknown uParam1)
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

string sub_31483(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "EYES_NONE";
        break;
        case 1: return "NUMBER_OF_PLAYER_CLOTHES_EYES";
    }
    return "null";
}

string sub_31608(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "clo_EYES_NONE";
        break;
        case 1: return "NUMBER_OF_PLAYER_CLOTHES_EYES";
    }
    SCRIPT_ASSERT( "get_eyes_americanAmbiance_name - null" );
    return "null eyes";
}

int sub_32087(unknown uParam0)
{
    return 0;
}

int sub_32116(unknown uParam0, unknown uParam1, unknown uParam2)
{
    CLEAR_HELP();
    if (DOES_OBJECT_EXIST( l_U1410 ))
    {
        DELETE_OBJECT( ref l_U1410 );
    }
    if (DOES_OBJECT_EXIST( l_U1409 ))
    {
        DELETE_OBJECT( ref l_U1409 );
    }
    l_U1412 = 0;
    l_U1413 = 0;
    while (NOT (sub_19301( ref l_U1362, ref l_U1363, uParam0, "LB_EYES", uParam1, 1, uParam2, 1 )))
    {
        WAIT( 0 );
    }
    l_U1318 = 0;
    return 1;
}

void sub_32475(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_659(), -1 * iParam2 );
    g_U8821[uParam1] = 1;
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
        sub_9981( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

string sub_33113(unknown uParam0, unknown uParam1, unknown uParam2)
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
            default:
              case 1:
        }
        return "NUMBER_OF_PLAYER_CLOTHES_FEET";
        break;
        default:
          case 4:
        return "NUMBER_OF_TORSO_PRINT";
        break;
    }
    return "get_eyes_print_here()";
}
