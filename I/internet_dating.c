void main()
{
    l_U177 = 0;
    l_U197 = 0;
    l_U198 = 0;
    l_U199 = 1;
    l_U200 = 3;
    l_U202 = 0;
    l_U203 = 0;
    l_U210 = 0;
    l_U211 = 1;
    l_U212 = 2;
    l_U213 = 0;
    l_U552 = 1;
    l_U553 = -1;
    l_U554 = -1;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    sub_100();
    sub_4874();
    while (l_U552)
    {
        WAIT( 0 );
        if (NOT g_U33838)
        {
            sub_4922();
            sub_5613();
            sub_5807();
        }
        else
        {
            sub_10791( "  * internet_dating.sc - bDISABLE_DATING_FOR_CREDITS = TRUE *\n" );
        }
    }
    sub_10813();
    return;
}

void sub_100()
{
    sub_109();
    sub_4678();
    g_U32928[0] = 0;
    g_U32928[1] = 0;
    g_U32928[2] = 0;
    g_U32928[3] = 0;
    g_U32928[4] = 0;
    SETTIMERA( 0 );
    return;
}

void sub_109()
{
    int I;

    sub_118();
    sub_1390();
    sub_2562();
    for ( I = 0; I < 12; I++ )
    {
        l_U214[I]._fU44 = -1;
        l_U214[I]._fU48 = -1;
        l_U214[I]._fU52 = -1;
    }
    for ( I = 0; I < 12; I++ )
    {
        l_U383[I]._fU44 = -1;
        l_U383[I]._fU48 = -1;
        l_U383[I]._fU52 = -1;
    }
    return;
}

void sub_118()
{
    sub_162( 0, 1191.81200000, 381.61610000, 24.78900000, 1173.67300000, 381.80200000, 24.80310000, 270 );
    sub_162( 1, -146.81070000, 72.92670000, 16.06900000, -154.53580000, 86.56290000, 13.78270000, 200 );
    sub_162( 2, 1642.96000000, 246.13430000, 25.32600000, 1630.75000000, 254.77300000, 22.31240000, 240 );
    sub_162( 3, 1096.02400000, 1599.59900000, 17.92900000, 1083.62300000, 1589.11100000, 15.66460000, 340 );
    sub_162( 4, 443.19080000, 1526.36500000, 17.15100000, 431.69360000, 1527.82100000, 15.62860000, 310 );
    sub_162( 5, -174.29930000, 272.49130000, 15.94200000, -154.29930000, 271.99130000, 13.71820000, 90 );
    sub_162( 6, -428.65010000, 1178.94100000, 14.18300000, -409.22240000, 1177.36600000, 12.95600000, 90 );
    sub_162( 7, -624.32090000, 162.07230000, 6.09800000, -599.91990000, 161.67230000, 3.69770000, 90 );
    sub_162( 8, -1002.54900000, 1604.37000000, 25.04300000, -991.83490000, 1595.67200000, 22.80280000, 45 );
    sub_162( 9, 882.84330000, -472.87530000, 16.27600000, 867.95830000, -472.38340000, 13.51210000, 270 );
    sub_162( 10, -136.80810000, -277.00060000, 14.17600000, -136.33880000, -262.49690000, 11.60750000, 180 );
    sub_162( 11, 118.34760000, 640.66170000, 15.91000000, 120.55730000, 661.74850000, 13.69930000, 180 );
    sub_162( 12, -395.53130000, 250.24500000, 15.26300000, -407.14020000, 251.41600000, 11.94370000, 270 );
    sub_162( 13, -1155.96800000, 1389.51500000, 25.56800000, -1139.74800000, 1388.20000000, 23.40280000, 90 );
    sub_162( 14, -1250.08300000, 1070.77300000, 20.87300000, -1251.13800000, 1056.23300000, 18.57370000, 0 );
    sub_162( 15, 34.40470000, 974.59860000, 16.00000000, 36.32320000, 962.13920000, 13.63700000, 0 );
    sub_162( 20, 921.12400000, -489.47710000, 16.59100000, 918.59800000, -505.09470000, 14.01790000, 0 );
    sub_162( 17, 1150.94800000, 735.32480000, 35.89890000, 1179.39600000, 750.80550000, 35.06250000, 180 );
    sub_162( 18, -437.13140000, 463.51540000, 11.14300000, -416.82850000, 464.30540000, 10.73370000, 120 );
    sub_162( 19, 118.44390000, 557.17170000, 15.94000000, 119.92800000, 579.07180000, 13.66650000, 180 );
    sub_162( 16, -477.32320000, 1414.15900000, 16.67100000, -458.61460000, 1415.95200000, 14.43390000, 90 );
    sub_162( 21, 1199.12800000, -683.22080000, 17.74300000, 1186.95400000, -682.86620000, 15.43990000, 270 );
    sub_162( 22, -567.91620000, 87.84670000, 6.09270000, -565.89650000, 55.86460000, 3.66190000, 0 );
    sub_162( 23, 1150.94800000, 735.32480000, 35.89890000, 1138.15600000, 758.95700000, 33.87960000, 270 );
    sub_162( 24, 1482.85500000, 55.35200000, 26.24000000, 1485.54000000, 82.00790000, 23.85120000, 180 );
    sub_162( 25, 1215.00400000, 1717.38700000, 17.91890000, 1224.71200000, 1705.49400000, 15.51780000, 40 );
    sub_162( 26, -1596.04900000, 19.57230000, 11.34500000, -1602.80500000, 27.29280000, 9.08450000, 180 );
    sub_162( 27, 953.89100000, -297.92700000, 20.58100000, 983.89100000, -297.92700000, 20.58100000, 90 );
    sub_162( 28, -352.57100000, 182.69200000, 16.05700000, -352.57100000, 142.69200000, 16.05700000, 0 );
    return;
}

