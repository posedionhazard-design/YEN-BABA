//
//  Drawst.m
//  Drawst
//
//  Created by Sniper on 2022/7/027.
//#import "Drawst.h"
#import "Drawzb.h"
#import "Drawlm.h"
#import "Drawdk.h"
#include <JRMemory/MemScan.h>
#import "JFPlayerPool.h"
#import "JFPropsPool.h"
#import "JFCommon.h"
#import "Color.h"
#import "imgui.h"
#import "imgui_internal.h"
#import "ImGuiWrapper.h"
#import "ImGuiStyleWrapper.h"
#import "TextEditorWrapper.h"
#import "GuiRenderer.h"
#import "baidu_font.h"
#import <Metal/Metal.h>
#import <MetalKit/MetalKit.h>
#import <Foundation/Foundation.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>
#include <JRMemory/MemScan.h>
#import <Metal/Metal.h>
#import <MetalKit/MetalKit.h>
#import <objc/runtime.h>
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <CFNetwork/CFNetwork.h>
#import "HeeeNoScreenShotView.h"
#include <FarsiType.h>
#import "icon.h"
#import "font.h"
#import "iconcpp.h"
#import "JFFloatingMenuView.h"
#import "mahoa.h"
#import "FCUUID.h"


#define iPhone8P ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1000, 1000), [[UIScreen mainScreen] currentMode].size) : NO)


#define kWidth  [UIScreen mainScreen].bounds.size.width//获取屏幕宽度
#define kHeight [UIScreen mainScreen].bounds.size.height//获取屏幕高度




using namespace std;
std::string string_format(const std::string &fmt, ...) {
    std::vector<char> str(100,'\0');
    va_list ap;
    while (1) {
        va_start(ap, fmt);
        auto n = vsnprintf(str.data(), str.size(), fmt.c_str(), ap);
        va_end(ap);
        if ((n > -1) && (size_t(n) < str.size())) {
            return str.data();
        }
        if (n > -1)
            str.resize( n + 1 );
        else
            str.resize( str.size() * 2);
    }
    return str.data();
}

@interface JFOverlayView () <GuiRendererDelegate> {
    ImFont *_espFont;
}



@property (nonatomic, strong) MTKView *mtkView;
@property (nonatomic, strong) GuiRenderer *renderer;
@property (nonatomic, strong) GuiRenderer *Ttime;

@property (nonatomic, strong) MTKView *view;


@end
UIWindow *Esp;
HeeeNoScreenShotView *HideEsp;




NSString* uuidRes;
NSString* uuidResb;
NSString *key;
NSUserDefaults *check;
NSString *jail;
NSString *namedv;
NSString *deviceType;
NSString *bundle;
NSString *ver;


BOOL igg1active = NO;
BOOL igg2active = NO;
BOOL igg3active = NO;

//NSString *tendv = [[UIDevice currentDevice] name];





@implementation JFOverlayView










#pragma mark - 菜单开关字符串
- (instancetype)initWithFrame:(CGRect)frame
{
    if (self = [super initWithFrame:frame]) {
        self.backgroundColor = [UIColor clearColor];
        self.userInteractionEnabled = NO;
        
        
        
        
        
        
        self.isplay = false;
        self.isStartTimer = false;
        self.isShowMenu = false;
        self.Noscrren = false;
        self.isBoxEsp = false;
        self.isBoneEsp = false;
        self.isHpBarEsp = false;
        self.isTextEsp = false;
        self.isAimbot = false;
        self.isNorecoil = false;
        self.isinstahaed = false;
        self.islaed1 = false;
        
        self.isNearDeathNotAim = false;
        self.isShowPropsVehicle = false;
        
        self.isNorecoil2 = 0;
        self.isNorecoil1 = 0;
        
        self.isShowPropsQBZ = false;
        self.isShowPropsVLA = false;
        self.isShowPropsM7 = false;
        self.isShowPropsVector = false;
        
        
        self.isShowPropsM416 = false;
        self.isShowPropsakm = false;
        self.isShowPropsSCAR = false;
        self.isShowPropsWeapon = false;
        self.isShowPropsArmor = false;
        self.isShowPropsSight = false;
        
        self.isShowProps6x = false;
        self.isShowProps8x = false;
        self.isShowProps4x = false;
        self.isBulletTrack1 = false;
        self.isBulletTrack2 = false;
        self.isShowPropsEarlyWarning = false;
        self.BPc = false;
        self.BoxWith = false;
        self.Pistol = false;
        self.isTeamMateEsp = false;
        self.isBulletTrack = false;
        self.islinebb = false;
        self.isFov= false;
        self.show_Magic = false;
        self.show_hit = false;
        self.show_Instant = false;
        self.isAimbot2 = false;
        self.isAdsAimbot = false;
        self.isGunAimbot = false;
        self.propsDistance = 300;
        self.aimbotPart = 4;
        self.aimbotRadius = 50;
        self.espDistance = 900;
        self.espit = 25;
        self.test= 0;
        self.test2= 45;
        self.test99= 50;
        self.test88= 55;
        
        
        self.Aim= 30;
        self.Testspeed= 35000;
        self.Testspeed2= 500000;
        
        
        self.Testspeed3= 0;
        
        self.Testspeed4= 0;
        
        
        
        self.Aim2= 2;
        self.isLineEsp = false;
        self.isLineEsp1 = false;
        self.AimR= 20;
        self.isZoom= 100.0f;
        self.isZoomm= 30;
        self.displayLabel = false;
        self.test99= 0.5;
        self.test88= 0;
        self.hit1 = false;
        
        self.AimRR= 800000;
        
        self.AimRRR= 800000;
        
        
        
        
        
        
        
        self.Aim3= 0.5;
        self.Aim4= -100;
        self.FPS= 60;
        [self setupUI];
    }
    return self;
}

#pragma mark
- (void)setupUI
{
    self.mtkView = [[MTKView alloc] initWithFrame:[UIScreen mainScreen].bounds];
    self.mtkView.backgroundColor = [UIColor clearColor];
    [[UIApplication sharedApplication].keyWindow addSubview:self.mtkView];
    self.mtkView.device = MTLCreateSystemDefaultDevice();
    if (!self.mtkView.device) {
        return;
    }
    
    self.renderer = [[GuiRenderer alloc] initWithView:self.mtkView];
    self.renderer.delegate = self;
    self.mtkView.delegate = self.renderer;
    [self.renderer initializePlatform];
}



#pragma mark -
- (void)setup
{
    ImGuiIO & io = ImGui::GetIO();
    ImFontConfig config;
    config.FontDataOwnedByAtlas = false;
    NSString *fontPath = @"/System/Library/Fonts/CoreAddition/ArialBold.ttf";
    _espFont =  io.Fonts->AddFontFromFileTTF(fontPath.UTF8String, 40.f,NULL,io.Fonts->GetGlyphRangesChineseFull());
    
    
    
    
    
    
    ImGui::StyleColorsClassic();//蓝色StyleColorsClassic。粉色 StyleColorsDark  白色StyleColorsLight
    
    
    config.FontDataOwnedByAtlas = false;

    
}
- (void)draw
{
    self.userInteractionEnabled = self.isShowMenu;
    [self drawOverlay];
    [self drawMenu];
    
  
}

#pragma mark

