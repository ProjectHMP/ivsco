void main()
{
    int I;
    boolean bVar3;
    float fVar4;
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    int iVar14;
    int iVar15;
    unknown uVar16;
    int iVar17;

    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U122 = 10.00000000;
    l_U123 = 10.00000000;
    l_U136 = 0;
    l_U137 = 1;
    l_U138 = 3;
    l_U140 = 0;
    l_U157 = -1;
    l_U161 = 0;
    l_U162 = 1;
    l_U163 = 1;
    l_U171 = 150.00000000;
    l_U261 = 0;
    l_U262 = 150.00000000;
    l_U312 = 0;
    l_U562 = 0;
    l_U563 = 0;
    l_U564 = 0;
    l_U565 = 0;
    l_U566 = 0;
    l_U568 = 0;
    l_U569 = 0;
    l_U571 = 0;
    l_U572 = 0;
    l_U573 = 0;
    l_U574 = 0;
    l_U575 = 0;
    l_U576 = 0;
    l_U577 = 0;
    l_U578 = 0;
    l_U579 = 0;
    l_U610 = 0.00000000;
    l_U618 = 0.00000000;
    l_U619 = 0.00000000;
    l_U620 = 2.80000000;
    l_U621 = 3.00000000;
    l_U622 = -1000.00000000;
    l_U626 = 10000.00000000;
    l_U627 = 6500.00000000;
    l_U628 = 11.85000000;
    l_U665 = 0;
    l_U667 = 0;
    l_U668 = -1;
    l_U671 = 0;
    l_U672 = 0;
    l_U673 = -1;
    l_U676 = 0;
    l_U677 = 10;
    l_U678 = 0;
    l_U743 = {-258.50000000, -294.40000000, 0.00000000};
    l_U746 = {-260.80000000, -259.50000000, 30.00000000};
    l_U756 = {0.00000000, 0.00000000, 0.00000000};
    l_U768 = {0.00000000, -1.34500000, 0.38300000};
    l_U771 = {0.00000000, 0.00000000, 0.00000000};
    l_U774 = {0.00000000, -2.99000000, 0.38300000};
    l_U777 = {0.00000000, -3.94000000, 0.27600000};
    l_U780 = {0.30000000, 0.00000000, 0.00000000};
    l_U783 = {l_U768};
    l_U795 = {0.03300000, 0.00000000, 0.00000000};
    l_U798 = {0.00000000, 0.00000000, 0.09500000};
    l_U801 = {-279.36040000, -283.63050000, 14.63040000};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_656();
        sub_2766();
    }
    SET_MISSION_FLAG( 1 );
    sub_4239( "FRANCI6", 0 );
    sub_4239( "FM6AUD", 6 );
    sub_4406( "FM6AUD" );
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    if (sub_4122())
    {
        l_U612 = 0.12500000;
    }
    else
    {
        l_U612 = 0.10000000;
    }
    sub_4574( 1, 0, "PACKIE_MCREARY", 0 );
    sub_4574( 0, sub_2845(), "NIKO", 0 );
    if (IS_PLAYER_PLAYING( sub_2775() ))
    {
        SET_PLAYER_CONTROL( sub_2775(), 1 );
    }
    SETTIMERA( 0 );
    if (NOT g_U9893._fU24)
    {
        sub_4789();
    }
    if (NOT (sub_7767( -247.89430000, -170.11240000, 13.82040000, 20.00000000, 1120403456 )))
    {
        CLEAR_AREA( -247.89430000, -170.11240000, 13.82040000, 20.00000000, 1 );
    }
    sub_7949( 1, 0 );
    l_U674 = sub_8240( "FM6AUD", "FM6_FEND1" );
    l_U675 = sub_8240( "FM6AUD", "FM6_FEND2" );
    while (NOT (IS_CHAR_INJURED( sub_2845() )))
    {
        sub_8506();
        switch (l_U98)
        {
            case 1:
            switch (ProtectedGet(l_U99))
            {
                case 0:
                sub_8716();
                if ((l_U565) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
                {
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 1:
                if (sub_13391( "FR6_C01", "FR6_C02", "FR6_C03", "FR6_C04", "FR6_C05", "FR6_C06", "FR6_C07", "FR6_C08", "FR6_C09", "FR6_C10", "FR6_C11", "FR6_C12", "FR6_C13", "FR6_C14", "FR6_C15" ))
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        SETTIMERA( 0 );
                        sub_14989();
                        sub_7949( 2, 1 );
                    }
                }
                break;
            }
            break;
            case 2:
            switch (ProtectedGet(l_U99))
            {
                case 0:
                REQUEST_MODEL( 1777363799 );
                REQUEST_MODEL( 627094268 );
                while ((NOT (HAS_MODEL_LOADED( 1777363799 ))) || (NOT (HAS_MODEL_LOADED( 627094268 ))))
                {
                    WAIT( 0 );
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2845(), -268.16810000, -286.43270000, 13.76730000, 100.00000000, 100.00000000, 100.00000000, 0 )))
                {
                    if (NOT (DOES_VEHICLE_EXIST( l_U852 )))
                    {
                        CREATE_CAR( 627094268, -268.16810000, -286.43270000, 13.76730000, ref l_U852, 1 );
                        SET_CAR_HEADING( l_U852, 180.00000000 );
                        CHANGE_CAR_COLOUR( l_U852, 0, 0 );
                        LOCK_CAR_DOORS( l_U852, 3 );
                        sub_3703( l_U852 );
                    }
                    if (DOES_VEHICLE_EXIST( l_U853[1] ))
                    {
                        CREATE_CAR( 1777363799, -268.29120000, -272.03300000, 14.15120000, ref l_U853[1], 1 );
                        SET_CAR_HEADING( l_U853[1], 180.00000000 );
                        LOCK_CAR_DOORS( l_U853[1], 3 );
                        CHANGE_CAR_COLOUR( l_U853[1], 0, 0 );
                        SET_EXTRA_CAR_COLOURS( l_U853[1], 8, 0 );
                    }
                }
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                SUPPRESS_CAR_MODEL( 1777363799 );
                SUPPRESS_CAR_MODEL( 627094268 );
                if (sub_13413())
                {
                    if ((NOT sub_14015()) || (NOT sub_16188()))
                    {
                        if (sub_16509( -268.52500000, -278.46880000, 15.83100000, 2.50000000, 2.50000000, 2.50000000, 1, "FR6_M02", 1, "FR6_M24" ))
                        {
                            SWITCH_ROADS_OFF( -271.21430000, -330.99300000, 0.00000000, -250.47060000, -225.14970000, 50.00000000 );
                            sub_7949( 3, 1 );
                        }
                        else if (NOT (sub_7767( -267.57720000, -278.46880000, 14.29370000, 10.00000000, 150.00000000 )))
                        {
                            CLEAR_AREA_OF_CARS( -267.57720000, -278.46880000, 14.29370000, 10.00000000 );
                        }
                        if (NOT (sub_7767( -268.52500000, -278.46880000, 15.83100000, 50.00000000, 150.00000000 )))
                        {
                            CLEAR_AREA_OF_CARS( -268.52500000, -278.46880000, 15.83100000, 50.00000000 );
                        }
                    }
                }
                else
                {
                    sub_7949( 1, 1 );
                }
                break;
            }
            break;
            case 3:
            sub_17941();
            switch (ProtectedGet(l_U99))
            {
                case 0:
                if (IS_CHAR_IN_ANY_CAR( sub_2845() ))
                {
                    SET_PLAYER_CONTROL( sub_2775(), 0 );
                }
                DO_SCREEN_FADE_OUT( 1000 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                SET_PLAYER_CONTROL( sub_2775(), 0 );
                sub_4239( "FM6AUD", 6 );
                sub_19964();
                if (DOES_CAM_EXIST( l_U111 ))
                {
                    DESTROY_CAM( l_U111 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                }
                REQUEST_MODEL( -1150599089 );
                while (NOT (HAS_MODEL_LOADED( -1150599089 )))
                {
                    WAIT( 0 );
                }
                if (DOES_VEHICLE_EXIST( l_U852 ))
                {
                    DELETE_CAR( ref l_U852 );
                }
                if (DOES_VEHICLE_EXIST( l_U853[0] ))
                {
                    DELETE_CAR( ref l_U853[0] );
                }
                if (DOES_VEHICLE_EXIST( l_U853[1] ))
                {
                    DELETE_CAR( ref l_U853[1] );
                }
                sub_20203();
                CLEAR_AREA( -268.16810000, -286.43270000, 13.76730000, 40.00000000, 1 );
                CREATE_CAR( 627094268, -268.16810000, -286.43270000, 13.76730000, ref l_U852, 1 );
                SET_CAR_HEADING( l_U852, 180.00000000 );
                CHANGE_CAR_COLOUR( l_U852, 0, 0 );
                SET_CAR_IN_CUTSCENE( l_U852, 1 );
                CREATE_CAR( 1777363799, -268.29110000, -278.46880000, 14.06130000, ref l_U853[0], 1 );
                SET_CAR_HEADING( l_U853[0], 180.00000000 );
                LOCK_CAR_DOORS( l_U853[0], 3 );
                CHANGE_CAR_COLOUR( l_U853[0], 0, 0 );
                SET_CAR_IN_CUTSCENE( l_U853[0], 1 );
                CREATE_CAR( 1777363799, -268.29120000, -272.03300000, 14.15120000, ref l_U853[1], 1 );
                SET_CAR_HEADING( l_U853[1], 180.00000000 );
                LOCK_CAR_DOORS( l_U853[1], 3 );
                CHANGE_CAR_COLOUR( l_U853[1], 0, 0 );
                SET_CAR_IN_CUTSCENE( l_U853[1], 1 );
                CREATE_CAR( -1150599089, -258.65630000, -266.27210000, 14.00590000, ref l_U857, 1 );
                SET_CAR_HEADING( l_U857, 0.00000000 );
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U857, 1 );
                CHANGE_CAR_COLOUR( l_U857, 70, 70 );
                SET_CAR_IN_CUTSCENE( l_U857, 1 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1150599089 );
                GET_TIME_OF_DAY( ref iVar15, ref uVar16 );
                iVar15++;
                if (iVar15 > 23)
                {
                    iVar15 = 0;
                }
                SET_TIME_OF_DAY( iVar15, 1 );
                CLEAR_AREA( -277.07000000, -284.08000000, 15.95000000, 20.00000000, 1 );
                CLEAR_WANTED_LEVEL( sub_2775() );
                g_U9156 = 1;
                SETTIMERA( 0 );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                if ((sub_20857()) || (TIMERA() > 5000))
                {
                    WAIT( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 2:
                SET_PLAYER_CONTROL( sub_2775(), 0 );
                if (sub_4122())
                {
                    START_CUTSCENE_NOW( "FM6_B" );
                }
                else
                {
                    START_CUTSCENE_NOW( "FM6_A" );
                }
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 3:
                if (HAS_CUTSCENE_LOADED())
                {
                    while (NOT HAS_CUTSCENE_FINISHED())
                    {
                        WAIT( 0 );
                    }
                    if (sub_4122())
                    {
                        CLEAR_NAMED_CUTSCENE( "FM6_B" );
                    }
                    else
                    {
                        CLEAR_NAMED_CUTSCENE( "FM6_A" );
                    }
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                g_U9156 = 0;
                sub_7949( 5, 1 );
                break;
            }
            break;
            case 5:
            switch (ProtectedGet(l_U99))
            {
                case 0:
                g_U9156 = 0;
                for ( I = 0; I < 14; I++ )
                {
                    DELETE_CHAR( ref l_U719[I] );
                }
                CLEAR_AREA( -279.36040000, -283.63050000, 14.63040000, 100.00000000, 1 );
                SWITCH_ROADS_OFF( -271.21430000, -330.99300000, 0.00000000, -250.47060000, -225.14970000, 50.00000000 );
                SWITCH_PED_PATHS_OFF( -279.20290000, -317.81370000, 0.00000000, -249.55540000, -236.05600000, 50.00000000 );
                SWITCH_PED_PATHS_OFF( -254.56280000, -279.58340000, 0.00000000, -250.38780000, -273.53340000, 50.00000000 );
                ADD_SCENARIO_BLOCKING_AREA( -284.44550000, -294.95770000, 0.00000000, -269.62050000, -269.98270000, 50.00000000 );
                # -sub_C1FFC0-0xc214c8( 2, ref l_U580 );
                # -sub_C1FFC0-0xc214c8( 3, ref l_U581 );
                LOAD_COMBAT_DECISION_MAKER( 8, ref l_U582 );
                LOAD_COMBAT_DECISION_MAKER( 8, ref l_U583 );
                SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U583, 0 );
                SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U582, 0 );
                REQUEST_MODEL( 1777363799 );
                REQUEST_MODEL( 627094268 );
                REQUEST_MODEL( -1150599089 );
                REQUEST_MODEL( -322343873 );
                REQUEST_MODEL( -503930010 );
                GET_WEAPONTYPE_MODEL( 7, ref l_U683[0] );
                REQUEST_MODEL( l_U683[0] );
                GET_WEAPONTYPE_MODEL( 12, ref l_U683[1] );
                REQUEST_MODEL( l_U683[1] );
                GET_WEAPONTYPE_MODEL( 10, ref l_U683[2] );
                REQUEST_MODEL( l_U683[2] );
                sub_21897( 13 );
                LOAD_ALL_OBJECTS_NOW();
                while (((((((((NOT (HAS_MODEL_LOADED( 1777363799 ))) || (NOT (HAS_MODEL_LOADED( 627094268 )))) || (NOT (HAS_MODEL_LOADED( -1150599089 )))) || (NOT (HAS_MODEL_LOADED( -322343873 )))) || (NOT (HAS_MODEL_LOADED( -503930010 )))) || (NOT (HAS_MODEL_LOADED( l_U683[0] )))) || (NOT (HAS_MODEL_LOADED( l_U683[1] )))) || (NOT (HAS_MODEL_LOADED( l_U683[2] )))) || (NOT (sub_22728( 13 ))))
                {
                    WAIT( 0 );
                }
                if (DOES_VEHICLE_EXIST( l_U852 ))
                {
                    DELETE_CAR( ref l_U852 );
                }
                if (DOES_VEHICLE_EXIST( l_U853[0] ))
                {
                    DELETE_CAR( ref l_U853[0] );
                }
                if (DOES_VEHICLE_EXIST( l_U853[1] ))
                {
                    DELETE_CAR( ref l_U853[1] );
                }
                if (DOES_VEHICLE_EXIST( l_U856 ))
                {
                    DELETE_CAR( ref l_U856 );
                }
                if (DOES_VEHICLE_EXIST( l_U857 ))
                {
                    DELETE_CAR( ref l_U857 );
                }
                SUPPRESS_CAR_MODEL( 627094268 );
                CREATE_CAR( 627094268, -268.16810000, -286.43270000, 13.76730000, ref l_U852, 1 );
                SET_CAR_HEADING( l_U852, 180.00000000 );
                CHANGE_CAR_COLOUR( l_U852, 0, 0 );
                LOCK_CAR_DOORS( l_U852, 3 );
                sub_3703( l_U852 );
                CREATE_OBJECT( 453461275, 836.63830000, -269.97310000, 20.31680000, ref l_U687, 1 );
                sub_23064();
                FREEZE_OBJECT_POSITION( l_U687, 1 );
                SET_CAR_COORDINATES( l_U852, -268.16810000, -286.43270000, 13.76730000 );
                APPLY_FORCE_TO_CAR( l_U852, 1, 0.00000000, 0.00000000, -1.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 0 );
                SET_CAN_BURST_CAR_TYRES( l_U852, 0 );
                SET_VEH_HAS_STRONG_AXLES( l_U852, 1 );
                CREATE_CAR( 1777363799, -268.29110000, -278.46880000, 14.06130000, ref l_U853[0], 1 );
                SET_CAR_HEADING( l_U853[0], 180.00000000 );
                LOCK_CAR_DOORS( l_U853[0], 3 );
                CHANGE_CAR_COLOUR( l_U853[0], 0, 0 );
                SET_EXTRA_CAR_COLOURS( l_U853[0], 8, 0 );
                SET_CAR_HEALTH( l_U853[0], 5250 );
                SET_ENGINE_HEALTH( l_U853[0], 5250 );
                SET_PETROL_TANK_HEALTH( l_U853[0], 5250 );
                SET_CAR_COORDINATES( l_U853[0], -268.29110000, -278.46880000, 14.06130000 );
                APPLY_FORCE_TO_CAR( l_U853[0], 1, 0.00000000, 0.00000000, -1.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 0 );
                SET_CAN_BURST_CAR_TYRES( l_U853[0], 0 );
                CREATE_CAR( 1777363799, -268.29120000, -272.03300000, 14.15120000, ref l_U853[1], 1 );
                SET_CAR_HEADING( l_U853[1], 180.00000000 );
                LOCK_CAR_DOORS( l_U853[1], 3 );
                CHANGE_CAR_COLOUR( l_U853[1], 0, 0 );
                SET_EXTRA_CAR_COLOURS( l_U853[1], 8, 0 );
                SET_CAR_HEALTH( l_U853[1], 5250 );
                SET_ENGINE_HEALTH( l_U853[1], 5250 );
                SET_PETROL_TANK_HEALTH( l_U853[1], 5250 );
                SET_CAR_COORDINATES( l_U853[1], -268.29120000, -272.03300000, 14.15120000 );
                APPLY_FORCE_TO_CAR( l_U853[1], 1, 0.00000000, 0.00000000, -1.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 0 );
                SET_CAN_BURST_CAR_TYRES( l_U853[1], 0 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1777363799 );
                sub_24193( 13, ref l_U709, -279.24300000, -281.03730000, 14.61450000, 300.00000000 );
                SET_CHAR_DECISION_MAKER( l_U709, l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U709, l_U582 );
                GIVE_WEAPON_TO_CHAR( l_U709, 7, 30000, 0 );
                SET_CHAR_WILL_USE_COVER( l_U709, 1 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U709, 0 );
                SET_PED_DIES_WHEN_INJURED( l_U709, 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709, 1 );
                SET_CHAR_NEVER_TARGETTED( l_U709, 1 );
                SET_CHAR_MAX_HEALTH( l_U709, 2000 );
                SET_CHAR_HEALTH( l_U709, 2000 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U709, 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U709, 0 );
                UNLOCK_RAGDOLL( l_U709, 0 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U709, 1 );
                SET_CHAR_FIRE_DAMAGE_MULTIPLIER( l_U709, 0.20000000 );
                SET_CHAR_ACCURACY( l_U709, 10 );
                SET_CHAR_COMPONENT_VARIATION( l_U709, 1, 1, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U709, 2, 1, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U709, 3, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U709, 5, 1, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U709, 8, 0, 0 );
                SET_CHAR_COORDINATES( sub_2845(), -278.78770000, -282.47440000, 14.58600000 );
                SET_CHAR_HEADING( sub_2845(), 329.00000000 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2845() );
                SET_PLAYER_CONTROL( sub_2775(), 1 );
                CLEAR_WANTED_LEVEL( sub_2775() );
                SET_CAM_BEHIND_PED( sub_2845() );
                DONT_DISPATCH_COPS_FOR_PLAYER( sub_2775(), 1 );
                SET_CHAR_DUCKING( sub_2845(), 1 );
                if (HAS_CHAR_GOT_WEAPON( sub_2845(), 7 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_2845(), 7, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( sub_2845(), 9 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_2845(), 9, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( sub_2845(), 10 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_2845(), 10, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( sub_2845(), 11 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_2845(), 11, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( sub_2845(), 12 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_2845(), 12, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( sub_2845(), 14 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_2845(), 14, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( sub_2845(), 15 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_2845(), 15, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( sub_2845(), 16 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_2845(), 16, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( sub_2845(), 17 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_2845(), 17, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( sub_2845(), 18 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_2845(), 18, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( sub_2845(), 19 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_2845(), 19, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( sub_2845(), 20 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_2845(), 20, 1 );
                };;;;;;;;;;;;
                WAIT( 500 );
                l_U562 = 0;
                while (NOT l_U562)
                {
                    if (sub_26739( l_U852 ))
                    {
                        l_U562 = 1;
                    }
                    else
                    {
                        WAIT( 0 );
                    }
                }
                l_U562 = 0;
                while (NOT l_U562)
                {
                    if (sub_26739( l_U853[0] ))
                    {
                        l_U562 = 1;
                    }
                    else
                    {
                        WAIT( 0 );
                    }
                }
                l_U562 = 0;
                while (NOT l_U562)
                {
                    if (sub_26739( l_U853[1] ))
                    {
                        l_U562 = 1;
                    }
                    else
                    {
                        WAIT( 0 );
                    }
                }
                if (NOT (IS_CAR_DEAD( l_U852 )))
                {
                    FREEZE_CAR_POSITION( l_U852, 1 );
                }
                if (NOT (IS_CAR_DEAD( l_U853[0] )))
                {
                    FREEZE_CAR_POSITION( l_U853[0], 1 );
                }
                if (NOT (IS_CAR_DEAD( l_U853[1] )))
                {
                    FREEZE_CAR_POSITION( l_U853[1], 1 );
                }
                CREATE_CAR( -1150599089, -258.51360000, -275.88310000, 14.00590000, ref l_U856, 1 );
                SET_CAR_HEADING( l_U856, 0.00000000 );
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U856, 1 );
                CHANGE_CAR_COLOUR( l_U856, 31, 31 );
                CREATE_CAR( -1150599089, -258.65630000, -266.27210000, 14.00590000, ref l_U857, 1 );
                SET_CAR_HEADING( l_U857, 0.00000000 );
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U857, 1 );
                CHANGE_CAR_COLOUR( l_U857, 70, 70 );
                CREATE_CAR( -322343873, -265.23060000, -256.25720000, 13.61200000, ref l_U847[0], 1 );
                SET_CAR_HEADING( l_U847[0], 55.89100000 );
                CHANGE_CAR_COLOUR( l_U847[0], 0, 0 );
                SET_EXTRA_CAR_COLOURS( l_U847[0], 8, 0 );
                SET_RELATIONSHIP( 5, 0, 23 );
                SET_RELATIONSHIP( 5, 23, 0 );
                SET_RELATIONSHIP( 1, 23, 23 );
                CREATE_CHAR_INSIDE_CAR( l_U847[0], 26, -503930010, ref l_U688[0] );
                SET_CHAR_COMPONENT_VARIATION( l_U688[0], 0, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U688[0], 1, 0, 3 );
                SET_CHAR_COMPONENT_VARIATION( l_U688[0], 2, 0, 0 );
                GIVE_WEAPON_TO_CHAR( l_U688[0], 12, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U688[0], 12, 1 );
                SET_CHAR_DECISION_MAKER( l_U688[0], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U688[0], l_U583 );
                SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[0], 1, 0 );
                SET_CHAR_WILL_USE_COVER( l_U688[0], 1 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U688[0], 23 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[0], 0 );
                ADD_BLIP_FOR_CHAR( l_U688[0], ref l_U532[0] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[0], 1 );
                sub_27653( ref l_U688[0], ref l_U630 );
                SET_PED_DIES_WHEN_INJURED( l_U688[0], 1 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U688[0], 1 );
                SET_CHAR_ACCURACY( l_U688[0], 15 );
                SET_CHAR_AS_ENEMY( l_U688[0], 1 );
                CREATE_CHAR_AS_PASSENGER( l_U847[0], 26, -503930010, 0, ref l_U688[1] );
                SET_CHAR_COMPONENT_VARIATION( l_U688[1], 0, 1, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U688[1], 1, 1, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U688[1], 2, 0, 1 );
                GIVE_WEAPON_TO_CHAR( l_U688[1], 7, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U688[1], 7, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[1], 1, 0 );
                SET_CHAR_DECISION_MAKER( l_U688[1], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U688[1], l_U583 );
                SET_CHAR_WILL_USE_COVER( l_U688[1], 1 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U688[1], 23 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[1], 0 );
                ADD_BLIP_FOR_CHAR( l_U688[1], ref l_U532[1] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[1], 1 );
                sub_27653( ref l_U688[1], ref l_U630 );
                SET_PED_DIES_WHEN_INJURED( l_U688[1], 1 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U688[1], 1 );
                SET_CHAR_ACCURACY( l_U688[1], 20 );
                SET_CHAR_AS_ENEMY( l_U688[1], 1 );
                CREATE_CHAR_AS_PASSENGER( l_U847[0], 26, -503930010, 1, ref l_U688[2] );
                SET_CHAR_COMPONENT_VARIATION( l_U688[2], 0, 1, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U688[2], 1, 2, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U688[2], 2, 0, 2 );
                GIVE_WEAPON_TO_CHAR( l_U688[2], 7, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U688[2], 7, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[2], 1, 0 );
                SET_CHAR_DECISION_MAKER( l_U688[2], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U688[2], l_U583 );
                SET_CHAR_WILL_USE_COVER( l_U688[2], 1 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U688[2], 23 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[2], 0 );
                ADD_BLIP_FOR_CHAR( l_U688[2], ref l_U532[2] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[2], 1 );
                sub_27653( ref l_U688[2], ref l_U630 );
                SET_PED_DIES_WHEN_INJURED( l_U688[2], 1 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U688[2], 1 );
                SET_CHAR_ACCURACY( l_U688[2], 20 );
                SET_CHAR_AS_ENEMY( l_U688[2], 1 );
                CREATE_CHAR_AS_PASSENGER( l_U847[0], 26, -503930010, 2, ref l_U688[3] );
                SET_CHAR_COMPONENT_VARIATION( l_U688[3], 0, 0, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U688[3], 1, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U688[3], 2, 0, 3 );
                GIVE_WEAPON_TO_CHAR( l_U688[3], 7, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U688[3], 7, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[3], 1, 0 );
                SET_CHAR_DECISION_MAKER( l_U688[3], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U688[3], l_U583 );
                SET_CHAR_WILL_USE_COVER( l_U688[3], 1 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U688[3], 23 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[3], 0 );
                ADD_BLIP_FOR_CHAR( l_U688[3], ref l_U532[3] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[3], 1 );
                sub_27653( ref l_U688[3], ref l_U630 );
                SET_PED_DIES_WHEN_INJURED( l_U688[3], 1 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U688[3], 1 );
                SET_CHAR_ACCURACY( l_U688[3], 20 );
                SET_CHAR_AS_ENEMY( l_U688[3], 1 );
                SET_WANTED_MULTIPLIER( 0.00000000 );
                ALLOW_EMERGENCY_SERVICES( 0 );
                l_U561 = 0;
                sub_4574( 1, l_U709, "PACKIE_MCREARY", 0 );
                sub_4574( 0, sub_2845(), "NIKO", 0 );
                CLEAR_AREA( -279.36040000, -283.63050000, 14.63040000, 100.00000000, 1 );
                SET_PED_IS_BLIND_RAGING( sub_2845(), 1 );
                sub_29000( 100, 1, 1 );
                sub_16671( "FR6_M23", 0 );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                switch (l_U654[0])
                {
                    case 0:
                    if (l_U584[0] > 13000.00000000)
                    {
                        sub_29645( 0 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U847[0] ))
                    {
                        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U847[0] )))
                        {
                            l_U654[0]++;
                        }
                        else
                        {
                            l_U584[0] = FIND_TIME_POSITION_IN_RECORDING( l_U847[0] );
                        }
                    }
                    else
                    {
                        l_U654[0]++;
                    }
                    break;
                    case 1:
                    sub_29804();
                    sub_29645( 0 );
                    if (IS_VEH_DRIVEABLE( l_U847[0] ))
                    {
                        sub_30040( ref l_U847[0] );
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U688[0] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[0] ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U688[0] );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U688[1] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[1] ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U688[1] );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U688[2] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[2] ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U688[2] );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U688[3] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[3] ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U688[3] );
                        }
                    }
                    l_U654[0]++;
                    break;
                }
                switch (l_U631[0])
                {
                    case 0:
                    l_U631[0] = 2;
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U688[0] )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[0] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[0], 0 );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U688[0], -261.24770000, -267.17830000, 13.56350000, 6.00000000 );
                            TASK_COMBAT( l_U688[0], sub_2845() );
                            l_U631[0]++;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U688[0] )))
                    {
                        if (l_U662 >= 2)
                        {
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U688[0] );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[0], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            l_U631[0]++;
                        }
                    }
                    break;
                }
                switch (l_U631[1])
                {
                    case 0:
                    l_U631[1] = 2;
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U688[1] )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[1] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[1], 0 );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U688[1], -263.84380000, -255.35660000, 13.63950000, 6.00000000 );
                            TASK_COMBAT( l_U688[1], sub_2845() );
                            l_U631[1]++;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U688[1] )))
                    {
                        if (l_U662 >= 3)
                        {
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U688[1] );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[1], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U688[1], -256.73980000, -277.02280000, 14.43520000, 3, -1, 5.00000000 );
                            l_U631[1]++;
                        }
                    }
                    break;
                }
                switch (l_U631[2])
                {
                    case 0:
                    l_U631[2] = 2;
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U688[2] )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[2] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[2], 0 );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U688[2], -261.24770000, -267.17830000, 13.56350000, 6.00000000 );
                            TASK_COMBAT( l_U688[2], sub_2845() );
                            l_U631[2]++;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U688[2] )))
                    {
                        if (l_U662 >= 2)
                        {
                            CLEAR_CHAR_TASKS( l_U688[2] );
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U688[2] );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[2], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            TASK_COMBAT( l_U688[2], sub_2845() );
                            l_U631[2]++;
                        }
                    }
                    break;
                }
                switch (l_U631[3])
                {
                    case 0:
                    l_U631[3] = 2;
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U688[3] )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[3] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[3], 0 );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[3], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            TASK_COMBAT( l_U688[3], sub_2845() );
                            l_U631[3]++;
                        }
                    }
                    break;
                }
                switch (l_U654[1])
                {
                    case 0:
                    if (l_U662 >= 3)
                    {
                        l_U654[1]++;
                    }
                    break;
                    case 1:
                    REQUEST_MODEL( -322343873 );
                    REQUEST_CAR_RECORDING( 513 );
                    l_U654[1]++;
                    break;
                    case 2:
                    if ((HAS_MODEL_LOADED( -322343873 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 513 )))
                    {
                        sub_29804();
                        CREATE_CAR( -322343873, -243.29000000, -173.26000000, 13.77000000, ref l_U847[1], 1 );
                        SET_CAR_HEADING( l_U847[1], 180.00000000 );
                        START_PLAYBACK_RECORDED_CAR( l_U847[1], 513 );
                        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U847[1], 1 );
                        l_U654[1]++;
                    }
                    break;
                    case 3:
                    if (IS_VEH_DRIVEABLE( l_U847[1] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U847[1] ))
                        {
                            sub_32196( l_U847[1], 1500.00000000 );
                            l_U654[1]++;
                        }
                    }
                    break;
                    case 4:
                    if (l_U584[1] > 7000.00000000)
                    {
                        sub_29645( 1 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U847[1] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U847[1] ))
                        {
                            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U847[1], sub_2845() ))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U847[1] );
                            }
                        }
                        if ((NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U847[1] ))) || (sub_32418( l_U847[1] )))
                        {
                            if (sub_32563( l_U847[1] ))
                            {
                                l_U654[1]++;
                            }
                        }
                        else
                        {
                            l_U584[1] = FIND_TIME_POSITION_IN_RECORDING( l_U847[1] );
                        }
                    }
                    else
                    {
                        l_U654[1]++;
                    }
                    break;
                    case 5:
                    sub_29804();
                    if (IS_VEH_DRIVEABLE( l_U847[1] ))
                    {
                        sub_30040( ref l_U847[1] );
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U688[4] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[4] ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U688[4] );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U688[5] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[5] ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U688[5] );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U688[6] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[6] ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U688[6] );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U688[7] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[7] ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U688[7] );
                        }
                    }
                    sub_29645( 1 );
                    l_U654[1]++;
                    break;
                    case 6:
                    if (NOT (IS_CAR_DEAD( l_U847[1] )))
                    {
                        GET_CAR_HEALTH( l_U847[1], ref I );
                        if (I < 400)
                        {
                            EXPLODE_CAR( l_U847[1], 1, 0 );
                            l_U654[1]++;
                        }
                    }
                    break;
                }
                switch (l_U631[4])
                {
                    case 0:
                    if (DOES_VEHICLE_EXIST( l_U847[1] ))
                    {
                        l_U631[4]++;
                    }
                    break;
                    case 1:
                    if (IS_VEH_DRIVEABLE( l_U847[1] ))
                    {
                        CREATE_CHAR_INSIDE_CAR( l_U847[1], 26, -503930010, ref l_U688[4] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[4] );
                        GIVE_WEAPON_TO_CHAR( l_U688[4], 12, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U688[4], 12, 1 );
                        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[4], 1, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[4], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[4], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[4], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[4], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[4], 0 );
                        ADD_BLIP_FOR_CHAR( l_U688[4], ref l_U532[4] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[4], 1 );
                        sub_27653( ref l_U688[4], ref l_U630 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[4], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[4], 1 );
                        SET_CHAR_ACCURACY( l_U688[4], 15 );
                        SET_CHAR_AS_ENEMY( l_U688[4], 1 );
                        l_U631[4]++;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U688[4] )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[4] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[4], 0 );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U688[4], -261.24770000, -267.17830000, 13.56350000, 6.00000000 );
                            TASK_COMBAT( l_U688[4], sub_2845() );
                            l_U631[4]++;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U688[4] )))
                    {
                        if (l_U662 >= 6)
                        {
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U688[4] );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[4], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            l_U631[4]++;
                        }
                    }
                    break;
                }
                switch (l_U631[5])
                {
                    case 0:
                    if (DOES_VEHICLE_EXIST( l_U847[1] ))
                    {
                        l_U631[5]++;
                    }
                    break;
                    case 1:
                    if (IS_VEH_DRIVEABLE( l_U847[1] ))
                    {
                        CREATE_CHAR_AS_PASSENGER( l_U847[1], 26, -503930010, 0, ref l_U688[5] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[5] );
                        GIVE_WEAPON_TO_CHAR( l_U688[5], 7, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U688[5], 7, 1 );
                        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[5], 1, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[5], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[5], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[5], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[5], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[5], 0 );
                        ADD_BLIP_FOR_CHAR( l_U688[5], ref l_U532[5] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[5], 1 );
                        sub_27653( ref l_U688[5], ref l_U630 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[5], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[5], 1 );
                        SET_CHAR_ACCURACY( l_U688[5], 20 );
                        SET_CHAR_AS_ENEMY( l_U688[5], 1 );
                        l_U631[5]++;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U688[5] )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[5] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[5], 0 );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[5], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            l_U631[5]++;
                        }
                    }
                    break;
                }
                switch (l_U631[6])
                {
                    case 0:
                    if (DOES_VEHICLE_EXIST( l_U847[1] ))
                    {
                        l_U631[6]++;
                    }
                    break;
                    case 1:
                    if (IS_VEH_DRIVEABLE( l_U847[1] ))
                    {
                        CREATE_CHAR_AS_PASSENGER( l_U847[1], 26, -503930010, 1, ref l_U688[6] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[6] );
                        GIVE_WEAPON_TO_CHAR( l_U688[6], 7, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U688[6], 7, 1 );
                        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[6], 1, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[6], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[6], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[6], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[6], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[6], 0 );
                        ADD_BLIP_FOR_CHAR( l_U688[6], ref l_U532[6] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[6], 1 );
                        sub_27653( ref l_U688[6], ref l_U630 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[6], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[6], 1 );
                        SET_CHAR_ACCURACY( l_U688[6], 20 );
                        SET_CHAR_AS_ENEMY( l_U688[6], 1 );
                        l_U631[6]++;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U688[6] )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[6] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[6], 0 );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[6], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            TASK_COMBAT( l_U688[6], sub_2845() );
                            l_U631[6]++;
                        }
                    }
                    break;
                }
                switch (l_U631[7])
                {
                    case 0:
                    if (DOES_VEHICLE_EXIST( l_U847[1] ))
                    {
                        l_U631[7]++;
                    }
                    break;
                    case 1:
                    if (IS_VEH_DRIVEABLE( l_U847[1] ))
                    {
                        CREATE_CHAR_AS_PASSENGER( l_U847[1], 26, -503930010, 2, ref l_U688[7] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[7] );
                        GIVE_WEAPON_TO_CHAR( l_U688[7], 10, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U688[7], 10, 1 );
                        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[7], 1, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[7], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[7], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[7], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[7], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[7], 0 );
                        ADD_BLIP_FOR_CHAR( l_U688[7], ref l_U532[7] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[7], 1 );
                        sub_27653( ref l_U688[7], ref l_U630 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[7], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[7], 1 );
                        SET_CHAR_ACCURACY( l_U688[7], 15 );
                        SET_CHAR_AS_ENEMY( l_U688[7], 1 );
                        l_U631[7]++;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U688[7] )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[7] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[7], 0 );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U688[7], -261.24770000, -267.17830000, 13.56350000, 6.00000000 );
                            l_U631[7]++;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U688[7] )))
                    {
                        if (l_U662 >= 6)
                        {
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U688[7] );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[7], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            l_U631[7]++;
                        }
                    }
                    break;
                }
                switch (l_U654[2])
                {
                    case 0:
                    if (l_U662 >= 6)
                    {
                        l_U654[2]++;
                    }
                    break;
                    case 1:
                    REQUEST_MODEL( -322343873 );
                    REQUEST_CAR_RECORDING( 516 );
                    l_U654[2]++;
                    break;
                    case 2:
                    if ((HAS_MODEL_LOADED( -322343873 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 516 )))
                    {
                        sub_29804();
                        CREATE_CAR( -322343873, -180.05370000, -301.24590000, 14.14000000, ref l_U847[2], 1 );
                        SET_CAR_HEADING( l_U847[2], 90.00000000 );
                        START_PLAYBACK_RECORDED_CAR( l_U847[2], 516 );
                        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U847[2], 1 );
                        l_U654[2]++;
                    }
                    break;
                    case 3:
                    if (IS_VEH_DRIVEABLE( l_U847[2] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U847[2] ))
                        {
                            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U847[2], 1500.00000000 );
                            l_U654[2]++;
                        }
                    }
                    break;
                    case 4:
                    if (l_U584[2] > 9500.00000000)
                    {
                        sub_29645( 3 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U847[2] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U847[2] ))
                        {
                            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U847[2], sub_2845() ))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U847[2] );
                            }
                        }
                        if ((NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U847[2] ))) || (sub_32418( l_U847[2] )))
                        {
                            if (sub_32563( l_U847[2] ))
                            {
                                l_U654[2]++;
                            }
                        }
                        else
                        {
                            l_U584[2] = FIND_TIME_POSITION_IN_RECORDING( l_U847[2] );
                        }
                    }
                    else
                    {
                        l_U654[2]++;
                    }
                    break;
                    case 5:
                    sub_29804();
                    if (IS_VEH_DRIVEABLE( l_U847[2] ))
                    {
                        sub_30040( ref l_U847[2] );
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U688[8] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[8] ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U688[8] );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U688[9] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[9] ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U688[9] );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U688[10] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[10] ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U688[10] );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U688[11] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[11] ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U688[11] );
                        }
                    }
                    sub_29645( 3 );
                    l_U654[2]++;
                    break;
                }
                switch (l_U631[8])
                {
                    case 0:
                    if (DOES_VEHICLE_EXIST( l_U847[2] ))
                    {
                        l_U631[8]++;
                    }
                    break;
                    case 1:
                    if (IS_VEH_DRIVEABLE( l_U847[2] ))
                    {
                        CREATE_CHAR_INSIDE_CAR( l_U847[2], 26, -503930010, ref l_U688[8] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[8] );
                        GIVE_WEAPON_TO_CHAR( l_U688[8], 10, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U688[8], 10, 1 );
                        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[8], 1, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[8], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[8], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[8], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[8], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[8], 0 );
                        ADD_BLIP_FOR_CHAR( l_U688[8], ref l_U532[8] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[8], 1 );
                        sub_27653( ref l_U688[8], ref l_U630 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[8], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[8], 1 );
                        SET_CHAR_ACCURACY( l_U688[8], 15 );
                        SET_CHAR_AS_ENEMY( l_U688[8], 1 );
                        l_U631[8]++;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U688[8] )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[8] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[8], 0 );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U688[8], -260.86460000, -281.81060000, 13.36330000, 6.00000000 );
                            TASK_COMBAT( l_U688[8], sub_2845() );
                            l_U631[8]++;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U688[8] )))
                    {
                        if (l_U662 >= 10)
                        {
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U688[8] );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[8], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            l_U631[8]++;
                        }
                    }
                    break;
                }
                switch (l_U631[9])
                {
                    case 0:
                    if (DOES_VEHICLE_EXIST( l_U847[2] ))
                    {
                        l_U631[9]++;
                    }
                    break;
                    case 1:
                    if (IS_VEH_DRIVEABLE( l_U847[2] ))
                    {
                        CREATE_CHAR_AS_PASSENGER( l_U847[2], 26, -503930010, 0, ref l_U688[9] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[9] );
                        GIVE_WEAPON_TO_CHAR( l_U688[9], 7, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U688[9], 7, 1 );
                        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[9], 1, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[9], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[9], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[9], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[9], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[9], 0 );
                        ADD_BLIP_FOR_CHAR( l_U688[9], ref l_U532[9] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[9], 1 );
                        sub_27653( ref l_U688[9], ref l_U630 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[9], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[9], 1 );
                        SET_CHAR_ACCURACY( l_U688[9], 20 );
                        SET_CHAR_AS_ENEMY( l_U688[9], 1 );
                        l_U631[9]++;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U688[9] )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[9] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[9], 0 );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[9], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            l_U631[9]++;
                        }
                    }
                    break;
                }
                switch (l_U631[10])
                {
                    case 0:
                    if (DOES_VEHICLE_EXIST( l_U847[2] ))
                    {
                        l_U631[10]++;
                    }
                    break;
                    case 1:
                    if (IS_VEH_DRIVEABLE( l_U847[2] ))
                    {
                        CREATE_CHAR_AS_PASSENGER( l_U847[2], 26, -503930010, 1, ref l_U688[10] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[10] );
                        GIVE_WEAPON_TO_CHAR( l_U688[10], 12, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U688[10], 12, 1 );
                        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[10], 1, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[10], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[10], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[10], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[10], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[10], 0 );
                        ADD_BLIP_FOR_CHAR( l_U688[10], ref l_U532[10] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[10], 1 );
                        sub_27653( ref l_U688[10], ref l_U630 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[10], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[10], 1 );
                        SET_CHAR_ACCURACY( l_U688[10], 15 );
                        SET_CHAR_AS_ENEMY( l_U688[10], 1 );
                        l_U631[10]++;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U688[10] )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[10] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[10], 0 );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U688[10], -260.86460000, -281.81060000, 13.36330000, 6.00000000 );
                            TASK_COMBAT( l_U688[10], sub_2845() );
                            l_U631[10]++;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U688[10] )))
                    {
                        if (l_U662 >= 10)
                        {
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U688[10] );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[10], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            l_U631[10]++;
                        }
                    }
                    break;
                }
                switch (l_U631[11])
                {
                    case 0:
                    if (DOES_VEHICLE_EXIST( l_U847[2] ))
                    {
                        l_U631[11]++;
                    }
                    break;
                    case 1:
                    if (IS_VEH_DRIVEABLE( l_U847[2] ))
                    {
                        CREATE_CHAR_AS_PASSENGER( l_U847[2], 26, -503930010, 2, ref l_U688[11] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[11] );
                        GIVE_WEAPON_TO_CHAR( l_U688[11], 7, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U688[11], 7, 1 );
                        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[11], 1, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[11], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[11], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[11], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[11], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[11], 0 );
                        ADD_BLIP_FOR_CHAR( l_U688[11], ref l_U532[11] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[11], 1 );
                        sub_27653( ref l_U688[11], ref l_U630 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[11], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[11], 1 );
                        SET_CHAR_ACCURACY( l_U688[11], 20 );
                        SET_CHAR_AS_ENEMY( l_U688[11], 1 );
                        l_U631[11]++;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U688[11] )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[11] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[11], 0 );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[11], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            l_U631[11]++;
                        }
                    }
                    break;
                }
                switch (l_U631[12])
                {
                    case 0:
                    if (l_U662 >= 10)
                    {
                        l_U631[12]++;
                    }
                    break;
                    case 1:
                    if (NOT (sub_7767( -241.73120000, -269.51130000, 13.53040000, 2.00000000, 30.00000000 )))
                    {
                        CREATE_CHAR( 26, -503930010, -241.73120000, -269.51130000, 13.53040000, ref l_U688[12], 1 );
                        SET_CHAR_HEADING( l_U688[12], 113.52930000 );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[12] );
                        GIVE_WEAPON_TO_CHAR( l_U688[12], 7, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U688[12], 7, 1 );
                        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[12], 1, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[12], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[12], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[12], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[12], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[12], 0 );
                        ADD_BLIP_FOR_CHAR( l_U688[12], ref l_U532[12] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[12], 1 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[12], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[12], 1 );
                        OPEN_SEQUENCE_TASK( ref l_U739 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -266.66240000, -263.99820000, 14.54890000, 3, -1, 5.00000000 );
                        CLOSE_SEQUENCE_TASK( l_U739 );
                        TASK_PERFORM_SEQUENCE( l_U688[12], l_U739 );
                        CLEAR_SEQUENCE_TASK( l_U739 );
                        SETTIMERA( 0 );
                        SET_CHAR_ACCURACY( l_U688[12], 20 );
                        SET_CHAR_AS_ENEMY( l_U688[12], 1 );
                        l_U631[12]++;
                    }
                    break;
                    case 2:
                    if (TIMERA() > 1000)
                    {
                        sub_29645( 2 );
                        l_U631[12]++;
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U688[12] )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U688[12], 29, ref l_U737 );
                        if (l_U737 == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[12], 0 );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[12], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            TASK_COMBAT( l_U688[12], sub_2845() );
                            l_U631[12]++;
                        }
                        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U688[12], sub_2845(), 10.00000000, 10.00000000, 10.00000000, 0 ))
                        {
                            CLEAR_CHAR_TASKS( l_U688[12] );
                        }
                    }
                    break;
                }
                switch (l_U631[13])
                {
                    case 0:
                    if (l_U662 >= 10)
                    {
                        l_U631[13]++;
                    }
                    break;
                    case 1:
                    if (NOT (sub_7767( -237.89970000, -268.95730000, 13.53630000, 2.00000000, 30.00000000 )))
                    {
                        CREATE_CHAR( 26, -503930010, -237.89970000, -268.95730000, 13.53630000, ref l_U688[13], 1 );
                        SET_CHAR_HEADING( l_U688[13], 111.10000000 );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[13] );
                        GIVE_WEAPON_TO_CHAR( l_U688[13], 12, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U688[13], 12, 1 );
                        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[13], 1, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[13], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[13], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[13], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[13], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[13], 0 );
                        ADD_BLIP_FOR_CHAR( l_U688[13], ref l_U532[13] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[13], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[13], 1 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[13], 1 );
                        OPEN_SEQUENCE_TASK( ref l_U739 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -266.66240000, -263.99820000, 14.54890000, 3, -1, 5.00000000 );
                        CLOSE_SEQUENCE_TASK( l_U739 );
                        TASK_PERFORM_SEQUENCE( l_U688[13], l_U739 );
                        CLEAR_SEQUENCE_TASK( l_U739 );
                        SET_CHAR_ACCURACY( l_U688[13], 15 );
                        SET_CHAR_AS_ENEMY( l_U688[13], 1 );
                        l_U631[13]++;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U688[13] )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U688[13], 29, ref l_U737 );
                        if (l_U737 == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[13], 0 );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[13], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            l_U631[13]++;
                        }
                        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U688[13], sub_2845(), 10.00000000, 10.00000000, 10.00000000, 0 ))
                        {
                            CLEAR_CHAR_TASKS( l_U688[13] );
                        }
                    }
                    break;
                }
                switch (l_U631[14])
                {
                    case 0:
                    if (l_U662 >= 10)
                    {
                        l_U631[14]++;
                    }
                    break;
                    case 1:
                    if (NOT (sub_7767( -226.95180000, -262.68140000, 13.56260000, 2.00000000, 30.00000000 )))
                    {
                        CREATE_CHAR( 26, -503930010, -226.95180000, -262.68140000, 13.56260000, ref l_U688[14], 1 );
                        SET_CHAR_HEADING( l_U688[14], 151.00000000 );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[14] );
                        GIVE_WEAPON_TO_CHAR( l_U688[14], 10, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U688[14], 10, 1 );
                        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[14], 1, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[14], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[14], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[14], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[14], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[14], 0 );
                        ADD_BLIP_FOR_CHAR( l_U688[14], ref l_U532[14] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[14], 1 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[14], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[14], 1 );
                        OPEN_SEQUENCE_TASK( ref l_U739 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -252.89010000, -270.28970000, 14.51840000, 3, -1, 5.00000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -256.34980000, -270.40480000, 14.51750000, 3, -1, 5.00000000 );
                        CLOSE_SEQUENCE_TASK( l_U739 );
                        TASK_PERFORM_SEQUENCE( l_U688[14], l_U739 );
                        CLEAR_SEQUENCE_TASK( l_U739 );
                        SET_CHAR_ACCURACY( l_U688[14], 20 );
                        SET_CHAR_AS_ENEMY( l_U688[14], 1 );
                        l_U631[14]++;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U688[14] )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U688[14], 29, ref l_U737 );
                        if (l_U737 == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[14], 0 );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[14], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            TASK_COMBAT( l_U688[14], sub_2845() );
                            l_U631[14]++;
                        }
                        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U688[14], sub_2845(), 10.00000000, 10.00000000, 10.00000000, 0 ))
                        {
                            CLEAR_CHAR_TASKS( l_U688[14] );
                        }
                    }
                    break;
                }
                switch (l_U631[15])
                {
                    case 0:
                    if (l_U662 >= 10)
                    {
                        l_U631[15]++;
                    }
                    break;
                    case 1:
                    if (NOT (sub_7767( -225.75360000, -259.81430000, 13.60690000, 2.00000000, 30.00000000 )))
                    {
                        CREATE_CHAR( 26, -503930010, -225.75360000, -259.81430000, 13.60690000, ref l_U688[15], 1 );
                        SET_CHAR_HEADING( l_U688[15], 175.00000000 );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[15] );
                        GIVE_WEAPON_TO_CHAR( l_U688[15], 12, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U688[15], 12, 1 );
                        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U688[15], 1, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[15], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[15], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[15], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[15], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[15], 0 );
                        ADD_BLIP_FOR_CHAR( l_U688[15], ref l_U532[15] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[15], 1 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[15], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[15], 1 );
                        OPEN_SEQUENCE_TASK( ref l_U739 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -252.89010000, -270.28970000, 14.51840000, 3, -1, 5.00000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -256.34980000, -270.40480000, 14.51750000, 3, -1, 5.00000000 );
                        CLOSE_SEQUENCE_TASK( l_U739 );
                        TASK_PERFORM_SEQUENCE( l_U688[15], l_U739 );
                        CLEAR_SEQUENCE_TASK( l_U739 );
                        SET_CHAR_ACCURACY( l_U688[15], 15 );
                        SET_CHAR_AS_ENEMY( l_U688[15], 1 );
                        l_U631[15]++;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U688[15] )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U688[15], 29, ref l_U737 );
                        if (l_U737 == 7)
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[15], 0 );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U688[15], l_U743._fU0, l_U743._fU4, l_U743._fU8, l_U746._fU0, l_U746._fU4, l_U746._fU8, l_U628 );
                            l_U631[15]++;
                        }
                        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U688[15], sub_2845(), 10.00000000, 10.00000000, 10.00000000, 0 ))
                        {
                            CLEAR_CHAR_TASKS( l_U688[15] );
                        }
                    }
                    break;
                }
                if (l_U662 >= 14)
                {
                    if (NOT l_U561)
                    {
                        if (NOT sub_4122())
                        {
                            SET_FAKE_WANTED_LEVEL( 2 );
                        }
                        l_U561 = 1;
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U709 )))
                {
                    switch (l_U652)
                    {
                        case 0:
                        switch (l_U653)
                        {
                            case 0:
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U709 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709, 1 );
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U709, -269.62600000, -293.20000000, 5.62400000, -269.51900000, -269.46600000, 18.02400000, 6.12500000 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709, 0 );
                            l_U653++;
                            break;
                            case 1:
                            if (NOT sub_16188())
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U709, 40.00000000, 40.00000000, 0 ))
                                {
                                    switch (g_U64933)
                                    {
                                        case 0:
                                        if (l_U663 < l_U674)
                                        {
                                            if (sub_42683( "FM6_FEND1", l_U663, 1, ref l_U125, 6, 1 ))
                                            {
                                                l_U663++;
                                            }
                                        }
                                        else
                                        {
                                            g_U64933 = 1;
                                            l_U653++;
                                        }
                                        break;
                                        case 1:
                                        if (l_U663 < l_U675)
                                        {
                                            if (sub_42683( "FM6_FEND2", l_U663, 1, ref l_U125, 6, 1 ))
                                            {
                                                l_U663++;
                                            }
                                        }
                                        else
                                        {
                                            g_U64933 = 0;
                                            l_U653++;
                                        }
                                        break;
                                    }
                                }
                            }
                            break;
                            case 2:
                            if (NOT sub_16188())
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U709, 40.00000000, 40.00000000, 0 ))
                                {
                                    if (sub_43845( "FM6_FATTK", ref l_U125, 6, 1 ))
                                    {
                                        l_U653++;
                                    }
                                }
                            }
                            break;
                            case 3:
                            if (NOT sub_16188())
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U709, 40.00000000, 40.00000000, 0 ))
                                {
                                    if (sub_43845( "FM6_SHOUT", ref l_U125, 6, 1 ))
                                    {
                                        l_U663 = 0;
                                        l_U653++;
                                    }
                                }
                            }
                            break;
                            case 4:
                            if (NOT sub_16188())
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U709, 40.00000000, 40.00000000, 0 ))
                                {
                                    if (sub_43845( "FM6_WHO", ref l_U125, 6, 1 ))
                                    {
                                        l_U653++;
                                    }
                                }
                            }
                            break;
                            case 5:
                            if (NOT sub_16188())
                            {
                                if (TIMERB() > 30000)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U709, 40.00000000, 40.00000000, 0 ))
                                    {
                                        if (sub_43845( "FM6_FIGHT", ref l_U125, 6, 1 ))
                                        {
                                            SETTIMERB( 0 );
                                        }
                                    }
                                }
                            }
                            break;
                        }
                        if ((NOT sub_16188()) AND (TIMERA() > 20000))
                        {
                            if (sub_44269())
                            {
                                SETTIMERA( 0 );
                            }
                        }
                        break;
                        case 1:
                        if (NOT sub_16188())
                        {
                            switch (l_U653)
                            {
                                case 0:
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U709, 40.00000000, 40.00000000, 0 ))
                                {
                                    if (sub_43845( "FM6_CAR2", ref l_U125, 6, 1 ))
                                    {
                                        l_U653++;
                                    }
                                }
                                break;
                                case 1:
                                if (TIMERB() > 30000)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U709, 40.00000000, 40.00000000, 0 ))
                                    {
                                        if (sub_43845( "FM6_FIGHT", ref l_U125, 6, 1 ))
                                        {
                                            SETTIMERB( 0 );
                                        }
                                    }
                                }
                                break;
                            }
                        }
                        if ((NOT sub_16188()) AND (TIMERA() > 20000))
                        {
                            if (sub_44269())
                            {
                                SETTIMERA( 0 );
                            }
                        }
                        break;
                        case 2:
                        if (LOCATE_CHAR_ON_FOOT_3D( l_U709, -270.25680000, -285.74440000, 14.31560000, 3.00000000, 3.00000000, 3.00000000, 0 ))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709, 0 );
                        }
                        if (NOT sub_16188())
                        {
                            switch (l_U653)
                            {
                                case 0:
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U709, 40.00000000, 40.00000000, 0 ))
                                {
                                    if (sub_43845( "FM6_VAN2", ref l_U125, 6, 1 ))
                                    {
                                        l_U653++;
                                    }
                                }
                                break;
                                case 1:
                                if (TIMERB() > 30000)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U709, 40.00000000, 40.00000000, 0 ))
                                    {
                                        if (sub_43845( "FM6_FIGHT", ref l_U125, 6, 1 ))
                                        {
                                            SETTIMERB( 0 );
                                        }
                                    }
                                }
                                break;
                            }
                        }
                        if ((NOT sub_16188()) AND (TIMERA() > 20000))
                        {
                            if (sub_44269())
                            {
                                SETTIMERA( 0 );
                            }
                        }
                        break;
                        case 3:
                        if (LOCATE_CHAR_ON_FOOT_3D( l_U709, -270.24070000, -273.68490000, 14.47570000, 3.00000000, 3.00000000, 3.00000000, 0 ))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709, 0 );
                        }
                        if (NOT sub_16188())
                        {
                            switch (l_U653)
                            {
                                case 0:
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U709, 40.00000000, 40.00000000, 0 ))
                                {
                                    if (sub_43845( "FM6_CAR3", ref l_U125, 6, 1 ))
                                    {
                                        l_U653++;
                                    }
                                }
                                break;
                                case 1:
                                if (TIMERB() > 30000)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U709, 40.00000000, 40.00000000, 0 ))
                                    {
                                        if (sub_43845( "FM6_FIGHT", ref l_U125, 6, 1 ))
                                        {
                                            SETTIMERB( 0 );
                                        }
                                    }
                                }
                                break;
                            }
                        }
                        if ((NOT sub_16188()) AND (TIMERA() > 20000))
                        {
                            if (sub_44269())
                            {
                                SETTIMERA( 0 );
                            }
                        }
                        break;
                    }
                    GET_SCRIPT_TASK_STATUS( l_U709, 91, ref l_U737 );
                    if (l_U737 == 7)
                    {
                        iVar17 = 0;
                        for ( I = 0; I < 16; I++ )
                        {
                            if (DOES_CHAR_EXIST( l_U688[I] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U688[I] )))
                                {
                                    iVar17 = I;
                                }
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U688[iVar17] )))
                        {
                            TASK_COMBAT( l_U709, l_U688[iVar17] );
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U709 )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U709, 200.00000000, 200.00000000, 0 )))
                    {
                        SET_CHAR_HEALTH( l_U709, 0 );
                    }
                }
                for ( I = 0; I < 20; I++ )
                {
                    if (IS_CHAR_INJURED( l_U688[I] ))
                    {
                        if (DOES_BLIP_EXIST( l_U532[I] ))
                        {
                            REMOVE_BLIP( l_U532[I] );
                        }
                    }
                }
                l_U662 = 0;
                for ( I = 0; I < 20; I++ )
                {
                    if ((DOES_CHAR_EXIST( l_U688[I] )) || (l_U631[I] > 1))
                    {
                        if (IS_CHAR_INJURED( l_U688[I] ))
                        {
                            l_U662++;
                        }
                    }
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
                {
                    for ( I = 0; I < 20; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U688[I] ))
                        {
                            DELETE_CHAR( ref l_U688[I] );
                            if (DOES_BLIP_EXIST( l_U532[I] ))
                            {
                                REMOVE_BLIP( l_U532[I] );
                            }
                        }
                    }
                    l_U662 = 16;
                }
                if (l_U662 == 16)
                {
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U683[2] );
                    sub_7949( 6, 1 );
                }
                break;
            }
            break;
            case 6:
            sub_46435();
            switch (ProtectedGet(l_U99))
            {
                case 0:
                SET_PED_IS_BLIND_RAGING( sub_2845(), 0 );
                sub_21897( 10 );
                if (sub_4122())
                {
                    sub_21897( 15 );
                }
                else
                {
                    sub_21897( 11 );
                }
                REQUEST_MODEL( -322700377 );
                REQUEST_MODEL( -19263344 );
                REQUEST_MODEL( 453461275 );
                REQUEST_ANIMS( "missfrancis6" );
                REQUEST_ANIMS( "gestures@niko" );
                REQUEST_CAR_RECORDING( 518 );
                REQUEST_CAR_RECORDING( 519 );
                while ((((((((NOT (sub_22728( 10 ))) || (NOT (HAS_MODEL_LOADED( -322700377 )))) || (NOT (HAS_MODEL_LOADED( -19263344 )))) || (NOT (HAS_MODEL_LOADED( 453461275 )))) || (NOT (HAVE_ANIMS_LOADED( "missfrancis6" )))) || (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 518 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 519 ))))
                {
                    WAIT( 0 );
                    sub_21897( 10 );
                    REQUEST_MODEL( -322700377 );
                    REQUEST_MODEL( -19263344 );
                    REQUEST_MODEL( 453461275 );
                    REQUEST_ANIMS( "missfrancis6" );
                    REQUEST_ANIMS( "gestures@niko" );
                    REQUEST_CAR_RECORDING( 518 );
                    REQUEST_CAR_RECORDING( 519 );
                }
                if (sub_4122())
                {
                    while (NOT (sub_22728( 15 )))
                    {
                        WAIT( 0 );
                        sub_21897( 15 );
                    }
                }
                else
                {
                    while (NOT (sub_22728( 11 )))
                    {
                        WAIT( 0 );
                        sub_21897( 11 );
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (NOT (IS_VEH_DRIVEABLE( l_U853[I] )))
                    {
                        DELETE_CAR( ref l_U853[I] );
                        if (I == 0)
                        {
                            CREATE_CAR( 1777363799, -268.29110000, -278.46880000, 14.06130000, ref l_U853[0], 1 );
                            SET_CAR_HEADING( l_U853[0], 180.00000000 );
                        }
                        else
                        {
                            CREATE_CAR( 1777363799, -268.29120000, -272.03300000, 14.15120000, ref l_U853[1], 1 );
                            SET_CAR_HEADING( l_U853[1], 180.00000000 );
                        }
                        CHANGE_CAR_COLOUR( l_U853[I], 0, 0 );
                        SET_EXTRA_CAR_COLOURS( l_U853[I], 8, 0 );
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U852 ))
                {
                    FIX_CAR( l_U852 );
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (IS_VEH_DRIVEABLE( l_U853[I] ))
                    {
                        FREEZE_CAR_POSITION( l_U853[I], 0 );
                    }
                }
                sub_47644( 1, 1 );
                g_U9156 = 1;
                if ((IS_CHAR_IN_AREA_3D( sub_2845(), -271.88800000, -291.34990000, 12.69440000, -262.88800000, -271.27490000, 16.36940000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_2845(), -283.15560000, -285.21780000, 13.62390000, -278.43060000, -279.46780000, 18.72390000, 0 )))
                {
                    SET_CHAR_COORDINATES( sub_2845(), -276.85560000, -284.44280000, 13.61880000 );
                    SET_CHAR_HEADING( sub_2845(), 271.63060000 );
                }
                CREATE_CHAR( 26, -322700377, -274.77500000, -280.86330000, 13.33960000, ref l_U713[0], 1 );
                SET_CHAR_HEADING( l_U713[0], 270.00000000 );
                SET_CHAR_DECISION_MAKER( l_U713[0], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U713[0], l_U583 );
                SET_CHAR_WILL_USE_COVER( l_U713[0], 1 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U713[0], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[0], 1 );
                SET_CHAR_NEVER_TARGETTED( l_U713[0], 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U713[0], 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U713[0], 0 );
                SET_PED_DIES_WHEN_INJURED( l_U713[0], 1 );
                UNLOCK_RAGDOLL( l_U713[0], 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[0], 1, 0, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[0], 2, 0, 1 );
                if (sub_4122())
                {
                    sub_24193( 15, ref l_U713[1], -273.05800000, -282.47710000, 13.31400000, 270.00000000 );
                    SET_CHAR_COMPONENT_VARIATION( l_U713[1], 1, 0, 0 );
                    SET_CHAR_COMPONENT_VARIATION( l_U713[1], 2, 1, 1 );
                }
                else
                {
                    sub_24193( 11, ref l_U713[1], -273.05800000, -282.47710000, 13.31400000, 270.00000000 );
                    SET_CHAR_COMPONENT_VARIATION( l_U713[1], 1, 0, 0 );
                    SET_CHAR_COMPONENT_VARIATION( l_U713[1], 2, 0, 0 );
                }
                GIVE_WEAPON_TO_CHAR( l_U713[1], 7, 30000, 0 );
                SET_CHAR_DECISION_MAKER( l_U713[1], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U713[1], l_U583 );
                SET_CHAR_WILL_USE_COVER( l_U713[1], 1 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U713[1], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[1], 1 );
                SET_CHAR_NEVER_TARGETTED( l_U713[1], 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U713[1], 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U713[1], 0 );
                SET_PED_DIES_WHEN_INJURED( l_U713[1], 1 );
                UNLOCK_RAGDOLL( l_U713[1], 0 );
                sub_24193( 10, ref l_U713[2], -277.28720000, -278.74030000, 13.39810000, 301.00000000 );
                SET_CHAR_DECISION_MAKER( l_U713[2], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U713[2], l_U583 );
                SET_CHAR_WILL_USE_COVER( l_U713[2], 1 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U713[2], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[2], 1 );
                SET_CHAR_NEVER_TARGETTED( l_U713[2], 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U713[2], 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U713[2], 0 );
                SET_PED_DIES_WHEN_INJURED( l_U713[2], 1 );
                UNLOCK_RAGDOLL( l_U713[2], 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[2], 1, 0, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[2], 2, 0, 1 );
                CREATE_CHAR( 26, -19263344, -279.01000000, -281.77000000, 14.00000000, ref l_U713[3], 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U713[3] );
                SET_CHAR_HEADING( l_U713[3], 304.00000000 );
                GIVE_WEAPON_TO_CHAR( l_U713[3], 7, 30000, 0 );
                SET_CHAR_DECISION_MAKER( l_U713[3], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U713[3], l_U583 );
                SET_CHAR_WILL_USE_COVER( l_U713[3], 1 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U713[3], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[3], 1 );
                SET_CHAR_NEVER_TARGETTED( l_U713[3], 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U713[3], 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U713[3], 0 );
                SET_PED_DIES_WHEN_INJURED( l_U713[3], 1 );
                UNLOCK_RAGDOLL( l_U713[3], 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[3], 1, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[3], 2, 0, 1 );
                CLEAR_AREA( -268.29120000, -272.03300000, 14.15120000, 6.00000000, 1 );
                CLEAR_AREA( -268.29120000, -272.03300000, 14.15120000, 6.00000000, 1 );
                CLEAR_AREA( -258.94090000, -296.05020000, 13.13830000, 20.00000000, 1 );
                if (NOT (IS_CHAR_INJURED( l_U709 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U709 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709, 1 );
                    CLEAR_AREA( -270.28820000, -284.42290000, 13.32930000, 2.00000000, 1 );
                    SET_CHAR_COORDINATES( l_U709, -270.28820000, -284.42290000, 13.32930000 );
                    SET_CHAR_HEADING( l_U709, 300.58410000 );
                }
                for ( I = 0; I < 4; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U713[I] )))
                    {
                        SET_PED_ALPHA( l_U713[I], 255 );
                    }
                }
                CREATE_CAM( 14, ref l_U111 );
                SET_CAM_POS( l_U111, -265.20160000, -278.47780000, 14.08332000 );
                SET_CAM_ROT( l_U111, 0.27686100, 0.00000000, 149.07530000 );
                SET_CAM_FOV( l_U111, 26.20007000 );
                SET_CAM_ACTIVE( l_U111, 1 );
                SET_CAM_PROPAGATE( l_U111, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SETTIMERA( 0 );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                if (NOT sub_16188())
                {
                    if (sub_43845( "FM6_BREAK", ref l_U125, 6, 1 ))
                    {
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                break;
                case 2:
                if (NOT sub_16188())
                {
                    if (sub_43845( "FM6_CALLS", ref l_U125, 6, 1 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U709 )))
                        {
                            TASK_LOOK_AT_COORD( l_U709, -280.23780000, -282.20330000, 15.63310000, 3000, 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U713[0] )))
                        {
                            if (IS_VEH_DRIVEABLE( l_U853[0] ))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[0], 1 );
                                CLEAR_CHAR_TASKS( l_U713[0] );
                                OPEN_SEQUENCE_TASK( ref l_U739 );
                                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U853[0], 10000, 0 );
                                CLOSE_SEQUENCE_TASK( l_U739 );
                                TASK_PERFORM_SEQUENCE( l_U713[0], l_U739 );
                                CLEAR_SEQUENCE_TASK( l_U739 );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U713[1] )))
                        {
                            if (IS_VEH_DRIVEABLE( l_U853[0] ))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[1], 1 );
                                CLEAR_CHAR_TASKS( l_U713[1] );
                                OPEN_SEQUENCE_TASK( ref l_U739 );
                                TASK_ENTER_CAR_AS_DRIVER( 0, l_U853[0], 10000 );
                                CLOSE_SEQUENCE_TASK( l_U739 );
                                TASK_PERFORM_SEQUENCE( l_U713[1], l_U739 );
                                CLEAR_SEQUENCE_TASK( l_U739 );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U713[2] )))
                        {
                            if (IS_VEH_DRIVEABLE( l_U853[1] ))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[2], 1 );
                                CLEAR_CHAR_TASKS( l_U713[2] );
                                OPEN_SEQUENCE_TASK( ref l_U739 );
                                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U853[1], 15000, 0 );
                                CLOSE_SEQUENCE_TASK( l_U739 );
                                TASK_PERFORM_SEQUENCE( l_U713[2], l_U739 );
                                CLEAR_SEQUENCE_TASK( l_U739 );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U713[3] )))
                        {
                            if (IS_VEH_DRIVEABLE( l_U853[1] ))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[3], 1 );
                                CLEAR_CHAR_TASKS( l_U713[3] );
                                OPEN_SEQUENCE_TASK( ref l_U739 );
                                TASK_ENTER_CAR_AS_DRIVER( 0, l_U853[1], 10000 );
                                CLOSE_SEQUENCE_TASK( l_U739 );
                                TASK_PERFORM_SEQUENCE( l_U713[3], l_U739 );
                                CLEAR_SEQUENCE_TASK( l_U739 );
                            }
                        }
                        for ( I = 0; I < 4; I++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U713[I] )))
                            {
                                SET_PED_ALPHA( l_U713[I], 255 );
                            }
                        }
                        SETTIMERA( 0 );
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                break;
                case 3:
                if (TIMERA() > 1000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U709 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U713[0] )))
                        {
                            TASK_LOOK_AT_CHAR( l_U709, l_U713[0], 3000, 0 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U709 )))
                    {
                        TASK_PLAY_ANIM( l_U709, "packie_lookabout", "missfrancis6", 8.00000000, 1, 0, 0, 0, -1 );
                    }
                    TASK_PLAY_ANIM( sub_2845(), "niko_lookabout", "missfrancis6", 8.00000000, 1, 0, 0, 0, -1 );
                    if (DOES_CAM_EXIST( l_U111 ))
                    {
                        DESTROY_CAM( l_U111 );
                    }
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    sub_50823();
                    for ( I = 0; I < 4; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U713[I] )))
                        {
                            SET_PED_ALPHA( l_U713[I], 255 );
                        }
                    }
                    SETTIMERA( 0 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 4:
                if (NOT sub_16188())
                {
                    if ((((NOT (IS_CHAR_INJURED( l_U713[0] ))) AND (NOT (IS_CHAR_INJURED( l_U713[1] )))) AND (NOT (IS_CHAR_INJURED( l_U713[2] )))) AND (NOT (IS_CHAR_INJURED( l_U713[3] ))))
                    {
                        if ((IS_VEH_DRIVEABLE( l_U853[0] )) AND (IS_VEH_DRIVEABLE( l_U853[1] )))
                        {
                            if ((((IS_CHAR_IN_CAR( l_U713[0], l_U853[0] )) AND (IS_CHAR_IN_CAR( l_U713[1], l_U853[0] ))) AND (IS_CHAR_IN_CAR( l_U713[2], l_U853[1] ))) AND (IS_CHAR_IN_CAR( l_U713[3], l_U853[1] )))
                            {
                                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                            }
                        }
                    }
                    if ((TIMERA() > 10000) AND (ProtectedGet(l_U99) == 4))
                    {
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                        l_U102 = 1;
                    }
                }
                break;
                case 5:
                if (NOT (IS_CHAR_INJURED( l_U713[0] )))
                {
                    if (IS_VEH_DRIVEABLE( l_U853[0] ))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U713[0], l_U853[0] )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U713[0] );
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U713[0], l_U853[0], 0 );
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U713[1] )))
                {
                    if (IS_VEH_DRIVEABLE( l_U853[0] ))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U713[1], l_U853[0] )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U713[1] );
                            WARP_CHAR_INTO_CAR( l_U713[1], l_U853[0] );
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U713[2] )))
                {
                    if (IS_VEH_DRIVEABLE( l_U853[1] ))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U713[2], l_U853[1] )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U713[2] );
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U713[2], l_U853[1], 0 );
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U713[3] )))
                {
                    if (IS_VEH_DRIVEABLE( l_U853[1] ))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U713[3], l_U853[1] )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U713[3] );
                            WARP_CHAR_INTO_CAR( l_U713[3], l_U853[1] );
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U853[0] ))
                {
                    START_PLAYBACK_RECORDED_CAR( l_U853[0], 518 );
                }
                if (IS_VEH_DRIVEABLE( l_U853[1] ))
                {
                    START_PLAYBACK_RECORDED_CAR( l_U853[1], 519 );
                }
                if (NOT (IS_CAR_DEAD( l_U852 )))
                {
                    CLEAR_AREA( -268.16810000, -288.00000000, 13.76730000, 5.00000000, 1 );
                    FREEZE_CAR_POSITION( l_U852, 0 );
                    SET_CAR_COORDINATES( l_U852, -268.16810000, -288.00000000, 13.76730000 );
                }
                sub_3799();
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                CREATE_CAM( 14, ref l_U111 );
                SET_CAM_POS( l_U111, -262.51110000, -295.07820000, 14.79530000 );
                SET_CAM_ROT( l_U111, -2.11312300, -0.00000000, 17.57109000 );
                SET_CAM_FOV( l_U111, 45.00000000 );
                SET_CAM_ACTIVE( l_U111, 1 );
                SET_CAM_PROPAGATE( l_U111, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SETTIMERA( 0 );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 6:
                if (TIMERA() > 5000)
                {
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                if (l_U102)
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                else
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                }
                for ( I = 0; I < 4; I++ )
                {
                    DELETE_CHAR( ref l_U713[I] );
                }
                REMOVE_ANIMS( "gestures@niko" );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1150599089 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -322700377 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -19263344 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1777363799 );
                sub_52483( 10 );
                if (sub_4122())
                {
                    sub_52483( 15 );
                }
                else
                {
                    sub_52483( 11 );
                }
                if (sub_4122())
                {
                    l_U749[0] = {476.28290000, 303.02470000, 9.09860000};
                    l_U592[0] = 0.90640000;
                    l_U749[1] = {463.84510000, 302.59850000, 8.55290000};
                    l_U592[1] = 7.92810000;
                    l_U759 = {469.01340000, 301.52450000, 10.50000000};
                    l_U613 = 0.00000000;
                }
                else
                {
                    l_U749[0] = {1007.90000000, 986.16850000, 17.03650000};
                    l_U592[0] = 102.59720000;
                    l_U749[1] = {981.44110000, 973.55890000, 19.18140000};
                    l_U592[1] = 127.05360000;
                    l_U759 = {996.71770000, 982.82090000, 17.85140000};
                    l_U613 = 114.38970000;
                }
                if (DOES_VEHICLE_EXIST( l_U853[0] ))
                {
                    DELETE_CAR( ref l_U853[0] );
                }
                if (DOES_VEHICLE_EXIST( l_U853[1] ))
                {
                    DELETE_CAR( ref l_U853[1] );
                }
                if (NOT (IS_CAR_DEAD( l_U852 )))
                {
                    CLEAR_AREA( -268.16810000, -288.00000000, 13.76730000, 5.00000000, 1 );
                    FREEZE_CAR_POSITION( l_U852, 0 );
                    SET_CAR_COORDINATES( l_U852, -268.16810000, -288.00000000, 13.76730000 );
                }
                if (NOT (IS_CHAR_INJURED( l_U709 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U709 );
                    TASK_CLEAR_LOOK_AT( l_U709 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709, 0 );
                }
                if (NOT (IS_CAR_DEAD( l_U852 )))
                {
                    GET_CAR_COORDINATES( l_U852, ref vVar5.x, ref vVar5.y, ref vVar5.z );
                    GET_CHAR_COORDINATES( sub_2845(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
                    uVar11 = {vVar5 - vVar8};
                    GET_HEADING_FROM_VECTOR_2D( uVar11._fU0, uVar11._fU4, ref fVar4 );
                    SET_CHAR_HEADING( sub_2845(), fVar4 );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2845() );
                g_U9156 = 0;
                if (NOT sub_4122())
                {
                    SET_FAKE_WANTED_LEVEL( 2 );
                }
                sub_29000( 0, 1, 0 );
                SET_PLAYER_CONTROL( sub_2775(), 1 );
                sub_7949( 8, 1 );
                break;
            }
            break;
            case 8:
            switch (l_U672)
            {
                case 0:
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_2845(), l_U749[0]._fU0, l_U749[0]._fU4, l_U749[0]._fU8, 250.00000000, 250.00000000, 250.00000000, 0 ))
                {
                    REQUEST_MODEL( 1777363799 );
                    l_U672++;
                }
                break;
                case 1:
                if (HAS_MODEL_LOADED( 1777363799 ))
                {
                    for ( I = 0; I < 2; I++ )
                    {
                        CREATE_CAR( 1777363799, l_U749[I]._fU0, l_U749[I]._fU4, l_U749[I]._fU8, ref l_U853[I], 1 );
                        SET_CAR_HEADING( l_U853[I], l_U592[I] );
                        CHANGE_CAR_COLOUR( l_U853[I], 0, 0 );
                        SET_EXTRA_CAR_COLOURS( l_U853[I], 8, 0 );
                    }
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1777363799 );
                    l_U672++;
                }
                break;
            }
            if (NOT l_U572)
            {
                if (IS_VEH_DRIVEABLE( l_U852 ))
                {
                    if ((IS_CHAR_IN_ANY_CAR( sub_2845() )) || (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2845(), -268.16810000, -288.00000000, 13.76730000, 40.00000000, 40.00000000, 40.00000000, 0 ))))
                    {
                        ALLOW_EMERGENCY_SERVICES( 1 );
                        DONT_DISPATCH_COPS_FOR_PLAYER( sub_2775(), 0 );
                        if (NOT sub_4122())
                        {
                            ALTER_WANTED_LEVEL( sub_2775(), 2 );
                            SET_WANTED_MULTIPLIER( 0.50000000 );
                        }
                        else
                        {
                            SET_WANTED_MULTIPLIER( 0.30000000 );
                        }
                        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_2775() );
                        l_U572 = 1;
                    }
                }
            }
            else if (NOT l_U577)
            {
                SET_FAKE_WANTED_LEVEL( 0 );
                l_U577 = 1;
            }
            switch (ProtectedGet(l_U99))
            {
                case 0:
                if (sub_4122())
                {
                    sub_21897( 11 );
                    while (NOT (sub_22728( 11 )))
                    {
                        WAIT( 0 );
                    }
                }
                else
                {
                    sub_21897( 16 );
                    while (NOT (sub_22728( 16 )))
                    {
                        WAIT( 0 );
                    }
                }
                for ( I = 0; I < 20; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U688[I] ))
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U688[I] );
                    }
                }
                for ( I = 0; I < 4; I++ )
                {
                    if (DOES_VEHICLE_EXIST( l_U847[I] ))
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U847[I] );
                    }
                }
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U856 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U857 );
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2845(), 0 );
                if (IS_VEH_DRIVEABLE( l_U852 ))
                {
                    FREEZE_CAR_POSITION( l_U852, 0 );
                    LOCK_CAR_DOORS( l_U852, 1 );
                    ADD_UPSIDEDOWN_CAR_CHECK( l_U852 );
                }
                if (DOES_BLIP_EXIST( l_U558 ))
                {
                    REMOVE_BLIP( l_U558 );
                }
                SETTIMERA( 0 );
                l_U659[0] = 0;
                l_U659[1] = 0;
                l_U663 = 0;
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                sub_54094();
                if (NOT sub_16188())
                {
                    switch (l_U663)
                    {
                        case 0:
                        if (sub_43845( "FM6_REPEL", ref l_U125, 6, 1 ))
                        {
                            l_U663++;
                        }
                        break;
                        default:
                    }
                }
                bVar3 = false;
                if (TIMERA() > 6000)
                {
                    bVar3 = true;
                }
                if (IS_VEH_DRIVEABLE( l_U852 ))
                {
                    if (IS_CHAR_IN_CAR( sub_2845(), l_U852 ))
                    {
                        bVar3 = true;
                        l_U568 = 1;
                    }
                }
                if ((NOT l_U569) AND (NOT bVar3))
                {
                    if (NOT sub_16188())
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U560 )))
                        {
                            if (IS_VEH_DRIVEABLE( l_U852 ))
                            {
                                ADD_BLIP_FOR_CAR( l_U852, ref l_U560 );
                                SET_BLIP_AS_FRIENDLY( l_U560, 1 );
                            }
                        }
                        sub_16671( "FR6_M10", 0 );
                        l_U569 = 1;
                    }
                }
                if (bVar3)
                {
                    if (IS_VEH_DRIVEABLE( l_U852 ))
                    {
                        if (IS_CHAR_IN_CAR( sub_2845(), l_U852 ))
                        {
                            if (DOES_BLIP_EXIST( l_U560 ))
                            {
                                REMOVE_BLIP( l_U560 );
                            }
                        }
                    }
                    for ( I = 0; I < 20; I++ )
                    {
                        if (DOES_BLIP_EXIST( l_U532[I] ))
                        {
                            REMOVE_BLIP( l_U532[I] );
                        }
                    }
                    for ( I = 0; I < 20; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U688[I] ))
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U688[I] );
                        }
                    }
                    for ( I = 0; I < 4; I++ )
                    {
                        if (DOES_VEHICLE_EXIST( l_U847[I] ))
                        {
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U847[I] );
                        }
                    }
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U856 );
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U857 );
                    l_U652 = 0;
                    l_U653 = 0;
                    l_U663 = 0;
                    l_U573 = 0;
                    l_U574 = 0;
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                else if (NOT (IS_CHAR_INJURED( l_U709 )))
                {
                    if (IS_VEH_DRIVEABLE( l_U852 ))
                    {
                        if (NOT (IS_CHAR_IN_CAR( sub_2845(), l_U852 )))
                        {
                            if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U709, -270.25120000, -287.09180000, 13.26840000, 2.00000000, 2.00000000, 2.00000000, 0 )))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U709, 27, ref l_U737 );
                                if (l_U737 == 7)
                                {
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U709, -270.25120000, -287.09180000, 13.26840000, 3, -1, 1.00000000 );
                                }
                            }
                            else
                            {
                                GET_SCRIPT_TASK_STATUS( l_U709, 34, ref l_U737 );
                                if (l_U737 == 7)
                                {
                                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U709, sub_2845() );
                                }
                            }
                        }
                    }
                }
                break;
                case 2:
                sub_54094();
                if ((l_U564) AND (l_U572))
                {
                    if ((IS_VEH_DRIVEABLE( l_U852 )) AND (sub_55774( sub_2845(), l_U709 )))
                    {
                        switch (l_U676)
                        {
                            case 0:
                            GET_CAR_HEALTH( l_U852, ref I );
                            if (I < 500)
                            {
                                SET_CAR_HEALTH( l_U852, 600 );
                            }
                            I = ROUND( GET_ENGINE_HEALTH( l_U852 ) );
                            if (I < 500)
                            {
                                SET_ENGINE_HEALTH( l_U852, 600.00000000 );
                            }
                            I = ROUND( GET_PETROL_TANK_HEALTH( l_U852 ) );
                            if (I < 500)
                            {
                                SET_PETROL_TANK_HEALTH( l_U852, 600.00000000 );
                            }
                            l_U792 = {l_U774 - l_U768};
                            l_U676++;
                            break;
                            case 1:
                            bVar3 = false;
                            GET_CAR_HEALTH( l_U852, ref I );
                            if (I < 500)
                            {
                                bVar3 = true;
                            }
                            if (IS_VEH_DRIVEABLE( l_U852 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U847[3] ))
                                {
                                    if (IS_CAR_TOUCHING_CAR( l_U852, l_U847[3] ))
                                    {
                                        bVar3 = true;
                                    }
                                }
                            }
                            if (NOT (l_U669 == -1))
                            {
                                if (NOT (IS_CAR_DEAD( l_U852 )))
                                {
                                    GET_CAR_HEALTH( l_U852, ref I );
                                    l_U670 = l_U669 - I;
                                    if (l_U670 >= 25)
                                    {
                                        bVar3 = true;
                                    }
                                    l_U669 = I;
                                }
                            }
                            else if (NOT (IS_CAR_DEAD( l_U852 )))
                            {
                                GET_CAR_HEALTH( l_U852, ref l_U669 );
                            }
                            if (bVar3)
                            {
                                if (IS_VEH_DRIVEABLE( l_U852 ))
                                {
                                    if (NOT (LOCATE_CAR_3D( l_U852, -268.16810000, -286.43270000, 13.76730000, 50.00000000, 50.00000000, 50.00000000, 0 )))
                                    {
                                        SETTIMERA( 0 );
                                        CONTROL_CAR_DOOR( l_U852, 5, 1, 0.10000000 );
                                        l_U676++;
                                        break;
                                    }
                                }
                            }
                            break;
                            case 2:
                            if (TIMERA() > 3000)
                            {
                                if (IS_VEH_DRIVEABLE( l_U852 ))
                                {
                                    BREAK_CAR_DOOR( l_U852, 5, 0 );
                                    PLAY_SOUND_FROM_VEHICLE( -1, "FM6_UNDERTAKER_HEARSE_BACK_DOOR_BREAK", l_U852 );
                                    l_U676++;
                                }
                            }
                            break;
                            case 3:
                            if (NOT sub_16188())
                            {
                                if (NOT (IS_CHAR_INJURED( l_U709 )))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2845(), l_U709, 15.00000000, 15.00000000, 15.00000000, 0 ))
                                    {
                                        if (sub_43845( "FM6_DOOR", ref l_U125, 6, 1 ))
                                        {
                                            if (IS_VEH_DRIVEABLE( l_U852 ))
                                            {
                                                GET_CAR_HEADING( l_U852, ref l_U616 );
                                            }
                                            l_U669 = -1;
                                            l_U676++;
                                        }
                                    }
                                }
                            }
                            break;
                            case 4:
                            if (IS_VEH_DRIVEABLE( l_U852 ))
                            {
                                if ((NOT (IS_CAR_DOOR_DAMAGED( l_U852, 5 ))) || (HAS_CAR_BEEN_RESPRAYED( l_U852 )))
                                {
                                    l_U783 = {l_U768};
                                    l_U618 = 0.00000000;
                                    l_U611 = 0.00000000;
                                    l_U570 = 0;
                                    if (DOES_OBJECT_EXIST( l_U687 ))
                                    {
                                        if (IS_OBJECT_ATTACHED( l_U687 ))
                                        {
                                            sub_23064();
                                        }
                                    }
                                    sub_54094();
                                    l_U676 = 0;
                                    break;
                                }
                            }
                            if (NOT l_U570)
                            {
                                if (IS_VEH_DRIVEABLE( l_U852 ))
                                {
                                    bVar3 = false;
                                    if (l_U591 > 2000.00000000)
                                    {
                                        if ((NOT (l_U669 == -1)) AND (l_U614 > 7.50000000))
                                        {
                                            if (((HAS_CAR_BEEN_DAMAGED_BY_WEAPON( l_U852, 7 )) || (HAS_CAR_BEEN_DAMAGED_BY_WEAPON( l_U852, 12 ))) || (HAS_CAR_BEEN_DAMAGED_BY_WEAPON( l_U852, 10 )))
                                            {
                                                CLEAR_CAR_LAST_WEAPON_DAMAGE( l_U852 );
                                            }
                                            else if (NOT (IS_CAR_DEAD( l_U852 )))
                                            {
                                                GET_CAR_HEALTH( l_U852, ref I );
                                                l_U670 = l_U669 - I;
                                                if (l_U670 >= 10)
                                                {
                                                    bVar3 = true;
                                                }
                                            }
                                        }
                                        if (NOT bVar3)
                                        {
                                            if (NOT (IS_CAR_DEAD( l_U852 )))
                                            {
                                                GET_CAR_SPEED( l_U852, ref fVar4 );
                                                l_U615 = fVar4 - l_U614;
                                                if (l_U615 < -5.00000000)
                                                {
                                                    bVar3 = true;
                                                }
                                            }
                                        }
                                    }
                                    if (l_U591 > 3000.00000000)
                                    {
                                        if (IS_VEH_DRIVEABLE( l_U847[3] ))
                                        {
                                            if (IS_CAR_TOUCHING_CAR( l_U852, l_U847[3] ))
                                            {
                                                GET_CAR_SPEED( l_U847[3], ref fVar4 );
                                                if (fVar4 > 5.00000000)
                                                {
                                                    bVar3 = true;
                                                }
                                            }
                                        }
                                    }
                                    if (bVar3)
                                    {
                                        l_U611 = l_U618;
                                        l_U611 += l_U612;
                                        PLAY_SOUND_FROM_VEHICLE( -1, "FM6_UNDERTAKER_COFFIN_SLIDE", l_U852 );
                                        l_U570 = 1;
                                    }
                                }
                            }
                            if (NOT (IS_CAR_DEAD( l_U852 )))
                            {
                                GET_CAR_SPEED( l_U852, ref l_U614 );
                                SET_CAR_HEALTH( l_U852, 1000 );
                                GET_CAR_HEALTH( l_U852, ref l_U669 );
                            }
                            if (l_U570)
                            {
                                fVar4 = l_U611 - l_U618;
                                if (fVar4 <= 0.05000000)
                                {
                                    l_U618 = l_U611;
                                    l_U570 = 0;
                                    if (IS_VEH_DRIVEABLE( l_U852 ))
                                    {
                                        CLEAR_CAR_LAST_WEAPON_DAMAGE( l_U852 );
                                    }
                                }
                                else
                                {
                                    fVar4 *= 0.30000000 * sub_23224();
                                    l_U618 += fVar4;
                                }
                                l_U591 = 0.00000000;
                            }
                            if (sub_57503( l_U852, 90.00000000, 90.00000000 ))
                            {
                                fVar4 = 1.20000000 - l_U618;
                                fVar4 *= 0.30000000 * sub_23224();
                                l_U618 += fVar4;
                            }
                            if (IS_VEH_DRIVEABLE( l_U852 ))
                            {
                                if (l_U618 < 0.00000000)
                                {
                                    l_U618 = 0.00000000;
                                }
                                if (l_U618 >= 1.00000000)
                                {
                                    l_U618 = 1.00000000;
                                }
                                if (NOT l_U575)
                                {
                                    if (l_U618 > 0.40000000)
                                    {
                                        if (DOES_OBJECT_EXIST( l_U687 ))
                                        {
                                            FREEZE_OBJECT_POSITION( l_U687, 0 );
                                            GET_OBJECT_COORDINATES( l_U687, ref vVar5.x, ref vVar5.y, ref vVar5.z );
                                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U687, 0.00000000, 0.00000000, 0.60000000, ref vVar8.x, ref vVar8.y, ref vVar8.z );
                                            FIRE_SINGLE_BULLET( vVar8.x, vVar8.y, vVar8.z, vVar5.x, vVar5.y, vVar5.z, 10 );
                                            PLAY_SOUND_FROM_VEHICLE( -1, "FM6_UNDERTAKER_COFFIN_LID_BREAK", l_U852 );
                                            sub_23064();
                                            l_U575 = 1;
                                        }
                                    }
                                }
                                if (l_U618 > 0.40000000)
                                {
                                    if (TIMERB() > 30000)
                                    {
                                        if (NOT sub_16188())
                                        {
                                            if (NOT (IS_CHAR_INJURED( l_U709 )))
                                            {
                                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2845(), l_U709, 15.00000000, 15.00000000, 15.00000000, 0 ))
                                                {
                                                    if (sub_43845( "FM6_CASKET", ref l_U125, 6, 1 ))
                                                    {
                                                        SETTIMERB( 0 );
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                l_U783 = {l_U768 + (l_U618 * l_U792)};
                                if (DOES_OBJECT_EXIST( l_U687 ))
                                {
                                    if (IS_OBJECT_ATTACHED( l_U687 ))
                                    {
                                        sub_23064();
                                    }
                                }
                                if (NOT sub_16188())
                                {
                                    if (IS_VEH_DRIVEABLE( l_U852 ))
                                    {
                                        if (IS_VEH_DRIVEABLE( l_U847[3] ))
                                        {
                                            if (IS_CAR_TOUCHING_CAR( l_U852, l_U847[3] ))
                                            {
                                                if (NOT (IS_CHAR_INJURED( l_U709 )))
                                                {
                                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2845(), l_U709, 15.00000000, 15.00000000, 15.00000000, 0 ))
                                                    {
                                                        sub_43845( "FM6_HEARSE", ref l_U125, 6, 1 );
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if (l_U618 >= 1.00000000)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U709 )))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2845(), l_U709, 15.00000000, 15.00000000, 15.00000000, 0 ))
                                        {
                                            if (sub_4122())
                                            {
                                                if (sub_43845( "FM6_FFALLS", ref l_U125, 6, 1 ))
                                                {
                                                    sub_7949( 14, 0 );
                                                }
                                            }
                                            else if (sub_43845( "FM6_DFALLS", ref l_U125, 6, 1 ))
                                            {
                                                sub_7949( 14, 0 );
                                            }
                                        }
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
                switch (l_U654[3])
                {
                    case 0:
                    REQUEST_MODEL( -322343873 );
                    REQUEST_MODEL( -503930010 );
                    l_U654[3]++;
                    break;
                    case 1:
                    if ((HAS_MODEL_LOADED( -322343873 )) AND (HAS_MODEL_LOADED( -503930010 )))
                    {
                        l_U654[3]++;
                    }
                    break;
                    case 2:
                    sub_29804();
                    CREATE_CAR( -322343873, -198.37380000, -278.74480000, 14.25990000, ref l_U847[3], 1 );
                    SET_CAR_HEADING( l_U847[3], 180.00000000 );
                    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U847[3], 1 );
                    SETTIMERA( 0 );
                    l_U654[3]++;
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -322343873 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U683[0] );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U683[1] );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U683[2] );
                    break;
                    case 3:
                    if ((LOCATE_CHAR_ANY_MEANS_2D( sub_2845(), -198.37380000, -278.74480000, 40.00000000, 40.00000000, 0 )) || (TIMERA() > 20000))
                    {
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -503930010 );
                        if (IS_VEH_DRIVEABLE( l_U847[3] ))
                        {
                            SET_CAR_FORWARD_SPEED( l_U847[3], 10.00000000 );
                        }
                        l_U654[3]++;
                    }
                    break;
                    case 4:
                    if (IS_VEH_DRIVEABLE( l_U847[3] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U852 ))
                        {
                            if (IS_CHAR_IN_CAR( sub_2845(), l_U852 ))
                            {
                                if (NOT (IS_CHAR_IN_AREA_2D( sub_2845(), -600.00000000, -320.00000000, -150.00000000, -200.53000000, 0 )))
                                {
                                    if (NOT (sub_59036( sub_2845(), l_U630, 100.00000000 )))
                                    {
                                        if (sub_59289( l_U630 ))
                                        {
                                            if (NOT (IS_CAR_ON_SCREEN( l_U847[3] )))
                                            {
                                                if (NOT (sub_59494( l_U630, l_U847[3] )))
                                                {
                                                    sub_59704( l_U630, l_U847[3] );
                                                }
                                                GET_CAR_SPEED( l_U852, ref fVar4 );
                                                GET_DRIVER_OF_CAR( l_U847[3], ref iVar14 );
                                                if (NOT (IS_CHAR_INJURED( iVar14 )))
                                                {
                                                    if (sub_60328( ref l_U847[3], 50.00000000, 30.00000000, fVar4 + 3.00000000, 5 ))
                                                    {
                                                        PRINTSTRING( "Francis 6 - CAR_JUMP_ADVANCED - returned TRUE. \n" );
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if (sub_4122())
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_2D( sub_2845(), 469.01340000, 301.52450000, 400.00000000, 400.00000000, 0 ))
                                    {
                                        if (NOT (IS_CAR_ON_SCREEN( l_U847[3] )))
                                        {
                                            l_U654[3]++;
                                        }
                                    }
                                }
                                else if (LOCATE_CHAR_ANY_MEANS_2D( sub_2845(), 997.60530000, 981.83590000, 400.00000000, 400.00000000, 0 ))
                                {
                                    if (NOT (IS_CAR_ON_SCREEN( l_U847[3] )))
                                    {
                                        l_U654[3]++;
                                    }
                                }
                            }
                        }
                        if (NOT l_U579)
                        {
                            I = 0;
                            if (NOT (IS_CHAR_INJURED( l_U688[16] )))
                            {
                                I++;
                            }
                            if (NOT (IS_CHAR_INJURED( l_U688[17] )))
                            {
                                I++;
                            }
                            if (NOT (IS_CHAR_INJURED( l_U688[18] )))
                            {
                                I++;
                            }
                            if (NOT (IS_CHAR_INJURED( l_U688[19] )))
                            {
                                I++;
                            }
                            if (I == 1)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U688[16] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U688[16] );
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[16], 0 );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U688[17] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U688[17] );
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[17], 0 );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U688[18] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U688[18] );
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[18], 0 );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U688[19] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U688[19] );
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[19], 0 );
                                }
                                l_U579 = 1;
                            }
                        }
                        if (IS_VEH_DRIVEABLE( l_U847[3] ))
                        {
                            GET_DRIVER_OF_CAR( l_U847[3], ref iVar14 );
                            if ((((iVar14 == l_U688[16]) || (iVar14 == l_U688[17])) || (iVar14 == l_U688[18])) || (iVar14 == l_U688[19]))
                            {
                                if (NOT (IS_CHAR_INJURED( iVar14 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( iVar14, 49, ref l_U737 );
                                    if (l_U737 == 7)
                                    {
                                        if (NOT l_U578)
                                        {
                                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iVar14, 1 );
                                            TASK_CAR_MISSION( iVar14, l_U847[3], l_U852, 6, 30.00000000, 3, 0, 0 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        l_U654[3]++;
                    }
                    bVar3 = false;
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2845() )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U847[3] ))
                        {
                            if (l_U578)
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2845(), l_U847[3], 15.00000000, 15.00000000, 15.00000000, 0 ))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U852 ))
                                    {
                                        bVar3 = true;
                                    }
                                }
                            }
                            else if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2845(), l_U847[3], 10.00000000, 10.00000000, 10.00000000, 0 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U852 ))
                                {
                                    bVar3 = true;
                                }
                            }
                        }
                    }
                    if (IS_VEH_DRIVEABLE( l_U852 ))
                    {
                        if (IS_CHAR_IN_CAR( sub_2845(), l_U852 ))
                        {
                            GET_CAR_SPEED( l_U852, ref fVar4 );
                            if (l_U578)
                            {
                                if (fVar4 < 5.00000000)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2845(), l_U847[3], 15.00000000, 15.00000000, 15.00000000, 0 ))
                                    {
                                        bVar3 = true;
                                    }
                                }
                            }
                            else if (fVar4 < 0.50000000)
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2845(), l_U847[3], 10.00000000, 10.00000000, 10.00000000, 0 ))
                                {
                                    bVar3 = true;
                                }
                            }
                        }
                    }
                    if (bVar3)
                    {
                        if (NOT l_U578)
                        {
                            SETTIMERA( 0 );
                            l_U578 = 1;
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U688[16] )))
                        {
                            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[16] )))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[16], 0 );
                            }
                            else if (TIMERA() > 0)
                            {
                                CLEAR_CHAR_TASKS( l_U688[16] );
                                TASK_LEAVE_ANY_CAR( l_U688[16] );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U688[17] )))
                        {
                            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[17] )))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[17], 0 );
                            }
                            else if (TIMERA() > 1000)
                            {
                                CLEAR_CHAR_TASKS( l_U688[17] );
                                TASK_LEAVE_ANY_CAR( l_U688[17] );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U688[18] )))
                        {
                            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[18] )))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[18], 0 );
                            }
                            else if (TIMERA() > 2000)
                            {
                                CLEAR_CHAR_TASKS( l_U688[18] );
                                TASK_LEAVE_ANY_CAR( l_U688[18] );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U688[19] )))
                        {
                            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U688[19] )))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[19], 0 );
                            }
                            else if (TIMERA() > 3000)
                            {
                                CLEAR_CHAR_TASKS( l_U688[19] );
                                TASK_LEAVE_ANY_CAR( l_U688[19] );
                            }
                        }
                    }
                    else
                    {
                        l_U578 = 0;
                        for ( I = 0; I < 3; I++ )
                        {
                            if (IS_VEH_DRIVEABLE( l_U847[3] ))
                            {
                                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U847[3], I )))
                                {
                                    GET_CHAR_IN_CAR_PASSENGER_SEAT( l_U847[3], I, ref iVar14 );
                                    if ((((iVar14 == l_U688[16]) || (iVar14 == l_U688[17])) || (iVar14 == l_U688[18])) || (iVar14 == l_U688[19]))
                                    {
                                        if (NOT (IS_CHAR_INJURED( iVar14 )))
                                        {
                                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iVar14, 0 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if (NOT (l_U654[3] == 5))
                    {
                        if ((((IS_CHAR_INJURED( l_U688[16] )) AND (IS_CHAR_INJURED( l_U688[17] ))) AND (IS_CHAR_INJURED( l_U688[18] ))) AND (IS_CHAR_INJURED( l_U688[19] )))
                        {
                            l_U654[3] = 5;
                        }
                    }
                    break;
                    case 5:
                    if (IS_VEH_DRIVEABLE( l_U847[3] ))
                    {
                        GET_DRIVER_OF_CAR( l_U847[3], ref iVar14 );
                        if (NOT (IS_CHAR_INJURED( iVar14 )))
                        {
                            TASK_CAR_TEMP_ACTION( iVar14, l_U859, 6, 15000 );
                        }
                    }
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U847[3] );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U688[16] );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U688[17] );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U688[18] );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U688[19] );
                    l_U654[3]++;
                    break;
                    case 6:
                    if (NOT sub_16188())
                    {
                        if (NOT (IS_CHAR_INJURED( l_U709 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2845(), l_U709, 15.00000000, 15.00000000, 15.00000000, 0 ))
                            {
                                if (sub_43845( "FM6_LOSTA", ref l_U125, 6, 1 ))
                                {
                                    l_U654[3] = 99;
                                }
                            }
                        }
                    }
                    break;
                }
                switch (l_U631[16])
                {
                    case 0:
                    if (DOES_VEHICLE_EXIST( l_U847[3] ))
                    {
                        l_U631[16]++;
                    }
                    break;
                    case 1:
                    if (IS_VEH_DRIVEABLE( l_U847[3] ))
                    {
                        CREATE_CHAR_INSIDE_CAR( l_U847[3], 26, -503930010, ref l_U688[16] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[16] );
                        GIVE_WEAPON_TO_CHAR( l_U688[16], 7, 30000, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[16], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[16], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[16], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[16], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[16], 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[16], 1 );
                        sub_27653( ref l_U688[16], ref l_U630 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[16], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[16], 1 );
                        SET_CHAR_ACCURACY( l_U688[16], 10 );
                        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U688[16], 1 );
                        l_U631[16]++;
                    }
                    break;
                    case 2:
                    sub_27653( ref l_U688[16], ref l_U630 );
                    break;
                    case 3: break;
                }
                switch (l_U631[17])
                {
                    case 0:
                    if (DOES_VEHICLE_EXIST( l_U847[3] ))
                    {
                        l_U631[17]++;
                    }
                    break;
                    case 1:
                    if (IS_VEH_DRIVEABLE( l_U847[3] ))
                    {
                        CREATE_CHAR_AS_PASSENGER( l_U847[3], 26, -503930010, 0, ref l_U688[17] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[17] );
                        GIVE_WEAPON_TO_CHAR( l_U688[17], 7, 30000, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[17], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[17], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[17], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[17], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[17], 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[17], 0 );
                        sub_27653( ref l_U688[17], ref l_U630 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[17], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[17], 1 );
                        SET_CHAR_ACCURACY( l_U688[17], 10 );
                        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U688[17], 1 );
                        l_U631[17]++;
                    }
                    break;
                    case 2:
                    sub_27653( ref l_U688[17], ref l_U630 );
                    break;
                }
                switch (l_U631[18])
                {
                    case 0:
                    if (DOES_VEHICLE_EXIST( l_U847[3] ))
                    {
                        l_U631[18]++;
                    }
                    break;
                    case 1:
                    if (IS_VEH_DRIVEABLE( l_U847[3] ))
                    {
                        CREATE_CHAR_AS_PASSENGER( l_U847[3], 26, -503930010, 1, ref l_U688[18] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[18] );
                        GIVE_WEAPON_TO_CHAR( l_U688[18], 7, 30000, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[18], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[18], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[18], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[18], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[18], 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[18], 0 );
                        sub_27653( ref l_U688[18], ref l_U630 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[18], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[18], 1 );
                        SET_CHAR_ACCURACY( l_U688[18], 10 );
                        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U688[18], 1 );
                        l_U631[18]++;
                    }
                    break;
                    case 2:
                    sub_27653( ref l_U688[18], ref l_U630 );
                    break;
                }
                switch (l_U631[19])
                {
                    case 0:
                    if (DOES_VEHICLE_EXIST( l_U847[3] ))
                    {
                        l_U631[19]++;
                    }
                    break;
                    case 1:
                    if (IS_VEH_DRIVEABLE( l_U847[3] ))
                    {
                        CREATE_CHAR_AS_PASSENGER( l_U847[3], 26, -503930010, 2, ref l_U688[19] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U688[19] );
                        GIVE_WEAPON_TO_CHAR( l_U688[19], 7, 30000, 0 );
                        SET_CHAR_DECISION_MAKER( l_U688[19], l_U580 );
                        SET_COMBAT_DECISION_MAKER( l_U688[19], l_U583 );
                        SET_CHAR_WILL_USE_COVER( l_U688[19], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U688[19], 23 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U688[19], 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U688[19], 0 );
                        sub_27653( ref l_U688[19], ref l_U630 );
                        SET_PED_DIES_WHEN_INJURED( l_U688[19], 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U688[19], 1 );
                        SET_CHAR_ACCURACY( l_U688[19], 10 );
                        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U688[19], 1 );
                        l_U631[19]++;
                    }
                    break;
                    case 2:
                    sub_27653( ref l_U688[19], ref l_U630 );
                    break;
                }
                if (NOT l_U568)
                {
                    if (NOT l_U569)
                    {
                        if (NOT sub_16188())
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U560 )))
                            {
                                if (IS_VEH_DRIVEABLE( l_U852 ))
                                {
                                    ADD_BLIP_FOR_CAR( l_U852, ref l_U560 );
                                    SET_BLIP_AS_FRIENDLY( l_U560, 1 );
                                }
                            }
                            sub_16671( "FR6_M10", 0 );
                            l_U569 = 1;
                        }
                    }
                    if (IS_VEH_DRIVEABLE( l_U852 ))
                    {
                        if (IS_CHAR_IN_CAR( sub_2845(), l_U852 ))
                        {
                            if (DOES_BLIP_EXIST( l_U560 ))
                            {
                                REMOVE_BLIP( l_U560 );
                            }
                            l_U568 = 1;
                            CLEAR_PRINTS();
                        }
                        else
                        {
                            GET_CAR_CHAR_IS_USING( sub_2845(), ref l_U858 );
                            if (l_U858 == l_U852)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U709 )))
                                {
                                    if (NOT (IS_GROUP_MEMBER( l_U709, sub_65842() )))
                                    {
                                        CLEAR_CHAR_TASKS( l_U709 );
                                        SET_GROUP_MEMBER( sub_65842(), l_U709 );
                                    }
                                    else if ((IS_CHAR_SITTING_IN_CAR( l_U709, l_U852 )) AND (NOT l_U573))
                                    {
                                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709, 0 );
                                    }
                                    else
                                    {
                                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709, 1 );
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U709 )))
                            {
                                if (NOT (IS_GROUP_MEMBER( l_U709, sub_65842() )))
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U709, 34, ref l_U737 );
                                    if (l_U737 == 7)
                                    {
                                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U709, sub_2845() );
                                    }
                                }
                            }
                        }
                    }
                }
                else if (IS_VEH_DRIVEABLE( l_U852 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_2845(), l_U852 ))
                    {
                        if (sub_66146( l_U709, "FR6_M12", 0, 0, 0 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U709 )))
                            {
                                if (NOT (IS_GROUP_MEMBER( l_U709, sub_65842() )))
                                {
                                    SET_GROUP_MEMBER( sub_65842(), l_U709 );
                                    if ((IS_CHAR_SITTING_IN_CAR( l_U709, l_U852 )) AND (NOT l_U573))
                                    {
                                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709, 0 );
                                    }
                                    else
                                    {
                                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709, 1 );
                                        CLEAR_CHAR_TASKS( l_U709 );
                                    }
                                }
                                else if ((IS_CHAR_SITTING_IN_CAR( l_U709, l_U852 )) AND (NOT l_U573))
                                {
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709, 0 );
                                }
                                else
                                {
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709, 1 );
                                }
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U709 )))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( l_U709, l_U852 ))
                        {
                            if (IS_GROUP_MEMBER( l_U709, sub_65842() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U709 );
                            }
                        }
                        else if (sub_66146( l_U709, "FR6_M12", 0, 0, 0 ))
                        {
                            l_U568 = 0;
                            l_U569 = 0;
                        }
                        else
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709, 0 );
                        }
                    }
                }
                if (NOT l_U564)
                {
                    if ((sub_66933( sub_2845(), l_U709 )) AND (NOT sub_16188()))
                    {
                        if (sub_4122())
                        {
                            if (sub_43845( "FM6_FBODY", ref l_U125, 6, 1 ))
                            {
                                l_U564 = 1;
                            }
                        }
                        else if (sub_43845( "FM6_DBODY", ref l_U125, 6, 1 ))
                        {
                            l_U564 = 1;
                        }
                    }
                }
                if (l_U564)
                {
                    if (sub_4122())
                    {
                        if (sub_68250( 469.01340000, 301.52450000, 9.50000000, 2.50000000, 2.50000000, 2.00000000, 1, l_U709, l_U852, "FR6_M09", "FR6_M12", "FR6_M10", 0, 0, 0 ))
                        {
                            SET_PLAYER_CONTROL( sub_2775(), 0 );
                            sub_47644( 1, 1 );
                            sub_69874();
                            ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                        }
                    }
                    else if (sub_68250( 997.60530000, 981.83590000, 18.70000000, 2.50000000, 2.50000000, 2.00000000, 1, l_U709, l_U852, "FR6_M09", "FR6_M12", "FR6_M10", 0, 0, 0 ))
                    {
                        SET_PLAYER_CONTROL( sub_2775(), 0 );
                        sub_47644( 1, 1 );
                        sub_70321();
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                if (((NOT l_U563) AND (l_U564)) AND (l_U654[3] == 99))
                {
                    if ((sub_66933( sub_2845(), l_U709 )) AND (NOT sub_16188()))
                    {
                        if (NOT l_U574)
                        {
                            switch (l_U663)
                            {
                                case 0:
                                if (g_U64932 == 0)
                                {
                                    if (sub_4122())
                                    {
                                        if (sub_43845( "FM6_B1VF", ref l_U125, 6, 1 ))
                                        {
                                            l_U738 = "FM6_B1VF";
                                            l_U573 = 1;
                                            l_U663++;
                                        }
                                    }
                                    else if (sub_43845( "FM6_B1VD", ref l_U125, 6, 1 ))
                                    {
                                        l_U738 = "FM6_B1VD";
                                        l_U573 = 1;
                                        l_U663++;
                                    }
                                }
                                else if (sub_43845( "FM6_B1V2", ref l_U125, 6, 1 ))
                                {
                                    l_U738 = "FM6_B1V2";
                                    l_U573 = 1;
                                    l_U663++;
                                }
                                break;
                                case 1:
                                if (NOT (sub_16210( l_U125 )))
                                {
                                    g_U64932++;
                                    if (g_U64932 > 3)
                                    {
                                        g_U64932 = 0;
                                    }
                                    l_U563 = 1;
                                    l_U573 = 0;
                                    l_U663 = 0;
                                }
                                break;
                            }
                        }
                        else if (l_U573)
                        {
                            sub_71081( l_U738, ref l_U125, 6, 1 );
                            l_U574 = 0;
                        }
                        else
                        {
                            l_U574 = 0;
                        }
                    }
                    else if (NOT (sub_66933( sub_2845(), l_U709 )))
                    {
                        if (l_U573)
                        {
                            sub_71249( ref l_U125 );
                            l_U574 = 1;
                        }
                    }
                }
                if (l_U564)
                {
                    if (NOT (sub_66933( sub_2845(), l_U709 )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U852 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U709 )))
                            {
                                if (IS_CHAR_SITTING_IN_CAR( l_U709, l_U852 ))
                                {
                                    if (NOT l_U576)
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U709 )))
                                        {
                                            if (NOT (IS_CAR_DEAD( l_U852 )))
                                            {
                                                if (NOT (IS_CHAR_IN_CAR( sub_2845(), l_U852 )))
                                                {
                                                    SAY_AMBIENT_SPEECH( l_U709, "GET_IN_CAR", 1, 0, 0 );
                                                    l_U576 = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else if (l_U576)
                    {
                        l_U576 = 0;
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U852 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_2845(), l_U852 )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U852 ))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_2845(), l_U852, 100.00000000, 100.00000000, 0 )))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U709 )))
                                {
                                    if (NOT (IS_CHAR_ON_SCREEN( l_U709 )))
                                    {
                                        if (NOT (IS_CAR_ON_SCREEN( l_U852 )))
                                        {
                                            if (DOES_CHAR_EXIST( l_U710 ))
                                            {
                                                DELETE_CHAR( ref l_U710 );
                                            }
                                            if (DOES_OBJECT_EXIST( l_U687 ))
                                            {
                                                DELETE_OBJECT( ref l_U687 );
                                            }
                                            DELETE_CHAR( ref l_U709 );
                                            DELETE_CAR( ref l_U852 );
                                            sub_72073();
                                            sub_72382( "FR6_F06" );
                                            sub_7949( 13, 0 );
                                        }
                                    }
                                }
                            }
                        }
                        if (IS_VEH_DRIVEABLE( l_U852 ))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_2845(), l_U852, 50.00000000, 50.00000000, 0 )))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U709 )))
                                {
                                    if (NOT (IS_CHAR_ON_SCREEN( l_U709 )))
                                    {
                                        if (NOT (IS_CAR_ON_SCREEN( l_U852 )))
                                        {
                                            if (l_U590 >= 180000)
                                            {
                                                if (DOES_CHAR_EXIST( l_U710 ))
                                                {
                                                    DELETE_CHAR( ref l_U710 );
                                                }
                                                if (DOES_OBJECT_EXIST( l_U687 ))
                                                {
                                                    DELETE_OBJECT( ref l_U687 );
                                                }
                                                DELETE_CHAR( ref l_U709 );
                                                DELETE_CAR( ref l_U852 );
                                                sub_72073();
                                                sub_72382( "FR6_F06" );
                                                sub_7949( 13, 0 );
                                            }
                                        }
                                    }
                                }
                            }
                            else
                            {
                                l_U590 = 0.00000000;
                            }
                        }
                    }
                    else
                    {
                        l_U590 = 0.00000000;
                    }
                }
                break;
                case 3:
                if (sub_43845( "FM6_GRAVE", ref l_U125, 6, 1 ))
                {
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 4:
                if (NOT sub_16188())
                {
                    if (NOT l_U572)
                    {
                        ALLOW_EMERGENCY_SERVICES( 1 );
                        DONT_DISPATCH_COPS_FOR_PLAYER( sub_2775(), 0 );
                        l_U572 = 1;
                    }
                    if (sub_4122())
                    {
                        sub_7949( 9, 1 );
                    }
                    else
                    {
                        sub_7949( 10, 1 );
                    }
                }
                break;
            }
            break;
            case 14:
            sub_54094();
            switch (ProtectedGet(l_U99))
            {
                case 0:
                l_U625 = 0.00000000;
                SETTIMERA( 0 );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                if (l_U625 < 1000.00000000)
                {
                    l_U786 = {l_U774 + (l_U617 * l_U795)};
                    l_U786 = {l_U786 + ((l_U777 - (l_U774 + (l_U617 * l_U795))) * (l_U625 / 1000.00000000))};
                    if (NOT (sub_57503( l_U852, 90.00000000, 90.00000000 )))
                    {
                        l_U789 = {l_U771 + (l_U617 * l_U798)};
                        l_U789 = {l_U789 + ((l_U780 - (l_U771 + (l_U617 * l_U798))) * (l_U625 / 1000.00000000))};
                    }
                    else
                    {
                        l_U789 = {l_U771 + (l_U617 * l_U798)};
                        l_U789 = {l_U789 + (((vector( 0.00000000, 0.00000000, 0.00000000)) - (l_U771 + (l_U617 * l_U798))) * (l_U625 / 1000.00000000))};
                    }
                    if (IS_VEH_DRIVEABLE( l_U852 ))
                    {
                        if (DOES_OBJECT_EXIST( l_U687 ))
                        {
                            if (IS_OBJECT_ATTACHED( l_U687 ))
                            {
                                DETACH_OBJECT( l_U687, 1 );
                                ATTACH_OBJECT_TO_CAR( l_U687, l_U852, 0, l_U786, l_U789 );
                            }
                        }
                    }
                }
                else if (IS_VEH_DRIVEABLE( l_U852 ))
                {
                    if (DOES_OBJECT_EXIST( l_U687 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U687 ))
                        {
                            DETACH_OBJECT( l_U687, 1 );
                            sub_54094();
                            SET_OBJECT_DYNAMIC( l_U687, 1 );
                            ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                        }
                    }
                }
                break;
                case 2:
                if (((NOT (sub_16210( l_U125 ))) AND (TIMERA() > 2500)) AND (sub_17005( 1, 1 )))
                {
                    l_U571 = 1;
                    sub_72073();
                    sub_72382( "FR6_F04" );
                    l_U664 = 1;
                    sub_7949( 12, 0 );
                }
                break;
            }
            break;
            case 9:
            sub_46435();
            switch (ProtectedGet(l_U99))
            {
                case 0:
                SET_PLAYER_CONTROL( sub_2775(), 0 );
                if (IS_VEH_DRIVEABLE( l_U852 ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U739 );
                    if (IS_CHAR_IN_CAR( sub_2845(), l_U852 ))
                    {
                        TASK_PAUSE( 0, 500 );
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 467.53500000, 302.61360000, 8.81560000, 2, -2, 2.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U739 );
                    TASK_PERFORM_SEQUENCE( sub_2845(), l_U739 );
                    CLEAR_SEQUENCE_TASK( l_U739 );
                    if (NOT (IS_CHAR_INJURED( l_U709 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U739 );
                        if (IS_CHAR_IN_CAR( l_U709, l_U852 ))
                        {
                            TASK_LEAVE_ANY_CAR( 0 );
                        }
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 468.76010000, 302.48700000, 8.81560000, 2, -2, 2.00000000 );
                        CLOSE_SEQUENCE_TASK( l_U739 );
                        TASK_PERFORM_SEQUENCE( l_U709, l_U739 );
                        CLEAR_SEQUENCE_TASK( l_U739 );
                    }
                }
                SETTIMERA( 0 );
                while (TIMERA() < 2000)
                {
                    WAIT( 0 );
                }
                DO_SCREEN_FADE_OUT( 1000 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                sub_3799();
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                if (sub_4122())
                {
                    sub_21897( 15 );
                }
                else
                {
                    sub_21897( 11 );
                }
                sub_21897( 10 );
                REQUEST_MODEL( -322700377 );
                REQUEST_MODEL( -19263344 );
                REQUEST_ANIMS( "gestures@niko" );
                while ((((NOT (sub_22728( 10 ))) || (NOT (HAS_MODEL_LOADED( -322700377 )))) || (NOT (HAS_MODEL_LOADED( -19263344 )))) || (NOT (HAVE_ANIMS_LOADED( "gestures@niko" ))))
                {
                    WAIT( 0 );
                }
                if (sub_4122())
                {
                    while (NOT (sub_22728( 15 )))
                    {
                        WAIT( 0 );
                    }
                }
                else
                {
                    while (NOT (sub_22728( 11 )))
                    {
                        WAIT( 0 );
                    }
                }
                CLEAR_AREA( 483.79670000, 343.82340000, 7.67950000, 100.00000000, 1 );
                CLEAR_WANTED_LEVEL( sub_2775() );
                if (NOT (IS_CHAR_DEAD( sub_2845() )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2845() );
                    SET_CHAR_COORDINATES( sub_2845(), 483.79670000, 343.82340000, 7.67950000 );
                    SET_CHAR_HEADING( sub_2845(), 345.92870000 );
                }
                if (NOT (IS_CHAR_DEAD( l_U709 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U709 );
                    REMOVE_CHAR_FROM_GROUP( l_U709 );
                    SET_CHAR_COORDINATES( l_U709, 483.76040000, 342.57070000, 7.52850000 );
                    SET_CHAR_HEADING( l_U709, 355.62490000 );
                }
                CREATE_CHAR( 26, -322700377, 484.17650000, 341.17650000, 7.54890000, ref l_U713[0], 1 );
                SET_CHAR_HEADING( l_U713[0], 21.17010000 );
                SET_CHAR_DECISION_MAKER( l_U713[0], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U713[0], l_U583 );
                SET_CHAR_WILL_USE_COVER( l_U713[0], 1 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U713[0], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[0], 1 );
                SET_CHAR_NEVER_TARGETTED( l_U713[0], 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U713[0], 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U713[0], 0 );
                SET_PED_DIES_WHEN_INJURED( l_U713[0], 1 );
                UNLOCK_RAGDOLL( l_U713[0], 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[0], 1, 0, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[0], 2, 0, 1 );
                TASK_PLAY_ANIM( l_U713[0], "funeral_female1", "missfrancis6", 1000.00000000, 1, 0, 0, 0, -1 );
                if (sub_4122())
                {
                    sub_24193( 15, ref l_U713[1], 485.46210000, 341.58610000, 7.58560000, 38.74660000 );
                    SET_CHAR_COMPONENT_VARIATION( l_U713[1], 1, 0, 0 );
                    SET_CHAR_COMPONENT_VARIATION( l_U713[1], 2, 1, 1 );
                }
                else
                {
                    sub_24193( 11, ref l_U713[1], 485.46210000, 341.58610000, 7.58560000, 38.74660000 );
                    SET_CHAR_COMPONENT_VARIATION( l_U713[1], 1, 0, 0 );
                    SET_CHAR_COMPONENT_VARIATION( l_U713[1], 2, 0, 0 );
                }
                GIVE_WEAPON_TO_CHAR( l_U713[1], 7, 30000, 0 );
                SET_CHAR_DECISION_MAKER( l_U713[1], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U713[1], l_U583 );
                SET_CHAR_WILL_USE_COVER( l_U713[1], 1 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U713[1], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[1], 1 );
                SET_CHAR_NEVER_TARGETTED( l_U713[1], 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U713[1], 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U713[1], 0 );
                SET_PED_DIES_WHEN_INJURED( l_U713[1], 1 );
                UNLOCK_RAGDOLL( l_U713[1], 0 );
                TASK_PLAY_ANIM( l_U713[1], "funeral_male1", "missfrancis6", 1000.00000000, 1, 0, 0, 0, -1 );
                sub_24193( 10, ref l_U713[2], 485.99260000, 342.61150000, 7.60860000, 59.12830000 );
                SET_CHAR_DECISION_MAKER( l_U713[2], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U713[2], l_U583 );
                SET_CHAR_WILL_USE_COVER( l_U713[2], 1 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U713[2], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[2], 1 );
                SET_CHAR_NEVER_TARGETTED( l_U713[2], 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U713[2], 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U713[2], 0 );
                SET_PED_DIES_WHEN_INJURED( l_U713[2], 1 );
                UNLOCK_RAGDOLL( l_U713[2], 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[2], 1, 0, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[2], 2, 0, 1 );
                TASK_PLAY_ANIM( l_U713[2], "funeral_female2", "missfrancis6", 1000.00000000, 1, 0, 0, 0, -1 );
                CREATE_CHAR( 26, -19263344, 485.91370000, 343.88750000, 7.66090000, ref l_U713[3], 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U713[3] );
                SET_CHAR_HEADING( l_U713[3], 70.85440000 );
                GIVE_WEAPON_TO_CHAR( l_U713[3], 7, 30000, 0 );
                SET_CHAR_DECISION_MAKER( l_U713[3], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U713[3], l_U583 );
                SET_CHAR_WILL_USE_COVER( l_U713[3], 1 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U713[3], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[3], 1 );
                SET_CHAR_NEVER_TARGETTED( l_U713[3], 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U713[3], 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U713[3], 0 );
                SET_PED_DIES_WHEN_INJURED( l_U713[3], 1 );
                UNLOCK_RAGDOLL( l_U713[3], 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[3], 1, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[3], 2, 0, 1 );
                TASK_PLAY_ANIM( l_U713[3], "funeral_male2", "missfrancis6", 1000.00000000, 1, 0, 0, 0, -1 );
                SWAP_NEAREST_BUILDING_MODEL( 483.96200000, 345.93100000, 8.34300000, 5.00000000, 1651083167, -1593847198 );
                l_U673 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( l_U673, "FM6_UNDERTAKER_BELLS", 466.59000000, 304.58000000, 21.19000000 );
                WAIT( 0 );
                sub_75852();
                sub_76182( l_U112 );
                DO_SCREEN_FADE_IN( 1000 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                SETTIMERA( 0 );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                sub_76318( ref l_U860, sub_2845(), 5.00000000, 3.00000000 );
                if (TIMERA() > 15000)
                {
                    DO_SCREEN_FADE_OUT( 1000 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 2:
                if (IS_SCREEN_FADED_OUT())
                {
                    sub_3799();
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    SET_CHAR_COORDINATES( sub_2845(), 469.20810000, 314.34410000, 7.53640000 );
                    SET_CHAR_HEADING( sub_2845(), 0.00000000 );
                    TASK_GO_STRAIGHT_TO_COORD( sub_2845(), 469.12000000, 317.12000000, 8.53640000, 2, -1 );
                    if (NOT (IS_CHAR_INJURED( l_U713[2] )))
                    {
                        sub_4574( 4, l_U713[2], "KATE_MCREARY", 0 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U713[2] );
                        SET_CHAR_COORDINATES( l_U713[2], 469.20810000, 319.53530000, 7.53140000 );
                        SET_CHAR_HEADING( l_U713[2], 180.00000000 );
                        TASK_LOOK_AT_CHAR( l_U713[2], sub_2845(), 99999, 0 );
                    }
                    CREATE_CAM( 14, ref l_U111 );
                    SET_CAM_POS( l_U111, 471.41710000, 314.79220000, 8.81915300 );
                    SET_CAM_ROT( l_U111, 2.41059000, 0.00000000, 35.28384000 );
                    SET_CAM_FOV( l_U111, 22.30000000 );
                    SET_CAM_ACTIVE( l_U111, 1 );
                    SET_CAM_PROPAGATE( l_U111, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    sub_76318( ref l_U111, l_U713[2], 5.00000000, 2.00000000 );
                    STOP_SOUND( l_U673 );
                    l_U673 = -1;
                    sub_76182( l_U111 );
                    DO_SCREEN_FADE_IN( 1000 );
                    SETTIMERA( 0 );
                    l_U663 = 0;
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 3:
                if (IS_SCREEN_FADED_IN())
                {
                    if (NOT sub_16188())
                    {
                        if (sub_43845( "FM6_KATE1", ref l_U125, 6, 1 ))
                        {
                            ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                        }
                    }
                }
                break;
                case 4:
                if (NOT (sub_16210( l_U125 )))
                {
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                DO_SCREEN_FADE_OUT( 1000 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                if (NOT (IS_CAR_DEAD( l_U853[0] )))
                {
                    FIX_CAR( l_U853[0] );
                }
                if (NOT (IS_CAR_DEAD( l_U853[1] )))
                {
                    FIX_CAR( l_U853[1] );
                }
                if (NOT (IS_CAR_DEAD( l_U852 )))
                {
                    FIX_CAR( l_U852 );
                }
                CLEAR_AREA( l_U759._fU0, l_U759._fU4, l_U759._fU8, 150.00000000, 1 );
                if (IS_VEH_DRIVEABLE( l_U853[0] ))
                {
                    CLOSE_ALL_CAR_DOORS( l_U853[0] );
                    LOCK_CAR_DOORS( l_U853[0], 2 );
                    SET_CAR_HEADING( l_U853[0], l_U592[0] + 180.00000000 );
                    SET_CAR_COORDINATES( l_U853[0], l_U749[0]._fU0, l_U749[0]._fU4, l_U749[0]._fU8 );
                }
                if (IS_VEH_DRIVEABLE( l_U853[1] ))
                {
                    CLOSE_ALL_CAR_DOORS( l_U853[1] );
                    LOCK_CAR_DOORS( l_U853[1], 2 );
                    SET_CAR_HEADING( l_U853[1], l_U592[1] + 180.00000000 );
                    SET_CAR_COORDINATES( l_U853[1], l_U749[1]._fU0, l_U749[1]._fU4, l_U749[1]._fU8 );
                }
                if (IS_VEH_DRIVEABLE( l_U852 ))
                {
                    CLOSE_ALL_CAR_DOORS( l_U852 );
                    LOCK_CAR_DOORS( l_U852, 2 );
                    SET_CAR_HEADING( l_U852, l_U613 + 180.00000000 );
                    SET_CAR_COORDINATES( l_U852, l_U759._fU0, l_U759._fU4, l_U759._fU8 );
                }
                if (DOES_CHAR_EXIST( l_U713[0] ))
                {
                    DELETE_CHAR( ref l_U713[0] );
                }
                if (DOES_CHAR_EXIST( l_U713[1] ))
                {
                    DELETE_CHAR( ref l_U713[1] );
                }
                if (DOES_CHAR_EXIST( l_U713[2] ))
                {
                    DELETE_CHAR( ref l_U713[2] );
                }
                if (DOES_CHAR_EXIST( l_U709 ))
                {
                    DELETE_CHAR( ref l_U709 );
                }
                if (IS_VEH_DRIVEABLE( l_U853[0] ))
                {
                    CREATE_CHAR_INSIDE_CAR( l_U853[0], 26, -19263344, ref l_U734[0] );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U734[0] );
                    SET_CHAR_COMPONENT_VARIATION( l_U734[0], 1, 0, 0 );
                    SET_CHAR_COMPONENT_VARIATION( l_U734[0], 2, 0, 1 );
                    SET_CHAR_DECISION_MAKER( l_U734[0], l_U580 );
                    SET_COMBAT_DECISION_MAKER( l_U734[0], l_U583 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U734[0], 0 );
                    OPEN_SEQUENCE_TASK( ref l_U739 );
                    TASK_PAUSE( 0, 1000 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U853[0], 469.12510000, 278.89510000, 8.75540000, 12.00000000, 0, 0, 1, 5.00000000, 4 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U853[0], 437.13170000, 273.87120000, 8.71530000, 12.00000000, 0, 0, 1, 5.00000000, 4 );
                    TASK_CAR_DRIVE_WANDER( 0, l_U853[0], 12.00000000, 1 );
                    CLOSE_SEQUENCE_TASK( l_U739 );
                    TASK_PERFORM_SEQUENCE( l_U734[0], l_U739 );
                    CLEAR_SEQUENCE_TASK( l_U739 );
                    LOCK_CAR_DOORS( l_U853[0], 1 );
                }
                if (IS_VEH_DRIVEABLE( l_U852 ))
                {
                    CREATE_CHAR_INSIDE_CAR( l_U852, 26, -19263344, ref l_U734[1] );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U734[1] );
                    SET_CHAR_COMPONENT_VARIATION( l_U734[1], 1, 0, 0 );
                    SET_CHAR_COMPONENT_VARIATION( l_U734[1], 2, 0, 1 );
                    SET_CHAR_DECISION_MAKER( l_U734[1], l_U580 );
                    SET_COMBAT_DECISION_MAKER( l_U734[1], l_U583 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U734[1], 0 );
                    OPEN_SEQUENCE_TASK( ref l_U739 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U852, 469.12510000, 278.89510000, 8.75540000, 12.00000000, 0, 0, 1, 5.00000000, 4 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U852, 437.13170000, 273.87120000, 8.71530000, 12.00000000, 0, 0, 1, 5.00000000, 4 );
                    TASK_CAR_DRIVE_WANDER( 0, l_U852, 12.00000000, 1 );
                    CLOSE_SEQUENCE_TASK( l_U739 );
                    TASK_PERFORM_SEQUENCE( l_U734[1], l_U739 );
                    CLEAR_SEQUENCE_TASK( l_U739 );
                    LOCK_CAR_DOORS( l_U852, 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U713[3] )))
                {
                    if (IS_VEH_DRIVEABLE( l_U853[1] ))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U713[3], l_U853[1] )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U713[3] );
                            WARP_CHAR_INTO_CAR( l_U713[3], l_U853[1] );
                            OPEN_SEQUENCE_TASK( ref l_U739 );
                            TASK_PAUSE( 0, 2000 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U853[1], 469.12510000, 278.89510000, 8.75540000, 12.00000000, 0, 0, 1, 5.00000000, 4 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U853[1], 437.13170000, 273.87120000, 8.71530000, 12.00000000, 0, 0, 1, 5.00000000, 4 );
                            TASK_CAR_DRIVE_WANDER( 0, l_U853[1], 12.00000000, 1 );
                            CLOSE_SEQUENCE_TASK( l_U739 );
                            TASK_PERFORM_SEQUENCE( l_U713[3], l_U739 );
                            CLEAR_SEQUENCE_TASK( l_U739 );
                        }
                    }
                }
                SET_WIDESCREEN_BORDERS( 0 );
                if (IS_PLAYER_PLAYING( sub_2775() ))
                {
                    SET_CHAR_COORDINATES( sub_2845(), 469.11010000, 307.41810000, 7.56650000 );
                    SET_CHAR_HEADING( sub_2845(), 180.00000000 );
                }
                REMOVE_ANIMS( "gestures@niko" );
                for ( I = 0; I < 5; I++ )
                {
                    if (DOES_CAM_EXIST( l_U861[I] ))
                    {
                        DESTROY_CAM( l_U861[I] );
                    }
                }
                if (DOES_CAM_EXIST( l_U860 ))
                {
                    DESTROY_CAM( l_U860 );
                }
                if (l_U102)
                {
                    sub_29000( 0, 1, 0 );
                }
                else
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    sub_29000( 1000, 1, 0 );
                }
                if (NOT (l_U673 == -1))
                {
                    STOP_SOUND( l_U673 );
                }
                sub_79423();
                SET_PLAYER_CONTROL( sub_2775(), 1 );
                sub_79473();
                break;
            }
            break;
            case 10:
            sub_46435();
            switch (ProtectedGet(l_U99))
            {
                case 0:
                SET_PLAYER_CONTROL( sub_2775(), 0 );
                if (IS_VEH_DRIVEABLE( l_U852 ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U739 );
                    if (IS_CHAR_IN_CAR( sub_2845(), l_U852 ))
                    {
                        TASK_PAUSE( 0, 500 );
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 992.68210000, 989.14420000, 17.74320000, 2, -2, 2.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U739 );
                    TASK_PERFORM_SEQUENCE( sub_2845(), l_U739 );
                    CLEAR_SEQUENCE_TASK( l_U739 );
                    if (NOT (IS_CHAR_INJURED( l_U709 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U739 );
                        if (IS_CHAR_IN_CAR( l_U709, l_U852 ))
                        {
                            TASK_LEAVE_ANY_CAR( 0 );
                        }
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 993.65860000, 990.97160000, 17.65010000, 2, -2, 2.00000000 );
                        CLOSE_SEQUENCE_TASK( l_U739 );
                        TASK_PERFORM_SEQUENCE( l_U709, l_U739 );
                        CLEAR_SEQUENCE_TASK( l_U739 );
                    }
                }
                SETTIMERA( 0 );
                while (TIMERA() < 2000)
                {
                    WAIT( 0 );
                }
                DO_SCREEN_FADE_OUT( 1000 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                SWITCH_PED_PATHS_OFF( 979.32780000, 983.00280000, 13.05970000, 1001.20300000, 991.75280000, 19.85970000 );
                sub_3799();
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                if (sub_4122())
                {
                    sub_21897( 15 );
                }
                else
                {
                    sub_21897( 11 );
                }
                sub_21897( 10 );
                REQUEST_MODEL( -322700377 );
                REQUEST_MODEL( -19263344 );
                REQUEST_ANIMS( "gestures@niko" );
                while ((((NOT (sub_22728( 10 ))) || (NOT (HAS_MODEL_LOADED( -322700377 )))) || (NOT (HAS_MODEL_LOADED( -19263344 )))) || (NOT (HAVE_ANIMS_LOADED( "gestures@niko" ))))
                {
                    WAIT( 0 );
                }
                if (sub_4122())
                {
                    while (NOT (sub_22728( 15 )))
                    {
                        WAIT( 0 );
                    }
                }
                else
                {
                    while (NOT (sub_22728( 11 )))
                    {
                        WAIT( 0 );
                    }
                }
                CLEAR_AREA( 956.02080000, 1010.01100000, 11.24350000, 100.00000000, 1 );
                CLEAR_WANTED_LEVEL( sub_2775() );
                if (NOT (IS_CHAR_DEAD( sub_2845() )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2845() );
                    SET_CHAR_COORDINATES( sub_2845(), 956.02080000, 1010.01100000, 11.24350000 );
                    SET_CHAR_HEADING( sub_2845(), 344.24310000 );
                }
                if (NOT (IS_CHAR_DEAD( l_U709 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U709 );
                    REMOVE_CHAR_FROM_GROUP( l_U709 );
                    SET_CHAR_COORDINATES( l_U709, 957.21660000, 1009.81300000, 11.35120000 );
                    SET_CHAR_HEADING( l_U709, 4.82820000 );
                }
                CREATE_CHAR( 26, -322700377, 958.93850000, 1009.85500000, 11.49450000, ref l_U713[0], 1 );
                SET_CHAR_HEADING( l_U713[0], 30.64490000 );
                SET_CHAR_DECISION_MAKER( l_U713[0], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U713[0], l_U583 );
                SET_CHAR_WILL_USE_COVER( l_U713[0], 1 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U713[0], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[0], 1 );
                SET_CHAR_NEVER_TARGETTED( l_U713[0], 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U713[0], 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U713[0], 0 );
                SET_PED_DIES_WHEN_INJURED( l_U713[0], 1 );
                UNLOCK_RAGDOLL( l_U713[0], 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[0], 1, 0, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[0], 2, 0, 1 );
                TASK_PLAY_ANIM( l_U713[0], "funeral_female1", "missfrancis6", 1000.00000000, 1, 0, 0, 0, -1 );
                if (sub_4122())
                {
                    sub_24193( 15, ref l_U713[1], 957.99510000, 1008.46900000, 11.45650000, 14.04490000 );
                    SET_CHAR_COMPONENT_VARIATION( l_U713[1], 1, 0, 0 );
                    SET_CHAR_COMPONENT_VARIATION( l_U713[1], 2, 1, 1 );
                }
                else
                {
                    sub_24193( 11, ref l_U713[1], 957.99510000, 1008.46900000, 11.45650000, 14.04490000 );
                    SET_CHAR_COMPONENT_VARIATION( l_U713[1], 1, 0, 0 );
                    SET_CHAR_COMPONENT_VARIATION( l_U713[1], 2, 0, 0 );
                }
                GIVE_WEAPON_TO_CHAR( l_U713[1], 7, 30000, 0 );
                SET_CHAR_DECISION_MAKER( l_U713[1], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U713[1], l_U583 );
                SET_CHAR_WILL_USE_COVER( l_U713[1], 1 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U713[1], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[1], 1 );
                SET_CHAR_NEVER_TARGETTED( l_U713[1], 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U713[1], 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U713[1], 0 );
                SET_PED_DIES_WHEN_INJURED( l_U713[1], 1 );
                UNLOCK_RAGDOLL( l_U713[1], 0 );
                TASK_PLAY_ANIM( l_U713[1], "funeral_male1", "missfrancis6", 1000.00000000, 1, 0, 0, 0, -1 );
                sub_24193( 10, ref l_U713[2], 956.45820000, 1009.09800000, 11.30720000, 352.05400000 );
                SET_CHAR_DECISION_MAKER( l_U713[2], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U713[2], l_U583 );
                SET_CHAR_WILL_USE_COVER( l_U713[2], 1 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U713[2], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[2], 1 );
                SET_CHAR_NEVER_TARGETTED( l_U713[2], 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U713[2], 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U713[2], 0 );
                SET_PED_DIES_WHEN_INJURED( l_U713[2], 1 );
                UNLOCK_RAGDOLL( l_U713[2], 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[2], 1, 0, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[2], 2, 0, 1 );
                TASK_PLAY_ANIM( l_U713[2], "funeral_female2", "missfrancis6", 1000.00000000, 1, 0, 0, 0, -1 );
                CREATE_CHAR( 26, -19263344, 954.96470000, 1009.69500000, 11.16240000, ref l_U713[3], 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U713[3] );
                SET_CHAR_HEADING( l_U713[3], 330.89180000 );
                GIVE_WEAPON_TO_CHAR( l_U713[3], 7, 30000, 0 );
                SET_CHAR_DECISION_MAKER( l_U713[3], l_U580 );
                SET_COMBAT_DECISION_MAKER( l_U713[3], l_U583 );
                SET_CHAR_WILL_USE_COVER( l_U713[3], 1 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U713[3], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U713[3], 1 );
                SET_CHAR_NEVER_TARGETTED( l_U713[3], 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U713[3], 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U713[3], 0 );
                SET_PED_DIES_WHEN_INJURED( l_U713[3], 1 );
                UNLOCK_RAGDOLL( l_U713[3], 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[3], 1, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U713[3], 2, 0, 1 );
                TASK_PLAY_ANIM( l_U713[3], "funeral_male2", "missfrancis6", 1000.00000000, 1, 0, 0, 0, -1 );
                SWAP_NEAREST_BUILDING_MODEL( 957.52050000, 1012.70400000, 11.23160000, 5.00000000, 1835978766, -318088186 );
                l_U673 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( l_U673, "FM6_UNDERTAKER_BELLS", 959.89000000, 959.98000000, 30.16000000 );
                WAIT( 0 );
                sub_93573();
                sub_76182( l_U112 );
                DO_SCREEN_FADE_IN( 1000 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                SETTIMERA( 0 );
                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                break;
                case 1:
                if (TIMERA() > 15000)
                {
                    DO_SCREEN_FADE_OUT( 1000 );
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 2:
                if (IS_SCREEN_FADED_OUT())
                {
                    sub_3799();
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    SET_CHAR_COORDINATES( sub_2845(), 994.07470000, 988.56500000, 16.77200000 );
                    SET_CHAR_HEADING( sub_2845(), 57.70000000 );
                    TASK_GO_STRAIGHT_TO_COORD( sub_2845(), 993.07790000, 990.27580000, 17.67310000, 2, -1 );
                    if (NOT (IS_CHAR_INJURED( l_U713[2] )))
                    {
                        sub_4574( 4, l_U713[2], "KATE_MCREARY", 0 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U713[2] );
                        SET_CHAR_COORDINATES( l_U713[2], 991.93870000, 992.43470000, 16.54840000 );
                        SET_CHAR_HEADING( l_U713[2], 228.51600000 );
                        TASK_LOOK_AT_CHAR( l_U713[2], sub_2845(), 99999, 0 );
                    }
                    CREATE_CAM( 14, ref l_U111 );
                    SET_CAM_POS( l_U111, 997.43240000, 988.89260000, 18.51796000 );
                    SET_CAM_ROT( l_U111, -5.26202100, -0.00000000, 63.90267000 );
                    SET_CAM_FOV( l_U111, 18.10000000 );
                    SET_CAM_ACTIVE( l_U111, 1 );
                    SET_CAM_PROPAGATE( l_U111, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    sub_76318( ref l_U111, l_U713[2], 5.00000000, 2.00000000 );
                    sub_76182( l_U111 );
                    DO_SCREEN_FADE_IN( 1000 );
                    STOP_SOUND( l_U673 );
                    l_U673 = -1;
                    SETTIMERA( 0 );
                    l_U663 = 0;
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 3:
                if (IS_SCREEN_FADED_IN())
                {
                    if (NOT sub_16188())
                    {
                        if (sub_43845( "FM6_KATE2", ref l_U125, 6, 1 ))
                        {
                            ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                        }
                    }
                }
                break;
                case 4:
                if (NOT (sub_16210( l_U125 )))
                {
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                DO_SCREEN_FADE_OUT( 1000 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                if (NOT (IS_CAR_DEAD( l_U853[0] )))
                {
                    FIX_CAR( l_U853[0] );
                }
                if (NOT (IS_CAR_DEAD( l_U853[1] )))
                {
                    FIX_CAR( l_U853[1] );
                }
                if (NOT (IS_CAR_DEAD( l_U852 )))
                {
                    FIX_CAR( l_U852 );
                }
                CLEAR_AREA( l_U759._fU0, l_U759._fU4, l_U759._fU8, 150.00000000, 1 );
                if (IS_VEH_DRIVEABLE( l_U853[0] ))
                {
                    CLOSE_ALL_CAR_DOORS( l_U853[0] );
                    LOCK_CAR_DOORS( l_U853[0], 2 );
                    SET_CAR_HEADING( l_U853[0], l_U592[0] );
                    SET_CAR_COORDINATES( l_U853[0], l_U749[0]._fU0, l_U749[0]._fU4, l_U749[0]._fU8 );
                }
                if (IS_VEH_DRIVEABLE( l_U853[1] ))
                {
                    CLOSE_ALL_CAR_DOORS( l_U853[1] );
                    LOCK_CAR_DOORS( l_U853[1], 2 );
                    SET_CAR_HEADING( l_U853[1], l_U592[1] );
                    SET_CAR_COORDINATES( l_U853[1], l_U749[1]._fU0, l_U749[1]._fU4, l_U749[1]._fU8 );
                }
                if (IS_VEH_DRIVEABLE( l_U852 ))
                {
                    CLOSE_ALL_CAR_DOORS( l_U852 );
                    LOCK_CAR_DOORS( l_U852, 2 );
                    SET_CAR_HEADING( l_U852, l_U613 );
                    SET_CAR_COORDINATES( l_U852, l_U759._fU0, l_U759._fU4, l_U759._fU8 );
                }
                if (DOES_CHAR_EXIST( l_U713[0] ))
                {
                    DELETE_CHAR( ref l_U713[0] );
                }
                if (DOES_CHAR_EXIST( l_U713[1] ))
                {
                    DELETE_CHAR( ref l_U713[1] );
                }
                if (DOES_CHAR_EXIST( l_U713[2] ))
                {
                    DELETE_CHAR( ref l_U713[2] );
                }
                if (DOES_CHAR_EXIST( l_U709 ))
                {
                    DELETE_CHAR( ref l_U709 );
                }
                if (IS_VEH_DRIVEABLE( l_U853[0] ))
                {
                    CREATE_CHAR_INSIDE_CAR( l_U853[0], 26, -19263344, ref l_U734[0] );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U734[0] );
                    SET_CHAR_COMPONENT_VARIATION( l_U734[0], 1, 0, 0 );
                    SET_CHAR_COMPONENT_VARIATION( l_U734[0], 2, 0, 1 );
                    SET_CHAR_DECISION_MAKER( l_U734[0], l_U580 );
                    SET_COMBAT_DECISION_MAKER( l_U734[0], l_U583 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U734[0], 0 );
                    OPEN_SEQUENCE_TASK( ref l_U739 );
                    TASK_PAUSE( 0, 1000 );
                    TASK_CAR_DRIVE_WANDER( 0, l_U853[0], 15.00000000, 1 );
                    CLOSE_SEQUENCE_TASK( l_U739 );
                    TASK_PERFORM_SEQUENCE( l_U734[0], l_U739 );
                    CLEAR_SEQUENCE_TASK( l_U739 );
                    LOCK_CAR_DOORS( l_U853[0], 1 );
                }
                if (IS_VEH_DRIVEABLE( l_U852 ))
                {
                    CREATE_CHAR_INSIDE_CAR( l_U852, 26, -19263344, ref l_U734[1] );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U734[1] );
                    SET_CHAR_COMPONENT_VARIATION( l_U734[1], 1, 0, 0 );
                    SET_CHAR_COMPONENT_VARIATION( l_U734[1], 2, 0, 1 );
                    SET_CHAR_DECISION_MAKER( l_U734[1], l_U580 );
                    SET_COMBAT_DECISION_MAKER( l_U734[1], l_U583 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U734[1], 0 );
                    TASK_CAR_DRIVE_WANDER( l_U734[1], l_U852, 12.00000000, 1 );
                    LOCK_CAR_DOORS( l_U852, 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U713[3] )))
                {
                    if (IS_VEH_DRIVEABLE( l_U853[1] ))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U713[3], l_U853[1] )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U713[3] );
                            WARP_CHAR_INTO_CAR( l_U713[3], l_U853[1] );
                            OPEN_SEQUENCE_TASK( ref l_U739 );
                            TASK_PAUSE( 0, 2000 );
                            TASK_CAR_DRIVE_WANDER( 0, l_U853[1], 12.00000000, 1 );
                            CLOSE_SEQUENCE_TASK( l_U739 );
                            TASK_PERFORM_SEQUENCE( l_U713[3], l_U739 );
                            CLEAR_SEQUENCE_TASK( l_U739 );
                        }
                    }
                }
                SET_WIDESCREEN_BORDERS( 0 );
                if (IS_PLAYER_PLAYING( sub_2775() ))
                {
                    SET_CHAR_COORDINATES( sub_2845(), 994.57780000, 988.32780000, 16.83960000 );
                    SET_CHAR_HEADING( sub_2845(), 222.00000000 );
                }
                REMOVE_ANIMS( "gestures@niko" );
                for ( I = 0; I < 5; I++ )
                {
                    if (DOES_CAM_EXIST( l_U861[I] ))
                    {
                        DESTROY_CAM( l_U861[I] );
                    }
                }
                if (DOES_CAM_EXIST( l_U860 ))
                {
                    DESTROY_CAM( l_U860 );
                }
                if (l_U102)
                {
                    sub_29000( 0, 1, 0 );
                }
                else
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    sub_29000( 1000, 1, 0 );
                }
                if (NOT (l_U673 == -1))
                {
                    STOP_SOUND( l_U673 );
                }
                sub_79423();
                SET_PLAYER_CONTROL( sub_2775(), 1 );
                sub_79473();
                break;
            }
            break;
            case 12:
            sub_46435();
            switch (ProtectedGet(l_U99))
            {
                case 0:
                if ((sub_17005( 1, 1 )) AND (IS_SCREEN_FADED_IN()))
                {
                    if (DOES_CHAR_EXIST( l_U709 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U709 )))
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                SET_CHAR_PROOFS( l_U709, 1, 1, 1, 1, 1 );
                                if (IS_CHAR_IN_ANY_CAR( sub_2845() ))
                                {
                                    SET_PLAYER_CONTROL( sub_2775(), 0 );
                                }
                                DO_SCREEN_FADE_OUT( 1000 );
                                while (NOT IS_SCREEN_FADED_OUT())
                                {
                                    WAIT( 0 );
                                }
                                SET_PLAYER_CONTROL( sub_2775(), 0 );
                                sub_47644( 1, 1 );
                                l_U859 = nil;
                                if (IS_CHAR_IN_ANY_CAR( sub_2845() ))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2845(), ref l_U859 );
                                }
                                if (NOT (DOES_VEHICLE_EXIST( l_U859 )))
                                {
                                    GET_CAR_CHAR_IS_USING( sub_2845(), ref l_U859 );
                                }
                                if (NOT l_U571)
                                {
                                    if (DOES_VEHICLE_EXIST( l_U859 ))
                                    {
                                        if (IS_CAR_MODEL( l_U859, 627094268 ))
                                        {
                                            l_U859 = nil;
                                        }
                                    }
                                }
                                if (NOT (IS_VEH_DRIVEABLE( l_U859 )))
                                {
                                    l_U859 = nil;
                                }
                                if (NOT (sub_96524( l_U859 )))
                                {
                                    l_U859 = nil;
                                }
                                if (NOT (DOES_VEHICLE_EXIST( l_U859 )))
                                {
                                    REQUEST_MODEL( 1777363799 );
                                    while (NOT (HAS_MODEL_LOADED( 1777363799 )))
                                    {
                                        WAIT( 0 );
                                    }
                                    if (NOT (IS_CHAR_INJURED( sub_2845() )))
                                    {
                                        GET_CHAR_COORDINATES( sub_2845(), ref vVar5.x, ref vVar5.y, ref vVar5.z );
                                    }
                                    CREATE_CAR( 1777363799, vVar5.x, vVar5.y, vVar5.z, ref l_U859, 1 );
                                }
                                if (NOT (IS_CHAR_INJURED( sub_2845() )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2845() );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U709 )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U709 );
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U709, 1 );
                                }
                                sub_59876( l_U859 );
                                if (IS_VEH_DRIVEABLE( l_U859 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( sub_2845() )))
                                    {
                                        WARP_CHAR_INTO_CAR( sub_2845(), l_U859 );
                                    }
                                    if (NOT (IS_CHAR_INJURED( l_U709 )))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U709, l_U859, 0 );
                                    }
                                }
                                if (IS_VEH_DRIVEABLE( l_U859 ))
                                {
                                    SET_CAR_HEADING( l_U859, 270.00000000 );
                                    SET_CAR_COORDINATES( l_U859, -255.03960000, -167.11310000, 13.94570000 );
                                    SET_CAR_ENGINE_ON( l_U859, 1, 1 );
                                }
                                sub_97005();
                                l_U562 = 0;
                                while (NOT l_U562)
                                {
                                    if (sub_26739( l_U859 ))
                                    {
                                        l_U562 = 1;
                                    }
                                    else
                                    {
                                        WAIT( 0 );
                                    }
                                }
                                CLEAR_AREA( -247.89430000, -170.11240000, 13.82040000, 50.00000000, 1 );
                                LOAD_ALL_OBJECTS_NOW();
                                CREATE_CAM( 14, ref l_U111 );
                                SET_CAM_POS( l_U111, -241.15830000, -176.66990000, 15.21653000 );
                                SET_CAM_ROT( l_U111, -5.04602800, -0.00000000, 54.81246000 );
                                SET_CAM_FOV( l_U111, 29.70004000 );
                                SET_CAM_ACTIVE( l_U111, 1 );
                                SET_CAM_PROPAGATE( l_U111, 1 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                SET_WIDESCREEN_BORDERS( 1 );
                                if (IS_VEH_DRIVEABLE( l_U859 ))
                                {
                                    SET_CAR_ENGINE_ON( l_U859, 1, 1 );
                                    SET_CAR_FORWARD_SPEED( l_U859, 5.00000000 );
                                    TASK_CAR_DRIVE_TO_COORD( sub_2845(), 0, -246.87240000, -171.11310000, 13.83960000, 5.00000000, 0, 0, 3, 2, 10 );
                                }
                                sub_76182( l_U111 );
                                DO_SCREEN_FADE_IN( 1000 );
                                while (NOT IS_SCREEN_FADED_IN())
                                {
                                    WAIT( 0 );
                                }
                                SETTIMERA( 0 );
                                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                            }
                        }
                        else
                        {
                            sub_2766();
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( sub_2845() )))
                    {
                        GET_CHAR_COORDINATES( sub_2845(), ref vVar5.x, ref vVar5.y, ref vVar5.z );
                    }
                    sub_24193( 13, ref l_U709, vVar5.x, vVar5.y, vVar5.z + 20.00000000, 0.00000000 );;
                }
                break;
                case 1:
                bVar3 = false;
                GET_SCRIPT_TASK_STATUS( sub_2845(), 15, ref l_U737 );
                if (l_U737 == 7)
                {
                    bVar3 = true;
                }
                if (TIMERA() > 5000)
                {
                    bVar3 = true;
                }
                if (bVar3)
                {
                    if (NOT (IS_CHAR_INJURED( sub_2845() )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U859 ))
                        {
                            TASK_CAR_TEMP_ACTION( sub_2845(), l_U859, 6, 99999999 );
                        }
                    }
                    l_U663 = 0;
                    ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                }
                break;
                case 2:
                if (NOT sub_16188())
                {
                    switch (l_U664)
                    {
                        case 1:
                        if (sub_4122())
                        {
                            if (l_U663 == 0)
                            {
                                if (sub_43845( "FM6_DROPF", ref l_U125, 6, 1 ))
                                {
                                    l_U663++;
                                }
                            }
                            else if (NOT (sub_16210( l_U125 )))
                            {
                                ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                                l_U663 = 0;
                            }
                        }
                        else if (l_U663 == 0)
                        {
                            if (sub_43845( "FM6_DROPD", ref l_U125, 6, 1 ))
                            {
                                l_U663++;
                            }
                        }
                        else if (NOT (sub_16210( l_U125 )))
                        {
                            ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                            l_U663 = 0;
                        };;;
                        break;
                        case 2:
                        if (l_U663 == 0)
                        {
                            if (sub_43845( "FM6_DROPH", ref l_U125, 6, 1 ))
                            {
                                l_U663++;
                            }
                        }
                        else if (NOT (sub_16210( l_U125 )))
                        {
                            ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                            l_U663 = 0;
                        }
                        break;
                        default:
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                        break;
                    }
                }
                break;
                case 3:
                if (NOT sub_16188())
                {
                    if (NOT (IS_CHAR_INJURED( l_U709 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U739 );
                        if (IS_CHAR_IN_ANY_CAR( l_U709 ))
                        {
                            TASK_LEAVE_ANY_CAR( 0 );
                        }
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -253.28850000, -171.63180000, 14.44420000, 2, 10000, 2.00000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -259.77490000, -171.68300000, 11.44340000, 2, 10000, 2.00000000 );
                        CLOSE_SEQUENCE_TASK( l_U739 );
                        TASK_PERFORM_SEQUENCE( l_U709, l_U739 );
                        CLEAR_SEQUENCE_TASK( l_U739 );
                        SETTIMERA( 0 );
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                break;
                case 4:
                bVar3 = false;
                if (NOT (IS_CHAR_INJURED( l_U709 )))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U709 )))
                    {
                        bVar3 = true;
                    }
                }
                if (TIMERA() > 8000)
                {
                    bVar3 = true;
                }
                if (NOT (IS_CHAR_INJURED( l_U709 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U709, 29, ref l_U737 );
                    if (l_U737 == 7)
                    {
                        bVar3 = true;
                    }
                }
                if (bVar3)
                {
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                if (l_U102)
                {
                    if (IS_VEH_DRIVEABLE( l_U859 ))
                    {
                        SET_CAR_HEADING( l_U859, 238.41470000 );
                        SET_CAR_COORDINATES( l_U859, -247.89430000, -170.11240000, 13.82040000 );
                        sub_26739( l_U859 );
                    }
                }
                else
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                }
                sub_29000( 0, 1, 0 );
                if (DOES_CHAR_EXIST( l_U709 ))
                {
                    DELETE_CHAR( ref l_U709 );
                }
                if (IS_PLAYER_PLAYING( sub_2775() ))
                {
                    CLEAR_CHAR_TASKS( sub_2845() );
                    SET_PLAYER_CONTROL( sub_2775(), 1 );
                }
                sub_2766();
                break;
            }
            break;
            case 13:
            switch (ProtectedGet(l_U99))
            {
                case 0:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (sub_98655( 13, "FM6_FAIL", "FM6AUD" ))
                    {
                        SETTIMERA( 0 );
                        ProtectedSet(l_U99, ProtectedGet(l_U99) + 1);
                    }
                }
                break;
                case 1:
                if (sub_98757( 0 ))
                {
                    sub_2766();
                }
                break;
            }
            break;
            case 11:
            sub_46435();
            switch (ProtectedGet(l_U99))
            {
                case 0:
                if ((sub_17005( 1, 1 )) AND (IS_SCREEN_FADED_IN()))
                {
                    if (DOES_CHAR_EXIST( l_U709 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U709 )))
                        {
                            if (NOT sub_16188())
                            {
                                ProtectedSet(l_U99, 99);
                            }
                        }
                        else
                        {
                            sub_2766();
                        }
                    }
                }
                break;
                case 1:
                if (TIMERA() > 5000)
                {
                    ProtectedSet(l_U99, 99);
                }
                break;
                case 99:
                for ( I = 0; I < 4; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U713[I] )))
                    {
                        DELETE_CHAR( ref l_U713[I] );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U709 )))
                {
                    DELETE_CHAR( ref l_U709 );
                }
                sub_29000( 0, 1, 0 );
                sub_2766();
                break;
            }
            break;
        }
        if (DOES_CHAR_EXIST( l_U709 ))
        {
            if ((IS_CHAR_INJURED( l_U709 )) AND (sub_17005( 1, 1 )))
            {
                sub_99358( 13, l_U709, 11 );
                sub_72073();
                sub_72382( "FR6_F02" );
                sub_2766();
            }
        }
        if ((((l_U98 == 5) || (l_U98 == 8)) || (l_U98 == 14)) || (l_U98 == 15))
        {
            if (DOES_VEHICLE_EXIST( l_U852 ))
            {
                switch (l_U671)
                {
                    case 0:
                    bVar3 = false;
                    if (NOT (IS_VEH_DRIVEABLE( l_U852 )))
                    {
                        bVar3 = true;
                    }
                    if (IS_CAR_IN_WATER( l_U852 ))
                    {
                        if (IS_CAR_IN_WATER( l_U852 ))
                        {
                            GET_FRAME_TIME( ref fVar4 );
                            fVar4 *= 1000.00000000;
                            l_U629 += fVar4;
                        }
                        else
                        {
                            l_U629 = 0.00000000;
                        }
                        if (l_U629 > 3000.00000000)
                        {
                            bVar3 = true;
                        }
                    }
                    if (IS_VEH_DRIVEABLE( l_U852 ))
                    {
                        if (CHECK_STUCK_TIMER( l_U852, 0, 5000 ))
                        {
                            bVar3 = true;
                        }
                    }
                    if ((bVar3) AND (sub_17005( 1, 1 )))
                    {
                        bVar3 = false;
                        if (NOT (IS_CHAR_INJURED( l_U709 )))
                        {
                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2845(), l_U709, 30.00000000, 30.00000000, 30.00000000, 0 )) || (IS_CHAR_ON_SCREEN( l_U709 )))
                            {
                                bVar3 = true;
                            }
                        }
                        if (bVar3)
                        {
                            if (sub_43845( "FM6_HDESTR", ref l_U125, 6, 1 ))
                            {
                                SETTIMERA( 0 );
                                l_U98 = 15;
                                l_U671++;
                            }
                        }
                        else if (DOES_CHAR_EXIST( l_U710 ))
                        {
                            DELETE_CHAR( ref l_U710 );
                        }
                        if (DOES_OBJECT_EXIST( l_U687 ))
                        {
                            DELETE_OBJECT( ref l_U687 );
                        }
                        if (DOES_CHAR_EXIST( l_U709 ))
                        {
                            DELETE_CHAR( ref l_U709 );
                        }
                        if (DOES_VEHICLE_EXIST( l_U852 ))
                        {
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U852 );
                        }
                        sub_72073();
                        sub_72382( "FR6_F03" );
                        sub_7949( 13, 0 );;
                    }
                    break;
                    case 1:
                    if (sub_17005( 1, 1 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U709 )))
                        {
                            if (NOT (sub_16210( l_U125 )))
                            {
                                sub_72073();
                                sub_72382( "FR6_F03" );
                                l_U664 = 2;
                                sub_7949( 12, 0 );
                            }
                        }
                    }
                    break;
                }
            }
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 33 ))
        {
            sub_72073();
            sub_72382( "debug" );
            sub_2766();
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
        {
            sub_79473();
        }
        sub_100120();
    }
    return;
}