void sub_162(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    g_U32995[uParam0]._fU40 = {uParam1};
    g_U32995[uParam0]._fU52 = {uParam4};
    g_U32995[uParam0]._fU64 = uParam7;
    return;
}

void sub_1390()
{
    sub_1432( 0, 1175.87300000, 392.51750000, 29.59400000, -13.69880000, 0.00000000, -147.50740000 );
    sub_1432( 1, -172.63120000, 61.32870000, 55.90245000, -51.17967000, 0.00000000, -102.22700000 );
    sub_1432( 2, 1670.37300000, 252.74060000, 27.71511000, 0.69950600, 0.00000000, 130.74310000 );
    sub_1432( 3, 1108.09200000, 1625.32100000, 21.56322000, -1.15058200, 0.00000000, 174.86560000 );
    sub_1432( 4, 423.45340000, 1529.01700000, 34.79707000, -36.57798000, -11.22095000, -114.45570000 );
    sub_1432( 5, -206.20180000, 261.43610000, 35.89857000, -34.11337000, 0.00000000, -46.99197000 );
    sub_1432( 6, -423.18860000, 1174.36700000, 24.29361000, -39.14743000, 6.24956800, 45.26580000 );
    sub_1432( 7, -645.24320000, 125.56240000, 22.66623000, -32.12400000, 0.00000000, -56.49996000 );
    sub_1432( 8, -992.73790000, 1583.80300000, 36.61912000, -19.68591000, 0.00000100, 26.11061000 );
    sub_1432( 9, 876.81410000, -460.09550000, 15.35026000, 11.67727000, 0.00000000, -161.68270000 );
    sub_1432( 10, -123.23390000, -275.37620000, 12.44489000, 3.61987600, 0.00000000, 92.21399000 );
    sub_1432( 11, 126.37460000, 628.77320000, 20.18756000, -20.45377000, 0.00000000, 51.15732000 );
    sub_1432( 12, -410.06970000, 251.82990000, 20.99272000, -11.35220000, 0.00000000, -107.25360000 );
    sub_1432( 13, -1173.21800000, 1372.00600000, 22.45787000, 10.71952000, 0.00000000, -29.54759000 );
    sub_1432( 14, -1258.48500000, 1055.73500000, 25.37512000, -4.82664000, 0.00000000, -37.46955000 );
    sub_1432( 15, 37.68074000, 1005.61400000, 22.87771000, -23.27425000, 0.00000100, 145.58120000 );
    sub_1432( 16, -466.49520000, 1426.17700000, 14.79384000, 16.12449000, -0.00000000, 130.86440000 );
    sub_1432( 17, 1139.32900000, 740.73430000, 36.55957000, -8.33696200, 0.01961200, -120.22000000 );
    sub_1432( 18, -451.98680000, 469.22640000, 14.42270000, -12.98044000, 0.00000000, -130.48930000 );
    sub_1432( 19, 128.69340000, 539.74560000, 20.18760000, -3.03840000, 0.00000000, 43.11860000 );
    sub_1432( 20, 912.35260000, -480.41450000, 19.36200000, -7.81876100, -0.00000000, -137.45620000 );
    sub_1432( 21, 1196.14900000, -694.14830000, 20.29530000, -13.84020000, 0.00000000, -18.34430000 );
    sub_1432( 22, -564.65110000, 71.73000000, 6.11300000, -2.24800000, 0.00000000, 31.27200000 );
    sub_1432( 23, 1163.71000000, 769.05490000, 44.09430000, -24.06020000, 0.00000000, 140.83640000 );
    sub_1432( 24, 1494.32500000, 41.67520000, 29.96990000, -15.65170000, 0.00000000, 52.72550000 );
    sub_1432( 25, 1226.37100000, 1700.91000000, 30.70050000, -41.66920000, 0.00000000, 94.95740000 );
    sub_1432( 26, -1605.50400000, 32.53180000, 15.81510000, -13.81120000, 0.00000000, -126.06430000 );
    sub_1432( 27, 958.76420000, -310.67700000, 24.63480000, -14.74840000, 0.00000000, -0.42400000 );
    sub_1432( 28, -365.76050000, 178.55880000, 17.75000000, 1.22540000, 0.00000000, -86.48420000 );
    return;
}

