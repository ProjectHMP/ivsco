void main()
{
    float fVar2;
    unknown uVar3;
    vector vVar4;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int I;
    boolean bVar11;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U104 = 0;
    l_U105 = 1;
    l_U106 = 3;
    l_U122 = 1;
    l_U138 = 0.54500000;
    l_U139 = 0.60000000;
    l_U141 = 0.03000000;
    l_U142 = 360.00000000;
    l_U143 = 0.00100000;
    l_U144 = 0.20000000;
    l_U262 = "E1_Lost_1stfloor";
    l_U321 = {0.11100000, 0.03500000, -0.03400000};
    l_U324 = {-1.57500000, 0.00000000, 0.62500000};
    l_U340 = {0.14400000, 0.09300000, 0.02500000};
    l_U343 = {6.97000000, 0.00000000, 0.00000000};
    while (NOT g_U10460)
    {
        WAIT( 0 );
    }
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    l_U346 = {l_U349._fU4[0]};
    g_U10486 = 0;
    l_U265 = {-1724.67100000, 333.98200000, 31.12200000};
    l_U132 = 35.50000000;
    l_U268[0] = {-1724.45500000, 335.81900000, 31.12200000};
    l_U133[0] = 139.00000000;
    l_U268[1] = {-1726.04700000, 334.84900000, 31.11200000};
    l_U133[1] = 250.00000000;
    l_U268[2] = {-1725.61600000, 335.57000000, 31.11200000};
    l_U133[2] = 227.75000000;
    l_U268[3] = {-1724.03800000, 334.87600000, 31.12200000};
    l_U133[3] = 80.50000000;
    l_U312 = {-1724.87000000, 335.38000000, 30.97000000};
    l_U315 = {-1724.93000000, 335.20000000, 30.81000000};
    l_U327[0] = {-1725.20000000, 334.87000000, 30.81000000};
    l_U327[1] = {-1725.05200000, 334.98700000, 30.81900000};
    l_U327[2] = {-1724.98500000, 334.87200000, 30.80900000};
    l_U327[3] = {-1725.05800000, 334.75100000, 30.81800000};
    l_U145[0] = 0.50000000;
    l_U145[1] = 0.38900000;
    l_U145[2] = 0.40600000;
    l_U145[3] = 0.39400000;
    l_U150[0] = 0.80000000;
    l_U150[1] = 0.66100000;
    l_U150[2] = 0.65600000;
    l_U150[3] = 0.79800000;
    l_U158 = GET_HASH_KEY( l_U262 );
    GET_INTERIOR_AT_COORDS( l_U265._fU0, l_U265._fU4, l_U265._fU8 + 1.00000000, ref l_U223 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        if ((l_U157 == 3) || (l_U157 == 4))
        {
            sub_793();
            sub_3346();
        }
    }
    while (IS_PLAYER_PLAYING( sub_809() ))
    {
        GET_FRAME_TIME( ref fVar2 );
        fVar2 *= 1000.00000000;
        l_U155 += fVar2;
        if (l_U157 == 4)
        {
            if (NOT (IS_CHAR_INJURED( l_U253[0] )))
            {
                if (DOES_OBJECT_EXIST( l_U242 ))
                {
                    DETACH_OBJECT( l_U242, 1 );
                    if ((NOT (l_U220 == 3)) AND (NOT (l_U220 == 0)))
                    {
                        ATTACH_OBJECT_TO_PED( l_U242, l_U253[0], 1219, l_U321, l_U324, 0 );
                    }
                    else
                    {
                        ATTACH_OBJECT_TO_PED( l_U242, l_U253[0], 1219, l_U321, l_U324._fU0, l_U324._fU4, l_U324._fU8 + 3.14000000, 0 );
                    }
                }
            }
        }
        if (NOT l_U128)
        {
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "billy1" )) > 0)
            {
                if (IS_PLAYER_PLAYING( sub_809() ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_865(), l_U268[0]._fU0, l_U268[0]._fU4, l_U268[0]._fU8, 20.00000000, 20.00000000, 3.00000000, 0 ))
                    {
                        l_U128 = 1;
                    }
                }
            }
            else if (IS_PLAYER_PLAYING( sub_809() ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_865(), l_U268[0]._fU0, l_U268[0]._fU4, l_U268[0]._fU8, 10.00000000, 10.00000000, 3.00000000, 0 ))
                {
                    l_U128 = 1;
                }
            }
        }
        else if (IS_PLAYER_PLAYING( sub_809() ))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_865(), l_U268[0]._fU0, l_U268[0]._fU4, l_U268[0]._fU8, 10.00000000, 10.00000000, 3.00000000, 0 )))
            {
                l_U128 = 0;
            }
        }
        if (NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            sub_3346();
        }
        else if ((NOT sub_5047()) AND (NOT (l_U157 == 0)))
        {
            sub_5148();
        }
        if (NOT g_U10460)
        {
            if ((NOT (l_U157 == 3)) AND (NOT (l_U157 == 4)))
            {
                if (NOT sub_5047())
                {
                    sub_5148();
                }
            }
            else
            {
                sub_793();
                sub_5148();
            }
        }
        sub_6083();
        switch (l_U157)
        {
            case 0:
            if (g_U10460)
            {
                if (sub_5047())
                {
                    if ((((((NOT (HAS_MODEL_LOADED( 1737188996 ))) || (NOT (HAS_MODEL_LOADED( -2130437771 )))) || (NOT (HAVE_ANIMS_LOADED( "mini_cards" )))) || (NOT (REQUEST_AMBIENT_AUDIO_BANK( "EP1_SFX\CARDS_MINIGAME" )))) || (NOT (HAS_MODEL_LOADED( 1607374040 )))) || (NOT (HAS_MODEL_LOADED( -1910738573 ))))
                    {
                        AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
                        REQUEST_MODEL( 1737188996 );
                        REQUEST_MODEL( -2130437771 );
                        REQUEST_ANIMS( "mini_cards" );
                        REQUEST_MODEL( 1607374040 );
                        REQUEST_MODEL( -1910738573 );
                    }
                    else
                    {
                        sub_1499();
                        sub_6462();
                        l_U155 = 30000.00000000;
                        sub_7089( 1 );
                    }
                }
            }
            break;
            case 1:
            sub_7146();
            sub_10674();
            sub_13185();
            if (l_U128)
            {
                sub_13552();
                switch (l_U219)
                {
                    case 0:
                    for ( I = 0; I < l_U243; I++ )
                    {
                        if (DOES_OBJECT_EXIST( l_U243[I] ))
                        {
                            DELETE_OBJECT( ref l_U243[I] );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U253[1] )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[1], "mini_cards", "player_c_place_bet" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[1], "player_c_place_bet", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                        }
                        else
                        {
                            SET_CHAR_ANIM_CURRENT_TIME( l_U253[1], "mini_cards", "player_c_place_bet", 0.00000000 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U253[2] )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[2], "mini_cards", "player_d_place_bet" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[2], "player_d_place_bet", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                        }
                        else
                        {
                            SET_CHAR_ANIM_CURRENT_TIME( l_U253[2], "mini_cards", "player_d_place_bet", 0.00000000 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U253[3] )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[3], "mini_cards", "player_a_place_bet" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[3], "player_a_place_bet", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                        }
                        else
                        {
                            SET_CHAR_ANIM_CURRENT_TIME( l_U253[3], "mini_cards", "player_a_place_bet", 0.00000000 );
                        }
                    }
                    l_U221 = 1;
                    l_U219 = 1;
                    break;
                    case 1:
                    if (((sub_13617( l_U253[1], "mini_cards", "player_a_place_bet" )) AND (sub_13617( l_U253[2], "mini_cards", "player_c_place_bet" ))) AND (sub_13617( l_U253[3], "mini_cards", "player_d_place_bet" )))
                    {
                        l_U215 = 0;
                        for ( I = 0; I < 4; I++ )
                        {
                            l_U108[I] = 0;
                        }
                        l_U117 = 0;
                        sub_16532();
                        sub_16687();
                        l_U219 = 2;
                    }
                    break;
                    case 2:
                    if (l_U121)
                    {
                        l_U219 = 3;
                        SETTIMERA( 0 );
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                    {
                        switch (l_U215)
                        {
                            case 1:
                            if (sub_13617( l_U253[l_U215], "mini_cards", "player_c_decide" ))
                            {
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_c_decide", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                            }
                            break;
                            case 2:
                            if (sub_13617( l_U253[l_U215], "mini_cards", "player_d_decide" ))
                            {
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_d_decide", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                            }
                            break;
                            case 3:
                            if (sub_13617( l_U253[l_U215], "mini_cards", "player_a_decide" ))
                            {
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_a_decide", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                            }
                            break;
                        }
                    }
                    if (TIMERA() > 1000)
                    {
                        I = sub_17205( l_U160[l_U159] );
                        switch (I)
                        {
                            case 1:
                            l_U221 = 6;
                            l_U116 = 1;
                            break;
                            case 2:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 20, ref I );
                            if (I == 0)
                            {
                                l_U221 = 9;
                                l_U116 = 0;
                            }
                            else
                            {
                                l_U221 = 6;
                                l_U116 = 1;
                            }
                            break;
                            case 3:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 15, ref I );
                            if (I == 0)
                            {
                                l_U221 = 9;
                                l_U116 = 0;
                            }
                            else
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                if (I == 0)
                                {
                                    l_U221 = 6;
                                }
                                else
                                {
                                    l_U221 = 4;
                                }
                                l_U116 = 1;
                            }
                            break;
                            case 4:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref I );
                            if (I == 0)
                            {
                                l_U221 = 3;
                                l_U116 = 0;
                            }
                            else
                            {
                                l_U221 = 4;
                                l_U116 = 1;
                            }
                            break;
                            case 5:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref I );
                            if (I == 0)
                            {
                                l_U221 = 3;
                                l_U116 = 0;
                            }
                            else
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                if (I == 0)
                                {
                                    l_U221 = 4;
                                }
                                else
                                {
                                    l_U221 = 2;
                                }
                                l_U116 = 1;
                            }
                            break;
                            case 6:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref I );
                            if (I == 0)
                            {
                                l_U221 = 3;
                                l_U116 = 0;
                            }
                            else
                            {
                                l_U221 = 2;
                                l_U116 = 1;
                            }
                            break;
                            case 7:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref I );
                            if (I == 0)
                            {
                                l_U221 = 2;
                                l_U116 = 1;
                            }
                            else
                            {
                                l_U221 = 3;
                                l_U116 = 0;
                            }
                            break;
                            case 8:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref I );
                            if (I == 0)
                            {
                                l_U221 = 2;
                                l_U116 = 1;
                            }
                            else
                            {
                                l_U221 = 3;
                                l_U116 = 0;
                            }
                            break;
                            case 9:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref I );
                            if (I == 0)
                            {
                                l_U221 = 2;
                                l_U116 = 1;
                            }
                            else
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                if (I == 0)
                                {
                                    l_U221 = 5;
                                }
                                else
                                {
                                    l_U221 = 3;
                                }
                                l_U116 = 0;
                            }
                            break;
                            case 10:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref I );
                            if (I == 0)
                            {
                                l_U221 = 2;
                                l_U116 = 1;
                            }
                            else
                            {
                                l_U221 = 5;
                                l_U116 = 0;
                            }
                            break;
                            case 11:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 15, ref I );
                            if (I == 0)
                            {
                                l_U221 = 8;
                                l_U116 = 1;
                            }
                            else
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                if (I == 0)
                                {
                                    l_U221 = 7;
                                }
                                else
                                {
                                    l_U221 = 5;
                                }
                                l_U116 = 0;
                            }
                            break;
                            case 12:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 20, ref I );
                            if (I == 0)
                            {
                                l_U221 = 8;
                                l_U116 = 1;
                            }
                            else
                            {
                                l_U221 = 7;
                                l_U116 = 0;
                            }
                            break;
                            case 13:
                            l_U221 = 7;
                            l_U116 = 0;
                            break;
                        }
                        SETTIMERA( 0 );
                        l_U216 = sub_17205( l_U160[l_U159] );
                        l_U219 = 4;
                    }
                    break;
                    case 4:
                    if (TIMERA() > 2000)
                    {
                        sub_16687();
                        l_U219 = 5;
                    }
                    break;
                    case 5:
                    if (l_U121)
                    {
                        if (l_U116)
                        {
                            if ((sub_17205( l_U160[l_U159] )) > l_U216)
                            {
                                l_U219 = 6;
                            }
                            else
                            {
                                l_U219 = 7;
                            }
                        }
                        else if ((sub_17205( l_U160[l_U159] )) < l_U216)
                        {
                            l_U219 = 6;
                        }
                        else
                        {
                            l_U219 = 7;
                        }
                        if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                        {
                            if (l_U219 == 7)
                            {
                                switch (l_U215)
                                {
                                    case 1:
                                    if (sub_13617( l_U253[l_U215], "mini_cards", "player_c_curse" ))
                                    {
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_c_curse", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                                    }
                                    break;
                                    case 2:
                                    if (sub_13617( l_U253[l_U215], "mini_cards", "player_d_curse" ))
                                    {
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_d_curse", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                                    }
                                    break;
                                    case 3:
                                    if (sub_13617( l_U253[l_U215], "mini_cards", "player_a_curse" ))
                                    {
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_a_curse", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                                    }
                                    break;
                                }
                                l_U221 = 17;
                            }
                            else
                            {
                                switch (l_U215)
                                {
                                    case 1:
                                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[l_U215], "mini_cards", "player_c_in_idle" )))
                                    {
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_c_in_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
                                    }
                                    break;
                                    case 2:
                                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[l_U215], "mini_cards", "player_d_in_idle" )))
                                    {
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_d_in_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
                                    }
                                    break;
                                    case 3:
                                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[l_U215], "mini_cards", "player_a_in_idle" )))
                                    {
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_a_in_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
                                    }
                                    break;
                                }
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref I );
                                if (I == 0)
                                {
                                    l_U221 = 15;
                                }
                                else if (I == 1)
                                {
                                    l_U221 = 18;
                                }
                            }
                        }
                        SETTIMERA( 0 );
                    }
                    break;
                    case 6:
                    l_U108[l_U215] = 0;
                    l_U219 = 8;
                    break;
                    case 7:
                    l_U108[l_U215] = 1;
                    l_U219 = 8;
                    break;
                    case 8:
                    if (sub_19783() == 1)
                    {
                        if (NOT l_U108[1])
                        {
                            l_U217 = 1;
                        }
                        else if (NOT l_U108[2])
                        {
                            l_U217 = 2;
                        }
                        else
                        {
                            l_U217 = 3;
                        }
                        l_U219 = 9;
                    }
                    else
                    {
                        sub_19933();
                        l_U219 = 3;
                    }
                    break;
                    case 9:
                    if (NOT (IS_CHAR_INJURED( l_U253[l_U217] )))
                    {
                        switch (l_U217)
                        {
                            case 1:
                            if (sub_13617( l_U253[l_U217], "mini_cards", "player_c_celeb" ))
                            {
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U217], "player_c_celeb", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                            }
                            break;
                            case 2:
                            if (sub_13617( l_U253[l_U217], "mini_cards", "player_d_celeb" ))
                            {
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U217], "player_d_celeb", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                            }
                            break;
                            case 3:
                            if (sub_13617( l_U253[l_U217], "mini_cards", "player_a_celeb" ))
                            {
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U217], "player_a_celeb", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                            }
                            break;
                        }
                    }
                    SETTIMERA( 0 );
                    l_U221 = 16;
                    l_U219 = 10;
                    break;
                    case 10:
                    if (TIMERA() > 2000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U253[l_U217] )))
                        {
                            switch (l_U217)
                            {
                                case 1:
                                if (sub_13617( l_U253[l_U217], "mini_cards", "player_c_celeb" ))
                                {
                                    l_U219 = 0;
                                }
                                break;
                                case 2:
                                if (sub_13617( l_U253[l_U217], "mini_cards", "player_d_celeb" ))
                                {
                                    l_U219 = 0;
                                }
                                break;
                                case 3:
                                if (sub_13617( l_U253[l_U217], "mini_cards", "player_a_celeb" ))
                                {
                                    l_U219 = 0;
                                }
                                break;
                            }
                        }
                    }
                    break;
                }
                if (IS_PLAYER_PLAYING( sub_809() ))
                {
                    bVar11 = false;
                    vVar4 = {l_U349._fU4[0]};
                    if (IS_ANY_CHAR_SHOOTING_IN_AREA( vVar4 + (vector( -2.00000000, -20.00000000, -20.00000000)), vVar4 + (vector( 2.00000000, 20.00000000, 20.00000000)), 0 ))
                    {
                        bVar11 = true;
                    }
                    for ( I = 0; I < 4; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U253[I] ))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U253[I] )))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U253[I] )))
                                {
                                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U253[I], sub_865(), 0 ))
                                    {
                                        l_U125 = 1;
                                        bVar11 = true;
                                    }
                                }
                                else
                                {
                                    bVar11 = true;
                                }
                            }
                            else
                            {
                                bVar11 = true;
                            }
                        }
                    }
                    if (sub_21013())
                    {
                        GET_FRAME_TIME( ref fVar2 );
                        fVar2 *= 1000.00000000;
                        l_U156 += fVar2;
                        if (l_U156 > 2000)
                        {
                            l_U125 = 1;
                            bVar11 = true;
                        }
                    }
                    else
                    {
                        l_U156 = 0.00000000;
                    }
                    if (sub_5403())
                    {
                        l_U125 = 1;
                        bVar11 = true;
                    }
                    if (sub_21241())
                    {
                        bVar11 = true;
                    }
                    if (g_U10486)
                    {
                        l_U125 = 1;
                        bVar11 = true;
                    }
                    if (l_U125)
                    {
                        g_U10486 = 1;
                    }
                    if (bVar11)
                    {
                        sub_5158( 1 );
                    }
                }
            }
            else
            {
                l_U219 = 0;
            }
            if (l_U118)
            {
                if (NOT (IS_CONTROL_PRESSED( 2, 23 )))
                {
                    l_U118 = 0;
                }
            }
            if (((sub_21460()) AND (sub_23180( 2, 0 ))) AND (NOT l_U118))
            {
                if (NOT (IS_SCORE_GREATER( sub_809(), 9 )))
                {
                    l_U263 = "HILO_G09";
                }
                else
                {
                    I = 0;
                    if (NOT (IS_CHAR_INJURED( l_U258 )))
                    {
                        I++;
                    }
                    if (NOT (IS_CHAR_INJURED( l_U259 )))
                    {
                        I++;
                    }
                    if (NOT (IS_CHAR_INJURED( l_U260 )))
                    {
                        I++;
                    }
                    if (I == 0)
                    {
                        l_U263 = "HILO_G01";
                    }
                    else if (I == 1)
                    {
                        if (((NOT (IS_CHAR_INJURED( l_U258 ))) AND (IS_CHAR_INJURED( l_U259 ))) AND (IS_CHAR_INJURED( l_U260 )))
                        {
                            l_U263 = "HILO_G02";
                        }
                        if (((IS_CHAR_INJURED( l_U258 )) AND (NOT (IS_CHAR_INJURED( l_U259 )))) AND (IS_CHAR_INJURED( l_U260 )))
                        {
                            l_U263 = "HILO_G03";
                        }
                        if (((IS_CHAR_INJURED( l_U258 )) AND (IS_CHAR_INJURED( l_U259 ))) AND (NOT (IS_CHAR_INJURED( l_U260 ))))
                        {
                            l_U263 = "HILO_G04";
                        }
                    }
                    else if (I == 2)
                    {
                        if (((NOT (IS_CHAR_INJURED( l_U258 ))) AND (NOT (IS_CHAR_INJURED( l_U259 )))) AND (IS_CHAR_INJURED( l_U260 )))
                        {
                            l_U263 = "HILO_G05";
                        }
                        if (((NOT (IS_CHAR_INJURED( l_U258 ))) AND (IS_CHAR_INJURED( l_U259 ))) AND (NOT (IS_CHAR_INJURED( l_U260 ))))
                        {
                            l_U263 = "HILO_G06";
                        }
                        if (((IS_CHAR_INJURED( l_U258 )) AND (NOT (IS_CHAR_INJURED( l_U259 )))) AND (NOT (IS_CHAR_INJURED( l_U260 ))))
                        {
                            l_U263 = "HILO_G07";
                        }
                    }
                    else if (I == 3)
                    {
                        l_U263 = "HILO_G08";
                    };;;;
                }
                if (NOT (IS_STRING_NULL( l_U264 )))
                {
                    if (NOT (COMPARE_STRING( l_U263, l_U264 )))
                    {
                        sub_4129( 2, l_U264 );
                        l_U264 = l_U263;
                    }
                }
                else
                {
                    l_U264 = l_U263;
                }
                if (sub_24127( 2, l_U264, 0 ))
                {
                    bVar11 = true;
                    if (g_U12303)
                    {
                        if (NOT (sub_22667( 5 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U258 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U258, "GENERIC_NO_THANKS", 1, 1, 2 );
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U259 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U259, "GENERIC_NO_THANKS", 1, 1, 2 );
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U260 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U260, "GENERIC_NO_THANKS", 1, 1, 2 );
                            };;;
                            bVar11 = false;
                        }
                    }
                    if (bVar11)
                    {
                        if (IS_SCORE_GREATER( sub_809(), 9 ))
                        {
                            l_U118 = 1;
                            if (NOT sub_24981())
                            {
                                sub_4129( 2, l_U264 );
                            }
                        }
                    }
                }
            }
            else
            {
                sub_4129( 2, l_U264 );
            }
            if (l_U155 > 30000.00000000)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_865(), -1725.13000000, 334.79000000, 30.69000000, 3.00000000, 3.00000000, 2.00000000, 0 ))
                {
                    if ((NOT (IS_CHAR_INJURED( l_U253[0] ))) AND (NOT (IS_CHAR_INJURED( l_U253[1] ))))
                    {
                        if ((NOT (IS_AMBIENT_SPEECH_PLAYING( l_U253[0] ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U253[1] ))))
                        {
                            switch (l_U222)
                            {
                                case 0:
                                SAY_AMBIENT_SPEECH( l_U253[0], "CONV_GANG_STATE", 1, 1, 2 );
                                l_U222++;
                                break;
                                case 1:
                                SAY_AMBIENT_SPEECH( l_U253[1], "CONV_GANG_RESP", 1, 1, 2 );
                                l_U222++;
                                case 2:
                                l_U222 = 0;
                                l_U155 = 0.00000000;
                                break;
                            }
                        }
                    }
                }
            }
            break;
            case 3:
            if (((((((NOT (HAS_MODEL_LOADED( 1737188996 ))) || (NOT (HAS_MODEL_LOADED( -2130437771 )))) || (NOT (HAVE_ANIMS_LOADED( "mini_cards" )))) || (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( "HILOCRD", 3 )))) || (NOT (REQUEST_AMBIENT_AUDIO_BANK( "EP1_SFX\CARDS_MINIGAME" )))) || (NOT (HAS_MODEL_LOADED( 1607374040 )))) || (NOT (HAS_MODEL_LOADED( -1910738573 ))))
            {
                REQUEST_ADDITIONAL_TEXT( "HILOCRD", 3 );
                REQUEST_MODEL( 1737188996 );
                REQUEST_MODEL( -2130437771 );
                REQUEST_MODEL( 1607374040 );
                REQUEST_MODEL( -1910738573 );
                REQUEST_ANIMS( "mini_cards" );
                AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
            }
            else
            {
                sub_26100();
                I = 0;
                if (NOT (IS_CHAR_INJURED( l_U258 )))
                {
                    I++;
                }
                if (NOT (IS_CHAR_INJURED( l_U259 )))
                {
                    I++;
                }
                if (NOT (IS_CHAR_INJURED( l_U260 )))
                {
                    I++;
                }
                if (I >= 1)
                {
                    WAIT( 0 );
                    if (DOES_CHAR_EXIST( l_U253[1] ))
                    {
                        DELETE_CHAR( ref l_U253[1] );
                        l_U253[1] = nil;
                    }
                    if (NOT (DOES_CHAR_EXIST( l_U253[1] )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U258 )))
                        {
                            l_U253[1] = l_U258;
                        }
                    }
                    if (NOT (DOES_CHAR_EXIST( l_U253[1] )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U259 )))
                        {
                            l_U253[1] = l_U259;
                        }
                    }
                    if (NOT (DOES_CHAR_EXIST( l_U253[1] )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U260 )))
                        {
                            l_U253[1] = l_U260;
                        }
                    }
                    if (I >= 2)
                    {
                        if (DOES_CHAR_EXIST( l_U253[2] ))
                        {
                            DELETE_CHAR( ref l_U253[2] );
                            l_U253[2] = nil;
                        }
                        if (NOT (DOES_CHAR_EXIST( l_U253[2] )))
                        {
                            if ((NOT (IS_CHAR_INJURED( l_U258 ))) AND (NOT (l_U253[1] == l_U258)))
                            {
                                l_U253[2] = l_U258;
                            }
                        }
                        if (NOT (DOES_CHAR_EXIST( l_U253[2] )))
                        {
                            if ((NOT (IS_CHAR_INJURED( l_U259 ))) AND (NOT (l_U253[1] == l_U259)))
                            {
                                l_U253[2] = l_U259;
                            }
                        }
                        if (NOT (DOES_CHAR_EXIST( l_U253[2] )))
                        {
                            if ((NOT (IS_CHAR_INJURED( l_U260 ))) AND (NOT (l_U253[1] == l_U260)))
                            {
                                l_U253[2] = l_U260;
                            }
                        }
                    }
                    if (I == 3)
                    {
                        if (DOES_CHAR_EXIST( l_U253[3] ))
                        {
                            DELETE_CHAR( ref l_U253[3] );
                            l_U253[3] = nil;
                        }
                        if (NOT (DOES_CHAR_EXIST( l_U253[3] )))
                        {
                            if (((NOT (IS_CHAR_INJURED( l_U258 ))) AND (NOT (l_U253[1] == l_U258))) AND (NOT (l_U253[2] == l_U258)))
                            {
                                l_U253[3] = l_U258;
                            }
                        }
                        if (NOT (DOES_CHAR_EXIST( l_U253[3] )))
                        {
                            if (((NOT (IS_CHAR_INJURED( l_U259 ))) AND (NOT (l_U253[1] == l_U259))) AND (NOT (l_U253[2] == l_U259)))
                            {
                                l_U253[3] = l_U259;
                            }
                        }
                        if (NOT (DOES_CHAR_EXIST( l_U253[3] )))
                        {
                            if (((NOT (IS_CHAR_INJURED( l_U260 ))) AND (NOT (l_U253[1] == l_U260))) AND (NOT (l_U253[2] == l_U260)))
                            {
                                l_U253[3] = l_U260;
                            }
                        }
                    }
                }
                sub_1499();
                sub_6462();
                if (l_U122)
                {
                    if (DOES_OBJECT_EXIST( l_U229 ))
                    {
                        DELETE_OBJECT( ref l_U229 );
                    }
                    CREATE_OBJECT( -195381842, l_U265._fU0, l_U265._fU4, l_U265._fU8, ref l_U229, 1 );
                    SET_OBJECT_HEADING( l_U229, l_U132 );
                    FREEZE_OBJECT_POSITION( l_U229, 1 );
                    SET_OBJECT_VISIBLE( l_U229, 0 );
                    SET_OBJECT_COLLISION( l_U229, 0 );
                }
                if (IS_PLAYER_PLAYING( sub_809() ))
                {
                    SET_PLAYER_CONTROL( sub_809(), 0 );
                    SET_CHAR_COORDINATES( sub_865(), l_U265._fU0, l_U265._fU4, l_U265._fU8 );
                    SET_CHAR_HEADING( sub_865(), l_U132 );
                    FREEZE_CHAR_POSITION( sub_865(), 1 );
                    SET_ROOM_FOR_CHAR_BY_KEY( sub_865(), l_U158 );
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_865(), 1 );
                    if (l_U122)
                    {
                        SET_CHAR_COLLISION( sub_865(), 0 );
                        ATTACH_PED_TO_OBJECT( sub_865(), l_U229, 0, 0.00000000, 0.00000000, 0.00000000, l_U132, 360.00000000, 0, 0 );
                    }
                }
                l_U261 = sub_865();
                LOAD_SCENE_FOR_ROOM_BY_KEY( l_U223, l_U158 );
                if (NOT (IS_CHAR_INJURED( l_U261 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U261 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U261, "player_b_place_bet", "mini_cards", 10000.00000000, 0, 0, 0, 1, -1 );
                }
                WAIT( 0 );
                if (NOT (IS_CHAR_INJURED( l_U261 )))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U261, "mini_cards", "player_b_place_bet" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U261, "player_b_place_bet", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    else
                    {
                        SET_CHAR_ANIM_CURRENT_TIME( l_U261, "mini_cards", "player_b_place_bet", 0.00000000 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U253[1] )))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[1], "mini_cards", "player_c_place_bet" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[1], "player_c_place_bet", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    else
                    {
                        SET_CHAR_ANIM_CURRENT_TIME( l_U253[1], "mini_cards", "player_c_place_bet", 0.00000000 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U253[2] )))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[2], "mini_cards", "player_d_place_bet" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[2], "player_d_place_bet", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    else
                    {
                        SET_CHAR_ANIM_CURRENT_TIME( l_U253[2], "mini_cards", "player_d_place_bet", 0.00000000 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U253[3] )))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[3], "mini_cards", "player_a_place_bet" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[3], "player_a_place_bet", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    else
                    {
                        SET_CHAR_ANIM_CURRENT_TIME( l_U253[3], "mini_cards", "player_a_place_bet", 0.00000000 );
                    }
                }
                DISPLAY_RADAR( 0 );
                BEGIN_CAM_COMMANDS( ref l_U213 );
                l_U114 = 1;
                CREATE_CAM( 14, ref l_U131 );
                SET_CAM_POS( l_U131, -1725.11400000, 333.22450000, 31.65138000 );
                SET_CAM_ROT( l_U131, -31.74904000, -0.00000000, 5.03226900 );
                SET_CAM_FOV( l_U131, 45.00000000 );
                SET_CAM_ACTIVE( l_U131, 1 );
                SET_CAM_PROPAGATE( l_U131, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                l_U220 = 4;
                sub_28527();
                l_U127 = 1;
                sub_7089( 4 );
            }
            break;
            case 4:
            sub_13552();
            sub_7146();
            switch (l_U214)
            {
                case 0:
                if (IS_SCREEN_FADED_IN())
                {
                    CLEAR_HELP();
                    for ( I = 0; I < l_U243; I++ )
                    {
                        if (DOES_OBJECT_EXIST( l_U243[I] ))
                        {
                            DELETE_OBJECT( ref l_U243[I] );
                        }
                    }
                    if (l_U127)
                    {
                        PRINT_HELP_FOREVER( "HILO_H01" );
                        l_U127 = 0;
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U253[1] )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[1], "player_c_place_bet", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U253[2] )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[2], "player_d_place_bet", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U253[3] )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[3], "player_a_place_bet", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U261, "player_b_place_bet", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                    }
                    if (IS_PLAYER_PLAYING( sub_809() ))
                    {
                        ADD_SCORE( sub_809(), -10 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U253[1] )))
                    {
                        I = GET_CHAR_MONEY( l_U253[1] );
                        I += -10;
                        if (I < 0)
                        {
                            I = 0;
                        }
                        SET_CHAR_MONEY( l_U253[1], I );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U253[2] )))
                    {
                        I = GET_CHAR_MONEY( l_U253[2] );
                        I += -10;
                        if (I < 0)
                        {
                            I = 0;
                        }
                        SET_CHAR_MONEY( l_U253[2], I );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U253[3] )))
                    {
                        I = GET_CHAR_MONEY( l_U253[3] );
                        I += -10;
                        if (I < 0)
                        {
                            I = 0;
                        }
                        SET_CHAR_MONEY( l_U253[3], I );
                    }
                    l_U130 = 0;
                    l_U221 = 1;
                    l_U118 = 1;
                    l_U214 = 1;
                    SETTIMERA( 0 );
                }
                break;
                case 1:
                if (NOT (sub_29583( 0 )))
                {
                    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        if (NOT l_U119)
                        {
                            if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 2, 137 )))
                            {
                                l_U119 = 1;
                                CLEAR_HELP();
                            }
                        }
                        else if ((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 137 ))))
                        {
                            l_U119 = 0;
                        }
                    }
                    if ((((((sub_13617( l_U253[1], "mini_cards", "player_c_place_bet" )) AND (sub_13617( l_U253[2], "mini_cards", "player_d_place_bet" ))) AND (sub_13617( l_U253[3], "mini_cards", "player_a_place_bet" ))) AND (sub_13617( l_U261, "mini_cards", "player_b_place_bet" ))) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())) AND (l_U221 == 0))
                    {
                        if (TIMERA() > 2000)
                        {
                            l_U130 = 1;
                            sub_28527();
                            l_U220 = 4;
                            sub_16687();
                            l_U214 = 2;
                        }
                    }
                    else if (IS_CHAR_PLAYING_ANIM( l_U261, "mini_cards", "player_b_place_bet" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U261, "mini_cards", "player_b_place_bet", ref fVar2 );
                        if (fVar2 > 0.10000000)
                        {
                            if (fVar2 < 0.60000000)
                            {
                                ;
                            }
                            else
                            {
                                l_U220 = 4;
                            }
                        }
                    }
                }
                break;
                case 2:
                if (l_U121)
                {
                    if (l_U215 == 0)
                    {
                        l_U214 = 5;
                        l_U155 = 5000.00000000;
                        l_U129 = 0;
                    }
                    else
                    {
                        l_U214 = 3;
                    }
                    CLEAR_PRINTS();
                    SETTIMERA( 0 );
                }
                break;
                case 3:
                switch (l_U215)
                {
                    case 1:
                    l_U220 = 0;
                    break;
                    case 2:
                    l_U220 = 1;
                    break;
                    case 3:
                    l_U220 = 2;
                    break;
                }
                if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                {
                    switch (l_U215)
                    {
                        case 1:
                        if (sub_13617( l_U253[l_U215], "mini_cards", "player_c_decide" ))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_c_decide", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                        }
                        break;
                        case 2:
                        if (sub_13617( l_U253[l_U215], "mini_cards", "player_d_decide" ))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_d_decide", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                        }
                        break;
                        case 3:
                        if (sub_13617( l_U253[l_U215], "mini_cards", "player_a_decide" ))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_a_decide", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                        }
                        break;
                    }
                }
                if (((NOT (sub_29583( 1 ))) AND (TIMERA() > 500)) AND (l_U221 == 0))
                {
                    if (sub_32261() == 2)
                    {
                        I = sub_17205( l_U160[l_U159] );
                        switch (I)
                        {
                            case 5:
                            case 9:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref I );
                            if (I == 0)
                            {
                                l_U221 = 10;
                            }
                            break;
                            case 6:
                            case 7:
                            case 8:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                if (I == 0)
                                {
                                    l_U221 = 13;
                                }
                                else
                                {
                                    l_U221 = 14;
                                }
                            }
                            break;
                        }
                    }
                }
                if (((NOT (sub_29583( 1 ))) AND (TIMERA() > 2000)) AND (l_U221 == 0))
                {
                    I = sub_17205( l_U160[l_U159] );
                    switch (I)
                    {
                        case 1:
                        l_U221 = 6;
                        l_U116 = 1;
                        break;
                        case 2:
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 20, ref I );
                        if (I == 0)
                        {
                            l_U221 = 9;
                            l_U116 = 0;
                        }
                        else
                        {
                            l_U221 = 6;
                            l_U116 = 1;
                        }
                        break;
                        case 3:
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 15, ref I );
                        if (I == 0)
                        {
                            l_U221 = 9;
                            l_U116 = 0;
                        }
                        else
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                l_U221 = 6;
                            }
                            else
                            {
                                l_U221 = 4;
                            }
                            l_U116 = 1;
                        }
                        break;
                        case 4:
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref I );
                        if (I == 0)
                        {
                            l_U221 = 3;
                            l_U116 = 0;
                        }
                        else
                        {
                            l_U221 = 4;
                            l_U116 = 1;
                        }
                        break;
                        case 5:
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref I );
                        if (I == 0)
                        {
                            l_U221 = 3;
                            l_U116 = 0;
                        }
                        else
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                l_U221 = 4;
                            }
                            else
                            {
                                l_U221 = 2;
                            }
                            l_U116 = 1;
                        }
                        break;
                        case 6:
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref I );
                        if (I == 0)
                        {
                            l_U221 = 3;
                            l_U116 = 0;
                        }
                        else
                        {
                            l_U221 = 2;
                            l_U116 = 1;
                        }
                        break;
                        case 7:
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref I );
                        if (I == 0)
                        {
                            l_U221 = 2;
                            l_U116 = 1;
                        }
                        else
                        {
                            l_U221 = 3;
                            l_U116 = 0;
                        }
                        break;
                        case 8:
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref I );
                        if (I == 0)
                        {
                            l_U221 = 2;
                            l_U116 = 1;
                        }
                        else
                        {
                            l_U221 = 3;
                            l_U116 = 0;
                        }
                        break;
                        case 9:
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref I );
                        if (I == 0)
                        {
                            l_U221 = 2;
                            l_U116 = 1;
                        }
                        else
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                l_U221 = 5;
                            }
                            else
                            {
                                l_U221 = 3;
                            }
                            l_U116 = 0;
                        }
                        break;
                        case 10:
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref I );
                        if (I == 0)
                        {
                            l_U221 = 2;
                            l_U116 = 1;
                        }
                        else
                        {
                            l_U221 = 5;
                            l_U116 = 0;
                        }
                        break;
                        case 11:
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 15, ref I );
                        if (I == 0)
                        {
                            l_U221 = 8;
                            l_U116 = 1;
                        }
                        else
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                l_U221 = 7;
                            }
                            else
                            {
                                l_U221 = 5;
                            }
                            l_U116 = 0;
                        }
                        break;
                        case 12:
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 20, ref I );
                        if (I == 0)
                        {
                            l_U221 = 8;
                            l_U116 = 1;
                        }
                        else
                        {
                            l_U221 = 7;
                            l_U116 = 0;
                        }
                        break;
                        case 13:
                        l_U221 = 7;
                        l_U116 = 0;
                        break;
                    }
                    l_U216 = sub_17205( l_U160[l_U159] );
                    l_U214 = 4;
                }
                break;
                case 4:
                if (l_U221 == 0)
                {
                    l_U214 = 6;
                }
                break;
                case 5:
                l_U220 = 3;
                if (NOT (IS_CHAR_INJURED( l_U261 )))
                {
                    if ((sub_13617( l_U261, "mini_cards", "player_b_decide" )) AND (TIMERB() > 10000))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U261, "player_b_decide", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                        SETTIMERB( 0 );
                    }
                }
                if (NOT l_U129)
                {
                    if (l_U221 == 0)
                    {
                        I = sub_17205( l_U160[l_U159] );
                        switch (I)
                        {
                            case 5:
                            case 9:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref I );
                            if (I == 0)
                            {
                                l_U221 = 10;
                            }
                            break;
                            case 6:
                            case 7:
                            case 8:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                if (I == 0)
                                {
                                    l_U221 = 13;
                                }
                                else
                                {
                                    l_U221 = 14;
                                }
                            }
                            break;
                        }
                        l_U129 = 1;
                    }
                }
                if ((l_U155 > 10000.00000000) AND (l_U221 == 0))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref I );
                    if (I == 0)
                    {
                        l_U221 = 19;
                        l_U155 = 0.00000000;
                    }
                    else
                    {
                        l_U221 = 10;
                        l_U155 = 0.00000000;
                    }
                }
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HILO_H02" )))
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "HILO_H02", sub_29646( l_U160[l_U159] ) );
                }
                if (NOT (sub_29583( 0 )))
                {
                    if (((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 79 ))) || ((NOT IS_USING_CONTROLLER()) AND ((IS_CONTROL_JUST_PRESSED( 2, 130 )) || (IS_CONTROL_PRESSED( 2, 93 )))))
                    {
                        I = sub_17205( l_U160[l_U159] );
                        switch (I)
                        {
                            case 1:
                            case 2:
                            l_U221 = 6;
                            l_U221 = 6;
                            break;
                            case 3:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                l_U221 = 6;
                            }
                            else
                            {
                                l_U221 = 4;
                            }
                            break;
                            case 4:
                            case 5:
                            l_U221 = 4;
                            l_U221 = 4;
                            break;
                            case 6:
                            case 7:
                            case 8:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                l_U221 = 4;
                            }
                            else
                            {
                                l_U221 = 2;
                            }
                            break;
                            case 9:
                            case 10:
                            l_U221 = 2;
                            break;
                            case 11:
                            case 12:
                            case 13:
                            l_U221 = 8;
                            break;
                        }
                        l_U116 = 1;
                        l_U216 = sub_17205( l_U160[l_U159] );
                        CLEAR_HELP();
                        l_U214 = 7;
                    }
                    if (((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 78 ))) || ((NOT IS_USING_CONTROLLER()) AND ((IS_CONTROL_JUST_PRESSED( 2, 131 )) || (IS_CONTROL_PRESSED( 2, 94 )))))
                    {
                        I = sub_17205( l_U160[l_U159] );
                        switch (I)
                        {
                            case 13:
                            case 12:
                            l_U221 = 7;
                            l_U221 = 7;
                            break;
                            case 11:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                l_U221 = 7;
                            }
                            else
                            {
                                l_U221 = 5;
                            }
                            break;
                            case 10:
                            case 9:
                            l_U221 = 5;
                            l_U221 = 5;
                            break;
                            case 8:
                            case 7:
                            case 6:
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            if (I == 0)
                            {
                                l_U221 = 5;
                            }
                            else
                            {
                                l_U221 = 3;
                            }
                            break;
                            case 5:
                            case 4:
                            l_U221 = 3;
                            break;
                            case 3:
                            case 2:
                            case 1:
                            l_U221 = 9;
                            break;
                        }
                        l_U116 = 0;
                        l_U216 = sub_17205( l_U160[l_U159] );
                        CLEAR_HELP();
                        l_U214 = 7;
                    }
                }
                break;
                case 6:
                if (NOT (sub_29583( 1 )))
                {
                    if (l_U221 == 0)
                    {
                        sub_16687();
                        l_U214 = 8;
                    }
                }
                break;
                case 7:
                if (l_U221 == 0)
                {
                    CLEAR_HELP();
                    sub_16687();
                    l_U214 = 9;
                }
                break;
                case 8:
                if (NOT (sub_29583( 1 )))
                {
                    if ((l_U121) AND (l_U221 == 0))
                    {
                        if (l_U116)
                        {
                            if ((sub_17205( l_U160[l_U159] )) > l_U216)
                            {
                                if (l_U216 < 7)
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                    if (I == 0)
                                    {
                                        l_U221 = 18;
                                    }
                                }
                                else
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                    if (I == 0)
                                    {
                                        l_U221 = 15;
                                    }
                                }
                                l_U214 = 10;
                            }
                            else
                            {
                                l_U221 = 17;
                                l_U214 = 11;
                            }
                        }
                        else if ((sub_17205( l_U160[l_U159] )) < l_U216)
                        {
                            if (l_U216 > 7)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                if (I == 0)
                                {
                                    l_U221 = 18;
                                }
                            }
                            else
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                if (I == 0)
                                {
                                    l_U221 = 15;
                                }
                            }
                            l_U214 = 10;
                        }
                        else
                        {
                            l_U221 = 17;
                            l_U214 = 11;
                        }
                        if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                        {
                            if (l_U214 == 11)
                            {
                                switch (l_U215)
                                {
                                    case 1:
                                    if (sub_13617( l_U253[l_U215], "mini_cards", "player_c_curse" ))
                                    {
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_c_curse", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                                    }
                                    break;
                                    case 2:
                                    if (sub_13617( l_U253[l_U215], "mini_cards", "player_d_curse" ))
                                    {
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_d_curse", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                                    }
                                    break;
                                    case 3:
                                    if (sub_13617( l_U253[l_U215], "mini_cards", "player_a_curse" ))
                                    {
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_a_curse", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                                    }
                                    break;
                                }
                            }
                            else
                            {
                                switch (l_U215)
                                {
                                    case 1:
                                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[l_U215], "mini_cards", "player_c_in_idle" )))
                                    {
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_c_in_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
                                    }
                                    break;
                                    case 2:
                                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[l_U215], "mini_cards", "player_d_in_idle" )))
                                    {
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_d_in_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
                                    }
                                    break;
                                    case 3:
                                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[l_U215], "mini_cards", "player_a_in_idle" )))
                                    {
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U215], "player_a_in_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
                                    }
                                    break;
                                }
                            }
                        }
                        SETTIMERA( 0 );
                    }
                }
                break;
                case 9:
                CLEAR_HELP();
                if ((l_U121) AND (l_U221 == 0))
                {
                    if (l_U116)
                    {
                        if ((sub_17205( l_U160[l_U159] )) > l_U216)
                        {
                            if (l_U216 < 7)
                            {
                                l_U221 = 18;
                            }
                            else
                            {
                                l_U221 = 15;
                            }
                            l_U214 = 12;
                        }
                        else
                        {
                            l_U221 = 17;
                            l_U214 = 13;
                        }
                    }
                    else if ((sub_17205( l_U160[l_U159] )) < l_U216)
                    {
                        if (l_U216 > 7)
                        {
                            l_U221 = 18;
                        }
                        else
                        {
                            l_U221 = 15;
                        }
                        l_U214 = 12;
                    }
                    else
                    {
                        l_U221 = 17;
                        l_U214 = 13;
                    }
                    SETTIMERA( 0 );
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( l_U261, "mini_cards", "player_b_in_idle" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U261, "player_b_in_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
                        }
                    }
                    if (l_U214 == 13)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U261 )))
                        {
                            if (sub_13617( l_U261, "mini_cards", "player_b_curse" ))
                            {
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U261, "player_b_curse", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                            }
                        }
                    }
                }
                break;
                case 10:
                if (l_U221 == 0)
                {
                    l_U108[l_U215] = 0;
                    if (NOT (sub_29583( 1 )))
                    {
                        l_U214 = 14;
                        SETTIMERA( 0 );
                    }
                }
                break;
                case 11:
                if (l_U221 == 0)
                {
                    l_U108[l_U215] = 1;
                    if (NOT (sub_29583( 1 )))
                    {
                        l_U214 = 14;
                        SETTIMERA( 0 );
                    }
                }
                break;
                case 12:
                if (l_U221 == 0)
                {
                    l_U117 = 0;
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HILO_H03" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "HILO_H03", sub_29646( l_U160[l_U159] ) );
                    }
                    if ((NOT (sub_29583( 0 ))) || (TIMERA() > 5000))
                    {
                        if (((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 2, 137 ))) || (TIMERA() > 5000))
                        {
                            l_U214 = 14;
                            l_U119 = 1;
                        }
                    }
                }
                break;
                case 13:
                if (l_U221 == 0)
                {
                    l_U117 = 1;
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HILO_H04" )))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "HILO_H04", sub_29646( l_U160[l_U159] ) );
                    }
                    if ((NOT (sub_29583( 0 ))) || (TIMERA() > 5000))
                    {
                        if (((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 2, 137 ))) || (TIMERA() > 5000))
                        {
                            l_U214 = 14;
                            l_U119 = 1;
                        }
                    }
                }
                break;
                case 14:
                if (TIMERA() > 1000)
                {
                    bVar11 = true;
                    switch (l_U215)
                    {
                        case 1:
                        if (NOT (sub_13617( l_U253[l_U215], "mini_cards", "player_c_curse" )))
                        {
                            bVar11 = false;
                        }
                        break;
                        case 2:
                        if (NOT (sub_13617( l_U253[l_U215], "mini_cards", "player_d_curse" )))
                        {
                            bVar11 = false;
                        }
                        break;
                        case 3:
                        if (NOT (sub_13617( l_U253[l_U215], "mini_cards", "player_a_curse" )))
                        {
                            bVar11 = false;
                        }
                        break;
                    }
                    if (NOT (sub_13617( l_U261, "mini_cards", "player_b_curse" )))
                    {
                        bVar11 = false;
                    }
                    if (bVar11)
                    {
                        if (NOT (sub_29583( 1 )))
                        {
                            if (sub_32261() == 1)
                            {
                                if (NOT l_U117)
                                {
                                    l_U217 = 0;
                                }
                                else if (NOT l_U108[1])
                                {
                                    l_U217 = 1;
                                }
                                else if (NOT l_U108[2])
                                {
                                    l_U217 = 2;
                                }
                                else
                                {
                                    l_U217 = 3;
                                };;;
                                l_U221 = 16;
                                l_U214 = 15;
                            }
                            else
                            {
                                sub_37281();
                                if (l_U215 == 0)
                                {
                                    l_U214 = 5;
                                }
                                else
                                {
                                    l_U214 = 3;
                                }
                            }
                        }
                    }
                }
                break;
                case 15:
                if (l_U217 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        if (sub_13617( l_U261, "mini_cards", "player_b_celeb" ))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U261, "player_b_celeb", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                        }
                    }
                    if (IS_PLAYER_PLAYING( sub_809() ))
                    {
                        ADD_SCORE( sub_809(), 40 );
                    }
                    l_U220 = 6;
                    l_U126 = 1;
                    INCREMENT_INT_STAT( 179, 1 );
                    sub_37617( 0 );
                    l_U214 = 16;
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U217] )))
                {
                    switch (l_U217)
                    {
                        case 1:
                        if (sub_13617( l_U253[l_U217], "mini_cards", "player_c_celeb" ))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U217], "player_c_celeb", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                            l_U220 = 7;
                        }
                        break;
                        case 2:
                        if (sub_13617( l_U253[l_U217], "mini_cards", "player_d_celeb" ))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U217], "player_d_celeb", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                            l_U220 = 8;
                        }
                        break;
                        case 3:
                        if (sub_13617( l_U253[l_U217], "mini_cards", "player_a_celeb" ))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[l_U217], "player_a_celeb", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                            l_U220 = 9;
                        }
                        break;
                    }
                    I = GET_CHAR_MONEY( l_U253[l_U217] );
                    I += 40;
                    SET_CHAR_MONEY( l_U253[l_U217], I );
                }
                sub_37617( 1 );
                l_U214 = 16;;
                break;
                case 16:
                bVar11 = false;
                if (l_U217 == 0)
                {
                    if (IS_CHAR_PLAYING_ANIM( l_U261, "mini_cards", "player_b_celeb" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U261, "mini_cards", "player_b_celeb", ref fVar2 );
                        if (fVar2 > 0.20000000)
                        {
                            l_U220 = 6;
                        }
                    }
                    else
                    {
                        bVar11 = true;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U217] )))
                {
                    switch (l_U217)
                    {
                        case 1:
                        if (IS_CHAR_PLAYING_ANIM( l_U253[l_U217], "mini_cards", "player_c_celeb" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U253[l_U217], "mini_cards", "player_c_celeb", ref fVar2 );
                            if (fVar2 > 0.20000000)
                            {
                                l_U220 = 7;
                            }
                        }
                        else
                        {
                            bVar11 = true;
                        }
                        break;
                        case 2:
                        if (IS_CHAR_PLAYING_ANIM( l_U253[l_U217], "mini_cards", "player_d_celeb" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U253[l_U217], "mini_cards", "player_d_celeb", ref fVar2 );
                            if (fVar2 > 0.20000000)
                            {
                                l_U220 = 8;
                            }
                        }
                        else
                        {
                            bVar11 = true;
                        }
                        break;
                        case 3:
                        if (IS_CHAR_PLAYING_ANIM( l_U253[l_U217], "mini_cards", "player_a_celeb" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U253[l_U217], "mini_cards", "player_a_celeb", ref fVar2 );
                            if (fVar2 > 0.20000000)
                            {
                                l_U220 = 9;
                            }
                        }
                        else
                        {
                            bVar11 = true;
                        }
                        break;
                    }
                }
                if (bVar11)
                {
                    if (IS_PLAYER_PLAYING( sub_809() ))
                    {
                        if (IS_SCORE_GREATER( sub_809(), 9 ))
                        {
                            INCREMENT_INT_STAT( 178, 1 );
                            l_U214 = 17;
                        }
                        else
                        {
                            sub_793();
                        }
                    }
                }
                break;
                case 17:
                l_U220 = 4;
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HILO_H07" )))
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "HILO_H07", "NULL" );
                }
                if (IS_CONTROL_PRESSED( 2, 23 ))
                {
                    sub_793();
                }
                if (NOT l_U119)
                {
                    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 2, 137 )))
                    {
                        sub_28527();
                        l_U214 = 0;
                        l_U119 = 1;
                    }
                }
                else if ((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 137 ))))
                {
                    l_U119 = 0;
                }
                break;
                case 18:
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HILO_H06" )))
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "HILO_H06", "NULL" );
                }
                if (l_U118)
                {
                    if (NOT (IS_CONTROL_PRESSED( 2, 23 )))
                    {
                        l_U118 = 0;
                    }
                }
                else if (IS_CONTROL_PRESSED( 2, 23 ))
                {
                    if (NOT l_U130)
                    {
                        if (IS_PLAYER_PLAYING( sub_809() ))
                        {
                            ADD_SCORE( sub_809(), 10 );
                        }
                    }
                    sub_37617( 3 );
                    sub_793();
                }
                if (NOT l_U119)
                {
                    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 2, 137 )))
                    {
                        l_U214 = l_U218;
                        l_U119 = 1;
                    }
                }
                else if ((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 137 ))))
                {
                    l_U119 = 0;
                }
                break;
            }
            sub_10674();
            sub_13185();
            break;
        }
        if (DOES_CAM_EXIST( l_U131 ))
        {
            switch (l_U220)
            {
                case 0:
                SET_CAM_POS( l_U131, -1723.75700000, 335.63890000, 31.74371000 );
                SET_CAM_ROT( l_U131, -26.32302000, 0.00000000, 118.89870000 );
                SET_CAM_FOV( l_U131, 35.10003000 );
                break;
                case 1:
                SET_CAM_POS( l_U131, -1724.91000000, 334.27380000, 31.45155000 );
                SET_CAM_ROT( l_U131, -17.18805000, -0.00000000, 11.21668000 );
                SET_CAM_FOV( l_U131, 47.00000000 );
                break;
                case 2:
                SET_CAM_POS( l_U131, -1726.18200000, 335.05760000, 31.73027000 );
                SET_CAM_ROT( l_U131, -22.79190000, 0.00000000, -85.21043000 );
                SET_CAM_FOV( l_U131, 35.40002000 );
                break;
                case 3:
                SET_CAM_POS( l_U131, -1725.20600000, 336.07780000, 31.46417000 );
                SET_CAM_ROT( l_U131, -21.51490000, 0.00000000, -157.39920000 );
                SET_CAM_FOV( l_U131, 45.00000000 );
                break;
                case 4:
                SET_CAM_POS( l_U131, -1727.67300000, 329.98750000, 33.30178000 );
                SET_CAM_ROT( l_U131, -21.54110000, -0.00000000, -27.72064000 );
                SET_CAM_FOV( l_U131, 13.80007000 );
                break;
                case 5:
                SET_CAM_POS( l_U131, -1725.58500000, 334.73750000, 31.04428000 );
                SET_CAM_ROT( l_U131, -0.80494400, 0.00000000, -135.28520000 );
                SET_CAM_FOV( l_U131, 53.39998000 );
                break;
                case 6:
                SET_CAM_POS( l_U131, -1725.16400000, 335.20380000, 31.03148000 );
                SET_CAM_ROT( l_U131, 2.98150100, 0.00000000, -167.40780000 );
                SET_CAM_FOV( l_U131, 45.00000000 );
                break;
                case 7:
                SET_CAM_POS( l_U131, -1724.84600000, 334.60750000, 30.91607000 );
                SET_CAM_ROT( l_U131, 11.46128000, -0.00000000, 79.07866000 );
                SET_CAM_FOV( l_U131, 51.89998000 );
                break;
                case 8:
                SET_CAM_POS( l_U131, -1724.53100000, 334.27280000, 31.22203000 );
                SET_CAM_ROT( l_U131, -3.20644100, -0.00000000, 47.33685000 );
                SET_CAM_FOV( l_U131, 34.20003000 );
                break;
                case 9:
                SET_CAM_POS( l_U131, -1725.70300000, 334.37290000, 31.06510000 );
                SET_CAM_ROT( l_U131, 1.95017100, 0.00000000, -62.67105000 );
                SET_CAM_FOV( l_U131, 30.00004000 );
                break;
            }
        }
        if (l_U123)
        {
            for ( I = 0; I < 4; I++ )
            {
                if (DOES_OBJECT_EXIST( l_U224[I] ))
                {
                    DELETE_OBJECT( ref l_U224[I] );
                }
                CREATE_OBJECT( -195381842, l_U268[I]._fU0, l_U268[I]._fU4, l_U268[I]._fU8, ref l_U224[I], 1 );
                SET_OBJECT_HEADING( l_U224[I], l_U133[I] );
                FREEZE_OBJECT_POSITION( l_U224[I], 1 );
                SET_OBJECT_VISIBLE( l_U224[I], 0 );
                SET_OBJECT_COLLISION( l_U224[I], 0 );
                SET_OBJECT_ALPHA( l_U224[I], 255 );
                if (NOT (IS_CHAR_INJURED( l_U253[I] )))
                {
                    SET_CHAR_COLLISION( l_U253[I], 0 );
                    ATTACH_PED_TO_OBJECT( l_U253[I], l_U224[I], 0, 0.00000000, 0.00000000, 0.00000000, l_U133[I], 360.00000000, 0, 0 );
                }
            }
            if (DOES_OBJECT_EXIST( l_U229 ))
            {
                DELETE_OBJECT( ref l_U229 );
            }
            CREATE_OBJECT( -195381842, l_U265._fU0, l_U265._fU4, l_U265._fU8, ref l_U229, 1 );
            SET_OBJECT_HEADING( l_U229, l_U132 );
            FREEZE_OBJECT_POSITION( l_U229, 1 );
            SET_OBJECT_VISIBLE( l_U229, 0 );
            SET_OBJECT_COLLISION( l_U229, 0 );
            if (NOT (IS_CHAR_INJURED( l_U261 )))
            {
                SET_CHAR_COLLISION( l_U261, 0 );
                ATTACH_PED_TO_OBJECT( l_U261, l_U229, 0, 0.00000000, 0.00000000, 0.00000000, l_U132, 360.00000000, 0, 0 );
            }
            l_U123 = 0;
            l_U122 = 1;
        }
        if (l_U124)
        {
            for ( I = 0; I < 4; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U253[I] )))
                {
                    DETACH_PED( l_U253[I], 1 );
                    SET_CHAR_COLLISION( l_U253[I], 1 );
                }
                if (DOES_OBJECT_EXIST( l_U224[I] ))
                {
                    DELETE_OBJECT( ref l_U224[I] );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U261 )))
            {
                DETACH_PED( l_U261, 1 );
                SET_CHAR_COLLISION( l_U261, 1 );
            }
            l_U124 = 0;
            l_U122 = 0;
        }
        if (((NOT sub_40982()) AND (sub_41120())) AND (l_U222 == 0))
        {
            sub_6083();
            if (l_U157 == 1)
            {
                bVar11 = false;
            }
            else
            {
                bVar11 = true;
            }
            switch (l_U221)
            {
                case 1:
                if (NOT (IS_CHAR_INJURED( l_U253[0] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[0], "CARDS_ANTE_UP", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 2:
                if (l_U215 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_HIGHER_UNSURE", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[l_U215], "CARDS_HIGHER_UNSURE", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 3:
                if (l_U215 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_LOWER_UNSURE", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[l_U215], "CARDS_LOWER_UNSURE", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 4:
                if (l_U215 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_HIGHER", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[l_U215], "CARDS_HIGHER", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 5:
                if (l_U215 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_LOWER", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[l_U215], "CARDS_LOWER", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 6:
                if (l_U215 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_HIGHER_SURE", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[l_U215], "CARDS_HIGHER_SURE", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 7:
                if (l_U215 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_LOWER_SURE", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[l_U215], "CARDS_LOWER_SURE", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 8:
                if (l_U215 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_HIGHER_RECKLESS", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[l_U215], "CARDS_HIGHER_RECKLESS", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 9:
                if (l_U215 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_LOWER_RECKLESS", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[l_U215], "CARDS_LOWER_RECKLESS", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 10:
                if (l_U215 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_GENERIC_PAUSE", bVar11, 1, 2 );
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                        if (I == 0)
                        {
                            l_U221 = 11;
                        }
                        else
                        {
                            l_U221 = 99;
                        }
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[l_U215], "CARDS_GENERIC_PAUSE", bVar11, 1, 2 );
                    if (I == 0)
                    {
                        l_U221 = 11;
                    }
                    else
                    {
                        l_U221 = 99;
                    }
                }
                break;
                case 11:
                I = sub_43005();
                if (I == -1)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_CHOOSE_FASTER", bVar11, 1, 2 );
                        l_U221 = 12;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[I] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[I], "CARDS_CHOOSE_FASTER", bVar11, 1, 2 );
                    l_U221 = 12;
                }
                break;
                case 12:
                if (l_U215 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_CHOOSE_FASTER_RESP", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[l_U215], "CARDS_CHOOSE_FASTER_RESP", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 13:
                I = sub_43005();
                if (I == -1)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_TOUGH_CHOICE_SPEC", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[I] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[I], "CARDS_TOUGH_CHOICE_SPEC", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 14:
                if (l_U215 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_TOUGH_CHOICE_PLAYER", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[l_U215], "CARDS_TOUGH_CHOICE_PLAYER", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 15:
                I = sub_43005();
                if (I == -1)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_TOUGH_CHOICE_PLAYER", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[I] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[I], "CARDS_TOUGH_CHOICE_PLAYER", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 16:
                if (l_U217 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_WIN", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U217] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[l_U217], "CARDS_WIN", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 17:
                if (l_U215 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_LOSE", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[l_U215], "CARDS_LOSE", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 18:
                if (l_U215 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_GOOD_CHOICE", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[l_U215], "CARDS_GOOD_CHOICE", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 19:
                if (l_U215 == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U261 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U261, "CARDS_CARDS_TAUNT", bVar11, 1, 2 );
                        l_U221 = 99;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U253[l_U215] )))
                {
                    SAY_AMBIENT_SPEECH( l_U253[l_U215], "CARDS_CARDS_TAUNT", bVar11, 1, 2 );
                    l_U221 = 99;
                }
                break;
                case 99:
                l_U221 = 0;
                break;
            }
        }
        sub_6083();
        if (l_U115)
        {
            l_U115 = 0;
        }
        else
        {
            WAIT( 0 );
        }
    }
    return;
}

void sub_793()
{
    int I;

    CLEAR_HELP();
    if (IS_PLAYER_PLAYING( sub_809() ))
    {
        SET_PLAYER_CONTROL( sub_809(), 1 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_865() );
        SET_CHAR_COORDINATES( sub_865(), -1724.94900000, 333.52000000, 30.10240000 );
        SET_CHAR_HEADING( sub_865(), 7.90390000 );
        if (l_U122)
        {
            DETACH_PED( sub_865(), 1 );
            DELETE_OBJECT( ref l_U229 );
            SET_CHAR_COLLISION( sub_865(), 1 );
        }
        FREEZE_CHAR_POSITION( sub_865(), 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_865(), 0 );
        l_U261 = nil;
    }
    for ( I = 0; I < 4; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U253[I] )))
        {
            if (l_U122)
            {
                if (sub_1091( l_U253[I] ))
                {
                    DETACH_PED( l_U253[I], 1 );
                    SET_CHAR_COLLISION( l_U253[I], 1 );
                    FREEZE_CHAR_POSITION( l_U253[I], 0 );
                    DELETE_OBJECT( ref l_U224[I] );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U253[I] );
                    BLOCK_CHAR_GESTURE_ANIMS( l_U253[I], 0 );
                    switch (I)
                    {
                        case 0:
                        SET_CHAR_COORDINATES( l_U253[I], -1725.75700000, 332.78330000, 30.10200000 );
                        SET_CHAR_HEADING( l_U253[I], 278.09740000 );
                        break;
                        case 1:
                        SET_CHAR_COORDINATES( l_U253[I], -1724.23400000, 332.27780000, 30.10720000 );
                        SET_CHAR_HEADING( l_U253[I], 33.87670000 );
                        break;
                        case 2:
                        SET_CHAR_COORDINATES( l_U253[I], -1722.92300000, 334.12190000, 30.10760000 );
                        SET_CHAR_HEADING( l_U253[I], 106.35200000 );
                        break;
                    }
                    l_U253[I] = nil;
                }
            }
            else
            {
                FREEZE_CHAR_POSITION( l_U253[I], 0 );
            }
        }
    }
    sub_1499();
    for ( I = 0; I < l_U243; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U243[I] ))
        {
            DELETE_OBJECT( ref l_U243[I] );
        }
    }
    sub_2975();
    DISPLAY_RADAR( 1 );
    sub_3018();
    sub_3150();
    l_U118 = 1;
    return;
}

void sub_809()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_865()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1091(int iParam0)
{
    if (((iParam0 == l_U258) || (iParam0 == l_U259)) || (iParam0 == l_U260))
    {
        return 1;
    }
    return 0;
}

void sub_1499()
{
    int I;

    for ( I = 0; I < 4; I++ )
    {
        if (l_U122)
        {
            if (DOES_OBJECT_EXIST( l_U224[I] ))
            {
                DELETE_OBJECT( ref l_U224[I] );
            }
            CREATE_OBJECT( -195381842, l_U268[I]._fU0, l_U268[I]._fU4, l_U268[I]._fU8, ref l_U224[I], 1 );
            SET_OBJECT_HEADING( l_U224[I], l_U133[I] );
            FREEZE_OBJECT_POSITION( l_U224[I], 1 );
            SET_OBJECT_VISIBLE( l_U224[I], 0 );
            SET_OBJECT_COLLISION( l_U224[I], 0 );
            SET_OBJECT_ALPHA( l_U224[I], 255 );
        }
        if (IS_CHAR_INJURED( l_U253[I] ))
        {
            if ((I == 0) || (I == 2))
            {
                CREATE_CHAR( 26, 1737188996, l_U268[I]._fU0, l_U268[I]._fU4, l_U268[I]._fU8, ref l_U253[I], 1 );
            }
            else
            {
                CREATE_CHAR( 26, -2130437771, l_U268[I]._fU0, l_U268[I]._fU4, l_U268[I]._fU8, ref l_U253[I], 1 );
            }
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U253[I] );
            SET_ROOM_FOR_CHAR_BY_KEY( l_U253[I], l_U158 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U253[I], 6 );
            SET_CHAR_MAX_HEALTH( l_U253[I], 5000 );
            SET_CHAR_HEALTH( l_U253[I], 5000 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[I], "player_c_place_bet", "mini_cards", 1000.00000000, 0, 0, 0, 1, -1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U253[I] )))
        {
            FREEZE_CHAR_POSITION( l_U253[I], 1 );
            SET_CHAR_COORDINATES( l_U253[I], l_U268[I]._fU0, l_U268[I]._fU4, l_U268[I]._fU8 );
            SET_CHAR_HEADING( l_U253[I], l_U133[I] );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U253[I], 1 );
            if (l_U122)
            {
                SET_CHAR_COLLISION( l_U253[I], 0 );
                ATTACH_PED_TO_OBJECT( l_U253[I], l_U224[I], 0, 0.00000000, 0.00000000, 0.00000000, l_U133[I], 360.00000000, 0, 0 );
            }
            BLOCK_CHAR_GESTURE_ANIMS( l_U253[I], 1 );
        }
        switch (I)
        {
            case 0:
            SET_AMBIENT_VOICE_NAME( l_U253[I], "M_Y_GLOST_01_GANG_01" );
            break;
            case 1:
            SET_AMBIENT_VOICE_NAME( l_U253[I], "M_Y_GLOST_03_FULL_01" );
            break;
            case 2:
            SET_AMBIENT_VOICE_NAME( l_U253[I], "M_Y_GLOST_04_FULL_01" );
            break;
            case 3:
            SET_AMBIENT_VOICE_NAME( l_U253[I], "M_Y_GLOST_05_FULL_01" );
            break;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U253[0] )))
    {
        if (NOT (DOES_OBJECT_EXIST( l_U242 )))
        {
            CLEAR_AREA( l_U268[0]._fU0, l_U268[0]._fU4, l_U268[0]._fU8, 3.00000000, 0 );
            CREATE_OBJECT( -900232837, l_U268[0]._fU0, l_U268[0]._fU4, l_U268[0]._fU8 + 1.50000000, ref l_U242, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U242, l_U262 );
            ATTACH_OBJECT_TO_PED( l_U242, l_U253[0], 1219, l_U321, l_U324, 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U253[1] )))
    {
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[1], "player_c_place_bet", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U253[2] )))
    {
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[2], "player_d_place_bet", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U253[3] )))
    {
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[3], "player_a_place_bet", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
    }
    return;
}

