void main()
{
    int I;

    l_U177 = 0;
    l_U197 = 0;
    l_U198 = 0;
    l_U199 = 18;
    l_U795 = 2;
    l_U803 = 1;
    l_U804 = 0;
    l_U806 = 0;
    l_U807 = 0;
    l_U808 = 0;
    l_U809 = 0;
    l_U811 = -1;
    l_U812 = -1;
    l_U813 = -1;
    l_U814 = 1;
    l_U858 = "C_RETAIL_14x10_room01";
    l_U862 = {-0.50000000, -4.00000000, 1.00000000};
    l_U865 = {2.00000000, 1.50000000, 1.50000000};
    l_U868 = {-25.00000000, -35.00000000, -5.00000000};
    l_U871 = {35.00000000, 10.00000000, 15.00000000};
    StrCopy( ref l_U874, "blank", 16 );
    l_U878 = "blank";
    l_U993 = 13.50000000;
    l_U995 = 0;
    l_U996 = 0;
    l_U997 = 0;
    l_U998 = 0;
    l_U999 = 0;
    l_U1000 = 0;
    l_U1002 = -1;
    l_U1003 = 5000;
    l_U1004 = 0;
    l_U1005 = 0;
    l_U1006 = 0;
    l_U1007 = 1;
    l_U888 = {l_U1008._fU4[0]};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_357();
    }
    while (l_U803)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U198)
            {
                case 0:
                if (l_U857 == nil)
                {
                    sub_2778( "get swank_clothes_shop_interior at " );
                    sub_2801( l_U888 );
                    sub_2838();
                    GET_INTERIOR_AT_COORDS( l_U888._fU0, l_U888._fU4, l_U888._fU8, ref l_U857 );
                }
                else
                {
                    g_U8353 = 1;
                    sub_2915();
                    sub_7502();
                    l_U198 = 1;
                }
                break;
                case 1:
                if (NOT l_U806)
                {
                    if (sub_8895())
                    {
                        if (IS_CHAR_WAITING_FOR_WORLD_COLLISION( l_U815._fU0 ))
                        {
                            ACTIVATE_INTERIOR( l_U857, 1 );
                        }
                        else
                        {
                            l_U806 = 1;
                        }
                    }
                }
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_552(), l_U979[l_U795]._fU0, l_U979[l_U795]._fU4, l_U979[l_U795]._fU8, l_U986[l_U795]._fU0, l_U986[l_U795]._fU4, l_U986[l_U795]._fU8, l_U993, 0 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U815._fU0 )))
                    {
                        CLEAR_CHAR_TASKS( l_U815._fU0 );
                        SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U815._fU0, l_U979[l_U795]._fU0, l_U979[l_U795]._fU4, l_U979[l_U795]._fU8, l_U986[l_U795]._fU0, l_U986[l_U795]._fU4, l_U986[l_U795]._fU8, l_U993 );
                        if (sub_9338( sub_552(), l_U858 ))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U815._fU0, sub_552() );
                            l_U198 = 2;
                        }
                    }
                }
                break;
                case 2:
                if ((sub_9427()) AND (sub_20308()))
                {
                    l_U808 = 0;
                    if (sub_21253( l_U858, l_U888 ))
                    {
                        for ( l_U884 = 0; l_U884 < 18; l_U884++ )
                        {
                            if (LOCATE_CHAR_ON_FOOT_3D( sub_552(), l_U200[l_U884]._fU8._fU0, l_U200[l_U884]._fU8._fU4, l_U200[l_U884]._fU8._fU8, l_U200[l_U884]._fU32._fU0, l_U200[l_U884]._fU32._fU4, l_U200[l_U884]._fU32._fU8, 0 ))
                            {
                                l_U808 = 1;
                                l_U994 = l_U200[l_U884]._fU0;
                                if (NOT (sub_21663( ref g_U8388, ProtectedGet(l_U810), ref l_U813 )))
                                {
                                    sub_2778( "clothes_info[" );
                                    sub_7789( l_U884 );
                                    sub_2778( "].name: " );
                                    sub_2778( l_U200[l_U884]._fU0 );
                                    sub_2838();
                                    switch (l_U200[l_U884]._fU72)
                                    {
                                        case 4:
                                        if (2)
                                        {
                                            sub_29936();
                                            l_U199 = l_U884;
                                            l_U198 = 5;
                                        }
                                        break;
                                        break;
                                        1;
                                        ref l_U810;
                                        sub_22138( l_U200[l_U884]._fU44, l_U200[l_U884]._fU56, l_U200[l_U884]._fU68, ref l_U796, ProtectedGet(l_U200[l_U884]._fU100), l_U200[l_U884]._fU4, l_U857, ref l_U805, l_U879, ref l_U880, ref l_U883, ref l_U810, 1, 1, l_U200[l_U884]._fU104, l_U200[l_U884]._fU116, l_U200[l_U884]._fU128, 2, ref l_U814 );
                                        break;
                                        case 3:
                                        if (2)
                                        {
                                            sub_29936();
                                            l_U199 = l_U884;
                                            l_U198 = 4;
                                        }
                                        break;
                                        break;
                                        1;
                                        ref l_U810;
                                        sub_31337( l_U200[l_U884]._fU44, l_U200[l_U884]._fU56, l_U200[l_U884]._fU68, l_U200[l_U884]._fU80, ProtectedGet(l_U200[l_U884]._fU100), l_U200[l_U884]._fU4, l_U857, ref l_U805, l_U879, ref l_U880, ref l_U883, ref l_U810, 1, 1, l_U874, l_U200[l_U884]._fU104, l_U200[l_U884]._fU116, l_U200[l_U884]._fU128, 2, ref l_U814 );
                                        break;
                                        case 5:
                                        if (sub_32360( l_U200[l_U884]._fU44, ref l_U200[l_U884]._fU56, ref l_U200[l_U884]._fU68, l_U200[l_U884]._fU96, ProtectedGet(l_U200[l_U884]._fU100), l_U200[l_U884]._fU4, ref l_U200[l_U884]._fU104, ref l_U200[l_U884]._fU116, l_U200[l_U884]._fU128, ref l_U814 ))
                                        {
                                            sub_29936();
                                            l_U199 = l_U884;
                                            l_U198 = 3;
                                        }
                                        break;
                                        default:
                                        sub_2778( "  ** clothes_info[" );
                                        sub_7789( l_U884 );
                                        sub_2778( "]." );
                                        SCRIPT_ASSERT( "ped_comp in perseus_manhat_8.sc not found!" );
                                        sub_2838();
                                    }
                                }
                            }
                            GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, l_U200[l_U884]._fU20, ref l_U200[l_U884]._fU8 );
                        }
                    }
                    if ((NOT l_U808) AND (sub_9338( sub_552(), l_U858 )))
                    {
                        if (IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            for ( I = 0; I < 18; I++ )
                            {
                                if (NOT (IS_STRING_NULL( l_U200[I]._fU4 )))
                                {
                                    if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", l_U200[I]._fU4 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", l_U200[I]._fU4 )))
                                    {
                                        CLEAR_HELP();
                                    }
                                }
                                sub_786( 2, "BLANK" );
                            }
                        }
                        l_U814 = 1;
                        l_U994 = "BLANK";
                    }
                }
                else if (IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    for ( I = 0; I < 18; I++ )
                    {
                        if (NOT (IS_STRING_NULL( l_U200[I]._fU4 )))
                        {
                            if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", l_U200[I]._fU4 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", l_U200[I]._fU4 )))
                            {
                                CLEAR_HELP();
                            }
                        }
                        sub_786( 2, "BLANK" );
                    }
                }
                break;
                case 3:
                if (sub_35689( l_U200[l_U199], l_U815._fU60 ))
                {
                    l_U1000 = 0;
                    l_U1002 = -1;
                    l_U198 = 2;
                }
                break;
                case 4:
                if (2)
                {
                    l_U1000 = 0;
                    l_U1002 = -1;
                    l_U198 = 2;
                }
                break;
                break;
                1;
                ref l_U810;
                sub_40037( l_U200[l_U199], l_U881, ref l_U810, 1, 1, ref l_U879, ref l_U880, 2, l_U883, l_U815._fU60, l_U815._fU0 );
                break;
                case 5:
                if (2)
                {
                    l_U1000 = 0;
                    l_U1002 = -1;
                    l_U198 = 2;
                }
                break;
                break;
                1;
                ref l_U810;
                sub_41531( ref l_U810, 1, 1, ref l_U879, ref l_U880, 2, l_U883, l_U815._fU60, l_U815._fU0 );
                l_U881;
                ref l_U796;
                break;
            }
        }
        else
        {
            l_U803 = 0;
        }
    }
    sub_357();
    return;
}