void sub_1432(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    g_U32995[uParam0]._fU68 = {uParam1};
    g_U32995[uParam0]._fU80 = {uParam4};
    return;
}

void sub_2562()
{
    sub_2602( 0, "dp_BELL_BN_N", 1190.89400000, 368.15430000, 25.10830000 );
    sub_2602( 1, "dp_BELL_MH_S", -138.75020000, 72.24300000, 14.72730000 );
    sub_2602( 2, "dp_SHOT_BN_E", 1647.32900000, 239.04870000, 24.51690000 );
    sub_2602( 3, "dp_SHOT_BX_E", 1100.39000000, 1595.61200000, 16.68560000 );
    sub_2602( 4, "dp_SHOT_BX_W", 441.72470000, 1517.57900000, 16.28460000 );
    sub_2602( 5, "dp_SHOT_MH_MID", -174.10440000, 278.29900000, 14.78070000 );
    sub_2602( 6, "dp_SHOT_MH_N", -429.09190000, 1184.60300000, 13.01910000 );
    sub_2602( 7, "dp_SHOT_MH_W", -627.91250000, 152.90520000, 4.74680000 );
    sub_2602( 8, "dp_SHOT_NJ_N", -1006.40300000, 1612.73700000, 23.98270000 );
    sub_2602( 9, "dp_DINER_BN_SW", 881.61620000, -480.72370000, 14.99900000 );
    sub_2602( 10, "dp_DINER_MH", -142.90030000, -278.44050000, 13.81710000 );
    sub_2602( 11, "dp_DINER_MH_E", 113.04270000, 641.35890000, 14.76050000 );
    sub_2602( 12, "dp_DINER_MH_W", -392.66640000, 244.59840000, 14.34800000 );
    sub_2602( 13, "dp_PIZZA_NJ", -1159.30800000, 1397.62100000, 24.35970000 );
    sub_2602( 14, "dp_FUKS_NJ", -1243.84800000, 1070.79100000, 19.71630000 );
    sub_2602( 15, "dp_RSTAR_MH_N", 27.99910000, 980.06620000, 14.59650000 );
    sub_2602( 20, "dp_VLADS_BN_SW", 926.55690000, -488.94410000, 15.32230000 );
    sub_2602( 17, "dp_IRISH_BN_NW", 1139.00200000, 738.64500000, 36.51000000 );
    sub_2602( 18, "dp_IRISH_MH_W", -442.03260000, 457.46700000, 9.77110000 );
    sub_2602( 19, "dp_JERK_MH", 112.77620000, 554.79270000, 14.53680000 );
    sub_2602( 16, "dp_HIPHOP_MH_N", -477.97950000, 1408.49900000, 15.44220000 );
    sub_4119( 21, "dp_BOWL_BN", 1199.95600000, -673.92140000, 16.39180000, 1199.95600000, -673.92140000, 16.39180000 );
    sub_4119( 22, "dp_BOWL_MH", -577.11520000, 78.77920000, 4.82220000, -577.11520000, 78.77920000, 4.82220000 );
    sub_4119( 23, "dp_DARTS_BN_NW", 1150.78500000, 742.25080000, 38.90820000, 1148.68900000, 738.28310000, 34.61130000 );
    sub_4119( 24, "dp_POOL_BN_MID", 1468.11800000, 62.22420000, 27.46740000, 1474.74600000, 53.33370000, 24.35730000 );
    sub_4119( 25, "dp_STRIP_BX", 1192.42900000, 1696.96900000, 17.72670000, 0.00000000, 0.00000000, 0.00000000 );
    sub_4119( 26, "dp_STRIP_NJ", -1596.04900000, 19.57230000, 12.84500000, 0.00000000, 0.00000000, 0.00000000 );
    sub_4119( 27, "dp_CABARET_BN", 965.09690000, -273.34200000, 19.15430000, 966.74740000, -275.39580000, 17.30613000 );
    sub_4119( 28, "dp_COMEDY_MH", -345.60860000, 179.15280000, 12.80300000, -349.60860000, 183.15280000, 15.79800000 );
    return;
}

