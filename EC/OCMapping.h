//
//  OCMapping.h
//  EasyCode
//
//  Created by gao feng on 2016/10/15.
//  Copyright © 2016年 music4kid. All rights reserved.
//

#ifndef OCMapping_h
#define OCMapping_h

#pragma mark- UIViewController

#define KeyOC_UIViewController_VDL @"vdl"
#define KeyOC_UIViewController_VDL_Value @"\
- (void)viewDidLoad\n\
{\n\
    [super viewDidLoad];\n\
    \n\
    <#code#>\n\
}"

#define KeyOC_UIViewController_VWA @"vwa"
#define KeyOC_UIViewController_VWA_Value @"\
- (void)viewWillAppear:(BOOL)animated\n\
{\n\
    [super viewWillAppear:animated];\n\
    \n\
    <#code#>\n\
}"

#define KeyOC_UIViewController_VDA @"vda"
#define KeyOC_UIViewController_VDA_Value @"\
- (void)viewDidAppear:(BOOL)animated\n\
{\n\
    [super viewDidAppear:animated];\n\
    \n\
    <#code#>\n\
}"

#define KeyOC_UIViewController_VWD @"vwd"
#define KeyOC_UIViewController_VWD_Value @"\
- (void)viewWillDisappear:(BOOL)animated\n\
{\n\
    [super viewWillDisappear:animated];\n\
    \n\
    <#code#>\n\
}"

#define KeyOC_UIViewController_VDD @"vdd"
#define KeyOC_UIViewController_VDD_Value @"\
- (void)viewDidDisappear:(BOOL)animated\n\
{\n\
    [super viewDidDisappear:animated];\n\
    \n\
    <#code#>\n\
}"

#define KeyOC_UIViewController_DRM @"drm"
#define KeyOC_UIViewController_DRM_Value @"\
- (void)didReceiveMemoryWarning\n\
{\n\
    <#code#>\n\
}"

#define KeyOC_UIViewController_SIO @"sio"
#define KeyOC_UIViewController_SIO_Value @"\
- (UIInterfaceOrientationMask)supportedInterfaceOrientations\n\
{\n\
    <#code#>\n\
}"

#define KeyOC_UIViewController_PIO @"pio"
#define KeyOC_UIViewController_PIO_Value @"\
- (UIInterfaceOrientation)preferredInterfaceOrientationForPresentation\n\
{\n\
    <#code#>\n\
}"


#pragma mark- UIView

#define KeyOC_UIView_HTW @"htw"
#define KeyOC_UIView_HTW_Value @"\
- (nullable UIView *)hitTest:(CGPoint)point withEvent:(nullable UIEvent *)event\n\
{\n\
    <#code#>\n\
}"

#define KeyOC_UIView_PIE @"pie"
#define KeyOC_UIView_PIE_Value @"\
- (BOOL)pointInside:(CGPoint)point withEvent:(nullable UIEvent *)event\n\
{\n\
    <#code#>\n\
}"

#define KeyOC_UIView_CPT @"cpt"
#define KeyOC_UIView_CPT_Value @"\
- (CGPoint)convertPoint:(CGPoint)point toView:(nullable UIView *)view\n\
{\n\
    <#code#>\n\
}"

#define KeyOC_UIView_CPF @"cpf"
#define KeyOC_UIView_CPF_Value @"\
- (CGPoint)convertPoint:(CGPoint)point fromView:(nullable UIView *)view\n\
{\n\
    <#code#>\n\
}"

#define KeyOC_UIView_CRP @"crp"
#define KeyOC_UIView_CRP_Value @"\
- (CGRect)convertRect:(CGRect)rect toView:(nullable UIView *)view\n\
{\n\
    <#code#>\n\
}"

#define KeyOC_UIView_CRF @"crf"
#define KeyOC_UIView_CRF_Value @"\
- (CGRect)convertRect:(CGRect)rect fromView:(nullable UIView *)view\n\
{\n\
    <#code#>\n\
}"

#define KeyOC_UIView_DR @"dr"
#define KeyOC_UIView_DR_Value @"\
- (void)drawRect:(CGRect)rect\n\
{\n\
    <#code#>\n\
}"

#pragma mark- UIAppication
#define KeyOC_UIApplication_DRU @"dru"
#define KeyOC_UIApplication_DRU_Value @"\
- (void)application:(UIApplication *)application didRegisterUserNotificationSettings:(UIUserNotificationSettings *)notificationSettings\n\
{\n\
    <#code#>\n\
}"

#define KeyOC_UIApplication_DRF @"drf"
#define KeyOC_UIApplication_DRF_Value @"\
- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken\n\
{\n\
    <#code#>\n\
}"

#define KeyOC_UIApplication_DRT @"drt"
#define KeyOC_UIApplication_DRT_Value @"\
- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error\n\
{\n\
    <#code#>\n\
}"

#define KeyOC_UIApplication_DRR @"drr"
#define KeyOC_UIApplication_DRR_Value @"\
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo\n\
{\n\
    <#code#>\n\
}"

#define KeyOC_UIApplication_DRL @"drl"
#define KeyOC_UIApplication_DRL_Value @"\
- (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification\n\
{\n\
    <#code#>\n\
}"

#pragma mark- GCD
#define KeyOC_GCD_DAFM @"dafm"
#define KeyOC_GCD_DAFM_Value @"\
dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(<#delayInSeconds#> * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{\n\
    <#code to be executed after a specified delay#>\n\
});"