- (void)drawMenu
{
    self.userInteractionEnabled = self.isShowMenu;
    self.mtkView.userInteractionEnabled = self.isShowMenu;
    if (!_isShowMenu) {
        return;
    }
    
    HeeeNoScreenShotView *noScreenShotView = [[HeeeNoScreenShotView alloc] initWithFrame:CGRectMake(0, 0, 0, 0)];
    
    [noScreenShotView setUserInteractionEnabled:NO];
    
    [[[[UIApplication sharedApplication] windows]lastObject] addSubview:noScreenShotView];
    
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        
        
        
        CGFloat width = SCREEN_WIDTH * 0.5;
        CGFloat height = SCREEN_HEIGHT * 0.5;
        
        if (SCREEN_WIDTH > SCREEN_HEIGHT) {
            
            height = SCREEN_HEIGHT * 0.5;
            
        } else {
            
            width = SCREEN_WIDTH * 0.5;
        }
        
        HideEsp = [[HeeeNoScreenShotView alloc] initWithFrame:CGRectMake(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT)];
        HideEsp.userInteractionEnabled = NO;
        Esp = [UIApplication sharedApplication].keyWindow;
        [Esp addSubview:HideEsp];
        
        
        ImGuiIO & io = ImGui::GetIO();
        
        io.DisplaySize = ImVec2(width, height);
        
            ImGui::SetNextWindowPos(ImVec2((SCREEN_WIDTH - width) * 0.5, (SCREEN_HEIGHT - height) / 3), 0, ImVec2(0, 0));
            ImGui::SetNextWindowSize(ImVec2(450, 300));
        
        
        
        ImFont* font = ImGui::GetFont();
        font->Scale = 16.f / font->FontSize;
    });
        
   
   
    
        
        
    
        
        
    
    
    
    static int style_idx1 = 1;

    
    
    
    ImGui::Begin( "ASTON CHATS - V1.5" , &_isShowMenu, ImGuiWindowFlags_NoCollapse);
    if (ImGui::BeginTabBar("选项卡", ImGuiTabBarFlags_NoTooltip))
        
    {
        
        
        
        switch (style_idx1)//En
        {
            case 0:
        
        
        
        
                std::string arabic_text = "قائمه";
                std::string reversed_text = FarsiType::ConvertToFAGlyphs(arabic_text);
                //if (ImGui::TreeNode(reversed_text.c_str()))
                
                
        
        if (ImGui::BeginTabItem(reversed_text.c_str()))
        {
            
            std::string arabic_text111 = "بدا الغش";
            std::string reversed_text111 = FarsiType::ConvertToFAGlyphs(arabic_text111);
            
                        ImGui::Checkbox(reversed_text111.c_str(), &_isStartTimer);
            
            
            std::string arabic_text1 = "معلومات";
            std::string reversed_text1 = FarsiType::ConvertToFAGlyphs(arabic_text1);
            //if (ImGui::TreeNode(reversed_text.c_str()))
            
            ImGui::Checkbox(reversed_text1.c_str(), &_isTextEsp);
            ImGui::SameLine();
            ImGui::Columns(3);
            ImGui::NextColumn();
            
            std::string arabic_text2 = "خطوط";
            std::string reversed_text2 = FarsiType::ConvertToFAGlyphs(arabic_text2);
            ImGui::Checkbox(reversed_text2.c_str(), &_isLineEsp);
            
            ImGui::NextColumn();
            
            std::string arabic_text3 = "هيكل";
            std::string reversed_text3 = FarsiType::ConvertToFAGlyphs(arabic_text3);
            ImGui::Checkbox(reversed_text3.c_str(), &_isBoneEsp);
            ImGui::Columns(1);
            
            
            ImGui::Separator();
            
            
            
            
            std::string arabic_text4 = "تحذير قنبله";
            std::string reversed_text4 = FarsiType::ConvertToFAGlyphs(arabic_text4);
            ImGui::Checkbox(reversed_text4.c_str(), &_isShowPropsEarlyWarning);
            ImGui::SameLine();
            ImGui::Columns(3);
            ImGui::NextColumn();
            
            
            std::string arabic_text5 = "عدد لاعبين";
            std::string reversed_text5 = FarsiType::ConvertToFAGlyphs(arabic_text5);
            ImGui::Checkbox(reversed_text5.c_str(), &_isplay);
            ImGui::NextColumn();
            
            
            
            std::string arabic_text6 = "صحه الاعب";
            std::string reversed_text6 = FarsiType::ConvertToFAGlyphs(arabic_text6);
            ImGui::Checkbox(reversed_text6.c_str(), &_isHpBarEsp);
            ImGui::Columns(1);
            
            
            ImGui::Separator();
            
            std::string arabic_text7 = "انا لست هاك";
            std::string reversed_text7 = FarsiType::ConvertToFAGlyphs(arabic_text7);
            if (ImGui::Checkbox(reversed_text7.c_str(), &_show_Magic))
                
                
            {
                
                
            }
            
            ImGui::SameLine(180);
            
            std::string arabic_text8 = "تنظيف ببجي";
            std::string reversed_text8 = FarsiType::ConvertToFAGlyphs(arabic_text8);
            
            if (ImGui::Button(reversed_text8.c_str()))
            {}
            
            
            ImGui::Separator();
            ImGui::Text("FPS 16.667 ms / FPS (60.0 FPS)");
            ImGui::Text(" Copyright by @AstonCheats");
            ImGui::Separator();
            
            
            std::string arabic_text9 = "لغه";
            std::string reversed_text9 = FarsiType::ConvertToFAGlyphs(arabic_text9);
            
            ImGui::Combo (reversed_text9.c_str(), &style_idx1, "Arabic\0English\0");

            
            std::string arabic_text10 = "مدى الروئيه";
            std::string reversed_text10 = FarsiType::ConvertToFAGlyphs(arabic_text10);
            
            ImGui::SliderInt (reversed_text10.c_str(), &_espDistance, 0, 500);
            ImGui::Separator();
            
            
            
        
            
            //*****************************************************************//
            //Soon//
            //*****************************************************************//
            
            //*****************************************************************//
            
            
            //*****************************************************************//
            
            
     
        
            
            ImGui::EndTabItem();//结束
        }
       
                
                std::string arabic_text10 = "اعداد-الاستهداف";
                std::string reversed_text10 = FarsiType::ConvertToFAGlyphs(arabic_text10);
                
        
                if (ImGui::BeginTabItem (reversed_text10.c_str()))
        {
          
            
            
            std::string arabic_text12 = "مساعد استهداف";
            std::string reversed_text12 = FarsiType::ConvertToFAGlyphs(arabic_text12);
            
            
            ImGui::Checkbox(reversed_text12.c_str(), &_isAimbot);
            ImGui::SameLine(300);
            
            
            
            std::string arabic_text13 = "تجاهل النوك";
            std::string reversed_text13 = FarsiType::ConvertToFAGlyphs(arabic_text13);
            
            ImGui::Checkbox(reversed_text13.c_str(), &_isNearDeathNotAim);
            
            ImGui::Separator();

            
            
            std::string arabic_text14 = "رأس";
            std::string reversed_text14 = FarsiType::ConvertToFAGlyphs(arabic_text14);
            
            ImGui::RadioButton(reversed_text14.c_str(), &_aimbotPart, 6);
            ImGui::SameLine();
            ImGui::Columns(3);
            ImGui::NextColumn();
            
            std::string arabic_text15 = "رقبه";
            std::string reversed_text15 = FarsiType::ConvertToFAGlyphs(arabic_text15);
            
            ImGui::RadioButton(reversed_text15.c_str(), &_aimbotPart, 4);
            ImGui::NextColumn();
            
            std::string arabic_text16 = "صدر";
            std::string reversed_text16 = FarsiType::ConvertToFAGlyphs(arabic_text16);
            
            
            ImGui::RadioButton(reversed_text16.c_str(), &_aimbotPart, 1);
            ImGui::Columns(1);
            ImGui::Separator();

            std::string arabic_text17 = "دائره الاستهداف";
            std::string reversed_text17 = FarsiType::ConvertToFAGlyphs(arabic_text17);
            
            ImGui::Checkbox(reversed_text17.c_str(), &_isFov);
            ImGui::SameLine();
            
            std::string arabic_text18 = "دائره ";
            std::string reversed_text18 = FarsiType::ConvertToFAGlyphs(arabic_text18);
            
            ImGui::SliderInt(reversed_text18.c_str(), &_aimbotRadius, 0, 200);

       
                
                
                
                
                
                
                
            ImGui::Separator();
            ImGui::EndTabItem();//结束
        }
        
                
        
        
      
    
        
                std::string arabic_text11 = "عناصر";
                std::string reversed_text11 = FarsiType::ConvertToFAGlyphs(arabic_text11);
        
        if (ImGui::BeginTabItem(reversed_text11.c_str()))
        {
            
            
            
            
            
            
            
            
            //start
            
            if (ImGui::TreeNode("Equipment"))
            {
                
                
                
                ImGui::Checkbox("M416", &_isShowPropsM416);
                ImGui::SameLine();
                ImGui::Columns(3);
                ImGui::NextColumn();
                ImGui::Checkbox(" AKM", &_isShowPropsakm);
                ImGui::NextColumn();
                ImGui::Checkbox("SCAR", &_isShowPropsSCAR);
                ImGui::Columns(1);
                ImGui::Separator();
                
                
                //______________________________________________________________________________________//
                ImGui::Checkbox("M762", &_isShowPropsM7);
                ImGui::SameLine();
                ImGui::Columns(3);
                ImGui::NextColumn();
                ImGui::Checkbox("QBZ", &_isShowPropsQBZ);
                ImGui::NextColumn();
                ImGui::Checkbox(" VAL", &_isShowPropsVLA);
                ImGui::Separator();
                ImGui::Columns(1);
                ImGui::Checkbox(" Vector", &_isShowPropsVector);
                
                
                
                
                ImGui::Separator();
                
                if (ImGui::BeginMenu("Show Scoop"))
                {
                    
                    
                    ImGui::Checkbox("Scoop-3X", &_isShowPropsSight);
                    ImGui::SameLine();
                    ImGui::Checkbox("Scoop-4X", &_isShowProps4x);
                    ImGui::Separator();
                    ImGui::Checkbox("Scoop-6X", &_isShowProps6x);
                    ImGui::SameLine();
                    ImGui::Checkbox("Scoop-8X", &_isShowProps8x);
                    
                    
                    
                    ImGui::EndMenu();
                }
                ImGui::TreePop();
            }
            
            
            
            
            
            
            
            ImGui::Separator();
            if (ImGui::TreeNode("Other"))
            {
            
            ImGui::Checkbox("show cars", &_isShowPropsVehicle);
            ImGui::SameLine();
            ImGui::Columns(3);
            ImGui::NextColumn();
            ImGui::Checkbox("Flare gun", &_Pistol);
            ImGui::NextColumn();
            ImGui::Checkbox("show armor", &_isShowPropsArmor);
            ImGui::Columns(1);
                ImGui::Separator();
            //**************************************************************************//
            
            ImGui::Checkbox("Airdrop", &_BPc);
            ImGui::SameLine();
            ImGui::Columns(3);
            ImGui::NextColumn();
            ImGui::Checkbox("Accessory", &_isShowPropsAccessory);
            ImGui::NextColumn();
            ImGui::Checkbox("Bullets", &_isShowPropsBullet);
            ImGui::Columns(1);
            ImGui::Separator();
            //**************************************************************************//
            
            ImGui::Checkbox("Drug", &_isShowPropsDrug);
            ImGui::SameLine();
            ImGui::Columns(3);
          
            ImGui::NextColumn();
            ImGui::Checkbox("Box", &_BoxWith);
            ImGui::Columns(1);
            ImGui::Separator();
                
                
                ImGui::TreePop();
            }
                
                
            //**************************************************************************//
            
            //**************************************************************************//
            ImGui::SliderInt("Distance-Item", &_propsDistance, 10, 500);
            ImGui::Separator();
            
            
            
            
            ImGui::EndTabItem();//结束
        }
                
                
                
                
                
                
                
                
                
                
                
        
        //**************************************************************************//
        
        
        
        
        
        
        
        
        
                break;
                
        }
        
        
        
        
      
    
    //**********************************************************************//
    //**********************************************************************//
    //**********************************************************************//
    //**********************************************************************//
    //**********************************************************************//
    //**********************************************************************//
    //**********************************************************************//
    //**********************************************************************//
    //**********************************************************************//
    //**********************************************************************//
    //**********************************************************************//
    //**********************************************************************//
    //__________________________________________________//Aribe_______________________________________________
        switch (style_idx1)//En
        
        {
    case 1:
        
        
        
        
        
        
        
        
        
        
        if (ImGui::BeginTabItem("Menu"))
        {
            ImGui::Checkbox("Start Esp", &_isStartTimer);
            
            
            
            
            ImGui::Checkbox("info", &_isTextEsp);
            ImGui::SameLine();
            ImGui::Columns(3);
            ImGui::NextColumn();
            ImGui::Checkbox("Line", &_isLineEsp);
            
            ImGui::NextColumn();
            ImGui::Checkbox("Bone", &_isBoneEsp);
            ImGui::Columns(1);
            
            
            ImGui::Separator();
            ImGui::Checkbox("grenade warning", &_isShowPropsEarlyWarning);
            ImGui::SameLine();
            ImGui::Columns(3);
            ImGui::NextColumn();
            ImGui::Checkbox("Nearby", &_isplay);
            ImGui::NextColumn();
            ImGui::Checkbox("Hpbar", &_isHpBarEsp);
            ImGui::Columns(1);
            
            
            ImGui::Separator();
            
            
            
            if (ImGui::Checkbox("I'm Not Hacker", &_show_Magic))
                
                
            {
                
                
            }
            
            ImGui::SameLine(180);
            
            if (ImGui::Button("    Clean-pubg    "))
            {}
            
            
            ImGui::Separator();
            ImGui::Text("FPS 16.667 ms / FPS (60.0 FPS)");
            ImGui::Text(" Copyright by @AstonCheats");
            ImGui::Separator();
            
            
            ImGui::Combo ("language", &style_idx1, "Arabic\0English\0");

            
            
            
            ImGui::SliderInt("Distance-esp", &_espDistance, 0, 500);
            ImGui::Separator();
            
            
            
            
            
            //*****************************************************************//
            //Soon//
            //*****************************************************************//
            
            //*****************************************************************//
            
            
            //*****************************************************************//
            
            
            
            
            
            ImGui::EndTabItem();//结束
        }
        
        
        if (ImGui::BeginTabItem("Aim-Settings"))
        {
            
            ImGui::Checkbox("Aimbot", &_isAimbot);
            ImGui::SameLine(300);
            ImGui::Checkbox("Aimknockdown", &_isNearDeathNotAim);
            
            ImGui::Separator();
            
            ImGui::RadioButton("Head", &_aimbotPart, 6);
            ImGui::SameLine();
            ImGui::Columns(3);
            ImGui::NextColumn();
            ImGui::RadioButton("Neck", &_aimbotPart, 4);
            ImGui::NextColumn();
            ImGui::RadioButton("Body", &_aimbotPart, 1);
            ImGui::Columns(1);
            ImGui::Separator();
            
            ImGui::Checkbox("ShowFov", &_isFov);
            ImGui::SameLine();
            ImGui::SliderInt("Fov", &_aimbotRadius, 0, 200);
            
            
            
            
            
            
            
            
            
            ImGui::Separator();
            ImGui::EndTabItem();//结束
        }
        
        
        
        
        
        
        
        
        
        
        if (ImGui::BeginTabItem("Item"))
        {
            
            
            
            
            
            
            
            
            //start
            
            if (ImGui::TreeNode("Equipment"))
            {
                
                
                
                ImGui::Checkbox("M416", &_isShowPropsM416);
                ImGui::SameLine();
                ImGui::Columns(3);
                ImGui::NextColumn();
                ImGui::Checkbox(" AKM", &_isShowPropsakm);
                ImGui::NextColumn();
                ImGui::Checkbox("SCAR", &_isShowPropsSCAR);
                ImGui::Columns(1);
                ImGui::Separator();
                
                
                //______________________________________________________________________________________//
                ImGui::Checkbox("M762", &_isShowPropsM7);
                ImGui::SameLine();
                ImGui::Columns(3);
                ImGui::NextColumn();
                ImGui::Checkbox("QBZ", &_isShowPropsQBZ);
                ImGui::NextColumn();
                ImGui::Checkbox(" VAL", &_isShowPropsVLA);
                ImGui::Separator();
                ImGui::Columns(1);
                ImGui::Checkbox(" Vector", &_isShowPropsVector);
                
                
                
                
                ImGui::Separator();
                
                if (ImGui::BeginMenu("Show Scoop"))
                {
                    
                    
                    ImGui::Checkbox("Scoop-3X", &_isShowPropsSight);
                    ImGui::SameLine();
                    ImGui::Checkbox("Scoop-4X", &_isShowProps4x);
                    ImGui::Separator();
                    ImGui::Checkbox("Scoop-6X", &_isShowProps6x);
                    ImGui::SameLine();
                    ImGui::Checkbox("Scoop-8X", &_isShowProps8x);
                    
                    
                    
                    ImGui::EndMenu();
                }
                ImGui::TreePop();
            }
            
            
            
            
            
            
            
            ImGui::Separator();
            if (ImGui::TreeNode("Other"))
            {
                
                ImGui::Checkbox("show cars", &_isShowPropsVehicle);
                ImGui::SameLine();
                ImGui::Columns(3);
                ImGui::NextColumn();
                ImGui::Checkbox("Flare gun", &_Pistol);
                ImGui::NextColumn();
                ImGui::Checkbox("show armor", &_isShowPropsArmor);
                ImGui::Columns(1);
                ImGui::Separator();
                //**************************************************************************//
                
                ImGui::Checkbox("Airdrop", &_BPc);
                ImGui::SameLine();
                ImGui::Columns(3);
                ImGui::NextColumn();
                ImGui::Checkbox("Accessory", &_isShowPropsAccessory);
                ImGui::NextColumn();
                ImGui::Checkbox("Bullets", &_isShowPropsBullet);
                ImGui::Columns(1);
                ImGui::Separator();
                //**************************************************************************//
                
                ImGui::Checkbox("Drug", &_isShowPropsDrug);
                ImGui::SameLine();
                ImGui::Columns(3);
                
                ImGui::NextColumn();
                ImGui::Checkbox("Box", &_BoxWith);
                ImGui::Columns(1);
                ImGui::Separator();
                
                
                ImGui::TreePop();
            }
            
            
            //**************************************************************************//
            
            //**************************************************************************//
            ImGui::SliderInt("Distance-Item", &_propsDistance, 10, 500);
            ImGui::Separator();
            
            
            
            
            ImGui::EndTabItem();//结束
        }
                
                //**************************************************************************//
                
                break;
                
        }
                
                
                
                
                
                
                ImGui::EndTabBar();//结束
                
        }
        
        
        
        
        
        
        
        
     
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    ImGui::End();
}




