void sub_2602(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref g_U32995[uParam0]._fU0, uParam1, 32 );
    switch (uParam0)
    {
        case 0:
        case 1:
        g_U32995[uParam0]._fU32 = 22;
        g_U32995[uParam0]._fU36 = 0;
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        g_U32995[uParam0]._fU32 = 21;
        g_U32995[uParam0]._fU36 = 1;
        break;
        case 9:
        case 10:
        case 11:
        case 12:
        g_U32995[uParam0]._fU32 = 57;
        g_U32995[uParam0]._fU36 = 3;
        break;
        case 13:
        case 14:
        case 15:
        g_U32995[uParam0]._fU32 = 57;
        g_U32995[uParam0]._fU36 = 2;
        break;
        case 20:
        case 17:
        case 18:
        case 19:
        case 16:
        g_U32995[uParam0]._fU32 = 47;
        g_U32995[uParam0]._fU36 = 4;
        break;
        case 21:
        case 22:
        g_U32995[uParam0]._fU32 = 49;
        g_U32995[uParam0]._fU36 = 7;
        break;
        case 23:
        g_U32995[uParam0]._fU32 = 52;
        g_U32995[uParam0]._fU36 = 6;
        break;
        case 24:
        g_U32995[uParam0]._fU32 = 46;
        g_U32995[uParam0]._fU36 = 5;
        break;
        case 25:
        case 26:
        g_U32995[uParam0]._fU32 = 66;
        g_U32995[uParam0]._fU36 = 9;
        break;
        case 27:
        g_U32995[uParam0]._fU32 = 71;
        g_U32995[uParam0]._fU36 = 8;
        break;
        case 28:
        g_U32995[uParam0]._fU32 = 70;
        g_U32995[uParam0]._fU36 = 8;
        break;
        default:
          case 29: return;
    }
    g_U32995[uParam0]._fU92 = {uParam2};
    return;
}

void sub_4119(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    sub_2602( uParam0, uParam1, uParam2 );
    g_U32995[uParam0]._fU104 = {uParam5};
    return;
}

void sub_4678()
{
    int I;
    int J;

    for ( I = 0; I < 12; I++ )
    {
        sub_4702( I, 0 );
    }
    for ( J = 0; J < 12; J++ )
    {
        sub_4756( J, 0 );
    }
    return;
}