void sub_656()
{
    sub_665();
    return;
}

void sub_665()
{
    int iVar2;

    iVar2 = 11;
    sub_679( iVar2 );
    sub_1855( iVar2 );
    return;
}

void sub_679(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_723();
        sub_884();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_992();
            sub_1031();
        }
    }
    sub_1107();
    sub_1208();
    uVar5 = sub_1321( uParam0 );
    sub_1762( uVar5, 0 );
    return;
}

void sub_723()
{
    sub_737( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_837();
    }
    return;
}

void sub_737(int iParam0)
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
    iVar3 = g_U26758[iParam0]._fU100;
    iVar3--;
    g_U26758[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_837()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_884()
{
    sub_893();
    return;
}

void sub_893()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_992()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1031()
{
    sub_1040();
    return;
}

void sub_1040()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1107()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_1208()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1230();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1230()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1321(unknown uParam0)
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
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1720( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1720(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1762(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_1855(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1864();
    if (g_U0)
    {
        return;
    }
    if (g_U91._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10978)
    {
        return;
    }
    iVar3 = g_U13391[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10981[iParam0]._fU12)
    {
        return;
    }
    if (g_U9893._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9893._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U813)
    {
        sub_2639();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1864()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1902( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1902( 1, g_U569[I] )) != 0)
            {
                sub_2188( I );
            }
        }
    }
    if (NOT sub_2354())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_1902(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2188(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2273( g_U569 - 1 );
    return;
}

void sub_2273(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2354()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1902( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2639()
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

void sub_2766()
{
    if (IS_PLAYER_PLAYING( sub_2775() ))
    {
        if (g_U9930 > 1)
        {
            SET_PLAYER_MOOD_PISSED_OFF( sub_2775(), 150 );
            SAY_AMBIENT_SPEECH( sub_2845(), "MISSION_FAIL_RAGE", 1, 1, 0 );
        }
    }
    sub_2916();
    sub_3029();
    return;
}

void sub_2775()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2845()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2916()
{
    sub_2925();
    return;
}

void sub_2925()
{
    int iVar2;

    iVar2 = 11;
    sub_2939( iVar2 );
    sub_1855( iVar2 );
    return;
}

void sub_2939(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_2775(), 150 );
    CLEAR_HELP();
    sub_679( uParam0 );
    return;
}

void sub_3029()
{
    if (DOES_CHAR_EXIST( l_U710 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U710 )))
        {
            SET_CHAR_HEALTH( l_U710, 0 );
        }
    }
    SET_PED_IS_BLIND_RAGING( sub_2845(), 0 );
    sub_3100( 0 );
    sub_3282( 0 );
    g_U9156 = 0;
    MARK_MODEL_AS_NO_LONGER_NEEDED( 627094268 );
    DONT_SUPPRESS_CAR_MODEL( 627094268 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -271.21430000, -330.99300000, 0.00000000, -250.47060000, -225.14970000, 50.00000000 );
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( -279.20290000, -317.81370000, 10.73120000, -249.55540000, -236.05600000, 21.23120000 );
    if (IS_PLAYER_PLAYING( sub_2775() ))
    {
        SET_PLAYER_CONTROL( sub_2775(), 1 );
    }
    if (IS_VEH_DRIVEABLE( l_U852 ))
    {
        sub_3703( l_U852 );
    }
    sub_3780();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    if (sub_4122())
    {
        CLEAR_NAMED_CUTSCENE( "FM6_B" );
    }
    else
    {
        CLEAR_NAMED_CUTSCENE( "FM6_A" );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3100(boolean bParam0)
{
    if (DOES_BLIP_EXIST( g_U10324[36]._fU32 ))
    {
        if (bParam0)
        {
            SET_BLIP_AS_SHORT_RANGE( g_U10324[36]._fU32, 0 );
        }
        else
        {
            SET_BLIP_AS_SHORT_RANGE( g_U10324[36]._fU32, 1 );
        }
    }
    if (DOES_BLIP_EXIST( g_U10324[35]._fU32 ))
    {
        if (bParam0)
        {
            SET_BLIP_AS_SHORT_RANGE( g_U10324[35]._fU32, 0 );
        }
        else
        {
            SET_BLIP_AS_SHORT_RANGE( g_U10324[35]._fU32, 1 );
        }
    }
    return;
}

void sub_3282(boolean bParam0)
{
    int I;

    if (bParam0)
    {
        for ( I = 0; I < 5; I++ )
        {
            if (g_U9943[I]._fU0)
            {
                if (NOT (DOES_BLIP_EXIST( l_U526[I] )))
                {
                    ADD_BLIP_FOR_COORD( g_U9943[I]._fU8._fU0, g_U9943[I]._fU8._fU4, g_U9943[I]._fU8._fU8, ref l_U526[I] );
                    CHANGE_BLIP_SPRITE( l_U526[I], 29 );
                }
            }
        }
    }
    else
    {
        for ( I = 0; I < 5; I++ )
        {
            if (DOES_BLIP_EXIST( l_U526[I] ))
            {
                REMOVE_BLIP( l_U526[I] );
            }
        }
    }
    return;
}

void sub_3703(unknown uParam0)
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if (I > 0)
        {
            if (IS_VEHICLE_EXTRA_TURNED_ON( uParam0, I ))
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, I, 1 );
            }
        }
    }
    return;
}

void sub_3780()
{
    if (l_U103)
    {
        sub_3799();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        sub_4067( ref l_U100 );
        l_U103 = 0;
    }
    return;
}

void sub_3799()
{
    int Result;

    Result = 0;
    if (DOES_CAM_EXIST( l_U111 ))
    {
        SET_CAM_ACTIVE( l_U111, 0 );
        SET_CAM_PROPAGATE( l_U111, 0 );
        DESTROY_CAM( l_U111 );
        Result = 1;
    }
    if (DOES_CAM_EXIST( l_U112 ))
    {
        SET_CAM_ACTIVE( l_U112, 0 );
        SET_CAM_PROPAGATE( l_U112, 0 );
        DESTROY_CAM( l_U112 );
        Result = 1;
    }
    if (DOES_CAM_EXIST( l_U113 ))
    {
        SET_CAM_ACTIVE( l_U113, 0 );
        SET_CAM_PROPAGATE( l_U113, 0 );
        DESTROY_CAM( l_U113 );
        Result = 1;
    }
    if (DOES_CAM_EXIST( l_U114 ))
    {
        SET_CAM_ACTIVE( l_U114, 0 );
        SET_CAM_PROPAGATE( l_U114, 0 );
        DESTROY_CAM( l_U114 );
        Result = 1;
    }
    return Result;
}

void sub_4067(unknown uParam0)
{
    SET_USE_HIGHDOF( 0 );
    END_CAM_COMMANDS( uParam0 );
    return;
}

int sub_4122()
{
    if (g_U15654[13])
    {
        return 1;
    }
    return 0;
}

void sub_4239(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_4275())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_4275()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_4406(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_4423();
    return;
}

void sub_4423()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U0._fU16[I]._fU0 = nil;
        StrCopy( ref l_U0._fU16[I]._fU4, "", 32 );
        l_U0._fU344[I] = 0;
    }
    return;
}