void sub_357()
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U815._fU0 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U836._fU0 );
    sub_392();
    REMOVE_DECISION_MAKER( l_U815._fU52 );
    REMOVE_DECISION_MAKER( l_U815._fU56 );
    REMOVE_DECISION_MAKER( l_U836._fU52 );
    REMOVE_DECISION_MAKER( l_U836._fU56 );
    REMOVE_ANIMS( "clothing" );
    if (NOT (IS_CHAR_DEAD( sub_552() )))
    {
        FREEZE_CHAR_POSITION( sub_552(), 0 );
        if ((IS_PLAYER_PLAYING( sub_619() )) AND (l_U804))
        {
            SET_PLAYER_CONTROL( sub_619(), 1 );
            l_U804 = 0;
        }
    }
    sub_712( ref l_U880, ref l_U879, l_U878, ref l_U874, 2, IS_THIS_A_MINIGAME_SCRIPT() );
    StrCopy( ref g_U8388, "blank", 16 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_392()
{
    int I;

    if (l_U37 != 0)
    {
        for ( I = 0; I <= (l_U37 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U4[I] );
        }
    }
    l_U37 = 0;
    return;
}

void sub_552()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_619()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_712(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
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
    sub_786( 5, uParam2 );
    sub_786( 2, uParam3 );
    sub_786( 2, "BLANK" );
    if (bParam5)
    {
        if (g_U8228)
        {
            sub_1166( sub_552(), l_U178 );
            sub_2351();
            g_U8228 = 0;
        }
    }
    if (g_U8220 != 6)
    {
        sub_2394();
        g_U8220 = 6;
    }
    return;
}

void sub_786(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((g_U9172 == iParam0) AND (l_U3))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_1007();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_619(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_1007()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_1166(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
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
        sub_1195( uParam0, ref uVar21, 0 );
        if (uParam1._fU0 != uVar21._fU0)
        {
            if (uParam1._fU0 != 10)
            {
                if (uParam1._fU0 < 0)
                {
                    CLEAR_CHAR_PROP( sub_552(), 0 );
                }
                else
                {
                    SET_CHAR_PROP_INDEX( sub_552(), 0, uParam1._fU0 );
                }
            }
            else
            {
                CLEAR_CHAR_PROP( uParam0, 0 );
                if (((GET_CHAR_DRAWABLE_VARIATION( sub_552(), 8 )) != 1) || ((GET_CHAR_TEXTURE_VARIATION( sub_552(), 8 )) != 0))
                {
                    SET_CHAR_COMPONENT_VARIATION( sub_552(), 8, 1, 0 );
                }
            }
        }
        if (uParam1._fU4 != uVar21._fU4)
        {
            if (uParam1._fU4 < 0)
            {
                CLEAR_CHAR_PROP( sub_552(), 1 );
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

void sub_1195(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_PROP_INDEX( uParam0, 0, iParam1 + 0 );
        if (iParam1->_fU0 == -1)
        {
            iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_552(), 8 );
            iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_552(), 8 );
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

void sub_2351()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_2394()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown uVar5;

    GET_GROUP_SIZE( sub_2403(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_2403(), I, ref uVar5 );
            if ((NOT (IS_CHAR_INJURED( uVar5 ))) AND (IS_PLAYER_PLAYING( sub_619() )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( uVar5 )))
                {
                    CLEAR_CHAR_TASKS( uVar5 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_GOTO_CHAR_OFFSET( uVar5, sub_552(), -1, 2.50000000, 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_2403()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2778(unknown uParam0)
{
    return;
}

void sub_2801(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U9231)
    {
        PRINTVECTOR( uParam0 );
    }
    return;
}

void sub_2838()
{
    if (g_U9231)
    {
        PRINTNL();
    }
    return;
}

void sub_2915()
{
    l_U815._fU4 = -151000142;
    l_U815._fU8[0] = {24.26820000, 807.43440000, 14.76180000};
    l_U815._fU8[1] = {11.87360000, -661.74200000, 13.86160000};
    l_U836._fU4 = -409283472;
    l_U836._fU8[0] = {20.33500000, 808.11020000, 14.76180000};
    l_U836._fU8[1] = {8.94040000, -660.86620000, 13.86160000};
    l_U979[1] = {15.61582000, -659.56750000, 17.46502000};
    l_U986[1] = {6.26549600, -659.75460000, 14.32902000};
    l_U979[0] = {27.25000000, 809.36000000, 17.15000000};
    l_U986[0] = {17.35000000, 809.36000000, 13.76000000};
    l_U795 = sub_3158( l_U888 );
    sub_3308();
    sub_4701();
    sub_6044();
    sub_1195( sub_552(), ref l_U178, 0 );
    StrCopy( ref g_U8388, "blank", 16 );
    return;
}

void sub_3158(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_3308()
{
    sub_3367( 0, -4.50000000, 5, 1, 0.70000000, 1, 1.50000000, -5, 5, 1, -3.96210000, 5.15830000, 0.00000000, 291.35540000 );
    sub_3367( 1, -4.70000000, -3.90000000, 1.00000000, 0.70000000, 0.75000000, 1.50000000, -5.00000000, -3.20000000, 1.00000000, -4.03980000, -3.98170000, 0.00010000, 81.72000000 );
    sub_3367( 2, -4.70000000, -2.45000000, 1.00000000, 0.70000000, 0.70000000, 1.50000000, -5.00000000, -3.20000000, 1.00000000, -4.03980000, -2.44730000, 0.00010000, 81.72000000 );
    sub_3367( 3, -4.70000000, -1.05000000, 1.00000000, 0.70000000, 0.70000000, 1.50000000, -5.00000000, -0.30000000, 1.00000000, -4.03980000, -1.47490000, 0.00010000, 169.92000000 );
    sub_3367( 4, -4.70000000, 0.40000000, 1.00000000, 0.70000000, 0.75000000, 1.50000000, -5.00000000, -0.30000000, 1.00000000, -4.03980000, 0.37880000, 0.00000000, 110.52000000 );
    sub_3367( 5, -4.70000000, 1.60000000, 1.00000000, 0.70000000, 0.45000000, 1.50000000, -5.10000000, 3.30000000, 0.80000000, -4.00000000, 1.59990000, 0.00010000, 51.12000000 );
    sub_3367( 6, -4.70000000, 2.50000000, 1.00000000, 0.70000000, 0.45000000, 1.50000000, -5.10000000, 1.90000000, 1.50000000, -4.00000000, 2.50000000, 0.00010000, 79.92000000 );
    sub_3367( 7, -4.70000000, 3.40000000, 1.00000000, 0.70000000, 0.45000000, 1.50000000, 4.10000000, 5.50000000, 0.80000000, -4.00000000, 3.40000000, 0.00000000, 192.24000000 );
    sub_4094( 8, -2.30000000, 1.30000000, 1, 1, 0.50000000, 1.50000000, -2.60000000, 2.20000000, 1.50000000 );
    sub_4094( 9, -2.30000000, 2.30000000, 1, 1, 0.50000000, 1.50000000, -2.60000000, 2.20000000, 1.50000000 );
    sub_4094( 10, -2.30000000, 3.50000000, 1, 1, 0.50000000, 1.50000000, -2.60000000, 4.10000000, 1.50000000 );
    sub_4094( 11, -2.30000000, 4.50000000, 1, 1, 0.50000000, 1.50000000, -2.60000000, 4.10000000, 1.50000000 );
    sub_4094( 12, 1.80000000, 1.30000000, 1, 1, 0.50000000, 1.50000000, 1.70000000, 2.20000000, 1 );
    sub_4094( 13, 1.80000000, 2.30000000, 1, 1, 0.50000000, 1.50000000, 1.70000000, 2.20000000, 1 );
    sub_4094( 14, 1.80000000, 3.80000000, 1.00000000, 1.00000000, 0.80000000, 1.50000000, 1.80000000, 4.00000000, 1.00000000 );
    sub_3367( 15, 3.90000000, 3.30000000, 1.00000000, 0.70000000, 0.50000000, 1.50000000, 4.10000000, 3.20000000, 1.00000000, 3.20000000, 3.30000000, 0.00010000, 12.24000000 );
    sub_3367( 16, 3.90000000, 4.30000000, 1.00000000, 0.70000000, 0.50000000, 1.50000000, 4.10000000, 4.20000000, 1.00000000, 3.20000000, 4.30000000, 0.00000000, 234.72000000 );
    sub_3367( 17, 3.90000000, 6.90000000, 1.00000000, 0.70000000, 0.70000000, 1.50000000, 4.10000000, 6.90000000, 1.00000000, 3.20000000, 6.90000000, 0.00000000, 338.04000000 );
    return;
}

void sub_3367(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    l_U200[uParam0]._fU20 = {uParam1};
    l_U200[uParam0]._fU32 = {uParam4};
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, l_U200[uParam0]._fU20, ref l_U200[uParam0]._fU8 );
    l_U200[uParam0]._fU44 = {uParam7};
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, uParam10, ref l_U200[uParam0]._fU56 );
    l_U200[uParam0]._fU68 = uParam13;
    return;
}

void sub_4094(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    l_U200[uParam0]._fU20 = {uParam1};
    l_U200[uParam0]._fU32 = {uParam4};
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, l_U200[uParam0]._fU20, ref l_U200[uParam0]._fU8 );
    l_U200[uParam0]._fU44 = {uParam7};
    return;
}

void sub_4701()
{
    sub_4748( 0, -4.55448700, 5.97628200, 0.71170000, -13.63334000, 0.00000000, 35.39263000, 70.00000000 );
    sub_4748( 1, -1.69000000, -4.52430000, 0.99140000, -4.10080000, 0.00000000, -104.49830000, 45.00000000 );
    sub_4748( 2, -2.10430000, -4.41170000, 0.95990000, -2.63960000, 0.00000000, -122.97750000, 45.00000000 );
    sub_4748( 3, -2.74020000, 1.32760000, 0.91420000, 0.28190000, 0.00000000, -33.48510000, 45.00000000 );
    sub_4748( 4, -1.72320000, 0.60220000, 1.36740000, -10.83310000, 0.00000000, -78.48130000, 45.00000000 );
    sub_4748( 5, -2.83260000, -0.59210000, 1.27540000, -9.10120000, 0.00000000, -146.20220000, 45.00000000 );
    sub_4748( 6, -2.52550000, 0.32290000, 1.22080000, -7.46690000, 0.00000000, -140.02610000, 45.00000000 );
    sub_4748( 7, -3.37510000, 5.61750000, 1.19880000, -7.95010000, 0.00000000, -13.73870000, 45.00000000 );
    sub_5211( 8, 0.06910000, -0.55330000, 1.34650000, -8.94420000, 0.00000000, -136.95590000, -4.92230000, 3.15220000, 1.03490000, -3.61100000, 0.00000000, 54.35730000, 45.00000000 );
    sub_5211( 9, 1.04110000, 1.64360000, 1.26390000, -8.72440000, 0.00000000, -103.26440000, -4.57160000, 4.41690000, 1.16050000, -5.50040000, 0.00000000, 40.11320000, 45.00000000 );
    sub_5211( 10, 0.39740000, 1.63170000, 1.23020000, -7.31950000, 0.00000000, -132.47660000, -4.92120000, 5.55270000, 1.05760000, -3.93160000, 0.00000000, 43.48990000, 45.00000000 );
    sub_5211( 11, 0.76090000, 3.08040000, 1.04680000, -3.31450000, 0.00000000, -124.49060000, -4.86740000, 6.44790000, 1.07290000, -3.65370000, 0.00000000, 39.58870000, 45.00000000 );
    sub_5211( 12, 3.65780000, -1.03430000, 1.21380000, -8.06170000, 0.00000000, -154.30100000, -1.15620000, 2.71690000, 1.14310000, -6.39000000, 0.00000000, 54.63970000, 45.00000000 );
    sub_5211( 13, 3.90450000, -0.04100000, 1.18740000, -5.29950000, 0.00000000, -150.57020000, -1.25150000, 3.35980000, 1.26600000, -8.91220000, 0.00000000, 69.25640000, 45.00000000 );
    sub_5211( 14, 4.12760000, 1.82550000, 1.21180000, -7.67760000, 0.00000000, -137.50910000, -0.42750000, 5.80700000, 1.08740000, -5.61680000, 0.00000000, 43.47570000, 45.00000000 );
    sub_4748( 15, 2.66470000, 0.64510000, 1.47730000, -13.96020000, 0.00000000, 164.19350000, 45.00000000 );
    sub_4748( 16, 1.72030000, 5.86890000, 1.26320000, -8.92240000, 0.00000000, 42.31780000, 45.00000000 );
    sub_4748( 17, 1.00480000, 5.40630000, 1.16660000, -7.06530000, 0.00000000, 121.38670000, 45.00000000 );
    return;
}

void sub_4748(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, uParam1, ref l_U200[uParam0]._fU104 );
    l_U200[uParam0]._fU116 = {uParam4};
    l_U200[uParam0]._fU128 = uParam7;
    return;
}

void sub_5211(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    sub_4748( uParam0, uParam1, uParam4, uParam13 );
    l_U891[sub_5242( uParam0 )] = {uParam1};
    l_U913[sub_5242( uParam0 )] = {uParam4};
    l_U935[sub_5242( uParam0 )] = {uParam7};
    l_U957[sub_5242( uParam0 )] = {uParam10};
    return;
}

int sub_5242(unknown uParam0)
{
    switch (uParam0)
    {
        case 8:
        return 0;
        break;
        case 9:
        return 1;
        break;
        case 10:
        return 2;
        break;
        case 11:
        return 3;
        break;
        case 12:
        return 4;
        break;
        case 13:
        return 5;
        break;
        case 14:
        return 6;
        break;
    }
    return 7;
}

void sub_6044()
{
    sub_6083( 0, "swank_FEET", 13, 200, "clo_SHOES" );
    sub_6351( 1, "swank_LEGS_0", 14, 300, "clo_LEGS_4_0" );
    sub_6351( 2, "swank_LEGS_1", 15, 300, "clo_LEGS_4_1" );
    sub_6351( 3, "swank_LEGS_2", 15, 300, "clo_LEGS_4_2" );
    sub_6351( 4, "swank_LEGS_3", 16, 300, "clo_LEGS_4_3" );
    sub_6693( 5, "swank_WALL_LEFT_0", 13, 600, "clo_OUTFIT_13_1" );
    sub_6693( 6, "swank_WALL_LEFT_1", 14, 600, "clo_OUTFIT_13_2" );
    sub_6693( 7, "swank_WALL_LEFT_2", 12, 600, "clo_OUTFIT_13_0" );
    sub_6693( 8, "swank_HANG_LEFT_0", 8, 1000, "clo_OUTFIT_12_0" );
    sub_6693( 9, "swank_HANG_LEFT_1", 9, 1000, "clo_OUTFIT_12_1" );
    sub_6693( 10, "swank_HANG_LEFT_2", 10, 1000, "clo_OUTFIT_12_2" );
    sub_6693( 11, "swank_HANG_LEFT_3", 11, 1000, "clo_OUTFIT_12_3" );
    sub_6693( 12, "swank_HANG_RIGHT_0", 2, 1000, "clo_OUTFIT_5_0" );
    sub_6693( 13, "swank_HANG_RIGHT_1", 4, 1000, "clo_OUTFIT_5_2" );
    sub_6693( 14, "swank_HANG_RIGHT_2_and_3", 3, 1000, "clo_OUTFIT_5_1" );
    sub_6693( 15, "swank_WALL_RIGHT_0", 7, 2000, "clo_OUTFIT_11_2" );
    sub_6693( 16, "swank_WALL_RIGHT_1", 6, 2000, "clo_OUTFIT_11_1" );
    sub_6693( 17, "swank_WALL_RIGHT_2", 5, 2000, "clo_OUTFIT_11_0" );
    return;
}

void sub_6083(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    l_U200[uParam0]._fU0 = uParam1;
    l_U200[uParam0]._fU4 = uParam4;
    l_U200[uParam0]._fU76 = 45;
    l_U200[uParam0]._fU80 = 26;
    l_U200[uParam0]._fU84 = uParam2;
    l_U200[uParam0]._fU88 = 4;
    l_U200[uParam0]._fU92 = 3;
    l_U200[uParam0]._fU96 = 20;
    l_U200[uParam0]._fU72 = 4;
    ProtectedSet(l_U200[uParam0]._fU100, uParam3);
    l_U796[0] = 13;
    l_U796[1] = 14;
    l_U796[2] = 15;
    l_U796[3] = 16;
    l_U796[4] = 17;
    l_U796[5] = 18;
    return;
}

void sub_6351(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    l_U200[uParam0]._fU0 = uParam1;
    l_U200[uParam0]._fU4 = uParam4;
    l_U200[uParam0]._fU76 = 45;
    l_U200[uParam0]._fU80 = uParam2;
    l_U200[uParam0]._fU84 = 20;
    l_U200[uParam0]._fU88 = 4;
    l_U200[uParam0]._fU92 = 3;
    l_U200[uParam0]._fU96 = 20;
    l_U200[uParam0]._fU72 = 3;
    ProtectedSet(l_U200[uParam0]._fU100, uParam3);
    return;
}

void sub_6693(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    l_U200[uParam0]._fU0 = uParam1;
    l_U200[uParam0]._fU4 = uParam4;
    l_U200[uParam0]._fU76 = 45;
    l_U200[uParam0]._fU80 = 26;
    l_U200[uParam0]._fU84 = 20;
    l_U200[uParam0]._fU88 = 4;
    l_U200[uParam0]._fU92 = 3;
    l_U200[uParam0]._fU96 = uParam2;
    l_U200[uParam0]._fU72 = 5;
    ProtectedSet(l_U200[uParam0]._fU100, uParam3);
    return;
}

void sub_7502()
{
    sub_7518( l_U815._fU4 );
    sub_7518( l_U836._fU4 );
    GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U881 );
    GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U882 );
    while (NOT sub_7662())
    {
        WAIT( 0 );
    }
    # -sub_C1FFC0-0xc214c8( 3, ref l_U815._fU52 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U815._fU56 );
    ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( l_U815._fU52, 31, 601, 100, 100, 100, 100, 0, 1 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U836._fU52 );
    COPY_COMBAT_DECISION_MAKER( 65568, ref l_U836._fU56 );
    CREATE_CHAR( 4, l_U815._fU4, l_U815._fU8[l_U795]._fU0, l_U815._fU8[l_U795]._fU4, l_U815._fU8[l_U795]._fU8, ref l_U815._fU0, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U815._fU0, l_U858 );
    sub_8054();
    SET_CHAR_HEADING( l_U815._fU0, 70.00000000 );
    SET_CHAR_DECISION_MAKER( l_U815._fU0, l_U815._fU52 );
    SET_COMBAT_DECISION_MAKER( l_U815._fU0, l_U815._fU56 );
    CREATE_CHAR( 4, l_U836._fU4, l_U836._fU8[l_U795]._fU0, l_U836._fU8[l_U795]._fU4, l_U836._fU8[l_U795]._fU8, ref l_U836._fU0, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U836._fU0, l_U858 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U836._fU0 );
    SET_CHAR_HEADING( l_U836._fU0, 250.00000000 );
    SET_CHAR_DECISION_MAKER( l_U836._fU0, l_U836._fU52 );
    SET_COMBAT_DECISION_MAKER( l_U836._fU0, l_U836._fU56 );
    TASK_START_SCENARIO_IN_PLACE( l_U836._fU0, "Scenario_Bouncer", -1082130432 );
    SET_AMBIENT_VOICE_NAME( l_U836._fU0, "M_Y_GAfr_Hi_01_FULL_01" );
    sub_8559( "" );
    sub_8686( 0, sub_552(), "NIKO", 0 );
    sub_8686( 2, l_U815._fU0, "GAY_SHOP_ASST", 0 );
    return;
}

void sub_7518(unknown uParam0)
{
    sub_2778( "REQUEST_A_MODEL(" );
    sub_2778( GET_MODEL_NAME_FOR_DEBUG( uParam0 ) );
    sub_2778( ")\n" );
    REQUEST_MODEL( uParam0 );
    l_U4[l_U37] = uParam0;
    l_U37++;
    return;
}

int sub_7662()
{
    int I;

    if (l_U37 != 0)
    {
        for ( I = 0; I <= (l_U37 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U4[I] )))
            {
                REQUEST_MODEL( l_U4[I] );
                sub_2778( "REQUEST_MODEL(" );
                sub_2778( GET_MODEL_NAME_FOR_DEBUG( l_U4[I] ) );
                sub_2778( ") [" );
                sub_7789( I );
                sub_2778( "]\n" );
                return 0;
            }
        }
    }
    return 1;
}

void sub_7789(unknown uParam0)
{
    return;
}

void sub_8054()
{
    unknown uVar2;
    unknown uVar3;

    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U815._fU0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, GET_NUMBER_OF_CHAR_TEXTURE_VARIATIONS( l_U815._fU0, 1, 1 ), ref uVar2 );
    SET_CHAR_COMPONENT_VARIATION( l_U815._fU0, 1, 1, uVar2 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar3 );
    SET_CHAR_PROP_INDEX( l_U815._fU0, 1, uVar3 );
    sub_2778( "  * iShop_asst_random_torso = " );
    sub_7789( uVar2 );
    sub_2778( " iShop_asst_random_eyes = " );
    sub_7789( uVar3 );
    sub_2838();
    return;
}

void sub_8559(unknown uParam0)
{
    StrCopy( ref l_U79._fU0, uParam0, 16 );
    sub_8578();
    return;
}

void sub_8578()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U79._fU16[I]._fU0 = nil;
        StrCopy( ref l_U79._fU16[I]._fU4, "", 32 );
        l_U79._fU344[I] = 0;
    }
    return;
}

