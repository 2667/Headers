//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEIMInputViewControllerDelegate-Protocol.h"
#import "AWEIMMessageListViewControllerDelegate-Protocol.h"
#import "AWEIMSingleMessageDataControllerDelegate-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEIMInputViewController, AWEIMMessageListViewController, AWEIMMessageNavView, AWEIMSendMessageController, AWEIMSingleMessageDataController, AWEIMStrangerTopFollowView, AWEIMUser, NSString, UIPanGestureRecognizer, UIView;

@interface AWEIMMessageBaseViewController : UIViewController <UIGestureRecognizerDelegate, BTDRouterViewControllerProtocol, AWEIMInputViewControllerDelegate, AWEIMSingleMessageDataControllerDelegate, AWEIMMessageListViewControllerDelegate>
{
    _Bool _showKeyboard;
    AWEIMMessageNavView *_navView;
    AWEIMStrangerTopFollowView *_topFollowView;
    AWEIMMessageListViewController *_messageListVC;
    UIView *_keyboardMaskView;
    AWEIMInputViewController *_inputVC;
    UIView *_inputExtraView;
    AWEIMSingleMessageDataController *_singleController;
    AWEIMSendMessageController *_sendMsgController;
    AWEIMUser *_toUser;
    long long _sendSuccessCount;
    long long _sendfailCount;
    UIPanGestureRecognizer *_panKeyboardMaskViewGes;
    struct CGRect _lastFrame;
}

@property(nonatomic) struct CGRect lastFrame; // @synthesize lastFrame=_lastFrame;
@property(retain, nonatomic) UIPanGestureRecognizer *panKeyboardMaskViewGes; // @synthesize panKeyboardMaskViewGes=_panKeyboardMaskViewGes;
@property(nonatomic) long long sendfailCount; // @synthesize sendfailCount=_sendfailCount;
@property(nonatomic) long long sendSuccessCount; // @synthesize sendSuccessCount=_sendSuccessCount;
@property(nonatomic) _Bool showKeyboard; // @synthesize showKeyboard=_showKeyboard;
@property(retain, nonatomic) AWEIMUser *toUser; // @synthesize toUser=_toUser;
@property(retain, nonatomic) AWEIMSendMessageController *sendMsgController; // @synthesize sendMsgController=_sendMsgController;
@property(retain, nonatomic) AWEIMSingleMessageDataController *singleController; // @synthesize singleController=_singleController;
@property(retain, nonatomic) UIView *inputExtraView; // @synthesize inputExtraView=_inputExtraView;
@property(retain, nonatomic) AWEIMInputViewController *inputVC; // @synthesize inputVC=_inputVC;
@property(retain, nonatomic) UIView *keyboardMaskView; // @synthesize keyboardMaskView=_keyboardMaskView;
@property(retain, nonatomic) AWEIMMessageListViewController *messageListVC; // @synthesize messageListVC=_messageListVC;
@property(retain, nonatomic) AWEIMStrangerTopFollowView *topFollowView; // @synthesize topFollowView=_topFollowView;
@property(retain, nonatomic) AWEIMMessageNavView *navView; // @synthesize navView=_navView;
- (void).cxx_destruct;
- (double)getMessageListVCTop;
- (void)_updateLayout;
- (void)viewWillLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)_setupUI;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)handlePanKeyboardMaskViewGes:(id)arg1;
- (void)handleTapKeyboardMaskViewGes:(id)arg1;
- (void)moreBtnClicked:(id)arg1;
- (void)backBtnClicked:(id)arg1;
- (void)willDismissKeyboard;
- (void)willShowKeyboard;
- (void)didUpdateInputVCFrame:(struct CGRect)arg1 willShowKeyboard:(_Bool)arg2;
- (void)didSendContent:(id)arg1;
- (void)willDeleteMessage:(id)arg1 deleteCompletion:(CDUnknownBlockType)arg2;
- (void)willResendMessage:(id)arg1 deleteCompletion:(CDUnknownBlockType)arg2;
- (void)willLoadMoreMessages;
- (void)didReceiveSendMessageResponse:(id)arg1;
- (void)didBecomeEmpty;
- (void)didClearMessages;
- (void)didAddBatchMessages;
- (void)didAddNewMessage;
- (void)_fetchSingleData:(_Bool)arg1;
- (void)fetchData;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)_removeObservers;
- (void)_addObservers;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