void sub_4702(unknown uParam0, unknown uParam1)
{
    g_U1400[uParam0] = uParam1;
    return;
}

void sub_4756(unknown uParam0, unknown uParam1)
{
    g_U1413[uParam0] = uParam1;
    return;
}

void sub_4874()
{
    return;
}

void sub_4922()
{
    switch (l_U204[0])
    {
        case 0:
        if (g_U15654[38])
        {
            if (sub_4995( 0, 12 ))
            {
                l_U204[0] = 2;
            }
        }
        break;
        case 1:
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dating_michelle" )) >= 1)
        {
            l_U204[0] = 2;
        }
        break;
        case 2:
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dating_michelle" )) < 1)
        {
            l_U204[0] = 3;
        }
        break;
        case 3: break;
    }
    return;
}

int sub_4995(int iParam0, int iParam1)
{
    char[64] cVar4;
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
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;

    if (l_U203 == 0)
    {
        if (NOT ((IS_AUTO_SAVE_IN_PROGRESS()) || (g_U9914._fU0)))
        {
            StrCopy( ref cVar4, "dating_", 64 );
            ConcatString(ref cVar4, sub_5053( iParam0, 1 ), 64);
            if (DOES_SCRIPT_EXIST( ref cVar4 ))
            {
                REQUEST_SCRIPT( ref cVar4 );
                while (NOT (HAS_SCRIPT_LOADED( ref cVar4 )))
                {
                    WAIT( 0 );
                }
                if (iParam1 < 12)
                {
                    ;
                }
                array(ref uVar20._fU8._fU48, 29);
                array(ref uVar20._fU8._fU168, 5);
                array(ref uVar20._fU8._fU192, 5);
                array(ref uVar20._fU8._fU216, 5);
                ref uVar20._fU8;
                ref uVar20;
                if ((iParam0 == 0) || (iParam0 == 1))
                {
                    uVar20._fU4 = 1;
                }
                else
                {
                    uVar20._fU4 = 0;
                }
                uVar20._fU8._fU0 = iParam0;
                uVar20._fU248._fU0 = 5;
                uVar20._fU248._fU4 = 8;
                START_NEW_SCRIPT_WITH_ARGS( ref cVar4, ref uVar20, 64, 1820 );
                MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref cVar4 );
                return 1;
            }
        }
    }
    return 0;
}

string sub_5053(unknown uParam0, boolean bParam1)
{
    switch (uParam0)
    {
        case 0:
        return "MICHELLE";
        break;
        case 1:
        return "KATE";
        break;
        case 2:
        if (bParam1)
        {
            return "ALEX";
        }
        else
        {
            return "2HOT2HANDLE";
        }
        break;
        case 3:
        if (bParam1)
        {
            return "KIKI";
        }
        else
        {
            return "ECOWARRIOR";
        }
        break;
        case 4:
        if (bParam1)
        {
            return "CARMEN";
        }
        else
        {
            return "LCFINEST";
        }
        break;
    }
    return "[null]";
}

void sub_5613()
{
    switch (l_U204[1])
    {
        case 0:
        if (g_U15654[37])
        {
            if (sub_4995( 1, 12 ))
            {
                l_U204[1] = 1;
            }
        }
        break;
        case 1:
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dating_kate" )) >= 1)
        {
            l_U204[1] = 2;
        }
        break;
        case 2:
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dating_kate" )) < 1)
        {
            l_U204[1] = 3;
        }
        break;
        case 3: break;
    }
    return;
}

void sub_5807()
{
    unknown uVar2;

    switch (l_U213)
    {
        case 0:
        if (((NOT (sub_5853( 2 ))) || (NOT (sub_5853( 1 )))) || ((g_U15654[30]) || (g_U15654[56])))
        {
            l_U213 = 1;
        }
        break;
        case 1:
        if (g_U15654[56])
        {
            l_U213 = 2;
        }
        sub_5946( 1 );
        break;
        case 2:
        sub_9630();
        sub_9856();
        sub_10086();
        sub_10303();
        sub_5946( 0 );
        break;
    }
    return;
}