void sub_2975()
{
    l_U157 = 0;
    l_U219 = 0;
    l_U118 = 1;
    return;
}

void sub_3018()
{
    if (l_U114)
    {
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (DOES_CAM_EXIST( l_U131 ))
        {
            DESTROY_CAM( l_U131 );
        }
        END_CAM_COMMANDS( ref l_U213 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        if (IS_PLAYER_PLAYING( sub_809() ))
        {
            SET_CAM_BEHIND_PED( sub_865() );
        }
        l_U114 = 0;
    }
    return;
}

void sub_3150()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U12304 = 0;
    if (g_U26739._fU0 == 19)
    {
        g_U12303 = 0;
        sub_3201();
        return;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU20 == 8)
        {
            g_U26739._fU20 = 3;
        }
    }
    else if (NOT (g_U26739._fU4 == 12))
    {
        if (g_U26739._fU16 == 8)
        {
            g_U26739._fU16 = 3;
        }
    }
    else
    {
        return;
    }
    g_U26739._fU28 = 1;
    return;
}

void sub_3201()
{
    g_U26737._fU4 = 1;
    return;
}

void sub_3346()
{
    sub_3356( 0 );
    sub_4129( 2, l_U264 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3356(boolean bParam0)
{
    int I;

    MARK_MODEL_AS_NO_LONGER_NEEDED( 1737188996 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2130437771 );
    REMOVE_ANIMS( "mini_cards" );
    for ( I = 0; I < 4; I++ )
    {
        if (DOES_CHAR_EXIST( l_U253[I] ))
        {
            if (NOT (sub_1091( l_U253[I] )))
            {
                if (bParam0)
                {
                    DELETE_CHAR( ref l_U253[I] );
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U253[I] );
                }
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U242 ))
    {
        if (bParam0)
        {
            DELETE_OBJECT( ref l_U242 );
        }
        else
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U242 );
        }
    }
    for ( I = 0; I < l_U224; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U224[I] ))
        {
            if (bParam0)
            {
                DELETE_OBJECT( ref l_U224[I] );
            }
            else
            {
                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U224[I] );
            }
        }
    }
    for ( I = 0; I < l_U230; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U230[I] ))
        {
            if (bParam0)
            {
                DELETE_OBJECT( ref l_U230[I] );
            }
            else
            {
                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U230[I] );
            }
        }
    }
    for ( I = 0; I < l_U243; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U243[I] ))
        {
            if (bParam0)
            {
                DELETE_OBJECT( ref l_U243[I] );
            }
            else
            {
                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U243[I] );
            }
        }
    }
    for ( I = 0; I < l_U248; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U248[I] ))
        {
            if (bParam0)
            {
                DELETE_OBJECT( ref l_U248[I] );
            }
            else
            {
                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U248[I] );
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U241 ))
    {
        if (bParam0)
        {
            DELETE_OBJECT( ref l_U241 );
        }
        else
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U241 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U229 ))
    {
        if (bParam0)
        {
            DELETE_OBJECT( ref l_U229 );
        }
        else
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U229 );
        }
    }
    for ( I = 0; I < l_U243; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U243[I] ))
        {
            DELETE_OBJECT( ref l_U243[I] );
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1607374040 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1910738573 );
    return;
}

