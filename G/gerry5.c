void main()
{
    unknown[6] uVar2;
    int iVar9;
    boolean bVar10;
    int I;
    unknown uVar12;
    unknown uVar13;
    int J;
    int iVar15;
    unknown uVar16;
    unknown uVar17;
    vector vVar18;
    boolean bVar21;
    int iVar22;
    int iVar23;
    int iVar24;
    int iVar25;
    int iVar26;
    int iVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    int iVar35;
    vector vVar36;
    vector vVar39;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    float fVar45;
    unknown uVar46;
    int iVar47;
    unknown uVar48;
    int iVar49;
    unknown uVar50;
    int iVar51;
    unknown uVar52;

    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U496 = 0;
    l_U497 = 0;
    l_U498 = 0;
    l_U499 = 0;
    l_U500 = 0;
    l_U502 = 52;
    l_U503 = 52;
    l_U527 = 5800;
    l_U537 = 0;
    l_U538 = 0;
    l_U539 = 0;
    l_U594 = 0;
    l_U595 = 0;
    l_U596 = 0;
    l_U597 = 0;
    l_U598 = 0;
    l_U720 = {1403.43400000, 620.80820000, 34.21400000};
    l_U732 = {610.97300000, 766.26380000, 3.71500000};
    l_U735 = {663.79110000, 717.09870000, 3.78690000};
    l_U830 = 1;
    l_U868 = 600;
    l_U869 = 5000;
    l_U870 = 10000;
    l_U871 = 10000;
    l_U872 = 10000;
    l_U873 = 2500;
    l_U874 = 0;
    l_U875 = 2000;
    l_U876 = 3000;
    l_U877 = 5000;
    l_U878 = 1500;
    l_U879 = 3000;
    l_U880 = 11000;
    l_U881 = 0.10000000;
    l_U882 = -2.20000000;
    l_U883 = 2.40000000;
    l_U884 = 0.10000000;
    l_U885 = -0.70000000;
    l_U886 = 0.70000000;
    l_U887 = {608.26260000, 782.04340000, 17.02600000};
    l_U890 = {-10.49180000, 0.00000000, 26.36650000};
    l_U893 = {606.43070000, 781.80460000, 16.85605000};
    l_U896 = {-4.39300300, 0.00000000, 73.12708000};
    l_U899 = {597.28190000, 784.67710000, 17.06440000};
    l_U902 = {-11.06205000, -0.00000100, -111.32680000};
    l_U905 = {600.31680000, 783.82250000, 16.50982000};
    l_U908 = {-0.56100400, -0.00000000, 96.91272000};
    l_U911 = {597.38450000, 784.97390000, 15.12725000};
    l_U914 = {28.64389000, 0.00000000, -116.98280000};
    l_U917 = {597.38450000, 784.97390000, 15.12725000};
    l_U920 = {-89.50000000, -0.00000000, -104.16390000};
    l_U923 = {601.13020000, 783.51620000, 16.86700000};
    l_U926 = {-11.46316000, -0.00000000, 179.31800000};
    l_U929 = {601.10760000, 781.61510000, 16.48145000};
    l_U932 = {-2.63960600, -0.00000000, 179.31800000};
    l_U935 = 55.00000000;
    l_U936 = 29.20000000;
    l_U937 = 30.40000000;
    l_U938 = 55.00000000;
    l_U939 = 55.00000000;
    l_U940 = 55.00000000;
    l_U941 = 55.00000000;
    l_U942 = 55.00000000;
    l_U964 = {-259.95930000, 703.81550000, 2.79300000};
    l_U967 = 71.71710000;
    l_U968 = -456.98700000;
    l_U969 = -407.25400000;
    l_U972 = 0;
    l_U973 = 1200;
    l_U974 = -1.00000000;
    l_U975 = 9.00000000;
    l_U976 = 0.50000000;
    l_U977 = 4.00000000;
    l_U978 = -1.00000000;
    l_U979 = 0.00000000;
    l_U980 = 0.00000000;
    l_U981 = 0.50000000;
    l_U982 = {-3.00000000, 0.00000000, 0.00000000};
    l_U985 = {614.27000000, 703.52000000, 9.38000000};
    l_U988 = {614.24000000, 714.03000000, 6.35000000};
    l_U991 = 0;
    l_U1098 = 1.50000000;
    l_U1099 = 2.00000000;
    l_U1100 = 1.50000000;
    l_U1101 = 1.50000000;
    SET_MISSION_FLAG( 1 );
    LOAD_ADDITIONAL_TEXT( "GM5", 0 );
    LOAD_ADDITIONAL_TEXT( "GM5AUD", 6 );
    sub_1148( "GM5AUD" );
    sub_1311( 0, sub_1262(), "Niko", 0 );
    l_U541 = 0;
    l_U540 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1484();
        sub_3594();
    }
    sub_5121( -1138.92400000, -360.28430000, 10.69730000, -1160.41700000, -388.87770000, 0.27817900, -1160.43900000, -355.78680000, 1.60680000, 0.00000000 );
    l_U528 = sub_5409( 27 );
    l_U529 = 1976502708;
    l_U647[0] = {643.60880000, 716.53490000, 1.94650000};
    l_U647[1] = {643.69560000, 714.09840000, 1.94650000};
    l_U647[2] = {630.94010000, 716.64930000, 1.94640000};
    l_U647[3] = {630.98740000, 705.09010000, 1.94640000};
    l_U647[4] = {631.51320000, 735.98320000, 1.94640000};
    l_U647[5] = {631.20230000, 729.21860000, 1.94670000};
    l_U647[6] = {631.14310000, 742.04160000, 1.94640000};
    l_U647[7] = {614.61550000, 709.04550000, 6.86470000};
    l_U647[8] = {616.98490000, 699.21420000, 8.86330000};
    l_U675[0] = {613.23160000, 722.79460000, 15.08780000};
    l_U675[1] = {614.38450000, 722.59080000, 15.08780000};
    l_U675[2] = {615.62360000, 722.54580000, 15.08770000};
    l_U675[3] = {641.07090000, 723.23940000, 15.08770000};
    l_U675[4] = {642.13640000, 723.52440000, 15.08770000};
    l_U675[5] = {639.49750000, 724.41440000, 14.05270000};
    l_U694[0] = {617.41750000, 721.95120000, 15.08760000};
    l_U694[1] = {623.32590000, 721.94100000, 15.08770000};
    l_U694[2] = {630.46880000, 722.57630000, 15.08770000};
    l_U694[3] = {657.53780000, 711.74550000, 15.08760000};
    l_U694[4] = {657.35300000, 718.32210000, 15.08770000};
    l_U694[5] = {639.81040000, 724.58610000, 14.08760000};
    l_U713[0] = {612.89590000, 731.54230000, 14.08770000};
    l_U713[1] = {612.73550000, 734.35800000, 14.08770000};
    l_U542[0]._fU24[0] = {611.11220000, 826.61720000, 2.72870000};
    l_U542[0]._fU24[1] = {610.88620000, 825.15280000, 2.72870000};
    l_U542[1]._fU24[0] = {606.11220000, 826.61720000, 2.72870000};
    l_U542[1]._fU24[1] = {606.88620000, 825.15280000, 2.72870000};
    l_U542[2]._fU24[0] = {610.19610000, 811.21060000, 2.72530000};
    l_U542[2]._fU24[1] = {610.05690000, 812.39960000, 2.72630000};
    l_U542[0]._fU56 = {602.80140000, 815.99110000, 2.43910000};
    l_U542[1]._fU56 = {603.59950000, 824.22560000, 2.43910000};
    l_U542[2]._fU56 = {600.89030000, 835.79200000, 2.43920000};
    l_U729 = {617.33070000, 733.41310000, 1.94640000};
    l_U726 = {658.25100000, 767.56760000, 12.31820000};
    l_U723 = {601.89330000, 782.03740000, 16.11630000};
    # -sub_C1FFC0-0xc214c8( 2, ref l_U639 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U638 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U640 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U641 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U642 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U645 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U646 );
    LOAD_COMBAT_DECISION_MAKER( 11, ref l_U643 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U644 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U644, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U646, 70 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U641, 65 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U642, 75 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U645, 65 );
    if (g_U9893._fU24)
    {
        array(ref uVar2, 6);
        REQUEST_MODEL( -1870989171 );
        REQUEST_MODEL( -1676937780 );
        REQUEST_MODEL( 1872110126 );
        while (((NOT (HAS_MODEL_LOADED( -1870989171 ))) || (NOT (HAS_MODEL_LOADED( -1676937780 )))) || (NOT (HAS_MODEL_LOADED( 1872110126 ))))
        {
            WAIT( 0 );
        }
        ADD_SCENARIO_BLOCKING_AREA( -1093.30100000, -351.76070000, 3.96770100, -1068.07200000, -376.47520000, 14.32911000 );
        CLEAR_AREA_OF_CHARS( -1081.61900000, -361.29650000, 6.39890000, 40.00000000 );
        CREATE_CHAR( 8, -1870989171, -1087.88100000, -356.32400000, 6.36380000, ref uVar2[0], 1 );
        CREATE_CHAR( 8, 1872110126, -1077.81300000, -358.98050000, 6.39890000, ref uVar2[1], 1 );
        CREATE_CHAR( 8, -1870989171, -1082.66700000, -354.00990000, 6.36380000, ref uVar2[2], 1 );
        CREATE_CHAR( 8, 1872110126, -1085.27400000, -359.06150000, 6.39890000, ref uVar2[3], 1 );
        CREATE_CHAR( 8, -1676937780, -1079.55100000, -361.51540000, 6.39890000, ref uVar2[4], 1 );
        CREATE_CHAR( 8, -1676937780, -1084.05100000, -361.51540000, 6.39890000, ref uVar2[5], 1 );
        if (NOT (IS_CHAR_INJURED( uVar2[0] )))
        {
            SET_CHAR_HEADING( uVar2[0], 322.00000000 );
            SET_CHAR_DECISION_MAKER( uVar2[0], l_U638 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar2[0], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( uVar2[0], "Room_visit" );
            SET_CHAR_IN_CUTSCENE( uVar2[0], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar2[0] );
        }
        if (NOT (IS_CHAR_INJURED( uVar2[1] )))
        {
            SET_CHAR_COLLISION( uVar2[1], 0 );
            FREEZE_CHAR_POSITION( uVar2[1], 1 );
            SET_CHAR_HEADING( uVar2[1], 180.00000000 );
            SET_CHAR_DECISION_MAKER( uVar2[1], l_U638 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar2[1], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( uVar2[1], "Room_visit" );
            SET_CHAR_IN_CUTSCENE( uVar2[1], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar2[1] );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( uVar2[1], 1 );
        }
        if (NOT (IS_CHAR_INJURED( uVar2[2] )))
        {
            SET_CHAR_HEADING( uVar2[2], 182.00000000 );
            SET_CHAR_DECISION_MAKER( uVar2[2], l_U638 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar2[2], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( uVar2[2], "Room_visit" );
            SET_CHAR_IN_CUTSCENE( uVar2[2], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar2[2] );
        }
        if (NOT (IS_CHAR_INJURED( uVar2[3] )))
        {
            SET_CHAR_COLLISION( uVar2[3], 0 );
            FREEZE_CHAR_POSITION( uVar2[3], 1 );
            SET_CHAR_HEADING( uVar2[3], 150.00000000 );
            SET_CHAR_DECISION_MAKER( uVar2[3], l_U638 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar2[3], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( uVar2[3], "Room_visit" );
            SET_CHAR_IN_CUTSCENE( uVar2[3], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar2[3] );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( uVar2[3], 1 );
        }
        if (NOT (IS_CHAR_INJURED( uVar2[4] )))
        {
            SET_CHAR_HEADING( uVar2[4], 0.00000000 );
            SET_CHAR_DECISION_MAKER( uVar2[4], l_U638 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar2[4], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( uVar2[4], "Room_visit" );
            SET_CHAR_IN_CUTSCENE( uVar2[4], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar2[4] );
            TASK_SIT_DOWN_INSTANTLY( uVar2[4], 0, 0, -2 );
        }
        if (NOT (IS_CHAR_INJURED( uVar2[5] )))
        {
            SET_CHAR_HEADING( uVar2[5], 0.00000000 );
            SET_CHAR_DECISION_MAKER( uVar2[5], l_U638 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar2[5], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( uVar2[5], "Room_visit" );
            SET_CHAR_IN_CUTSCENE( uVar2[5], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar2[5] );
            TASK_SIT_DOWN_INSTANTLY( uVar2[5], 0, 0, -2 );
        }
        bVar10 = false;
        GET_INTERIOR_AT_COORDS( -1080.93600000, -357.47880000, 6.39890000, ref iVar9 );
        SETTIMERA( 0 );
        while (NOT bVar10)
        {
            GET_INTERIOR_AT_COORDS( -1080.93600000, -357.47880000, 6.39890000, ref iVar9 );
            if (NOT (iVar9 == nil))
            {
                ACTIVATE_INTERIOR( iVar9, 1 );
                bVar10 = true;
            }
            if (TIMERA() > 5000)
            {
                bVar10 = true;
            }
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( uVar2[1] )))
        {
            TASK_SIT_DOWN_INSTANTLY( uVar2[1], 0, 0, -2 );
        }
        if (NOT (IS_CHAR_INJURED( uVar2[3] )))
        {
            TASK_SIT_DOWN_INSTANTLY( uVar2[3], 0, 0, -2 );
        }
        START_CUTSCENE_NOW( "GM_5" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "GM_5" );
        for ( I = 0; I <= 5; I++ )
        {
            if (NOT (IS_CHAR_INJURED( uVar2[I] )))
            {
                DELETE_CHAR( ref uVar2[I] );
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1870989171 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1676937780 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1872110126 );
    }
    if (NOT (IS_CHAR_DEAD( sub_1262() )))
    {
        SET_CHAR_COORDINATES( sub_1262(), -1144.08900000, -374.65530000, 2.07320000 );
        SET_CHAR_HEADING( sub_1262(), 109.66980000 );
        SET_CAM_BEHIND_PED( sub_1262() );
        SET_PLAYER_CONTROL( sub_8795(), 1 );
    }
    REQUEST_MODEL( -583281407 );
    REQUEST_MODEL( l_U528 );
    REQUEST_MODEL( l_U529 );
    REQUEST_MODEL( 1708842493 );
    REQUEST_MODEL( 467469635 );
    REQUEST_MODEL( -2001451511 );
    REQUEST_MODEL( 993473937 );
    while (((((((NOT (HAS_MODEL_LOADED( -583281407 ))) || (NOT (HAS_MODEL_LOADED( l_U528 )))) || (NOT (HAS_MODEL_LOADED( l_U529 )))) || (NOT (HAS_MODEL_LOADED( 1708842493 )))) || (NOT (HAS_MODEL_LOADED( -2001451511 )))) || (NOT (HAS_MODEL_LOADED( 467469635 )))) || (NOT (HAS_MODEL_LOADED( 993473937 ))))
    {
        WAIT( 0 );
    }
    LOAD_ALL_OBJECTS_NOW();
    REQUEST_ANIMS( "missgerry5" );
    while (NOT (HAVE_ANIMS_LOADED( "missgerry5" )))
    {
        WAIT( 0 );
    }
    REQUEST_CAR_RECORDING( 917 );
    REQUEST_CAR_RECORDING( 918 );
    REQUEST_CAR_RECORDING( 919 );
    while (((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 917 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 918 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 919 ))))
    {
        WAIT( 0 );
    }
    if (g_U9930 > 1)
    {
        REQUEST_MODEL( 1884962369 );
        REQUEST_MODEL( 8772846 );
        while ((NOT (HAS_MODEL_LOADED( 1884962369 ))) || (NOT (HAS_MODEL_LOADED( 8772846 ))))
        {
            WAIT( 0 );
        }
        PROCESS_MISSION_DELETION_LIST();
        CLEAR_AREA( -1162.01600000, -389.31210000, 1.72690000, 20.00000000, 1 );
        CREATE_CAR( 1884962369, -1162.01600000, -389.31210000, 1.72690000, ref uVar12, 1 );
        SET_CAR_HEADING( uVar12, 350.00000000 );
        SET_CAR_ON_GROUND_PROPERLY( uVar12 );
        CREATE_CHAR_INSIDE_CAR( uVar12, 26, 8772846, ref uVar13 );
        SET_CAR_AS_MISSION_CAR( uVar12 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1884962369 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 8772846 );
    }
    LOAD_SCENE( -1144.08900000, -374.65530000, 2.07320000 );
    sub_9434();
    sub_9479( 1000 );
    SETTIMERA( 0 );
    while (true)
    {
        if ((NOT l_U825) AND (NOT l_U826))
        {
            switch (l_U541)
            {
                case 0:
                switch (l_U596)
                {
                    case 0:
                    if (TIMERA() > 4250)
                    {
                        if (sub_9864( 13, "GM5_PCALLS", "GM5AUD" ))
                        {
                            l_U596 = 1;
                        }
                    }
                    break;
                    case 1:
                    if (sub_13725( 0 ))
                    {
                        l_U596 = 2;
                    }
                    break;
                    case 2:
                    ADD_BLIP_FOR_COORD( -286.99150000, 1546.89300000, 20.41450000, ref l_U738 );
                    SET_BLIP_AS_FRIENDLY( l_U738, 1 );
                    SET_ROUTE( l_U738, 1 );
                    PRINT_NOW( "TASK_2", 7500, 3 );
                    sub_14100( ref l_U738, -347.27240000, 1523.02800000, 18.32430000, 0.97570000 );
                    l_U541 = 1;
                    break;
                }
                break;
                case 1:
                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_1262(), -288.56350000, 1559.78000000, 20.39400000, 150.00000000, 150.00000000, 100.00000000, 0 ))
                    {
                        CLEAR_AREA( -288.56350000, 1559.78000000, 20.39400000, 10.00000000, 1 );
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar12 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref uVar13 );
                        CLEAR_AREA( -286.99150000, 1546.89300000, 20.41450000, 10.00000000, 1 );
                        CREATE_CAR( -583281407, -286.99150000, 1546.89300000, 20.41450000, ref l_U781, 1 );
                        for ( J = 2; J <= 9; J++ )
                        {
                            if (IS_VEH_DRIVEABLE( l_U781 ))
                            {
                                if (IS_VEHICLE_EXTRA_TURNED_ON( l_U781, J ))
                                {
                                    TURN_OFF_VEHICLE_EXTRA( l_U781, J, 1 );
                                }
                            }
                        }
                        if (IS_VEH_DRIVEABLE( l_U781 ))
                        {
                            if (NOT (IS_VEHICLE_EXTRA_TURNED_ON( l_U781, 1 )))
                            {
                                TURN_OFF_VEHICLE_EXTRA( l_U781, 1, 0 );
                            }
                        }
                        SET_VEH_HAS_STRONG_AXLES( l_U781, 1 );
                        ADD_CAR_TO_MISSION_DELETION_LIST( l_U781 );
                        CHANGE_CAR_COLOUR( l_U781, l_U502, l_U503 );
                        sub_14529( ref l_U738 );
                        ADD_BLIP_FOR_CAR( l_U781, ref l_U739 );
                        SET_BLIP_AS_FRIENDLY( l_U739, 1 );
                        SET_ROUTE( l_U739, 1 );
                        sub_14100( ref l_U739, -347.27240000, 1523.02800000, 18.32430000, 0.97570000 );
                        SUPPRESS_CAR_MODEL( -583281407 );
                        ADD_SCENARIO_BLOCKING_AREA( -281.38660000, 1539.46900000, 19.33061000, -297.53840000, 1561.99900000, 23.48180000 );
                        while (NOT (sub_14720( 13, ref l_U604, -288.99150000, 1546.89300000, 20.41450000, 1.81730000 )))
                        {
                            WAIT( 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U604 )))
                        {
                            SET_PED_DIES_WHEN_INJURED( l_U604, 1 );
                            ADD_PED_TO_MISSION_DELETION_LIST( l_U604, 1 );
                            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U604, 1 );
                            sub_1311( 1, l_U604, "PACKIE_MCREARY", 0 );
                            SET_CHAR_DECISION_MAKER( l_U604, l_U638 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U604, 1 );
                            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U604, 1 );
                            SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U604, 0 );
                        }
                        if (((IS_VEH_DRIVEABLE( l_U781 )) AND (NOT (IS_CHAR_INJURED( sub_1262() )))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                        {
                            SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U604, 1 );
                            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U604, 0 );
                            GIVE_WEAPON_TO_CHAR( l_U604, 14, 30000, 0 );
                            SET_CHAR_RELATIONSHIP( l_U604, 1, 0 );
                            SET_CHAR_DECISION_MAKER( l_U604, l_U638 );
                            SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U642, 0 );
                            SET_COMBAT_DECISION_MAKER( l_U604, l_U642 );
                            SET_CHAR_ACCURACY( l_U604, 35 );
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U604, l_U781, 1 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U604, 1 );
                            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U604, 1 );
                        }
                        while (NOT (sub_14720( 27, ref l_U603, -288.99150000, 1546.89300000, 20.41450000, 1.81730000 )))
                        {
                            WAIT( 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U603 )))
                        {
                            sub_1311( 2, l_U603, "Gracie", 0 );
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U603, l_U781, 2 );
                            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U603, 1 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U603, 1 );
                            SET_CHAR_DECISION_MAKER( l_U603, l_U638 );
                            SET_CHAR_KEEP_TASK( l_U603, 1 );
                            ADD_PED_TO_MISSION_DELETION_LIST( l_U603, 1 );
                            STOP_PED_SPEAKING( l_U603, 1 );
                            SET_CHAR_COMPONENT_VARIATION( l_U603, 8, 1, 0 );
                            SET_CHAR_COMPONENT_VARIATION( l_U603, 0, 0, 0 );
                            SET_CHAR_COMPONENT_VARIATION( l_U603, 1, 0, 0 );
                            SET_CHAR_COMPONENT_VARIATION( l_U603, 2, 0, 0 );
                            BLOCK_CHAR_VISEME_ANIMS( l_U603, 1 );
                            TASK_PLAY_ANIM_WITH_FLAGS( l_U603, "girl_tied_in_car", "missgerry5", 32.00000000, -2, 144 );
                        }
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U528 );
                        l_U541 = 2;
                    }
                }
                break;
                case 2:
                sub_17182();
                if (NOT l_U514)
                {
                    if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1262(), -286.99150000, 1546.89300000, 20.41450000, 5.00000000, 7.00000000, 2.00000000, 0 ))
                        {
                            TASK_PLAY_ANIM( l_U604, "passenger_waves", "missgerry5", 8.00000000, 0, 0, 0, 0, -2 );
                            l_U514 = 1;
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                {
                    if (((IS_VEH_DRIVEABLE( l_U781 )) AND (NOT (IS_CHAR_INJURED( l_U604 )))) AND (NOT (IS_CHAR_INJURED( sub_1262() ))))
                    {
                        if (IS_CHAR_IN_CAR( sub_1262(), l_U781 ))
                        {
                            if (DOES_BLIP_EXIST( l_U738 ))
                            {
                                REMOVE_BLIP( l_U738 );
                            }
                            if (DOES_BLIP_EXIST( l_U739 ))
                            {
                                REMOVE_BLIP( l_U739 );
                            }
                            if (DOES_BLIP_EXIST( l_U742 ))
                            {
                                REMOVE_BLIP( l_U742 );
                            }
                            sub_18384( "GM5_GOB1", ref l_U1017, 7, 1 );
                            if (NOT (IS_CHAR_INJURED( sub_1262() )))
                            {
                                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1262(), 0 );
                            }
                            l_U740 = sub_19376( l_U732 );
                            l_U541 = 6;
                        }
                    }
                }
                sub_19436();
                break;
                case 6:
                if (NOT l_U847)
                {
                    if (((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_INJURED( l_U604 )))) AND (IS_VEH_DRIVEABLE( l_U781 )))
                    {
                        if ((IS_CHAR_SITTING_IN_CAR( sub_1262(), l_U781 )) AND (IS_CHAR_SITTING_IN_CAR( l_U604, l_U781 )))
                        {
                            TASK_PLAY_ANIM_WITH_FLAGS( sub_1262(), "NIKO_GREET_PACKIE", "missgerry5", 8.00000000, -2, 128 );
                            TASK_PLAY_ANIM_WITH_FLAGS( l_U604, "PACKIE_GREET_NIKO", "missgerry5", 8.00000000, -2, 128 );
                            l_U847 = 1;
                        }
                    }
                }
                sub_17182();
                if (((IS_VEH_DRIVEABLE( l_U781 )) AND (NOT (IS_CHAR_INJURED( sub_1262() )))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                {
                    if (l_U512)
                    {
                        if (sub_19944( ref l_U742, ref l_U739, ref l_U741, l_U604, l_U781, l_U735, "TASK_6", "TASK_4", "TASK_5", "TASK_6b" ))
                        {
                            if ((LOCATE_CAR_3D( l_U781, 663.79110000, 717.09870000, 3.78690000, 2.50000000, 2.50000000, 2.00000000, 1 )) AND (sub_20311( 1, 1 )))
                            {
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_8795(), 0 )))
                                {
                                    l_U541 = 7;
                                }
                                else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    PRINT_NOW( "GMWANTED", 7500, 3 );
                                }
                            }
                        }
                    }
                    else if (sub_19944( ref l_U742, ref l_U739, ref l_U740, l_U604, l_U781, l_U732, "TASK_3", "TASK_4", "TASK_5", "TASK_3b" ))
                    {
                        if (LOCATE_CAR_3D( l_U781, l_U732._fU0, l_U732._fU4, l_U732._fU8, 7.00000000, 7.00000000, 2.00000000, 0 ))
                        {
                            REMOVE_BLIP( l_U740 );
                            l_U512 = 1;
                        }
                    }
                }
                sub_20819();
                sub_23571();
                sub_19436();
                break;
                case 7:
                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                {
                    SET_PLAYER_CONTROL( sub_8795(), 0 );
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1262(), 0 );
                }
                sub_25282( 1000 );
                sub_25363( ref l_U993 );
                LOAD_ADDITIONAL_TEXT( "GM5AUD", 6 );
                if (IS_VEH_DRIVEABLE( l_U781 ))
                {
                    SET_CAR_ENGINE_ON( l_U781, 0, 1 );
                }
                CLEAR_AREA( 663.79110000, 717.09870000, 3.78690000, 60.00000000, 1 );
                START_CUTSCENE_NOW( "imgm5" );
                while (NOT HAS_CUTSCENE_LOADED())
                {
                    WAIT( 0 );
                }
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    WAIT( 0 );
                }
                CLEAR_NAMED_CUTSCENE( "imgm5" );
                REQUEST_MODEL( 1972033658 );
                while (NOT (HAS_MODEL_LOADED( 1972033658 )))
                {
                    WAIT( 0 );
                }
                l_U1089 = 0;
                CLEAR_AREA( 659.72160000, 721.48090000, 1.80640000, 40.00000000, 1 );
                CREATE_OBJECT( 1972033658, 618.09520000, 721.91530000, 14.05270000, ref l_U534, 1 );
                CREATE_OBJECT( 1972033658, 605.50070000, 807.76470000, 15.05790000, ref l_U535, 1 );
                CREATE_OBJECT( 1972033658, 638.59770000, 785.47580000, 1.75090000, ref l_U536, 1 );
                ALLOW_EMERGENCY_SERVICES( 0 );
                SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( l_U534, 1 );
                SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( l_U535, 1 );
                SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( l_U536, 1 );
                if ((DOES_CHAR_EXIST( l_U603 )) AND (NOT (IS_CHAR_INJURED( l_U603 ))))
                {
                    sub_25812( 27 );
                    DELETE_CHAR( ref l_U603 );
                }
                ADD_COVER_POINT( 618.94890000, 694.38730000, 12.21760000, 2, 0.00000000, 0, 0, ref l_U798[0] );
                ADD_COVER_POINT( 622.10790000, 694.38660000, 12.20770000, 2, 0.00000000, 0, 0, ref l_U798[1] );
                ADD_COVER_POINT( 611.72170000, 694.36930000, 12.21760000, 2, 0.00000000, 0, 0, ref l_U798[2] );
                ADD_COVER_POINT( 641.04640000, 702.27370000, 14.58770000, 2, 0.00000000, 0, 0, ref l_U798[3] );
                ADD_COVER_POINT( 645.05490000, 702.25900000, 14.58770000, 2, 0.00000000, 0, 0, ref l_U798[4] );
                ADD_COVER_POINT( 650.16330000, 702.25800000, 14.58770000, 2, 0.00000000, 0, 0, ref l_U798[5] );
                ADD_COVER_POINT( 656.90100000, 710.22160000, 14.58770000, 2, 90.00000000, 0, 0, ref l_U798[6] );
                ADD_COVER_POINT( 656.90710000, 714.95580000, 14.58770000, 2, 90.00000000, 0, 0, ref l_U798[7] );
                ADD_COVER_POINT( 656.91030000, 719.07590000, 14.58770000, 2, 90.00000000, 0, 0, ref l_U798[17] );
                ADD_COVER_POINT( 654.70180000, 721.43630000, 14.58770000, 2, 180.00000000, 0, 0, ref l_U798[8] );
                ADD_COVER_POINT( 651.40140000, 721.43740000, 14.58770000, 2, 180.00000000, 0, 0, ref l_U798[9] );
                ADD_COVER_POINT( 642.45650000, 721.43760000, 14.58770000, 2, 180.00000000, 0, 0, ref l_U798[10] );
                ADD_COVER_POINT( 636.19050000, 721.43740000, 14.58770000, 2, 180.00000000, 0, 0, ref l_U798[11] );
                ADD_COVER_POINT( 629.98710000, 721.43670000, 14.58770000, 2, 180.00000000, 0, 0, ref l_U798[12] );
                ADD_COVER_POINT( 622.71010000, 721.43740000, 14.58770000, 2, 180.00000000, 0, 0, ref l_U798[13] );
                ADD_COVER_POINT( 624.11970000, 798.12300000, 14.58770000, 2, 90.00000000, 0, 0, ref l_U798[14] );
                ADD_COVER_POINT( 624.11970000, 801.20190000, 14.58770000, 2, 90.00000000, 0, 0, ref l_U798[15] );
                ADD_COVER_POINT( 615.40430000, 699.08910000, 9.86320000, 1, 180.00000000, 3, 0, ref l_U798[16] );
                ADD_COVER_POINT( 608.27090000, 808.80380000, 16.03330000, 2, 270.00000000, 0, 0, ref l_U798[18] );
                ADD_COVER_POINT( 608.27100000, 813.04990000, 15.78400000, 2, 270.00000000, 0, 0, ref l_U798[19] );
                ADD_COVER_POINT( 608.27180000, 818.15120000, 15.48420000, 2, 270.00000000, 0, 0, ref l_U798[20] );
                if (DOES_BLIP_EXIST( l_U741 ))
                {
                    REMOVE_BLIP( l_U741 );
                }
                SET_ZONE_NO_COPS( "ZCHISL2", 1 );
                SET_CREATE_RANDOM_COPS( 0 );
                CLEAR_AREA_OF_COPS( 665.69820000, 717.08690000, 1.78790000, 300.00000000 );
                ADD_SCENARIO_BLOCKING_AREA( 561.23220000, 539.59630000, -32.38448000, 698.60580000, 905.70060000, 34.02946000 );
                REQUEST_ANIMS( "missgerry5" );
                REQUEST_MODEL( 1512178029 );
                while (NOT (HAVE_ANIMS_LOADED( "missgerry5" )))
                {
                    WAIT( 0 );
                }
                while (NOT (HAS_MODEL_LOADED( 1512178029 )))
                {
                    WAIT( 0 );
                }
                CREATE_OBJECT_NO_OFFSET( 1512178029, 574.80720000, 780.02420000, 12.78500000, ref l_U600, 1 );
                SET_OBJECT_HEADING( l_U600, 90.00000000 );
                CREATE_OBJECT_NO_OFFSET( 1512178029, 577.19590000, 786.03230000, 12.78510000, ref l_U601, 1 );
                SET_OBJECT_HEADING( l_U601, 80.00000000 );
                CREATE_OBJECT_NO_OFFSET( 1512178029, 581.68220000, 779.10270000, 12.78500000, ref l_U602, 1 );
                SET_OBJECT_HEADING( l_U602, 60.00000000 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1512178029 );
                if (IS_VEH_DRIVEABLE( l_U781 ))
                {
                    CLOSE_ALL_CAR_DOORS( l_U781 );
                    SET_CAR_COORDINATES( l_U781, 666.24600000, 720.03820000, 1.78680000 );
                    SET_CAR_HEADING( l_U781, 193.00000000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U781 );
                }
                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                {
                    vVar18 = {667.28310000, 721.79080000, 1.78370000};
                    if (IS_CHAR_IN_ANY_CAR( sub_1262() ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_1262(), vVar18.x, vVar18.y, vVar18.z );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_1262(), vVar18.x, vVar18.y, vVar18.z );
                    }
                    SET_CAM_BEHIND_PED( sub_1262() );
                    if (HAS_CHAR_GOT_WEAPON( sub_1262(), 15 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_1262(), 15, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( sub_1262(), 14 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_1262(), 14, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( sub_1262(), 13 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_1262(), 13, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( sub_1262(), 12 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_1262(), 12, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( sub_1262(), 10 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_1262(), 10, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( sub_1262(), 11 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_1262(), 11, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( sub_1262(), 9 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_1262(), 9, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( sub_1262(), 7 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_1262(), 7, 1 );
                    };;;;;;;;
                    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( sub_1262(), vVar18, 60000 );
                }
                WAIT( 1000 );
                if (NOT (IS_CHAR_INJURED( l_U604 )))
                {
                    vVar18 = {667.09340000, 721.29790000, 1.78420000};
                    l_U794 = {654.36050000, 716.60110000, 1.94640000};
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U604, 1 );
                    UNLOCK_RAGDOLL( l_U604, 0 );
                    if (IS_CHAR_IN_ANY_CAR( l_U604 ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( l_U604, vVar18.x, vVar18.y, vVar18.z );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( l_U604, vVar18.x, vVar18.y, vVar18.z );
                    }
                    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U604, 1 );
                    REMOVE_CHAR_FROM_GROUP( l_U604 );
                    SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U604, -1 );
                    SET_CURRENT_CHAR_WEAPON( l_U604, 14, 0 );
                    SET_CHAR_RELATIONSHIP( l_U604, 5, 24 );
                    l_U794 = {654.36050000, 716.60110000, 1.94640000};
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U604, 0 );
                    SET_CHAR_DECISION_MAKER( l_U604, l_U640 );
                    SET_COMBAT_DECISION_MAKER( l_U604, l_U642 );
                    SET_CHAR_ACCURACY( l_U604, 35 );
                    TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U604, l_U794, 90.00000000, 0.00000000, 120000, l_U794, 3.00000000 );
                    FORCE_PED_TO_LOAD_COVER( l_U604, 1 );
                    SET_SENSE_RANGE( l_U604, 60.00000000 );
                    ADD_BLIP_FOR_CHAR( l_U604, ref l_U742 );
                    SET_BLIP_AS_FRIENDLY( l_U742, 1 );
                    CHANGE_BLIP_DISPLAY( l_U742, 2 );
                }
                SET_WANTED_MULTIPLIER( 0 );
                CLEAR_AREA_OF_COPS( 641.68350000, 704.66500000, 0.94710000, 300.00000000 );
                for ( iVar15 = 0; iVar15 <= 8; iVar15++ )
                {
                    if (((iVar15 == 2) || (iVar15 == 4)) || (iVar15 == 6))
                    {
                        sub_28107( ref l_U606[iVar15], l_U647[iVar15]._fU0, l_U647[iVar15]._fU4, l_U647[iVar15]._fU8, 90.00000000, l_U529, l_U639, l_U641 );
                    }
                    else
                    {
                        sub_28107( ref l_U606[iVar15], l_U647[iVar15]._fU0, l_U647[iVar15]._fU4, l_U647[iVar15]._fU8, 90.00000000, l_U529, l_U639, l_U642 );
                    }
                    SET_CHAR_RELATIONSHIP( l_U606[iVar15], 5, 0 );
                    ADD_BLIP_FOR_CHAR( l_U606[iVar15], ref l_U747[iVar15] );
                    CHANGE_BLIP_DISPLAY( l_U747[iVar15], 2 );
                    if (NOT (IS_CHAR_INJURED( l_U604 )))
                    {
                        TASK_SEEK_COVER_FROM_PED( l_U606[iVar15], l_U604, -2 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U606[5] )))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U606[5], 631.69300000, 709.64940000, 1.94640000, 3, -2, 0.40000000 );
                    GIVE_WEAPON_TO_CHAR( l_U606[5], 14, 30000, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U606[5], 14, 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U606[6] )))
                {
                    SET_COMBAT_DECISION_MAKER( l_U606[6], l_U646 );
                    GIVE_WEAPON_TO_CHAR( l_U606[6], 14, 30000, 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U606[6], 631.69300000, 709.64940000, 1.94640000, 3, -2, 0.40000000 );
                }
                if (NOT (IS_CHAR_INJURED( l_U606[7] )))
                {
                    SET_COMBAT_DECISION_MAKER( l_U606[7], l_U644 );
                    GIVE_WEAPON_TO_CHAR( l_U606[7], 14, 30000, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U606[7], 14, 1 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U606[7], 1 );
                    SET_SENSE_RANGE( l_U606[7], 70.00000000 );
                    SET_PED_ENABLE_LEG_IK( l_U606[7], 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U606[8] )))
                {
                    GIVE_WEAPON_TO_CHAR( l_U606[8], 14, 30000, 0 );
                    SET_COMBAT_DECISION_MAKER( l_U606[8], l_U644 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U606[8], 1 );
                }
                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                {
                    SET_PED_IS_BLIND_RAGING( sub_1262(), 1 );
                }
                DISABLE_PAUSE_MENU( 1 );
                sub_9496();
                sub_9434();
                DO_SCREEN_FADE_IN_UNHACKED( 100 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
                DISABLE_PAUSE_MENU( 0 );
                if (NOT (IS_CHAR_DEAD( sub_1262() )))
                {
                    SET_PLAYER_CONTROL( sub_8795(), 1 );
                }
                SET_WANTED_MULTIPLIER( 0.00000000 );
                CLEAR_PRINTS();
                sub_18384( "GM5_INITIAL", ref l_U1023, 7, 1 );
                l_U541 = 9;
                break;
                case 9:
                sub_28998();
                if (((NOT l_U832) AND (NOT (IS_CHAR_INJURED( sub_1262() )))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                {
                    if ((IS_CHAR_IN_AREA_3D( sub_1262(), 614.38730000, 719.37600000, 4.90941100, 635.42740000, 702.55030000, 19.45619000, 0 )) || (IS_CHAR_IN_AREA_3D( l_U604, 614.38730000, 719.37600000, 4.90941100, 635.42740000, 702.55030000, 19.45619000, 0 )))
                    {
                        sub_28107( ref l_U632[0], 614.89460000, 693.23270000, 11.21760000, 0.00000000, l_U529, l_U639, l_U642 );
                        if (NOT (IS_CHAR_INJURED( l_U632[0] )))
                        {
                            SET_CHAR_RELATIONSHIP( l_U632[0], 5, 0 );
                            l_U794 = {612.38600000, 694.01100000, 12.21760000};
                            TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U632[0], l_U794, 0.00000000, 0.00000000, 120000, l_U794, 3.00000000 );
                            ADD_BLIP_FOR_CHAR( l_U632[0], ref l_U773[0] );
                            CHANGE_BLIP_DISPLAY( l_U773[0], 2 );
                        }
                        sub_28107( ref l_U632[1], 616.86220000, 693.34530000, 11.21760000, 0.00000000, l_U529, l_U639, l_U642 );
                        if (NOT (IS_CHAR_INJURED( l_U632[1] )))
                        {
                            SET_CHAR_RELATIONSHIP( l_U632[1], 5, 0 );
                            l_U794 = {621.07400000, 693.98650000, 12.21750000};
                            TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U632[1], l_U794, 0.00000000, 0.00000000, 120000, l_U794, 3.00000000 );
                            ADD_BLIP_FOR_CHAR( l_U632[1], ref l_U773[1] );
                            CHANGE_BLIP_DISPLAY( l_U773[1], 2 );
                        }
                        CLEAR_PRINTS();
                        sub_18384( "GM5_UP", ref l_U993, 7, 1 );
                        l_U837 = 1;
                        l_U832 = 1;
                    }
                }
                if (l_U832)
                {
                    if (((IS_CHAR_INJURED( l_U632[0] )) AND (IS_CHAR_INJURED( l_U632[1] ))) || (IS_CHAR_IN_AREA_3D( sub_1262(), 626.20880000, 704.90060000, 10.04871000, 629.11760000, 698.37010000, 15.64390000, 0 )))
                    {
                        for ( iVar15 = 0; iVar15 <= 5; iVar15++ )
                        {
                            sub_28107( ref l_U616[iVar15], l_U675[iVar15]._fU0, l_U675[iVar15]._fU4, l_U675[iVar15]._fU8, 0.00000000, l_U529, l_U638, l_U645 );
                            SET_CHAR_DECISION_MAKER( l_U616[iVar15], l_U640 );
                            SET_CHAR_RELATIONSHIP( l_U616[iVar15], 5, 0 );
                            TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U616[iVar15], l_U694[iVar15], 180.00000000, 0.00000000, 1200000, l_U694[iVar15], 3.00000000 );
                            ADD_BLIP_FOR_CHAR( l_U616[iVar15], ref l_U757[iVar15] );
                            CHANGE_BLIP_DISPLAY( l_U757[iVar15], 2 );
                            if (bVar21)
                            {
                                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                                {
                                    REGISTER_TARGET( l_U616[iVar15], sub_1262() );
                                }
                                bVar21 = false;
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U604 )))
                            {
                                REGISTER_TARGET( l_U616[iVar15], l_U604 );
                            }
                            bVar21 = true;;
                        }
                        if (NOT (IS_CHAR_INJURED( l_U616[2] )))
                        {
                            SET_COMBAT_DECISION_MAKER( l_U616[2], l_U641 );
                            SET_CHAR_WILL_USE_COVER( l_U616[2], 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U616[5] )))
                        {
                            SET_COMBAT_DECISION_MAKER( l_U616[5], l_U644 );
                        }
                        l_U537 = 3;
                        l_U541 = 10;
                    }
                }
                if (NOT l_U513)
                {
                    if (NOT (sub_4399( l_U1023 )))
                    {
                        PRINT_NOW( "TASK_KILL", 7500, 3 );
                        l_U513 = 1;
                    }
                }
                for ( iVar15 = 0; iVar15 <= 5; iVar15++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U616[iVar15] )))
                    {
                        iVar22++;
                        iVar23 = iVar15;
                    }
                }
                if (iVar22 == 1)
                {
                    if ((NOT (IS_CHAR_INJURED( l_U616[0] ))) AND (NOT l_U521))
                    {
                        TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U616[0], 654.83230000, 722.93260000, 14.08770000, 180.00000000, 0.00000000, 1200000, 654.83230000, 722.93260000, 14.08770000, 3.00000000 );
                        l_U521 = 1;
                    }
                }
                sub_30826();
                break;
                case 10:
                sub_28998();
                if (NOT l_U838)
                {
                    if (NOT (IS_CHAR_INJURED( sub_1262() )))
                    {
                        if ((IS_CHAR_IN_AREA_3D( sub_1262(), 661.19420000, 714.83470000, 9.12785100, 604.37240000, 828.63460000, 19.53527000, 0 )) AND (l_U537 == 8))
                        {
                            sub_28107( ref l_U623[0], 659.04350000, 761.37730000, 11.31820000, 0.00000000, l_U529, l_U640, l_U642 );
                            if (NOT (IS_CHAR_INJURED( l_U623[0] )))
                            {
                                SET_CHAR_RELATIONSHIP( l_U623[0], 5, 0 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U623[0], 659.34420000, 742.86510000, 14.08740000, 4, -2, 0.40000000 );
                                ADD_BLIP_FOR_CHAR( l_U623[0], ref l_U764[0] );
                                CHANGE_BLIP_DISPLAY( l_U764[0], 2 );
                            }
                            sub_28107( ref l_U623[1], 658.16970000, 763.61990000, 11.31820000, 0.00000000, l_U529, l_U640, l_U642 );
                            if (NOT (IS_CHAR_INJURED( l_U623[1] )))
                            {
                                SET_CHAR_RELATIONSHIP( l_U623[1], 5, 0 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U623[1], 658.15650000, 742.22120000, 14.08740000, 4, -2, 0.40000000 );
                                ADD_BLIP_FOR_CHAR( l_U623[1], ref l_U764[1] );
                                CHANGE_BLIP_DISPLAY( l_U764[1], 2 );
                                SET_COMBAT_DECISION_MAKER( l_U623[1], l_U646 );
                                GIVE_WEAPON_TO_CHAR( l_U623[1], 14, 30000, 0 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U604 )))
                            {
                                l_U794 = {657.45180000, 737.96780000, 14.08760000};
                                CLEAR_CHAR_TASKS( l_U604 );
                                TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U604, l_U794, 0.00000000, 0.00000000, 120000, l_U794, 3.00000000 );
                            }
                            l_U838 = 1;
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                {
                    if ((IS_CHAR_IN_AREA_3D( sub_1262(), 659.48010000, 745.68660000, 18.76519000, 630.03160000, 811.51030000, 11.57570000, 0 )) AND (((l_U838) AND (IS_CHAR_INJURED( l_U623[0] ))) AND (IS_CHAR_INJURED( l_U623[1] ))))
                    {
                        for ( iVar24 = 0; iVar24 <= 2; iVar24++ )
                        {
                            CREATE_CAR( -583281407, l_U542[iVar24]._fU56._fU0, l_U542[iVar24]._fU56._fU4, l_U542[iVar24]._fU56._fU8, ref l_U542[iVar24]._fU52, 1 );
                            for ( iVar25 = 0; iVar25 <= 1; iVar25++ )
                            {
                                if (IS_VEH_DRIVEABLE( l_U542[iVar24]._fU52 ))
                                {
                                    sub_28107( ref l_U542[iVar24]._fU0[iVar25], l_U542[iVar24]._fU24[iVar25]._fU0, l_U542[iVar24]._fU24[iVar25]._fU4, l_U542[iVar24]._fU24[iVar25]._fU8, 0.00000000, l_U529, l_U638, l_U642 );
                                }
                                if (iVar25 == 0)
                                {
                                    if ((IS_VEH_DRIVEABLE( l_U542[iVar24]._fU52 )) AND (NOT (IS_CHAR_INJURED( l_U542[iVar24]._fU0[0] ))))
                                    {
                                        WARP_CHAR_INTO_CAR( l_U542[iVar24]._fU0[0], l_U542[iVar24]._fU52 );
                                    }
                                }
                                else if (NOT (IS_CHAR_INJURED( l_U542[iVar24]._fU0[iVar25] )))
                                {
                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U542[iVar24]._fU0[iVar25], l_U542[iVar24]._fU52, 1 );
                                }
                                SET_CHAR_RELATIONSHIP( l_U542[iVar24]._fU0[iVar25], 5, 0 );
                                SET_SENSE_RANGE( l_U542[iVar24]._fU0[iVar25], 100.00000000 );
                            }
                            if (IS_VEH_DRIVEABLE( l_U542[iVar24]._fU52 ))
                            {
                                START_PLAYBACK_RECORDED_CAR( l_U542[iVar24]._fU52, 917 + iVar24 );
                            }
                            l_U821[iVar24] = 1;
                        }
                        if (NOT (IS_CHAR_INJURED( l_U542[0]._fU0[0] )))
                        {
                            SET_COMBAT_DECISION_MAKER( l_U542[0]._fU0[0], l_U646 );
                            GIVE_WEAPON_TO_CHAR( l_U542[0]._fU0[0], 14, 30000, 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U542[1]._fU0[1] )))
                        {
                            SET_COMBAT_DECISION_MAKER( l_U542[1]._fU0[1], l_U646 );
                            GIVE_WEAPON_TO_CHAR( l_U542[1]._fU0[1], 14, 30000, 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U542[2]._fU0[1] )))
                        {
                            SET_COMBAT_DECISION_MAKER( l_U542[2]._fU0[1], l_U646 );
                            GIVE_WEAPON_TO_CHAR( l_U542[2]._fU0[1], 14, 30000, 0 );
                        }
                        l_U541 = 12;
                    }
                }
                sub_35685();
                sub_30826();
                break;
                case 12:
                sub_30826();
                sub_28998();
                iVar26 = 0;
                for ( iVar24 = 0; iVar24 <= 2; iVar24++ )
                {
                    if (l_U821[iVar24])
                    {
                        if (IS_VEH_DRIVEABLE( l_U542[iVar24]._fU52 ))
                        {
                            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U542[iVar24]._fU52 )))
                            {
                                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                                {
                                    if (iVar24 == 2)
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U599 );
                                        TASK_LEAVE_ANY_CAR( 0 );
                                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U640 );
                                        TASK_COMBAT( 0, sub_1262() );
                                        CLOSE_SEQUENCE_TASK( l_U599 );
                                    }
                                    else if (iVar24 == 1)
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U599 );
                                        TASK_LEAVE_ANY_CAR( 0 );
                                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U640 );
                                        TASK_GUARD_CURRENT_POSITION( 0, 1.00000000, 4.00000000, 1 );
                                        CLOSE_SEQUENCE_TASK( l_U599 );
                                    }
                                    else
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U599 );
                                        TASK_LEAVE_ANY_CAR( 0 );
                                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U640 );
                                        TASK_COMBAT( 0, sub_1262() );
                                        CLOSE_SEQUENCE_TASK( l_U599 );
                                    }
                                }
                                for ( iVar25 = 0; iVar25 <= 1; iVar25++ )
                                {
                                    if (((IS_VEH_DRIVEABLE( l_U542[iVar24]._fU52 )) AND (NOT (IS_CHAR_INJURED( l_U542[iVar24]._fU0[iVar25] )))) AND (NOT (IS_CHAR_INJURED( sub_1262() ))))
                                    {
                                        REGISTER_HATED_TARGETS_IN_AREA( l_U542[iVar24]._fU0[iVar25], 643.01990000, 773.97690000, 1.76330000, 50.00000000 );
                                        TASK_PERFORM_SEQUENCE( l_U542[iVar24]._fU0[iVar25], l_U599 );
                                        GENERATE_RANDOM_INT_IN_RANGE( 50, 150, ref iVar27 );
                                        WAIT( 150 + iVar27 );
                                        ADD_BLIP_FOR_CHAR( l_U542[iVar24]._fU0[iVar25], ref l_U542[iVar24]._fU12[iVar25] );
                                        CHANGE_BLIP_DISPLAY( l_U542[iVar24]._fU12[iVar25], 2 );
                                        if (NOT l_U840)
                                        {
                                            sub_18384( "GM5_MORE", ref l_U1011, 7, 1 );
                                            l_U840 = 1;
                                        }
                                        if (NOT (DOES_BLIP_EXIST( l_U742 )))
                                        {
                                            ADD_BLIP_FOR_CHAR( l_U604, ref l_U742 );
                                            SET_BLIP_AS_FRIENDLY( l_U742, 1 );
                                        }
                                    }
                                }
                                if (DOES_BLIP_EXIST( l_U745 ))
                                {
                                    REMOVE_BLIP( l_U745 );
                                }
                                CLEAR_SEQUENCE_TASK( l_U599 );
                                l_U821[iVar24] = 0;
                            }
                        }
                        else if (iVar24 == 2)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U599 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_SET_CHAR_DECISION_MAKER( 0, l_U640 );
                            TASK_GUARD_CURRENT_POSITION( 0, 1.00000000, 4.00000000, 1 );
                            CLOSE_SEQUENCE_TASK( l_U599 );
                        }
                        else if (iVar24 == 1)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U599 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_SET_CHAR_DECISION_MAKER( 0, l_U640 );
                            TASK_GUARD_CURRENT_POSITION( 0, 0.00000000, 4.00000000, 1 );
                            CLOSE_SEQUENCE_TASK( l_U599 );
                        }
                        else
                        {
                            OPEN_SEQUENCE_TASK( ref l_U599 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_SET_CHAR_DECISION_MAKER( 0, l_U640 );
                            TASK_COMBAT( 0, sub_1262() );
                            CLOSE_SEQUENCE_TASK( l_U599 );
                        }
                        for ( iVar25 = 0; iVar25 <= 1; iVar25++ )
                        {
                            if ((NOT (IS_CHAR_INJURED( l_U542[iVar24]._fU0[iVar25] ))) AND (NOT (IS_CHAR_INJURED( sub_1262() ))))
                            {
                                REGISTER_HATED_TARGETS_IN_AREA( l_U542[iVar24]._fU0[iVar25], 643.01990000, 773.97690000, 1.76330000, 50.00000000 );
                                TASK_PERFORM_SEQUENCE( l_U542[iVar24]._fU0[iVar25], l_U599 );
                                ADD_BLIP_FOR_CHAR( l_U542[iVar24]._fU0[iVar25], ref l_U542[iVar24]._fU12[iVar25] );
                                CHANGE_BLIP_DISPLAY( l_U542[iVar24]._fU12[iVar25], 2 );
                                if (NOT l_U840)
                                {
                                    sub_18384( "GM5_MORE", ref l_U1011, 7, 1 );
                                    l_U840 = 1;
                                }
                            }
                        }
                        if (DOES_BLIP_EXIST( l_U745 ))
                        {
                            REMOVE_BLIP( l_U745 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U599 );
                        l_U821[iVar24] = 0;;
                    }
                }
                if (((l_U840) AND (NOT (sub_4399( l_U1011 )))) AND (NOT l_U516))
                {
                    PRINT_NOW( "TASK_12", 7500, 3 );
                    WAIT( 100 );
                    l_U516 = 1;
                }
                if (DOES_BLIP_EXIST( l_U745 ))
                {
                    if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT l_U836))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1262(), 658.25100000, 767.56760000, 12.31820000, 2.00000000, 2.00000000, 2.00000000, 0 ))
                        {
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, l_U542[0]._fU52, 4000 );
                            if (DOES_BLIP_EXIST( l_U745 ))
                            {
                                CLEAR_PRINTS();
                                REMOVE_BLIP( l_U745 );
                            }
                            l_U836 = 1;
                        }
                    }
                }
                iVar26 = 0;
                for ( iVar24 = 0; iVar24 <= 2; iVar24++ )
                {
                    for ( iVar25 = 0; iVar25 <= 1; iVar25++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U542[iVar24]._fU0[iVar25] )))
                        {
                            iVar26++;
                        }
                        else
                        {
                            REMOVE_BLIP( l_U542[iVar24]._fU12[iVar25] );
                        }
                    }
                }
                if (iVar26 == 0)
                {
                    if (NOT (l_U597 == 5))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U604 )))
                        {
                            l_U794 = {626.23220000, 771.39970000, 15.08770000};
                            OPEN_SEQUENCE_TASK( ref uVar28 );
                            TASK_GUARD_SPHERE_DEFENSIVE_AREA( 0, l_U794, 270.00000000, 9.00000000, 120000, l_U794, 3.00000000 );
                            CLOSE_SEQUENCE_TASK( uVar28 );
                            if (HAS_CHAR_GOT_WEAPON( l_U604, 14 ))
                            {
                                SET_CURRENT_CHAR_WEAPON( l_U604, 14, 1 );
                            }
                            else
                            {
                                GIVE_WEAPON_TO_CHAR( l_U604, 14, 500, 1 );
                            }
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U604, 0 );
                            TASK_PERFORM_SEQUENCE( l_U604, uVar28 );
                            CLEAR_SEQUENCE_TASK( uVar28 );
                        }
                        l_U597 = 5;
                    }
                    if (NOT (IS_CHAR_INJURED( sub_1262() )))
                    {
                        if (((IS_CHAR_IN_AREA_3D( sub_1262(), 605.82260000, 772.96680000, 22.77652000, 569.30400000, 794.02260000, 13.69787000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_1262(), 584.82680000, 784.27300000, 13.42868000, 609.03330000, 777.89580000, 22.59330000, 0 ))) || (IS_CHAR_IN_AREA_3D( sub_1262(), 604.94890000, 774.13630000, 22.35839000, 617.68680000, 891.82210000, 9.96259200, 0 )))
                        {
                            if ((NOT (DOES_BLIP_EXIST( l_U742 ))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                            {
                                ADD_BLIP_FOR_CHAR( l_U604, ref l_U742 );
                                SET_BLIP_AS_FRIENDLY( l_U742, 1 );
                            }
                            PRINT_NOW( "TOO_FAR", 7500, 3 );
                            l_U541 = 3;
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U604 )))
                        {
                            l_U794 = {624.31670000, 799.93740000, 15.08770000};
                            GIVE_WEAPON_TO_CHAR( l_U604, 14, 5000, 0 );
                            SET_CURRENT_CHAR_WEAPON( l_U604, 14, 1 );
                            TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U604, l_U794, 90.00000000, 0.00000000, 120000, l_U794, 2.00000000 );
                            sub_18384( "GM5_FOLLOW", ref l_U1005, 7, 1 );
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U742 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U604, ref l_U742 );
                            SET_BLIP_AS_FRIENDLY( l_U742, 1 );
                        }
                        if (DOES_BLIP_EXIST( l_U745 ))
                        {
                            REMOVE_BLIP( l_U745 );
                        }
                        l_U541 = 13;;
                    }
                    sub_4867();
                }
                break;
                case 3:
                if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                {
                    GET_CHAR_COORDINATES( l_U604, ref uVar29._fU0, ref uVar29._fU4, ref uVar29._fU8 );
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_1262(), uVar29._fU0, uVar29._fU4, uVar29._fU8, 10.00000000, 10.00000000, 4.00000000, 0 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U604 )))
                        {
                            l_U794 = {624.31670000, 799.93740000, 15.08770000};
                            GIVE_WEAPON_TO_CHAR( l_U604, 14, 5000, 0 );
                            SET_CURRENT_CHAR_WEAPON( l_U604, 14, 1 );
                            TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U604, l_U794, 90.00000000, 0.00000000, 120000, l_U794, 2.00000000 );
                            sub_18384( "GM5_FOLLOW", ref l_U1005, 7, 1 );
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U742 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U604, ref l_U742 );
                            SET_BLIP_AS_FRIENDLY( l_U742, 1 );
                        }
                        if (DOES_BLIP_EXIST( l_U745 ))
                        {
                            REMOVE_BLIP( l_U745 );
                        }
                        l_U541 = 13;
                    }
                }
                break;
                case 13:
                sub_28998();
                if (NOT l_U835)
                {
                    if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                    {
                        GET_CHAR_COORDINATES( sub_1262(), ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                        if ((uVar32._fU4 > 790.00000000) || (IS_CHAR_IN_AREA_3D( l_U604, 613.22190000, 808.58290000, 17.67216000, 628.31320000, 779.59060000, 12.65566000, 0 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U604 )))
                            {
                                SET_CHAR_DECISION_MAKER( l_U604, l_U640 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U604, 0 );
                                SET_CHAR_PROOFS( l_U604, 0, 0, 0, 0, 0 );
                            }
                            sub_18384( "GM5_MORE", ref l_U1005, 7, 1 );
                            sub_28107( ref l_U626[0], 608.18590000, 794.47960000, 16.11630000, 0.00000000, l_U529, l_U640, l_U642 );
                            if (NOT (IS_CHAR_INJURED( l_U626[0] )))
                            {
                                SET_CHAR_RELATIONSHIP( l_U626[0], 5, 0 );
                                l_U794 = {608.27090000, 815.31510000, 15.65080000};
                                TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U626[0], l_U794, 270.00000000, 0.00000000, 120000, l_U794, 1.50000000 );
                                ADD_BLIP_FOR_CHAR( l_U626[0], ref l_U767[0] );
                                CHANGE_BLIP_DISPLAY( l_U767[0], 2 );
                            }
                            sub_28107( ref l_U626[1], 608.16140000, 796.35860000, 16.10550000, 0.00000000, l_U529, l_U640, l_U642 );
                            if (NOT (IS_CHAR_INJURED( l_U626[1] )))
                            {
                                SET_CHAR_RELATIONSHIP( l_U626[1], 5, 0 );
                                l_U794 = {608.28310000, 811.41600000, 15.88040000};
                                TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U626[1], l_U794, 270.00000000, 0.00000000, 120000, l_U794, 1.50000000 );
                                ADD_BLIP_FOR_CHAR( l_U626[1], ref l_U767[1] );
                                CHANGE_BLIP_DISPLAY( l_U767[1], 2 );
                            }
                            sub_28107( ref l_U626[2], 608.08530000, 799.32500000, 16.09780000, 0.00000000, l_U529, l_U640, l_U642 );
                            if (NOT (IS_CHAR_INJURED( l_U626[2] )))
                            {
                                SET_CHAR_RELATIONSHIP( l_U626[2], 5, 0 );
                                l_U794 = {608.10420000, 800.67670000, 16.11630000};
                                TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U626[2], l_U794, 270.00000000, 0.00000000, 120000, l_U794, 1.50000000 );
                                ADD_BLIP_FOR_CHAR( l_U626[2], ref l_U767[2] );
                                CHANGE_BLIP_DISPLAY( l_U767[2], 2 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U626[2] )))
                            {
                                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( l_U626[2], 30.00000000 );
                            }
                            sub_28107( ref l_U626[3], 608.06540000, 793.41750000, 16.10550000, 0.00000000, l_U529, l_U640, l_U642 );
                            if (NOT (IS_CHAR_INJURED( l_U626[3] )))
                            {
                                SET_CHAR_RELATIONSHIP( l_U626[3], 5, 0 );
                                l_U794 = {608.08150000, 788.03750000, 16.11630000};
                                TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U626[3], l_U794, 270.00000000, 0.00000000, 120000, l_U794, 1.50000000 );
                                GIVE_WEAPON_TO_CHAR( l_U626[3], 14, 30000, 0 );
                                SET_CURRENT_CHAR_WEAPON( l_U626[3], 14, 1 );
                                ADD_BLIP_FOR_CHAR( l_U626[3], ref l_U767[3] );
                                CHANGE_BLIP_DISPLAY( l_U767[3], 2 );
                            }
                            sub_28107( ref l_U626[4], 608.18590000, 791.87200000, 16.11640000, 0.00000000, l_U529, l_U640, l_U642 );
                            if (NOT (IS_CHAR_INJURED( l_U626[4] )))
                            {
                                SET_CHAR_RELATIONSHIP( l_U626[4], 5, 0 );
                                l_U794 = {613.82240000, 805.46390000, 15.76180000};
                                TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U626[4], l_U794, 270.00000000, 0.00000000, 120000, l_U794, 1.50000000 );
                                ADD_BLIP_FOR_CHAR( l_U626[4], ref l_U767[4] );
                                CHANGE_BLIP_DISPLAY( l_U767[4], 2 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U626[2] )))
                            {
                                SET_COMBAT_DECISION_MAKER( l_U626[2], l_U641 );
                                SET_CHAR_WILL_USE_COVER( l_U626[2], 0 );
                            }
                            l_U537 = 9;
                            l_U541 = 14;
                            l_U835 = 1;
                        }
                    }
                }
                sub_30826();
                break;
                case 14:
                sub_28998();
                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                {
                    if ((IS_CHAR_IN_AREA_3D( sub_1262(), 608.63280000, 788.99240000, 18.09797000, 575.19930000, 768.53400000, 11.29379000, 0 )) AND ((l_U537 == 10) || (l_U537 == 11)))
                    {
                        GET_GAME_TIMER( ref l_U509 );
                        l_U509 += 2000;
                        l_U541 = 16;
                    }
                }
                sub_30826();
                break;
                case 16:
                GET_GAME_TIMER( ref iVar35 );
                if (((sub_40058()) AND (iVar35 > l_U509)) AND (l_U538 != 14))
                {
                    l_U525 = 1;
                    l_U538 = 14;
                }
                switch (l_U538)
                {
                    case 0:
                    l_U827 = 0;
                    SET_PLAYER_CONTROL( sub_8795(), 0 );
                    sub_25282( 1000 );
                    if ((NOT (IS_CHAR_INJURED( l_U604 ))) AND (NOT (IS_CHAR_INJURED( sub_1262() ))))
                    {
                        sub_25363( ref l_U993 );
                        sub_25363( ref l_U1083 );
                        sub_40385();
                        REQUEST_MODEL( 1236654733 );
                        REQUEST_MODEL( 850991848 );
                        REQUEST_MODEL( 723973206 );
                        while (((NOT (HAS_MODEL_LOADED( 1236654733 ))) || (NOT (HAS_MODEL_LOADED( 850991848 )))) || (NOT (HAS_MODEL_LOADED( 723973206 ))))
                        {
                            WAIT( 0 );
                        }
                        REQUEST_CAR_RECORDING( 920 );
                        while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 920 )))
                        {
                            WAIT( 0 );
                        }
                        sub_40606( ref l_U500, 1 );
                        vVar36 = {0.08000000, 0.03000000, 0.05000000};
                        vVar39 = {0.00000000, -3.30000000, -0.10000000};
                        CREATE_CHAR( 8, l_U529, 597.36800000, 782.70390000, 16.11650000, ref l_U637, 1 );
                        SET_CHAR_HEADING( l_U637, 270.45100000 );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U637 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U637, 24 );
                        SET_CHAR_DECISION_MAKER( l_U637, l_U638 );
                        SET_COMBAT_DECISION_MAKER( l_U637, l_U642 );
                        SET_CHAR_AS_ENEMY( l_U637, 1 );
                        sub_1311( 3, l_U637, "diamond_guy", 0 );
                        CREATE_OBJECT( 1236654733, 597.36800000, 783.10390000, 16.11650000, ref l_U785, 1 );
                        ATTACH_OBJECT_TO_PED( l_U785, l_U637, 1219, vVar36, vVar39, 0 );
                        CREATE_OBJECT( 1708842493, 516.41550000, 33.69660000, 11.57720000, ref l_U786, 1 );
                        ATTACH_OBJECT_TO_PED( l_U786, l_U637, 1232, 0.00000000, 0.00000000, 0.01850000, 0.00000000, 0.00000000, 0.00000000, 0 );
                        if ((NOT (IS_CHAR_INJURED( l_U604 ))) AND (NOT (IS_CHAR_INJURED( sub_1262() ))))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U604 ))
                            {
                                WARP_CHAR_FROM_CAR_TO_COORD( l_U604, 607.94630000, 784.66890000, 15.11000000 );
                            }
                            else
                            {
                                SET_CHAR_COORDINATES( l_U604, 607.94630000, 784.66890000, 15.11000000 );
                            }
                            REMOVE_CHAR_FROM_GROUP( l_U604 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U604 );
                            TASK_LOOK_AT_CHAR( l_U604, sub_1262(), 0, 0 );
                            SET_CHAR_DECISION_MAKER( l_U604, l_U638 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U604, 1 );
                            SET_CHAR_HEADING( l_U604, 180.00000000 );
                            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U604, 1 );
                            if (NOT (IS_CHAR_INJURED( sub_1262() )))
                            {
                                if (((IS_CHAR_IN_ANY_CAR( sub_1262() )) || (IS_CHAR_ON_ANY_BIKE( sub_1262() ))) || (IS_CHAR_IN_ANY_HELI( sub_1262() )))
                                {
                                    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar42 );
                                    WARP_CHAR_FROM_CAR_TO_COORD( sub_1262(), 606.36500000, 786.17080000, 15.10630000 );
                                    if (DOES_VEHICLE_EXIST( uVar42 ))
                                    {
                                        DELETE_CAR( ref uVar42 );
                                    }
                                }
                                else
                                {
                                    SET_CHAR_COORDINATES( sub_1262(), 606.36500000, 786.17080000, 15.10630000 );
                                }
                                SET_CHAR_COORDINATES( sub_1262(), 606.36500000, 786.17080000, 15.10630000 );
                                SET_CHAR_HEADING( sub_1262(), 180.00000000 );
                                SET_CHAR_DUCKING( sub_1262(), 0 );
                            }
                        }
                        CREATE_CAR( 850991848, 573.60810000, 876.93260000, 2.70900000, ref l_U784, 1 );
                        for ( iVar15 = 1; iVar15 <= 9; iVar15++ )
                        {
                            if (IS_VEH_DRIVEABLE( l_U784 ))
                            {
                                if (IS_VEHICLE_EXTRA_TURNED_ON( l_U784, iVar15 ))
                                {
                                    TURN_OFF_VEHICLE_EXTRA( l_U784, iVar15, 1 );
                                }
                                SET_CAR_ENGINE_ON( l_U784, 1, 1 );
                            }
                        }
                        CLEAR_AREA( 600.02610000, 782.11240000, 15.11630000, 20.00000000, 1 );
                        CLEAR_AREA( 601.02310000, 778.64640000, 1.73330000, 20.00000000, 1 );
                        CLEAR_AREA( 599.20520000, 766.79510000, 1.73330000, 20.00000000, 1 );
                        CLEAR_AREA( 598.96360000, 746.51200000, 1.73210000, 20.00000000, 1 );
                        CLEAR_AREA( 599.55490000, 730.51100000, 1.73210000, 20.00000000, 1 );
                        CLEAR_AREA( 599.42770000, 709.22890000, 1.73220000, 20.00000000, 1 );
                        TURN_OFF_VEHICLE_EXTRA( l_U784, 3, 0 );
                        CREATE_CAM( 14, ref l_U530 );
                        SET_CAM_POS( l_U530, 607.50370000, 778.98270000, 15.25880000 );
                        SET_CAM_ROT( l_U530, 16.15342000, 0.00000000, 2.92626300 );
                        SET_CAM_FOV( l_U530, 45.00000000 );
                        SET_CAM_ACTIVE( l_U530, 1 );
                        SET_CAM_PROPAGATE( l_U530, 1 );
                        if ((NOT (IS_CHAR_INJURED( l_U604 ))) AND (NOT (IS_CHAR_INJURED( l_U637 ))))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar43 );
                            TASK_FLUSH_ROUTE();
                            TASK_EXTEND_ROUTE( 606.75940000, 781.92100000, 16.11250000 );
                            TASK_EXTEND_ROUTE( 603.98280000, 781.92100000, 16.11650000 );
                            TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                            TASK_LOOK_AT_CHAR( 0, l_U637, 25000, 0 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U637 );
                            CLOSE_SEQUENCE_TASK( uVar43 );
                            TASK_PERFORM_SEQUENCE( l_U604, uVar43 );
                            CLEAR_SEQUENCE_TASK( uVar43 );
                        }
                        WAIT( 150 );
                        if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_INJURED( l_U637 ))))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar43 );
                            TASK_FLUSH_ROUTE();
                            TASK_EXTEND_ROUTE( 606.31740000, 782.79290000, 16.11700000 );
                            TASK_EXTEND_ROUTE( 604.41990000, 782.79290000, 16.10730000 );
                            TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                            TASK_LOOK_AT_CHAR( 0, l_U637, 25000, 0 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U637 );
                            CLOSE_SEQUENCE_TASK( uVar43 );
                            TASK_PERFORM_SEQUENCE( sub_1262(), uVar43 );
                            CLEAR_SEQUENCE_TASK( uVar43 );
                        }
                        WAIT( 350 );
                        sub_9479( 1000 );
                        if (NOT (IS_CHAR_INJURED( l_U637 )))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar44 );
                            TASK_PLAY_ANIM( 0, "throw_diamonds_intro", "missgerry5", 8.00000000, 0, 1, 1, 0, -2 );
                            TASK_PLAY_ANIM( 0, "throw_diamonds_loop", "missgerry5", 8.00000000, 1, 1, 1, 0, -2 );
                            CLOSE_SEQUENCE_TASK( uVar44 );
                            TASK_PERFORM_SEQUENCE( l_U637, uVar44 );
                            CLEAR_SEQUENCE_TASK( uVar44 );
                        }
                        GET_GAME_TIMER( ref l_U504 );
                        l_U504 += l_U868;
                        l_U538 = 1;
                    }
                    else
                    {
                        SET_PLAYER_CONTROL( sub_8795(), 1 );
                        sub_25363( ref l_U1053 );
                        sub_25363( ref l_U1059 );
                        sub_25363( ref l_U1065 );
                        sub_25363( ref l_U1071 );
                        sub_25363( ref l_U993 );
                        sub_25363( ref l_U1083 );
                        l_U538 = 15;
                        sub_9479( 1000 );
                    }
                    break;
                    case 1:
                    GET_GAME_TIMER( ref iVar15 );
                    if (iVar15 > l_U504)
                    {
                        sub_42650( ref l_U530, ref l_U531, ref l_U532 );
                        CREATE_CAM( 14, ref l_U530 );
                        CREATE_CAM( 14, ref l_U531 );
                        SET_CAM_POS( l_U530, 592.16000000, 768.91000000, 14.24000000 );
                        SET_CAM_ROT( l_U530, 5.52000000, -0.00000000, -28.25000000 );
                        SET_CAM_FOV( l_U530, 45.00000000 );
                        SET_CAM_POS( l_U531, 592.14070000, 768.87360000, 18.87982000 );
                        SET_CAM_ROT( l_U531, -10.20261000, -0.00000000, -29.02204000 );
                        SET_CAM_FOV( l_U531, 45.00000000 );
                        CREATE_CAM( 3, ref l_U532 );
                        SET_CAM_INTERP_STYLE_CORE( l_U532, l_U530, l_U531, 4000, 0 );
                        SET_CAM_ACTIVE( l_U532, 1 );
                        SET_CAM_PROPAGATE( l_U532, 1 );
                        l_U504 += l_U869;
                        l_U538 = 2;
                    }
                    break;
                    case 2:
                    GET_GAME_TIMER( ref iVar15 );
                    if ((NOT l_U524) AND (iVar15 > (l_U504 - 1000)))
                    {
                        sub_18384( "GM5_DGUY1", ref l_U1053, 7, 1 );
                        l_U524 = 1;
                    }
                    if (iVar15 > l_U504)
                    {
                        sub_42650( ref l_U530, ref l_U531, ref l_U532 );
                        CREATE_CAM( 14, ref l_U530 );
                        SET_CAM_POS( l_U530, 597.50000000, 784.58000000, 15.89000000 );
                        SET_CAM_ROT( l_U530, 9.22000000, -0.00000000, -124.96000000 );
                        SET_CAM_FOV( l_U530, 45.00000000 );
                        SET_CAM_NEAR_DOF( l_U530, 0.50000000 );
                        SET_CAM_FAR_DOF( l_U530, 15.00000000 );
                        SET_CAM_ACTIVE( l_U530, 1 );
                        SET_CAM_PROPAGATE( l_U530, 1 );
                        l_U538 = 3;
                    }
                    break;
                    case 3:
                    if (NOT (sub_4399( l_U1053 )))
                    {
                        sub_42650( ref l_U530, ref l_U531, ref l_U532 );
                        CREATE_CAM( 14, ref l_U530 );
                        SET_CAM_POS( l_U530, 601.27000000, 783.66000000, 16.07000000 );
                        SET_CAM_ROT( l_U530, 6.64000000, -0.00000000, 96.32000000 );
                        SET_CAM_FOV( l_U530, 45.00000000 );
                        SET_CAM_ACTIVE( l_U530, 1 );
                        SET_CAM_PROPAGATE( l_U530, 1 );
                        sub_18384( "GM5_DGUY2", ref l_U1059, 7, 1 );
                        GET_GAME_TIMER( ref iVar15 );
                        l_U504 = iVar15 + 3000;
                        l_U538 = 5;
                    }
                    break;
                    case 5:
                    GET_GAME_TIMER( ref iVar15 );
                    if (iVar15 > l_U504)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U637 )))
                        {
                            PLAY_AUDIO_EVENT_FROM_PED( "G5_SEWAGE_SHOOTOUT_AIM_GUN", l_U637 );
                        }
                        l_U538 = 6;
                    }
                    break;
                    case 6:
                    if (NOT (sub_4399( l_U1059 )))
                    {
                        sub_42650( ref l_U530, ref l_U531, ref l_U532 );
                        sub_18384( "GM5_DGUY3", ref l_U1065, 7, 1 );
                        if (NOT (IS_CHAR_INJURED( l_U637 )))
                        {
                            TASK_PLAY_ANIM( l_U637, "throw_diamonds_outro", "missgerry5", 8.00000000, 0, 1, 1, 0, -2 );
                        }
                        CREATE_CAM( 14, ref l_U530 );
                        CREATE_CAM( 14, ref l_U531 );
                        SET_CAM_POS( l_U530, l_U911._fU0, l_U911._fU4, l_U911._fU8 );
                        SET_CAM_ROT( l_U530, l_U914._fU0, l_U914._fU4, l_U914._fU8 );
                        SET_CAM_POS( l_U531, l_U917._fU0, l_U917._fU4, l_U917._fU8 );
                        SET_CAM_ROT( l_U531, l_U920._fU0, l_U920._fU4, l_U920._fU8 );
                        SET_CAM_ACTIVE( l_U530, 1 );
                        SET_CAM_PROPAGATE( l_U530, 1 );
                        if (IS_VEH_DRIVEABLE( l_U784 ))
                        {
                            START_PLAYBACK_RECORDED_CAR( l_U784, 920 );
                        }
                        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U784, l_U527 );
                        GET_GAME_TIMER( ref iVar15 );
                        l_U504 = iVar15 + l_U873;
                        l_U538 = 7;
                    }
                    break;
                    case 7:
                    if (NOT l_U827)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U637 )))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U637, "missgerry5", "throw_diamonds_outro", ref fVar45 );
                            if (fVar45 > 0.30000000)
                            {
                                CREATE_CAM( 3, ref l_U532 );
                                SET_CAM_INTERP_STYLE_CORE( l_U532, l_U530, l_U531, l_U878, 0 );
                                SET_CAM_ACTIVE( l_U532, 1 );
                                SET_CAM_PROPAGATE( l_U532, 1 );
                                DETACH_OBJECT( l_U785, 0 );
                                APPLY_FORCE_TO_OBJECT( l_U785, 1, 0, 1.00000000, 0, 0, 0, 0, 0, 0, 0, 1 );
                                FORCE_WIND( 0 );
                                l_U827 = 1;
                            }
                        }
                    }
                    GET_GAME_TIMER( ref iVar15 );
                    if (iVar15 > l_U504)
                    {
                        l_U504 = iVar15 + l_U874;
                        l_U538 = 8;
                    }
                    break;
                    case 8:
                    GET_GAME_TIMER( ref iVar15 );
                    if (iVar15 > l_U504)
                    {
                        sub_42650( ref l_U530, ref l_U531, ref l_U532 );
                        if (DOES_OBJECT_EXIST( l_U785 ))
                        {
                            DELETE_OBJECT( ref l_U785 );
                        }
                        CREATE_OBJECT( 1236654733, 519.82830000, 31.47800000, 15.54080000, ref l_U785, 1 );
                        if (IS_VEH_DRIVEABLE( l_U784 ))
                        {
                            TRIGGER_PTFX_ON_VEH( "imp_bullet_default", l_U784, -0.30000000, -0.50000000, 1.50000000, 0, 0, 0, 10.00000000 );
                            ATTACH_OBJECT_TO_CAR( l_U785, l_U784, -1, -0.30000000, -0.70000000, 1.36000000, 0.90000000, 0, 0 );
                        }
                        PLAY_AUDIO_EVENT_FROM_OBJECT( "G5_SEWAGE_SHOOTOUT_CASE_LAND", l_U785 );
                        CREATE_CAM( 14, ref l_U530 );
                        CREATE_CAM( 14, ref l_U531 );
                        SET_CAM_POS( l_U530, 598.96220000, 783.50910000, 4.99870300 );
                        SET_CAM_ROT( l_U530, -17.53650000, 0.00000000, 179.09070000 );
                        SET_CAM_FOV( l_U530, 45.00000000 );
                        SET_CAM_POS( l_U531, 599.17270000, 757.34400000, 14.34398000 );
                        SET_CAM_ROT( l_U531, 0.90913900, 0.00000000, 177.31730000 );
                        SET_CAM_FOV( l_U531, 45.00000000 );
                        CREATE_CAM( 3, ref l_U532 );
                        SET_CAM_INTERP_STYLE_CORE( l_U532, l_U530, l_U531, l_U880, 0 );
                        SET_CAM_ACTIVE( l_U532, 1 );
                        SET_CAM_PROPAGATE( l_U532, 1 );
                        l_U504 = iVar15 + 1500;
                        l_U538 = 13;
                    }
                    break;
                    case 13:
                    GET_GAME_TIMER( ref iVar15 );
                    if (iVar15 > l_U504)
                    {
                        l_U504 = iVar15 + 1000;
                        l_U538 = 9;
                    }
                    break;
                    case 9:
                    GET_GAME_TIMER( ref iVar15 );
                    if (iVar15 > l_U504)
                    {
                        sub_18384( "GM5_DGUY4", ref l_U1071, 7, 1 );
                        l_U504 = iVar15 + l_U876;
                        l_U538 = 12;
                    }
                    break;
                    case 12:
                    GET_GAME_TIMER( ref iVar15 );
                    if (iVar15 > l_U504)
                    {
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                        l_U538 = 11;
                        l_U504 = iVar15 + 4000;
                    }
                    break;
                    case 11:
                    GET_GAME_TIMER( ref iVar15 );
                    if (iVar15 > l_U504)
                    {
                        l_U538 = 14;
                    }
                    break;
                    case 14:
                    if (NOT l_U525)
                    {
                        DISABLE_PAUSE_MENU( 1 );
                        sub_9496();
                        sub_9434();
                        DO_SCREEN_FADE_OUT_UNHACKED( 3000 );
                        while (IS_SCREEN_FADING_OUT())
                        {
                            WAIT( 0 );
                        }
                        DISABLE_PAUSE_MENU( 0 );
                    }
                    else
                    {
                        sub_25282( 1000 );
                    }
                    sub_42650( ref l_U530, ref l_U531, ref l_U532 );
                    sub_45124( ref l_U500, 1, 1, 1 );
                    sub_25363( ref l_U1053 );
                    sub_25363( ref l_U1059 );
                    sub_25363( ref l_U1065 );
                    sub_25363( ref l_U1071 );
                    CLEAR_PRINTS();
                    REMOVE_ANIMS( "gestures@niko" );
                    CREATE_CAR( 723973206, 582.85970000, 764.17770000, 1.79640000, ref l_U533, 1 );
                    SET_CAR_HEADING( l_U533, 0 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U533 );
                    if (DOES_OBJECT_EXIST( l_U785 ))
                    {
                        DELETE_OBJECT( ref l_U785 );
                    }
                    if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1262() );
                        SET_CHAR_COORDINATES( sub_1262(), 606.17180000, 782.89230000, 15.11630000 );
                        SET_CHAR_HEADING( sub_1262(), 90.00000000 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U604 );
                        SET_CHAR_COORDINATES( l_U604, 604.93370000, 781.40190000, 15.11630000 );
                        SET_CHAR_HEADING( l_U604, 90.00000000 );
                        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U604, 0 );
                    }
                    sub_28107( ref l_U635[0], 576.27830000, 785.73780000, 12.78500000, 290.00000000, l_U529, l_U640, l_U642 );
                    SET_CHAR_AS_ENEMY( l_U635[0], 1 );
                    REMOVE_ALL_CHAR_WEAPONS( l_U635[0] );
                    GIVE_WEAPON_TO_CHAR( l_U635[0], 13, 80, 0 );
                    ADD_BLIP_FOR_CHAR( l_U635[0], ref l_U776[0] );
                    if ((NOT (IS_CHAR_INJURED( l_U637 ))) AND (NOT (IS_CHAR_INJURED( sub_1262() ))))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U637 );
                        SET_CHAR_COORDINATES( l_U637, 572.84700000, 779.61290000, 12.78000000 );
                        GIVE_WEAPON_TO_CHAR( l_U637, 13, 80, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U637, 13, 1 );
                        if (DOES_OBJECT_EXIST( l_U786 ))
                        {
                            DETACH_OBJECT( l_U786, 0 );
                            DELETE_OBJECT( ref l_U786 );
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U778 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U637, ref l_U778 );
                        }
                    }
                    if (DOES_OBJECT_EXIST( l_U785 ))
                    {
                        DELETE_OBJECT( ref l_U785 );
                    }
                    if (DOES_VEHICLE_EXIST( l_U784 ))
                    {
                        DELETE_CAR( ref l_U784 );
                    }
                    sub_9479( 1000 );
                    l_U541 = 20;
                    PRINT_NOW( "TASK_KILLBOSS", 7500, 3 );
                    break;
                }
                break;
                case 20:
                if (NOT l_U515)
                {
                    if ((NOT (IS_CHAR_INJURED( l_U604 ))) AND (NOT (IS_CHAR_INJURED( l_U637 ))))
                    {
                        l_U794 = {581.90520000, 777.78980000, 12.78510000};
                        OPEN_SEQUENCE_TASK( ref uVar46 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U640 );
                        TASK_SET_COMBAT_DECISION_MAKER( 0, l_U645 );
                        TASK_GUARD_SPHERE_DEFENSIVE_AREA( 0, l_U794, 60.00000000, 0.00000000, 120000, l_U794, 4.00000000 );
                        CLOSE_SEQUENCE_TASK( uVar46 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U604, 0 );
                        SET_CHAR_RELATIONSHIP( l_U604, 5, 24 );
                        TASK_PERFORM_SEQUENCE( l_U604, uVar46 );
                        CLEAR_SEQUENCE_TASK( uVar46 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U635[0] )))
                    {
                        SET_CHAR_RELATIONSHIP( l_U635[0], 5, 0 );
                        SET_CHAR_DECISION_MAKER( l_U635[0], l_U640 );
                        SET_COMBAT_DECISION_MAKER( l_U635[0], l_U642 );
                        REGISTER_HATED_TARGETS_IN_AREA( l_U635[0], 572.84700000, 779.61290000, 12.78000000, 100.00000000 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U637 )))
                    {
                        SET_CHAR_RELATIONSHIP( l_U637, 5, 0 );
                        SET_CHAR_DECISION_MAKER( l_U637, l_U640 );
                        SET_COMBAT_DECISION_MAKER( l_U637, l_U642 );
                        REGISTER_HATED_TARGETS_IN_AREA( l_U637, 572.84700000, 779.61290000, 12.78000000, 100.00000000 );
                    }
                    l_U515 = 1;
                }
                sub_28998();
                if (DOES_BLIP_EXIST( l_U776[0] ))
                {
                    if (IS_CHAR_INJURED( l_U635[0] ))
                    {
                        REMOVE_BLIP( l_U776[0] );
                    }
                }
                if (DOES_BLIP_EXIST( l_U778 ))
                {
                    if (IS_CHAR_INJURED( l_U637 ))
                    {
                        REMOVE_BLIP( l_U778 );
                    }
                }
                if ((IS_CHAR_INJURED( l_U637 )) AND (IS_CHAR_INJURED( l_U635[0] )))
                {
                    if (DOES_BLIP_EXIST( l_U778 ))
                    {
                        REMOVE_BLIP( l_U778 );
                    }
                    if (DOES_BLIP_EXIST( l_U776[0] ))
                    {
                        REMOVE_BLIP( l_U776[0] );
                    }
                    sub_18384( "GM5_KILLD", ref l_U1077, 6, 1 );
                    WAIT( 2000 );
                    GET_GAME_TIMER( ref l_U508 );
                    l_U507 = l_U508 + 1000;
                    l_U541 = 19;
                }
                break;
                case 19:
                if (NOT (IS_CHAR_INJURED( l_U604 )))
                {
                    switch (l_U598)
                    {
                        case 0:
                        if (NOT (IS_CHAR_INJURED( l_U604 )))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar48 );
                            TASK_SET_CHAR_DECISION_MAKER( 0, l_U638 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 586.62790000, 792.02180000, 13.78500000, 3, 30000, 0.20000000 );
                            CLOSE_SEQUENCE_TASK( uVar48 );
                            TASK_PERFORM_SEQUENCE( l_U604, uVar48 );
                            CLEAR_SEQUENCE_TASK( uVar48 );
                            l_U598 = 1;
                        }
                        if (NOT (IS_CHAR_INJURED( sub_1262() )))
                        {
                            SET_PED_IS_BLIND_RAGING( sub_1262(), 0 );
                        }
                        break;
                        case 1:
                        if ((NOT (sub_4399( l_U1077 ))) AND (NOT l_U519))
                        {
                            PRINT_NOW( "TPACK", 7500, 3 );
                            l_U519 = 1;
                        }
                        if (NOT (IS_CHAR_INJURED( l_U604 )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U604, 29, ref iVar47 );
                            if (iVar47 == 7)
                            {
                                l_U598 = 2;
                            }
                        }
                        break;
                        case 2:
                        if (NOT (IS_CHAR_INJURED( sub_1262() )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_1262(), 587.65280000, 791.33800000, 13.78470000, 15.00000000, 15.00000000, 3.00000000, 0 ))
                            {
                                CLEAR_PRINTS();
                                TASK_TURN_CHAR_TO_FACE_CHAR( l_U604, sub_1262() );
                                UNLOCK_RAGDOLL( l_U604, 1 );
                                sub_18384( "GM5_GETOUT", ref l_U1029, 8, 1 );
                                l_U598 = 3;
                            }
                        }
                        else if (NOT l_U848)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U604 )))
                            {
                                if (NOT (DOES_BLIP_EXIST( l_U742 )))
                                {
                                    ADD_BLIP_FOR_CHAR( l_U604, ref l_U742 );
                                    SET_BLIP_AS_FRIENDLY( l_U742, 1 );
                                }
                                PRINT_NOW( "TOO_FAR", 7500, 3 );
                            }
                            l_U848 = 1;
                        }
                        break;
                        case 3:
                        if (NOT (sub_4399( l_U1029 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U604 )))
                            {
                                SET_GROUP_MEMBER( sub_47279(), l_U604 );
                                SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U604, 0 );
                            }
                            CLEAR_PRINTS();
                            ALLOW_EMERGENCY_SERVICES( 1 );
                            SET_WANTED_MULTIPLIER( 1.00000000 );
                            SET_CREATE_RANDOM_COPS( 1 );
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U533 );
                            MARK_MODEL_AS_NO_LONGER_NEEDED( 723973206 );
                            sub_18384( "GM5_2GO", ref l_U1029, 8, 1 );
                            GET_GAME_TIMER( ref l_U501 );
                            l_U501 += 12000;
                            l_U541 = 21;
                        }
                        break;
                    }
                }
                break;
                case 21:
                if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                {
                    if (DOES_BLIP_EXIST( l_U779 ))
                    {
                        LOCATE_CHAR_ANY_MEANS_3D( sub_1262(), 1401.74700000, 620.82200000, 34.96800000, 2.50000000, 2.50000000, 2.50000000, 1 );
                    }
                    if (NOT (sub_4399( l_U1029 )))
                    {
                        if (DOES_BLIP_EXIST( l_U742 ))
                        {
                            REMOVE_BLIP( l_U742 );
                        }
                        if (sub_47653( ref l_U742, ref l_U779, l_U604, l_U720, "HOME", "TOO_FAR", "CONT_HOME" ))
                        {
                            if (((LOCATE_CHAR_ANY_MEANS_3D( sub_1262(), 1401.74700000, 620.82200000, 34.96800000, 2.50000000, 2.50000000, 2.50000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U604, 1401.74700000, 620.82200000, 34.96800000, 5.00000000, 5.00000000, 2.50000000, 0 ))) AND (sub_20311( 1, 1 )))
                            {
                                REMOVE_BLIP( l_U779 );
                                GET_GAME_TIMER( ref l_U508 );
                                l_U507 = l_U508 + 2000;
                                l_U541 = 22;
                            }
                        }
                    }
                }
                sub_48320();
                if (NOT l_U523)
                {
                    if (NOT (sub_4399( l_U1029 )))
                    {
                        PRINT_HELP( "LADDER_HLPB" );
                        l_U523 = 1;
                    }
                }
                break;
                case 22:
                GET_GAME_TIMER( ref l_U508 );
                if ((sub_40058()) AND (l_U508 > l_U507))
                {
                    l_U595 = 13;
                }
                switch (l_U595)
                {
                    case 0:
                    SET_PLAYER_CONTROL( sub_8795(), 0 );
                    sub_25282( 1000 );
                    sub_40385();
                    sub_25363( ref l_U993 );
                    CLEAR_AREA( 1393.19300000, 622.84450000, 33.48360000, 4.00000000, 1 );
                    CLEAR_AREA( 1397.64600000, 621.60330000, 32.82480000, 10.00000000, 1 );
                    if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                    {
                        if (IS_GROUP_MEMBER( l_U604, sub_47279() ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U604 );
                        }
                        SET_CHAR_DECISION_MAKER( l_U604, l_U638 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U604, 1 );
                        SET_CURRENT_CHAR_WEAPON( l_U604, 0, 0 );
                        SET_CURRENT_CHAR_WEAPON( sub_1262(), 0, 0 );
                        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U604, 1 );
                        SWITCH_ROADS_OFF( 1414.40400000, 598.30740000, 29.54837000, 1401.28800000, 639.85240000, 36.06623000 );
                        sub_40606( ref l_U500, 0 );
                        if (IS_CHAR_IN_ANY_CAR( sub_1262() ))
                        {
                            GET_CAR_CHAR_IS_USING( sub_1262(), ref l_U783 );
                            GET_CAR_MODEL( l_U783, ref iVar49 );
                            if ((iVar49 == 837858166) || (IS_THIS_MODEL_A_BOAT( iVar49 )))
                            {
                                if (IS_CHAR_IN_ANY_CAR( l_U604 ))
                                {
                                    WARP_CHAR_FROM_CAR_TO_COORD( l_U604, 1393.68900000, 622.00000000, 33.27890000 );
                                }
                                else
                                {
                                    SET_CHAR_COORDINATES( l_U604, 1393.68900000, 622.00000000, 33.27890000 );
                                }
                                WARP_CHAR_FROM_CAR_TO_COORD( sub_1262(), 1395.08200000, 623.89870000, 33.06330000 );
                                DELETE_CAR( ref l_U783 );
                                if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                                {
                                    SET_CHAR_DUCKING( sub_1262(), 0 );
                                    SET_CHAR_DUCKING( l_U604, 0 );
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U604 );
                                    SET_CHAR_COORDINATES( sub_1262(), 1398.73000000, 619.75760000, 32.63310000 );
                                    SET_CHAR_HEADING( sub_1262(), 99 );
                                    TASK_LOOK_AT_CHAR( sub_1262(), l_U604, 60000, 0 );
                                    SET_CHAR_COORDINATES( l_U604, 1396.93600000, 618.49350000, 32.50180000 );
                                    SET_CHAR_HEADING( l_U604, 343 );
                                    TASK_LOOK_AT_CHAR( l_U604, sub_1262(), 60000, 0 );
                                    CREATE_CAM( 14, ref l_U530 );
                                    SET_CAM_POS( l_U530, 1394.15200000, 621.56470000, 33.84042000 );
                                    SET_CAM_ROT( l_U530, -2.52500200, 0.00000000, -122.54000000 );
                                    SET_CAM_FOV( l_U530, 27.60004000 );
                                    SET_CAM_ACTIVE( l_U530, 1 );
                                    SET_CAM_PROPAGATE( l_U530, 1 );
                                    sub_9479( 1000 );
                                    sub_18384( "GM5_END1", ref l_U1035, 7, 1 );
                                    l_U595 = 3;
                                }
                            }
                            else
                            {
                                CREATE_CAM( 14, ref l_U530 );
                                CREATE_CAM( 14, ref l_U531 );
                                SET_CAM_POS( l_U530, 1408.94700000, 623.06560000, 38.06077000 );
                                SET_CAM_ROT( l_U530, -21.65627000, 0.00000000, 115.52320000 );
                                SET_CAM_FOV( l_U530, 45.00000000 );
                                SET_CAM_POS( l_U531, 1410.20900000, 623.66800000, 38.61594000 );
                                SET_CAM_ROT( l_U531, -21.65627000, 0.00000000, 115.52320000 );
                                SET_CAM_FOV( l_U531, 45.00000000 );
                                SET_CAM_ACTIVE( l_U530, 1 );
                                SET_CAM_PROPAGATE( l_U530, 1 );
                                SET_CAR_COORDINATES( l_U783, 1401.99500000, 618.53980000, 33.01730000 );
                                SET_CAR_HEADING( l_U783, 180.00000000 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U783 );
                                sub_9479( 1000 );
                                l_U595 = 11;
                            }
                        }
                        else if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U604 ))
                            {
                                WARP_CHAR_FROM_CAR_TO_COORD( l_U604, 1393.68900000, 622.00000000, 33.27890000 );
                            }
                            else
                            {
                                SET_CHAR_COORDINATES( l_U604, 1393.68900000, 622.00000000, 33.27890000 );
                            }
                            SET_CHAR_DUCKING( sub_1262(), 0 );
                            SET_CHAR_DUCKING( l_U604, 0 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U604 );
                            SET_CHAR_COORDINATES( sub_1262(), 1398.73000000, 619.75760000, 32.63310000 );
                            SET_CHAR_HEADING( sub_1262(), 99 );
                            TASK_LOOK_AT_CHAR( sub_1262(), l_U604, 60000, 0 );
                            SET_CHAR_COORDINATES( l_U604, 1396.93600000, 618.49350000, 32.50180000 );
                            SET_CHAR_HEADING( l_U604, 343 );
                            TASK_LOOK_AT_CHAR( l_U604, sub_1262(), 60000, 0 );
                            CREATE_CAM( 14, ref l_U530 );
                            SET_CAM_POS( l_U530, 1394.15200000, 621.56470000, 33.84042000 );
                            SET_CAM_ROT( l_U530, -2.52500200, 0.00000000, -122.54000000 );
                            SET_CAM_FOV( l_U530, 27.60004000 );
                            SET_CAM_ACTIVE( l_U530, 1 );
                            SET_CAM_PROPAGATE( l_U530, 1 );
                            sub_9479( 1000 );
                            sub_18384( "GM5_END1", ref l_U1035, 7, 1 );
                            l_U595 = 3;
                        }
                    }
                    else
                    {
                        l_U595 = 13;
                    }
                    CLEAR_PRINTS();
                    break;
                    case 11:
                    if (NOT l_U522)
                    {
                        CREATE_CAM( 3, ref l_U532 );
                        SET_CAM_INTERP_STYLE_CORE( l_U532, l_U530, l_U531, 4000, 0 );
                        SET_CAM_ACTIVE( l_U532, 1 );
                        SET_CAM_PROPAGATE( l_U532, 1 );
                        if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                        {
                            if ((IS_CHAR_IN_ANY_CAR( sub_1262() )) AND (IS_CHAR_IN_ANY_CAR( l_U604 )))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar50 );
                                TASK_LEAVE_ANY_CAR( 0 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1396.93600000, 618.49350000, 32.50180000, 2, -2, 0.50000000 );
                                CLOSE_SEQUENCE_TASK( uVar50 );
                                TASK_PERFORM_SEQUENCE( l_U604, uVar50 );
                                CLEAR_SEQUENCE_TASK( uVar50 );
                                WAIT( 700 );
                                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                                {
                                    if (IS_CHAR_IN_ANY_CAR( sub_1262() ))
                                    {
                                        OPEN_SEQUENCE_TASK( ref uVar50 );
                                        TASK_LEAVE_ANY_CAR( 0 );
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1398.73000000, 619.75760000, 32.63310000, 2, -2, 0.50000000 );
                                        CLOSE_SEQUENCE_TASK( uVar50 );
                                        TASK_PERFORM_SEQUENCE( sub_1262(), uVar50 );
                                        CLEAR_SEQUENCE_TASK( uVar50 );
                                    }
                                }
                            }
                        }
                        l_U522 = 1;
                    }
                    if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                    {
                        if ((NOT (IS_CHAR_IN_ANY_CAR( sub_1262() ))) AND (NOT (IS_CHAR_IN_ANY_CAR( l_U604 ))))
                        {
                            WAIT( 500 );
                            if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                            {
                                sub_42650( ref l_U530, ref l_U531, ref l_U532 );
                                SET_CHAR_DUCKING( sub_1262(), 0 );
                                SET_CHAR_DUCKING( l_U604, 0 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U604 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1262() );
                                SET_CHAR_COORDINATES( sub_1262(), 1398.73000000, 619.75760000, 32.63310000 );
                                SET_CHAR_HEADING( sub_1262(), 99 );
                                TASK_LOOK_AT_CHAR( sub_1262(), l_U604, 60000, 0 );
                                SET_CHAR_COORDINATES( l_U604, 1396.93600000, 618.49350000, 32.50180000 );
                                SET_CHAR_HEADING( l_U604, 343 );
                                TASK_LOOK_AT_CHAR( l_U604, sub_1262(), 60000, 0 );
                                CREATE_CAM( 14, ref l_U530 );
                                SET_CAM_POS( l_U530, 1394.15200000, 621.56470000, 33.84042000 );
                                SET_CAM_ROT( l_U530, -2.52500200, 0.00000000, -122.54000000 );
                                SET_CAM_FOV( l_U530, 27.60004000 );
                                SET_CAM_ACTIVE( l_U530, 1 );
                                SET_CAM_PROPAGATE( l_U530, 1 );
                                sub_18384( "GM5_END1", ref l_U1035, 7, 1 );
                                l_U595 = 3;
                            }
                        }
                    }
                    break;
                    case 3:
                    if (NOT (sub_4399( l_U1035 )))
                    {
                        sub_42650( ref l_U530, ref l_U531, ref l_U532 );
                        CREATE_CAM( 14, ref l_U530 );
                        SET_CAM_POS( l_U530, 1397.94400000, 619.62590000, 33.96918000 );
                        SET_CAM_ROT( l_U530, 13.86156000, -0.00000000, -100.19450000 );
                        SET_CAM_FOV( l_U530, 64.19995000 );
                        SET_CAM_ACTIVE( l_U530, 1 );
                        SET_CAM_PROPAGATE( l_U530, 1 );
                        sub_18384( "GM5_END2", ref l_U1041, 7, 1 );
                        l_U595 = 4;
                    }
                    break;
                    case 4:
                    if (NOT (sub_4399( l_U1041 )))
                    {
                        sub_42650( ref l_U530, ref l_U531, ref l_U532 );
                        CREATE_CAM( 14, ref l_U530 );
                        SET_CAM_POS( l_U530, 1397.40000000, 619.52850000, 33.91737000 );
                        SET_CAM_ROT( l_U530, 5.39145400, 3.42257500, 179.91420000 );
                        SET_CAM_FOV( l_U530, 50.69999000 );
                        SET_CAM_ACTIVE( l_U530, 1 );
                        SET_CAM_PROPAGATE( l_U530, 1 );
                        sub_18384( "GM5_END3", ref l_U1047, 7, 1 );
                        l_U595 = 12;
                        GET_GAME_TIMER( ref l_U1102 );
                        l_U1102 += 7000;
                    }
                    break;
                    case 12:
                    GET_GAME_TIMER( ref iVar51 );
                    if (iVar51 > l_U1102)
                    {
                        sub_42650( ref l_U530, ref l_U531, ref l_U532 );
                        CREATE_CAM( 14, ref l_U530 );
                        SET_CAM_POS( l_U530, 1397.07200000, 620.92500000, 33.15335000 );
                        SET_CAM_ROT( l_U530, 19.05758000, 7.15293600, -157.08980000 );
                        SET_CAM_FOV( l_U530, 50.99998000 );
                        SET_CAM_ACTIVE( l_U530, 1 );
                        SET_CAM_PROPAGATE( l_U530, 1 );
                        l_U595 = 6;
                    }
                    break;
                    case 6:
                    if (NOT (sub_4399( l_U1047 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U604 )))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar52 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1390.83800000, 622.87100000, 35.82230000, 2, -2, 0.50000000 );
                            CLOSE_SEQUENCE_TASK( uVar52 );
                            TASK_PERFORM_SEQUENCE( l_U604, uVar52 );
                            CLEAR_SEQUENCE_TASK( uVar52 );
                        }
                        l_U595 = 2;
                    }
                    break;
                    case 2:
                    l_U595 = 13;
                    break;
                    case 13:
                    sub_25282( 1000 );
                    sub_25363( ref l_U1035 );
                    sub_25363( ref l_U1041 );
                    sub_25363( ref l_U1047 );
                    SWITCH_ROADS_BACK_TO_ORIGINAL( 1414.40400000, 598.30740000, 29.54837000, 1401.28800000, 639.85240000, 36.06623000 );
                    sub_25812( 13 );
                    if (NOT (IS_CHAR_INJURED( l_U604 )))
                    {
                        DELETE_CHAR( ref l_U604 );
                    }
                    sub_42650( ref l_U530, ref l_U531, ref l_U532 );
                    if (NOT (IS_CHAR_INJURED( sub_1262() )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1262() )))
                        {
                            SET_CHAR_COORDINATES( sub_1262(), 1398.42000000, 621.99670000, 32.87070000 );
                            SET_CHAR_HEADING( sub_1262(), 270.00000000 );
                        }
                    }
                    sub_52088();
                    sub_45124( ref l_U500, 1, 1, 1 );
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U780 );
                    CLEAR_PRINTS();
                    sub_9479( 1000 );
                    l_U541 = 26;
                    l_U825 = 1;
                    break;
                }
                break;
                case 24:
                sub_52216();
                REQUEST_MODEL( -583281407 );
                REQUEST_MODEL( l_U528 );
                REQUEST_MODEL( l_U529 );
                REQUEST_MODEL( -196312163 );
                REQUEST_MODEL( 1708842493 );
                REQUEST_MODEL( 467469635 );
                REQUEST_MODEL( -583281407 );
                REQUEST_MODEL( -2001451511 );
                while ((((((((NOT (HAS_MODEL_LOADED( -583281407 ))) || (NOT (HAS_MODEL_LOADED( l_U528 )))) || (NOT (HAS_MODEL_LOADED( l_U529 )))) || (NOT (HAS_MODEL_LOADED( -196312163 )))) || (NOT (HAS_MODEL_LOADED( 1708842493 )))) || (NOT (HAS_MODEL_LOADED( -583281407 )))) || (NOT (HAS_MODEL_LOADED( -2001451511 )))) || (NOT (HAS_MODEL_LOADED( 467469635 ))))
                {
                    WAIT( 0 );
                }
                REQUEST_ANIMS( "missgerry5" );
                while (NOT (HAVE_ANIMS_LOADED( "missgerry5" )))
                {
                    WAIT( 0 );
                }
                REQUEST_CAR_RECORDING( 917 );
                REQUEST_CAR_RECORDING( 918 );
                REQUEST_CAR_RECORDING( 919 );
                while (((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 917 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 918 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 919 ))))
                {
                    WAIT( 0 );
                }
                CLEAR_AREA( l_U735._fU0, l_U735._fU4, l_U735._fU8, 10.00000000, 1 );
                if (NOT (DOES_VEHICLE_EXIST( l_U781 )))
                {
                    CREATE_CAR( -583281407, l_U735._fU0, l_U735._fU4, l_U735._fU8, ref l_U781, 1 );
                    CHANGE_CAR_COLOUR( l_U781, l_U502, l_U503 );
                    if (IS_VEH_DRIVEABLE( l_U781 ))
                    {
                        ADD_UPSIDEDOWN_CAR_CHECK( l_U781 );
                        ADD_STUCK_CAR_CHECK( l_U781, 1.00000000, 10000 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                {
                    WARP_CHAR_INTO_CAR( sub_1262(), l_U781 );
                }
                if (NOT (DOES_CHAR_EXIST( l_U604 )))
                {
                    while (NOT (sub_14720( 13, ref l_U604, l_U735._fU0, l_U735._fU4, l_U735._fU8, 1.81730000 )))
                    {
                        WAIT( 0 );
                    }
                }
                if (((IS_VEH_DRIVEABLE( l_U781 )) AND (NOT (IS_CHAR_INJURED( sub_1262() )))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
                {
                    SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U604, 1 );
                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U604, 0 );
                    GIVE_WEAPON_TO_CHAR( l_U604, 14, 30000, 0 );
                    SET_CHAR_RELATIONSHIP( l_U604, 1, 0 );
                    SET_CHAR_DECISION_MAKER( l_U604, l_U638 );
                    SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U642, 0 );
                    SET_COMBAT_DECISION_MAKER( l_U604, l_U642 );
                    SET_CHAR_ACCURACY( l_U604, 35 );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U604, l_U781, 1 );
                }
                l_U541 = 7;
                break;
                case 25:
                sub_53352();
                break;
            }
            if (((DOES_CHAR_EXIST( l_U604 )) AND (l_U541 != 6)) AND (l_U541 != 2))
            {
                if (IS_CHAR_INJURED( l_U604 ))
                {
                    l_U539 = 3;
                    l_U826 = 1;
                }
            }
        }
        if (IS_KEYBOARD_KEY_PRESSED( 31 ))
        {
            while (IS_KEYBOARD_KEY_PRESSED( 31 ))
            {
                WAIT( 0 );
            }
            l_U825 = 1;
        }
        if (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            while (IS_KEYBOARD_KEY_PRESSED( 36 ))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_INJURED( sub_1262() )))
            {
                switch (l_U541)
                {
                    case 0:
                    if (NOT (IS_CHAR_INJURED( sub_1262() )))
                    {
                        SET_CHAR_COORDINATES( sub_1262(), -288.56350000, 1559.78000000, 20.39400000 );
                        SET_CHAR_HEADING( sub_1262(), 180.00000000 );
                        SET_CAM_BEHIND_PED( sub_1262() );
                    }
                    l_U541 = 1;
                    break;
                    case 1:
                    case 2:
                    sub_25282( 1000 );
                    if (NOT (IS_CHAR_INJURED( sub_1262() )))
                    {
                        SET_CHAR_COORDINATES( sub_1262(), -288.56350000, 1559.78000000, 20.39400000 );
                        SET_CHAR_HEADING( sub_1262(), 180.00000000 );
                        SET_CAM_BEHIND_PED( sub_1262() );
                    }
                    sub_9479( 1000 );
                    break;
                    case 4:
                    if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (IS_VEH_DRIVEABLE( l_U781 )))
                    {
                        WARP_CHAR_INTO_CAR( sub_1262(), l_U781 );
                    }
                    break;
                    case 6:
                    if (l_U512)
                    {
                        if (IS_VEH_DRIVEABLE( l_U781 ))
                        {
                            SET_CAR_HEADING( l_U781, 180.00000000 );
                            SET_CAR_COORDINATES( l_U781, 663.48490000, 726.68080000, 2.53620000 );
                        }
                    }
                    else if (IS_VEH_DRIVEABLE( l_U781 ))
                    {
                        SET_CAR_HEADING( l_U781, 271.06720000 );
                        SET_CAR_COORDINATES( l_U781, 610.97300000, 766.26380000, 2.68660000 );
                    }
                    break;
                    case 9:
                    if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_DEAD( l_U604 ))))
                    {
                        SET_CHAR_COORDINATES( sub_1262(), 615.25480000, 702.69360000, 8.85721900 );
                        SET_CHAR_COORDINATES( l_U604, 616.92630000, 731.71970000, 1.94640000 );
                    }
                    for ( iVar15 = 0; iVar15 <= 8; iVar15++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U606[iVar15] )))
                        {
                            DELETE_CHAR( ref l_U606[iVar15] );
                        }
                    }
                    break;
                    case 10:
                    if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_DEAD( l_U604 ))))
                    {
                        SET_CHAR_COORDINATES( sub_1262(), 658.41590000, 718.33340000, 14.78963000 );
                        SET_CHAR_COORDINATES( l_U604, 658.76340000, 717.32870000, 15.08770000 );
                    }
                    break;
                    case 12:
                    for ( iVar24 = 0; iVar24 <= 2; iVar24++ )
                    {
                        if (NOT (IS_CAR_DEAD( l_U542[iVar24]._fU52 )))
                        {
                            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U542[iVar24]._fU52 ))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U542[iVar24]._fU52 );
                            }
                        }
                    }
                    for ( iVar24 = 0; iVar24 <= 2; iVar24++ )
                    {
                        for ( iVar25 = 0; iVar25 <= 1; iVar25++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U542[iVar24]._fU0[iVar25] )))
                            {
                                SET_CHAR_HEALTH( l_U542[iVar24]._fU0[iVar25], 1 );
                                if (DOES_BLIP_EXIST( l_U542[iVar24]._fU12[iVar25] ))
                                {
                                    REMOVE_BLIP( l_U542[iVar24]._fU12[iVar25] );
                                }
                            }
                        }
                    }
                    break;
                    case 14:
                    for ( iVar25 = 0; iVar25 <= 4; iVar25++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U626[iVar25] )))
                        {
                            SET_CHAR_HEALTH( l_U626[iVar25], 1 );
                        }
                    }
                    break;
                    case 21:
                    if ((NOT (IS_CHAR_INJURED( l_U604 ))) AND (NOT (IS_CHAR_INJURED( sub_1262() ))))
                    {
                        SET_CHAR_COORDINATES( sub_1262(), l_U720._fU0 - 6.00000000, l_U720._fU4, l_U720._fU8 );
                    }
                    break;
                }
            }
        }
        if (l_U826)
        {
            sub_55361();
        }
        if (l_U825)
        {
            sub_59679();
        }
        WAIT( 0 );
    }
    return;
}

