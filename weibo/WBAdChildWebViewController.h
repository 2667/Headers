//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBasicWebViewController.h"

@class UILabel;

@interface WBAdChildWebViewController : WBBasicWebViewController
{
    UILabel *_loadingTipsLabel;
}

@property(retain, nonatomic) UILabel *loadingTipsLabel; // @synthesize loadingTipsLabel=_loadingTipsLabel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)applicationWillChangeStatusBarFrameNotification:(id)arg1;
- (_Bool)allowsBackForwardNavigationGestures;
- (_Bool)displaysLoadingProgressBar;
- (_Bool)_shouldShowMoreMenu;
- (void)wb_webViewDidFinishLoad:(id)arg1;
- (void)wb_webViewDidStartLoad:(id)arg1;
- (void)_setupLoadingTips;
- (void)layoutViews;
- (void)viewDidLoad;
- (id)initWithUrlString:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)init;

@end