void sub_8686(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U79._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U79._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_8770( "\n PED NUMBER ", uParam0 );
    sub_8810( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_8770(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8810(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_8895()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CHAR_DEAD( l_U815._fU0 )))
    {
        if (IS_CHAR_ON_SCREEN( l_U815._fU0 ))
        {
            GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, l_U868, ref uVar2 );
            GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, l_U871, ref uVar5 );
            if (IS_CHAR_IN_AREA_3D( sub_552(), uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_9338(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
    if (iVar4 == (GET_HASH_KEY( uParam1 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_9427()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( l_U815._fU0 )))
    {
        if (NOT sub_9456())
        {
            if (sub_9338( l_U815._fU0, l_U858 ))
            {
                if (sub_9338( sub_552(), l_U858 ))
                {
                    if ((IS_CHAR_IN_ANY_CAR( sub_552() )) || (IS_WANTED_LEVEL_GREATER( sub_619(), 0 )))
                    {
                        if (NOT l_U996)
                        {
                            sub_9612( 1, ref l_U815._fU60, 2, ref l_U815._fU0 );
                            l_U996 = 1;
                            l_U997 = 0;
                            l_U1005 = 1;
                        }
                        return 0;
                    }
                    else if (NOT g_U8361)
                    {
                        if (NOT l_U1004)
                        {
                            PRINT_HELP( "CLO_CANT" );
                            l_U1004 = 1;
                        }
                        return 0;
                    }
                    else if (NOT l_U996)
                    {
                        if (NOT l_U1005)
                        {
                            sub_9612( 3, ref l_U815._fU60, 2, ref l_U815._fU0 );
                            l_U996 = 1;
                            l_U997 = 0;
                        }
                    }
                    if (((IS_CHAR_SHOOTING( sub_552() )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U815._fU0, sub_552(), 0 ))) || (l_U807))
                    {
                        if (sub_9338( sub_552(), l_U858 ))
                        {
                            if (sub_12076( l_U815._fU0, 91 ))
                            {
                                CLEAR_CHAR_TASKS( l_U815._fU0 );
                                SET_CHAR_RELATIONSHIP( l_U815._fU0, 4, 0 );
                                TASK_COMBAT( l_U815._fU0, sub_552() );
                                ALTER_WANTED_LEVEL_NO_DROP( sub_619(), 1 );
                                if (IS_CHAR_SHOOTING( sub_552() ))
                                {
                                    SAY_AMBIENT_SPEECH( l_U815._fU0, "SHOP_SHOTS_FIRED", 1, 0, 0 );
                                }
                                if (NOT l_U807)
                                {
                                    WAIT( 500 );
                                    PLAY_SOUND_FROM_POSITION( -1, "SHOP_ALARMS_RANDOM", l_U888 );
                                }
                                l_U807 = 1;
                            }
                        }
                    }
                    else if ((IS_PLAYER_TARGETTING_CHAR( sub_619(), l_U815._fU0 )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_619(), l_U815._fU0 )))
                    {
                        if (NOT l_U998)
                        {
                            if (IS_CHAR_ARMED( sub_552(), 4 ))
                            {
                                sub_9612( 7, ref l_U815._fU60, 2, ref l_U815._fU0 );
                            }
                            else
                            {
                                sub_9612( 6, ref l_U815._fU60, 2, ref l_U815._fU0 );
                            }
                            l_U998 = 1;
                        }
                    }
                    else if (NOT (sub_12449( l_U815._fU60 )))
                    {
                        l_U998 = 0;
                    }
                    if (NOT (sub_12449( l_U815._fU60 )))
                    {
                        if (l_U1002 < 0)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 6000, 10000, ref l_U1003 );
                            GET_GAME_TIMER( ref l_U1002 );
                        }
                        else if (NOT l_U1000)
                        {
                            GET_GAME_TIMER( ref l_U1001 );
                            sub_2778( "  ** time to bitch: " );
                            sub_7789( (l_U1002 + l_U1003) - l_U1001 );
                            sub_2838();
                            if (l_U1001 > (l_U1002 + l_U1003))
                            {
                                switch (sub_12788())
                                {
                                    case 0:
                                    sub_9612( 8, ref l_U815._fU60, 2, ref l_U815._fU0 );
                                    break;
                                    case 1:
                                    sub_9612( 10, ref l_U815._fU60, 2, ref l_U815._fU0 );
                                    break;
                                    case 2:
                                    sub_9612( 9, ref l_U815._fU60, 2, ref l_U815._fU0 );
                                    break;
                                }
                                l_U1000 = 1;
                            }
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U1002 );
                    }
                    if (sub_12076( l_U815._fU0, 21 ))
                    {
                        if (TIMERB() > l_U882)
                        {
                            CLEAR_CHAR_TASKS( l_U815._fU0 );
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            TASK_GO_TO_CHAR( l_U815._fU0, sub_552(), -1, 5.00000000 );
                            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U882 );
                        }
                        else if ((sub_12076( l_U815._fU0, 34 )) AND (sub_12076( l_U815._fU0, 25 )))
                        {
                            if (NOT (IS_CHAR_FACING_CHAR( l_U815._fU0, sub_552(), 10.00000000 )))
                            {
                                CLEAR_CHAR_TASKS( l_U815._fU0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( l_U815._fU0, sub_552() );
                            }
                        }
                    }
                    else
                    {
                        MODIFY_CHAR_MOVE_STATE( l_U815._fU0, 2 );
                        SETTIMERB( 0 );
                    }
                    if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U815._fU0, sub_552(), 0 )) AND (NOT l_U999))
                    {
                        sub_9612( 0, ref l_U815._fU60, 2, ref l_U815._fU0 );
                        l_U999 = 1;
                        l_U1005 = 1;
                    };;;
                }
                else if (NOT l_U807)
                {
                    if (NOT (LOCATE_CHAR_ON_FOOT_2D( l_U815._fU0, l_U815._fU8[l_U795]._fU0, l_U815._fU8[l_U795]._fU4, 1.00000000, 1.00000000, 0 )))
                    {
                        if (sub_12076( l_U815._fU0, 29 ))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar5 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, l_U815._fU8[l_U795]._fU0, l_U815._fU8[l_U795]._fU4, l_U815._fU8[l_U795]._fU8, 2, -2 );
                            GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, 0.00000000, -10.00000000, 1.00000000, ref uVar2 );
                            TASK_TURN_CHAR_TO_FACE_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            CLOSE_SEQUENCE_TASK( uVar5 );
                            TASK_PERFORM_SEQUENCE( l_U815._fU0, uVar5 );
                            CLEAR_SEQUENCE_TASK( uVar5 );
                        }
                    }
                    else if ((sub_12076( l_U815._fU0, 1 )) AND (sub_12076( l_U815._fU0, 29 )))
                    {
                        TASK_STAND_STILL( l_U815._fU0, -2 );
                    }
                }
                if (NOT l_U997)
                {
                    if (NOT l_U1005)
                    {
                        sub_9612( 2, ref l_U815._fU60, 2, ref l_U815._fU0 );
                        l_U997 = 1;
                    }
                }
                if ((sub_19570( sub_552(), l_U815._fU0 )) >= 25.00000000)
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLO_CANT" )))
                    {
                        l_U1004 = 0;
                    }
                    l_U996 = 0;
                }
                if (l_U809)
                {
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_H_EMPTY" ))
                    {
                        CLEAR_HELP();
                    }
                }
            }
            else if (NOT l_U809)
            {
                if (NOT (sub_9338( l_U815._fU0, l_U858 )))
                {
                    if (sub_9338( sub_552(), l_U858 ))
                    {
                        CLEAR_HELP();
                        PRINT_HELP( "SHOP_H_EMPTY" );
                        l_U809 = 1;
                    }
                }
            }
            return 0;;
        }
        else if ((sub_9338( sub_552(), l_U858 )) AND (sub_9338( l_U815._fU0, l_U858 )))
        {
            if (sub_12076( l_U815._fU0, 25 ))
            {
                sub_9612( 1, ref l_U815._fU60, 2, ref l_U815._fU0 );
                TASK_SMART_FLEE_CHAR( l_U815._fU0, sub_552(), 100.00000000, -1 );
                l_U1005 = 1;
            }
        }
        return 0;;
        return 1;
        break;
    }
    if (DOES_CHAR_EXIST( l_U815._fU0 ))
    {
        if (IS_CHAR_DEAD( l_U815._fU0 ))
        {
            sub_2778( "perseus shop_asst dead\n" );
        }
        else
        {
            sub_2778( "perseus shop_asst exists\n" );
        }
    }
    else
    {
        sub_2778( "perseus shop_asst doesn't exist\n" );
    }
    if (NOT l_U809)
    {
        if (DOES_CHAR_EXIST( l_U815._fU0 ))
        {
            PRINT_HELP( "SHOP_H_DEAD" );
            l_U809 = 1;
        }
    }
    return 0;
}

int sub_9456()
{
    if ((g_U8359) AND (l_U795 == 0))
    {
        if (g_U8360)
        {
            return 1;
        }
    }
    return 0;
}

void sub_9612(int iParam0, unknown uParam1, int iParam2, unknown uParam3)
{
    char[16] cVar6;
    unknown uVar10;
    int iVar11;

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
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_552() );
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "finale1c" )) >= 1)
    {
        GET_GROUP_SIZE( sub_2403(), ref uVar10, ref iVar11 );
        if (iVar11 >= 1)
        {
            PRINTSTRING( "  * skipping speech ''" );
            PRINTSTRING( ref cVar6 );
            PRINTSTRING( "'' because ''finale1c'' running and with iNumber_of_player_group_followers = " );
            PRINTINT( iVar11 );
            PRINTNL();
            return 0;
        }
    }
    if ((sub_10293()) AND (iParam2 == 0))
    {
        if (NOT g_U8358)
        {
            if (iParam0 == 5)
            {
                PRINTSTRING( "  * skipping speech ''" );
                PRINTSTRING( ref cVar6 );
                PRINTSTRING( "'' because ''roman3'' running and dateSpeech = CLOTHES_SHOP_PLAYER_PURCHASES  - " );
                PRINTSTRING( "gbPKMAL_25_displayed:" );
                sub_10537( g_U8358 );
                PRINTNL();
                g_U8358 = 1;
                return 0;
            }
        }
        if (NOT g_U8355)
        {
            if (iParam0 == 3)
            {
                PRINTSTRING( "  * skipping speech ''" );
                PRINTSTRING( ref cVar6 );
                PRINTSTRING( "'' because ''roman3'' running and dateSpeech = CLOTHES_SHOP_GREETING  - " );
                PRINTSTRING( "bClothes_bought_in_roman3:" );
                sub_10537( g_U8355 );
                PRINTNL();
                return 0;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( (uParam3^) )))
    {
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_552() );
    }
    sub_2778( "  * PLAY_SHOP_ASST_SPEECH(''" );
    sub_2778( ref cVar6 );
    sub_2778( "'')\n" );
    return sub_10901( ref cVar6, uParam1, 1, 0 );
}

void sub_10293()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Roman3" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_10537(boolean bParam0)
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

void sub_10901(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_10924( uParam0, ref l_U79._fU0, uParam1, uParam2, uParam3 );
}

