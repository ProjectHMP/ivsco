void main()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    iVar3 = -1;
    CREATE_WIDGET_GROUP( "Ambient" );
    START_NEW_WIDGET_COMBO();
    ADD_TO_WIDGET_COMBO( "club exterior" );
    ADD_TO_WIDGET_COMBO( "drug dealer" );
    ADD_TO_WIDGET_COMBO( "prostitution" );
    ADD_TO_WIDGET_COMBO( "shop interior" );
    FINISH_WIDGET_COMBO( "Script Type", ref iVar2 );
    ADD_WIDGET_TOGGLE( "Allow script to run", ref uVar4 );
    START_NEW_WIDGET_COMBO();
    ADD_TO_WIDGET_COMBO( "None" );
    ADD_TO_WIDGET_COMBO( "untill next active" );
    ADD_TO_WIDGET_COMBO( "untill next day" );
    ADD_TO_WIDGET_COMBO( "untill next week" );
    FINISH_WIDGET_COMBO( "Delay Type", ref uVar5 );
    END_WIDGET_GROUP();
    while (true)
    {
        WAIT( 0 );
        if (iVar2 == iVar3)
        {
            ;
        }
        else
        {
            uVar4 = g_U8600[iVar2]._fU0;
            uVar5 = g_U8600[iVar2]._fU4;
            iVar3 = iVar2;
        }
    }
    return;
}