- (void)drawOverlay

{
    
    
    
  
    


    
    
    
    if (!self.isStartTimer) {
        return;
    }
    if (self.isFov) {
        
        
        
        float thicknes = 2;
        [self drawAimRangeWithCenter:ImVec2(SCREEN_WIDTH * 0.5, SCREEN_HEIGHT * 0.5) radius:self.aimbotRadius color:Color::Red numSegments:18 thicknes:thicknes];
        
        
        
        
        
        
        
    }
    
    
    
  
    
    
    
    
    
    
    
    int enemyCount = 0;
    for (JFPlayer *player in [IFuckYou getInstance].playerList) {
        if (player.type == PlayerTypeEnemy) {
            enemyCount++;
        }
    }
    
    
    
    
    
//    ___________________________________________________________
    
    
    
    
    
    
    
    
    
    
    
    
    [self playerCountEsp:enemyCount];
    
    for (JFPlayer *player in [IFuckYou getInstance].playerList) {
        
        if (player.isDead || (player.type == PlayerTypeTeam && !self.isTeamMateEsp)) {
            continue;
        }
        
        Color color = Color::White;
        
        
        if (player.type == PlayerTypeTeam) {
            color = Color::Red;
        } else {
            if (player.isVisible) {
                color = Color::Green;
            } else {
                color = Color::White;
            }
        }
        
        Color line = Color::White;
        if (player.type == PlayerTypeTeam) {
            line = Color::Red;
        } else {
            if (player.isVisible) {
                line = Color::Green;
            } else {
                line = Color::White;
            }
        }
        
        
        //**************************************************************************************************************************//
        if (player.type == PlayerTypeEnemy && player.isFallDown) {
            color = Color::Xue2;
        }
        // line track sniper
        
     
        //**************************************************************************************************************************//
        
        
        if ((self.isFov ) && player.isBestAimTarget) {
            
            // Aimbot Sniper
            
            [self drawCircleFilledWithCenter:ImVec2(player.box.origin.x + player.box.size.width * 0.5, player.box.origin.y + player.box.size.height * 0.3) radius:3 color:Color::Green numSegments:20];
            
            
            
        }
        
        //**************************************************************************************************************************//
        
   
        
        
        
        
        
        
        
        if (self.isTextEsp) {
            [self textEsp:player distanceColor:color];
        }
        
        if (self.isHpBarEsp) {
            [self hpBarEsp:player];
        }
        
      
        
        if (self.isLineEsp) {
            float offset = 5;
            
            if (self.isHpBarEsp) {
                offset += 10;
            }
            
            if (self.isTextEsp) {
                
                offset += 20;}
            if (player.isAI==1) {
                [self drawLineWithStartPoint:ImVec2(SCREEN_WIDTH * 0.5, 55) endPoint:ImVec2(CGRectGetMidX(player.box), CGRectGetMinY(player.box) - offset) color:Color::White thicknes:0.05];
                
                
                
           
                
                
                
                
          
            
                
                
                
                
            }else{
                
                
                
            
                    [self drawLineWithStartPoint:ImVec2(SCREEN_WIDTH * 0.5, 55) endPoint:ImVec2(CGRectGetMidX(player.box), CGRectGetMinY(player.box) - offset) color:line thicknes:0.05];
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                }
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
            
        
        
        
        
        if (self.isBoneEsp) {
            [self boneEsp1:player];
            
            
            
            
        }
    }
    
    
    
    
    for (JFProps *props in [IFuckYou getInstance].propsList) {
        
        
        
        //武器
        if (props.type == PropsTypeWeapon && self.isShowPropsWeapon) {
            [self propsEsp:props color:Color::Orange];
        }
        
        
        
        
        
        
        
        if (props.type == PropsTypeM416 && self.isShowPropsM416) {
            [self propsEsp:props color:Color::Orange];
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        if (props.type == PropsTypeSCAR && self.isShowPropsSCAR) {
            [self propsEsp:props color:Color::Orange];
        }
        
        if (props.type == PropsTypeSCAR && self.isShowPropsQBZ) {
            [self propsEsp:props color:Color::Orange];
        }
        
        if (props.type == PropsTypeSCAR && self.isShowPropsVLA) {
            [self propsEsp:props color:Color::Orange];
        }
        
        if (props.type == PropsTypeM7 && self.isShowPropsM7) {
            [self propsEsp:props color:Color::Orange];
        }
        if (props.type == PropsTypeVector && self.isShowPropsVector) {
            [self propsEsp:props color:Color::Orange];
        }
        
        if (props.type == PropsTypeakm && self.isShowPropsakm) {
            [self propsEsp:props color:Color::Orange];
        }
        //信号枪
        if (props.type == Flaregun && self.Pistol) {
            [self propsEsp:props color:Color::Red];
        }
        //防具
        if (props.type == PropsTypeArmor && self.isShowPropsArmor) {
            [self propsEsp:props color:Color::White];
        }
        //倍镜
        if (props.type == PropsTypeSight && self.isShowPropsSight) {
            [self propsEsp:props color:Color::White];
        }
        
        if (props.type == PropsType6x && self.isShowProps6x) {
            [self propsEsp:props color:Color::White];
        }
        
        
        if (props.type == PropsType4x && self.isShowProps4x) {
            [self propsEsp:props color:Color::White];
        }
        
        if (props.type == PropsType8x && self.isShowProps8x) {
            [self propsEsp:props color:Color::White];
        }
        
        
        //配件
        if (props.type == PropsTypeAccessory && self.isShowPropsAccessory) {
            [self propsEsp:props color:Color::White];
        }
        //子弹
        if (props.type == PropsTypeBullet && self.isShowPropsBullet) {
            [self propsEsp:props  color:Color::Yellow];
        }
        //药
        if (props.type == PropsTypeDrug && self.isShowPropsDrug) {
            [self propsEsp:props color:Color::White];
        }
        //骨灰盒
        if (props.type == PickUpListWrapperActor && self.BoxWith) {
            [self propsEsp:props color:Color::White];
        }
        //载具
        if (props.type == PropsTypeVehicle && self.isShowPropsVehicle) {
            [self propsEsp:props color:Color::Orange];
            
        }
        
        
        
        
        
        
        
        
        //boom
        if (props.type == PropsTypeEarlyWarning && self.isShowPropsEarlyWarning) {
            
            
      
            if (props.distance<= 10) {
                
                float thicknes = 2;
                [self drawCircleWithCenter:ImVec2(props.screenPos.X, props.screenPos.Y) radius:8 color:Color::Yellow numSegments:18 thicknes:thicknes];
                
                
                
                
                
                [self drawCircleFilledWithCenter:ImVec2(props.screenPos.X, props.screenPos.Y) radius:6 color:Color::Red numSegments:20];
                
                
                
                
                
            }
            
            if (props.distance<= 20&& props.distance >=10)
            {
                
                float thicknes = 2;
                [self drawCircleWithCenter:ImVec2(props.screenPos.X, props.screenPos.Y) radius:8 color:Color::Yellow numSegments:18 thicknes:thicknes];
                
                
                
                
                
                [self drawCircleFilledWithCenter:ImVec2(props.screenPos.X, props.screenPos.Y) radius:6 color:Color::Yellow numSegments:20];
                
                
                
                
            }
            if (props.distance<= 80&& props.distance >=20)
            {
                
                float thicknes = 2;
                [self drawCircleWithCenter:ImVec2(props.screenPos.X, props.screenPos.Y) radius:8 color:Color::Yellow numSegments:18 thicknes:thicknes];
                
                
                
                
                
                [self drawCircleFilledWithCenter:ImVec2(props.screenPos.X, props.screenPos.Y) radius:6 color:Color::Green numSegments:20];
                
                
            }
            
            
            
            
            
            
            
            
            
            
         
                
                
                
                
                
                
                
                
                
         
    
    

                
                
                
                
                
                
                
                
                
                
                
                
                
                
                

            
            
            
            
            
            if (props.distance<= 10) {
                
                [self propsEsp:props color:Color::Red];
                
                
                
                
                [self drawTextWithText:string_format("MOVE, MOVE, MOVE")
                                   pos:ImVec2(SCREEN_WIDTH * 0.5, 150)
                            isCentered:true
                                 color:Color::Red
                               outline:true
                              fontSize:33];
                
                
                
                
            }
            
            if (props.distance<= 20&& props.distance >=10)
            {
                [self propsEsp:props color:Color::Yellow];
                
                
                
                
                [self drawTextWithText:string_format("MOVE, MOVE, MOVE")
                                   pos:ImVec2(SCREEN_WIDTH * 0.5, 150)
                            isCentered:true
                                 color:Color::Yellow
                               outline:true
                              fontSize:33];
                
                
                
                
            }
            if (props.distance<= 80&& props.distance >=20)
            {
                
                [self propsEsp:props color:Color::Green];
                
                
                
                
                
                
                
            }
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
        }
    }
    
}




#pragma mark
- (void)propsEsp:(JFProps *)props color:(Color)color
{
    [self drawTextWithText:string_format("%s [%dm]", props.name.c_str(), props.distance)
                       pos:ImVec2(props.screenPos.X, props.screenPos.Y)
                isCentered:true
                     color:color
                   outline:false
                  fontSize:15];
}
//绘制人数



//绘制雪条
- (void)hpBarEsp:(JFPlayer *)player
{
    float rate = 1.0f * player.hp / player.maxHp;
    // float width = 120;
    float width = 100;//100old
    // float height = 5;
    float height = 1.5;//1.5old
    float x = CGRectGetMidX(player.box) - width * 0.5;//0.5
    // float y = CGRectGetMinY(player.box) - height - 5;
    float y = CGRectGetMinY(player.box) - height - 7;//-7
    
    
    ImVec2 vec[3];
    vec[0] = ImVec2(x+45,y+2);
    vec[1] = ImVec2(x+50,y+7);
    vec[2] = ImVec2(x+55,y+2);
    
    
    
    
    
    
    
    
    
    
    
    if (player.isAI==1) {
        
        Color colorT = Color::bott;
        
        colorT.a= 0.5 * 255;
        

        ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        
        
        
       
    }else{
        
        
     
        
        if (player.teamNo == 1) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 2) {
            Color colorT = Color::rdd;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 3) {
            Color colorT = Color::bubb;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 4) {
            Color colorT = Color::fuck;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 5) {
            Color colorT = Color::boy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 6) {
            Color colorT = Color::yyy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 7) {
            Color colorT = Color::yyyw;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 8) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 9) {
            Color colorT = Color::hier;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 10) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        if (player.teamNo == 11) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 12) {
            Color colorT = Color::rdd;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 13) {
            Color colorT = Color::bubb;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 14) {
            Color colorT = Color::fuck;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 15) {
            Color colorT = Color::boy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 16) {
            Color colorT = Color::yyy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 17) {
            Color colorT = Color::yyyw;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 18) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 19) {
            Color colorT = Color::hier;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 20) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        if (player.teamNo == 21) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 22) {
            Color colorT = Color::rdd;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 23) {
            Color colorT = Color::bubb;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 24) {
            Color colorT = Color::fuck;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 25) {
            Color colorT = Color::boy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 26) {
            Color colorT = Color::yyy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 27) {
            Color colorT = Color::yyyw;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 28) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 29) {
            Color colorT = Color::hier;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 30) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        
        
        if (player.teamNo == 31) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 32) {
            Color colorT = Color::rdd;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 33) {
            Color colorT = Color::bubb;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 34) {
            Color colorT = Color::fuck;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 35) {
            Color colorT = Color::boy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 36) {
            Color colorT = Color::yyy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 37) {
            Color colorT = Color::yyyw;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 38) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 39) {
            Color colorT = Color::hier;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 40) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        if (player.teamNo == 41) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 42) {
            Color colorT = Color::rdd;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 43) {
            Color colorT = Color::bubb;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 44) {
            Color colorT = Color::fuck;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 45) {
            Color colorT = Color::boy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 46) {
            Color colorT = Color::yyy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 47) {
            Color colorT = Color::yyyw;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 48) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 49) {
            Color colorT = Color::hier;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 50) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        
        
        if (player.teamNo == 61) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 62) {
            Color colorT = Color::rdd;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 63) {
            Color colorT = Color::bubb;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 64) {
            Color colorT = Color::fuck;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 65) {
            Color colorT = Color::boy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 66) {
            Color colorT = Color::yyy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 67) {
            Color colorT = Color::yyyw;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 68) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 69) {
            Color colorT = Color::hier;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 70) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 71) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 72) {
            Color colorT = Color::rdd;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 73) {
            Color colorT = Color::bubb;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 74) {
            Color colorT = Color::fuck;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 75) {
            Color colorT = Color::boy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 76) {
            Color colorT = Color::yyy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 77) {
            Color colorT = Color::yyyw;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 78) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 79) {
            Color colorT = Color::hier;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 80) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        
        
        
        
        
        
        
        
        
        if (player.teamNo == 81) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 82) {
            Color colorT = Color::rdd;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 83) {
            Color colorT = Color::bubb;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 84) {
            Color colorT = Color::fuck;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 85) {
            Color colorT = Color::boy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 86) {
            Color colorT = Color::yyy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 87) {
            Color colorT = Color::yyyw;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 88) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 89) {
            Color colorT = Color::hier;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 90) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        
        
        
        
        if (player.teamNo == 91) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 92) {
            Color colorT = Color::rdd;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 93) {
            Color colorT = Color::bubb;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 94) {
            Color colorT = Color::fuck;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 95) {
            Color colorT = Color::boy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 96) {
            Color colorT = Color::yyy;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 97) {
            Color colorT = Color::yyyw;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        if (player.teamNo == 98) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 99) {
            Color colorT = Color::hier;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        
        if (player.teamNo == 100) {
            Color colorT = Color::sky1;
            
            colorT.a= 0.5 * 255;
            
            ImGui::GetBackgroundDrawList()->AddConvexPolyFilled(vec, 3 , vec,3 ,[self getImU32:colorT]);

        }
        
        

        
        
        
        
        
        
        
        
        
        
        
        
    }
    
    Color color = Color::White;
    
    if (rate < 0.35) {
        color = Color::Red;
    } else if (rate < 0.75) {
        color = Color::Orange;
        
    }
    color.a = 0.7*255;
    [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width * rate, height) color:color];
    
}