void sub_4129(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U10470 ))
        {
            if ((g_U10468 == iParam0) AND (l_U103))
            {
                StrCopy( ref g_U10470, "", 16 );
                g_U10468 = 0;
                g_U10469 = 0;
                g_U10474 = nil;
                l_U103 = 0;
                if (l_U101)
                {
                    sub_4356();
                    l_U101 = 0;
                }
            }
            if (l_U102)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_809(), 1 );
                l_U102 = 0;
            }
            if (l_U100)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U100 = 0;
            }
        }
    }
    return;
}

void sub_4356()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

int sub_5047()
{
    int iVar2;
    int iVar3;

    if (IS_PLAYER_PLAYING( sub_809() ))
    {
        GET_INTERIOR_AT_COORDS( -1731.77000000, 331.04000000, 32.24000000, ref iVar2 );
        GET_INTERIOR_FROM_CHAR( sub_865(), ref iVar3 );
        if (iVar2 == iVar3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_5148()
{
    sub_5158( 0 );
    sub_2975();
    sub_3356( 0 );
    l_U157 = 0;
    return;
}

void sub_5158(boolean bParam0)
{
    int I;
    int iVar4;

    for ( I = 0; I < 4; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U253[I] )))
        {
            if (l_U122)
            {
                DETACH_PED( l_U253[I], 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U253[I], 0 );
                SET_CHAR_COLLISION( l_U253[I], 1 );
                FREEZE_CHAR_POSITION( l_U253[I], 0 );
                GET_CHAR_HEALTH( l_U253[I], ref iVar4 );
                if (iVar4 < 4900)
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U253[I] );
                    SET_CHAR_HEALTH( l_U253[I], 1 );
                }
                else
                {
                    SET_CHAR_MAX_HEALTH( l_U253[I], 200 );
                    SET_CHAR_HEALTH( l_U253[I], iVar4 - 4800 );
                    TASK_STAND_STILL( l_U253[I], 1 );
                    if (NOT sub_5403())
                    {
                        switch (I)
                        {
                            case 0:
                            GIVE_WEAPON_TO_CHAR( l_U253[I], 7, 99, 0 );
                            break;
                            case 1:
                            GIVE_WEAPON_TO_CHAR( l_U253[I], 3, 99, 0 );
                            break;
                            case 2:
                            GIVE_WEAPON_TO_CHAR( l_U253[I], 27, 99, 0 );
                            break;
                        }
                    }
                    if (IS_PLAYER_PLAYING( sub_809() ))
                    {
                        if ((sub_5403()) || (l_U125))
                        {
                            SET_CHAR_RELATIONSHIP( l_U253[I], 5, 0 );
                        }
                    }
                }
            }
        }
        if (DOES_OBJECT_EXIST( l_U224[I] ))
        {
            DELETE_OBJECT( ref l_U224[I] );
        }
        if (DOES_CHAR_EXIST( l_U253[I] ))
        {
            FREEZE_CHAR_POSITION( l_U253[I], 0 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U253[I] );
        }
        l_U253[I] = nil;
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U248[I] ))
        {
            FREEZE_OBJECT_POSITION( l_U248[I], 0 );
        }
    }
    for ( I = 0; I < l_U243; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U243[I] ))
        {
            if (IS_OBJECT_ATTACHED( l_U243[I] ))
            {
                DELETE_OBJECT( ref l_U243[I] );
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U241 ))
    {
        DELETE_OBJECT( ref l_U241 );
    }
    if (DOES_OBJECT_EXIST( l_U242 ))
    {
        DETACH_OBJECT( l_U242, 1 );
    }
    if (bParam0)
    {
        sub_3346();
    }
    return;
}