void sub_4574(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4654( "\n PED NUMBER ", uParam0 );
    sub_4694( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4654(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4694(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4789()
{
    if (IS_PLAYER_PLAYING( sub_2775() ))
    {
        sub_4822( g_U8371._fU0 );
        sub_5908( g_U8371._fU4 );
        sub_6595( g_U8371._fU8 );
        sub_7156( g_U8371._fU12 );
        sub_7181( g_U8371._fU16 );
        SET_CHAR_COMPONENT_VARIATION( sub_2845(), 4, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( sub_2845(), 3, 0, 0 );
    }
    return;
}

void sub_4822(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_4835( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_2845(), 1 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_2845(), 1 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_2845(), 1, iVar3, iVar4 );
    }
    return;
}

void sub_4835(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_5908(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_5921( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_2845(), 2 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_2845(), 2 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_2845(), 2, iVar3, iVar4 );
    }
    return;
}

void sub_5921(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_6595(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_6608( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_2845(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_2845(), 5 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_2845(), 5, iVar3, iVar4 );
    }
    return;
}

void sub_6608(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_7156(int iParam0)
{
    int iVar3;
    int iVar4;

    if (iParam0 == 3)
    {
        sub_7156( -1 );
        sub_7181( -1 );
        if (((GET_CHAR_DRAWABLE_VARIATION( sub_2845(), 8 )) != 1) || ((GET_CHAR_TEXTURE_VARIATION( sub_2845(), 8 )) != 0))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_2845(), 8, 1, 0 );
        }
    }
    else
    {
        sub_7436( iParam0, ref iVar3 );
        GET_CHAR_PROP_INDEX( sub_2845(), 0, ref iVar4 );
        if (((GET_CHAR_DRAWABLE_VARIATION( sub_2845(), 8 )) != 0) || ((GET_CHAR_TEXTURE_VARIATION( sub_2845(), 8 )) != 0))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_2845(), 8, 0, 0 );
        }
        if (iVar4 != iVar3)
        {
            if (iVar3 < 0)
            {
                CLEAR_CHAR_PROP( sub_2845(), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( sub_2845(), 0, iVar3 );
            }
        }
    }
    return;
}

void sub_7181(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_7193( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_2845(), 1, ref iVar4 );
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_2845(), 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_2845(), 1, iVar3 );
        }
    }
    return;
}