void sub_10924(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_10978( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_10978(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_11000( iParam1 )))
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
    sub_11680( ref g_U8395, ref l_U79 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_11000(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_2778( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_2778( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_2778( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_11680(int iParam0, int iParam1)
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

int sub_12076(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_12449(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_2778( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_2778( "\n speech is not playing" );
    }
    return 0;
}

int sub_12788()
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
    sub_12807( ref uVar5 );
    switch (uVar5)
    {
        case 13:
        case 14:
        case 15:
        bVar2 = true;
        break;
        case 16:
        case 17:
        case 18:
        bVar2 = true;
        break;
    }
    sub_13476( ref uVar6 );
    switch (uVar6)
    {
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        iVar3 = 1;
        break;
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        iVar3 = 1;
        break;
    }
    sub_14303( ref uVar7 );
    switch (uVar7)
    {
        case 2:
        case 3:
        case 4:
        bVar4 = true;
        break;
        case 5:
        case 6:
        case 7:
        bVar4 = true;
        break;
        case 8:
        case 9:
        case 10:
        case 11:
        bVar4 = true;
        break;
        case 12:
        case 13:
        case 14:
        bVar4 = true;
        break;
        default:
        PRINTSTRING( "  # player_current_outfit: ''" );
        PRINTSTRING( sub_17764( uVar7 ) );
        PRINTSTRING( "''\n" );
    }
    if (bVar4)
    {
        if (bVar2)
        {
            PRINTSTRING( "  * bPosh_outfit + bPosh_feet: ALL_PERSEUS\n" );
            return 2;
        }
        else
        {
            PRINTSTRING( "  * bPosh_outfit + NOT bPosh_feet: SOME_PERSEUS\n" );
            return 1;
        }
        break;
    }
    if ((bVar2) || (iVar3))
    {
        PRINTSTRING( "  * NOT bPosh_outfit + bPosh_feet: SOME_PERSEUS\n" );
        return 1;
        break;
    }
    PRINTSTRING( "  * NOT bPosh_outfit + NOT bPosh_feet +  NOT bPosh_legs: NO_PERSEUS\n" );
    return 0;
}

void sub_12807(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_552(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_552(), 5 );
    bVar8 = false;
    for ( I = 0; I < 20; I++ )
    {
        if (NOT bVar8)
        {
            sub_12875( I, ref iVar6, ref iVar7 );
            if ((iVar6 == iVar3) AND (iVar7 == iVar4))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 20;
    }
    return;
}

void sub_12875(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 7:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 8:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        case 9:
        (uParam1^) = 1;
        (uParam2^) = 2;
        break;
        case 13:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 14:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 15:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 2:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 3:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 10:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 11:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 12:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 16:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 17:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 18:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 4:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 5:
        (uParam1^) = 6;
        (uParam2^) = 1;
        break;
        case 6:
        (uParam1^) = 6;
        (uParam2^) = 2;
        break;
        case 19:
        (uParam1^) = 1;
        (uParam2^) = 3;
        break;
        default:
          case 20:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_13476(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_552(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_552(), 2 );
    bVar8 = false;
    for ( I = 0; I < 26; I++ )
    {
        if (NOT bVar8)
        {
            sub_13544( I, ref iVar6, ref iVar7 );
            if ((iVar6 == iVar3) AND (iVar7 == iVar4))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 26;
    }
    return;
}

void sub_13544(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 2:
        (uParam1^) = 0;
        (uParam2^) = 2;
        break;
        case 3:
        (uParam1^) = 0;
        (uParam2^) = 3;
        break;
        case 4:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 19:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 20:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 21:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 22:
        (uParam1^) = 2;
        (uParam2^) = 3;
        break;
        case 23:
        (uParam1^) = 2;
        (uParam2^) = 4;
        break;
        case 24:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 14:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 15:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 16:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 17:
        (uParam1^) = 4;
        (uParam2^) = 3;
        break;
        case 18:
        (uParam1^) = 4;
        (uParam2^) = 4;
        break;
        case 8:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 9:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 10:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 11:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 12:
        (uParam1^) = 6;
        (uParam2^) = 1;
        break;
        case 13:
        (uParam1^) = 6;
        (uParam2^) = 2;
        break;
        case 5:
        (uParam1^) = 7;
        (uParam2^) = 0;
        break;
        case 6:
        (uParam1^) = 7;
        (uParam2^) = 1;
        break;
        case 7:
        (uParam1^) = 7;
        (uParam2^) = 2;
        break;
        case 25:
        (uParam1^) = 7;
        (uParam2^) = 3;
        break;
        default:
          case 26:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_14303(unknown uParam0)
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
    sub_14317( 0, ref uVar4 );
    for ( I = 0; I < 20; I++ )
    {
        if (((((I != 0) AND (I != 1)) AND (I != 18)) AND (I != 19)) AND ((NOT bVar3) == 1))
        {
            if (sub_17310( I, 0, 0 ))
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

void sub_14317(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    switch (uParam0)
    {
        case 19:
        iParam1->_fU0 = l_U72._fU0;
        iParam1->_fU4 = l_U72._fU4;
        iParam1->_fU8 = l_U72._fU8;
        iParam1->_fU12 = l_U72._fU12;
        iParam1->_fU16 = l_U72._fU16;
        iParam1->_fU20 = l_U72._fU20;
        iParam1->_fU24 = l_U72._fU24;
        break;
        case 0:
        sub_14596( iParam1 + 0 );
        sub_13476( iParam1 + 4 );
        sub_12807( iParam1 + 8 );
        sub_15742( iParam1 + 12 );
        sub_16037( iParam1 + 16 );
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
        break;
        case 18:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 45, ref uVar4 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 26, ref uVar5 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 20, ref uVar6 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar7 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar8 );
        iParam1->_fU0 = uVar4;
        iParam1->_fU4 = uVar5;
        iParam1->_fU8 = uVar6;
        iParam1->_fU12 = uVar7;
        iParam1->_fU16 = uVar8;
        GENERATE_RANDOM_INT_IN_RANGE( -1, 1, iParam1 + 20 );
        GENERATE_RANDOM_INT_IN_RANGE( -1, 1, iParam1 + 24 );
        break;
        case 1:
        iParam1->_fU0 = 0;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = -1;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 2:
        iParam1->_fU0 = 28;
        iParam1->_fU4 = 19;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 3:
        iParam1->_fU0 = 29;
        iParam1->_fU4 = 20;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 4:
        iParam1->_fU0 = 30;
        iParam1->_fU4 = 21;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 5:
        iParam1->_fU0 = 31;
        iParam1->_fU4 = 19;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 6:
        iParam1->_fU0 = 32;
        iParam1->_fU4 = 20;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 7:
        iParam1->_fU0 = 33;
        iParam1->_fU4 = 21;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 8:
        iParam1->_fU0 = 34;
        iParam1->_fU4 = 19;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 9:
        iParam1->_fU0 = 35;
        iParam1->_fU4 = 20;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 10:
        iParam1->_fU0 = 36;
        iParam1->_fU4 = 21;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 11:
        iParam1->_fU0 = 37;
        iParam1->_fU4 = 21;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 12:
        iParam1->_fU0 = 38;
        iParam1->_fU4 = 19;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 13:
        iParam1->_fU0 = 39;
        iParam1->_fU4 = 20;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 14:
        iParam1->_fU0 = 40;
        iParam1->_fU4 = 21;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 15:
        iParam1->_fU0 = 41;
        iParam1->_fU4 = 24;
        iParam1->_fU8 = 7;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 16:
        iParam1->_fU0 = 42;
        iParam1->_fU4 = 24;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 4;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 17:
        iParam1->_fU0 = 44;
        iParam1->_fU4 = 25;
        iParam1->_fU8 = 19;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = -1;
        iParam1->_fU20 = 1;
        iParam1->_fU24 = 0;
        break;
        default:
          case 20:
        iParam1->_fU0 = 45;
        iParam1->_fU4 = 26;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = 4;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
    }
    return;
}

void sub_14596(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_552(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_552(), 1 );
    bVar8 = false;
    for ( I = 0; I < 45; I++ )
    {
        if (NOT bVar8)
        {
            sub_14666( I, ref iVar6, ref iVar7 );
            if ((iVar6 == iVar3) AND (iVar7 == iVar4))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 45;
    }
    return;
}

void sub_14666(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 2:
        (uParam1^) = 0;
        (uParam2^) = 2;
        break;
        case 15:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 16:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        case 17:
        (uParam1^) = 1;
        (uParam2^) = 2;
        break;
        case 3:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 4:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 5:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 6:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 7:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 8:
        (uParam1^) = 3;
        (uParam2^) = 2;
        break;
        case 18:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 19:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 20:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 28:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 29:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 30:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 41:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 42:
        (uParam1^) = 8;
        (uParam2^) = 0;
        break;
        case 21:
        (uParam1^) = 9;
        (uParam2^) = 0;
        break;
        case 22:
        (uParam1^) = 9;
        (uParam2^) = 1;
        break;
        case 23:
        (uParam1^) = 9;
        (uParam2^) = 2;
        break;
        case 9:
        (uParam1^) = 10;
        (uParam2^) = 0;
        break;
        case 10:
        (uParam1^) = 10;
        (uParam2^) = 1;
        break;
        case 11:
        (uParam1^) = 10;
        (uParam2^) = 2;
        break;
        case 31:
        (uParam1^) = 11;
        (uParam2^) = 0;
        break;
        case 32:
        (uParam1^) = 11;
        (uParam2^) = 1;
        break;
        case 33:
        (uParam1^) = 11;
        (uParam2^) = 2;
        break;
        case 34:
        (uParam1^) = 12;
        (uParam2^) = 0;
        break;
        case 35:
        (uParam1^) = 12;
        (uParam2^) = 1;
        break;
        case 36:
        (uParam1^) = 12;
        (uParam2^) = 2;
        break;
        case 37:
        (uParam1^) = 12;
        (uParam2^) = 3;
        break;
        case 38:
        (uParam1^) = 13;
        (uParam2^) = 0;
        break;
        case 39:
        (uParam1^) = 13;
        (uParam2^) = 1;
        break;
        case 40:
        (uParam1^) = 13;
        (uParam2^) = 2;
        break;
        case 12:
        (uParam1^) = 14;
        (uParam2^) = 0;
        break;
        case 13:
        (uParam1^) = 14;
        (uParam2^) = 1;
        break;
        case 14:
        (uParam1^) = 14;
        (uParam2^) = 2;
        break;
        case 24:
        (uParam1^) = 15;
        (uParam2^) = 0;
        break;
        case 25:
        (uParam1^) = 15;
        (uParam2^) = 1;
        break;
        case 26:
        (uParam1^) = 15;
        (uParam2^) = 2;
        break;
        case 27:
        (uParam1^) = 15;
        (uParam2^) = 3;
        break;
        case 43:
        (uParam1^) = 16;
        (uParam2^) = 0;
        break;
        case 44:
        (uParam1^) = 16;
        (uParam2^) = 1;
        break;
        default:
          case 45:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_15742(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;

    GET_CHAR_PROP_INDEX( sub_552(), 0, ref iVar3 );
    (uParam0^) = 4;
    bVar6 = false;
    for ( I = -1; I <= 4; I++ )
    {
        if (NOT bVar6)
        {
            sub_15795( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == -1)
    {
        iVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_552(), 8 );
        iVar8 = GET_CHAR_TEXTURE_VARIATION( sub_552(), 8 );
        if ((iVar7 == 1) AND (iVar8 == 0))
        {
            (uParam0^) = 3;
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 4;
    }
    return;
}

void sub_15795(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case -1:
        (uParam1^) = -1;
        break;
        case 0:
        (uParam1^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        break;
        case 2:
        (uParam1^) = 2;
        break;
        case 3:
        (uParam1^) = 99;
        break;
        default:
          case 4: (uParam1^) = 2147483647;
    }
    return;
}

void sub_16037(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_552(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = -1; I <= 3; I++ )
    {
        if (NOT bVar6)
        {
            sub_16086( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 3;
    }
    return;
}

void sub_16086(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case -1:
        (uParam1^) = -1;
        break;
        case 0:
        (uParam1^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        break;
        case 2:
        (uParam1^) = 2;
        break;
        default:
          case 3: (uParam1^) = 2147483647;
    }
    return;
}

int sub_17310(unknown uParam0, unknown uParam1, boolean bParam2)
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

    sub_14317( uParam0, ref uVar5 );
    sub_14317( uParam1, ref uVar12 );
    if ((uVar5._fU0 != uVar12._fU0) AND (NOT ((uVar5._fU0 == 45) || (uVar12._fU0 == 45))))
    {
        return 0;
    }
    if ((uVar5._fU4 != uVar12._fU4) AND (NOT ((uVar5._fU4 == 26) || (uVar12._fU4 == 26))))
    {
        return 0;
    }
    if ((uVar5._fU8 != uVar12._fU8) AND (NOT ((uVar5._fU8 == 20) || (uVar12._fU8 == 20))))
    {
        return 0;
    }
    if (bParam2)
    {
        if ((uVar5._fU12 != uVar12._fU12) AND (NOT ((uVar5._fU12 == 4) || (uVar12._fU12 == 4))))
        {
            return 0;
        }
        if ((uVar5._fU16 != uVar12._fU16) AND (NOT ((uVar5._fU16 == 3) || (uVar12._fU16 == 3))))
        {
            return 0;
        }
    }
    return 1;
}

string sub_17764(unknown uParam0)
{
    switch (uParam0)
    {
        case 19:
        return "PREVIOUS_OUTFIT";
        break;
        case 0:
        return "CURRENT_OUTFIT";
        break;
        case 18:
        return "RANDOM_OUTFIT";
        break;
        case 1:
        return "INITIAL_OUTFIT";
        break;
        case 2:
        return "OUTFIT_5_0";
        break;
        case 3:
        return "OUTFIT_5_2";
        break;
        case 4:
        return "OUTFIT_5_2";
        break;
        case 5:
        return "OUTFIT_11_0";
        break;
        case 6:
        return "OUTFIT_11_1";
        break;
        case 7:
        return "OUTFIT_11_2";
        break;
        case 8:
        return "OUTFIT_12_0";
        break;
        case 9:
        return "OUTFIT_12_1";
        break;
        case 10:
        return "OUTFIT_12_2";
        break;
        case 11:
        return "OUTFIT_12_3";
        break;
        case 12:
        return "OUTFIT_13_0";
        break;
        case 13:
        return "OUTFIT_13_1";
        break;
        case 14:
        return "OUTFIT_13_2";
        break;
        case 15:
        return "HOSPITAL_OUTFIT";
        break;
        case 16:
        return "GARBAGE_OUTFIT";
        break;
        case 17:
        return "CLAUDE_OUTFIT";
        break;
        case 20: return "NUMBER_OF_PLAYER_OUTFITS";
    }
    return "null";
}

void sub_19570(unknown uParam0, unknown uParam1)
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

int sub_20308()
{
    unknown uVar2;

    if (NOT (IS_CHAR_INJURED( l_U836._fU0 )))
    {
        if ((sub_9338( sub_552(), l_U858 )) AND (sub_9338( l_U836._fU0, l_U858 )))
        {
            if ((NOT sub_9456()) AND (NOT l_U807))
            {
                if (NOT (IS_CHAR_ARMED( sub_552(), 7 )))
                {
                    if (LOCATE_CHAR_ON_FOOT_3D( l_U836._fU0, l_U836._fU8[l_U795]._fU0, l_U836._fU8[l_U795]._fU4, l_U836._fU8[l_U795]._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
                    {
                        if (sub_12076( l_U836._fU0, 114 ))
                        {
                            TASK_CLEAR_LOOK_AT( l_U836._fU0 );
                            TASK_START_SCENARIO_IN_PLACE( l_U836._fU0, "Scenario_Bouncer", -1082130432 );
                        }
                    }
                    else if (sub_12076( l_U836._fU0, 29 ))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_CLEAR_LOOK_AT( 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U836._fU8[l_U795]._fU0, l_U836._fU8[l_U795]._fU4, l_U836._fU8[l_U795]._fU8, 2, -2, 2.00000000 );
                        TASK_ACHIEVE_HEADING( 0, 250.00000000 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( l_U836._fU0, uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        l_U1006 = 0;
                    }
                    else if (l_U1006)
                    {
                        CLEAR_CHAR_TASKS( l_U836._fU0 );
                    };;;
                }
                else if (sub_12076( l_U836._fU0, 29 ))
                {
                    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
                    {
                        SAY_AMBIENT_SPEECH( l_U836._fU0, "GANG_WEAPON_WARNING", 0, 0, 0 );
                    }
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_GO_TO_CHAR( 0, sub_552(), -1, 5.00000000 );
                    TASK_LOOK_AT_CHAR( 0, sub_552(), -1, 0 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    TASK_PERFORM_SEQUENCE( l_U836._fU0, uVar2 );
                    CLEAR_SEQUENCE_TASK( uVar2 );
                    l_U1006 = 1;
                }
                else if (NOT l_U1006)
                {
                    CLEAR_CHAR_TASKS( l_U836._fU0 );
                };;;
            }
            else if (sub_12076( l_U836._fU0, 91 ))
            {
                TASK_COMBAT( l_U836._fU0, sub_552() );
            }
            return 0;;
        }
        return 1;
        break;
    }
    if (DOES_CHAR_EXIST( l_U836._fU0 ))
    {
        if (IS_CHAR_DEAD( l_U836._fU0 ))
        {
            sub_2778( "perseus shop_bouncer dead\n" );
        }
        else
        {
            sub_2778( "perseus shop_bouncer exists\n" );
        }
    }
    else
    {
        sub_2778( "perseus shop_bouncer doesn't exist\n" );
    }
    if (NOT l_U809)
    {
        if (DOES_CHAR_EXIST( l_U836._fU0 ))
        {
            PRINT_HELP( "SHOP_H_DEAD" );
            l_U809 = 1;
        }
    }
    return 0;
}

int sub_21253(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if (sub_9338( sub_552(), uParam0 ))
    {
        if (NOT (HAVE_ANIMS_LOADED( "clothing" )))
        {
            REQUEST_ANIMS( "clothing" );
        }
        else if (NOT l_U995)
        {
            l_U995 = 1;
        }
        return 1;;
    }
    else if (HAVE_ANIMS_LOADED( "clothing" ))
    {
        GET_CHAR_COORDINATES( sub_552(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar6._fU0, uVar6._fU4, uParam1._fU0, uParam1._fU4, ref fVar9 );
        if (fVar9 > 15.00000000)
        {
            REMOVE_ANIMS( "clothing" );
            l_U995 = 0;
        }
    }
    return 0;
}

int sub_21663(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    if (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( uParam0, uParam1 ))
    {
        if ((uParam2^) < 0)
        {
            GET_GAME_TIMER( uParam2 );
        }
        GET_GAME_TIMER( ref iVar5 );
        sub_2778( "  ''" );
        sub_2778( uParam0 );
        sub_2778( "'', " );
        sub_7789( uParam1 );
        sub_2778( "    //" );
        sub_7789( iVar5 - (uParam2^) );
        sub_2778( "\n" );
        if ((iVar5 - (uParam2^)) > 2000)
        {
            CLEAR_HELP();
        }
        return 1;
    }
    (uParam2^) = -1;
    return 0;
}

int sub_22138(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24)
{
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    int I;
    boolean bVar31;
    unknown uVar32;

    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( uParam10, uParam0, ref uVar27 );
    if ((sub_22164( 2, 0 )) AND (NOT (uParam11^)))
    {
        if (((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_POOR_F" ))) AND (NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "HELP_BOUGHT_F", iParam8 )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BOUGHT_F_F" ))))
        {
            if (sub_22545( 2, "BLANK", 0 ))
            {
                sub_786( 2, "BLANK" );
                (uParam11^) = 1;
            }
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 )))
            {
                sub_23217( "LB_TRYON", uParam9, uParam24 );
            }
        }
    }
    else if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 ))
    {
        CLEAR_HELP();
    }
    if ((uParam11^))
    {
        while (NOT (sub_23474( ref uParam12, uVar27, uParam3, uParam6, uParam23, 4, 0 )))
        {
            WAIT( 0 );
        }
        bVar31 = false;
        for ( I = 0; I < (uParam7^); I++ )
        {
            if (NOT bVar31)
            {
                if (NOT g_U8302[(uParam7^)[I]])
                {
                    uVar32 = (uParam7^)[I];
                    bVar31 = true;
                }
            }
        }
        if (NOT bVar31)
        {
            uVar32 = (uParam7^)[0];
        }
        sub_1195( sub_552(), ref l_U178, 0 );
        sub_25847( uVar32 );
        SET_PLAYER_CONTROL( sub_619(), 0 );
        TASK_PLAY_ANIM( sub_552(), "examine shoes", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8378)
        {
            PRINT_WITH_NUMBER_NOW( sub_26016( uVar32, 3, 0 ), iParam8, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( sub_26016( uVar32, 3, 0 ), iParam8 / 2, 7500, 1 );
        }
        if (bVar31)
        {
            PRINT_HELP_FOREVER( "HELP_BUY_F" );
        }
        else
        {
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_F", sub_27685( uVar32 ) );
        }
        sub_28471( uParam23, ref uParam12, 4, uParam13, "BLANK", uParam14, uParam16, uParam19, uParam22 );
        (uParam11^) = 0;
        (uParam15^) = iParam8;
        sub_22820();
        return 1;
    }
    return 0;
}

int sub_22164(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_619() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_619() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_619() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_22260())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_552() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_22345())
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

int sub_22260()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_22345()
{
    return sub_22356( 0, 0 );
}

int sub_22356(boolean bParam0, unknown uParam1)
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

int sub_22545(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_22164( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_619(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_22820();
                l_U1 = 1;
                g_U9173 = 6;
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
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_22820()
{
    return sub_22356( 1, 1 );
}

void sub_23217(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_2778( "ar_PRINT_SHOP_HELP(''" );
    sub_2778( uParam0 );
    sub_2778( "'', ''" );
    sub_2778( uParam1 );
    sub_2778( "'', " );
    sub_23298( (uParam2^) );
    sub_2778( ")    //" );
    sub_23298( IS_HELP_MESSAGE_BEING_DISPLAYED() );
    sub_2838();
    if ((uParam2^))
    {
        PRINT_HELP_FOREVER_WITH_STRING( uParam0, uParam1 );
        (uParam2^) = 0;
    }
    else
    {
        PRINT_HELP_WITH_STRING_NO_SOUND( uParam0, uParam1 );
    }
    return;
}

void sub_23298(unknown uParam0)
{
    if (g_U9231)
    {
        sub_10537( uParam0 );
    }
    return;
}

int sub_23474(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, boolean bParam10)
{
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    if (NOT l_U197)
    {
        sub_23494();
        g_U8228 = 1;
        g_U8220 = uParam9;
        l_U197 = 1;
    }
    if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT bParam10))
    {
        if (NOT IS_SCREEN_FADING())
        {
            DO_SCREEN_FADE_OUT( 0 );
            if (sub_23583( uParam9, ref uVar13 ))
            {
                PLAY_SOUND_FROM_PED( -1, sub_24631( uVar13 ), sub_552() );
            }
        }
        return 0;
        break;
    }
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar14 );
    if (NOT (IS_CAR_DEAD( uVar14 )))
    {
        if (LOCATE_CAR_3D( uVar14, uParam4._fU0, uParam4._fU4, uParam4._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
        {
            if (sub_25250( uParam8, ref uVar15, ref uVar18 ))
            {
                SET_CAR_HEADING( uVar14, uVar18 );
                SET_CAR_COORDINATES( uVar14, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
            }
        }
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_552() );
    SET_CHAR_COORDINATES( sub_552(), uParam4._fU0, uParam4._fU4, uParam4._fU8 );
    SET_CHAR_HEADING( sub_552(), uParam7 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_552(), 1 );
    CLEAR_AREA_OF_OBJECTS( uParam4._fU0, uParam4._fU4, uParam4._fU8, 5.00000000 );
    l_U197 = 0;
    return 1;
}

void sub_23494()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    return;
}

int sub_23583(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    switch (uParam0)
    {
        case 0:
        return 0;
        break;
        case 1:
        return 0;
        break;
        case 2:
        sub_14596( ref uVar4 );
        switch (uVar4)
        {
            case 0:
            case 1:
            case 2:
            (uParam1^) = 3;
            return 1;
            break;
            case 15:
            case 16:
            case 17:
            (uParam1^) = 2;
            return 1;
            break;
            case 3:
            case 4:
            case 5:
            (uParam1^) = 1;
            return 1;
            break;
            case 6:
            case 7:
            case 8:
            (uParam1^) = 1;
            return 1;
            break;
            case 18:
            case 19:
            case 20:
            (uParam1^) = 0;
            return 1;
            break;
            case 28:
            case 29:
            case 30:
            (uParam1^) = 0;
            return 1;
            break;
            case 41:
            (uParam1^) = 0;
            return 1;
            break;
            case 42:
            (uParam1^) = 0;
            return 1;
            break;
            case 21:
            case 22:
            case 23:
            (uParam1^) = 1;
            return 1;
            break;
            case 9:
            case 10:
            case 11:
            (uParam1^) = 1;
            return 1;
            break;
            case 31:
            case 32:
            case 33:
            (uParam1^) = 0;
            return 1;
            break;
            case 34:
            case 35:
            case 36:
            case 37:
            (uParam1^) = 0;
            return 1;
            break;
            case 38:
            case 39:
            case 40:
            (uParam1^) = 0;
            return 1;
            break;
            case 12:
            case 13:
            case 14:
            (uParam1^) = 1;
            return 1;
            break;
            case 24:
            case 25:
            case 26:
            case 27:
            (uParam1^) = 0;
            return 1;
            break;
            case 43:
            case 44:
            (uParam1^) = 3;
            return 1;
            break;
        }
        break;
        case 3:
        sub_13476( ref uVar5 );
        switch (uVar5)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            (uParam1^) = 4;
            return 1;
            break;
            case 4:
            (uParam1^) = 5;
            return 1;
            break;
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            (uParam1^) = 4;
            return 1;
            break;
            case 24:
            (uParam1^) = 5;
            return 1;
            break;
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            (uParam1^) = 4;
            return 1;
            break;
            case 8:
            case 9:
            case 10:
            (uParam1^) = 5;
            return 1;
            break;
            case 11:
            case 12:
            case 13:
            (uParam1^) = 5;
            return 1;
            break;
            case 5:
            case 6:
            case 7:
            case 25:
            (uParam1^) = 5;
            return 1;
            break;
        }
        break;
        case 4:
        (uParam1^) = 6;
        return 1;
        break;
        case 5:
        (uParam1^) = 0;
        return 1;
        break;
    }
    return 0;
}

string sub_24631(unknown uParam0)
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

int sub_25250(unknown uParam0, unknown uParam1, unknown uParam2)
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
        GET_CHAR_COORDINATES( sub_552(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        switch (sub_3158( uVar5 ))
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

void sub_25847(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_12875( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_552(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_552(), 5 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_552(), 5, iVar3, iVar4 );
    }
    return;
}

string sub_26016(unknown uParam0, unknown uParam1, unknown uParam2)
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
            if (NOT g_U8378)
            {
                return "buy_FEET_0_0";
            }
            else
            {
                return "buy_FEET_0_0_A";
            }
            break;
            case 1:
            if (NOT g_U8378)
            {
                return "buy_FEET_0_1";
            }
            else
            {
                return "buy_FEET_0_1_A";
            }
            break;
            case 7:
            if (NOT g_U8378)
            {
                return "buy_FEET_1_0";
            }
            else
            {
                return "buy_FEET_1_0_A";
            }
            break;
            case 8:
            if (NOT g_U8378)
            {
                return "buy_FEET_1_1";
            }
            else
            {
                return "buy_FEET_1_1_A";
            }
            break;
            case 9:
            if (NOT g_U8378)
            {
                return "buy_FEET_1_2";
            }
            else
            {
                return "buy_FEET_1_2_A";
            }
            break;
            case 13:
            if (NOT g_U8378)
            {
                return "buy_FEET_2_0";
            }
            else
            {
                return "buy_FEET_2_0_A";
            }
            break;
            case 14:
            if (NOT g_U8378)
            {
                return "buy_FEET_2_1";
            }
            else
            {
                return "buy_FEET_2_1_A";
            }
            break;
            case 15:
            if (NOT g_U8378)
            {
                return "buy_FEET_2_2";
            }
            else
            {
                return "buy_FEET_2_2_A";
            }
            break;
            case 2:
            if (NOT g_U8378)
            {
                return "buy_FEET_3_0";
            }
            else
            {
                return "buy_FEET_3_0_A";
            }
            break;
            case 3:
            if (NOT g_U8378)
            {
                return "buy_FEET_3_1";
            }
            else
            {
                return "buy_FEET_3_1_A";
            }
            break;
            case 10:
            if (NOT g_U8378)
            {
                return "buy_FEET_4_0";
            }
            else
            {
                return "buy_FEET_4_0_A";
            }
            break;
            case 11:
            if (NOT g_U8378)
            {
                return "buy_FEET_4_1";
            }
            else
            {
                return "buy_FEET_4_1_A";
            }
            break;
            case 12:
            if (NOT g_U8378)
            {
                return "buy_FEET_4_2";
            }
            else
            {
                return "buy_FEET_4_2_A";
            }
            break;
            case 16:
            if (NOT g_U8378)
            {
                return "buy_FEET_5_0";
            }
            else
            {
                return "buy_FEET_5_0_A";
            }
            break;
            case 17:
            if (NOT g_U8378)
            {
                return "buy_FEET_5_1";
            }
            else
            {
                return "buy_FEET_5_1_A";
            }
            break;
            case 18:
            if (NOT g_U8378)
            {
                return "buy_FEET_5_2";
            }
            else
            {
                return "buy_FEET_5_2_A";
            }
            break;
            case 4:
            if (NOT g_U8378)
            {
                return "buy_FEET_6_0";
            }
            else
            {
                return "buy_FEET_6_0_A";
            }
            break;
            case 5:
            if (NOT g_U8378)
            {
                return "buy_FEET_6_1";
            }
            else
            {
                return "buy_FEET_6_1_A";
            }
            break;
            case 6:
            if (NOT g_U8378)
            {
                return "buy_FEET_6_2";
            }
            else
            {
                return "buy_FEET_6_2_A";
            }
            break;
            case 19:
            return "buy_FEET_1_3";
            break;
            default:
              case 20: return "NUMBER_OF_PLAYER_CLOTHES_FEET";
        }
        break;
        default:
          case 4: return "NUMBER_OF_TORSO_PRINT";
    }
    return "get_feet_print_here()";
}

string sub_27685(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "clo_FEET_0_0";
        break;
        case 1:
        return "clo_FEET_0_1";
        break;
        case 7:
        return "clo_FEET_1_0";
        break;
        case 8:
        return "clo_FEET_1_1";
        break;
        case 9:
        return "clo_FEET_1_2";
        break;
        case 13:
        return "clo_FEET_2_0";
        break;
        case 14:
        return "clo_FEET_2_1";
        break;
        case 15:
        return "clo_FEET_2_2";
        break;
        case 2:
        return "clo_FEET_3_0";
        break;
        case 3:
        return "clo_FEET_3_1";
        break;
        case 10:
        return "clo_FEET_4_0";
        break;
        case 11:
        return "clo_FEET_4_1";
        break;
        case 12:
        return "clo_FEET_4_2";
        break;
        case 16:
        return "clo_FEET_5_0";
        break;
        case 17:
        return "clo_FEET_5_1";
        break;
        case 18:
        return "clo_FEET_5_2";
        break;
        case 4:
        return "clo_FEET_6_0";
        break;
        case 5:
        return "clo_FEET_6_1";
        break;
        case 6:
        return "clo_FEET_6_2";
        break;
        case 19:
        return "clo_FEET_1_3";
        break;
        case 20: return "NUMBER_OF_PLAYER_CLOTHES_FEET";
    }
    SCRIPT_ASSERT( "get_feet_americanAmbiance_name - null" );
    return "null feet";
}

void sub_28471(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
{
    sub_28482( uParam1 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_USE_HIGHDOF( 1 );
    CREATE_CAM( 14, uParam3 );
    SET_CAM_POS( (uParam3^), uParam6._fU0, uParam6._fU4, uParam6._fU8 );
    SET_CAM_ROT( (uParam3^), uParam9._fU0, uParam9._fU4, uParam9._fU8 );
    SET_CAM_FOV( (uParam3^), uParam12 );
    SET_CAM_ACTIVE( (uParam3^), 1 );
    SET_CAM_NEAR_DOF( (uParam3^), 0.50000000 );
    SET_CAM_FAR_DOF( (uParam3^), 5.00000000 );
    FREEZE_CHAR_POSITION( sub_552(), 0 );
    SET_PLAYER_CONTROL( sub_619(), 0 );
    SET_EVERYONE_IGNORE_PLAYER( sub_619(), 1 );
    SET_CAM_PROPAGATE( (uParam3^), 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    GET_GAME_TIMER( uParam5 );
    g_U8220 = uParam2;
    sub_786( 2, "BLANK" );
    sub_786( 2, uParam4 );
    sub_28804( uParam0 );
    if ((IS_SCREEN_FADED_OUT()) || (IS_SCREEN_FADING_OUT()))
    {
        DO_SCREEN_FADE_IN( 0 );
    }
    while (sub_29831())
    {
        WAIT( 0 );
    }
    return;
}

void sub_28482(unknown uParam0)
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

void sub_28804(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    int I;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    vector vVar11;
    float fVar14;

    GET_GROUP_SIZE( sub_2403(), ref uVar3, ref iVar4 );
    if (iVar4 > 0)
    {
        for ( I = 0; I < iVar4; I++ )
        {
            GET_GROUP_MEMBER( sub_2403(), I, ref uVar10 );
            if ((NOT (IS_CHAR_INJURED( uVar10 ))) AND (IS_PLAYER_PLAYING( sub_619() )))
            {
                vVar11 = {0.00000000, 0.00000000, 0.00000000};
                fVar14 = 0.00000000;
                sub_28929( uParam0, I, ref vVar11, ref fVar14 );
                SET_CHAR_COORDINATES( uVar10, vVar11.x, vVar11.y, vVar11.z );
                SET_CHAR_HEADING( uVar10, fVar14 );
                TASK_LOOK_AT_CHAR( uVar10, sub_552(), -1, 0 );
                TASK_START_SCENARIO_AT_POSITION( uVar10, "Scenario_Standing", vVar11, fVar14 );
            }
        }
    }
    return;
}

void sub_28929(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    switch (uParam0)
    {
        case 0:
        switch (uParam1)
        {
            case 0:
            (uParam2^) = {890.49650000, -444.29400000, 14.86020000};
            (uParam3^) = 99.11680000;
            break;
            case 1:
            (uParam2^) = {890.65440000, -442.71360000, 14.86020000};
            (uParam3^) = 133.18220000;
            break;
            case 2:
            (uParam2^) = {891.08420000, -441.97070000, 14.87890000};
            (uParam3^) = 121.98810000;
            break;
            default:
            (uParam2^) = {890.49650000, -444.29400000, 14.86020000};
            (uParam3^) = 99.11680000;
        }
        break;
        case 1:
        switch (uParam1)
        {
            case 0:
            (uParam2^) = {-281.89270000, 1356.71500000, 24.63260000};
            (uParam3^) = 21.38890000;
            break;
            case 1:
            (uParam2^) = {-280.27220000, 1356.26300000, 24.63270000};
            (uParam3^) = 32.86620000;
            break;
            case 2:
            (uParam2^) = {-278.69550000, 1356.63500000, 24.63260000};
            (uParam3^) = 10.83960000;
            break;
            default:
            (uParam2^) = {-278.69550000, 1356.63500000, 24.63260000};
            (uParam3^) = 10.83960000;
        }
        break;
        case 2:
        GET_CHAR_COORDINATES( sub_552(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        switch (sub_3158( uVar6 ))
        {
            case 0:
            switch (uParam1)
            {
                case 0:
                (uParam2^) = {23.41800000, 807.56090000, 13.76190000};
                (uParam3^) = 202.32040000;
                break;
                case 1:
                (uParam2^) = {21.89330000, 806.71130000, 13.76190000};
                (uParam3^) = 143.10150000;
                break;
                case 2:
                (uParam2^) = {22.42110000, 806.66620000, 13.76190000};
                (uParam3^) = 192.01780000;
                break;
                default:
                (uParam2^) = {22.42110000, 806.66620000, 13.76190000};
                (uParam3^) = 192.01780000;
            }
            break;
            case 1:
            switch (uParam1)
            {
                case 0:
                (uParam2^) = {11.98550000, -661.31180000, 13.86160000};
                (uParam3^) = 196.52500000;
                break;
                case 1:
                (uParam2^) = {11.19710000, -661.58840000, 13.86160000};
                (uParam3^) = 202.11210000;
                break;
                case 2:
                (uParam2^) = {10.10630000, -661.25280000, 13.86160000};
                (uParam3^) = 197.13490000;
                break;
                default:
                (uParam2^) = {10.10630000, -661.25280000, 13.86160000};
                (uParam3^) = 197.13490000;
            }
            break;
        }
        break;
    }
    return;
}

int sub_29831()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

void sub_29936()
{
    vector vVar2;
    vector vVar5;
    vector vVar8;
    vector vVar11;
    vector vVar14;
    vector vVar17;
    vector vVar20;
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
    unknown uVar39;
    unknown uVar40;

    SET_ROOM_FOR_CHAR_BY_NAME( sub_552(), l_U858 );
    vVar2 = {0.00000000, 0.70000000, 0.00000000};
    vVar5 = {-5.00000000, -5.75000000, 2.00000000};
    vVar8 = {5.00000000, 7.50000000, 2.00000000};
    vVar11 = {3.75000000, 3.08000000, 0.00000000};
    vVar14 = {3.75000000, -1.50000000, 0.00000000};
    vVar17 = {-4.08000000, 3.08000000, 0.00000000};
    vVar20 = {-4.08000000, -1.50000000, 0.00000000};
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, vVar2, ref uVar23 );
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, vVar5, ref uVar26 );
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, vVar5.x, vVar8.y, vVar5.z, ref uVar29 );
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, vVar8.x, vVar5.y, vVar8.z, ref uVar32 );
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, vVar8, ref uVar35 );
    if (IS_CHAR_IN_AREA_3D( sub_552(), uVar26._fU0, uVar26._fU4, uVar26._fU8, uVar23._fU0, uVar23._fU4, uVar23._fU8, 1 ))
    {
        GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, vVar11, ref uVar38 );
        if (NOT (IS_CHAR_INJURED( l_U815._fU0 )))
        {
            SET_CHAR_COORDINATES( l_U815._fU0, uVar38._fU0, uVar38._fU4, uVar38._fU8 );
            SET_CHAR_HEADING( l_U815._fU0, 314.47700000 );
            PRINTSTRING( "repos vPerseus_min_l_pos\n" );
        }
    }
    else if (IS_CHAR_IN_AREA_3D( sub_552(), uVar29._fU0, uVar29._fU4, uVar29._fU8, uVar23._fU0, uVar23._fU4, uVar23._fU8, 1 ))
    {
        GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, vVar14, ref uVar38 );
        if (NOT (IS_CHAR_INJURED( l_U815._fU0 )))
        {
            SET_CHAR_COORDINATES( l_U815._fU0, uVar38._fU0, uVar38._fU4, uVar38._fU8 );
            SET_CHAR_HEADING( l_U815._fU0, 207.76360000 );
            PRINTSTRING( "repos vPerseus_max_l_pos\n" );
        }
    }
    else if (IS_CHAR_IN_AREA_3D( sub_552(), uVar32._fU0, uVar32._fU4, uVar32._fU8, uVar23._fU0, uVar23._fU4, uVar23._fU8, 1 ))
    {
        GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, vVar17, ref uVar38 );
        if (NOT (IS_CHAR_INJURED( l_U815._fU0 )))
        {
            SET_CHAR_COORDINATES( l_U815._fU0, uVar38._fU0, uVar38._fU4, uVar38._fU8 );
            SET_CHAR_HEADING( l_U815._fU0, 39.78040000 );
            PRINTSTRING( "repos vPerseus_min_r_pos\n" );
        }
    }
    else if (IS_CHAR_IN_AREA_3D( sub_552(), uVar35._fU0, uVar35._fU4, uVar35._fU8, uVar23._fU0, uVar23._fU4, uVar23._fU8, 1 ))
    {
        GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, vVar20, ref uVar38 );
        if (NOT (IS_CHAR_INJURED( l_U815._fU0 )))
        {
            SET_CHAR_COORDINATES( l_U815._fU0, uVar38._fU0, uVar38._fU4, uVar38._fU8 );
            SET_CHAR_HEADING( l_U815._fU0, 139.45880000 );
            PRINTSTRING( "repos vPerseus_max_r_pos\n" );
        }
    };;;;
    if (NOT (IS_CHAR_INJURED( l_U836._fU0 )))
    {
        SET_CHAR_COORDINATES( l_U836._fU0, l_U836._fU8[l_U795]._fU0, l_U836._fU8[l_U795]._fU4, l_U836._fU8[l_U795]._fU8 );
        SET_CHAR_HEADING( l_U836._fU0, 250.00000000 );
        CLEAR_CHAR_TASKS( l_U836._fU0 );
        TASK_START_SCENARIO_IN_PLACE( l_U836._fU0, "Scenario_Bouncer", -1082130432 );
        l_U1006 = 0;
    }
    return;
}

int sub_31337(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28)
{
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;

    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( uParam10, uParam0, ref uVar31 );
    if ((NOT g_U8355) AND (NOT g_U15654[57]))
    {
        if (g_U8275[uParam7])
        {
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", uParam9 )))
            {
                sub_23217( "LB_TRYON_R3", uParam9, uParam28 );
            }
            return 0;
        }
    }
    if ((sub_22164( 2, 0 )) AND (NOT (uParam11^)))
    {
        if (((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_POOR_L" ))) AND (NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "HELP_BOUGHT_L", iParam8 )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BOUGHT_L_F" ))))
        {
            if (sub_22545( 2, "BLANK", 0 ))
            {
                sub_786( 2, "BLANK" );
                (uParam11^) = 1;
            }
            if (NOT g_U8275[uParam7])
            {
                if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 )))
                {
                    sub_23217( "LB_TRYON", uParam9, uParam28 );
                }
            }
            else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam9 )))
            {
                sub_23217( "LB_TRYON_B", uParam9, uParam28 );
            }
        }
    }
    else if (((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam9 ))) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", uParam9 )))
    {
        CLEAR_HELP();
    }
    if ((uParam11^))
    {
        while (NOT (sub_23474( ref uParam12, uVar31, uParam3, uParam6, uParam27, 3, 0 )))
        {
            WAIT( 0 );
        }
        sub_1195( sub_552(), ref l_U178, 0 );
        sub_31871( uParam7 );
        TASK_PLAY_ANIM( sub_552(), "examine legs", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8378)
        {
            PRINT_WITH_NUMBER_NOW( "BUY_TROUSERS", iParam8, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( "BUY_TROUSERS_A", iParam8 / 2, 7500, 1 );
        }
        PRINT_HELP_FOREVER( "HELP_BUY_L" );
        sub_28471( uParam27, ref uParam12, 3, uParam13, ref uParam16, uParam14, uParam20, uParam23, uParam26 );
        (uParam11^) = 0;
        (uParam15^) = iParam8;
        return 1;
    }
    return 0;
}

void sub_31871(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_13544( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_552(), 2 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_552(), 2 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_552(), 2, iVar3, iVar4 );
    }
    return;
}

int sub_32360(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U857, uParam0, ref l_U885 );
    if ((sub_22164( 2, 0 )) AND (NOT l_U805))
    {
        if (((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_POOR_B" ))) AND (NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "HELP_BOUGHT_B", iParam6 )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BOUGHT_B_F" ))))
        {
            if (sub_22545( 2, "BLANK", 0 ))
            {
                l_U805 = 1;
            }
            if (NOT g_U8332[uParam5])
            {
                if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam7 )))
                {
                    sub_23217( "LB_TRYON", uParam7, uParam11 );
                }
            }
            else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam7 )))
            {
                sub_23217( "LB_TRYON_B", uParam7, uParam11 );
            }
        }
    }
    else if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam7 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam7 )))
    {
        CLEAR_HELP();
    }
    if (l_U805)
    {
        sub_32706( uParam3, uParam4 );
        sub_33857();
        while (NOT (sub_23474( ref l_U879, l_U885, (uParam3^), (uParam4^), 2, 5, 0 )))
        {
            WAIT( 0 );
        }
        l_U811 = GET_CHAR_DRAWABLE_VARIATION( sub_552(), 3 );
        l_U812 = GET_CHAR_TEXTURE_VARIATION( sub_552(), 3 );
        sub_1195( sub_552(), ref l_U178, 0 );
        sub_34263( uParam5 );
        TASK_PLAY_ANIM( sub_552(), "examine shirt", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8378)
        {
            PRINT_WITH_NUMBER_NOW( "BUY_SUIT", iParam6, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( "BUY_SUIT_A", iParam6 / 2, 7500, 1 );
        }
        PRINT_HELP_FOREVER( "HELP_BUY_B" );
        sub_28471( 2, ref l_U879, 5, ref l_U880, ref l_U874, ref l_U883, (uParam8^), (uParam9^), uParam10 );
        l_U805 = 0;
        ProtectedSet(l_U810, iParam6);
        return 1;
    }
    return 0;
}