int sub_5403()
{
    if (IS_PLAYER_PLAYING( sub_809() ))
    {
        if (IS_CHAR_IN_AREA_3D( sub_865(), -1725.95900000, 334.66050000, 30.53200000, -1724.18400000, 335.53550000, 32.20700000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_6083()
{
    int I;

    for ( I = 0; I < l_U253; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U253[I] )))
        {
            BLOCK_CHAR_GESTURE_ANIMS( l_U253[I], 1 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U261 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( l_U261, 1 );
    }
    return;
}

void sub_6462()
{
    if (NOT (DOES_OBJECT_EXIST( l_U248[0] )))
    {
        CREATE_OBJECT_NO_OFFSET( -1005803045, -1724.55900000, 333.90570000, 30.59480000, ref l_U248[0], 1 );
        SET_OBJECT_ROTATION( l_U248[0], 0.00000000, 0.00000000, 42.75000000 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U248[0], l_U262 );
        SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( l_U248[0], 1 );
    }
    else
    {
        SET_OBJECT_COORDINATES( l_U248[0], -1724.55900000, 333.90570000, 30.59480000 );
        SET_OBJECT_ROTATION( l_U248[0], 0.00000000, 0.00000000, 42.75000000 );
    }
    if (NOT (DOES_OBJECT_EXIST( l_U248[1] )))
    {
        CREATE_OBJECT_NO_OFFSET( -1005803045, -1723.97800000, 334.86820000, 30.59480000, ref l_U248[1], 1 );
        SET_OBJECT_ROTATION( l_U248[1], 0.00000000, 0.00000000, 85.50000000 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U248[1], l_U262 );
        FREEZE_OBJECT_POSITION( l_U248[1], 1 );
        SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( l_U248[1], 1 );
    }
    else
    {
        SET_OBJECT_COORDINATES( l_U248[1], -1723.97800000, 334.86820000, 30.59480000 );
        SET_OBJECT_ROTATION( l_U248[1], 0.00000000, 0.00000000, 85.50000000 );
    }
    if (NOT (DOES_OBJECT_EXIST( l_U248[2] )))
    {
        CREATE_OBJECT_NO_OFFSET( -1005803045, -1724.46000000, 335.85570000, 30.59480000, ref l_U248[2], 1 );
        SET_OBJECT_ROTATION( l_U248[2], 0.00000000, 0.00000000, 150.25000000 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U248[2], l_U262 );
        FREEZE_OBJECT_POSITION( l_U248[2], 1 );
        SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( l_U248[2], 1 );
    }
    else
    {
        SET_OBJECT_COORDINATES( l_U248[2], -1724.46000000, 335.85570000, 30.59480000 );
        SET_OBJECT_ROTATION( l_U248[2], 0.00000000, 0.00000000, 150.25000000 );
    }
    return;
}

void sub_7089(int iParam0)
{
    if (NOT (l_U157 == iParam0))
    {
        l_U157 = iParam0;
        l_U115 = 1;
        SETTIMERA( 0 );
    }
    return;
}

void sub_7146()
{
    float fVar2;
    boolean bVar3;
    boolean bVar4;
    int I;

    if (NOT (DOES_OBJECT_EXIST( l_U243[0] )))
    {
        if (NOT (IS_CHAR_INJURED( l_U253[1] )))
        {
            if (l_U128)
            {
                if (IS_CHAR_PLAYING_ANIM( l_U253[1], "mini_cards", "player_c_place_bet" ))
                {
                    CREATE_OBJECT( sub_7261(), l_U327[0]._fU0, l_U327[0]._fU4, l_U327[0]._fU8, ref l_U243[0], 1 );
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U243[0], l_U262 );
                    ATTACH_OBJECT_TO_PED( l_U243[0], l_U253[1], 13744, l_U340, l_U343._fU0 + 3.14000000, l_U343._fU4, l_U343._fU8, 0 );
                }
            }
            else
            {
                CREATE_OBJECT( sub_7261(), l_U327[0]._fU0, l_U327[0]._fU4, l_U327[0]._fU8, ref l_U243[0], 1 );
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U243[0], l_U262 );
                GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 360.00000000, ref fVar2 );
                SET_OBJECT_HEADING( l_U243[0], fVar2 );
            }
        }
    }
    else if (IS_OBJECT_ATTACHED( l_U243[0] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U253[1] )))
        {
            bVar4 = false;
            if (IS_CHAR_PLAYING_ANIM( l_U253[1], "mini_cards", "player_c_place_bet" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U253[1], "mini_cards", "player_c_place_bet", ref fVar2 );
                if (fVar2 > l_U145[0])
                {
                    GET_OBJECT_COORDINATES( l_U243[0], ref l_U327[0]._fU0, ref l_U327[0]._fU4, ref fVar2 );
                    bVar4 = true;
                }
            }
            else
            {
                bVar4 = true;
            }
            if (bVar4)
            {
                DETACH_OBJECT( l_U243[0], 1 );
                SET_OBJECT_COORDINATES( l_U243[0], l_U327[0]._fU0, l_U327[0]._fU4, l_U327[0]._fU8 );
                GET_OBJECT_HEADING( l_U243[0], ref fVar2 );
                SET_OBJECT_ROTATION( l_U243[0], 0.00000000, 0.00000000, fVar2 );
                SET_OBJECT_COLLISION( l_U243[0], 0 );
                FREEZE_OBJECT_POSITION( l_U243[0], 1 );
            }
        }
    }
    if (NOT (DOES_OBJECT_EXIST( l_U243[1] )))
    {
        if (NOT (IS_CHAR_INJURED( l_U253[2] )))
        {
            if (l_U128)
            {
                if (IS_CHAR_PLAYING_ANIM( l_U253[2], "mini_cards", "player_d_place_bet" ))
                {
                    CREATE_OBJECT( sub_7261(), l_U327[1]._fU0, l_U327[1]._fU4, l_U327[1]._fU8, ref l_U243[1], 1 );
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U243[1], l_U262 );
                    ATTACH_OBJECT_TO_PED( l_U243[1], l_U253[2], 13744, l_U340, l_U343._fU0, l_U343._fU4, l_U343._fU8, 0 );
                }
            }
            else
            {
                CREATE_OBJECT( sub_7261(), l_U327[1]._fU0, l_U327[1]._fU4, l_U327[1]._fU8, ref l_U243[1], 1 );
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U243[1], l_U262 );
                GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 360.00000000, ref fVar2 );
                SET_OBJECT_HEADING( l_U243[1], fVar2 );
            }
        }
    }
    else if (IS_OBJECT_ATTACHED( l_U243[1] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U253[2] )))
        {
            bVar4 = false;
            if (IS_CHAR_PLAYING_ANIM( l_U253[2], "mini_cards", "player_d_place_bet" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U253[2], "mini_cards", "player_d_place_bet", ref fVar2 );
                if (fVar2 > l_U145[1])
                {
                    GET_OBJECT_COORDINATES( l_U243[1], ref l_U327[1]._fU0, ref l_U327[1]._fU4, ref fVar2 );
                    bVar4 = true;
                }
            }
            else
            {
                bVar4 = true;
            }
            if (bVar4)
            {
                DETACH_OBJECT( l_U243[1], 1 );
                SET_OBJECT_COORDINATES( l_U243[1], l_U327[1]._fU0, l_U327[1]._fU4, l_U327[1]._fU8 );
                GET_OBJECT_HEADING( l_U243[1], ref fVar2 );
                SET_OBJECT_ROTATION( l_U243[1], 180, 0.00000000, fVar2 );
                SET_OBJECT_COLLISION( l_U243[1], 0 );
                FREEZE_OBJECT_POSITION( l_U243[1], 1 );
            }
        }
    }
    if (NOT (DOES_OBJECT_EXIST( l_U243[2] )))
    {
        if (NOT (IS_CHAR_INJURED( l_U253[3] )))
        {
            if (l_U128)
            {
                if (IS_CHAR_PLAYING_ANIM( l_U253[3], "mini_cards", "player_a_place_bet" ))
                {
                    CREATE_OBJECT( sub_7261(), l_U327[2]._fU0, l_U327[2]._fU4, l_U327[2]._fU8, ref l_U243[2], 1 );
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U243[2], l_U262 );
                    ATTACH_OBJECT_TO_PED( l_U243[2], l_U253[3], 13744, l_U340, l_U343._fU0 + 3.14000000, l_U343._fU4, l_U343._fU8, 0 );
                }
            }
            else
            {
                CREATE_OBJECT( sub_7261(), l_U327[2]._fU0, l_U327[2]._fU4, l_U327[2]._fU8, ref l_U243[2], 1 );
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U243[2], l_U262 );
                GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 360.00000000, ref fVar2 );
                SET_OBJECT_HEADING( l_U243[2], fVar2 );
            }
        }
    }
    else if (IS_OBJECT_ATTACHED( l_U243[2] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U253[3] )))
        {
            bVar4 = false;
            if (IS_CHAR_PLAYING_ANIM( l_U253[3], "mini_cards", "player_a_place_bet" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U253[3], "mini_cards", "player_a_place_bet", ref fVar2 );
                if (fVar2 > l_U145[2])
                {
                    GET_OBJECT_COORDINATES( l_U243[2], ref l_U327[2]._fU0, ref l_U327[2]._fU4, ref fVar2 );
                    bVar4 = true;
                }
            }
            else
            {
                bVar4 = true;
            }
            if (bVar4)
            {
                DETACH_OBJECT( l_U243[2], 1 );
                SET_OBJECT_COORDINATES( l_U243[2], l_U327[2]._fU0, l_U327[2]._fU4, l_U327[2]._fU8 );
                GET_OBJECT_HEADING( l_U243[2], ref fVar2 );
                SET_OBJECT_ROTATION( l_U243[2], 0.00000000, 0.00000000, fVar2 );
                SET_OBJECT_COLLISION( l_U243[2], 0 );
                FREEZE_OBJECT_POSITION( l_U243[2], 1 );
            }
        }
    }
    if (NOT (DOES_OBJECT_EXIST( l_U243[3] )))
    {
        if (NOT (IS_CHAR_INJURED( l_U261 )))
        {
            if (l_U128)
            {
                if (IS_CHAR_PLAYING_ANIM( l_U261, "mini_cards", "player_b_place_bet" ))
                {
                    CREATE_OBJECT( sub_7261(), l_U327[3]._fU0, l_U327[3]._fU4, l_U327[3]._fU8, ref l_U243[3], 1 );
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U243[3], l_U262 );
                    ATTACH_OBJECT_TO_PED( l_U243[3], l_U261, 13744, l_U340, l_U343._fU0, l_U343._fU4, l_U343._fU8, 0 );
                }
            }
            else
            {
                CREATE_OBJECT( sub_7261(), l_U327[3]._fU0, l_U327[3]._fU4, l_U327[3]._fU8, ref l_U243[3], 1 );
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U243[3], l_U262 );
                GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 360.00000000, ref fVar2 );
                SET_OBJECT_HEADING( l_U243[3], fVar2 );
            }
        }
    }
    else if (IS_OBJECT_ATTACHED( l_U243[3] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U261 )))
        {
            bVar4 = false;
            if (IS_CHAR_PLAYING_ANIM( l_U261, "mini_cards", "player_b_place_bet" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U261, "mini_cards", "player_b_place_bet", ref fVar2 );
                if (fVar2 > l_U145[3])
                {
                    GET_OBJECT_COORDINATES( l_U243[3], ref l_U327[3]._fU0, ref l_U327[3]._fU4, ref fVar2 );
                    bVar4 = true;
                }
            }
            else
            {
                bVar4 = true;
            }
            if (bVar4)
            {
                DETACH_OBJECT( l_U243[3], 1 );
                SET_OBJECT_COORDINATES( l_U243[3], l_U327[3]._fU0, l_U327[3]._fU4, l_U327[3]._fU8 );
                GET_OBJECT_HEADING( l_U243[3], ref fVar2 );
                SET_OBJECT_ROTATION( l_U243[3], 180.00000000, 0.00000000, fVar2 );
                SET_OBJECT_COLLISION( l_U243[3], 0 );
                FREEZE_OBJECT_POSITION( l_U243[3], 1 );
            }
        }
    }
    for ( I = 0; I < l_U243; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U243[I] ))
        {
            SET_OBJECT_VISIBLE( l_U243[I], 1 );
            SET_OBJECT_ALPHA( l_U243[I], 255 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U243[I], l_U262 );
        }
    }
    bVar3 = false;
    if (NOT (IS_CHAR_INJURED( l_U253[1] )))
    {
        if (IS_CHAR_PLAYING_ANIM( l_U253[1], "mini_cards", "player_c_celeb" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( l_U253[1], "mini_cards", "player_c_celeb", ref fVar2 );
            if (fVar2 > l_U150[0])
            {
                bVar3 = true;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U253[2] )))
    {
        if (IS_CHAR_PLAYING_ANIM( l_U253[2], "mini_cards", "player_d_celeb" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( l_U253[2], "mini_cards", "player_d_celeb", ref fVar2 );
            if (fVar2 > l_U150[1])
            {
                bVar3 = true;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U253[3] )))
    {
        if (IS_CHAR_PLAYING_ANIM( l_U253[3], "mini_cards", "player_a_celeb" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( l_U253[3], "mini_cards", "player_a_celeb", ref fVar2 );
            if (fVar2 > l_U150[2])
            {
                bVar3 = true;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U261 )))
    {
        if (IS_CHAR_PLAYING_ANIM( l_U261, "mini_cards", "player_b_celeb" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( l_U261, "mini_cards", "player_b_celeb", ref fVar2 );
            if (fVar2 > l_U150[3])
            {
                bVar3 = true;
            }
        }
    }
    if (bVar3)
    {
        for ( I = 0; I < l_U243; I++ )
        {
            if (DOES_OBJECT_EXIST( l_U243[I] ))
            {
                DELETE_OBJECT( ref l_U243[I] );
            }
        }
    }
    return;
}

int sub_7261()
{
    return -1910738573;
}

void sub_10674()
{
    float fVar2;
    float fVar3;
    vector vVar4;
    vector vVar7;
    int I;

    if (l_U113)
    {
        if (NOT l_U121)
        {
            if (NOT (IS_CHAR_INJURED( l_U253[0] )))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[0], "mini_cards", "dealer_deal" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[0], "dealer_deal", "mini_cards", 4.00000000, 0, 0, 0, 1, -1 );
                }
                else
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U253[0], "mini_cards", "dealer_deal", ref fVar2 );
                    if (fVar2 > l_U144)
                    {
                        l_U120 = 1;
                    }
                }
            }
            if (l_U120)
            {
                if (NOT (DOES_OBJECT_EXIST( l_U241 )))
                {
                    sub_10920();
                }
                else
                {
                    GET_OBJECT_COORDINATES( l_U241, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                    vVar7 = {l_U318 - vVar4};
                    fVar3 = VMAG( vVar7 );
                    vVar7 = {vVar7 / fVar3};
                    GET_FRAME_TIME( ref fVar2 );
                    fVar2 *= l_U139;
                    if (fVar2 < fVar3)
                    {
                        vVar7 = {vVar7 * fVar2};
                        vVar4 = {vVar4 + vVar7};
                        SET_OBJECT_COORDINATES( l_U241, vVar4.x, vVar4.y, vVar4.z );
                        GET_OBJECT_HEADING( l_U241, ref fVar2 );
                        GET_FRAME_TIME( ref fVar3 );
                        fVar2 += fVar3 * l_U140;
                        SET_OBJECT_HEADING( l_U241, fVar2 );
                    }
                    else if (sub_12188( l_U241 ))
                    {
                        PLAY_SOUND_FROM_OBJECT( -1, "CARDS_LAND", l_U241 );
                    }
                    SET_OBJECT_COORDINATES( l_U241, l_U315._fU0, l_U315._fU4, l_U315._fU8 );
                    sub_12734( l_U241 );
                    l_U241 = nil;
                    l_U121 = 1;;
                }
            }
        }
        else
        {
            l_U113 = 0;
        }
    }
    for ( I = 0; I < 10; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U230[I] ))
        {
            SET_OBJECT_ALPHA( l_U230[I], 255 );
            SET_OBJECT_COORDINATES( l_U230[I], l_U281[I]._fU0, l_U281[I]._fU4, l_U281[I]._fU8 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U242 ))
    {
        SET_OBJECT_ALPHA( l_U242, 255 );
        SET_OBJECT_VISIBLE( l_U242, 1 );
    }
    if (DOES_OBJECT_EXIST( l_U241 ))
    {
        SET_OBJECT_ALPHA( l_U241, 255 );
        SET_OBJECT_VISIBLE( l_U241, 1 );
    }
    return;
}