void sub_7193(unknown uParam0, unknown uParam1)
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

void sub_7436(unknown uParam0, unknown uParam1)
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

int sub_7767(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_7784( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2845(), uParam0, uParam1, uParam4, uParam4, 0 )))
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

int sub_7784(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_7949(int iParam0, boolean bParam1)
{
    l_U110 = 0;
    if (NOT (l_U98 == iParam0))
    {
        sub_7978();
        if (bParam1)
        {
            if (NOT l_U109)
            {
                CLEAR_PRINTS();
            }
        }
        CLEAR_HELP();
        l_U98 = iParam0;
        ProtectedSet(l_U99, 0);
        l_U101 = 1;
        l_U102 = 0;
        l_U110 = 1;
    }
    return;
}

void sub_7978()
{
    int I;

    if (DOES_BLIP_EXIST( l_U120 ))
    {
        REMOVE_BLIP( l_U120 );
    }
    if (DOES_BLIP_EXIST( l_U121 ))
    {
        REMOVE_BLIP( l_U121 );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U116[I] ))
        {
            REMOVE_BLIP( l_U116[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U115 ))
    {
        REMOVE_BLIP( l_U115 );
    }
    l_U108 = 0;
    return;
}

void sub_8240(unknown uParam0, unknown uParam1)
{
    int Result;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    Result = 0;
    REQUEST_ADDITIONAL_TEXT( uParam0, 6 );
    while (NOT (HAS_ADDITIONAL_TEXT_LOADED( 6 )))
    {
        WAIT( 0 );
    }
    sub_8298( ref uVar5, uParam1, Result + 1, -1, -1 );
    ConcatString(ref uVar5, "A", 16);
    while (DOES_TEXT_LABEL_EXIST( ref uVar5 ))
    {
        Result++;
        sub_8298( ref uVar5, uParam1, Result + 1, -1, -1 );
        ConcatString(ref uVar5, "A", 16);
    }
    return Result;
}

void sub_8298(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_8506()
{
    float fVar2;

    GET_FRAME_TIME( ref fVar2 );
    fVar2 *= 1000.00000000;
    l_U591 += fVar2;
    l_U590 += fVar2;
    l_U625 += fVar2;
    return;
}

void sub_8716()
{
    if (NOT l_U565)
    {
        if (sub_4122())
        {
            switch (l_U665)
            {
                case 0:
                if (TIMERA() > 10000)
                {
                    if (NOT sub_8790())
                    {
                        if (sub_8857( 10, "MF6_FDEAD", "MF12AUD", 10000, 0 ))
                        {
                            l_U665++;
                        }
                    }
                }
                break;
                case 1:
                if (NOT sub_12737())
                {
                    switch (sub_12839())
                    {
                        case 1:
                        case 2:
                        case 5:
                        SETTIMERA( 0 );
                        l_U665 = 0;
                        break;
                        case 4:
                        case 6:
                        l_U565 = 1;
                        break;
                    }
                }
                break;
            }
        }
        else
        {
            switch (l_U665)
            {
                case 0:
                if (TIMERA() > 10000)
                {
                    if (NOT sub_8790())
                    {
                        if (sub_8857( 10, "MF6_FDEAD2", "MF12AUD", 10000, 0 ))
                        {
                            l_U665++;
                        }
                    }
                }
                break;
                case 1:
                if (NOT sub_12737())
                {
                    switch (sub_12839())
                    {
                        case 1:
                        case 2:
                        case 5:
                        SETTIMERA( 0 );
                        l_U665 = 0;
                        break;
                        case 4:
                        case 6:
                        l_U565 = 1;
                        break;
                    }
                }
                break;
            }
        }
    }
    return;
}

int sub_8790()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_8857(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_8917( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_8917(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_8987( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_8987( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_2775() )))
    {
        sub_8987( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_2845() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2845() ))))
    {
        sub_8987( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_8987( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_9444()) AND (NOT bParam11))
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
                sub_8987( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_9444()) AND (NOT bParam11))
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
    sub_10816( uParam0, ref g_U91._fU176 );
    sub_12197( ref g_U91._fU160 );
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
        sub_4694( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_8987(unknown uParam0)
{
    return;
}

int sub_9444()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_9501())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_9501()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_2775() )))
    {
        sub_8987( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_8987( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_8987( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_8987( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2775() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2845() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_2845(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_8987( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_2845() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_8987( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_8987( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_2775() )))
    {
        sub_8987( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_10816(int iParam0, unknown uParam1)
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

void sub_12197(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_12737()
{
    if (g_U91._fU60 != -1)
    {
        if ((g_U15946[g_U91._fU60]._fU132._fU24 == 0) || (g_U15946[g_U91._fU60]._fU132._fU24 == 3))
        {
            return 1;
        }
    }
    return 0;
}

int sub_12839()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

int sub_13391(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14)
{
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        if (sub_13413())
        {
            l_U524 = 0;
            l_U525 = 0;
            sub_3100( 0 );
            sub_3282( 0 );
            return 1;
        }
        else
        {
            sub_3100( 1 );
            if (sub_13649())
            {
                sub_3282( 1 );
            }
            if (DOES_BLIP_EXIST( g_U10324[36]._fU32 ))
            {
                sub_13990( ref g_U10324[36]._fU32 );
            }
            if (NOT sub_14015())
            {
                if (sub_14137())
                {
                    if (NOT l_U525)
                    {
                        if (((NOT sub_13422()) AND (NOT sub_13483())) AND (NOT sub_13535()))
                        {
                            PRINT_NOW( uParam7, 7500, 1 );
                        }
                        else if (NOT sub_13422())
                        {
                            if ((NOT sub_13483()) AND (sub_13535()))
                            {
                                PRINT_NOW( uParam11, 7500, 1 );
                            }
                            else if ((sub_13483()) AND (NOT sub_13535()))
                            {
                                PRINT_NOW( uParam12, 7500, 1 );
                            }
                            else
                            {
                                PRINT_NOW( uParam8, 7500, 1 );
                            }
                        }
                        else if (NOT sub_13483())
                        {
                            if (NOT sub_13535())
                            {
                                PRINT_NOW( uParam13, 7500, 1 );
                            }
                            else
                            {
                                PRINT_NOW( uParam9, 7500, 1 );
                            }
                        }
                        else if (NOT sub_13535())
                        {
                            PRINT_NOW( uParam10, 7500, 1 );
                        };;;;
                        l_U525 = 1;
                    }
                    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
                    {
                        sub_14520();
                    }
                }
                else if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
                {
                    SET_CHAR_COORDINATES( sub_2845(), 22.32550000, 811.54570000, 13.71340000 );
                    SET_CHAR_HEADING( sub_2845(), 180.00000000 );
                }
                if (NOT l_U524)
                {
                    if (sub_13649())
                    {
                        PRINT_NOW( uParam14, 7500, 1 );
                    }
                    else if (((NOT sub_13422()) AND (NOT sub_13483())) AND (NOT sub_13535()))
                    {
                        PRINT_NOW( uParam0, 7500, 1 );
                    }
                    else if (NOT sub_13422())
                    {
                        if ((NOT sub_13483()) AND (sub_13535()))
                        {
                            PRINT_NOW( uParam0, 7500, 1 );
                        }
                        else if ((sub_13483()) AND (NOT sub_13535()))
                        {
                            PRINT_NOW( uParam5, 7500, 1 );
                        }
                        else
                        {
                            PRINT_NOW( uParam1, 7500, 1 );
                        }
                    }
                    else if (NOT sub_13483())
                    {
                        if (NOT sub_13535())
                        {
                            PRINT_NOW( uParam6, 7500, 1 );
                        }
                        else
                        {
                            PRINT_NOW( uParam2, 7500, 1 );
                        }
                    }
                    else if (NOT sub_13535())
                    {
                        PRINT_NOW( uParam3, 7500, 1 );
                    };;;;;
                    l_U524 = 1;
                }
                l_U525 = 0;;
            }
            else
            {
                l_U524 = 0;
                l_U525 = 0;
            }
        }
    }
    return 0;
}

int sub_13413()
{
    if (((sub_13422()) AND (sub_13483())) AND (sub_13535()))
    {
        return 1;
    }
    return 0;
}

int sub_13422()
{
    int iVar2;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_2845(), 1 );
    if ((((iVar2 == 11) || (iVar2 == 12)) || (iVar2 == 5)) || (iVar2 == 13))
    {
        return 1;
    }
    return 0;
}

int sub_13483()
{
    int iVar2;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_2845(), 2 );
    if ((iVar2 == 4) || (iVar2 == 2))
    {
        return 1;
    }
    return 0;
}

int sub_13535()
{
    int iVar2;
    unknown uVar3;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_2845(), 5 );
    if ((iVar2 == 2) || (iVar2 == 5))
    {
        return 1;
    }
    return 0;
}

int sub_13649()
{
    if ((sub_13658()) AND (sub_13826( 0 )))
    {
        return 1;
    }
    return 0;
}

int sub_13658()
{
    if (((g_U8332[2]) || (g_U8332[3])) || (g_U8332[4]))
    {
        return 1;
    }
    if (((g_U8332[5]) || (g_U8332[6])) || (g_U8332[7]))
    {
        return 1;
    }
    if ((((g_U8332[8]) || (g_U8332[9])) || (g_U8332[10])) || (g_U8332[11]))
    {
        return 1;
    }
    if (((g_U8332[12]) || (g_U8332[13])) || (g_U8332[14]))
    {
        return 1;
    }
    return 0;
}

int sub_13826(boolean bParam0)
{
    if (((((g_U8302[13]) || (g_U8302[14])) || (g_U8302[15])) || (g_U8302[17])) || (g_U8302[18]))
    {
        return 1;
    }
    if (bParam0)
    {
        if (g_U8302[16])
        {
            return 1;
        }
    }
    return 0;
}

void sub_13990(unknown uParam0)
{
    g_U2221 = (uParam0^);
    return;
}

int sub_14015()
{
    if ((IS_CHAR_IN_AREA_3D( sub_2845(), 17.17230000, 795.72780000, 12.61180000, 27.44730000, 809.37780000, 17.36180000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_2845(), 5.79750000, -672.99710000, 13.74160000, 15.77250000, -659.02210000, 17.29160000, 0 )))
    {
        return 1;
    }
    return 0;
}

int sub_14137()
{
    if ((IS_CHAR_IN_AREA_3D( sub_2845(), 16.97200000, 809.18510000, 13.49340000, 27.57200000, 815.53510000, 17.21840000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_2845(), 4.88090000, -659.12160000, 13.76950000, 16.83090000, -652.72160000, 16.76950000, 0 )))
    {
        return 1;
    }
    return 0;
}

void sub_14520()
{
    SET_CHAR_COMPONENT_VARIATION( sub_2845(), 1, 5, 0 );
    SET_CHAR_COMPONENT_VARIATION( sub_2845(), 2, 2, 0 );
    SET_CHAR_COMPONENT_VARIATION( sub_2845(), 5, 2, 0 );
    SET_CHAR_COMPONENT_VARIATION( sub_2845(), 4, 1, 0 );
    return;
}

void sub_14989()
{
    if (IS_PLAYER_PLAYING( sub_2775() ))
    {
        sub_15021( ref g_U8371._fU0 );
        sub_15161( ref g_U8371._fU4 );
        sub_15297( ref g_U8371._fU8 );
        sub_15433( ref g_U8371._fU12 );
        sub_15606( ref g_U8371._fU16 );
        g_U8371._fU20 = -1;
        g_U8371._fU24 = -1;
    }
    return;
}

void sub_15021(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_2845(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_2845(), 1 );
    bVar8 = false;
    for ( I = 0; I < 45; I++ )
    {
        if (NOT bVar8)
        {
            sub_4835( I, ref iVar6, ref iVar7 );
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

void sub_15161(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_2845(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_2845(), 2 );
    bVar8 = false;
    for ( I = 0; I < 26; I++ )
    {
        if (NOT bVar8)
        {
            sub_5921( I, ref iVar6, ref iVar7 );
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

void sub_15297(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_2845(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_2845(), 5 );
    bVar8 = false;
    for ( I = 0; I < 20; I++ )
    {
        if (NOT bVar8)
        {
            sub_6608( I, ref iVar6, ref iVar7 );
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

void sub_15433(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;

    GET_CHAR_PROP_INDEX( sub_2845(), 0, ref iVar3 );
    (uParam0^) = 4;
    bVar6 = false;
    for ( I = -1; I <= 4; I++ )
    {
        if (NOT bVar6)
        {
            sub_7436( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == -1)
    {
        iVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_2845(), 8 );
        iVar8 = GET_CHAR_TEXTURE_VARIATION( sub_2845(), 8 );
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

void sub_15606(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_2845(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = -1; I <= 3; I++ )
    {
        if (NOT bVar6)
        {
            sub_7193( I, ref iVar5 );
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

int sub_16188()
{
    if ((((IS_MESSAGE_BEING_DISPLAYED()) || (sub_16210( l_U125 ))) || (sub_16373())) || (l_U107))
    {
        return 1;
    }
    return 0;
}

int sub_16210(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_8987( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_8987( "\n speech is not playing" );
    }
    return 0;
}

int sub_16373()
{
    if ((g_U91._fU0 == 1007) || (g_U91._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_16509(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    if (IS_SCREEN_FADED_IN())
    {
        if ((uParam8) AND (IS_WANTED_LEVEL_GREATER( sub_2775(), 0 )))
        {
            if ((DOES_BLIP_EXIST( l_U120 )) || (DOES_BLIP_EXIST( l_U121 )))
            {
                REMOVE_BLIP( l_U121 );
                REMOVE_BLIP( l_U120 );
                sub_16608( uParam7 );
            }
            if ((NOT sub_16188()) AND (NOT l_U105))
            {
                sub_16671( uParam9, 0 );
                l_U131 = uParam9;
                l_U105 = 1;
            }
        }
        else if (l_U105)
        {
            sub_16608( uParam9 );
            l_U105 = 0;
        }
        if (NOT (DOES_BLIP_EXIST( l_U120 )))
        {
            if (NOT sub_16188())
            {
                if (DOES_BLIP_EXIST( l_U121 ))
                {
                    l_U120 = l_U121;
                }
                else
                {
                    ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U120 );
                    SET_ROUTE( l_U120, 1 );
                }
                l_U121 = nil;
                if (NOT l_U108)
                {
                    sub_16671( uParam7, 0 );
                    l_U108 = 1;
                }
                else
                {
                    sub_16671( uParam7, 1 );
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U121 )))
            {
                ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U121 );
                SET_ROUTE( l_U121, 1 );
            }
        }
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2845(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 )) AND (sub_17005( 1, 1 )))
        {
            sub_16608( uParam7 );
            sub_7978();
            return 1;
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_2775() );
            sub_17381( uParam0, uParam1, uParam2 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    sub_17519( uParam0, uParam1, uParam2 );
    return 0;
}

void sub_16608(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

void sub_16671(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        PRINT_NOW( uParam0, 7500, 1 );
    }
    else
    {
        PRINT_NOW( uParam0, 3000, 1 );
    }
    l_U107 = 1;
    return;
}

int sub_17005(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2845() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2845(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2845() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2845(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2845()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2845() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2845() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2775() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2775() )))
    {
        return 0;
    }
    return 1;
}

void sub_17381(unknown uParam0, unknown uParam1, float fParam2)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_2845(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_2845(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_2845(), uParam0, uParam1, fParam2 );
    return;
}

void sub_17519(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_7767( uParam0, uParam1, uParam2, l_U122, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2845(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U122, l_U122, l_U122, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U122 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U122 );
            }
        }
    }
    return;
}

void sub_17941()
{
    int I;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    switch (l_U667)
    {
        case 0:
        if (sub_4122())
        {
            l_U804[0] = {-297.22980000, -285.24640000, 14.62710000};
            l_U595[0] = 90.00000000;
            l_U804[1] = {-293.91700000, -285.30900000, 14.62700000};
            l_U595[1] = 90.00000000;
            l_U804[2] = {-300.82980000, -280.75890000, 14.62710000};
            l_U595[2] = 90.00000000;
            l_U804[3] = {-299.26730000, -279.44640000, 14.62710000};
            l_U595[3] = 90.00000000;
            l_U804[4] = {-299.39230000, -280.54640000, 14.62710000};
            l_U595[4] = 90.00000000;
            l_U804[5] = {-295.41730000, -283.52140000, 14.62710000};
            l_U595[5] = 90.00000000;
            l_U804[6] = {-295.51730000, -279.35890000, 14.62710000};
            l_U595[6] = 90.00000000;
            l_U804[7] = {-297.35480000, -279.57140000, 14.62710000};
            l_U595[7] = 90.00000000;
            l_U804[8] = {-297.31730000, -283.63390000, 14.62710000};
            l_U595[8] = 90.00000000;
            l_U804[9] = {-297.46730000, -280.58390000, 14.62710000};
            l_U595[9] = 90.00000000;
            l_U804[10] = {-301.02980000, -280.12140000, 14.62710000};
            l_U595[10] = 90.00000000;
            l_U804[11] = {-300.91730000, -279.18390000, 14.62710000};
            l_U595[11] = 90.00000000;
            l_U804[12] = {-295.50480000, -280.72140000, 14.62710000};
            l_U595[12] = 90.00000000;
            l_U804[13] = {-297.31730000, -284.28390000, 14.62710000};
            l_U595[13] = 90.00000000;
            l_U679[0] = 453889158;
            l_U679[1] = -636579119;
            l_U679[2] = -370395528;
        }
        else
        {
            l_U804[0] = {-297.22980000, -285.04640000, 14.62710000};
            l_U595[0] = 90.00000000;
            l_U804[1] = {-293.86730000, -284.59640000, 14.62710000};
            l_U595[1] = 90.00000000;
            l_U804[2] = {-300.82980000, -280.75890000, 14.62710000};
            l_U595[2] = 90.00000000;
            l_U804[3] = {-299.40000000, -279.04640000, 14.62710000};
            l_U595[3] = 90.00000000;
            l_U804[4] = {-299.40000000, -279.89640000, 14.62710000};
            l_U595[4] = 90.00000000;
            l_U804[5] = {-295.41730000, -283.52140000, 14.62710000};
            l_U595[5] = 90.00000000;
            l_U804[6] = {-295.47980000, -284.10000000, 14.62710000};
            l_U595[6] = 90.00000000;
            l_U804[7] = {-297.35480000, -279.57140000, 14.62710000};
            l_U595[7] = 90.00000000;
            l_U804[8] = {-300.86730000, -279.25890000, 14.62710000};
            l_U595[8] = 90.00000000;
            l_U804[9] = {-297.46730000, -280.58390000, 14.62710000};
            l_U595[9] = 90.00000000;
            l_U804[10] = {-301.02980000, -280.12140000, 14.62710000};
            l_U595[10] = 90.00000000;
            l_U804[11] = {-299.40000000, -280.89640000, 14.62710000};
            l_U595[11] = 90.00000000;
            l_U804[12] = {-295.50480000, -280.72140000, 14.62710000};
            l_U595[12] = 90.00000000;
            l_U804[13] = {-299.34230000, -285.18390000, 14.62710000};
            l_U595[13] = 90.00000000;
            l_U679[0] = 453889158;
            l_U679[1] = -636579119;
            l_U679[2] = 1530937394;
        }
        REQUEST_MODEL( l_U679[0] );
        REQUEST_MODEL( l_U679[1] );
        REQUEST_MODEL( l_U679[2] );
        l_U667++;
        break;
        case 1:
        if (((HAS_MODEL_LOADED( l_U679[0] )) AND (HAS_MODEL_LOADED( l_U679[1] ))) AND (HAS_MODEL_LOADED( l_U679[2] )))
        {
            for ( I = 0; I < 14; I++ )
            {
                switch (I)
                {
                    case 0:
                    case 2:
                    case 5:
                    case 8:
                    case 9:
                    iVar3 = 0;
                    break;
                    case 1:
                    case 3:
                    case 4:
                    case 6:
                    case 7:
                    iVar3 = 1;
                    break;
                    default:
                    iVar3 = 2;
                    break;
                }
                CREATE_CHAR( 25, l_U679[iVar3], l_U804[I]._fU0, l_U804[I]._fU4, l_U804[I]._fU8, ref l_U719[I], 1 );
                SET_CHAR_HEADING( l_U719[I], l_U595[I] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U719[I], 1 );
                FREEZE_CHAR_POSITION( l_U719[I], 1 );
                CLEAR_ROOM_FOR_CHAR( l_U719[I] );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U719[I], "GtaMloRoom02" );
                SET_CHAR_IN_CUTSCENE( l_U719[I], 1 );
                TASK_SIT_DOWN_INSTANTLY( l_U719[I], 0, 0, -2 );
                SET_CHAR_COLLISION( l_U719[I], 0 );
                SET_CHAR_VISIBLE( l_U719[I], 1 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U679[0] );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U679[1] );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U679[2] );
            l_U667++;
        }
        break;
        case 2:
        for ( I = 0; I < 14; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U719[I] )))
            {
                if (l_U567)
                {
                    CLEAR_ROOM_FOR_CHAR( l_U719[I] );
                }
            }
        }
        if (l_U567)
        {
            l_U567 = 0;
        }
        break;
    }
    return;
}

void sub_19964()
{
    if (IS_PLAYER_PLAYING( sub_2775() ))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_2845(), 8, 0, 0 );
        CLEAR_CHAR_PROP( sub_2845(), 0 );
    }
    return;
}

void sub_20203()
{
    unknown uVar2;

    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
    if (DOES_VEHICLE_EXIST( uVar2 ))
    {
        if (IS_PLAYER_PLAYING( sub_2775() ))
        {
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                if (IS_CHAR_IN_CAR( sub_2845(), uVar2 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2845() );
                }
            }
        }
        DELETE_CAR( ref uVar2 );
    }
    return;
}

int sub_20857()
{
    int I;

    for ( I = 0; I < 14; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U719[I] )))
        {
            if (NOT (sub_20909( l_U719[I] )))
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int sub_20909(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_MALE( uParam0 ))
        {
            if (HAVE_ANIMS_LOADED( "amb_sit_chair_m" ))
            {
                if (IS_CHAR_PLAYING_ANIM( uParam0, "amb_sit_chair_m", "sit_down_idle_01" ))
                {
                    return 1;
                }
            }
        }
        else if (HAVE_ANIMS_LOADED( "amb_sit_chair_f" ))
        {
            if (IS_CHAR_PLAYING_ANIM( uParam0, "amb_sit_chair_f", "sit_down_idle_01" ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_21897(unknown uParam0)
{
    REQUEST_MODEL( sub_21908( uParam0 ) );
    return;
}

int sub_21908(unknown uParam0)
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
    sub_1720( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_22728(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_21908( uParam0 ) );
}

void sub_23064()
{
    sub_23073();
    l_U762 = {l_U783 + (l_U617 * l_U795)};
    l_U765 = {l_U771 + (l_U617 * l_U798)};
    if (NOT l_U575)
    {
        ATTACH_OBJECT_TO_CAR( l_U687, l_U852, 0, l_U762, l_U765 );
    }
    else
    {
        DETACH_OBJECT( l_U687, 1 );
        ATTACH_OBJECT_TO_CAR_PHYSICALLY( l_U687, l_U852, 0, 0, l_U762, 0.00000000, 0.00000000, 0.00000000, l_U765, 9999.90000000, 1 );
    }
    return;
}

void sub_23073()
{
    float fVar2;
    float fVar3;
    float fVar4;
    unknown uVar5;

    if (IS_VEH_DRIVEABLE( l_U852 ))
    {
        GET_CAR_HEADING( l_U852, ref fVar2 );
        fVar2 += 360.00000000;
    }
    fVar3 = fVar2 - l_U616;
    if (fVar3 > 3.00000000)
    {
        fVar3 = 3.00000000;
    }
    if (fVar3 < -3.00000000)
    {
        fVar3 = -3.00000000;
    }
    if ((fVar3 > 1.50000000) || (fVar3 < -1.50000000))
    {
        fVar4 = fVar3 / 2.00000000;
        fVar4 *= 0.10000000;
        l_U617 += fVar4 * sub_23224();
    }
    if (l_U617 > 1.00000000)
    {
        l_U617 = 1.00000000;
    }
    if (l_U617 < -1.00000000)
    {
        l_U617 = -1.00000000;
    }
    l_U616 = fVar2;
    return;
}

float sub_23224()
{
    float fVar2;
    unknown uVar3;

    GET_FRAME_TIME( ref uVar3 );
    fVar2 = 1.00000000 / uVar3;
    return 30.00000000 / fVar2;
}

void sub_24193(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_21908( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_24243( uParam0, (uParam1^) );
    return;
}

void sub_24243(unknown uParam0, unknown uParam1)
{
    sub_24255( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_24255(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_24349( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_24893( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_24349(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_24893(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_24349( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_24349( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_24349( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_24349( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_24349( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_24349( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_24349( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_24349( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_24349( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_24349( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_24349( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_24349( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_24349( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

int sub_26739(unknown uParam0)
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

void sub_27653(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (NOT (DOES_GROUP_EXIST( (uParam1^) )))
        {
            CREATE_GROUP( 0, uParam1, 1 );
        }
        GET_GROUP_SIZE( (uParam1^), ref iVar5, ref uVar4 );
        if (NOT (IS_GROUP_MEMBER( (uParam0^), (uParam1^) )))
        {
            if (NOT (iVar5 == 1))
            {
                SET_GROUP_LEADER( (uParam1^), (uParam0^) );
            }
            else
            {
                SET_GROUP_MEMBER( (uParam1^), (uParam0^) );
            }
        }
    }
    return;
}

void sub_29000(int iParam0, unknown uParam1, boolean bParam2)
{
    boolean bVar5;

    bVar5 = false;
    CLEAR_PRINTS();
    CLEAR_HELP();
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_GAME_CAM_PITCH( 0.00000000 );
    SET_CAM_BEHIND_PED( sub_2845() );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2845(), 0 );
    if (sub_3799())
    {
        bVar5 = true;
    }
    sub_29088();
    if (bVar5)
    {
        if (((iParam0 > 0) AND (uParam1)) AND (NOT IS_SCREEN_FADED_OUT()))
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, iParam0 );
        }
        else
        {
            sub_29225();
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        }
    }
    else
    {
        SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
    }
    sub_3780();
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

void sub_29088()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_PLAYER_PLAYING( sub_2775() ))
    {
        if (IS_SCREEN_FADED_OUT())
        {
            GET_CHAR_COORDINATES( sub_2845(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
            WAIT( 0 );
        }
    }
    return;
}

void sub_29225()
{
    unknown uVar2;
    unknown uVar3;

    if (IS_CHAR_IN_ANY_CAR( sub_2845() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2845(), ref uVar2 );
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

void sub_29645(int iParam0)
{
    if (NOT (iParam0 == l_U652))
    {
        l_U652 = iParam0;
        l_U653 = 0;
    }
    return;
}

void sub_29804()
{
    int I;
    int iVar3;
    int iVar4;
    unknown uVar5;

    if (DOES_GROUP_EXIST( l_U630 ))
    {
        GET_GROUP_SIZE( l_U630, ref iVar4, ref iVar3 );
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( l_U630, I, ref uVar5 );
            if (DOES_CHAR_EXIST( uVar5 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar5 )))
                {
                    CLEAR_CHAR_TASKS( uVar5 );
                    REMOVE_CHAR_FROM_GROUP( uVar5 );
                }
            }
        }
        if (iVar4 > 0)
        {
            GET_GROUP_LEADER( l_U630, ref uVar5 );
            if (DOES_CHAR_EXIST( uVar5 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar5 )))
                {
                    CLEAR_CHAR_TASKS( uVar5 );
                    REMOVE_CHAR_FROM_GROUP( uVar5 );
                }
            }
        }
    }
    return;
}

void sub_30040(unknown uParam0)
{
    unknown uVar3;
    int I;
    int iVar5;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        GET_DRIVER_OF_CAR( (uParam0^), ref uVar3 );
        if (DOES_CHAR_EXIST( uVar3 ))
        {
            sub_30093( ref uVar3, uParam0 );
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( (uParam0^), ref iVar5 );
        for ( I = 0; I < iVar5; I++ )
        {
            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( (uParam0^), I )))
            {
                GET_CHAR_IN_CAR_PASSENGER_SEAT( (uParam0^), I, ref uVar3 );
                if (DOES_CHAR_EXIST( uVar3 ))
                {
                    sub_30093( ref uVar3, uParam0 );
                }
            }
        }
    }
    return;
}

void sub_30093(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (NOT (IS_CAR_DEAD( (uParam1^) )))
        {
            if (IS_CHAR_IN_CAR( (uParam0^), (uParam1^) ))
            {
                OPEN_SEQUENCE_TASK( ref l_U739 );
                GENERATE_RANDOM_INT_IN_RANGE( 0, 1500, ref uVar4 );
                TASK_PAUSE( 0, uVar4 );
                TASK_LEAVE_CAR_DONT_CLOSE_DOOR( 0, (uParam1^) );
                CLOSE_SEQUENCE_TASK( l_U739 );
                TASK_PERFORM_SEQUENCE( (uParam0^), l_U739 );
                CLEAR_SEQUENCE_TASK( l_U739 );
            }
        }
    }
    return;
}

void sub_32196(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
        {
            uVar4 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( uParam0, uParam1 - uVar4 );
        }
    }
    return;
}

int sub_32418(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
        {
            uVar6 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
            GET_POSITION_OF_CAR_RECORDING_AT_TIME( uVar6, 1E8, ref uVar3 );
            if (LOCATE_CAR_3D( uParam0, uVar3._fU0, uVar3._fU4, uVar3._fU8, 0.10000000, 0.10000000, 1.00000000, 0 ))
            {
                return 1;
            }
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 1;
}

int sub_32563(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        if ((fVar3 < 0.50000000) AND (fVar3 > -0.50000000))
        {
            return 1;
        }
    }
    return 0;
}

void sub_42683(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_42708( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_42708(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_42766( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_42766(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_42788( iParam1 )))
    {
        return 0;
    }
    l_U0._fU384 = 0;
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
    sub_43464( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_42788(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_8987( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_8987( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_8987( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_43464(int iParam0, int iParam1)
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

void sub_43845(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_43866( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_43866(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_42766( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_44269()
{
    if (l_U666 == 0)
    {
        if (sub_44290())
        {
            l_U666 = 1;
            return 1;
        }
    }
    else if (sub_44634())
    {
        l_U666 = 0;
        return 1;
    }
    return 0;
}

int sub_44290()
{
    int I;

    if ((IS_CHAR_INJURED( l_U711 )) || (NOT (DOES_CHAR_EXIST( l_U711 ))))
    {
        for ( I = 0; I < 20; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U688[I] )))
            {
                if (NOT (l_U688[I] == l_U712))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U688[I], 40.00000000, 40.00000000, 0 ))
                    {
                        l_U711 = l_U688[I];
                        sub_4574( 2, l_U711, "ALBANIAN_THUG_1", 0 );
                        SET_AMBIENT_VOICE_NAME( l_U711, "ALBANIAN_THUG_1" );
                        I = 20;
                    }
                }
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U711 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U711, 40.00000000, 40.00000000, 0 ))
        {
            if (sub_43845( "FM6_ATTK1", ref l_U125, 6, 1 ))
            {
                return 1;
            }
        }
        else
        {
            l_U711 = nil;
        }
    }
    return 0;
}

int sub_44634()
{
    int I;

    if ((IS_CHAR_INJURED( l_U712 )) || (NOT (DOES_CHAR_EXIST( l_U712 ))))
    {
        for ( I = 0; I < 20; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U688[I] )))
            {
                if (NOT (l_U688[I] == l_U711))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U688[I], 40.00000000, 40.00000000, 0 ))
                    {
                        l_U712 = l_U688[I];
                        sub_4574( 3, l_U712, "ALBANIAN_THUG_2", 0 );
                        SET_AMBIENT_VOICE_NAME( l_U712, "ALBANIAN_THUG_2" );
                        I = 20;
                    }
                }
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U712 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2845(), l_U712, 40.00000000, 40.00000000, 0 ))
        {
            if (sub_43845( "FM6_ATTK2", ref l_U125, 6, 1 ))
            {
                return 1;
            }
        }
        else
        {
            l_U712 = nil;
        }
    }
    return 0;
}

void sub_46435()
{
    if (NOT l_U101)
    {
        if ((sub_46455()) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
        {
            if ((ProtectedGet(l_U99) < 99) AND (ProtectedGet(l_U99) > 0))
            {
                sub_46591( 0 );
                l_U102 = 1;
                ProtectedSet(l_U99, 99);
                l_U101 = 1;
            }
        }
    }
    else if (NOT sub_46455())
    {
        l_U101 = 0;
    }
    return;
}

int sub_46455()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_46591(unknown uParam0)
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

void sub_47644(boolean bParam0, boolean bParam1)
{
    sub_47653();
    if (bParam1)
    {
        sub_47737( ref l_U125, 0 );
        CLEAR_PRINTS();
    }
    CLEAR_HELP();
    SET_WIDESCREEN_BORDERS( 1 );
    if (bParam0)
    {
        SET_PLAYER_CONTROL( sub_2775(), 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2845() )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2845() );
        }
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2845(), 1 );
    }
    else
    {
        SET_PLAYER_CONTROL_ADVANCED( sub_2775(), 0, 0, 0 );
    }
    sub_47966();
    return;
}

void sub_47653()
{
    if (NOT l_U103)
    {
        sub_47677( ref l_U100 );
        l_U103 = 1;
    }
    return;
}

void sub_47677(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    SET_USE_HIGHDOF( 1 );
    return;
}

void sub_47737(int iParam0, unknown uParam1)
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

void sub_47966()
{
    int iVar2;

    if (IS_PLAYER_PLAYING( sub_2775() ))
    {
        GET_CHAR_PROP_INDEX( sub_2845(), 0, ref iVar2 );
        if (iVar2 == 2)
        {
            CLEAR_CHAR_PROP( sub_2845(), 0 );
        }
    }
    return;
}

void sub_50823()
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U112 );
    SET_CAM_POS( l_U112, -255.68000000, -258.80800000, 16.88600000 );
    SET_CAM_ROT( l_U112, -2.03800000, 0.00000000, 142.38000000 );
    SET_CAM_FOV( l_U112, 36.45000000 );
    SET_CAM_ACTIVE( l_U112, 1 );
    SET_CAM_PROPAGATE( l_U112, 0 );
    CREATE_CAM( 14, ref l_U113 );
    SET_CAM_POS( l_U113, -255.68000000, -273.28300000, 16.88600000 );
    SET_CAM_ROT( l_U113, -6.73800000, 0.00000000, 104.70500000 );
    SET_CAM_FOV( l_U113, 30.00000000 );
    SET_CAM_ACTIVE( l_U113, 1 );
    SET_CAM_PROPAGATE( l_U113, 0 );
    CREATE_CAM( 3, ref l_U114 );
    SET_CAM_INTERP_STYLE_DETAILED( l_U114, 0, 0, 1, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U114, l_U112, l_U113, 30000, 0 );
    SET_CAM_ACTIVE( l_U114, 1 );
    SET_CAM_PROPAGATE( l_U114, 1 );
    return;
}

void sub_52483(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_21908( uParam0 ) );
    return;
}

void sub_54094()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    boolean bVar6;

    bVar6 = false;
    if (NOT (DOES_CHAR_EXIST( l_U710 )))
    {
        if (DOES_VEHICLE_EXIST( l_U852 ))
        {
            if (DOES_OBJECT_EXIST( l_U687 ))
            {
                if (NOT (IS_CAR_DEAD( l_U852 )))
                {
                    if (sub_4122())
                    {
                        sub_21897( 11 );
                        if (sub_22728( 11 ))
                        {
                            bVar6 = true;
                        }
                    }
                    else
                    {
                        sub_21897( 16 );
                        if (sub_22728( 16 ))
                        {
                            bVar6 = true;
                        }
                    }
                    if (bVar6)
                    {
                        if (HAVE_ANIMS_LOADED( "missfrancis6" ))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U852, l_U768._fU0, l_U768._fU4, l_U768._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_CAR_HEADING( l_U852, ref uVar5 );
                            if (sub_4122())
                            {
                                sub_24193( 11, ref l_U710, uVar2._fU0, uVar2._fU4, uVar2._fU8, 0.00000000 );
                                SET_CHAR_COMPONENT_VARIATION( l_U710, 1, 0, 0 );
                                SET_CHAR_COMPONENT_VARIATION( l_U710, 2, 0, 0 );
                            }
                            else
                            {
                                sub_24193( 16, ref l_U710, uVar2._fU0, uVar2._fU4, uVar2._fU8, 0.00000000 );
                                SET_CHAR_COMPONENT_VARIATION( l_U710, 1, 1, 0 );
                                SET_CHAR_COMPONENT_VARIATION( l_U710, 2, 1, 0 );
                                SET_CHAR_COMPONENT_VARIATION( l_U710, 3, 0, 0 );
                            }
                            SET_CHAR_PROOFS( l_U710, 1, 1, 1, 1, 1 );
                            SET_CHAR_HEADING( l_U710, uVar5 );
                            UNLOCK_RAGDOLL( l_U710, 0 );
                            STOP_PED_SPEAKING( l_U710, 1 );
                            ATTACH_PED_TO_CAR( l_U710, l_U852, 0, l_U768, uVar5 + 180.00000000, 0.00000000, 0, 0 );
                        }
                        else
                        {
                            REQUEST_ANIMS( "missfrancis6" );
                        }
                    }
                }
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U710 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U710 )))
        {
            if ((l_U676 >= 4) || (l_U98 == 14))
            {
                if (DOES_VEHICLE_EXIST( l_U852 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U852 )))
                    {
                        if (DOES_OBJECT_EXIST( l_U687 ))
                        {
                            if (NOT (l_U98 == 14))
                            {
                                GET_OBJECT_HEADING( l_U687, ref uVar5 );
                                ATTACH_PED_TO_CAR( l_U710, l_U852, 0, l_U762, 0.00000000, 0.00000000, 0, 0 );
                                SET_CHAR_HEADING( l_U710, uVar5 );
                            }
                            else
                            {
                                ATTACH_PED_TO_OBJECT( l_U710, l_U687, 0, l_U756, l_U610, 0.00000000, 0, 0 );
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U710 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U710, 80, ref l_U737 );
                if (l_U737 == 7)
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U710, "dead_coffin", "missfrancis6", 1000.00000000, 0, 1, 1, 1, -1 );
                }
            }
        }
    }
    return;
}

int sub_55774(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_57503(unknown uParam0, float fParam1, float fParam2)
{
    float fVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_ROLL( uParam0, ref fVar5 );
        if ((fVar5 > fParam1) || (fVar5 < (fParam1 * -1.00000000)))
        {
            return 1;
        }
        GET_CAR_PITCH( uParam0, ref fVar5 );
        if ((fVar5 > fParam2) || (fVar5 < (fParam2 * -1.00000000)))
        {
            return 1;
        }
    }
    return 0;
}

void sub_59036(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int iVar6;
    int iVar7;
    unknown uVar8;
    int Result;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
        if (DOES_GROUP_EXIST( uParam1 ))
        {
            GET_GROUP_SIZE( uParam1, ref iVar7, ref iVar6 );
            if (iVar7 > 0)
            {
                GET_GROUP_LEADER( uParam1, ref uVar8 );
                if (NOT (IS_CHAR_INJURED( uVar8 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_2D( uVar8, uVar10._fU0, uVar10._fU4, uParam2, uParam2, 0 ))
                    {
                        Result = 1;
                    }
                }
            }
            for ( I = 0; I < iVar6; I++ )
            {
                GET_GROUP_MEMBER( uParam1, I, ref uVar8 );
                if (NOT (IS_CHAR_INJURED( uVar8 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_2D( uVar8, uVar10._fU0, uVar10._fU4, uParam2, uParam2, 0 ))
                    {
                        Result = 1;
                    }
                }
            }
        }
    }
    return Result;
}

void sub_59289(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;
    int Result;

    Result = 1;
    if (DOES_GROUP_EXIST( uParam0 ))
    {
        GET_GROUP_SIZE( uParam0, ref iVar5, ref iVar4 );
        if (iVar5 > 0)
        {
            GET_GROUP_LEADER( uParam0, ref uVar6 );
            if (NOT (IS_CHAR_INJURED( uVar6 )))
            {
                if (IS_CHAR_ON_SCREEN( uVar6 ))
                {
                    Result = 0;
                }
            }
        }
        for ( I = 0; I < iVar4; I++ )
        {
            GET_GROUP_MEMBER( uParam0, I, ref uVar6 );
            if (NOT (IS_CHAR_INJURED( uVar6 )))
            {
                if (IS_CHAR_ON_SCREEN( uVar6 ))
                {
                    Result = 0;
                }
            }
        }
    }
    return Result;
}

void sub_59494(unknown uParam0, unknown uParam1)
{
    int Result;
    unknown uVar5;
    int I;
    int iVar7;
    int iVar8;

    Result = 0;
    if (DOES_GROUP_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam1 ))
        {
            Result = 1;
            GET_GROUP_SIZE( uParam0, ref iVar8, ref iVar7 );
            if (iVar8 > 0)
            {
                GET_GROUP_LEADER( uParam0, ref uVar5 );
                if (NOT (IS_CHAR_INJURED( uVar5 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( uVar5, uParam1 )))
                    {
                        Result = 0;
                    }
                }
            }
            for ( I = 0; I < iVar7; I++ )
            {
                GET_GROUP_MEMBER( uParam0, I, ref uVar5 );
                if (NOT (IS_CHAR_INJURED( uVar5 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( uVar5, uParam1 )))
                    {
                        Result = 0;
                    }
                }
            }
        }
    }
    return Result;
}

void sub_59704(unknown uParam0, unknown uParam1)
{
    int Result;
    unknown uVar5;
    int I;
    int iVar7;
    int iVar8;
    int iVar9;

    Result = 0;
    if (DOES_GROUP_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam1 ))
        {
            Result = 1;
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam1, ref iVar9 );
            GET_GROUP_SIZE( uParam0, ref iVar8, ref iVar7 );
            if (iVar8 > 0)
            {
                GET_GROUP_LEADER( uParam0, ref uVar5 );
                if (NOT (IS_CHAR_INJURED( uVar5 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar5 );
                }
            }
            for ( I = 0; I < iVar7; I++ )
            {
                GET_GROUP_MEMBER( uParam0, I, ref uVar5 );
                if (NOT (IS_CHAR_INJURED( uVar5 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar5 );
                }
            }
            sub_59876( uParam1 );
            if (iVar8 > 0)
            {
                GET_GROUP_LEADER( uParam0, ref uVar5 );
                if (NOT (IS_CHAR_INJURED( uVar5 )))
                {
                    if (IS_VEH_DRIVEABLE( uParam1 ))
                    {
                        WARP_CHAR_INTO_CAR( uVar5, uParam1 );
                    }
                }
            }
            for ( I = 0; I < iVar7; I++ )
            {
                if (I < iVar9)
                {
                    GET_GROUP_MEMBER( uParam0, I, ref uVar5 );
                    if (NOT (IS_CHAR_INJURED( uVar5 )))
                    {
                        if (IS_VEH_DRIVEABLE( uParam1 ))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( uVar5, uParam1, I );
                        }
                    }
                }
            }
        }
    }
    return Result;
}

void sub_59876(unknown uParam0)
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

int sub_60328(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2845(), (uParam0^), uParam1, uParam1, uParam1, 0 )))
        {
            if (NOT (IS_CAR_ON_SCREEN( (uParam0^) )))
            {
                if (iParam4 == 8)
                {
                    uVar8 = {sub_60410( uParam0, uParam2 )};
                }
                else
                {
                    uVar8 = {sub_60525( iParam4, uParam2, 0 )};
                }
                return sub_61456( uParam0, uVar8, uParam3 );
            }
        }
    }
    return 0;
}

void sub_60410(unknown uParam0, unknown uParam1)
{
    vector Result;
    vector vVar7;

    GET_CAR_COORDINATES( (uParam0^), ref Result.x, ref Result.y, ref Result.z );
    GET_CHAR_COORDINATES( sub_2845(), ref vVar7.x, ref vVar7.y, ref vVar7.z );
    Result = {Result - vVar7};
    Result = {Result * (uParam1 / (VMAG( Result )))};
    Result = {Result + vVar7};
    return Result;
}

void sub_60525(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown Result;
    unknown uVar6;
    unknown uVar7;

    switch (uParam0)
    {
        case 0:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), (uParam1 * 0.80000000) * -1.00000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), uParam1 * -1.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 1:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), 0.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), 0.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 2:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), uParam1 * 0.80000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), uParam1 * 0.80000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 3:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), uParam1 * 0.80000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), uParam1, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 4:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), uParam1 * 0.65000000, (uParam1 * 0.65000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), uParam1 * 0.80000000, (uParam1 * 0.80000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 5:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), 0.00000000, (uParam1 * -1.00000000) * 0.65000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), 0.00000000, uParam1 * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 6:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), (uParam1 * 0.65000000) * -1.00000000, (uParam1 * 0.65000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), (uParam1 * 0.80000000) * -1.00000000, (uParam1 * 0.80000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 7:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), (uParam1 * -1.00000000) * 0.80000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), uParam1 * -1.00000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
    }
    return Result;
}