#define KeyOC_GCD_DASM @"dasm"
#define KeyOC_GCD_DASM_Value @"\
dispatch_async(dispatch_get_main_queue(), ^{\n\
    <#code#>\n\
});"

#define KeyOC_GCD_DAFG @"dafg"
#define KeyOC_GCD_DAFG_Value @"\
dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(<#delayInSeconds#> * NSEC_PER_SEC)), dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{\n\
    <#code to be executed after a specified delay#>\n\
});"

#define KeyOC_GCD_DASG @"dasg"
#define KeyOC_GCD_DASG_Value @"\
dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{\n\
    <#code#>\n\
});"


#pragma mark- MISC
#define KeyOC_MISC_DEL @"del"
#define KeyOC_MISC_DEL_Value @"\
([UIApplication sharedApplication].delegate)"

#define KeyOC_MISC_V @"v"
#define KeyOC_MISC_V_Value @"\
- (void)<#method#>"

#define KeyOC_MISC_C @"c"
#define KeyOC_MISC_C_Value @"\
[UIColor colorWith<#color#>]"

#define KeyOC_MISC_W @"ws"
#define KeyOC_MISC_W_Value @"\
__weak __typeof(self) weakSelf = self;"

#define KeyOC_MISC_N @"not"
#define KeyOC_MISC_N_Value @"\
[[NSNotificationCenter defaultCenter] <#method#>];"

#define KeyOC_MISC_U @"us"
#define KeyOC_MISC_U_Value @"\
[[NSUserDefaults standardUserDefaults] <#method#>];"

#define KeyOC_MISC_F @"fm"
#define KeyOC_MISC_F_Value @"\
[[NSFileManager defaultManager] <#method#>];"

#define KeyOC_MISC_URL @"url"
#define KeyOC_MISC_URL_Value @"\
[NSURL URLWithString:<#(nonnull NSString *)#>]"

#define KeyOC_MISC_IMG @"img"
#define KeyOC_MISC_IMG_Value @"\
[UIImage imageNamed:<#(nonnull NSString *)#>];"

#define KeyOC_MISC_BUN @"bun"
#define KeyOC_MISC_BUN_Value @"\
[[NSBundle mainBundle] pathForResource:<#(nullable NSString *)#> ofType:<#(nullable NSString *)#>];"



#pragma mark- Template
#define KeyOC_Template_Button @"btn"
#define KeyOC_Template_Button_Value @"\
UIButton *btn = [UIButton new];\n\
[btn setBackgroundColor:<#(UIColor * _Nullable)#>];\n\
[btn setTitle:<#(nullable NSString *)#> forState:UIControlStateNormal];\n\
[btn addTarget:<#(nullable id)#> action:<#(nonnull SEL)#> forControlEvents:UIControlEventTouchUpInside];\n\
[<#self#> addSubview:btn];\n\
<#self.btn#> = btn;"

#define KeyOC_Template_Label @"lb"
#define KeyOC_Template_Label_Value @"\
UILabel *lb = [UILabel new];\n\
lb.text = <#text#>;\n\
lb.textColor = <#(UIColor * _Nullable)#>;\n\
lb.font = [UIFont systemFontOfSize:<#(CGFloat)#>];\n\
lb.backgroundColor = [UIColor clearColor];\n\
[<#self#> addSubview:lb];\n\
<#self.lb#> = lb;"

#define KeyOC_Template_ImageView @"iv"
#define KeyOC_Template_ImageView_Value @"\
UIImageView* imgV = [UIImageView new];\n\
imgV.backgroundColor = [UIColor clearColor];\n\
imgV.image = [UIImage imageNamed:<#(nonnull NSString *)#>];\n\
[<#self#> addSubview:imgV];\n\
<#self.imgV#> = imgV;"


#define KeyOC_Template_Init @"ini"
#define KeyOC_Templete_Init_Value @"\
- (instancetype)initWith<#name#>:(<#type#> *)<#value#>\n\
{\n\
    if (self = [super init]) {\n\
    }\n\
    return self;\n\
}"


#pragma mark- Property
#define KeyOC_Property_ns @"@pns"
#define KeyOC_Property_ns_Value @"\
@property (strong, nonatomic) <#type#> *<#name#>;"

#define KeyOC_Property_na @"@pna"
#define KeyOC_Property_na_Value @"\
@property (assign, nonatomic) <#type#> <#name#>;"

#define KeyOC_Property_nc @"@pnc"
#define KeyOC_Property_nc_Value @"\
@property (copy, nonatomic) <#type#> *<#name#>;"

#define KeyOC_Property_nw @"@pnw"
#define KeyOC_Property_nw_Value @"\
@property (weak, nonatomic) <#type#> *<#name#>;"

#pragma mark - Protocol
#define KeyOC_Protocol_table @"tab"
#define KeyOC_Protocol_table_Value @"\
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView\n\
{\n\
    return <#1#>;\n\
}\n\
\n\
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section\n\
{\n\
    return <#count#>;\n\
}\n\
\n\
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath\
{\n\
    <#type#> *cell = [tableView dequeueReusableCellWithIdentifier:<#(nonnull NSString *)#>];\n\
    return cell;\n\
}\n\
\n\
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath\n\
{\n\
    [tableView deselectRowAtIndexPath:indexPath animated:YES];\n\
}"


#endif /* OCMapping_h */