void sub_10920()
{
    unknown uVar2;

    l_U159++;
    if (l_U159 >= 52)
    {
        l_U159 = 0;
    }
    CREATE_OBJECT( sub_10973( l_U160[l_U159] ), l_U312._fU0, l_U312._fU4, l_U312._fU8, ref l_U241, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U241, l_U262 );
    SET_OBJECT_ALPHA( l_U241, 255 );
    SET_OBJECT_COLLISION( l_U241, 0 );
    FREEZE_OBJECT_POSITION( l_U241, 1 );
    if (sub_12188( l_U241 ))
    {
        PLAY_SOUND_FROM_OBJECT( -1, "CARDS_DEAL", l_U241 );
    }
    GENERATE_RANDOM_FLOAT_IN_RANGE( l_U141 * -1.00000000, l_U141, ref uVar2 );
    l_U318._fU0 = l_U315._fU0 + uVar2;
    GENERATE_RANDOM_FLOAT_IN_RANGE( l_U141 * -1.00000000, l_U141, ref uVar2 );
    l_U318._fU4 = l_U315._fU4 + uVar2;
    l_U318._fU8 = l_U315._fU8;
    GENERATE_RANDOM_FLOAT_IN_RANGE( l_U142 * -1.00000000, l_U142, ref l_U140 );
    return;
}

