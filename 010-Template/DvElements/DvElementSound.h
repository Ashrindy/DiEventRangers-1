typedef struct
{
	dvString elementName;
	uint32 field_40;
	float frameStart;
	float frameEnd;
	uint32 field_4c;
	uint32 field_50;
	uint32 field_54;
	uint32 field_58;
	uint32 field_5c;
	dvString cueName;
	uint32 field_a0;
	uint32 field_a4;
    
}DvElementSound<optimize=false, read=Str("%s", elementName.str), name="DvElementSound">;