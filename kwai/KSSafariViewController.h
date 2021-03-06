//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSWebViewController.h"

#import "KSURLPortal-Protocol.h"
#import "KSURLPortalAnnotation-Protocol.h"

@class NSArray, NSString, UIBarButtonItem;

@interface KSSafariViewController : KSWebViewController <KSURLPortalAnnotation, KSURLPortal>
{
    _Bool _closeAfterOpenAppStoreLink;
    _Bool _hideBottomToolBar;
    _Bool _toolbarPreviouslyHidden;
    NSArray *_activityItems;
    NSArray *_applicationActivities;
    NSArray *_excludedActivityTypes;
    UIBarButtonItem *_reloadButton;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_forwardButton;
}

+ (id)ks_portalPath;
@property(nonatomic) _Bool toolbarPreviouslyHidden; // @synthesize toolbarPreviouslyHidden=_toolbarPreviouslyHidden;
@property(retain, nonatomic) UIBarButtonItem *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(retain, nonatomic) UIBarButtonItem *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIBarButtonItem *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(nonatomic) _Bool hideBottomToolBar; // @synthesize hideBottomToolBar=_hideBottomToolBar;
@property(nonatomic) _Bool closeAfterOpenAppStoreLink; // @synthesize closeAfterOpenAppStoreLink=_closeAfterOpenAppStoreLink;
@property(retain, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(retain, nonatomic) NSArray *applicationActivities; // @synthesize applicationActivities=_applicationActivities;
@property(retain, nonatomic) NSArray *activityItems; // @synthesize activityItems=_activityItems;
- (void).cxx_destruct;
- (void)ks_webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)ks_webViewDidFinishLoad:(id)arg1;
- (void)ks_webViewDidStartLoad:(id)arg1;
- (_Bool)ks_webView:(id)arg1 shouldStartLoad:(id)arg2;
- (void)action:(id)arg1;
- (void)finishLoad;
- (void)toggleState;
- (void)setupToolBarItems;
- (id)forwardButtonImage;
- (id)backButtonImage;
- (void)configNavigationBarWithWebView:(id)arg1 useBlack:(_Bool)arg2;
- (void)didTapBackNagigationButton:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)ks_setupViewControllerWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