int sub_10973(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return -103054830;
        break;
        case 1:
        return -146899756;
        break;
        case 2:
        return 1999436975;
        break;
        case 3:
        return -2123165381;
        break;
        case 4:
        return -1812613568;
        break;
        case 5:
        return -1640445242;
        break;
        case 6:
        return -1206230575;
        break;
        case 7:
        return -914684778;
        break;
        case 8:
        return 1690123032;
        break;
        case 9:
        return 1094284053;
        break;
        case 10:
        return -1117648536;
        break;
        case 11:
        return 1573243441;
        break;
        case 12:
        return 2006318541;
        break;
        case 13:
        return 244663964;
        break;
        case 14:
        return 1927450389;
        break;
        case 15:
        return -591371569;
        break;
        case 16:
        return -819345502;
        break;
        case 17:
        return -938231434;
        break;
        case 18:
        return -1262120230;
        break;
        case 19:
        return 596111449;
        break;
        case 20:
        return 374691316;
        break;
        case 21:
        return 1095609328;
        break;
        case 22:
        return -849318919;
        break;
        case 23:
        return 1922174628;
        break;
        case 24:
        return -223113499;
        break;
        case 25:
        return -924632251;
        break;
        case 26:
        return -2120702669;
        break;
        case 27:
        return 1828813841;
        break;
        case 28:
        return 2145493457;
        break;
        case 29:
        return 1907819900;
        break;
        case 30:
        return -1548981914;
        break;
        case 31:
        return -1777938917;
        break;
        case 32:
        return -925813841;
        break;
        case 33:
        return -1164798158;
        break;
        case 34:
        return -379423535;
        break;
        case 35:
        return 1119869361;
        break;
        case 36:
        return 533815722;
        break;
        case 37:
        return 1177103757;
        break;
        case 38:
        return 294569253;
        break;
        case 39:
        return -379499325;
        break;
        case 40:
        return 1823658912;
        break;
        case 41:
        return -1007156691;
        break;
        case 42:
        return -164764008;
        break;
        case 43:
        return 1060272288;
        break;
        case 44:
        return 830528829;
        break;
        case 45:
        return -1871832294;
        break;
        case 46:
        return -1025966097;
        break;
        case 47:
        return -335916495;
        break;
        case 48:
        return -1158922852;
        break;
        case 49:
        return 1775750578;
        break;
        case 50:
        return -1917774488;
        break;
        case 51:
        return 1088945107;
        break;
    }
    return 0;
}