- (void)playerCountEsp:(int)count
{
    
    
    
        
        [self drawTextWithText:string_format("%d", count)
                           pos:ImVec2(SCREEN_WIDTH * 0.5, 25)
                    isCentered:true
                         color:Color::Red
                       outline:true
                      fontSize:25];
    
    
}



- (void)textEsp:(JFPlayer *)player distanceColor:(Color)distanceColor
{
    float width = 100;
    float height = 14;
    float x = CGRectGetMidX(player.box) - width * 0.5;
    float y = CGRectGetMinY(player.box) - height - 10;
    //Color colorTeamNumber =Color(colorArray[player.teamNo % (sizeof(colorArray)/4)],0.5*255);
    if (player.isAI==1) {
        float teamNoWidth = 20;
        
        [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::bot1];
        [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::bott];
        
        [self drawTextWithText:string_format("%d", player.teamNo)
                           pos:ImVec2(x + teamNoWidth * 0.5, y)
                    isCentered:true
                         color:Color::White
                       outline:false
                      fontSize:13];
        
        NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
        if (player.isAI) {
            name =[NSMutableString stringWithString:@"Rebot"];
        }
        [self drawTextWithText:name.UTF8String
                           pos:ImVec2(x + teamNoWidth + 3, y + 0)
                    isCentered:false
                         color:Color::White
                       outline:false
                      fontSize:13];
        
        string distance = string_format("[%dm]", player.distance);
        ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
        [self drawTextWithText:distance
                           pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                    isCentered:true
                         color:Color::White
                       outline:true
                      fontSize:10];
        
        
        
        
        
        
        
        
        
    }else{
        
        
        
        
        
        
        if (player.teamNo == 1) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:10];
            
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
        
        
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
        }
        
        if (player.teamNo == 2) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::rdd];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::rddt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
        }
        
        if (player.teamNo == 3) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::bubb];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::bubbt];
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
        }
        
        
        if (player.teamNo == 4) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::fuck];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::fuckt];
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
        }
        
        if (player.teamNo == 5) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::boy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::boyt];
            
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
        }
        
        if (player.teamNo == 6) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyyt];
            
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
        }
        
        
        if (player.teamNo == 7) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyyw];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyywt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
        }
        
        if (player.teamNo == 8) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
        }
        
        
        if (player.teamNo == 9) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::hier];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::hirt];
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
        }
        
        
        if (player.teamNo == 10) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
        }
        
       
        
        
        
        
        
        
        
    

        
        if (player.teamNo == 11) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
        }
        
        if (player.teamNo == 12) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::rdd];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::rddt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 13) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::bubb];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::bubbt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 14) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::fuck];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::fuckt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 15) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::boy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::boyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 16) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 17) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyyw];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyywt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 18) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 19) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::hier];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::hirt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 20) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        
        if (player.teamNo == 21) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
        }
        
        if (player.teamNo == 22) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::rdd];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::rddt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 23) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::bubb];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::bubbt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 24) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::fuck];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::fuckt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 25) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::boy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::boyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 26) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 27) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyyw];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyywt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 28) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 29) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::hier];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::hirt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 30) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        
        
        
        
        
        
        
        if (player.teamNo == 31) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
        }
        
        if (player.teamNo == 32) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::rdd];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::rddt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 33) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::bubb];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::bubbt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 34) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::fuck];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::fuckt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 35) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::boy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::boyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 36) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 37) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyyw];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyywt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 38) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 39) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::hier];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::hirt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 40) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        if (player.teamNo == 41) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
        }
        
        if (player.teamNo == 42) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::rdd];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::rddt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 43) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::bubb];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::bubbt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 44) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::fuck];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::fuckt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 45) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::boy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::boyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 46) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 47) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyyw];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyywt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 48) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 49) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::hier];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::hirt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 50) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 51) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
        }
        
        if (player.teamNo == 52) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::rdd];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::rddt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 53) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::bubb];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::bubbt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 54) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::fuck];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::fuckt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 55) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::boy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::boyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 56) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 57) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyyw];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyywt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 58) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 59) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::hier];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::hirt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 60) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 61) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
        }
        
        if (player.teamNo == 62) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::rdd];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::rddt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 63) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::bubb];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::bubbt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 64) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::fuck];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::fuckt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 65) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::boy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::boyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 66) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 67) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyyw];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyywt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 68) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 69) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::hier];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::hirt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 70) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        
        if (player.teamNo == 71) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
        }
        
        if (player.teamNo == 72) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::rdd];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::rddt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 73) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::bubb];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::bubbt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 74) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::fuck];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::fuckt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 75) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::boy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::boyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 76) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 77) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyyw];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyywt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 78) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 79) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::hier];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::hirt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 80) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        
        
        
        
        
        
        if (player.teamNo == 81) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
        }
        
        if (player.teamNo == 82) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::rdd];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::rddt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 83) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::bubb];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::bubbt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 84) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::fuck];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::fuckt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 85) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::boy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::boyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 86) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 87) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyyw];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyywt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 88) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 89) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::hier];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::hirt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 90) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        
        
        if (player.teamNo == 91) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
        }
        
        if (player.teamNo == 92) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::rdd];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::rddt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 93) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::bubb];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::bubbt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 94) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::fuck];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::fuckt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 15) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::boy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::boyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 96) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyy];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyyt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 97) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::yyyw];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::yyywt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        if (player.teamNo == 98) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
            
            
        }
        
        
        if (player.teamNo == 99) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::hier];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::hirt];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
        }
        
        
        if (player.teamNo == 100) {
            float width = 100;
            float height = 14;
            float x = CGRectGetMidX(player.box) - width * 0.5;
            float y = CGRectGetMinY(player.box) - height - 10;
            
            
            float teamNoWidth = 20;
            
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(width, height) color:Color::sky1];
            [self drawRectFilledWithPos:ImVec2(x, y) size:ImVec2(teamNoWidth, height) color:Color::skyT];
            
            [self drawTextWithText:string_format("%d", player.teamNo)
                               pos:ImVec2(x + teamNoWidth * 0.5, y)
                        isCentered:true
                             color:Color::White
                           outline:false
                          fontSize:15];
            
            //std::string sniper1 = FarsiType::ConvertToFAGlyphs(player.name);
            NSMutableString *name = [NSMutableString stringWithCString:player.name.c_str() encoding:NSUTF8StringEncoding];
            
            
            
            
            if (player.isAI) {
                name =[NSMutableString stringWithString:@"Rebot"];
            }
            [self drawTextWithText:FarsiType::ConvertToFAGlyphs(name.UTF8String)
                               pos:ImVec2(x + teamNoWidth + 3, y + 0)
                        isCentered:false
                             color:Color::White
                           outline:false
                          fontSize:12];
            
            
            string distance = string_format("[%dm]", player.distance);
            ImVec2 distanceSize = _espFont->CalcTextSizeA(9.5, MAXFLOAT, 0.0f, distance.c_str());
            [self drawTextWithText:distance
                               pos:ImVec2(CGRectGetMidX(player.box), y - distanceSize.y+50)
                        isCentered:true
                             color:Color::White
                           outline:true
                          fontSize:10];
            
        }
        
        
    }}