void sub_5853(unknown uParam0)
{
    return g_U1413[uParam0];
}

void sub_5946(unknown uParam0)
{
    int I;
    int J;

    for ( I = 0; I < 12; I++ )
    {
        if (((I != l_U210) AND (I != l_U211)) AND (I != l_U212))
        {
            if (sub_6000( I ))
            {
                if (sub_6724( I, sub_6038( I, 1, uParam0 ) ))
                {
                    sub_4702( I, 0 );
                }
            }
        }
    }
    for ( J = 0; J < 12; J++ )
    {
        if (((J != 0) AND (J != 2)) AND (J != 1))
        {
            if (sub_5853( J ))
            {
                if (sub_9117( J, sub_6038( J, 0, uParam0 ) ))
                {
                    sub_4756( J, 0 );
                }
            }
        }
    }
    return;
}

void sub_6000(unknown uParam0)
{
    return g_U1400[uParam0];
}

int sub_6038(unknown uParam0, boolean bParam1, boolean bParam2)
{
    if (bParam1)
    {
        switch (uParam0)
        {
            case 0:
            return 0;
            break;
            case 1:
            return 1;
            break;
            case 2:
            return 2;
            break;
            case 3:
            return 3;
            break;
            case 4:
            return 4;
            break;
            case 5:
            return 5;
            break;
            case 6:
            return 6;
            break;
            case 7:
            return 7;
            break;
            case 8:
            return 8;
            break;
            case 9:
            return 9;
            break;
            case 10:
            return 10;
            break;
            case 11:
            return 11;
            break;
            default:
              case 12: return 40;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 0:
            if (bParam2)
            {
                return 12;
            }
            else
            {
                return 24;
            }
            break;
            case 1:
            if (bParam2)
            {
                return 13;
            }
            else
            {
                return 25;
            }
            break;
            case 2:
            if (bParam2)
            {
                return 14;
            }
            else
            {
                return 26;
            }
            break;
            case 3:
            if (bParam2)
            {
                return 15;
            }
            else
            {
                return 27;
            }
            break;
            case 4:
            if (bParam2)
            {
                return 16;
            }
            else
            {
                return 28;
            }
            break;
            case 5:
            if (bParam2)
            {
                return 17;
            }
            else
            {
                return 29;
            }
            break;
            case 6:
            if (bParam2)
            {
                return 18;
            }
            else
            {
                return 30;
            }
            break;
            case 7:
            if (bParam2)
            {
                return 19;
            }
            else
            {
                return 31;
            }
            break;
            case 8:
            if (bParam2)
            {
                return 20;
            }
            else
            {
                return 32;
            }
            break;
            case 9:
            if (bParam2)
            {
                return 21;
            }
            else
            {
                return 33;
            }
            break;
            case 10:
            if (bParam2)
            {
                return 22;
            }
            else
            {
                return 34;
            }
            break;
            case 11:
            if (bParam2)
            {
                return 23;
            }
            else
            {
                return 35;
            }
            break;
            default:
              case 12: return 40;
        }
    }
    return 40;
}

int sub_6724(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (l_U214[uParam0]._fU44 <= 0)
    {
        GET_GAME_TIMER( ref l_U214[uParam0]._fU44 );
        GENERATE_RANDOM_INT_IN_RANGE( sub_6776( 48 ), sub_6776( 60 ), ref l_U214[uParam0]._fU48 );
    }
    else
    {
        GET_GAME_TIMER( ref iVar4 );
        if (l_U214[uParam0]._fU52 <= 0)
        {
            if (iVar4 <= (l_U214[uParam0]._fU44 + l_U214[uParam0]._fU48))
            {
                ;
            }
            else
            {
                switch (sub_6926( ref l_U214[uParam0]._fU0, 0 ))
                {
                    case 6:
                    sub_7633( 14, uParam1, 36, 16383, ref l_U214[uParam0]._fU0 );
                    sub_8318( ref l_U214[uParam0]._fU0, 0 );
                    sub_8357( ref l_U214[uParam0]._fU0, 1 );
                    sub_8394( ref l_U214[uParam0]._fU0, 0 );
                    break;
                    case 0: break;
                    case 3:
                    GET_GAME_TIMER( ref l_U214[uParam0]._fU44 );
                    GENERATE_RANDOM_INT_IN_RANGE( sub_6776( 48 ), sub_6776( 60 ), ref l_U214[uParam0]._fU52 );
                    break;
                    case 1:
                    case 2:
                    case 4:
                    default:
                      case 5:
                }
            }
        }
        else if (iVar4 > (l_U214[uParam0]._fU44 + l_U214[uParam0]._fU52))
        {
            return 1;
        }
    }
    return 0;
}