int sub_61456(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    float fVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_2845(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        GET_NTH_CLOSEST_CAR_NODE_FAVOUR_DIRECTION( uParam1, uVar7, 1, ref uVar10, ref uVar13 );
        if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar10._fU0, uVar10._fU4, uVar10._fU8, 10.00000000, 10.00000000, 10.00000000 )))
        {
            GET_GAME_VIEWPORT_ID( ref uVar14 );
            if (NOT (CAM_IS_SPHERE_VISIBLE( uVar14, uVar10._fU0, uVar10._fU4, uVar10._fU8, 8.00000000 )))
            {
                CLEAR_AREA( uVar10._fU0, uVar10._fU4, uVar10._fU8, 6.00000000, 0 );
                SET_CAR_COORDINATES( (uParam0^), uVar10._fU0, uVar10._fU4, uVar10._fU8 );
                uVar16 = {-SIN( uVar13 ), COS( uVar13 ), 0.00000000};
                GET_ANGLE_BETWEEN_2D_VECTORS( uVar16._fU0, uVar16._fU4, uVar7._fU0 - uVar10._fU0, uVar7._fU4 - uVar10._fU4, ref fVar15 );
                if (fVar15 > 90.00000000)
                {
                    SET_CAR_HEADING( (uParam0^), uVar13 + 180.00000000 );
                }
                else
                {
                    SET_CAR_HEADING( (uParam0^), uVar13 );
                }
                SET_CAR_FORWARD_SPEED( (uParam0^), uParam4 );
                return 1;
            }
        }
    }
    return 0;
}