int sub_12188(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (IS_PLAYER_PLAYING( sub_809() ))
    {
        if (DOES_OBJECT_EXIST( uParam0 ))
        {
            GET_OBJECT_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            if (LOCATE_CHAR_ON_FOOT_3D( sub_865(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 3.00000000, 3.00000000, 2.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_12734(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;

    if (DOES_OBJECT_EXIST( l_U230[9] ))
    {
        DELETE_OBJECT( ref l_U230[9] );
    }
    for ( I = 0; I < 10; I++ )
    {
        iVar4 = 9;
        iVar4 -= I;
        iVar5 = iVar4 - 1;
        if (iVar4 > 0)
        {
            l_U230[iVar4] = l_U230[iVar5];
            l_U281[iVar4] = {l_U281[iVar5]};
            l_U281[iVar4]._fU8 = l_U315._fU8 - (l_U143 * iVar4);
        }
    }
    l_U230[0] = uParam0;
    l_U281[0] = {l_U318};
    l_U281[0]._fU8 = l_U315._fU8;
    return;
}

void sub_13185()
{
    int I;

    for ( I = 0; I < 4; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U253[I] )))
        {
            if (NOT (IS_PED_RAGDOLL( l_U253[I] )))
            {
                SET_CHAR_HEADING( l_U253[I], l_U133[I] );
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U261 )))
    {
        if (NOT (IS_PED_RAGDOLL( l_U261 )))
        {
            SET_CHAR_HEADING( l_U261, l_U132 );
        }
    }
    if (l_U122)
    {
        for ( I = 0; I < 4; I++ )
        {
            if (DOES_OBJECT_EXIST( l_U224[I] ))
            {
                SET_OBJECT_COORDINATES( l_U224[I], l_U268[I]._fU0, l_U268[I]._fU4, l_U268[I]._fU8 );
                SET_OBJECT_HEADING( l_U224[I], l_U133[I] );
            }
        }
        if (DOES_OBJECT_EXIST( l_U229 ))
        {
            SET_OBJECT_COORDINATES( l_U229, l_U265._fU0, l_U265._fU4, l_U265._fU8 );
            SET_OBJECT_HEADING( l_U229, l_U132 );
        }
    }
    return;
}

void sub_13552()
{
    if (NOT (IS_CHAR_INJURED( l_U253[0] )))
    {
        if (sub_13617( l_U253[0], "mini_cards", "dealer_deal" ))
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[0], "mini_cards", "dealer_idle" )))
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[0], "dealer_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U253[1] )))
    {
        if ((((sub_13617( l_U253[1], "mini_cards", "player_c_celeb" )) AND (sub_13617( l_U253[1], "mini_cards", "player_c_curse" ))) AND (sub_13617( l_U253[1], "mini_cards", "player_c_decide" ))) AND (sub_13617( l_U253[1], "mini_cards", "player_c_place_bet" )))
        {
            if (l_U108[1])
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[1], "mini_cards", "player_c_out_idle" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[1], "player_c_out_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
                }
            }
            else if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[1], "mini_cards", "player_c_in_idle" )))
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[1], "player_c_in_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U253[2] )))
    {
        if ((((sub_13617( l_U253[2], "mini_cards", "player_d_celeb" )) AND (sub_13617( l_U253[2], "mini_cards", "player_d_curse" ))) AND (sub_13617( l_U253[2], "mini_cards", "player_d_decide" ))) AND (sub_13617( l_U253[2], "mini_cards", "player_d_place_bet" )))
        {
            if (l_U108[2])
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[2], "mini_cards", "player_d_out_idle" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[2], "player_d_out_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
                }
            }
            else if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[2], "mini_cards", "player_d_in_idle" )))
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[2], "player_d_in_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U253[3] )))
    {
        if ((((sub_13617( l_U253[3], "mini_cards", "player_a_celeb" )) AND (sub_13617( l_U253[3], "mini_cards", "player_a_curse" ))) AND (sub_13617( l_U253[3], "mini_cards", "player_a_decide" ))) AND (sub_13617( l_U253[3], "mini_cards", "player_a_place_bet" )))
        {
            if (l_U108[3])
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[3], "mini_cards", "player_a_out_idle" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[3], "player_a_out_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
                }
            }
            else if (NOT (IS_CHAR_PLAYING_ANIM( l_U253[3], "mini_cards", "player_a_in_idle" )))
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U253[3], "player_a_in_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U261 )))
    {
        if ((((sub_13617( l_U261, "mini_cards", "player_b_celeb" )) AND (sub_13617( l_U261, "mini_cards", "player_b_curse" ))) AND (sub_13617( l_U261, "mini_cards", "player_b_decide" ))) AND (sub_13617( l_U261, "mini_cards", "player_b_place_bet" )))
        {
            if (l_U117)
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U261, "mini_cards", "player_b_out_idle" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U261, "player_b_out_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
                }
            }
            else if (NOT (IS_CHAR_PLAYING_ANIM( l_U261, "mini_cards", "player_b_in_idle" )))
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U261, "player_b_in_idle", "mini_cards", 4.00000000, 1, 0, 0, 0, -1 );
            }
        }
    }
    return;
}

int sub_13617(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_PLAYING_ANIM( uParam0, uParam1, uParam2 ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( uParam0, uParam1, uParam2, ref fVar5 );
            if (fVar5 < 0.95000000)
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_16532()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < 52; I++ )
    {
        l_U160[I] = I;
    }
    for ( I = 0; I < 52; I++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 52, ref uVar3 );
        sub_16607( I, uVar3 );
    }
    return;
}

void sub_16607(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    uVar4 = l_U160[uParam0];
    uVar5 = l_U160[uParam1];
    l_U160[uParam0] = uVar5;
    l_U160[uParam1] = uVar4;
    return;
}

void sub_16687()
{
    l_U113 = 1;
    l_U120 = 0;
    l_U121 = 0;
    return;
}

int sub_17205(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 13:
        case 26:
        case 39:
        return 1;
        break;
        case 1:
        case 14:
        case 27:
        case 40:
        return 2;
        break;
        case 2:
        case 15:
        case 28:
        case 41:
        return 3;
        break;
        case 3:
        case 16:
        case 29:
        case 42:
        return 4;
        break;
        case 4:
        case 17:
        case 30:
        case 43:
        return 5;
        break;
        case 5:
        case 18:
        case 31:
        case 44:
        return 6;
        break;
        case 6:
        case 19:
        case 32:
        case 45:
        return 7;
        break;
        case 7:
        case 20:
        case 33:
        case 46:
        return 8;
        break;
        case 8:
        case 21:
        case 34:
        case 47:
        return 9;
        break;
        case 9:
        case 22:
        case 35:
        case 48:
        return 10;
        break;
        case 10:
        case 23:
        case 36:
        case 49:
        return 11;
        break;
        case 11:
        case 24:
        case 37:
        case 50:
        return 12;
        break;
        case 12:
        case 25:
        case 38:
        case 51:
        return 13;
        break;
    }
    return 0;
}