void sub_1148(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_1167();
    return;
}

void sub_1167()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U181._fU16[I]._fU0 = nil;
        StrCopy( ref l_U181._fU16[I]._fU4, "", 32 );
        l_U181._fU344[I] = 0;
    }
    return;
}

void sub_1262()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1311(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_1395( "\n PED NUMBER ", uParam0 );
    sub_1435( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_1395(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1435(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1484()
{
    sub_1493();
    return;
}

void sub_1493()
{
    int iVar2;

    iVar2 = 15;
    sub_1507( iVar2 );
    sub_2683( iVar2 );
    return;
}

void sub_1507(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_1551();
        sub_1712();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1820();
            sub_1859();
        }
    }
    sub_1935();
    sub_2036();
    uVar5 = sub_2149( uParam0 );
    sub_2590( uVar5, 0 );
    return;
}

void sub_1551()
{
    sub_1565( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1665();
    }
    return;
}

void sub_1565(int iParam0)
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

void sub_1665()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1712()
{
    sub_1721();
    return;
}

void sub_1721()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1820()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1859()
{
    sub_1868();
    return;
}

void sub_1868()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1935()
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

void sub_2036()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_2058();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_2058()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_2149(unknown uParam0)
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
    sub_2548( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_2548(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2590(int iParam0, boolean bParam1)
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

void sub_2683(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2692();
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
        sub_3467();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2692()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_2730( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_2730( 1, g_U569[I] )) != 0)
            {
                sub_3016( I );
            }
        }
    }
    if (NOT sub_3182())
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

int sub_2730(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_3016(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_3101( g_U569 - 1 );
    return;
}

void sub_3101(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_3182()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2730( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3467()
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

void sub_3594()
{
    int I;

    MARK_MODEL_AS_NO_LONGER_NEEDED( -583281407 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U528 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U529 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -196312163 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1708842493 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 467469635 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -583281407 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2001451511 );
    if (DOES_CHAR_EXIST( l_U604 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U604 )))
        {
            FORCE_PED_TO_LOAD_COVER( l_U604, 0 );
        }
    }
    REMOVE_ANIMS( "missgerry5" );
    SET_ZONE_NO_COPS( "ZCHISL2", 0 );
    REMOVE_CAR_RECORDING( 917 );
    REMOVE_CAR_RECORDING( 918 );
    REMOVE_CAR_RECORDING( 919 );
    if (NOT (IS_CHAR_INJURED( sub_1262() )))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1262(), 1 );
    }
    for ( I = 0; I <= 8; I++ )
    {
        if (DOES_CHAR_EXIST( l_U606[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U606[I] );
        }
    }
    for ( I = 0; I <= 5; I++ )
    {
        if (DOES_CHAR_EXIST( l_U616[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U616[I] );
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_CHAR_EXIST( l_U623[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U623[I] );
        }
    }
    for ( I = 0; I <= 4; I++ )
    {
        if (DOES_CHAR_EXIST( l_U626[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U626[I] );
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_CHAR_EXIST( l_U632[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U632[I] );
        }
    }
    for ( I = 0; I <= 0; I++ )
    {
        if (DOES_CHAR_EXIST( l_U635[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U635[I] );
        }
    }
    if (DOES_CHAR_EXIST( l_U603 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U603 );
    }
    if (DOES_CHAR_EXIST( l_U604 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U604 );
    }
    if (DOES_CHAR_EXIST( l_U637 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U637 );
    }
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U600 );
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U601 );
    REMOVE_DECISION_MAKER( l_U638 );
    REMOVE_DECISION_MAKER( l_U639 );
    REMOVE_DECISION_MAKER( l_U640 );
    REMOVE_DECISION_MAKER( l_U641 );
    REMOVE_DECISION_MAKER( l_U642 );
    REMOVE_DECISION_MAKER( l_U643 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    if (sub_4399( l_U993 ))
    {
        sub_4583( ref l_U993, 0 );
    }
    if (sub_4399( l_U999 ))
    {
        sub_4583( ref l_U999, 0 );
    }
    if (sub_4399( l_U1005 ))
    {
        sub_4583( ref l_U1005, 0 );
    }
    if (sub_4399( l_U1011 ))
    {
        sub_4583( ref l_U1011, 0 );
    }
    if (sub_4399( l_U1017 ))
    {
        sub_4583( ref l_U1017, 0 );
    }
    if (IS_VEH_DRIVEABLE( l_U781 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U781 );
    }
    if (IS_VEH_DRIVEABLE( l_U782 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U782 );
    }
    sub_4867();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CREATE_RANDOM_COPS( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_4399(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_4511( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_4511( "\n speech is not playing" );
    }
    return 0;
}

void sub_4511(unknown uParam0)
{
    return;
}

void sub_4583(int iParam0, unknown uParam1)
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

void sub_4867()
{
    if (l_U499)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U497 = 0;
    l_U496 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_5121(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_INJURED( sub_1262() )))
    {
        GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar12 );
    }
    if (DOES_VEHICLE_EXIST( uVar12 ))
    {
        if (IS_VEH_DRIVEABLE( uVar12 ))
        {
            if (IS_CAR_IN_AREA_3D( uVar12, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, 0 ))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( uVar12 )))
                {
                    SET_CAR_AS_MISSION_CAR( uVar12 );
                }
                CLEAR_AREA( uParam6._fU0, uParam6._fU4, uParam6._fU8, 7.00000000, 1 );
                SET_CAR_COORDINATES( uVar12, uParam6._fU0, uParam6._fU4, uParam6._fU8 );
                SET_CAR_HEADING( uVar12, uParam9 );
                GET_CAR_MODEL( uVar12, ref uVar13 );
                if (((NOT (IS_THIS_MODEL_A_BOAT( uVar13 ))) AND (NOT (IS_THIS_MODEL_A_HELI( uVar13 )))) AND (NOT (IS_THIS_MODEL_A_TRAIN( uVar13 ))))
                {
                    SET_CAR_ON_GROUND_PROPERLY( uVar12 );
                }
                if (IS_CAR_A_MISSION_CAR( uVar12 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar12 );
                }
            }
        }
    }
    return;
}

int sub_5409(unknown uParam0)
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
    sub_2548( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_8795()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_9434()
{
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    return;
}

void sub_9479(unknown uParam0)
{
    DISABLE_PAUSE_MENU( 1 );
    sub_9496();
    sub_9434();
    DO_SCREEN_FADE_IN( uParam0 );
    while (IS_SCREEN_FADING_IN())
    {
        DISABLE_PAUSE_MENU( 1 );
        WAIT( 0 );
    }
    DISABLE_PAUSE_MENU( 0 );
    return;
}

void sub_9496()
{
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    return;
}

void sub_9864(unknown uParam0, unknown uParam1, unknown uParam2)
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
    return sub_9922( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_9922(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_4511( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_4511( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_8795() )))
    {
        sub_4511( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_1262() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1262() ))))
    {
        sub_4511( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_4511( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_10437()) AND (NOT bParam11))
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
                sub_4511( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT sub_10437()) AND (NOT bParam11))
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
    sub_11809( uParam0, ref g_U91._fU176 );
    sub_13190( ref g_U91._fU160 );
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
        sub_1435( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_10437()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_10494())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_10494()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_8795() )))
    {
        sub_4511( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_4511( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_4511( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_4511( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_8795() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1262() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_1262(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_4511( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_1262() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_4511( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_4511( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_8795() )))
    {
        sub_4511( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_11809(int iParam0, unknown uParam1)
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

void sub_13190(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_13725(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_1262(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_4511( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_14100(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_14529(unknown uParam0)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        REMOVE_BLIP( (uParam0^) );
    }
    return;
}

int sub_14720(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (sub_14731( uParam0 ))
    {
        sub_14779( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5 );
        return 1;
    }
    sub_16435( uParam0 );
    return 0;
}

void sub_14731(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_5409( uParam0 ) );
}

void sub_14779(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_5409( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_14829( uParam0, (uParam1^) );
    return;
}

void sub_14829(unknown uParam0, unknown uParam1)
{
    sub_14841( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_14841(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_14935( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_15479( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_14935(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_15479(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_14935( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_14935( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_14935( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_14935( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_14935( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_14935( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_14935( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_14935( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_14935( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_14935( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_14935( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_14935( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_14935( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_16435(unknown uParam0)
{
    REQUEST_MODEL( sub_5409( uParam0 ) );
    return;
}

void sub_17182()
{
    int iVar2;

    if (IS_CHAR_INJURED( l_U604 ))
    {
        if (IS_CHAR_INJURED( l_U603 ))
        {
            l_U539 = 5;
            l_U826 = 1;
        }
        else
        {
            l_U539 = 3;
            l_U826 = 1;
        }
    }
    if (IS_CHAR_INJURED( l_U603 ))
    {
        if (IS_CHAR_INJURED( l_U604 ))
        {
            l_U539 = 5;
            l_U826 = 1;
        }
        else
        {
            l_U539 = 1;
            l_U826 = 1;
        }
    }
    if (NOT (IS_VEH_DRIVEABLE( l_U781 )))
    {
        if (NOT l_U963)
        {
            if (NOT (IS_CAR_DEAD( l_U781 )))
            {
                SET_ENGINE_HEALTH( l_U781, -1 );
            }
            GET_GAME_TIMER( ref l_U866 );
            l_U866 += 12000;
            l_U963 = 1;
        }
        if (IS_CAR_DEAD( l_U781 ))
        {
            if (sub_17431( l_U781 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U603 )))
                {
                    l_U539 = 2;
                    if (NOT (IS_CHAR_INJURED( l_U603 )))
                    {
                        SET_CHAR_DROWNS_IN_WATER( l_U603, 1 );
                    }
                    l_U826 = 1;
                }
            }
            else if (IS_CHAR_INJURED( l_U604 ))
            {
                l_U539 = 5;
                l_U826 = 1;
            }
            else
            {
                l_U539 = 1;
                l_U826 = 1;
            }
        }
    }
    else if (NOT (IS_CAR_DEAD( l_U781 )))
    {
        if (IS_VEH_DRIVEABLE( l_U781 ))
        {
            if ((sub_17671( l_U781 )) AND (NOT l_U963))
            {
                GET_GAME_TIMER( ref l_U866 );
                l_U866 += 12000;
                SET_ENGINE_HEALTH( l_U781, -1 );
                l_U963 = 1;
            }
            if ((sub_17843( l_U781 )) AND (NOT l_U963))
            {
                GET_GAME_TIMER( ref l_U866 );
                l_U866 += 12000;
                SET_ENGINE_HEALTH( l_U781, -1 );
                l_U963 = 1;
            }
        }
    }
    if (l_U963)
    {
        GET_GAME_TIMER( ref iVar2 );
        if (iVar2 > l_U866)
        {
            if (NOT (IS_CAR_DEAD( l_U781 )))
            {
                EXPLODE_CAR( l_U781, 1, 0 );
            }
        }
    }
    return;
}

int sub_17431(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if ((IS_CAR_DEAD( uParam0 )) AND (IS_CAR_IN_WATER( uParam0 )))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    return 0;
}

int sub_17671(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (CHECK_STUCK_TIMER( uParam0, 3, 60000 )))
        {
            if (NOT (CHECK_STUCK_TIMER( uParam0, 2, 30000 )))
            {
                if (NOT (CHECK_STUCK_TIMER( uParam0, 1, 40000 )))
                {
                    return 0;
                }
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;
}

int sub_17843(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (CHECK_STUCK_TIMER( uParam0, 0, 5000 )))
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
        return 0;
    }
    return 0;
}

void sub_18384(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_18407( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_18407(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_18461( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_18461(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_18483( iParam1 )))
    {
        return 0;
    }
    l_U181._fU384 = 0;
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
    sub_19163( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_18483(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_4511( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_4511( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_4511( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_19163(int iParam0, int iParam1)
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

void sub_19376(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;

    ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result );
    SET_ROUTE( Result, 1 );
    return Result;
}

void sub_19436()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (DOES_VEHICLE_EXIST( l_U781 ))
    {
        if (NOT (IS_CAR_DEAD( l_U781 )))
        {
            if ((IS_CAR_ON_FIRE( l_U781 )) AND (NOT l_U520))
            {
                GET_CAR_COORDINATES( l_U781, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_LEAVE_CAR_AND_FLEE( 0, l_U781, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U604, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U520 = 1;
            }
        }
    }
    return;
}

int sub_19944(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    if (IS_CHAR_IN_CAR( sub_1262(), uParam4 ))
    {
        if (DOES_BLIP_EXIST( (uParam1^) ))
        {
            REMOVE_BLIP( (uParam1^) );
        }
        if (NOT (DOES_BLIP_EXIST( (uParam2^) )))
        {
            if ((uParam2^) == nil)
            {
                PRINT_NOW( uParam8, 7500, 1 );
            }
            else if (l_U961)
            {
                PRINT_NOW( uParam11, 7500, 1 );
            }
            if (NOT l_U512)
            {
                (uParam2^) = sub_19376( uParam5 );
            }
            else
            {
                ADD_BLIP_FOR_COORD( uParam5._fU0, uParam5._fU4, uParam5._fU8, uParam2 );
            }
        }
        return 1;
    }
    else if (DOES_BLIP_EXIST( (uParam2^) ))
    {
        REMOVE_BLIP( (uParam2^) );
    }
    if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
    {
        ADD_BLIP_FOR_CAR( uParam4, uParam1 );
        SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
        if ((uParam2^) == nil)
        {
            (uParam2^) = sub_19376( uParam5 );
            REMOVE_BLIP( (uParam2^) );
            PRINT_NOW( uParam8, 7500, 1 );
        }
        else
        {
            PRINT_NOW( uParam10, 7500, 1 );
        }
    }
    return 0;
}

int sub_20311(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1262() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1262(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1262() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1262(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1262()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1262() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1262() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_8795() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_8795() )))
    {
        return 0;
    }
    return 1;
}

void sub_20819()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    unknown uVar6;
    float fVar7;

    if ((NOT (IS_CHAR_INJURED( l_U603 ))) AND (IS_VEH_DRIVEABLE( l_U781 )))
    {
        GET_CAR_SPEED_VECTOR( l_U781, ref uVar2, 1 );
        fVar5 = l_U1095._fU0 - uVar2._fU0;
        if (fVar5 > l_U1098)
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_LEAN_L" )))
            {
                if ((NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_LEAN_R" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_BRAKE" ))))
                {
                    OPEN_SEQUENCE_TASK( ref uVar6 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_LEAN_L", "missgerry5", 35.00000000, -2, 128 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_IN_CAR", "missgerry5", 35.00000000, -2, 144 );
                    CLOSE_SEQUENCE_TASK( uVar6 );
                    TASK_PERFORM_SEQUENCE( l_U603, uVar6 );
                    CLEAR_SEQUENCE_TASK( uVar6 );
                }
                else
                {
                    OPEN_SEQUENCE_TASK( ref uVar6 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_LEAN_L", "missgerry5", 1.00000000, -2, 128 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_IN_CAR", "missgerry5", 1.00000000, -2, 144 );
                    CLOSE_SEQUENCE_TASK( uVar6 );
                    TASK_PERFORM_SEQUENCE( l_U603, uVar6 );
                    CLEAR_SEQUENCE_TASK( uVar6 );
                }
            }
        }
        fVar5 = l_U1095._fU0 - uVar2._fU0;
        if (fVar5 > l_U1099)
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_LEAN_R" )))
            {
                if ((NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_LEAN_L" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_BRAKE" ))))
                {
                    OPEN_SEQUENCE_TASK( ref uVar6 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_LEAN_R", "missgerry5", 35.00000000, -2, 128 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_IN_CAR", "missgerry5", 35.00000000, -2, 144 );
                    CLOSE_SEQUENCE_TASK( uVar6 );
                    TASK_PERFORM_SEQUENCE( l_U603, uVar6 );
                    CLEAR_SEQUENCE_TASK( uVar6 );
                }
                else
                {
                    OPEN_SEQUENCE_TASK( ref uVar6 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_LEAN_R", "missgerry5", 1.00000000, -2, 128 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_IN_CAR", "missgerry5", 1.00000000, -2, 144 );
                    CLOSE_SEQUENCE_TASK( uVar6 );
                    TASK_PERFORM_SEQUENCE( l_U603, uVar6 );
                    CLEAR_SEQUENCE_TASK( uVar6 );
                }
            }
        }
        fVar5 = l_U1095._fU4 - uVar2._fU4;
        if (fVar5 > l_U1100)
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_BRAKE" )))
            {
                if ((NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_LEAN_L" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_LEAN_R" ))))
                {
                    OPEN_SEQUENCE_TASK( ref uVar6 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_BRAKE", "missgerry5", 35.00000000, -2, 128 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_IN_CAR", "missgerry5", 35.00000000, -2, 144 );
                    CLOSE_SEQUENCE_TASK( uVar6 );
                    TASK_PERFORM_SEQUENCE( l_U603, uVar6 );
                    CLEAR_SEQUENCE_TASK( uVar6 );
                }
                else
                {
                    OPEN_SEQUENCE_TASK( ref uVar6 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_BRAKE", "missgerry5", 1.00000000, -2, 128 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_IN_CAR", "missgerry5", 1.00000000, -2, 144 );
                    CLOSE_SEQUENCE_TASK( uVar6 );
                    TASK_PERFORM_SEQUENCE( l_U603, uVar6 );
                    CLEAR_SEQUENCE_TASK( uVar6 );
                }
            }
        }
        fVar5 = l_U1095._fU4 - uVar2._fU4;
        if (fVar5 > l_U1101)
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_BRAKE" )))
            {
                OPEN_SEQUENCE_TASK( ref uVar6 );
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_BRAKE", "missgerry5", 35.00000000, -2, 128 );
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_IN_CAR", "missgerry5", 35.00000000, -2, 144 );
                CLOSE_SEQUENCE_TASK( uVar6 );
                TASK_PERFORM_SEQUENCE( l_U603, uVar6 );
                CLEAR_SEQUENCE_TASK( uVar6 );
            }
        }
        if (uVar2._fU0 < -2.50000000)
        {
            if (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_LEAN_L" ))
            {
                if ((NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_LEAN_R" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_BRAKE" ))))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U603, "missgerry5", "GIRL_TIED_LEAN_L", ref fVar7 );
                    if ((fVar7 < 0.39000000) AND (fVar7 > 0.29000000))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U603 )))
                        {
                            SET_CHAR_ANIM_CURRENT_TIME( l_U603, "missgerry5", "GIRL_TIED_LEAN_L", 0.31000000 );
                        }
                    }
                }
            }
            else if ((NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_LEAN_R" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_BRAKE" ))))
            {
                OPEN_SEQUENCE_TASK( ref uVar6 );
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_LEAN_L", "missgerry5", 35.00000000, -2, 128 );
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_IN_CAR", "missgerry5", 35.00000000, -2, 144 );
                CLOSE_SEQUENCE_TASK( uVar6 );
                TASK_PERFORM_SEQUENCE( l_U603, uVar6 );
                CLEAR_SEQUENCE_TASK( uVar6 );
            }
        }
        if (uVar2._fU4 < -10.00000000)
        {
            if (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_BRAKE" ))
            {
                if ((NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_LEAN_R" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_LEAN_L" ))))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U603, "missgerry5", "GIRL_TIED_BRAKE", ref fVar7 );
                    if ((fVar7 < 0.39000000) AND (fVar7 > 0.29000000))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U603 )))
                        {
                            SET_CHAR_ANIM_CURRENT_TIME( l_U603, "missgerry5", "GIRL_TIED_BRAKE", 0.34000000 );
                        }
                    }
                }
            }
            else if ((NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_LEAN_R" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_LEAN_L" ))))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U603, "missgerry5", "GIRL_TIED_BRAKE" )))
                {
                    OPEN_SEQUENCE_TASK( ref uVar6 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_BRAKE", "missgerry5", 35.00000000, -2, 128 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GIRL_TIED_IN_CAR", "missgerry5", 35.00000000, -2, 144 );
                    CLOSE_SEQUENCE_TASK( uVar6 );
                    TASK_PERFORM_SEQUENCE( l_U603, uVar6 );
                    CLEAR_SEQUENCE_TASK( uVar6 );
                }
            }
        }
        l_U1095 = {uVar2};
    }
    return;
}

void sub_23571()
{
    unknown uVar2;
    unknown uVar3;

    if ((((IS_VEH_DRIVEABLE( l_U781 )) AND (NOT (IS_CHAR_INJURED( sub_1262() )))) AND (NOT (IS_CHAR_INJURED( l_U604 )))) AND (NOT (IS_CHAR_INJURED( l_U603 ))))
    {
        if ((IS_CHAR_SITTING_IN_CAR( sub_1262(), l_U781 )) AND (IS_CHAR_SITTING_IN_CAR( l_U604, l_U781 )))
        {
            if (NOT l_U961)
            {
                if ((NOT (sub_4399( l_U1017 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                {
                    PRINT_NOW( "TASK_3", 7500, 3 );
                    WAIT( 100 );
                    l_U961 = 1;
                }
            }
            if ((NOT l_U962) AND (l_U961))
            {
                if ((NOT (sub_4399( l_U1017 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                {
                    if (g_U64943 == 0)
                    {
                        sub_18384( "GM5_B1V1", ref l_U993, 7, 1 );
                        g_U64943++;
                        l_U1090 = 1;
                    }
                    else if (g_U64943 == 1)
                    {
                        sub_18384( "GM5_B1V2", ref l_U993, 7, 1 );
                        g_U64943++;
                        l_U1090 = 0;
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U604 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U604, "LISTEN_TO_RADIO", 0, 0, 0 );
                    };;;
                    l_U962 = 1;
                }
            }
            else if (((l_U1089) AND (g_U64943 <= 2)) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
            {
                if (l_U1090)
                {
                    sub_24041( "GM5_B1V1", ref l_U993, 7, 1 );
                }
                else
                {
                    sub_24041( "GM5_B1V2", ref l_U993, 7, 1 );
                }
                l_U1089 = 0;
            }
            if (g_U64943 <= 2)
            {
                uVar2 = sub_24208( l_U993 );
                if (l_U1090)
                {
                    switch (uVar2)
                    {
                        case 2:
                        case 4:
                        case 6:
                        case 10:
                        case 12:
                        if (NOT l_U1093)
                        {
                            OPEN_SEQUENCE_TASK( ref uVar3 );
                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_tied_in_car_shout", "missgerry5", 32.00000000, -2, 128 );
                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_tied_in_car", "missgerry5", 32.00000000, -2, 144 );
                            CLOSE_SEQUENCE_TASK( uVar3 );
                            TASK_PERFORM_SEQUENCE( l_U603, uVar3 );
                            CLEAR_SEQUENCE_TASK( uVar3 );
                            l_U1093 = 1;
                        }
                        break;
                        default:
                        if (l_U1093)
                        {
                            l_U1093 = 0;
                        }
                        break;
                    }
                }
                else
                {
                    switch (uVar2)
                    {
                        case 1:
                        case 11:
                        case 18:
                        if (NOT l_U1093)
                        {
                            OPEN_SEQUENCE_TASK( ref uVar3 );
                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_tied_in_car_shout", "missgerry5", 32.00000000, -2, 128 );
                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_tied_in_car", "missgerry5", 32.00000000, -2, 144 );
                            CLOSE_SEQUENCE_TASK( uVar3 );
                            TASK_PERFORM_SEQUENCE( l_U603, uVar3 );
                            CLEAR_SEQUENCE_TASK( uVar3 );
                            l_U1093 = 1;
                        }
                        break;
                        default:
                        if (l_U1093)
                        {
                            l_U1093 = 0;
                        }
                        break;
                    }
                }
            }
        }
        else if ((sub_4399( l_U993 )) AND (NOT l_U1089))
        {
            sub_24781( ref l_U993 );
            l_U1089 = 1;
        }
    }
    return;
}

void sub_24041(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_24064( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_24064(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_18461( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_24208(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_4399( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

int sub_24781(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_4511( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_4511( "\n CONVERSATION PAUSED AT LINE " );
            sub_24937( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_4511( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_4511( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_4511( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_24937(unknown uParam0)
{
    return;
}

void sub_25282(unknown uParam0)
{
    DISABLE_PAUSE_MENU( 1 );
    sub_9496();
    sub_9434();
    DO_SCREEN_FADE_OUT( uParam0 );
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    DISABLE_PAUSE_MENU( 0 );
    return;
}

void sub_25363(unknown uParam0)
{
    if (sub_4399( (uParam0^) ))
    {
        sub_4583( uParam0, 0 );
    }
    return;
}

void sub_25812(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_5409( uParam0 ) );
    return;
}

void sub_28107(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    CREATE_CHAR( 8, uParam5, uParam1, uParam2, uParam3, uParam0, 1 );
    SET_CHAR_HEADING( (uParam0^), uParam4 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^) );
    GIVE_WEAPON_TO_CHAR( (uParam0^), 13, 30000, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 24 );
    SET_CHAR_DECISION_MAKER( (uParam0^), uParam6 );
    SET_COMBAT_DECISION_MAKER( (uParam0^), uParam7 );
    SET_CURRENT_CHAR_WEAPON( (uParam0^), 13, 1 );
    return;
}

void sub_28998()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        if (DOES_BLIP_EXIST( l_U747[I] ))
        {
            if (IS_CHAR_INJURED( l_U606[I] ))
            {
                REMOVE_BLIP( l_U747[I] );
            }
        }
    }
    for ( I = 0; I <= 5; I++ )
    {
        if (DOES_BLIP_EXIST( l_U757[I] ))
        {
            if (IS_CHAR_INJURED( l_U616[I] ))
            {
                REMOVE_BLIP( l_U757[I] );
            }
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_BLIP_EXIST( l_U764[I] ))
        {
            if (IS_CHAR_INJURED( l_U623[I] ))
            {
                REMOVE_BLIP( l_U764[I] );
            }
        }
    }
    for ( I = 0; I <= 4; I++ )
    {
        if (DOES_BLIP_EXIST( l_U767[I] ))
        {
            if (IS_CHAR_INJURED( l_U626[I] ))
            {
                REMOVE_BLIP( l_U767[I] );
            }
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_BLIP_EXIST( l_U773[I] ))
        {
            if (IS_CHAR_INJURED( l_U632[I] ))
            {
                REMOVE_BLIP( l_U773[I] );
            }
        }
    }
    for ( I = 0; I <= 0; I++ )
    {
        if (DOES_BLIP_EXIST( l_U776[I] ))
        {
            if (IS_CHAR_INJURED( l_U635[I] ))
            {
                REMOVE_BLIP( l_U776[I] );
            }
        }
    }
    return;
}

void sub_30826()
{
    unknown uVar2;
    int iVar3;
    int iVar4;
    int I;
    unknown uVar6;
    unknown uVar7;
    int iVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;

    iVar4 = 0;
    switch (l_U537)
    {
        case 0:
        for ( I = 0; I <= 8; I++ )
        {
            if (IS_CHAR_INJURED( l_U606[I] ))
            {
                iVar4++;
            }
        }
        if (iVar4 > 2)
        {
            if (sub_31002( 641.79490000 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U604 )))
                {
                    sub_18384( "GM5_FOLLOW", ref l_U1005, 7, 1 );
                    l_U794 = {641.79490000, 726.90060000, 1.94640000};
                    TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U604, l_U794, 100.00000000, 0.00000000, 120000, l_U794, 3.00000000 );
                }
                l_U537 = 1;
            }
        }
        break;
        case 1:
        if (NOT l_U841)
        {
            if (NOT (IS_CHAR_INJURED( l_U604 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U604, 29, ref iVar3 );
                if (iVar3 == 7)
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U604, 0 );
                    SET_CHAR_DECISION_MAKER( l_U604, l_U640 );
                    SET_COMBAT_DECISION_MAKER( l_U604, l_U642 );
                    SET_CHAR_ACCURACY( l_U604, 35 );
                    l_U841 = 1;
                }
            }
        }
        for ( I = 0; I <= 8; I++ )
        {
            if (IS_CHAR_INJURED( l_U606[I] ))
            {
                iVar4++;
            }
        }
        if (iVar4 > 4)
        {
            if (sub_31002( 622.46950000 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U604 )))
                {
                    l_U794 = {622.46950000, 732.72160000, 1.94640000};
                    sub_18384( "GM5_FOLLOW", ref l_U1005, 7, 1 );
                    TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U604, l_U794, 180.00000000, 0.00000000, 120000, l_U794, 3.00000000 );
                }
                l_U537 = 2;
            }
        }
        break;
        case 2:
        for ( I = 0; I <= 8; I++ )
        {
            if (IS_CHAR_INJURED( l_U606[I] ))
            {
                iVar4++;
            }
        }
        if (iVar4 == 9)
        {
            if (NOT (IS_CHAR_INJURED( l_U604 )))
            {
                sub_18384( "GM5_GOONS", ref l_U1005, 7, 1 );
                l_U794 = {615.35270000, 699.61970000, 9.86330000};
                TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U604, l_U794, 180.00000000, 0.00000000, 120000, l_U794, 4.00000000 );
            }
            l_U537 = 3;
        }
        break;
        case 3:
        for ( I = 0; I <= 1; I++ )
        {
            if (IS_CHAR_INJURED( l_U632[I] ))
            {
                iVar4++;
            }
        }
        if ((iVar4 == 2) AND (l_U837))
        {
            if (NOT (IS_CHAR_INJURED( l_U604 )))
            {
                sub_18384( "GM5_UP", ref l_U993, 7, 1 );
                l_U794 = {639.72110000, 702.25800000, 15.08770000};
                TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U604, l_U794, 270.00000000, 0.00000000, 120000, l_U794, 8.00000000 );
            }
            l_U537 = 4;
        }
        break;
        case 4:
        for ( I = 0; I <= 5; I++ )
        {
            if (IS_CHAR_INJURED( l_U616[I] ))
            {
                iVar4++;
            }
        }
        if (iVar4 > 1)
        {
            if (NOT (IS_CHAR_INJURED( l_U604 )))
            {
                sub_18384( "GM5_RAILING", ref l_U993, 7, 1 );
                l_U794 = {649.54570000, 702.19450000, 15.08770000};
                TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U604, l_U794, 270.00000000, 0.00000000, 120000, l_U794, 3.00000000 );
            }
            l_U537 = 7;
        }
        break;
        case 7:
        for ( I = 0; I <= 5; I++ )
        {
            if (IS_CHAR_INJURED( l_U616[I] ))
            {
                iVar4++;
            }
        }
        if (iVar4 == 6)
        {
            if (NOT (IS_CHAR_INJURED( l_U604 )))
            {
                sub_18384( "GM5_FOLLOW", ref l_U1005, 7, 1 );
                if (((NOT (DOES_BLIP_EXIST( l_U742 ))) AND (NOT (IS_CHAR_INJURED( l_U604 )))) AND (NOT l_U838))
                {
                    ADD_BLIP_FOR_CHAR( l_U604, ref l_U742 );
                    SET_BLIP_AS_FRIENDLY( l_U742, 1 );
                }
                OPEN_SEQUENCE_TASK( ref uVar6 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 657.09980000, 737.76620000, 14.08740000, 3, -2, 0.50000000 );
                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, 657.09980000, 737.76620000, 14.08740000, 120000 );
                CLOSE_SEQUENCE_TASK( uVar6 );
                TASK_PERFORM_SEQUENCE( l_U604, uVar6 );
                CLEAR_SEQUENCE_TASK( uVar6 );
            }
            l_U537 = 8;
        }
        break;
        case 8:
        if (l_U838)
        {
            for ( I = 0; I <= 1; I++ )
            {
                if (IS_CHAR_INJURED( l_U623[I] ))
                {
                    iVar4++;
                }
            }
            if (iVar4 == 2)
            {
                if (NOT (IS_CHAR_INJURED( l_U604 )))
                {
                    OPEN_SEQUENCE_TASK( ref uVar7 );
                    TASK_TOGGLE_DUCK( 0, 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 626.28670000, 762.04910000, 15.08770000, 4, -2, 0.40000000 );
                    TASK_ACHIEVE_HEADING( 0, 270.00000000 );
                    TASK_PLAY_ANIM( 0, "lean_balcony_loopd", "missgerry5", 8.00000000, 0, 0, 0, 0, -2 );
                    TASK_PLAY_ANIM( 0, "lean_balcony_outro", "missgerry5", 8.00000000, 0, 0, 0, 0, -2 );
                    CLOSE_SEQUENCE_TASK( uVar7 );
                    SET_CHAR_DECISION_MAKER( l_U604, l_U638 );
                    TASK_PERFORM_SEQUENCE( l_U604, uVar7 );
                    sub_18384( "GM5_SPLIT", ref l_U1005, 7, 1 );
                    ADD_BLIP_FOR_COORD( l_U726._fU0, l_U726._fU4, l_U726._fU8, ref l_U745 );
                    if (DOES_BLIP_EXIST( l_U742 ))
                    {
                        REMOVE_BLIP( l_U742 );
                    }
                    l_U537 = 12;
                }
            }
        }
        break;
        case 12:
        if (((NOT l_U828) AND (NOT (sub_4399( l_U1005 )))) AND (NOT l_U836))
        {
            PRINT_NOW( "TASK_9", 7500, 3 );
            l_U828 = 1;
        }
        if ((l_U840) AND (NOT (sub_4399( l_U1011 ))))
        {
            if (NOT (IS_CHAR_INJURED( l_U604 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U604, 29, ref iVar3 );
                if (iVar3 == 7)
                {
                    l_U537 = 13;
                }
            }
        }
        break;
        case 13:
        switch (l_U597)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U604 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U604, 1 );
                GIVE_WEAPON_TO_CHAR( l_U604, 5, 7, 1 );
                SET_CURRENT_CHAR_WEAPON( l_U604, 5, 1 );
                SET_CHAR_DECISION_MAKER( l_U604, l_U640 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -2001451511 );
                SET_CHAR_PROOFS( l_U604, 0, 1, 0, 0, 0 );
                OPEN_SEQUENCE_TASK( ref uVar9 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 627.26770000, 771.62750000, 14.08740000 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                TASK_CHAR_SLIDE_TO_COORD( 0, 627.26770000, 771.62750000, 14.08740000, 270, 3 );
                TASK_ACHIEVE_HEADING( 0, 270.00000000 );
                CLOSE_SEQUENCE_TASK( uVar9 );
                TASK_PERFORM_SEQUENCE( l_U604, uVar9 );
                CLEAR_SEQUENCE_TASK( uVar9 );
                l_U597 = 1;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U604 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U604, 29, ref iVar3 );
                if (iVar3 == 7)
                {
                    TASK_SHOOT_AT_COORD( l_U604, 640.82100000, 776.86210000, 1.76020000, 5000, 2 );
                    GET_GAME_TIMER( ref l_U867 );
                    sub_18384( "GM5_THROW", ref l_U1005, 7, 1 );
                    l_U867 += 3000;
                    l_U597 = 4;
                }
            }
            break;
            case 4:
            GET_GAME_TIMER( ref iVar8 );
            if (iVar8 > l_U867)
            {
                if (NOT (IS_CHAR_INJURED( l_U604 )))
                {
                    l_U794 = {626.23220000, 771.39970000, 15.08770000};
                    OPEN_SEQUENCE_TASK( ref uVar10 );
                    TASK_SET_CHAR_DECISION_MAKER( 0, l_U639 );
                    TASK_GUARD_SPHERE_DEFENSIVE_AREA( 0, l_U794, 270.00000000, 9.00000000, 120000, l_U794, 3.00000000 );
                    CLOSE_SEQUENCE_TASK( uVar10 );
                    if (HAS_CHAR_GOT_WEAPON( l_U604, 14 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U604, 14, 1 );
                    }
                    else
                    {
                        GIVE_WEAPON_TO_CHAR( l_U604, 14, 500, 1 );
                    }
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U604, 0 );
                    TASK_PERFORM_SEQUENCE( l_U604, uVar10 );
                    CLEAR_SEQUENCE_TASK( uVar10 );
                    l_U597 = 5;
                }
            }
            break;
            case 5: break;
        }
        break;
        case 9:
        for ( I = 0; I <= 4; I++ )
        {
            if (IS_CHAR_INJURED( l_U626[I] ))
            {
                iVar4++;
            }
        }
        if (iVar4 > 4)
        {
            CLEAR_PRINTS();
            if (NOT (DOES_BLIP_EXIST( l_U742 )))
            {
                ADD_BLIP_FOR_CHAR( l_U604, ref l_U742 );
                SET_BLIP_AS_FRIENDLY( l_U742, 1 );
            }
            sub_18384( "GM5_FOLLOW", ref l_U1005, 7, 1 );
            l_U794 = {607.31790000, 783.59740000, 16.11630000};
            REMOVE_BLIP( l_U745 );
            OPEN_SEQUENCE_TASK( ref uVar2 );
            TASK_TOGGLE_DUCK( 0, 0 );
            TASK_SET_CHAR_DECISION_MAKER( 0, l_U638 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 607.31790000, 783.59740000, 16.11630000, 4, -2, 0.10000000 );
            TASK_SET_CHAR_DECISION_MAKER( 0, l_U639 );
            TASK_GUARD_SPHERE_DEFENSIVE_AREA( 0, l_U794, 270.00000000, 2.00000000, 120000, l_U794, 1.00000000 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            if (NOT (IS_CHAR_INJURED( l_U604 )))
            {
                if (HAS_CHAR_GOT_WEAPON( l_U604, 14 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U604, 14, 1 );
                }
                else
                {
                    GIVE_WEAPON_TO_CHAR( l_U604, 14, 500, 1 );
                }
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U604, 0 );
                TASK_PERFORM_SEQUENCE( l_U604, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
            }
            SETTIMERB( 0 );
            l_U537 = 11;
        }
        break;
        case 11:
        if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
        {
            GET_SCRIPT_TASK_STATUS( l_U604, 29, ref iVar3 );
            if (iVar3 == 1)
            {
                GET_SEQUENCE_PROGRESS( l_U604, ref iVar11 );
            }
            if ((TIMERB() > 20000) AND (iVar11 == 4))
            {
                OPEN_SEQUENCE_TASK( ref uVar12 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_1262() );
                TASK_LOOK_AT_CHAR( 0, sub_1262(), 20000, 0 );
                TASK_ACHIEVE_HEADING( 0, 0 );
                TASK_GUARD_SPHERE_DEFENSIVE_AREA( 0, l_U794, 0.00000000, 2.00000000, 120000, l_U794, 1.00000000 );
                CLOSE_SEQUENCE_TASK( uVar12 );
                SET_CHAR_DECISION_MAKER( l_U604, l_U638 );
                TASK_PERFORM_SEQUENCE( l_U604, uVar12 );
                sub_18384( "GM5_FOLLOW", ref l_U1083, 7, 1 );
                l_U537 = 10;
            }
        }
        break;
    }
    return;
}

int sub_31002(float fParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    boolean bVar7;

    iVar6 = 0;
    bVar7 = true;
    while (iVar6 < 8)
    {
        if (NOT (IS_CHAR_INJURED( l_U606[iVar6] )))
        {
            GET_CHAR_COORDINATES( l_U606[iVar6], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            if (uVar3._fU0 > fParam0)
            {
                bVar7 = false;
                iVar6 = 9;
            }
        }
        iVar6++;
    }
    if (bVar7)
    {
        return 1;
        break;
    }
    return 0;
}

void sub_35685()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT l_U843)
    {
        if ((IS_CHAR_DEAD( l_U623[0] )) AND (DOES_CHAR_EXIST( l_U623[0] )))
        {
            GET_DEAD_CHAR_PICKUP_COORDS( l_U623[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            GET_SAFE_PICKUP_COORDS( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            if (GET_GROUND_Z_FOR_3D_COORD( uVar5._fU0, uVar5._fU4, uVar5._fU8 + 1.00000000, ref uVar8 ))
            {
                CREATE_PICKUP_WITH_AMMO( 993473937, 3, 3, uVar5._fU0, uVar5._fU4, uVar8 - 0.50000000, ref l_U787 );
            }
            else
            {
                CREATE_PICKUP_WITH_AMMO( 993473937, 3, 3, uVar5._fU0, uVar5._fU4, uVar5._fU8, ref l_U787 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( 993473937 );
            l_U843 = 1;
        }
    }
    return;
}

int sub_40058()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_40385()
{
    REQUEST_ANIMS( "gestures@niko" );
    while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
    {
        WAIT( 0 );
    }
    return;
}

void sub_40606(unknown uParam0, boolean bParam1)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    SET_WIDESCREEN_BORDERS( 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (bParam1)
    {
        SET_USE_HIGHDOF( 1 );
    }
    sub_40656();
    CLEAR_PRINTS();
    return;
}

void sub_40656()
{
    return sub_40667( 1, 1 );
}

int sub_40667(boolean bParam0, unknown uParam1)
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

void sub_42650(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (DOES_CAM_EXIST( (uParam2^) ))
    {
        SET_CAM_PROPAGATE( (uParam2^), 0 );
        SET_CAM_ACTIVE( (uParam2^), 0 );
        DESTROY_CAM( (uParam2^) );
    }
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        SET_CAM_PROPAGATE( (uParam0^), 0 );
        SET_CAM_ACTIVE( (uParam0^), 0 );
        DESTROY_CAM( (uParam0^) );
    }
    if (DOES_CAM_EXIST( (uParam1^) ))
    {
        SET_CAM_PROPAGATE( (uParam1^), 0 );
        SET_CAM_ACTIVE( (uParam1^), 0 );
        DESTROY_CAM( (uParam1^) );
    }
    return;
}

void sub_45124(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3)
{
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    if (bParam2)
    {
        SET_PLAYER_CONTROL( sub_8795(), 1 );
    }
    if (bParam1)
    {
        SET_USE_HIGHDOF( 0 );
    }
    if (bParam3)
    {
        SET_CAM_BEHIND_PED( sub_1262() );
    }
    sub_45196();
    SET_WIDESCREEN_BORDERS( 0 );
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_45196()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_47279()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_47653(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if (IS_GROUP_MEMBER( uParam2, sub_47279() ))
    {
        if (sub_47688( uParam2, sub_1262() ))
        {
            if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
            {
                if (DOES_BLIP_EXIST( (uParam0^) ))
                {
                    REMOVE_BLIP( (uParam0^) );
                }
                if ((uParam1^) == nil)
                {
                    PRINT_NOW( uParam6, 7500, 1 );
                    PRINTSTRING( "Go to your vDestination. (DO_BLIPS_PED)\n" );
                }
                else
                {
                    PRINT_NOW( uParam8, 7500, 1 );
                    PRINTSTRING( "Keep going to your vDestination. (DO_BLIPS_PED)\n" );
                }
                (uParam1^) = sub_19376( uParam3 );
            }
            return 1;
        }
        return 1;
    }
    else if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        REMOVE_BLIP( (uParam1^) );
    }
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        ADD_BLIP_FOR_CHAR( uParam2, uParam0 );
        SET_BLIP_AS_FRIENDLY( (uParam0^), 1 );
        PRINT_NOW( uParam7, 7500, 1 );
        PRINTSTRING( "Left your buddy behind. (DO_BLIPS_PED)\n" );
    }
    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_1262(), uParam2, 20.00000000, 20.00000000, 0 ))
    {
        SET_GROUP_MEMBER( sub_47279(), uParam2 );
    }
    return 0;
}

int sub_47688(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (IS_CHAR_SITTING_IN_ANY_CAR( uParam1 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar4 );
        if (IS_CHAR_SITTING_IN_CAR( uParam0, uVar4 ))
        {
            return 1;
        }
        return 0;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
    {
        return 1;
    }
    return 0;
}

void sub_48320()
{
    int iVar2;

    if ((NOT (IS_CHAR_INJURED( sub_1262() ))) AND (NOT (IS_CHAR_INJURED( l_U604 ))))
    {
        if (IS_GROUP_MEMBER( l_U604, sub_47279() ))
        {
            if ((NOT l_U1092) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
            {
                GET_GAME_TIMER( ref iVar2 );
                if (iVar2 > l_U501)
                {
                    g_U64944++;
                    if (NOT g_U15654[48])
                    {
                        sub_18384( "GM5_B2V1", ref l_U993, 7, 1 );
                    }
                    else
                    {
                        sub_18384( "GM5_B2V2", ref l_U993, 7, 1 );
                    }
                    l_U1092 = 1;
                }
            }
            if ((l_U1089) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
            {
                if (NOT g_U15654[48])
                {
                    sub_24041( "PM1_B1AV1", ref l_U993, 7, 1 );
                }
                else
                {
                    sub_24041( "PM1_B1AV2", ref l_U993, 7, 1 );
                }
                l_U1089 = 0;
            }
        }
        else if ((sub_4399( l_U993 )) AND (NOT l_U1089))
        {
            sub_24781( ref l_U993 );
            l_U1089 = 1;
        }
    }
    return;
}

void sub_52088()
{
    if (HAVE_ANIMS_LOADED( "gestures@niko" ))
    {
        REMOVE_ANIMS( "gestures@niko" );
    }
    return;
}

void sub_52216()
{
    if (DOES_BLIP_EXIST( l_U738 ))
    {
        REMOVE_BLIP( l_U738 );
    }
    if (DOES_BLIP_EXIST( l_U739 ))
    {
        REMOVE_BLIP( l_U739 );
    }
    if (DOES_BLIP_EXIST( l_U740 ))
    {
        REMOVE_BLIP( l_U740 );
    }
    if (DOES_BLIP_EXIST( l_U741 ))
    {
        REMOVE_BLIP( l_U741 );
    }
    if (DOES_BLIP_EXIST( l_U742 ))
    {
        REMOVE_BLIP( l_U742 );
    }
    if (DOES_BLIP_EXIST( l_U743 ))
    {
        REMOVE_BLIP( l_U743 );
    }
    if (DOES_BLIP_EXIST( l_U744 ))
    {
        REMOVE_BLIP( l_U744 );
    }
    if (DOES_BLIP_EXIST( l_U744 ))
    {
        REMOVE_BLIP( l_U744 );
    }
    if (DOES_BLIP_EXIST( l_U745 ))
    {
        REMOVE_BLIP( l_U745 );
    }
    if (DOES_BLIP_EXIST( l_U746 ))
    {
        REMOVE_BLIP( l_U746 );
    }
    return;
}

void sub_53352()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if ((NOT (IS_CHAR_DEAD( l_U606[7] ))) AND (NOT (IS_CHAR_INJURED( sub_1262() ))))
    {
        switch (l_U850[0])
        {
            case 0:
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U606[7], sub_1262(), 0 ))
            {
                SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U606[7], 10000, 60000, 5, -1, 0, 0, 3.00000000, 0, 0, 0, 0, 0, 0 );
                l_U850[0] = 1;
            }
            break;
            default:
        }
        GET_CHAR_VELOCITY( l_U606[7], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (uVar2._fU8 < -5.00000000)
        {
            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U606[7], "PANIC", "PAIN_VOICE", 1, 1, 0 );
        }
    }
    if ((NOT (IS_CHAR_DEAD( l_U606[8] ))) AND (NOT (IS_CHAR_INJURED( sub_1262() ))))
    {
        switch (l_U850[1])
        {
            case 0:
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U606[8], sub_1262(), 0 ))
            {
                SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U606[8], 10000, 60000, 5, 0, -1, 0, 3.00000000, 0, 0, 0, 0, 0, 0 );
                l_U850[1] = 1;
            }
            break;
            default:
        }
        GET_CHAR_VELOCITY( l_U606[8], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (uVar2._fU8 < -5.00000000)
        {
            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U606[8], "PANIC", "PAIN_VOICE", 1, 1, 0 );
        }
    }
    if ((NOT (IS_CHAR_DEAD( l_U616[5] ))) AND (NOT (IS_CHAR_INJURED( sub_1262() ))))
    {
        switch (l_U850[2])
        {
            case 0:
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U616[5], sub_1262(), 0 ))
            {
                SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U616[5], 10000, 60000, 5, 0, 1, 0, 3.00000000, 0, 0, 0, 0, 0, 0 );
                l_U850[2] = 1;
            }
            break;
            default:
        }
        GET_CHAR_VELOCITY( l_U616[5], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (uVar2._fU8 < -5.00000000)
        {
            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U616[5], "PANIC", "PAIN_VOICE", 1, 1, 0 );
        }
    }
    return;
}