void sub_65842()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_66146(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = nil;
    return sub_66184( uParam0, 0, 0, uParam1, uParam1, uParam1, uParam1, l_U123, uParam2, uVar7, uParam3, uParam4 );
}

int sub_66184(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int I;
    int iVar15;
    int iVar16;
    boolean bVar17;
    int iVar18;
    boolean bVar19;
    int[3] iVar20;
    unknown[3] uVar24;
    unknown[3] uVar28;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;

    array(ref iVar20, 3);
    array(ref uVar24, 3);
    uVar24[0] = uParam0;
    uVar24[1] = uParam1;
    uVar24[2] = uParam2;
    l_U124 = uParam0;
    array(ref uVar28, 3);
    uVar28[0] = uParam3;
    uVar28[1] = uParam4;
    uVar28[2] = uParam5;
    bVar17 = true;
    iVar15 = 0;
    iVar16 = 0;
    iVar20[0] = 0;
    iVar20[1] = 0;
    iVar20[2] = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( uVar24[I] ))
        {
            if (NOT (IS_CHAR_INJURED( uVar24[I] )))
            {
                iVar16++;
                if ((NOT (IS_GROUP_MEMBER( uVar24[I], sub_65842() ))) AND (NOT (sub_66391( uVar24[I], uParam9 ))))
                {
                    if (sub_66492( uVar24[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( uVar24[I], sub_65842() )))
                        {
                            CLEAR_CHAR_TASKS( uVar24[I] );
                            SET_GROUP_MEMBER( sub_65842(), uVar24[I] );
                        }
                    }
                    else if (NOT sub_16188())
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U116[I] )))
                        {
                            ADD_BLIP_FOR_CHAR( uVar24[I], ref l_U116[I] );
                            SET_BLIP_AS_FRIENDLY( l_U116[I], 1 );
                            if (bParam8)
                            {
                                SET_ROUTE( l_U116[I], 1 );
                            }
                            bVar19 = true;
                        }
                    }
                    iVar20[I] = 1;
                    iVar15++;;
                    bVar17 = false;
                }
                else if (DOES_BLIP_EXIST( l_U116[I] ))
                {
                    if (((sub_66900( uVar24[I] )) || (sub_66391( uVar24[I], uParam9 ))) || (uParam11))
                    {
                        REMOVE_BLIP( l_U116[I] );
                        sub_16608( uVar28[I] );
                        iVar18 = 1;
                    }
                    else
                    {
                        bVar17 = false;
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U116[I] ))
            {
                REMOVE_BLIP( l_U116[I] );
                sub_16608( uVar28[I] );
                iVar18 = 1;
            }
        }
    }
    if (NOT sub_16188())
    {
        if (bVar19)
        {
            if ((iVar15 == iVar16) AND (iVar16 > 1))
            {
                sub_16671( uParam6, 0 );
            }
            else
            {
                for ( I = 0; I < 3; I++ )
                {
                    if (iVar20[I])
                    {
                        sub_16671( uVar28[I], 0 );
                    }
                }
            }
            bVar19 = false;
        }
    }
    if ((iVar18) AND (NOT bVar17))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U116[I] ))
            {
                sub_16671( uVar28[I], 0 );
            }
        }
    }
    if (bVar17)
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U116[I] ))
            {
                REMOVE_BLIP( l_U116[I] );
            }
            sub_16608( uVar28[I] );
        }
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_2845() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2845(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( uVar24[I] )))
                {
                    SET_CHAR_COORDINATES( uVar24[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_66391(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_VEHICLE_EXIST( uParam1 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_66492(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                if (IS_CHAR_SITTING_IN_CAR( sub_2845(), uVar5 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2845(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (bParam2)
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2845() ))
                {
                    return 0;
                }
                else
                {
                    return 1;
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

int sub_66900(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2845() ))
    {
        if (sub_66933( sub_2845(), uParam0 ))
        {
            return 1;
        }
    }
    else if (IS_GROUP_MEMBER( uParam0, sub_65842() ))
    {
        return 1;
    }
    return 0;
}

int sub_66933(unknown uParam0, unknown uParam1)
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

void sub_68250(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14)
{
    return sub_68307( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, 0, uParam8, uParam9, uParam10, uParam10, uParam10, uParam10, uParam11, uParam12, uParam13, uParam14 );
}

int sub_68307(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    int iVar22;
    int I;
    unknown[3] uVar24;

    array(ref uVar24, 3);
    uVar24[0] = uParam7;
    uVar24[1] = uParam8;
    uVar24[2] = uParam9;
    l_U124 = uParam7;
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_VEH_DRIVEABLE( uParam10 ))
        {
            if (sub_66184( uVar24[0], uVar24[1], uVar24[2], uParam12, uParam13, uParam14, uParam15, l_U123, uParam17, uParam10, 0, 0 ))
            {
                if (IS_CHAR_IN_CAR( sub_2845(), uParam10 ))
                {
                    sub_16608( uParam16 );
                    if ((uParam18) AND (IS_WANTED_LEVEL_GREATER( sub_2775(), 0 )))
                    {
                        if (((DOES_BLIP_EXIST( l_U120 )) || (DOES_BLIP_EXIST( l_U121 ))) || (DOES_BLIP_EXIST( l_U115 )))
                        {
                            REMOVE_BLIP( l_U121 );
                            REMOVE_BLIP( l_U120 );
                            REMOVE_BLIP( l_U115 );
                            sub_16608( uParam11 );
                        }
                        if (((NOT sub_16188()) AND (NOT sub_68577())) AND (NOT l_U105))
                        {
                            sub_16671( uParam19, 0 );
                            l_U131 = uParam19;
                            l_U105 = 1;
                            l_U106 = 0;
                            if (NOT (IS_CHAR_INJURED( uVar24[0] )))
                            {
                                SAY_AMBIENT_SPEECH( uVar24[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                            }
                        }
                    }
                    else if (l_U105)
                    {
                        sub_16608( uParam19 );
                        l_U105 = 0;
                        l_U106 = 1;
                    }
                    if (l_U106)
                    {
                        if (NOT sub_16188())
                        {
                            if (NOT (IS_CHAR_INJURED( uVar24[0] )))
                            {
                                SAY_AMBIENT_SPEECH( uVar24[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                            }
                            l_U106 = 0;
                        }
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U120 )))
                    {
                        if (NOT sub_16188())
                        {
                            if (DOES_BLIP_EXIST( l_U115 ))
                            {
                                REMOVE_BLIP( l_U115 );
                            }
                            if (DOES_BLIP_EXIST( l_U121 ))
                            {
                                l_U120 = l_U121;
                            }
                            else
                            {
                                ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U120 );
                                SET_ROUTE( l_U120, 1 );
                            }
                            l_U121 = nil;
                            if (NOT l_U108)
                            {
                                sub_16671( uParam11, 0 );
                                l_U108 = 1;
                            }
                            else
                            {
                                sub_16671( uParam11, 1 );
                            }
                        }
                        else if (DOES_BLIP_EXIST( l_U115 ))
                        {
                            REMOVE_BLIP( l_U115 );
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U121 )))
                        {
                            ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U121 );
                            SET_ROUTE( l_U121, 1 );
                        }
                    }
                    if (LOCATE_CHAR_IN_CAR_3D( sub_2845(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
                    {
                        iVar22 = 1;
                        for ( I = 0; I < 3; I++ )
                        {
                            if (DOES_CHAR_EXIST( uVar24[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( uVar24[I], uParam10 )))
                                {
                                    iVar22 = 0;
                                }
                            }
                        }
                        if ((iVar22) AND (sub_17005( 1, 1 )))
                        {
                            sub_16608( uParam11 );
                            sub_7978();
                            return 1;
                        }
                    }
                }
                else if (NOT (DOES_BLIP_EXIST( l_U115 )))
                {
                    if (NOT sub_16188())
                    {
                        if (DOES_BLIP_EXIST( l_U120 ))
                        {
                            REMOVE_BLIP( l_U120 );
                        }
                        if (DOES_BLIP_EXIST( l_U121 ))
                        {
                            REMOVE_BLIP( l_U121 );
                        }
                        ADD_BLIP_FOR_CAR( uParam10, ref l_U115 );
                        SET_ROUTE( l_U115, 1 );
                        SET_BLIP_AS_FRIENDLY( l_U115, 1 );
                        sub_16671( uParam16, 0 );
                    }
                    else if (DOES_BLIP_EXIST( l_U120 ))
                    {
                        REMOVE_BLIP( l_U120 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U121 )))
                    {
                        ADD_BLIP_FOR_CAR( uParam10, ref l_U121 );
                        SET_BLIP_AS_FRIENDLY( l_U121, 1 );
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U121 ))
            {
                REMOVE_BLIP( l_U121 );
            }
            if (DOES_BLIP_EXIST( l_U120 ))
            {
                REMOVE_BLIP( l_U120 );
            }
            if (DOES_BLIP_EXIST( l_U115 ))
            {
                REMOVE_BLIP( l_U115 );
            }
            sub_16608( uParam11 );
            sub_16608( uParam16 );;
        }
        else
        {
            return 0;
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_2775() );
            if (IS_VEH_DRIVEABLE( uParam10 ))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2845() );
                WARP_CHAR_INTO_CAR( sub_2845(), uParam10 );
                for ( I = 0; I < 3; I++ )
                {
                    if (DOES_CHAR_EXIST( uVar24[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( uVar24[I] )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( uVar24[I] );
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( uVar24[I], uParam10, I );
                        }
                    }
                }
            }
            sub_17381( uParam0, uParam1, uParam2 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    sub_17519( uParam0, uParam1, uParam2 );
    return 0;
}

int sub_68577()
{
    if (NOT (IS_CHAR_INJURED( l_U124 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U124 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_69874()
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U112 );
    SET_CAM_POS( l_U112, 481.84000000, 294.83000000, 12.03000000 );
    SET_CAM_ROT( l_U112, -4.74000000, 0.00000000, 50.38000000 );
    SET_CAM_FOV( l_U112, 45.00000000 );
    SET_CAM_ACTIVE( l_U112, 1 );
    SET_CAM_PROPAGATE( l_U112, 0 );
    CREATE_CAM( 14, ref l_U113 );
    SET_CAM_POS( l_U113, 481.84000000, 294.83000000, 9.00000000 );
    SET_CAM_ROT( l_U113, -4.74000000, 0.00000000, 50.38000000 );
    SET_CAM_FOV( l_U113, 45.00000000 );
    SET_CAM_ACTIVE( l_U113, 1 );
    SET_CAM_PROPAGATE( l_U113, 0 );
    CREATE_CAM( 3, ref l_U114 );
    SET_CAM_INTERP_STYLE_DETAILED( l_U114, 0, 0, 1, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U114, l_U112, l_U113, 14000, 0 );
    SET_CAM_ACTIVE( l_U114, 1 );
    SET_CAM_PROPAGATE( l_U114, 1 );
    return;
}

void sub_70321()
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U112 );
    SET_CAM_POS( l_U112, 1010.84000000, 985.08000000, 24.56000000 );
    SET_CAM_ROT( l_U112, -18.10000000, 0.00000000, 84.23000000 );
    SET_CAM_FOV( l_U112, 45.00000000 );
    SET_CAM_ACTIVE( l_U112, 1 );
    SET_CAM_PROPAGATE( l_U112, 0 );
    CREATE_CAM( 14, ref l_U113 );
    SET_CAM_POS( l_U113, 1010.84000000, 985.08000000, 21.83500000 );
    SET_CAM_ROT( l_U113, -16.92500000, 0.00000000, 81.45500000 );
    SET_CAM_FOV( l_U113, 45.00000000 );
    SET_CAM_ACTIVE( l_U113, 1 );
    SET_CAM_PROPAGATE( l_U113, 0 );
    CREATE_CAM( 3, ref l_U114 );
    SET_CAM_INTERP_STYLE_DETAILED( l_U114, 0, 0, 1, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U114, l_U112, l_U113, 10500, 0 );
    SET_CAM_ACTIVE( l_U114, 1 );
    SET_CAM_PROPAGATE( l_U114, 1 );
    return;
}

void sub_71081(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_71102( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

int sub_71102(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_42766( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_71249(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_8987( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_8987( "\n CONVERSATION PAUSED AT LINE " );
            sub_71389( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_8987( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_8987( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_8987( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_71389(unknown uParam0)
{
    return;
}

void sub_72073()
{
    int I;

    for ( I = 0; I < 20; I++ )
    {
        if (DOES_BLIP_EXIST( l_U532[I] ))
        {
            REMOVE_BLIP( l_U532[I] );
        }
    }
    for ( I = 0; I < 4; I++ )
    {
        if (DOES_BLIP_EXIST( l_U553[I] ))
        {
            REMOVE_BLIP( l_U553[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U558 ))
    {
        REMOVE_BLIP( l_U558 );
    }
    if (DOES_BLIP_EXIST( l_U559 ))
    {
        REMOVE_BLIP( l_U559 );
    }
    if (DOES_BLIP_EXIST( l_U560 ))
    {
        REMOVE_BLIP( l_U560 );
    }
    sub_72289();
    return;
}

void sub_72289()
{
    if (DOES_BLIP_EXIST( l_U121 ))
    {
        REMOVE_BLIP( l_U121 );
    }
    if (DOES_BLIP_EXIST( l_U120 ))
    {
        REMOVE_BLIP( l_U120 );
    }
    return;
}

void sub_72382(unknown uParam0)
{
    if (NOT (COMPARE_STRING( uParam0, "" )))
    {
        if (NOT sub_16188())
        {
            sub_46591( 0 );
        }
        else
        {
            sub_46591( 1 );
        }
        if (NOT l_U109)
        {
            sub_16671( uParam0, 0 );
            l_U109 = 1;
        }
    }
    return;
}

void sub_75852()
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U112 );
    SET_CAM_POS( l_U112, 485.65800000, 338.39770000, 8.65150000 );
    SET_CAM_ROT( l_U112, 0.02900000, 0.00000000, 14.17040000 );
    SET_CAM_FOV( l_U112, 45.00000000 );
    SET_CAM_ACTIVE( l_U112, 1 );
    SET_CAM_PROPAGATE( l_U112, 0 );
    CREATE_CAM( 14, ref l_U113 );
    SET_CAM_POS( l_U113, 495.91740000, 330.11970000, 14.90900000 );
    SET_CAM_ROT( l_U113, -9.43260000, 0.00000000, 39.89400000 );
    SET_CAM_FOV( l_U113, 45.00000000 );
    SET_CAM_ACTIVE( l_U113, 1 );
    SET_CAM_PROPAGATE( l_U113, 0 );
    CREATE_CAM( 3, ref l_U114 );
    SET_CAM_INTERP_STYLE_DETAILED( l_U114, 0, 1, 1, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U114, l_U112, l_U113, 20000, 0 );
    SET_CAM_ACTIVE( l_U114, 1 );
    SET_CAM_PROPAGATE( l_U114, 1 );
    return;
}

void sub_76182(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (DOES_CAM_EXIST( uParam0 ))
    {
        GET_CAM_POS( uParam0, ref uVar3, ref uVar4, ref uVar5 );
        LOAD_SCENE( uVar3, uVar4, uVar5 );
    }
    return;
}

void sub_76318(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    vector vVar9;
    vector vVar12;
    vector vVar15;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    float fVar24;
    float fVar25;
    unknown uVar26;

    if (l_U100 > 0)
    {
        if (DOES_CAM_EXIST( (uParam0^) ))
        {
            GET_CAM_ROT( (uParam0^), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
            vVar15 = {0.00000000, 1.00000000, 0.00000000};
            vVar15 = {sub_76410( vVar15, 0.00000000, 0.00000000, uVar6._fU8 )};
            if (NOT (IS_CHAR_DEAD( uParam1 )))
            {
                GET_CAM_POS( (uParam0^), ref vVar9.x, ref vVar9.y, ref vVar9.z );
                GET_CHAR_COORDINATES( uParam1, ref vVar12.x, ref vVar12.y, ref vVar12.z );
                uVar18 = {vVar12 - vVar9};
                uVar18._fU8 = 0.00000000;
                uVar21 = {sub_76810( uVar18, vVar15 )};
                uVar26 = VMAG( uVar21 );
                fVar24 = uVar26 - uParam2;
                if (fVar24 < 0.10000000)
                {
                    fVar24 = 0.10000000;
                }
                fVar25 = uVar26 + uParam3;
                if (fVar25 < fVar24)
                {
                    fVar25 = fVar24;
                }
                SET_CAM_NEAR_DOF( (uParam0^), fVar24 );
                SET_CAM_FAR_DOF( (uParam0^), fVar25 );
            }
        }
    }
    return;
}

void sub_76410(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown Result;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    Result = {uParam0};
    uVar8 = COS( uParam3._fU0 );
    uVar9 = SIN( uParam3._fU0 );
    uVar13._fU0 = uParam0._fU0;
    uVar13._fU4 = (uVar8 * Result._fU4) - (uVar9 * Result._fU8);
    uVar13._fU8 = (uVar9 * Result._fU4) + (uVar8 * Result._fU8);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU4 );
    uVar9 = SIN( uParam3._fU4 );
    uVar13._fU0 = (uVar8 * Result._fU0) + (uVar9 * Result._fU8);
    uVar13._fU4 = uParam0._fU4;
    uVar13._fU8 = (uVar8 * Result._fU8) - (uVar9 * Result._fU0);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU8 );
    uVar9 = SIN( uParam3._fU8 );
    uVar13._fU0 = (uVar8 * Result._fU0) - (uVar9 * Result._fU4);
    uVar13._fU4 = (uVar9 * Result._fU0) + (uVar8 * Result._fU4);
    uVar13._fU8 = uParam0._fU8;
    Result = {uVar13};
    return Result;
}

vector sub_76810(unknown uParam0, unknown uParam1, unknown uParam2, vector vParam3)
{
    return (((uParam0._fU0 * vParam3.x) + (uParam0._fU4 * vParam3.y)) + (uParam0._fU8 * vParam3.z)) * vParam3;
}

void sub_79423()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_79473()
{
    if (IS_VEH_DRIVEABLE( l_U852 ))
    {
        sub_3703( l_U852 );
    }
    if (DOES_CHAR_EXIST( l_U710 ))
    {
        DELETE_CHAR( ref l_U710 );
    }
    if (DOES_OBJECT_EXIST( l_U687 ))
    {
        DELETE_OBJECT( ref l_U687 );
    }
    WAIT( 2000 );
    sub_79575();
    CLEAR_WANTED_LEVEL( sub_2775() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 65 );
    sub_3029();
    return;
}

void sub_79575()
{
    sub_79584();
    return;
}

void sub_79584()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_79602();
    sub_79661( iVar2, iVar3, iVar4 );
    return;
}

void sub_79602()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U509[I] = 4;
    }
    return;
}

void sub_79661(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 11;
    sub_79694( iVar5, uParam0, uParam1, uParam2, "Contact_12" );
    return;
}

void sub_79694(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_79790( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_79790( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_79790( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_79790( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_79790( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_79790( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_80367( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((NOT g_U10981[iParam0]._fU144._fU12) AND (g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_80764( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_80764( 0, 4 );
            }
        }
    }
    if (NOT (sub_80853( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2775(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2775() );
    }
    sub_1864();
    bVar27 = true;
    uVar28 = sub_80367( iParam0, iVar7 );
    uVar29 = sub_1321( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 5) || (iVar30 == 6))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_90229( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_90659();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_90744( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_90801( iParam0 );
                sub_90840( 0 );
                sub_1762( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_90948();
        }
    }
    if (bParam2)
    {
        sub_90659();
        sub_91036();
        sub_90840( 0 );
    }
    if (bParam3)
    {
        sub_90659();
        sub_91076();
        sub_90840( 0 );
        sub_1762( uVar29, 0 );
    }
    sub_1208();
    return;
}

void sub_79790(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_80367(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1720( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_80764(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_80853(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_81061( uParam1 );
        break;
        case 1:
        bVar8 = sub_83139( uParam1 );
        break;
        case 2:
        bVar8 = sub_83365( uParam1 );
        break;
        case 3:
        bVar8 = sub_83515( uParam1 );
        break;
        case 4:
        bVar8 = sub_83793( uParam1 );
        break;
        case 5:
        bVar8 = sub_84096( uParam1 );
        break;
        case 6:
        bVar8 = sub_84295( uParam1 );
        break;
        case 7:
        bVar8 = sub_84521( uParam1 );
        break;
        case 8:
        bVar8 = sub_84756( uParam1 );
        break;
        case 9:
        bVar8 = sub_85131( uParam1 );
        break;
        case 10:
        bVar8 = sub_85378( uParam1 );
        break;
        case 11:
        bVar8 = sub_85517( uParam1 );
        break;
        case 12:
        bVar8 = sub_85816( uParam1 );
        break;
        case 13:
        bVar8 = sub_86044( uParam1 );
        break;
        case 14:
        bVar8 = sub_86331( uParam1 );
        break;
        case 15:
        bVar8 = sub_86613( uParam1 );
        break;
        case 16:
        bVar8 = sub_86895( uParam1 );
        break;
        case 17:
        bVar8 = sub_87096( uParam1 );
        break;
        case 18:
        bVar8 = sub_87169( uParam1 );
        break;
        case 19:
        bVar8 = sub_87383( uParam1 );
        break;
        case 20:
        bVar8 = sub_87636( uParam1 );
        break;
        case 21:
        bVar8 = sub_87883( uParam1 );
        break;
        case 22:
        bVar8 = sub_88084( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_82744( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_80367( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_88407( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_81061(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_81340( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_81340( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_81340( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_81340( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_81340( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_81340( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_81340( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_81340( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_81340( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_81340( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_81340( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_81340( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_81340( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_81340( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_81340( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_81340( iVar3, 0, sub_82622(), sub_82888(), 0, 0 );
        break;
        default:
        sub_83047( "Friend 1", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Friend 1", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_81340(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_81351( uParam1 );
    sub_81525( uParam0, 0, uParam2 );
    sub_81525( uParam0, 1, uParam3 );
    sub_81525( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_79602();
    return;
}

void sub_81351(unknown uParam0)
{
    ADD_SCORE( sub_2775(), uParam0 );
    sub_81376( uParam0 );
    return;
}

void sub_81376(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1720( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_81525(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_81682( uParam0 );
    }
    return;
}

void sub_81682(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if (((((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

int sub_82622()
{
    switch (l_U509[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_82744( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_82744(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_82888()
{
    switch (l_U509[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_82744( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_83047(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_83139(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81340( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81340( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_83047( "Contact 2", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Contact 2", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_83365(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_81340( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_83047( "Girl 3", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Girl 3", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_83515(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_81340( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_81340( iVar3, 0, sub_82622(), sub_82888(), 0, 0 );
        break;
        default:
        sub_83047( "Friend 4", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Friend 4", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_83793(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81340( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81340( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_81340( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_81340( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_81340( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_83047( "Contact 5", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Contact 5", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_84096(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81340( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_83047( "Contact 7", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Contact 7", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_84295(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81340( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81340( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_83047( "Contact 7b", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Contact 7b", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_84521(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_81340( iVar3, 0, sub_82622(), sub_82888(), 0, 0 );
        break;
        default:
        sub_83047( "Friend 8", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Friend 8", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_84756(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_81340( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_81340( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_81340( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_81340( iVar3, 0, sub_82622(), sub_82888(), 0, 0 );
        break;
        default:
        sub_83047( "Friend 9", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Friend 9", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_85131(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_81340( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_81340( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_83047( "Contact 10", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_83047( "Contact 10", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_85378(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_83047( "Girl 11", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Girl 11", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_85517(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81340( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_81340( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_81340( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_81340( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_81340( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_83047( "Contact 12", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Contact 12", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_85816(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81340( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81340( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_83047( "Contact 13", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Contact 13", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_86044(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_81340( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_81340( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_81340( iVar3, 0, sub_82622(), sub_82888(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_83047( "Friend 15", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Friend 15", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_86331(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81340( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81340( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_81340( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_81340( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_83047( "Contact 16", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Contact 16", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_86613(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_81340( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_81340( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_81340( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_83047( "Contact 18", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Contact 18", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_86895(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81340( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_83047( "Contact 19", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Contact 19", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_87096(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_83047( "Girl 20", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_87169(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81340( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_83047( "Contact 21", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Contact 21", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_87383(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81340( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81340( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_81340( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_83047( "Contact 22", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Contact 22", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_87636(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_81340( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81340( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81340( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_81340( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_83047( "Contact 24", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Contact 24", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_87883(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81340( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81340( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_83047( "Contact 25", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_83047( "Contact 25", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_88084(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_81340( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_83047( "Girl 26", 1 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_83047( "Girl 26", 0 );
        sub_81340( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_88407(int iParam0, int iParam1)
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
    if (sub_88455( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_89186( iParam1 );
    }
    return;
}

int sub_88455(int iParam0, int iParam1)
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
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_88595( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_88595(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_88777( 0 );
    return;
}

void sub_88777(boolean bParam0)
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
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
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
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_89032();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_89032()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_89186(int iParam0)
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
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_89519( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_89519( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_89519( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_89519( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_89519( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_89519( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_89519( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_89519( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_89519( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_89519( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_89519( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_89519( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_89519( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_89519( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_89519( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_89519( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_89519( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_89519( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_89519( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_89519(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_90229(unknown uParam0, unknown uParam1)
{
    sub_90248( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_90248(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_90659()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

int sub_90744(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_90801(unknown uParam0)
{
    sub_1107();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_90840(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_90948()
{
    sub_90957();
    return;
}

void sub_90957()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_91036()
{
    sub_90957();
    return;
}

void sub_91076()
{
    sub_90957();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_93573()
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U112 );
    SET_CAM_POS( l_U112, 959.04500000, 1005.89500000, 12.05500000 );
    SET_CAM_ROT( l_U112, -1.52500000, 0.00000000, 20.55000000 );
    SET_CAM_FOV( l_U112, 45.00000000 );
    SET_CAM_ACTIVE( l_U112, 1 );
    SET_CAM_PROPAGATE( l_U112, 0 );
    CREATE_CAM( 14, ref l_U113 );
    SET_CAM_POS( l_U113, 966.56000000, 997.96000000, 20.18000000 );
    SET_CAM_ROT( l_U113, -16.16000000, 0.00000000, 22.70000000 );
    SET_CAM_FOV( l_U113, 55.00000000 );
    SET_CAM_ACTIVE( l_U113, 1 );
    SET_CAM_PROPAGATE( l_U113, 0 );
    CREATE_CAM( 3, ref l_U114 );
    SET_CAM_INTERP_STYLE_DETAILED( l_U114, 0, 1, 1, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U114, l_U112, l_U113, 20000, 0 );
    SET_CAM_ACTIVE( l_U114, 1 );
    SET_CAM_PROPAGATE( l_U114, 1 );
    return;
}

int sub_96524(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_MODEL( uParam0, ref uVar3 );
        if ((NOT (IS_THIS_MODEL_A_BOAT( uVar3 ))) AND (NOT (IS_THIS_MODEL_A_HELI( uVar3 ))))
        {
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
            if (iVar4 > 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_97005()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (IS_PLAYER_PLAYING( sub_2775() ))
    {
        CLEAR_ROOM_FOR_CHAR( sub_2845() );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2845(), ref uVar2 );
        if (NOT (IS_CAR_DEAD( uVar2 )))
        {
            CLEAR_ROOM_FOR_CAR( uVar2 );
        }
        WAIT( 0 );
    }
    return;
}

void sub_98655(unknown uParam0, unknown uParam1, unknown uParam2)
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

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam1, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    return sub_8917( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_98757(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_2845(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_8987( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_99358(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_100120()
{
    if (l_U101)
    {
        if ((((((((((((NOT (IS_BUTTON_PRESSED( 0, 16 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 17 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 14 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 15 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 4 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 5 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 6 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 7 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 8 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 11 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 ))))
        {
            l_U101 = 0;
        }
    }
    if ((NOT l_U110) || (l_U107))
    {
        l_U107 = 0;
        WAIT( 0 );
    }
    else
    {
        l_U110 = 0;
    }
    return;
}
