//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AliLuaViewContainerSubviewProtocal-Protocol.h"
#import "TBSDKServerDelegate-Protocol.h"

@class AliLuaViewController, AppMonitorStatTransaction, NSDate, NSDictionary, NSString, NSURL, TBSDKMTOPServer, UIButton, UIImageView;
@protocol AliLuaViewContainerProtocal, AliWebViewControllerProtocal;

@interface AliUnionViewController : UIViewController <TBSDKServerDelegate, AliLuaViewContainerSubviewProtocal>
{
    _Bool _requestLuaPageByMtop;
    _Bool _webObserverAdded;
    long long _defaultStatusBarStyle;
    CDUnknownBlockType _exceptionCallback;
    id <AliLuaViewContainerProtocal> _jhsContainerScrollView;
    AppMonitorStatTransaction *_requestTransaction;
    AppMonitorStatTransaction *_totaltimeTransaction;
    CDUnknownBlockType _lvExClassRegister;
    NSString *_package;
    AliLuaViewController *_luaViewController;
    UIViewController *_webViewContrller;
    UIViewController *_currentViewController;
    UIButton *_button;
    NSDictionary *_response;
    NSDictionary *_args;
    NSDate *_requestBeginDate;
    NSString *_monitorPointName;
    id <AliWebViewControllerProtocal> _webViewContrllerAdapter;
    NSDictionary *_jtArgs;
    NSURL *_jtNavUrl;
    UIImageView *_defaultImageView;
    CDUnknownBlockType _mtopCallback;
    TBSDKMTOPServer *_request;
    struct CGRect _expectRect;
    struct CGRect _errorTipsRect;
}

+ (_Bool)isLuaViewUrl:(id)arg1;
+ (_Bool)isLuaViewH5Url:(id)arg1;
+ (_Bool)isLuaViewNativeUrl:(id)arg1;
+ (_Bool)iSLuaViewHomeUrl:(id)arg1;
@property(retain, nonatomic) TBSDKMTOPServer *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType mtopCallback; // @synthesize mtopCallback=_mtopCallback;
@property(retain, nonatomic) UIImageView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(retain, nonatomic) NSURL *jtNavUrl; // @synthesize jtNavUrl=_jtNavUrl;
@property(copy, nonatomic) NSDictionary *jtArgs; // @synthesize jtArgs=_jtArgs;
@property(retain, nonatomic) id <AliWebViewControllerProtocal> webViewContrllerAdapter; // @synthesize webViewContrllerAdapter=_webViewContrllerAdapter;
@property(copy, nonatomic) NSString *monitorPointName; // @synthesize monitorPointName=_monitorPointName;
@property(nonatomic) struct CGRect errorTipsRect; // @synthesize errorTipsRect=_errorTipsRect;
@property(nonatomic) _Bool webObserverAdded; // @synthesize webObserverAdded=_webObserverAdded;
@property(retain) NSDate *requestBeginDate; // @synthesize requestBeginDate=_requestBeginDate;
@property(copy, nonatomic) NSDictionary *args; // @synthesize args=_args;
@property(copy, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) UIViewController *webViewContrller; // @synthesize webViewContrller=_webViewContrller;
@property(retain, nonatomic) AliLuaViewController *luaViewController; // @synthesize luaViewController=_luaViewController;
@property(copy, nonatomic) NSString *package; // @synthesize package=_package;
@property(nonatomic) _Bool requestLuaPageByMtop; // @synthesize requestLuaPageByMtop=_requestLuaPageByMtop;
@property(copy, nonatomic) CDUnknownBlockType lvExClassRegister; // @synthesize lvExClassRegister=_lvExClassRegister;
@property(retain, nonatomic) AppMonitorStatTransaction *totaltimeTransaction; // @synthesize totaltimeTransaction=_totaltimeTransaction;
@property(retain, nonatomic) AppMonitorStatTransaction *requestTransaction; // @synthesize requestTransaction=_requestTransaction;
@property(nonatomic) __weak id <AliLuaViewContainerProtocal> jhsContainerScrollView; // @synthesize jhsContainerScrollView=_jhsContainerScrollView;
@property(copy, nonatomic) CDUnknownBlockType exceptionCallback; // @synthesize exceptionCallback=_exceptionCallback;
@property(nonatomic) struct CGRect expectRect; // @synthesize expectRect=_expectRect;
@property(nonatomic) long long defaultStatusBarStyle; // @synthesize defaultStatusBarStyle=_defaultStatusBarStyle;
- (void).cxx_destruct;
- (void)setupSwipeGesture;
- (void)setupBackTopView;
- (void)setupPullToRefreshView;
- (id)getMonitorPageName;
- (id)getMonitorPointName;
- (id)monitorTransaction:(id)arg1;
- (void)stopRequest;
- (_Bool)refreshTrigged;
- (id)scrollToTopScrollView;
- (void)utJianZhanFailed:(id)arg1 error:(id)arg2 line:(id)arg3;
- (void)utJianZhanSuccess:(id)arg1;
- (void)shouldUpdatePluginNavigationItem:(id)arg1;
- (void)setHidesBottomBarWhenPushed:(_Bool)arg1;
- (void)clearJUSPCacheData;
- (id)getJUSPCacheData;
- (id)getPkgInfoFromResponseData:(id)arg1;
- (void)responseWithObject:(id)arg1 error:(id)arg2 success:(_Bool)arg3;
- (void)getLuaPage;
- (void)loadLuaPageWithBlock:(CDUnknownBlockType)arg1;
- (id)stringByURLEncodingString:(id)arg1;
- (id)ttid;
- (void)requestFailed:(id)arg1;
- (void)requestSuccess:(id)arg1;
- (void)requestViaMtopWithArgs:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)mtopArgs:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)switchToLuaMode:(id)arg1;
- (void)switchToWebMode:(id)arg1;
- (void)switchToWebMode;
- (void)createLuaViewController:(id)arg1;
- (id)newLuaViewControllerWithUrl:(id)arg1 query:(id)arg2;
- (void)setupLuaViewController;
- (void)createWebViewController;
- (void)setupWebViewController;
- (void)switchFrom:(id)arg1 to:(id)arg2;
- (void)switchTo:(id)arg1;
- (void)showNavigation;
- (void)buttonCallback:(id)arg1;
- (void)bringButtonToFront;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)setupAutoLayoutProperty;
- (void)removeDefaultImgeView;
- (void)checkDefaultImage;
- (void)setupAppearance;
- (void)performLuaViewLoading;
- (void)startMonitor;
- (void)viewDidLoad;
- (_Bool)isHttpUrl:(id)arg1;
- (_Bool)canDegradeToH5;
- (id)originH5Url;
- (id)originStr;
- (id)originUrl;
- (void)dealloc;
- (id)webviewControllerAdapter;
- (void)createSubViewController;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 errorTipsRect:(struct CGRect)arg3;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