Vector2 GetCrossPointLineToCircle(Vector2 p, Circle2 c)
{
    Vector2 pointA,pointB;
    pointA.X = (c.X + sqrt(c.radius*c.radius/(1+((c.Y-p.Y)/(c.X-p.X))*((c.Y-p.Y)/(c.X-p.X)))));
    pointB.X = (c.X - sqrt(c.radius*c.radius/(1+((c.Y-p.Y)/(c.X-p.X))*((c.Y-p.Y)/(c.X-p.X)))));
    pointA.Y = (p.Y + (pointA.X -p.X)*(c.Y-p.Y)/(c.X-p.X));
    pointB.Y = (p.Y + (pointB.X -p.X)*(c.Y-p.Y)/(c.X-p.X));
    float min_x,min_y,max_x,max_y;
    min_x = MIN(p.X, c.X);
    min_y = MIN(p.Y, c.Y);
    max_x = MAX(p.X, c.X);
    max_y = MAX(p.Y, c.Y);
    if (pointA.X >= min_x && pointA.X <=max_x) {
        return pointA;
    }
    else{
        return pointB;
    }
    
    
}











- (void)boneEsp1:(JFPlayer *)player
{
    
    
    
    Color invisibleColor = Color::Red;
    Color visibleColor =  Color::Green;
    
    
    float thicknes = 0.8;
    [self drawCircleWithCenter:ImVec2(player.boneData.head.X, player.boneData.head.Y) radius:CGRectGetWidth(player.box) * 0.15f color:player.boneVisibleData.head ? visibleColor : invisibleColor numSegments:5 thicknes:thicknes];
    
    
    
    
    
    [self drawLineWithStartPoint:ImVec2(player.boneData.chest.X, player.boneData.chest.Y) endPoint:ImVec2(player.boneData.pelvis.X, player.boneData.pelvis.Y) color:player.boneVisibleData.chest ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.chest.X, player.boneData.chest.Y) endPoint:ImVec2(player.boneData.leftShoulder.X, player.boneData.leftShoulder.Y) color:player.boneVisibleData.chest ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.chest.X, player.boneData.chest.Y) endPoint:ImVec2(player.boneData.rightShoulder.X, player.boneData.rightShoulder.Y) color:player.boneVisibleData.chest ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.leftShoulder.X, player.boneData.leftShoulder.Y) endPoint:ImVec2(player.boneData.leftElbow.X, player.boneData.leftElbow.Y) color:player.boneVisibleData.leftShoulder ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.rightShoulder.X, player.boneData.rightShoulder.Y) endPoint:ImVec2(player.boneData.rightElbow.X, player.boneData.rightElbow.Y) color:player.boneVisibleData.rightShoulder ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.pelvis.X, player.boneData.pelvis.Y) endPoint:ImVec2(player.boneData.leftThigh.X, player.boneData.leftThigh.Y) color:player.boneVisibleData.pelvis ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.pelvis.X, player.boneData.pelvis.Y) endPoint:ImVec2(player.boneData.rightThigh.X, player.boneData.rightThigh.Y) color:player.boneVisibleData.pelvis ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.leftElbow.X, player.boneData.leftElbow.Y) endPoint:ImVec2(player.boneData.leftHand.X, player.boneData.leftHand.Y) color:player.boneVisibleData.leftElbow ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.rightElbow.X, player.boneData.rightElbow.Y) endPoint:ImVec2(player.boneData.rightHand.X, player.boneData.rightHand.Y) color:player.boneVisibleData.rightElbow ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.leftThigh.X, player.boneData.leftThigh.Y) endPoint:ImVec2(player.boneData.leftKnee.X, player.boneData.leftKnee.Y) color:player.boneVisibleData.leftThigh ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.rightThigh.X, player.boneData.rightThigh.Y) endPoint:ImVec2(player.boneData.rightKnee.X, player.boneData.rightKnee.Y) color:player.boneVisibleData.rightThigh ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.leftKnee.X, player.boneData.leftKnee.Y) endPoint:ImVec2(player.boneData.leftFoot.X, player.boneData.leftFoot.Y) color:player.boneVisibleData.leftKnee ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.rightKnee.X, player.boneData.rightKnee.Y) endPoint:ImVec2(player.boneData.rightFoot.X, player.boneData.rightFoot.Y) color:player.boneVisibleData.rightKnee ? visibleColor : invisibleColor thicknes:thicknes];
    
    
    [self drawLineWithStartPoint:ImVec2(player.boneData.chest.X, player.boneData.chest.Y) endPoint:ImVec2(player.boneData.pelvis.X, player.boneData.pelvis.Y) color:player.boneVisibleData.chest ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.chest.X, player.boneData.chest.Y) endPoint:ImVec2(player.boneData.leftShoulder.X, player.boneData.leftShoulder.Y) color:player.boneVisibleData.chest ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.chest.X, player.boneData.chest.Y) endPoint:ImVec2(player.boneData.rightShoulder.X, player.boneData.rightShoulder.Y) color:player.boneVisibleData.chest ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.leftShoulder.X, player.boneData.leftShoulder.Y) endPoint:ImVec2(player.boneData.leftElbow.X, player.boneData.leftElbow.Y) color:player.boneVisibleData.leftShoulder ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.rightShoulder.X, player.boneData.rightShoulder.Y) endPoint:ImVec2(player.boneData.rightElbow.X, player.boneData.rightElbow.Y) color:player.boneVisibleData.rightShoulder ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.pelvis.X, player.boneData.pelvis.Y) endPoint:ImVec2(player.boneData.leftThigh.X, player.boneData.leftThigh.Y) color:player.boneVisibleData.pelvis ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.pelvis.X, player.boneData.pelvis.Y) endPoint:ImVec2(player.boneData.rightThigh.X, player.boneData.rightThigh.Y) color:player.boneVisibleData.pelvis ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.leftElbow.X, player.boneData.leftElbow.Y) endPoint:ImVec2(player.boneData.leftHand.X, player.boneData.leftHand.Y) color:player.boneVisibleData.leftElbow ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.rightElbow.X, player.boneData.rightElbow.Y) endPoint:ImVec2(player.boneData.rightHand.X, player.boneData.rightHand.Y) color:player.boneVisibleData.rightElbow ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.leftThigh.X, player.boneData.leftThigh.Y) endPoint:ImVec2(player.boneData.leftKnee.X, player.boneData.leftKnee.Y) color:player.boneVisibleData.leftThigh ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.rightThigh.X, player.boneData.rightThigh.Y) endPoint:ImVec2(player.boneData.rightKnee.X, player.boneData.rightKnee.Y) color:player.boneVisibleData.rightThigh ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.leftKnee.X, player.boneData.leftKnee.Y) endPoint:ImVec2(player.boneData.leftFoot.X, player.boneData.leftFoot.Y) color:player.boneVisibleData.leftKnee ? visibleColor : invisibleColor thicknes:thicknes];
    [self drawLineWithStartPoint:ImVec2(player.boneData.rightKnee.X, player.boneData.rightKnee.Y) endPoint:ImVec2(player.boneData.rightFoot.X, player.boneData.rightFoot.Y) color:player.boneVisibleData.rightKnee ? visibleColor : invisibleColor thicknes:thicknes];
    
    
    
    
    
    
    
    
    
    
    
    
}







