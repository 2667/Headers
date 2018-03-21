//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_UICustomNaviBarViewController.h>

@class CFT_BrightnessControlUtils, CFT_TPPersonalityResManager, CFT_UIBaseTabViewController, CFT_UIPayCodeGuideViewController, CFT_UIPayCodeViewController, CFT_UITransferQRCodeViewController, NSString, UIButton, UIImage, UINavigationController, UIView;

@interface CFT_UIQRCodeMainViewController : CFT_UICustomNaviBarViewController
{
    UIImage *_navBarImg;
    UIImage *_tabBarImg;
    UIButton *_payTabBtn;
    UIButton *_revTabBtn;
    UIView *_mainView;
    CFT_UIPayCodeViewController *_payCodeVC;
    CFT_UIPayCodeGuideViewController *_payCodeGuideVC;
    CFT_UITransferQRCodeViewController *_revCodeVC;
    _Bool _isPayCodeShow;
    _Bool _isGotoOpenPayCodeView;
    CFT_BrightnessControlUtils *_brightnessControl;
    CFT_UIBaseTabViewController *_curVC;
    CFT_TPPersonalityResManager *_personalResManager;
    long long _viewType;
    NSString *_qqSkey;
    NSString *_qqSkeyType;
    NSString *_uin;
    NSString *_name;
    NSString *_comeFrom;
    NSString *_appInfo;
    UINavigationController *_superNavController;
}

@property(retain, nonatomic) UINavigationController *superNavController; // @synthesize superNavController=_superNavController;
@property(retain, nonatomic) NSString *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) NSString *comeFrom; // @synthesize comeFrom=_comeFrom;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *qqSkeyType; // @synthesize qqSkeyType=_qqSkeyType;
@property(retain, nonatomic) NSString *qqSkey; // @synthesize qqSkey=_qqSkey;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
- (void)dealloc;

@end