void sub_32706(int iParam0, unknown uParam1)
{
    int I;

    if (IS_PLAYER_CONTROL_ON( sub_619() ))
    {
        SET_PLAYER_CONTROL( sub_619(), 0 );
    }
    for ( I = 0; I < 18; I++ )
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_552(), l_U200[I]._fU8._fU0, l_U200[I]._fU8._fU4, l_U200[I]._fU8._fU8, l_U200[I]._fU32._fU0, l_U200[I]._fU32._fU4, l_U200[I]._fU32._fU8, 0 ))
        {
            if (sub_32873( I ))
            {
                if (sub_32951( sub_5242( I ) ))
                {
                    (iParam0^) = {l_U200[I]._fU8};
                    iParam0->_fU0 -= l_U200[I]._fU32._fU0 - 0.25000000;
                    GET_GROUND_Z_FOR_3D_COORD( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0 + 8 );
                    (uParam1^) = 70.00000000;
                }
                else if (sub_33471( sub_5242( I ) ))
                {
                    (iParam0^) = {l_U200[I]._fU8};
                    iParam0->_fU0 += l_U200[I]._fU32._fU0 - 0.25000000;
                    GET_GROUND_Z_FOR_3D_COORD( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0 + 8 );
                    (uParam1^) = 240.00000000;
                }
            }
        }
    }
    return;
}