void sub_19783()
{
    int I;
    int Result;

    Result = 0;
    for ( I = 0; I < 4; I++ )
    {
        if (NOT (I == 0))
        {
            if (NOT l_U108[I])
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_19933()
{
    l_U215++;
    if (l_U215 > 3)
    {
        l_U215 = 0;
    }
    if (l_U215 == 0)
    {
        sub_19933();
    }
    else if ((NOT l_U108[l_U215]) AND (DOES_CHAR_EXIST( l_U253[l_U215] )))
    {
        return;
    }
    else
    {
        sub_19933();
    }
    return;
}

int sub_21013()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_809() ))
    {
        for ( I = 0; I < 4; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U253[I] )))
            {
                if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_809(), l_U253[I] )) || (IS_PLAYER_TARGETTING_CHAR( sub_809(), l_U253[I] )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_21241()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_809() ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (I > 0)
            {
                if (DOES_OBJECT_EXIST( l_U248[I] ))
                {
                    if (HAS_OBJECT_BEEN_DAMAGED_BY_CHAR( l_U248[I], sub_865() ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_21460()
{
    int iVar2;

    l_U258 = sub_21470( 1 );
    if (l_U258 == nil)
    {
        l_U258 = sub_22023( 0 );
    }
    if (DOES_CHAR_EXIST( l_U258 ))
    {
        if (NOT (sub_22181( sub_865(), l_U258 )))
        {
            l_U258 = nil;
        }
    }
    l_U259 = sub_21470( 6 );
    if (l_U259 == nil)
    {
        l_U259 = sub_22023( 1 );
    }
    if (DOES_CHAR_EXIST( l_U259 ))
    {
        if (NOT (sub_22181( sub_865(), l_U259 )))
        {
            l_U259 = nil;
        }
    }
    l_U260 = sub_21470( 7 );
    if (l_U260 == nil)
    {
        l_U260 = sub_22023( 2 );
    }
    if (DOES_CHAR_EXIST( l_U260 ))
    {
        if (NOT (sub_22181( sub_865(), l_U260 )))
        {
            l_U260 = nil;
        }
    }
    if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_865(), l_U346._fU0, l_U346._fU4, l_U346._fU8, 2.50000000, 2.50000000, 2.00000000, 0 )))
    {
        return 0;
    }
    if (NOT (DOES_CHAR_EXIST( l_U253[0] )))
    {
        return 0;
    }
    else if (IS_CHAR_INJURED( l_U253[0] ))
    {
        return 0;
    }
    if (IS_PLAYER_PLAYING( sub_809() ))
    {
        if (IS_WANTED_LEVEL_GREATER( sub_809(), 0 ))
        {
            return 0;
        }
    }
    if (NOT sub_22610())
    {
        return 0;
    }
    if (sub_22667( 5 ))
    {
        if (sub_22987( ref iVar2 ))
        {
            if (((iVar2 == 1) || (iVar2 == 6)) || (iVar2 == 7))
            {
                if (((NOT (DOES_CHAR_EXIST( l_U258 ))) AND (NOT (DOES_CHAR_EXIST( l_U259 )))) AND (NOT (DOES_CHAR_EXIST( l_U260 ))))
                {
                    return 0;
                }
            }
        }
    }
    else if (NOT g_U12303)
    {
        if (sub_22987( ref iVar2 ))
        {
            if (((NOT (iVar2 == 1)) AND (NOT (iVar2 == 6))) AND (NOT (iVar2 == 7)))
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    return 1;
}

void sub_21470(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    int iVar5;
    int I;

    Result = nil;
    if (IS_PLAYER_PLAYING( sub_809() ))
    {
        if (DOES_GROUP_EXIST( sub_21500() ))
        {
            GET_GROUP_SIZE( sub_21500(), ref uVar4, ref iVar5 );
            if (iVar5 > 0)
            {
                for ( I = 0; I < iVar5; I++ )
                {
                    GET_GROUP_MEMBER( sub_21500(), I, ref Result );
                    if (NOT (IS_CHAR_INJURED( Result )))
                    {
                        if (IS_CHAR_MODEL( Result, sub_21623( uParam0 ) ))
                        {
                            return Result;
                        }
                    }
                }
            }
        }
    }
    Result = nil;
    return Result;
}

void sub_21500()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_21623(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_21922( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_21922(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_22023(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 3))
    {
        SCRIPT_ASSERT( "Minigames_Get_Biker_Friend_Index: Minigame Biker Index out of range" );
        return nil;
    }
    return g_U38857[iParam0]._fU0;
}

int sub_22181(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( uParam1 ))))
    {
        if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam1 ))))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam1, ref iVar5 );
            if (iVar4 == iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_22610()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U20912)
    {
        return 0;
    }
    return 1;
}

int sub_22667(int iParam0)
{
    unknown uVar3;

    if (NOT g_U12303)
    {
        return 1;
    }
    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    if (sub_22711( iParam0 ))
    {
        return 0;
    }
    if (sub_22770( g_U26739._fU0 ))
    {
        if (NOT (sub_22802( g_U26739._fU0, iParam0 )))
        {
            return 0;
        }
        return 1;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U26739._fU4)
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (g_U26739._fU8 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
    }
    if (g_U26739._fU32 <= 0)
    {
        return 0;
    }
    if (g_U26739._fU36[uVar3] > 0)
    {
        return 1;
    }
    return 0;
}

int sub_22711(int iParam0)
{
    if (iParam0 == 8)
    {
        if (g_U10999 == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_22770(unknown uParam0)
{
    return 0;
}

int sub_22802(unknown uParam0, unknown uParam1)
{
    return 1;
}

int sub_22987(unknown uParam0)
{
    (uParam0^) = g_U26739._fU0;
    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    return 1;
}

int sub_23180(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_809() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_809() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_809() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U10499)))
                {
                    if (NOT sub_23276())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_865() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_23361())
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

int sub_23276()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_23361()
{
    return sub_23372( 0, 0 );
}

int sub_23372(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((uParam1) AND (g_U558 != 9))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

int sub_24127(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_23180( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U102)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_809(), 0 );
                l_U102 = 1;
            }
            g_U10468 = uParam0;
            l_U103 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_24408();
                l_U101 = 1;
                g_U10469 = 6;
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
                g_U10469 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U100 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U100)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U100 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_24408()
{
    return sub_23372( 1, 1 );
}

int sub_24981()
{
    if (g_U12303)
    {
        if (NOT (sub_25001( 5 )))
        {
            return 0;
        }
    }
    SET_PLAYER_CONTROL( sub_809(), 0 );
    sub_25431();
    l_U157 = 3;
    return 1;
}

int sub_25001(int iParam0)
{
    unknown uVar3;

    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    if (sub_22711( iParam0 ))
    {
        return 0;
    }
    if (sub_22770( g_U26739._fU0 ))
    {
        if (NOT (sub_22802( g_U26739._fU0, iParam0 )))
        {
            return 0;
        }
        g_U26739._fU8 = iParam0;
        g_U26739._fU84 = 0;
        return 1;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U26739._fU4)
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            g_U26739._fU8 = 12;
            if (g_U26739._fU36[uVar3] > 0)
            {
                g_U26739._fU36[uVar3]--;
            }
            g_U26739._fU84 = 0;
            return 1;
        }
    }
    if (g_U26739._fU8 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            g_U26739._fU8 = 12;
        }
    }
    if (g_U26739._fU32 <= 0)
    {
        g_U26739._fU12 = iParam0;
        return 0;
    }
    if (g_U26739._fU36[uVar3] > 0)
    {
        g_U26739._fU8 = iParam0;
        g_U26739._fU36[uVar3]--;
        if (iParam0 == 8)
        {
            g_U26739._fU84 = 1;
        }
        return 1;
    }
    g_U26739._fU12 = iParam0;
    return 0;
}

void sub_25431()
{
    int I;

    for ( I = 0; I < 4; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U253[I] )))
        {
            CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U253[I] );
        }
    }
    l_U222 = 0;
    return;
}

void sub_26100()
{
    sub_26109();
    DISPLAY_RADAR( 0 );
    return;
}

void sub_26109()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U12304 = 1;
    if (NOT (g_U26739._fU0 == 19))
    {
        g_U26739._fU24 = 1;
        g_U26739._fU28 = 0;
        if (NOT (g_U26739._fU8 == 12))
        {
            sub_26178();
        }
        return;
    }
    g_U12303 = 1;
    sub_26244();
    return;
}

void sub_26178()
{
    if (NOT (g_U26739._fU32 > 0))
    {
        return;
    }
    g_U26739._fU32--;
    return;
}

void sub_26244()
{
    g_U26737._fU4 = 0;
    return;
}

void sub_28527()
{
    int I;

    l_U215 = 0;
    l_U214 = 0;
    l_U216 = 0;
    l_U218 = 0;
    for ( I = 0; I < l_U108; I++ )
    {
        l_U108[I] = 0;
    }
    l_U117 = 0;
    l_U115 = 0;
    l_U121 = 0;
    l_U126 = 0;
    l_U116 = 0;
    l_U217 = -1;
    sub_16532();
    return;
}

int sub_29583(boolean bParam0)
{
    if (bParam0)
    {
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HILO_H05" )))
        {
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "HILO_H05", sub_29646( l_U160[l_U159] ) );
        }
    }
    if (NOT l_U118)
    {
        if (IS_CONTROL_PRESSED( 2, 23 ))
        {
            CLEAR_HELP();
            l_U118 = 1;
            l_U218 = l_U214;
            l_U214 = 18;
            return 1;
        }
    }
    else if (NOT (IS_CONTROL_PRESSED( 2, 23 )))
    {
        l_U118 = 0;
    }
    return 0;
}

string sub_29646(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "CLUB_A";
        break;
        case 1:
        return "CLUB_2";
        break;
        case 2:
        return "CLUB_3";
        break;
        case 3:
        return "CLUB_4";
        break;
        case 4:
        return "CLUB_5";
        break;
        case 5:
        return "CLUB_6";
        break;
        case 6:
        return "CLUB_07";
        break;
        case 7:
        return "CLUB_08";
        break;
        case 8:
        return "CLUB_09";
        break;
        case 9:
        return "CLUB_10";
        break;
        case 10:
        return "CLUB_J";
        break;
        case 11:
        return "CLUB_Q";
        break;
        case 12:
        return "CLUB_K";
        break;
        case 13:
        return "DIAMOND_A";
        break;
        case 14:
        return "DIAMOND_2";
        break;
        case 15:
        return "DIAMOND_3";
        break;
        case 16:
        return "DIAMOND_4";
        break;
        case 17:
        return "DIAMOND_5";
        break;
        case 18:
        return "DIAMOND_6";
        break;
        case 19:
        return "DIAMOND_7";
        break;
        case 20:
        return "DIAMOND_8";
        break;
        case 21:
        return "DIAMOND_9";
        break;
        case 22:
        return "DIAMOND_10";
        break;
        case 23:
        return "DIAMOND_J";
        break;
        case 24:
        return "DIAMOND_Q";
        break;
        case 25:
        return "DIAMOND_K";
        break;
        case 26:
        return "SPADE_A";
        break;
        case 27:
        return "SPADE_2";
        break;
        case 28:
        return "SPADE_3";
        break;
        case 29:
        return "SPADE_4";
        break;
        case 30:
        return "SPADE_5";
        break;
        case 31:
        return "SPADE_6";
        break;
        case 32:
        return "SPADE_7";
        break;
        case 33:
        return "SPADE_8";
        break;
        case 34:
        return "SPADE_9";
        break;
        case 35:
        return "SPADE_10";
        break;
        case 36:
        return "SPADE_J";
        break;
        case 37:
        return "SPADE_Q";
        break;
        case 38:
        return "SPADE_K";
        break;
        case 39:
        return "HEARTS_A";
        break;
        case 40:
        return "HEARTS_2";
        break;
        case 41:
        return "HEARTS_3";
        break;
        case 42:
        return "HEARTS_4";
        break;
        case 43:
        return "HEARTS_5";
        break;
        case 44:
        return "HEARTS_6";
        break;
        case 45:
        return "HEARTS_7";
        break;
        case 46:
        return "HEARTS_8";
        break;
        case 47:
        return "HEARTS_9";
        break;
        case 48:
        return "HEARTS_10";
        break;
        case 49:
        return "HEARTS_J";
        break;
        case 50:
        return "HEARTS_Q";
        break;
        case 51:
        return "HEARTS_K";
        break;
    }
    return "";
}

void sub_32261()
{
    int I;
    int Result;

    Result = 0;
    for ( I = 0; I < 4; I++ )
    {
        if (I == 0)
        {
            if (NOT l_U117)
            {
                Result++;
            }
        }
        else if (NOT l_U108[I])
        {
            Result++;
        }
    }
    return Result;
}

void sub_37281()
{
    l_U215++;
    if (l_U215 > 3)
    {
        l_U215 = 0;
    }
    if (l_U215 == 0)
    {
        if (NOT l_U117)
        {
            return;
        }
        else
        {
            sub_37281();
        }
    }
    else if (NOT l_U108[l_U215])
    {
        return;
    }
    else
    {
        sub_37281();
    }
    return;
}

void sub_37617(unknown uParam0)
{
    if (g_U26739._fU0 == 19)
    {
        return;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        g_U26739._fU20 = uParam0;
        if (sub_22770( g_U26739._fU0 ))
        {
            g_U26739._fU16 = uParam0;
        }
        return;
    }
    g_U26739._fU16 = uParam0;
    return;
}

int sub_40982()
{
    int I;

    if (NOT (IS_CHAR_INJURED( l_U261 )))
    {
        if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U261 )))
        {
            for ( I = 0; I < l_U253; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U253[I] )))
                {
                    if (IS_AMBIENT_SPEECH_PLAYING( l_U253[I] ))
                    {
                        return 1;
                    }
                }
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_41120()
{
    if (IS_PLAYER_PLAYING( sub_809() ))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_865(), -1725.13000000, 334.79000000, 30.69000000, 3.00000000, 3.00000000, 2.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_43005()
{
    int iVar2;
    int[4] iVar3;
    unknown uVar8;

    array(ref iVar3, 4);
    iVar2 = 0;
    iVar3[0] = 0;
    iVar2++;
    if ((NOT l_U108[1]) AND (NOT (l_U215 == 1)))
    {
        iVar3[iVar2] = 1;
        iVar2++;
    }
    if ((NOT l_U108[2]) AND (NOT (l_U215 == 2)))
    {
        iVar3[iVar2] = 2;
        iVar2++;
    }
    if ((NOT l_U108[3]) AND (NOT (l_U215 == 3)))
    {
        iVar3[iVar2] = 3;
        iVar2++;
    }
    if ((NOT l_U117) AND (NOT (l_U215 == 0)))
    {
        iVar3[iVar2] = -1;
        iVar2++;
    }
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar2, ref uVar8 );
    return iVar3[uVar8];
}