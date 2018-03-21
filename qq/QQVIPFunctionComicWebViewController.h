//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewController.h>

#import <QQMainProject/QQTabMenuDelegate-Protocol.h>

@class NSString, QQShareWebRichMsgLogic, QQTabMenu;
@protocol QQVIPFunctionWebViewLoadDelegate, QQVIPFunctionWebViewPresentingDelegate;

@interface QQVIPFunctionComicWebViewController : QQWebViewController <QQTabMenuDelegate>
{
    _Bool _needsShowComicBackButton;
    _Bool _receivedStartDownloadNoti;
    _Bool _hasPayThisTime;
    int _initStatus;
    int _lastNavMenuSelectedIndex;
    _Bool _isReloadUrlToChangeSubIndex;
    _Bool _hasReloadUrlToChangeSubIndex;
    _Bool _isComicIndexPage;
    _Bool _contentInsetNeedChange;
    _Bool _havePushOutDownoadList;
    NSString *_switchCallback;
    QQTabMenu *_tabMenu;
    id <QQVIPFunctionWebViewPresentingDelegate> _presentingDelegate;
    id <QQVIPFunctionWebViewLoadDelegate> _loadDelegate;
    QQShareWebRichMsgLogic *_sendRichMsgLogic;
    CDUnknownBlockType _comicRightButtonEventHandler;
}

@property(copy, nonatomic) CDUnknownBlockType comicRightButtonEventHandler; // @synthesize comicRightButtonEventHandler=_comicRightButtonEventHandler;
@property(retain, nonatomic) QQShareWebRichMsgLogic *sendRichMsgLogic; // @synthesize sendRichMsgLogic=_sendRichMsgLogic;
@property(nonatomic) _Bool havePushOutDownoadList; // @synthesize havePushOutDownoadList=_havePushOutDownoadList;
@property(nonatomic) _Bool contentInsetNeedChange; // @synthesize contentInsetNeedChange=_contentInsetNeedChange;
@property(nonatomic) _Bool isComicIndexPage; // @synthesize isComicIndexPage=_isComicIndexPage;
@property(nonatomic) __weak id <QQVIPFunctionWebViewLoadDelegate> loadDelegate; // @synthesize loadDelegate=_loadDelegate;
@property(nonatomic) __weak id <QQVIPFunctionWebViewPresentingDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
@property(retain, nonatomic) QQTabMenu *tabMenu; // @synthesize tabMenu=_tabMenu;
@property(retain, nonatomic) NSString *switchCallback; // @synthesize switchCallback=_switchCallback;
- (void).cxx_destruct;
- (_Bool)isTopViewOfWebViewCtr;
- (void)startDownloadComic:(id)arg1;
- (void)setNeedsShowComicBackButton;
- (void)showComicRightButtonWithTitle:(id)arg1 orImage:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)showDownloadSuccessToast;
- (void)showComicBackButtonAfterLoadingView;
- (void)handleModelLeftButtonClick;
- (void)handleRightButtonClick:(id)arg1;
- (void)handleBackButtonClick;
- (void)setNavigationBarColorWithContentOffsetIfNeed;
- (void)viewDidBecomeInvisible;
- (void)viewWillBecomeVisible;
- (void)setRightButton:(id)arg1;
- (void)reSetLeftButtonTitle;
- (void)leftButtonFrame:(id)arg1;
- (void)setRightDragToGoBackEnable:(_Bool)arg1 popGuestureRespondRect:(struct CGRect)arg2;
- (void)setRightDragToGoBackEnable:(_Bool)arg1 popGuestureRespondWidth:(double)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)showWithJsOptions:(id)arg1 navigationController:(id)arg2;
- (id)getDataForConfig:(id)arg1;
- (struct CGRect)webViewRectByStyleAndOrientation;
- (void)leftButtonClick:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)didSelectIndex:(int)arg1;
- (id)strenchImage:(id)arg1;
- (void)restoreNavTabUIWithTransparent:(_Bool)arg1;
- (int)getNavMenuSelectedIndex;
- (id)getNavTabsStatus;
- (void)setNavTabRedPointWithIndexArray:(id)arg1 Hidden:(_Bool)arg2;
- (void)createNavTabWithSubTextArr:(id)arg1 subIndex:(int)arg2;
- (void)getNavTabParametersFromUrl:(id)arg1;
- (void)dealloc;
- (id)initWith:(id)arg1 forStyle:(long long)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