void sub_55361()
{
    unknown uVar2;
    boolean bVar3;

    switch (l_U539)
    {
        case 1:
        sub_52216();
        CLEAR_PRINTS();
        if (sub_4399( l_U993 ))
        {
            sub_4583( ref l_U993, 0 );
        }
        sub_55515( 27, l_U603, 15 );
        PRINT_NOW( "FAILED_1", 7500, 3 );
        l_U539 = 7;
        break;
        case 2:
        sub_52216();
        CLEAR_PRINTS();
        sub_55515( 27, l_U603, 15 );
        if (sub_4399( l_U993 ))
        {
            sub_4583( ref l_U993, 0 );
        }
        PRINT_NOW( "FAILED_6", 7500, 3 );
        l_U539 = 7;
        break;
        case 3:
        sub_52216();
        CLEAR_PRINTS();
        if (sub_4399( l_U993 ))
        {
            sub_4583( ref l_U993, 0 );
        }
        sub_55515( 13, l_U604, 15 );
        PRINT_NOW( "FAILED_2", 7500, 3 );
        l_U539 = 8;
        break;
        case 5:
        sub_52216();
        CLEAR_PRINTS();
        sub_55515( 13, l_U604, 15 );
        sub_55515( 27, l_U603, 15 );
        if (sub_4399( l_U993 ))
        {
            sub_4583( ref l_U993, 0 );
        }
        PRINT_NOW( "FAILED_6", 7500, 3 );
        l_U539 = 11;
        break;
        case 6:
        sub_52216();
        CLEAR_PRINTS();
        if (sub_4399( l_U993 ))
        {
            sub_4583( ref l_U993, 0 );
        }
        PRINT_NOW( "FAILED_3", 7500, 3 );
        l_U539 = 11;
        break;
        case 4:
        sub_52216();
        CLEAR_PRINTS();
        if (sub_4399( l_U993 ))
        {
            sub_4583( ref l_U993, 0 );
        }
        PRINT_NOW( "FAILED_4", 7500, 3 );
        l_U539 = 11;
        break;
        case 7:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT (IS_CHAR_INJURED( l_U604 )))
            {
                if (IS_CHAR_ON_FIRE( l_U604 ))
                {
                    SET_CHAR_HEALTH( l_U604, 0 );
                    l_U539 = 11;
                }
                if (sub_20311( 1, 1 ))
                {
                    sub_56080();
                    l_U539 = 9;
                }
            }
            else
            {
                l_U539 = 11;
            }
        }
        break;
        case 8:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT (IS_CHAR_INJURED( l_U603 )))
            {
                if (IS_CHAR_ON_FIRE( l_U603 ))
                {
                    l_U539 = 11;
                    SET_CHAR_HEALTH( l_U603, 0 );
                }
                if (sub_20311( 1, 1 ))
                {
                    sub_56080();
                    l_U539 = 10;
                }
            }
            else
            {
                l_U539 = 11;
            }
        }
        break;
        case 9:
        switch (l_U594)
        {
            case 0:
            sub_25282( 1000 );
            if ((NOT (IS_CHAR_INJURED( l_U604 ))) AND (NOT (IS_CHAR_INJURED( sub_1262() ))))
            {
                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                {
                    SET_PLAYER_CONTROL( sub_8795(), 0 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1262() );
                }
                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                {
                    if (((IS_CHAR_IN_ANY_BOAT( sub_1262() )) || (IS_CHAR_IN_ANY_HELI( sub_1262() ))) || (IS_CHAR_IN_ANY_CAR( sub_1262() )))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_1262(), 1411.74900000, 609.69400000, 32.10040000 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_1262(), 1411.74900000, 609.69400000, 32.10040000 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U604 )))
                {
                    SET_CHAR_DECISION_MAKER( l_U604, l_U638 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U604 );
                    SET_CURRENT_CHAR_WEAPON( l_U604, 0, 0 );
                    if (((IS_CHAR_IN_ANY_BOAT( l_U604 )) || (IS_CHAR_IN_ANY_HELI( l_U604 ))) || (IS_CHAR_IN_ANY_CAR( l_U604 )))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( l_U604, 1410.74900000, 609.69400000, 32.10040000 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( l_U604, 1410.74900000, 609.69400000, 32.10040000 );
                    }
                }
                CREATE_CAR( -583281407, 1411.74900000, 609.69400000, 32.10040000, ref l_U780, 1 );
                CHANGE_CAR_COLOUR( l_U780, 0, 0 );
                SWITCH_ROADS_OFF( 1414.40400000, 598.30740000, 29.54837000, 1401.28800000, 639.85240000, 36.06623000 );
                LOAD_SCENE( 1411.74900000, 609.69400000, 32.10040000 );
                CLEAR_AREA( 1411.74900000, 609.69400000, 32.10040000, 10.00000000, 1 );
                if (IS_VEH_DRIVEABLE( l_U781 ))
                {
                    DELETE_CAR( ref l_U781 );
                }
                bVar3 = false;
                while (NOT bVar3)
                {
                    if (IS_VEH_DRIVEABLE( l_U780 ))
                    {
                        if (NOT (IS_CAR_WAITING_FOR_WORLD_COLLISION( l_U780 )))
                        {
                            bVar3 = true;
                        }
                    }
                    WAIT( 0 );
                }
                if (IS_VEH_DRIVEABLE( l_U780 ))
                {
                    SET_CAR_HEADING( l_U780, 0.00000000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U780 );
                }
                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                {
                    WARP_CHAR_INTO_CAR( sub_1262(), l_U780 );
                }
                if (NOT (IS_CHAR_INJURED( l_U604 )))
                {
                    SET_CHAR_DECISION_MAKER( l_U604, l_U638 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U604 );
                    SET_CURRENT_CHAR_WEAPON( l_U604, 0, 0 );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U604, l_U780, 0 );
                }
                WAIT( 3000 );
                GET_GAME_TIMER( ref l_U504 );
                CLEAR_PRINTS();
                CLEAR_HELP();
                sub_40606( ref l_U500, 0 );
                CREATE_CAM( 14, ref l_U530 );
                SET_CAM_POS( l_U530, 1411.20200000, 609.96730000, 32.53259000 );
                SET_CAM_ROT( l_U530, -1.70051500, -0.00000000, -133.29910000 );
                SET_CAM_ACTIVE( l_U530, 1 );
                SET_CAM_PROPAGATE( l_U530, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                sub_9479( 1000 );
                l_U849 = 0;
                sub_18384( "GM5_DROP", ref l_U1005, 7, 1 );
                SETTIMERA( 0 );
                l_U504 += 5000;
                l_U594 = 1;
            }
            else
            {
                l_U594 = 5;
                l_U849 = 1;
            }
            break;
            case 1:
            GET_GAME_TIMER( ref l_U506 );
            if (l_U506 > l_U504)
            {
                if (NOT (IS_CHAR_INJURED( l_U604 )))
                {
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1414.03700000, 615.32180000, 33.17240000, 2, -2, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    TASK_PERFORM_SEQUENCE( l_U604, uVar2 );
                    CLEAR_SEQUENCE_TASK( uVar2 );
                }
                l_U504 += 4000;
                l_U594 = 2;
            }
            break;
            case 2:
            GET_GAME_TIMER( ref l_U506 );
            if (l_U506 > l_U504)
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                l_U594 = 5;
            }
            break;
            case 5:
            if (NOT l_U849)
            {
                sub_25282( 1000 );
                sub_42650( ref l_U530, ref l_U531, ref l_U532 );
                sub_45124( ref l_U500, 1, 1, 1 );
            }
            if (IS_VEH_DRIVEABLE( l_U780 ))
            {
                FREEZE_CAR_POSITION( l_U780, 0 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U780 );
            }
            SWITCH_ROADS_BACK_TO_ORIGINAL( 1414.40400000, 598.30740000, 29.54837000, 1401.28800000, 639.85240000, 36.06623000 );
            sub_25812( 13 );
            if (NOT (IS_CHAR_INJURED( l_U604 )))
            {
                DELETE_CHAR( ref l_U604 );
            }
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U780 );
            CLEAR_PRINTS();
            sub_9479( 1000 );
            l_U539 = 11;
            break;
        }
        if (((sub_40058()) AND (NOT (l_U594 == 0))) AND (TIMERA() > 2000))
        {
            sub_25363( ref l_U1005 );
            l_U594 = 5;
        }
        break;
        case 10:
        switch (l_U594)
        {
            case 0:
            sub_25282( 1000 );
            if ((NOT (IS_CHAR_INJURED( l_U603 ))) AND (NOT (IS_CHAR_INJURED( sub_1262() ))))
            {
                CLEAR_PRINTS();
                CLEAR_HELP();
                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                {
                    SET_PLAYER_CONTROL( sub_8795(), 0 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1262() );
                }
                CLEAR_AREA( -1291.48500000, 356.87920000, 13.63370000, 5.00000000, 1 );
                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                {
                    if (((IS_CHAR_IN_ANY_BOAT( sub_1262() )) || (IS_CHAR_IN_ANY_HELI( sub_1262() ))) || (IS_CHAR_IN_ANY_CAR( sub_1262() )))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_1262(), -1291.48500000, 356.87920000, 13.63370000 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_1262(), -1291.48500000, 356.87920000, 13.63370000 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U603 )))
                {
                    SET_CHAR_DECISION_MAKER( l_U603, l_U638 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U603 );
                    if (((IS_CHAR_IN_ANY_BOAT( l_U603 )) || (IS_CHAR_IN_ANY_HELI( l_U603 ))) || (IS_CHAR_IN_ANY_CAR( l_U603 )))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( l_U603, -1290.48500000, 356.87920000, 13.63370000 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( l_U603, -1290.48500000, 356.87920000, 13.63370000 );
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U781 ))
                {
                    DELETE_CAR( ref l_U781 );
                }
                SWITCH_ROADS_OFF( -1272.98900000, 353.52370000, 12.39685000, -1291.87900000, 384.74080000, 18.87161000 );
                LOAD_SCENE( -1288.09900000, 359.02800000, 14.21720000 );
                CLEAR_AREA( -1288.09900000, 359.02800000, 14.21720000, 10.00000000, 1 );
                CREATE_CAR( -583281407, -1288.09900000, 359.02800000, 14.21720000, ref l_U780, 1 );
                CHANGE_CAR_COLOUR( l_U780, 0, 0 );
                bVar3 = false;
                while (NOT bVar3)
                {
                    if (IS_VEH_DRIVEABLE( l_U780 ))
                    {
                        if (NOT (IS_CAR_WAITING_FOR_WORLD_COLLISION( l_U780 )))
                        {
                            bVar3 = true;
                        }
                    }
                    WAIT( 0 );
                }
                if (IS_VEH_DRIVEABLE( l_U780 ))
                {
                    SET_CAR_HEADING( l_U780, 180.00000000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U780 );
                }
                if (NOT (IS_CHAR_INJURED( sub_1262() )))
                {
                    WARP_CHAR_INTO_CAR( sub_1262(), l_U780 );
                }
                if (NOT (IS_CHAR_INJURED( l_U603 )))
                {
                    SET_CHAR_DECISION_MAKER( l_U603, l_U638 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U603 );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U603, l_U780, 2 );
                }
                WAIT( 3000 );
                GET_GAME_TIMER( ref l_U504 );
                sub_40606( ref l_U500, 0 );
                CREATE_CAM( 14, ref l_U530 );
                SET_CAM_POS( l_U530, -1287.93200000, 358.61700000, 14.65421000 );
                SET_CAM_ROT( l_U530, -0.98631400, -11.38819000, 10.39524000 );
                SET_CAM_FOV( l_U530, 56.69997000 );
                SET_CAM_NEAR_DOF( l_U530, 0.90000000 );
                SET_CAM_FAR_DOF( l_U530, 6.00000000 );
                SET_CAM_ACTIVE( l_U530, 1 );
                SET_CAM_PROPAGATE( l_U530, 1 );
                sub_9479( 1000 );
                SETTIMERA( 0 );
                l_U849 = 0;
                sub_18384( "GM5_DRGRAC", ref l_U993, 7, 1 );
                l_U504 += 5000;
                l_U594 = 1;
            }
            else
            {
                l_U849 = 1;
                l_U594 = 5;
            }
            break;
            case 1:
            GET_GAME_TIMER( ref l_U506 );
            if (l_U506 > l_U504)
            {
                if ((NOT (IS_CHAR_INJURED( l_U603 ))) AND (NOT (IS_CHAR_INJURED( sub_1262() ))))
                {
                    if (DOES_CAM_EXIST( l_U530 ))
                    {
                        SET_CAM_PROPAGATE( l_U530, 0 );
                        SET_CAM_ACTIVE( l_U530, 0 );
                        DESTROY_CAM( l_U530 );
                    }
                    CREATE_CAM( 14, ref l_U530 );
                    SET_CAM_POS( l_U530, -1290.55700000, 355.79290000, 14.32848000 );
                    SET_CAM_ROT( l_U530, 1.16534200, 10.26424000, -41.43358000 );
                    SET_CAM_FOV( l_U530, 56.69997000 );
                    SET_CAM_NEAR_DOF( l_U530, 1.00000000 );
                    SET_CAM_FAR_DOF( l_U530, 10.00000000 );
                    SET_CAM_ACTIVE( l_U530, 1 );
                    SET_CAM_PROPAGATE( l_U530, 1 );
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1298.67700000, 350.78400000, 14.62080000, 4, -2, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    TASK_PERFORM_SEQUENCE( l_U603, uVar2 );
                    CLEAR_SEQUENCE_TASK( uVar2 );
                }
                l_U504 += 6000;
                l_U594 = 2;
            }
            break;
            case 2:
            GET_GAME_TIMER( ref l_U506 );
            if (l_U506 > l_U504)
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                l_U594 = 5;
            }
            break;
            case 5:
            if (NOT l_U849)
            {
                sub_25282( 1000 );
                sub_45124( ref l_U500, 1, 1, 1 );
                sub_42650( ref l_U530, ref l_U531, ref l_U532 );
            }
            SWITCH_ROADS_BACK_TO_ORIGINAL( -1272.98900000, 353.52370000, 12.39685000, -1291.87900000, 384.74080000, 18.87161000 );
            if (NOT (IS_CHAR_INJURED( l_U603 )))
            {
                DELETE_CHAR( ref l_U603 );
            }
            if (IS_VEH_DRIVEABLE( l_U780 ))
            {
                FREEZE_CAR_POSITION( l_U780, 0 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U780 );
            }
            CLEAR_PRINTS();
            sub_9479( 1000 );
            l_U539 = 11;
            break;
        }
        if (((sub_40058()) AND (NOT (l_U594 == 0))) AND (TIMERA() > 2000))
        {
            sub_25363( ref l_U993 );
            l_U594 = 5;
        }
        break;
        case 11:
        if (g_U9930 > 1)
        {
            SET_PLAYER_MOOD_PISSED_OFF( sub_8795(), 150 );
            if (NOT (IS_CHAR_INJURED( sub_1262() )))
            {
                SAY_AMBIENT_SPEECH( sub_1262(), "MISSION_FAIL_RAGE", 0, 0, 0 );
            }
        }
        sub_59538();
        sub_3594();
        break;
    }
    return;
}