- (void)drawAimRangeWithCenter:(ImVec2)center radius:(float)radius color:(Color)color numSegments:(int)numSegments thicknes:(float)thicknes
{
    ImGui::GetOverlayDrawList()->AddCircle(center, radius, [self getImU32:color], numSegments, thicknes);
}
- (void)drawLineWithStartPoint:(ImVec2)startPoint endPoint:(ImVec2)endPoint color:(Color)color thicknes:(float)thicknes
{
    ImGui::GetBackgroundDrawList()->AddLine(startPoint, endPoint, [self getImU32:color], thicknes);
}

- (void)drawCircleWithCenter:(ImVec2)center radius:(float)radius color:(Color)color numSegments:(int)numSegments thicknes:(float)thicknes
{
    ImGui::GetBackgroundDrawList()->AddCircle(center, radius, [self getImU32:color], numSegments, thicknes);
}

- (void)drawCircleFilledWithCenter:(ImVec2)center radius:(float)radius color:(Color)color numSegments:(int)numSegments
{
    ImGui::GetBackgroundDrawList()->AddCircleFilled(center, radius, [self getImU32:color], numSegments);
}
- (void)drawTextWithText:(string)text pos:(ImVec2)pos isCentered:(bool)isCentered color:(Color)color outline:(bool)outline fontSize:(float)fontSize
{
    const char *str = text.c_str();
    ImVec2 vec2 = pos;
    if (isCentered) {
        ImVec2 textSize = _espFont->CalcTextSizeA(fontSize, MAXFLOAT, 0.0f, str);
        vec2.x -= textSize.x * 0.5f;
    }//qq654153159
    if (outline)
    {
        ImU32 outlineColor = [self getImU32:Color::Black];//
        ImGui::GetBackgroundDrawList()->AddText(_espFont, fontSize, ImVec2(vec2.x + 1, vec2.y + 1), outlineColor, str);
        ImGui::GetBackgroundDrawList()->AddText(_espFont, fontSize, ImVec2(vec2.x - 1, vec2.y - 1), outlineColor, str);
        ImGui::GetBackgroundDrawList()->AddText(_espFont, fontSize, ImVec2(vec2.x + 1, vec2.y - 1), outlineColor, str);
        ImGui::GetBackgroundDrawList()->AddText(_espFont, fontSize, ImVec2(vec2.x - 1, vec2.y + 1), outlineColor, str);
    }
    ImGui::GetBackgroundDrawList()->AddText(_espFont, fontSize, vec2, [self getImU32:color], str);
}