int sub_32873(int iParam0)
{
    if (((((((iParam0 == 8) || (iParam0 == 9)) || (iParam0 == 10)) || (iParam0 == 11)) || (iParam0 == 12)) || (iParam0 == 13)) || (iParam0 == 14))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_32951(unknown uParam0)
{
    if (IS_CHAR_IN_AREA_3D( sub_552(), l_U200[sub_32967( uParam0 )]._fU8._fU0, (l_U200[sub_32967( uParam0 )]._fU8._fU4) + (l_U200[sub_32967( uParam0 )]._fU32._fU4), (l_U200[sub_32967( uParam0 )]._fU8._fU8) + (l_U200[sub_32967( uParam0 )]._fU32._fU8), (l_U200[sub_32967( uParam0 )]._fU8._fU0) - (l_U200[sub_32967( uParam0 )]._fU32._fU0), (l_U200[sub_32967( uParam0 )]._fU8._fU4) - (l_U200[sub_32967( uParam0 )]._fU32._fU4), (l_U200[sub_32967( uParam0 )]._fU8._fU8) - (l_U200[sub_32967( uParam0 )]._fU32._fU8), 0 ))
    {
        return 1;
    }
    return 0;
}

int sub_32967(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return 8;
        break;
        case 1:
        return 9;
        break;
        case 2:
        return 10;
        break;
        case 3:
        return 11;
        break;
        case 4:
        return 12;
        break;
        case 5:
        return 13;
        break;
        case 6:
        return 14;
        break;
    }
    return 18;
}