void sub_55515(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_56080()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "taxi" )) > 0)
    {
        g_U2229 = 1;
    }
    return;
}

void sub_59538()
{
    sub_59547();
    return;
}

void sub_59547()
{
    int iVar2;

    iVar2 = 15;
    sub_59561( iVar2 );
    sub_2683( iVar2 );
    return;
}

void sub_59561(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_8795(), 150 );
    CLEAR_HELP();
    sub_1507( uParam0 );
    return;
}

void sub_59679()
{
    if (NOT g_U15654[48])
    {
        sub_59725( 14, "MF3_RB6", "MF7AUD", 0 );
    }
    sub_60314( 36 );
    UNLOCK_MISSION_NEWS_STORY( 36 );
    CLEAR_WANTED_LEVEL( sub_8795() );
    sub_63526();
    TRIGGER_MISSION_COMPLETE_AUDIO( 63 );
    sub_3594();
    return;
}

void sub_59725(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_59769( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_59769(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
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
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_60314(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_60401( iParam0 ))
    {
        sub_61451( iParam0 );
    }
    return;
}

int sub_60401(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 20 )) || (IS_BIT_SET( g_U1452[uParam0], 21 )))
    {
        return 0;
    }
    sub_60458( ref uVar3, 1, 0, 0 );
    sub_61070( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_4511( "\n ----------------------------------------------------------------" );
    sub_1395( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_4511( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_60458(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_60511( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_60643( iParam0 + 0 );
    }
    return;
}

void sub_60511(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_60643( iParam0 + 0 );
    }
    return;
}

void sub_60643(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_60674( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_60674(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_61070(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_61451(unknown uParam0)
{
    int iVar3;
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

    iVar3 = GET_BITS_IN_RANGE( g_U953, 12, 14 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    switch (uParam0)
    {
        case 14:
        SET_BITS_IN_RANGE( ref g_U953, 0, 2, iVar3 );
        iVar3++;
        break;
        case 20:
        SET_BITS_IN_RANGE( ref g_U953, 3, 5, iVar3 );
        iVar3++;
        break;
        case 24:
        SET_BITS_IN_RANGE( ref g_U953, 6, 8, iVar3 );
        iVar3++;
        break;
        case 29:
        g_U963 = 1;
        sub_61662( 20, 6, 16383, 16383, ref uVar4 );
        sub_62338( ref uVar4, 7 );
        sub_62369( ref uVar4, 0 );
        break;
        case 36:
        g_U963 = 2;
        break;
        case 39:
        SET_BITS_IN_RANGE( ref g_U953, 9, 11, iVar3 );
        iVar3++;
        break;
        case 40:
        g_U963 = 3;
        sub_61662( 20, 7, 9, 16383, ref uVar4 );
        sub_62338( ref uVar4, 7 );
        sub_62369( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_61662(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_61686( uParam0, 0, iParam4 + 0 );
    sub_61686( uParam1, 1, iParam4 + 0 );
    sub_61686( uParam2, 2, iParam4 + 0 );
    sub_61686( uParam3, 3, iParam4 + 0 );
    sub_61686( 0, 4, iParam4 + 0 );
    sub_61686( 1, 5, iParam4 + 0 );
    sub_61686( 65535, 6, iParam4 + 0 );
    sub_61686( 0, 12, iParam4 + 0 );
    sub_61686( 0, 11, iParam4 + 0 );
    sub_61686( 0, 14, iParam4 + 0 );
    sub_61686( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_61686( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_61686( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_61686(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_62338(int iParam0, unknown uParam1)
{
    sub_61686( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_62369(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_62409())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_63096( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_62895( iVar5 );
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

int sub_62409()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_62443( 5, g_U968[I] )) == 7)
        {
            sub_62895( I );
            return 1;
        }
    }
    return 0;
}

int sub_62443(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_62895(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_62968( 39 );
    return;
}

void sub_62968(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_63096(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_63157( uParam0, g_U968[Result] ))
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

int sub_63157(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

void sub_63526()
{
    sub_63535();
    return;
}

void sub_63535()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_63553();
    sub_63612( iVar2, iVar3, iVar4 );
    return;
}

void sub_63553()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_63612(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 15;
    sub_63645( iVar5, uParam0, uParam1, uParam2, "Contact_18" );
    return;
}

void sub_63645(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_63741( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_63741( ref cVar9 );
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
            sub_63741( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_63741( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_63741( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_63741( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_64318( iParam0, iVar7 );;;
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
                sub_64715( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_64715( 0, 4 );
            }
        }
    }
    if (NOT (sub_64804( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_8795(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_8795() );
    }
    sub_2692();
    bVar27 = true;
    uVar28 = sub_64318( iParam0, iVar7 );
    uVar29 = sub_2149( iParam0 );
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
                sub_74180( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_74610();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_74695( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_74752( iParam0 );
                sub_74791( 0 );
                sub_2590( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_74899();
        }
    }
    if (bParam2)
    {
        sub_74610();
        sub_74987();
        sub_74791( 0 );
    }
    if (bParam3)
    {
        sub_74610();
        sub_75027();
        sub_74791( 0 );
        sub_2590( uVar29, 0 );
    }
    sub_2036();
    return;
}

void sub_63741(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_64318(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_2548( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_64715(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_64804(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_65012( uParam1 );
        break;
        case 1:
        bVar8 = sub_67090( uParam1 );
        break;
        case 2:
        bVar8 = sub_67316( uParam1 );
        break;
        case 3:
        bVar8 = sub_67466( uParam1 );
        break;
        case 4:
        bVar8 = sub_67744( uParam1 );
        break;
        case 5:
        bVar8 = sub_68047( uParam1 );
        break;
        case 6:
        bVar8 = sub_68246( uParam1 );
        break;
        case 7:
        bVar8 = sub_68472( uParam1 );
        break;
        case 8:
        bVar8 = sub_68707( uParam1 );
        break;
        case 9:
        bVar8 = sub_69082( uParam1 );
        break;
        case 10:
        bVar8 = sub_69329( uParam1 );
        break;
        case 11:
        bVar8 = sub_69468( uParam1 );
        break;
        case 12:
        bVar8 = sub_69767( uParam1 );
        break;
        case 13:
        bVar8 = sub_69995( uParam1 );
        break;
        case 14:
        bVar8 = sub_70282( uParam1 );
        break;
        case 15:
        bVar8 = sub_70564( uParam1 );
        break;
        case 16:
        bVar8 = sub_70846( uParam1 );
        break;
        case 17:
        bVar8 = sub_71047( uParam1 );
        break;
        case 18:
        bVar8 = sub_71120( uParam1 );
        break;
        case 19:
        bVar8 = sub_71334( uParam1 );
        break;
        case 20:
        bVar8 = sub_71587( uParam1 );
        break;
        case 21:
        bVar8 = sub_71834( uParam1 );
        break;
        case 22:
        bVar8 = sub_72035( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_66695( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_64318( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_72358( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_65012(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_65291( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_65291( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_65291( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_65291( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_65291( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_65291( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_65291( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_65291( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_65291( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_65291( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_65291( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_65291( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_65291( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_65291( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_65291( iVar3, 0, 3, 1, 0, 0 );
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
        sub_65291( iVar3, 0, sub_66573(), sub_66839(), 0, 0 );
        break;
        default:
        sub_66998( "Friend 1", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Friend 1", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_65291(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_65302( uParam1 );
    sub_65476( uParam0, 0, uParam2 );
    sub_65476( uParam0, 1, uParam3 );
    sub_65476( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_63553();
    return;
}

void sub_65302(unknown uParam0)
{
    ADD_SCORE( sub_8795(), uParam0 );
    sub_65327( uParam0 );
    return;
}

void sub_65327(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2548( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_65476(unknown uParam0, int iParam1, int iParam2)
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
        sub_65633( uParam0 );
    }
    return;
}

void sub_65633(unknown uParam0)
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

int sub_66573()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_66695( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_66695(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_66839()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_66695( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_66998(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_67090(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65291( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65291( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_66998( "Contact 2", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Contact 2", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_67316(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_65291( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_66998( "Girl 3", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Girl 3", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_67466(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_65291( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_65291( iVar3, 0, sub_66573(), sub_66839(), 0, 0 );
        break;
        default:
        sub_66998( "Friend 4", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Friend 4", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_67744(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65291( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65291( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_65291( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_65291( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_65291( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_66998( "Contact 5", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Contact 5", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_68047(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65291( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_66998( "Contact 7", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Contact 7", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_68246(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65291( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65291( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_66998( "Contact 7b", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Contact 7b", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_68472(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_65291( iVar3, 0, sub_66573(), sub_66839(), 0, 0 );
        break;
        default:
        sub_66998( "Friend 8", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Friend 8", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_68707(unknown uParam0)
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
        sub_65291( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_65291( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_65291( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_65291( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_65291( iVar3, 0, sub_66573(), sub_66839(), 0, 0 );
        break;
        default:
        sub_66998( "Friend 9", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Friend 9", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_69082(unknown uParam0)
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
        sub_65291( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_65291( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_65291( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_66998( "Contact 10", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_66998( "Contact 10", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_69329(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_66998( "Girl 11", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Girl 11", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_69468(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65291( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_65291( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_65291( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_65291( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_65291( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_66998( "Contact 12", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Contact 12", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_69767(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65291( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65291( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_66998( "Contact 13", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Contact 13", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_69995(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_65291( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_65291( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_65291( iVar3, 0, sub_66573(), sub_66839(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_66998( "Friend 15", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Friend 15", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_70282(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65291( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65291( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_65291( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_65291( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_66998( "Contact 16", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Contact 16", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_70564(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_65291( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_65291( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_65291( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_66998( "Contact 18", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Contact 18", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_70846(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65291( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_66998( "Contact 19", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Contact 19", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71047(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_66998( "Girl 20", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71120(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65291( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_66998( "Contact 21", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Contact 21", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71334(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65291( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65291( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_65291( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_66998( "Contact 22", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Contact 22", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71587(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_65291( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65291( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_65291( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_65291( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_66998( "Contact 24", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Contact 24", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71834(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_65291( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_65291( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_65291( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_66998( "Contact 25", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_66998( "Contact 25", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_72035(unknown uParam0)
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
        sub_65291( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_66998( "Girl 26", 1 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_66998( "Girl 26", 0 );
        sub_65291( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_72358(int iParam0, int iParam1)
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
    if (sub_72406( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_73137( iParam1 );
    }
    return;
}

int sub_72406(int iParam0, int iParam1)
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
            sub_72546( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_72546(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_72728( 0 );
    return;
}

void sub_72728(boolean bParam0)
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
        sub_72983();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_72983()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_73137(int iParam0)
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
        sub_73470( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_73470( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_73470( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_73470( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_73470( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_73470( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_73470( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_73470( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_73470( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_73470( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_73470( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_73470( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_73470( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_73470( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_73470( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_73470( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_73470( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_73470( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_73470( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_73470(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_74180(unknown uParam0, unknown uParam1)
{
    sub_74199( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_74199(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_74610()
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

int sub_74695(int iParam0, int iParam1)
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

void sub_74752(unknown uParam0)
{
    sub_1935();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_74791(unknown uParam0)
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

void sub_74899()
{
    sub_74908();
    return;
}

void sub_74908()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_74987()
{
    sub_74908();
    return;
}

void sub_75027()
{
    sub_74908();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}
