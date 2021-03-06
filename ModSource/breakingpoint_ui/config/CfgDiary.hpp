// Generated by unRap v1.06 by Kegetys

class CfgDiary 
{
	class FixedPages 
	{
		class Units {
			displayName = "$STR_A3_CfgDiary_FixedPages_Units";
			shortcuts[] = {22};
			indexTitle = "%UNIT_ID: %UNIT_NAME";
			indexIcon = "%ICON_UNIT_TYPE";
			recordTitle = " %UNIT_NAME";
			text = "%UNIT_GRP_NAME:%UNIT_ID%UNIT_GRP_LEADER<br/>%UNIT_VEH_NAME %UNIT_VEH_POSITION<br/><br/>%UNIT_SKILLS<br/>%LINK_UNIT_GEAR%LINK_UNIT_TEAMSWITCH<br />";
			skill = "";
		};
		
		class Players {
			displayName = "$STR_A3_CfgDiary_FixedPages_Players";
			shortcuts[] = {};
			indexTitle = "%PLAYER_NAME";
			indexIcon = "%ICON_PLAYERS_STATE";
			recordTitle = " %PLAYER_NAME";
			text = "<font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_PL_NAME</font> %PLAYER_FULLNAME<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_PL_MAIL</font> %PLAYER_EMAIL<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_PL_ICQ</font> %PLAYER_ICQ<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_PL_REMARK</font> %PLAYER_REMARK<br/>%PLAYER_SQUAD<br/><img image='#(argb,8,8,3)color(1,1,1,0.1)' height='1' width='640' /><br /><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_PING</font> %PLAYER_PING_MIN %PLAYER_PING_AVG %PLAYER_PING_MAX<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_BANDWIDTH</font> %PLAYER_BANDWIDTH_MIN %PLAYER_BANDWIDTH_AVG %PLAYER_BANDWIDTH_MAX<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_DESYNC</font> %PLAYER_DESYNC<br/>%LINK_PLAYER_MUTE";
			squad = "<img image='#(argb,8,8,3)color(1,1,1,0.1)' height='1' width='640' /><br /><font size='18'>%SQUAD_TITLE</font><br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_SQ_NAME</font> <h1>%SQUAD_NAME</h1><br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_SQ_WEB</font> %SQUAD_WEB<br/><font color='#99ffffff' face='PuristaLight'>%$STR_DISP_MP_SQ_MAIL</font> %SQUAD_EMAIL<br/><br/><img width='80' height='80' image='%SQUAD_PICTURE' />";
		};
	};
};