- (void)drawRectWithPos:(ImVec2)pos size:(ImVec2)size color:(Color)color thicknes:(float)thicknes
{
    ImGui::GetBackgroundDrawList()->AddRect(pos, ImVec2(pos.x + size.x, pos.y + size.y), [self getImU32:color], 0, 0, thicknes);
}
- (void)drawRectWithPos1:(ImVec2)pos size:(ImVec2)size color:(Color)color thicknes:(float)thicknes
{
    ImGui::GetBackgroundDrawList()->AddRect(pos, ImVec2(pos.x + size.x, pos.y + size.y), [self getImU32:color], 20, ImDrawCornerFlags_All, thicknes);
}

- (void)drawRectFilledWithPos:(ImVec2)pos size:(ImVec2)size color:(Color)color
{
    ImGui::GetBackgroundDrawList()->AddRectFilled(pos, ImVec2(pos.x + size.x, pos.y + size.y), [self getImU32:color], 0, 0);
}
- (void)drawRectFilledWithPosBoGoc:(ImVec2)pos size:(ImVec2)size color:(Color)color
{
    ImGui::GetBackgroundDrawList()->AddRectFilled(pos, ImVec2(pos.x + size.x, pos.y + size.y), [self getImU32:color], 20, ImDrawCornerFlags_All);
}
- (void)drawRectFilledWithPosTronGoc:(ImVec2)pos size:(ImVec2)size color:(Color)color
{
    ImGui::GetBackgroundDrawList()->AddRectFilled(pos, ImVec2(pos.x + size.x, pos.y + size.y), [self getImU32:color], 0, 0);
    
    
}


- (ImU32)getImU32:(Color)color
{
    return ((color.a & 0xff) << 24) + ((color.b & 0xff) << 16) + ((color.g & 0xff) << 8) + (color.r & 0xff);
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self.renderer handleEvent:event view:self];
}

- (void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self.renderer handleEvent:event view:self];
}

- (void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self.renderer handleEvent:event view:self];
}

- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self.renderer handleEvent:event view:self];
}

@end