int sub_33471(unknown uParam0)
{
    if (IS_CHAR_IN_AREA_3D( sub_552(), (l_U200[sub_32967( uParam0 )]._fU8._fU0) + (l_U200[sub_32967( uParam0 )]._fU32._fU0), (l_U200[sub_32967( uParam0 )]._fU8._fU4) + (l_U200[sub_32967( uParam0 )]._fU32._fU4), (l_U200[sub_32967( uParam0 )]._fU8._fU8) + (l_U200[sub_32967( uParam0 )]._fU32._fU8), l_U200[sub_32967( uParam0 )]._fU8._fU0, (l_U200[sub_32967( uParam0 )]._fU8._fU4) - (l_U200[sub_32967( uParam0 )]._fU32._fU4), (l_U200[sub_32967( uParam0 )]._fU8._fU8) - (l_U200[sub_32967( uParam0 )]._fU32._fU8), 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_33857()
{
    int I;

    for ( I = 0; I < 18; I++ )
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_552(), l_U200[I]._fU8._fU0, l_U200[I]._fU8._fU4, l_U200[I]._fU8._fU8, l_U200[I]._fU32._fU0, l_U200[I]._fU32._fU4, l_U200[I]._fU32._fU8, 0 ))
        {
            if (sub_32873( I ))
            {
                if (sub_32951( sub_5242( I ) ))
                {
                    sub_4748( I, l_U891[sub_5242( I )], l_U913[sub_5242( I )], l_U200[I]._fU128 );
                }
                else if (sub_33471( sub_5242( I ) ))
                {
                    sub_4748( I, l_U935[sub_5242( I )], l_U957[sub_5242( I )], l_U200[I]._fU128 );
                }
            }
        }
    }
    return;
}

void sub_34263(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    sub_14317( uParam0, ref uVar3 );
    if (uVar3._fU0 < 45)
    {
        sub_34297( uVar3._fU0 );
    }
    if (uVar3._fU4 < 26)
    {
        sub_31871( uVar3._fU4 );
    }
    if (uVar3._fU8 < 20)
    {
        sub_25847( uVar3._fU8 );
    }
    if (uVar3._fU12 < 4)
    {
        sub_34441( uVar3._fU12 );
    }
    if (uVar3._fU16 < 3)
    {
        sub_34466( uVar3._fU16 );
    }
    switch (uVar3._fU20)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( sub_552(), 4, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( sub_552(), 4, 0, 0 );
        break;
    }
    switch (uVar3._fU24)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( sub_552(), 3, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( sub_552(), 3, 0, 0 );
        break;
    }
    return;
}

void sub_34297(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_14666( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_552(), 1 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_552(), 1 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_552(), 1, iVar3, iVar4 );
    }
    return;
}

void sub_34441(int iParam0)
{
    int iVar3;
    int iVar4;

    if (iParam0 == 3)
    {
        sub_34441( -1 );
        sub_34466( -1 );
        if (((GET_CHAR_DRAWABLE_VARIATION( sub_552(), 8 )) != 1) || ((GET_CHAR_TEXTURE_VARIATION( sub_552(), 8 )) != 0))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_552(), 8, 1, 0 );
        }
    }
    else
    {
        sub_15795( iParam0, ref iVar3 );
        GET_CHAR_PROP_INDEX( sub_552(), 0, ref iVar4 );
        if (((GET_CHAR_DRAWABLE_VARIATION( sub_552(), 8 )) != 0) || ((GET_CHAR_TEXTURE_VARIATION( sub_552(), 8 )) != 0))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_552(), 8, 0, 0 );
        }
        if (iVar4 != iVar3)
        {
            if (iVar3 < 0)
            {
                CLEAR_CHAR_PROP( sub_552(), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( sub_552(), 0, iVar3 );
            }
        }
    }
    return;
}

void sub_34466(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_16086( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_552(), 1, ref iVar4 );
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_552(), 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_552(), 1, iVar3 );
        }
    }
    return;
}

int sub_35689(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38)
{
    int iVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;

    iVar41 = ProtectedGet(l_U810);
    if (g_U8378)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar41 );
        iVar41 = ProtectedGet(l_U810) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar41 );
        PRINTSTRING( "  (50%)\n" );
    }
    if ((sub_12076( sub_552(), 80 )) AND (sub_12076( sub_552(), 88 )))
    {
        if (TIMERA() > l_U881)
        {
            if (l_U1007)
            {
                TASK_PLAY_ANIM( sub_552(), "Tie_Adjust_Stand", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            }
            else
            {
                TASK_PLAY_ANIM( sub_552(), "Brushoff_Suit_Stand", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            }
            l_U1007 = NOT l_U1007;
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U881 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    if (IS_BUTTON_PRESSED( 0, 0 ))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar42, ref uVar43, ref uVar44, ref uVar45 );
    }
    else if (sub_36089())
    {
        CLEAR_PRINTS();
        if (NOT sub_36156())
        {
            iVar41 = 0;
            PRINT_HELP( "HELP_BOUGHT_B_F" );
            sub_36281( 2, uParam0._fU96, iVar41, uParam33, l_U815._fU0 );
            SET_CHAR_COMPONENT_VARIATION( sub_552(), 3, l_U811, l_U812 );
            while (NOT (sub_36559( ref l_U879, ref l_U880, "null", "LB_TRYON", 2, 0, ref l_U883, 0 )))
            {
                WAIT( 0 );
            }
            l_U804 = 0;
            return 1;
        }
        else if (NOT (IS_SCORE_GREATER( sub_619(), iVar41 - 1 )))
        {
            PRINT_HELP( "HELP_POOR_B" );
            while (NOT (sub_36559( ref l_U879, ref l_U880, "null", "LB_TRYON", 2, 1, ref l_U883, 0 )))
            {
                WAIT( 0 );
            }
            l_U804 = 0;
            return 1;
        }
        else
        {
            StrCopy( ref g_U8388, "HELP_BOUGHT_B", 16 );
            PRINT_HELP_WITH_NUMBER( "HELP_BOUGHT_B", iVar41 );
            sub_36281( 2, uParam0._fU96, iVar41, uParam33, l_U815._fU0 );
            SET_CHAR_COMPONENT_VARIATION( sub_552(), 3, l_U811, l_U812 );
            while (NOT (sub_36559( ref l_U879, ref l_U880, "null", "LB_TRYON", 2, 0, ref l_U883, 0 )))
            {
                WAIT( 0 );
            }
            l_U804 = 0;
            return 1;
        }
    }
    else if (sub_39600( "BLANK" ))
    {
        CLEAR_HELP();
        while (NOT (sub_36559( ref l_U879, ref l_U880, "null", "LB_TRYON", 2, 1, ref l_U883, 0 )))
        {
            WAIT( 0 );
        }
        l_U804 = 0;
        return 1;
    }
    else if (NOT g_U8378)
    {
        if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "BUY_SUIT", 4, "", "", "", iVar41, -1, -1, -1, -1, -1 )))
        {
            PRINT_WITH_NUMBER( "BUY_SUIT", iVar41, 7500, 1 );
        }
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "BUY_SUIT_A", 4, "", "", "", iVar41, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( "BUY_SUIT_A", iVar41, 7500, 1 );
    };;;;;
    DISPLAY_CASH( 1 );
    return 0;
}