void sub_6776(unknown uParam0)
{
    return ROUND( (uParam0 * 60.00000000) * 1000.00000000 );
}

int sub_6926(int iParam0, int iParam1)
{
    int I;

    if (iParam1 == 0)
    {
        ;
    }
    if (iParam0->_fU40 >= 0)
    {
        for ( I = iParam0->_fU40; I >= 0; I += -1 )
        {
            if (sub_6992( iParam0->_fU0, g_U968[I] ))
            {
                iParam0->_fU40 = I;
                return sub_7077( 4, g_U968[I] );
            }
        }
        iParam0->_fU40 = -2;
    }
    return 6;
}

int sub_6992(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

int sub_7077(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_7633(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_7657( uParam0, 0, iParam4 + 0 );
    sub_7657( uParam1, 1, iParam4 + 0 );
    sub_7657( uParam2, 2, iParam4 + 0 );
    sub_7657( uParam3, 3, iParam4 + 0 );
    sub_7657( 0, 4, iParam4 + 0 );
    sub_7657( 1, 5, iParam4 + 0 );
    sub_7657( 65535, 6, iParam4 + 0 );
    sub_7657( 0, 12, iParam4 + 0 );
    sub_7657( 0, 11, iParam4 + 0 );
    sub_7657( 0, 14, iParam4 + 0 );
    sub_7657( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_7657( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_7657( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_7657(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_8318(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU36 = uParam1;
    return;
}

void sub_8357(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_8394(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_8434())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_8683( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_8482( iVar5 );
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

int sub_8434()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_7077( 5, g_U968[I] )) == 7)
        {
            sub_8482( I );
            return 1;
        }
    }
    return 0;
}

void sub_8482(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_8555( 39 );
    return;
}

void sub_8555(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_8683(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_6992( uParam0, g_U968[Result] ))
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

int sub_9117(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (l_U383[uParam0]._fU44 <= 0)
    {
        GET_GAME_TIMER( ref l_U383[uParam0]._fU44 );
        GENERATE_RANDOM_INT_IN_RANGE( sub_6776( 48 ), sub_6776( 60 ), ref l_U383[uParam0]._fU48 );
    }
    else
    {
        GET_GAME_TIMER( ref iVar4 );
        if (l_U383[uParam0]._fU52 <= 0)
        {
            if (iVar4 <= (l_U383[uParam0]._fU44 + l_U383[uParam0]._fU48))
            {
                ;
            }
            else
            {
                switch (sub_6926( ref l_U383[uParam0]._fU0, 0 ))
                {
                    case 6:
                    sub_7633( 14, uParam1, 36, 16383, ref l_U383[uParam0]._fU0 );
                    sub_8318( ref l_U383[uParam0]._fU0, 0 );
                    sub_8357( ref l_U383[uParam0]._fU0, 1 );
                    sub_8394( ref l_U383[uParam0]._fU0, 0 );
                    break;
                    case 0: break;
                    case 3:
                    GET_GAME_TIMER( ref l_U383[uParam0]._fU44 );
                    GENERATE_RANDOM_INT_IN_RANGE( sub_6776( 48 ), sub_6776( 60 ), ref l_U383[uParam0]._fU52 );
                    break;
                    case 1:
                    case 2:
                    case 4:
                    default:
                      case 5:
                }
            }
        }
        else if (iVar4 > (l_U383[uParam0]._fU44 + l_U383[uParam0]._fU52))
        {
            l_U383[uParam0]._fU44 = -1;
            l_U383[uParam0]._fU48 = -1;
            l_U383[uParam0]._fU52 = -1;
            return 1;
        }
    }
    return 0;
}

void sub_9630()
{
    switch (l_U204[2])
    {
        case 0:
        if ((sub_6000( l_U210 )) AND ((GET_INT_STAT( 363 )) >= 2))
        {
            if (sub_4995( 2, l_U210 ))
            {
                l_U204[2] = 1;
            }
        }
        break;
        case 1:
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dating_alex" )) >= 1)
        {
            l_U204[2] = 2;
        }
        break;
        case 2:
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dating_alex" )) < 1)
        {
            l_U204[2] = 3;
        }
        break;
        case 3:
        l_U203 = 0;
        l_U204[2] = 0;
        break;
    }
    return;
}

void sub_9856()
{
    switch (l_U204[3])
    {
        case 0:
        if ((GET_INT_STAT( 363 )) >= 2)
        {
            if (sub_6000( l_U211 ))
            {
                if (sub_4995( 3, l_U211 ))
                {
                    l_U204[3] = 1;
                }
            }
        }
        break;
        case 1:
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dating_kiki" )) >= 1)
        {
            l_U204[3] = 2;
        }
        break;
        case 2:
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dating_kiki" )) < 1)
        {
            l_U204[3] = 3;
        }
        break;
        case 3:
        l_U203 = 0;
        l_U204[3] = 0;
        break;
    }
    return;
}

void sub_10086()
{
    switch (l_U204[4])
    {
        case 0:
        if (sub_6000( l_U212 ))
        {
            if (sub_4995( 4, l_U212 ))
            {
                l_U204[4] = 1;
            }
        }
        break;
        case 1:
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dating_carmen" )) >= 1)
        {
            l_U204[4] = 2;
        }
        break;
        case 2:
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dating_carmen" )) < 1)
        {
            l_U204[4] = 3;
        }
        break;
        case 3:
        l_U203 = 0;
        l_U204[4] = 0;
        break;
    }
    return;
}

void sub_10303()
{
    int iVar2;

    if (l_U554 <= 0)
    {
        GET_GAME_TIMER( ref l_U553 );
        GENERATE_RANDOM_INT_IN_RANGE( sub_6776( 420.00000000 ), sub_6776( 630.00000000 ), ref l_U554 );
    }
    else
    {
        GET_GAME_TIMER( ref iVar2 );
        if (iVar2 >= (l_U553 + l_U554))
        {
            if ((NOT (sub_6000( 1 ))) AND (NOT (sub_6000( 2 ))))
            {
                if (NOT l_U566)
                {
                    sub_7633( 14, 39, 16383, 16383, ref l_U555 );
                    sub_8318( ref l_U555, 0 );
                    sub_8357( ref l_U555, 1 );
                    if (sub_8394( ref l_U555, 0 ))
                    {
                        l_U554 = -1;
                        l_U566 = 1;
                    }
                }
            }
            else if (NOT (sub_6000( 1 )))
            {
                if (NOT l_U567)
                {
                    sub_7633( 14, 38, 16383, 16383, ref l_U555 );
                    sub_8318( ref l_U555, 0 );
                    sub_8357( ref l_U555, 1 );
                    if (sub_8394( ref l_U555, 0 ))
                    {
                        l_U554 = -1;
                        l_U567 = 1;
                    }
                }
            }
            else if (NOT (sub_6000( 2 )))
            {
                if (NOT l_U568)
                {
                    sub_7633( 14, 37, 16383, 16383, ref l_U555 );
                    sub_8318( ref l_U555, 0 );
                    sub_8357( ref l_U555, 1 );
                    if (sub_8394( ref l_U555, 0 ))
                    {
                        l_U554 = -1;
                        l_U568 = 1;
                    }
                }
            }
            else
            {
                l_U554 = -1;
            };;;
        }
    }
    return;
}

void sub_10791(unknown uParam0)
{
    return;
}

void sub_10813()
{
    TERMINATE_THIS_SCRIPT();
    return;
}