int sub_36089()
{
    if ((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_36156()
{
    if (g_U8356)
    {
        if (NOT g_U8355)
        {
            g_U8355 = 1;
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

void sub_36281(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_619(), -1 * iParam2 );
    g_U8332[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8365 += iParam2;
        g_U8368++;
        break;
        case 1:
        g_U8366 += iParam2;
        g_U8369++;
        break;
        case 2:
        g_U8367 += iParam2;
        g_U8370++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_9612( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_36559(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, unknown uParam6, boolean bParam7)
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
                if (sub_23583( g_U8220, ref uVar10 ))
                {
                    PLAY_SOUND_FROM_PED( -1, sub_24631( uVar10 ), sub_552() );
                }
            }
        }
        return 0;
        break;
    }
    while (sub_29831())
    {
        WAIT( 0 );
    }
    sub_786( 5, uParam2 );
    sub_786( 5, "LB_LEAVE_H" );
    sub_786( 5, "BLANK" );
    sub_786( 2, uParam3 );
    sub_786( 2, "BLANK" );
    CLEAR_CHAR_TASKS( sub_552() );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_552(), 0 );
    if (bParam5)
    {
        sub_1166( sub_552(), l_U178 );
    }
    GET_GAME_TIMER( ref iVar11 );
    INCREMENT_INT_STAT_NO_MESSAGE( 50, iVar11 - (uParam6^) );
    switch (uParam4)
    {
        case 0:
        g_U8362 += iVar11 - (uParam6^);
        break;
        case 1:
        g_U8363 += iVar11 - (uParam6^);
        break;
        case 2:
        g_U8364 += iVar11 - (uParam6^);
        break;
    }
    (uParam6^) = 0;
    REGISTER_STRING_FOR_FRONTEND_STAT( 668, sub_36932() );
    CLEAR_PRINTS();
    SET_CAM_BEHIND_PED( sub_552() );
    FREEZE_CHAR_POSITION( sub_552(), 0 );
    sub_2351();
    g_U8228 = 0;
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 0 );
    }
    SET_PLAYER_CONTROL( sub_619(), 1 );
    SET_EVERYONE_IGNORE_PLAYER( sub_619(), 0 );
    sub_1007();
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    sub_39080( uParam0 );
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
    sub_2394();
    g_U8220 = 6;
    return 1;
}

string sub_36932()
{
    if (CAN_THE_STAT_HAVE_STRING( 668 ))
    {
        switch (sub_36956())
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
            PRINTINT( g_U8365 );
            PRINTSTRING( ", M" );
            PRINTINT( g_U8366 );
            PRINTSTRING( ", H" );
            PRINTINT( g_U8367 );
            PRINTNL();
            PRINTSTRING( "  # L" );
            PRINTINT( g_U8368 );
            PRINTSTRING( ", M" );
            PRINTINT( g_U8369 );
            PRINTSTRING( ", H" );
            PRINTINT( g_U8370 );
            PRINTNL();
            PRINTSTRING( "  @ L" );
            PRINTINT( g_U8362 );
            PRINTSTRING( ", M" );
            PRINTINT( g_U8363 );
            PRINTSTRING( ", H" );
            PRINTINT( g_U8364 );
            PRINTNL();
            return "null";
            break;
        }
        PRINTSTRING( "  ** GET_NAME_FAVOURITE_SHOP(" );
        PRINTINT( sub_36956() );
        PRINTSTRING( ") **\n" );
        PRINTSTRING( "  $ L" );
        PRINTINT( g_U8365 );
        PRINTSTRING( ", M" );
        PRINTINT( g_U8366 );
        PRINTSTRING( ", H" );
        PRINTINT( g_U8367 );
        PRINTNL();
        PRINTSTRING( "  # L" );
        PRINTINT( g_U8368 );
        PRINTSTRING( ", M" );
        PRINTINT( g_U8369 );
        PRINTSTRING( ", H" );
        PRINTINT( g_U8370 );
        PRINTNL();
        PRINTSTRING( "  @ L" );
        PRINTINT( g_U8362 );
        PRINTSTRING( ", M" );
        PRINTINT( g_U8363 );
        PRINTSTRING( ", H" );
        PRINTINT( g_U8364 );
        PRINTNL();
        SCRIPT_ASSERT( "invalid get_shop_most_money()" );
        return "invalid get_shop_most_money() - ALWYN FUCKED UP AGAIN!!!";
        break;
    }
    return "GET_NAME_FAVOURITE_SHOP()";
}

void sub_36956()
{
    if ((g_U8365 > g_U8366) AND (g_U8365 > g_U8367))
    {
        return 0;
        break;
    }
    if ((g_U8366 > g_U8365) AND (g_U8366 > g_U8367))
    {
        return 1;
        break;
    }
    if ((g_U8367 > g_U8365) AND (g_U8367 > g_U8366))
    {
        return 2;
        break;
    }
    if (((g_U8365 == 0) AND (g_U8365 == 0)) AND (g_U8365 == 0))
    {
        return sub_37105( 8 );
        break;
    }
    if (((g_U8365 == g_U8366) AND (g_U8366 != g_U8367)) AND (g_U8367 != g_U8365))
    {
        return sub_37105( 5 );
        break;
    }
    if (((g_U8365 != g_U8366) AND (g_U8366 == g_U8367)) AND (g_U8367 != g_U8365))
    {
        return sub_37105( 6 );
        break;
    }
    if (((g_U8365 != g_U8366) AND (g_U8366 != g_U8367)) AND (g_U8367 == g_U8365))
    {
        return sub_37105( 7 );
        break;
    }
    return sub_37105( 8 );
}

void sub_37105(int iParam0)
{
    if (((g_U8368 > g_U8369) AND (g_U8368 > g_U8370)) AND (((iParam0 == 5) || (iParam0 == 7)) || (iParam0 == 8)))
    {
        return 0;
        break;
    }
    if (((g_U8369 > g_U8368) AND (g_U8369 > g_U8370)) AND (((iParam0 == 6) || (iParam0 == 5)) || (iParam0 == 8)))
    {
        return 1;
        break;
    }
    if (((g_U8370 > g_U8368) AND (g_U8370 > g_U8369)) AND (((iParam0 == 7) || (iParam0 == 6)) || (iParam0 == 8)))
    {
        return 2;
        break;
    }
    if (((g_U8368 == 0) AND (g_U8368 == 0)) AND (g_U8368 == 0))
    {
        return sub_37299( 8 );
        break;
    }
    if ((((g_U8368 == g_U8369) AND (g_U8369 != g_U8370)) AND (g_U8370 != g_U8368)) AND ((iParam0 == 5) || (iParam0 == 8)))
    {
        return sub_37299( 5 );
        break;
    }
    if ((((g_U8368 != g_U8369) AND (g_U8369 == g_U8370)) AND (g_U8370 != g_U8368)) AND ((iParam0 == 6) || (iParam0 == 8)))
    {
        return sub_37299( 6 );
        break;
    }
    if ((((g_U8368 != g_U8369) AND (g_U8369 != g_U8370)) AND (g_U8370 == g_U8368)) AND ((iParam0 == 7) || (iParam0 == 8)))
    {
        return sub_37299( 7 );
        break;
    }
    return sub_37299( 8 );
}

int sub_37299(int iParam0)
{
    if (((g_U8362 > g_U8363) AND (g_U8362 > g_U8364)) AND (((iParam0 == 5) || (iParam0 == 7)) || (iParam0 == 8)))
    {
        return 0;
        break;
    }
    if (((g_U8363 > g_U8362) AND (g_U8363 > g_U8364)) AND (((iParam0 == 6) || (iParam0 == 5)) || (iParam0 == 8)))
    {
        return 1;
        break;
    }
    if (((g_U8364 > g_U8362) AND (g_U8364 > g_U8363)) AND (((iParam0 == 7) || (iParam0 == 6)) || (iParam0 == 8)))
    {
        return 2;
        break;
    }
    if (((g_U8362 == 0) AND (g_U8362 == 0)) AND (g_U8362 == 0))
    {
        return 4;
        break;
    }
    if ((((g_U8362 == g_U8363) AND (g_U8363 != g_U8364)) AND (g_U8364 != g_U8362)) AND ((iParam0 == 5) || (iParam0 == 8)))
    {
        return 5;
        break;
    }
    if ((((g_U8362 != g_U8363) AND (g_U8363 == g_U8364)) AND (g_U8364 != g_U8362)) AND ((iParam0 == 6) || (iParam0 == 8)))
    {
        return 6;
        break;
    }
    if ((((g_U8362 != g_U8363) AND (g_U8363 != g_U8364)) AND (g_U8364 == g_U8362)) AND ((iParam0 == 7) || (iParam0 == 8)))
    {
        return 7;
        break;
    }
    return 8;
}

void sub_39080(unknown uParam0)
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

int sub_39600(unknown uParam0)
{
    if (sub_22164( 5, 0 ))
    {
        if (sub_22545( 5, uParam0, 0 ))
        {
            sub_786( 5, uParam0 );
            return 1;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_619() )))
    {
        sub_786( 5, uParam0 );
        return 1;
    }
    return 0;
}

int sub_40037(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, int iParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45)
{
    int iVar48;

    iVar48 = (uParam34^);
    if (g_U8378)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar48 );
        iVar48 = (uParam34^) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar48 );
        PRINTSTRING( "  (50%)\n" );
    }
    if (sub_36089())
    {
        if ((NOT (IS_SCORE_GREATER( sub_619(), iVar48 - 1 ))) AND (NOT sub_40213()))
        {
            CLEAR_PRINTS();
            PRINT_HELP( "HELP_POOR_L" );
            while (NOT (sub_36559( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            return 1;
        }
        else
        {
            CLEAR_PRINTS();
            if (NOT sub_36156())
            {
                iVar48 = 0;
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8380, "HELP_BOUGHT_L_F", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8384, "HELP_BOUGHT_L_F", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8388, "HELP_BOUGHT_L_F", 16 );
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
                    StrCopy( ref g_U8380, "HELP_BOUGHT_L", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8384, "HELP_BOUGHT_L", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8388, "HELP_BOUGHT_L", 16 );
                    break;
                }
            }
            sub_40725( uParam37, uParam0._fU80, iVar48, uParam39, uParam45 );
            while (NOT (sub_36559( uParam35, uParam36, "null", "LB_TRYON", uParam37, 0, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            (uParam34^) = iVar48;
            return 1;
        }
    }
    else if (sub_39600( "null" ))
    {
        CLEAR_HELP();
        while (NOT (sub_36559( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT g_U8378)
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
    if ((sub_12076( sub_552(), 80 )) AND (sub_12076( sub_552(), 88 )))
    {
        if (TIMERA() > iParam33)
        {
            TASK_PLAY_ANIM( sub_552(), "examine legs", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
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

int sub_40213()
{
    if (g_U8356)
    {
        if (g_U8355)
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

void sub_40725(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_619(), -1 * iParam2 );
    g_U8275[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8365 += iParam2;
        g_U8368++;
        break;
        case 1:
        g_U8366 += iParam2;
        g_U8369++;
        break;
        case 2:
        g_U8367 += iParam2;
        g_U8370++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_9612( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_41531(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
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

    sub_12807( ref uVar16 );
    iVar17 = (uParam2^);
    if (g_U8378)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar17 );
        iVar17 = (uParam2^) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar17 );
        PRINTSTRING( "  (50%)\n" );
    }
    if (g_U8302[uVar16])
    {
        if ((NOT g_U8355) AND (NOT g_U15654[57]))
        {
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", sub_27685( uVar16 ) )))
            {
                CLEAR_HELP();
                PRINT_HELP_FOREVER_WITH_STRING( "LB_TRYON_R3", sub_27685( uVar16 ) );
            }
            sVar18 = "LB_TRYON_R3";
        }
        else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "HELP_OWN_F", sub_27685( uVar16 ) )))
        {
            CLEAR_HELP();
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_F", sub_27685( uVar16 ) );
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
        if (iVar21 < 65472)
        {
            sub_42016( 1, uParam0 );
        }
        else if (iVar21 >= 64)
        {
            sub_42016( 0, uParam0 );
        }
    }
    else if (((IS_BUTTON_PRESSED( 0, 10 )) || (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 ))) || (iVar19 < 65472))
    {
        sub_42016( 1, uParam0 );
    }
    else if (((IS_BUTTON_PRESSED( 0, 11 )) || (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 ))) || (iVar19 >= 64))
    {
        sub_42016( 0, uParam0 );
    }
    else if (sub_36089())
    {
        if (NOT ((g_U8302[uVar16]) AND (NOT ((g_U8355) || (g_U15654[57])))))
        {
            CLEAR_PRINTS();
            if (NOT sub_36156())
            {
                iVar17 = 0;
                PRINT_HELP( "HELP_BOUGHT_F_F" );
                switch (uParam5)
                {
                    case 0:
                    StrCopy( ref g_U8380, "HELP_BOUGHT_F_F", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8384, "HELP_BOUGHT_F_F", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8388, "HELP_BOUGHT_F_F", 16 );
                    break;
                }
                sub_42682( uParam5, uVar16, iVar17, uParam7, uParam13 );
                while (NOT (sub_36559( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 0, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                (uParam2^) = iVar17;
                return 1;
            }
            else if (NOT (IS_SCORE_GREATER( sub_619(), iVar17 - 1 )))
            {
                CLEAR_PRINTS();
                PRINT_HELP( "HELP_POOR_F" );
                while (NOT (sub_36559( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 1, ref uParam6, 0 )))
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
                    StrCopy( ref g_U8380, "HELP_BOUGHT_F", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8384, "HELP_BOUGHT_F", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8388, "HELP_BOUGHT_F", 16 );
                    break;
                }
                sub_42682( uParam5, uVar16, iVar17, uParam7, uParam13 );
                while (NOT (sub_36559( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 0, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                (uParam2^) = iVar17;
                return 1;
            }
        }
    }
    else if (sub_39600( "BLANK" ))
    {
        CLEAR_HELP();
        while (NOT (sub_36559( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 1, ref uParam6, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_26016( uVar16, 3, 0 ), 4, "", "", "", iVar17, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_26016( uVar16, 3, 0 ), iVar17, 7500, 1 );
    };;;;;;
    if ((sub_12076( sub_552(), 80 )) AND (sub_12076( sub_552(), 88 )))
    {
        if (TIMERA() > iParam1)
        {
            TASK_PLAY_ANIM( sub_552(), "examine shoes", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
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

void sub_42016(boolean bParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    int iVar7;

    if (IS_SCREEN_FADED_IN())
    {
        iVar5 = -1;
        iVar6 = -1;
        sub_12807( ref iVar7 );
        for ( I = 0; I < (uParam1^); I++ )
        {
            if (iVar7 == (uParam1^)[I])
            {
                iVar5 = I;
            }
        }
        if (bParam0)
        {
            sub_2778( "  * left (iThis_foot: " );
            sub_7789( iVar5 );
            iVar6 = iVar5 - 1;
            if (iVar6 < 0)
            {
                iVar6 += (uParam1^);
            }
        }
        else
        {
            sub_2778( "  * right (iThis_foot: " );
            sub_7789( iVar5 );
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
        sub_2778( "),  next: " );
        sub_7789( iVar6 );
        sub_2838();
        sub_25847( (uParam1^)[iVar6] );
        DO_SCREEN_FADE_IN( 125 );
    }
    WAIT( 0 );
    return;
}

void sub_42682(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_619(), -1 * iParam2 );
    g_U8302[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8365 += iParam2;
        g_U8368++;
        break;
        case 1:
        g_U8366 += iParam2;
        g_U8369++;
        break;
        case 2:
        g_U8367 += iParam2;
        g_U8370++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_9612( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}