//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLVideoBaseViewController.h"

#import "WBBaseSegmentViewWrapperDelegate-Protocol.h"
#import "WBComposeViewControllerDelegate-Protocol.h"
#import "WBFloatWindowProtcol-Protocol.h"
#import "WBITGiftListViewDelegate-Protocol.h"
#import "WBMLImageTextBottomBarViewDelegate-Protocol.h"
#import "WBMLImageTextCustomNavigationBarViewProtcol-Protocol.h"
#import "WBMLImageTextFloatAdDelegate-Protocol.h"
#import "WBMLImageTextFloatStatusViewDelegate-Protocol.h"
#import "WBMLImageTextGiftShowCardViewDelegate-Protocol.h"
#import "WBMLImageTextInteractiveDelegate-Protocol.h"
#import "WBMLImageTextLiveCarouselViewDelegate-Protocol.h"
#import "WBMLImageTextLiveReservationViewProtocol-Protocol.h"
#import "WBMLImageTextLoadingTipViewDelegate-Protocol.h"
#import "WBMLImageTextRealTimeCommentViewControllerProtocol-Protocol.h"
#import "WBMLVideoFollowTipViewDelegate-Protocol.h"
#import "WBMLVideoPlayerDelegate-Protocol.h"
#import "WBMediaLiveLandscapeViewDelegate-Protocol.h"

@class EKEvent, EKEventStore, NSDate, NSMutableArray, NSString, NSTimer, UIView, WBMLImageTextBottomBarView, WBMLImageTextCalendarFailViewController, WBMLImageTextCountDownView, WBMLImageTextFloatAdView, WBMLImageTextFloatStatusView, WBMLImageTextGiftShowCardViewAssistanter, WBMLImageTextLiveCarouselView, WBMLImageTextLiveEventModel, WBMLImageTextLiveReservationModel, WBMLImageTextLiveReservationView, WBMLImageTextLoadingTipView, WBMLImageTextMatchFloatView, WBMLImageTextNoMatchFloatView, WBMLImageTextSegmentItemModel, WBMLImageTextSegmentViewWrapper, WBMLVideoModalsContainerView, WBMLVideoUserInfoModel, WBMediaLiveLandscapeView, WBShortLinkCalendarSuccessView;

@interface WBMLImageTextLiveViewController : WBMLVideoBaseViewController <WBMLVideoPlayerDelegate, WBITGiftListViewDelegate, WBMLImageTextGiftShowCardViewDelegate, WBBaseSegmentViewWrapperDelegate, WBMLImageTextCustomNavigationBarViewProtcol, WBMLImageTextBottomBarViewDelegate, WBMLImageTextInteractiveDelegate, WBFloatWindowProtcol, WBMLImageTextRealTimeCommentViewControllerProtocol, WBMLVideoFollowTipViewDelegate, WBMLImageTextLiveReservationViewProtocol, WBComposeViewControllerDelegate, WBMLImageTextLoadingTipViewDelegate, WBMLImageTextFloatAdDelegate, WBMLImageTextFloatStatusViewDelegate, WBMediaLiveLandscapeViewDelegate, WBMLImageTextLiveCarouselViewDelegate>
{
    long long countDownHour;
    long long countDownMinute;
    long long countDownSecond;
    WBMLImageTextSegmentItemModel *messageCardModel;
    WBMLVideoModalsContainerView *followTipContainerView;
    _Bool hasShowFollowTip;
    _Bool _joinRoomSucess;
    _Bool _floatViewController;
    _Bool _floatSwitchState;
    WBMLImageTextLiveCarouselView *_carouselView;
    WBMediaLiveLandscapeView *_landscapeView;
    WBMLImageTextSegmentViewWrapper *_segementViewWrapper;
    WBMLImageTextLiveEventModel *_eventModel;
    UIView *_navigationBar;
    UIView *_bottomPraiseView;
    WBMLImageTextLiveReservationView *_reservationView;
    EKEventStore *_currentEventStore;
    EKEvent *_currentEvent;
    NSString *_currentEventIdentifier;
    NSString *_schemeLiveId;
    NSString *_currentScheme;
    WBMLImageTextCountDownView *_nostartCountDownView;
    NSTimer *_countDownLoopTimer;
    NSTimer *_showFollowTipLoopTimer;
    WBMLImageTextLiveReservationModel *_noStartModel;
    NSDate *_noStartDate;
    WBShortLinkCalendarSuccessView *_orderSuccessView;
    WBMLImageTextBottomBarView *_inputContainerView;
    WBMLImageTextCalendarFailViewController *_orderFailViewController;
    NSDate *_viewStartDate;
    WBMLImageTextLoadingTipView *_loadingTipView;
    UIView *_countDownView;
    UIView *_viewerView;
    WBMLVideoUserInfoModel *_currentUser;
    WBMLVideoModalsContainerView *_profileModalView;
    WBMLImageTextFloatAdView *_liveFloatWindow;
    WBMLImageTextFloatStatusView *_floatStatusView;
    WBMLImageTextNoMatchFloatView *_noMatchFloatWindow;
    WBMLImageTextMatchFloatView *_matchFloatWindow;
    NSTimer *_backendTimer;
    NSString *_lfid;
    NSString *_luicode;
    NSString *_containerid;
    unsigned long long _orientationMask;
    WBMLImageTextFloatAdView *_floatView;
}

@property(retain, nonatomic) WBMLImageTextFloatAdView *floatView; // @synthesize floatView=_floatView;
@property(nonatomic) _Bool floatSwitchState; // @synthesize floatSwitchState=_floatSwitchState;
@property(nonatomic) unsigned long long orientationMask; // @synthesize orientationMask=_orientationMask;
@property(retain, nonatomic) NSString *containerid; // @synthesize containerid=_containerid;
@property(retain, nonatomic) NSString *luicode; // @synthesize luicode=_luicode;
@property(retain, nonatomic) NSString *lfid; // @synthesize lfid=_lfid;
@property(retain, nonatomic) NSTimer *backendTimer; // @synthesize backendTimer=_backendTimer;
@property(nonatomic) _Bool floatViewController; // @synthesize floatViewController=_floatViewController;
@property(retain, nonatomic) WBMLImageTextMatchFloatView *matchFloatWindow; // @synthesize matchFloatWindow=_matchFloatWindow;
@property(retain, nonatomic) WBMLImageTextNoMatchFloatView *noMatchFloatWindow; // @synthesize noMatchFloatWindow=_noMatchFloatWindow;
@property(retain, nonatomic) WBMLImageTextFloatStatusView *floatStatusView; // @synthesize floatStatusView=_floatStatusView;
@property(retain, nonatomic) WBMLImageTextFloatAdView *liveFloatWindow; // @synthesize liveFloatWindow=_liveFloatWindow;
@property(retain, nonatomic) WBMLVideoModalsContainerView *profileModalView; // @synthesize profileModalView=_profileModalView;
@property(retain, nonatomic) WBMLVideoUserInfoModel *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) UIView *viewerView; // @synthesize viewerView=_viewerView;
@property(retain, nonatomic) UIView *countDownView; // @synthesize countDownView=_countDownView;
@property(retain, nonatomic) WBMLImageTextLoadingTipView *loadingTipView; // @synthesize loadingTipView=_loadingTipView;
@property(retain, nonatomic) NSDate *viewStartDate; // @synthesize viewStartDate=_viewStartDate;
@property(nonatomic) _Bool joinRoomSucess; // @synthesize joinRoomSucess=_joinRoomSucess;
@property(retain, nonatomic) WBMLImageTextCalendarFailViewController *orderFailViewController; // @synthesize orderFailViewController=_orderFailViewController;
@property(retain, nonatomic) WBMLImageTextBottomBarView *inputContainerView; // @synthesize inputContainerView=_inputContainerView;
@property(retain, nonatomic) WBShortLinkCalendarSuccessView *orderSuccessView; // @synthesize orderSuccessView=_orderSuccessView;
@property(retain, nonatomic) NSDate *noStartDate; // @synthesize noStartDate=_noStartDate;
@property(retain, nonatomic) WBMLImageTextLiveReservationModel *noStartModel; // @synthesize noStartModel=_noStartModel;
@property(retain, nonatomic) NSTimer *showFollowTipLoopTimer; // @synthesize showFollowTipLoopTimer=_showFollowTipLoopTimer;
@property(retain, nonatomic) NSTimer *countDownLoopTimer; // @synthesize countDownLoopTimer=_countDownLoopTimer;
@property(retain, nonatomic) WBMLImageTextCountDownView *nostartCountDownView; // @synthesize nostartCountDownView=_nostartCountDownView;
@property(retain, nonatomic) NSString *currentScheme; // @synthesize currentScheme=_currentScheme;
@property(retain, nonatomic) NSString *schemeLiveId; // @synthesize schemeLiveId=_schemeLiveId;
@property(retain, nonatomic) NSString *currentEventIdentifier; // @synthesize currentEventIdentifier=_currentEventIdentifier;
@property(retain, nonatomic) EKEvent *currentEvent; // @synthesize currentEvent=_currentEvent;
@property(retain, nonatomic) EKEventStore *currentEventStore; // @synthesize currentEventStore=_currentEventStore;
@property(retain, nonatomic) WBMLImageTextLiveReservationView *reservationView; // @synthesize reservationView=_reservationView;
@property(retain, nonatomic) UIView *bottomPraiseView; // @synthesize bottomPraiseView=_bottomPraiseView;
@property(retain, nonatomic) UIView *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) WBMLImageTextLiveEventModel *eventModel; // @synthesize eventModel=_eventModel;
@property(retain, nonatomic) WBMLImageTextSegmentViewWrapper *segementViewWrapper; // @synthesize segementViewWrapper=_segementViewWrapper;
@property(retain, nonatomic) WBMediaLiveLandscapeView *landscapeView; // @synthesize landscapeView=_landscapeView;
@property(retain, nonatomic) WBMLImageTextLiveCarouselView *carouselView; // @synthesize carouselView=_carouselView;
- (void).cxx_destruct;
- (void)statusBarOrientationDidChange:(id)arg1;
- (void)baseSmartPlayerReadyToPlay:(id)arg1;
- (void)panNavigationDidFinish:(id)arg1 willPop:(_Bool)arg2;
- (_Bool)panNavigationSimultaneouslyWithGestureRecognizer:(id)arg1;
- (_Bool)panNavigationShouldBegin:(id)arg1;
- (_Bool)panToNavigation;
- (void)floatStatusView:(id)arg1 action:(unsigned long long)arg2;
- (void)bannerImgURLTap:(id)arg1;
- (void)swicthAccountAndClose;
- (void)unlockOrientation;
- (void)lockOrientation:(long long)arg1;
- (void)closeActionClearData;
- (void)clearData;
- (void)loadingTipViewReloadDidTap:(id)arg1;
- (void)showUserProfileCardViewWithUser:(id)arg1;
- (_Bool)needShowFloatWindow;
- (void)resetAnalyInfo;
- (void)dealloc;
- (void)shareToThirdParty;
- (void)updateMatchInfo:(id)arg1;
- (void)shareOthers:(id)arg1;
- (void)getFeedCardByMid:(id)arg1 cid:(id)arg2 withRealTimeComment:(id)arg3;
- (void)loadMoreFeedMaxid:(id)arg1 withRealTimeComment:(id)arg2;
- (id)realTimeCommentViewController;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (id)floatWindowGetLiveStatus;
- (id)floatWindowGetLiveId;
- (unsigned long long)modeType;
- (_Bool)equalFromViewController:(id)arg1 info:(id)arg2 floatWindow:(id)arg3;
- (void)closeFloatView:(id)arg1;
- (void)recoverViewController:(id)arg1 baseViewController:(id)arg2 floatWindow:(id)arg3;
- (_Bool)willShowRecoverAnimal:(id)arg1 baseViewController:(id)arg2 floatWindow:(id)arg3;
- (_Bool)shouldShowInAnimal;
- (id)uicode;
- (_Bool)shouldDisableSentStateInStatusBarWithEvent:(int)arg1;
- (void)liveBottomBarView:(id)arg1 clickRewardButton:(id)arg2;
- (void)liveBottomBarView:(id)arg1 clickLikeButton:(id)arg2;
- (void)liveBottomBarView:(id)arg1 textFieldBtnClick:(id)arg2;
- (void)liveBottomBarView:(id)arg1 sendMessage:(id)arg2;
- (_Bool)isUserSlienced;
- (void)hideViewController:(CDUnknownBlockType)arg1;
- (void)back:(id)arg1;
- (void)followOwnerBtnPressed:(id)arg1;
- (void)follow:(_Bool)arg1 from:(id)arg2;
- (void)clickUserName:(id)arg1;
- (void)doFollowRequest;
- (void)tapFollowAnchorBtn:(id)arg1;
- (void)showFollowTipView:(id)arg1;
- (void)showFollowTipWithAnchorInfo:(id)arg1;
- (void)showFollowTip:(id)arg1;
- (void)showAnchorFollowTipView:(id)arg1;
- (void)flyIt;
- (void)cleanBeforeDisapper;
- (void)doAfterApper;
- (void)showPraise:(struct CGRect)arg1 buttonFrame:(struct CGRect)arg2 superView:(id)arg3 isSelf:(_Bool)arg4;
- (id)grayTextLabel;
- (void)pressFullScreenButton:(id)arg1;
- (void)defineViewer:(unsigned long long)arg1;
- (void)defineCountDownView:(id)arg1 minute:(id)arg2 second:(id)arg3;
- (void)tapView:(id)arg1;
- (id)defineCustomNavigationBar;
- (id)mkAutoLayoutView;
- (void)setLandscapeViewHiddenComment:(_Bool)arg1;
- (void)setInputViewForbidGift:(_Bool)arg1;
- (void)setInputViewAllowPraise:(_Bool)arg1;
- (void)setInputViewDefalutRepost:(id)arg1;
- (void)setInputViewAllowComment:(_Bool)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)deviceOrientationWillChange:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)landscapeViewDidFloat;
- (void)landscapeViewDidShare;
- (void)landscapeViewDidSendComment;
- (void)landscapeViewDidSendPraise;
- (void)landscapeViewDidClose:(id)arg1;
- (void)carouselViewDidTurnLandscape;
- (void)carouselViewDidReturn;
- (void)showWifiWarning;
- (void)onTapAd:(id)arg1;
- (void)carouselViewDidSuspension;
- (void)carouselViewDidOpenImage:(id)arg1;
- (void)isUserAllowToPlay;
- (void)configSegment;
- (void)buildDetailView;
- (void)layoutUi;
- (void)viewDidLayoutSubviews;
- (void)initUi;
- (void)didReceiveMemoryWarning;
- (void)resumePlayer;
- (void)pausePlayer;
- (void)weiboAccountDidRemove:(id)arg1;
- (void)weiboAccountDidChange:(id)arg1;
- (void)WillTerminateActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (void)requestStatusInfo:(id)arg1 cid:(id)arg2;
- (void)player:(id)arg1 currentProgress:(double)arg2 duration:(double)arg3;
- (void)player:(id)arg1 onEvent:(unsigned long long)arg2;
- (void)configPlayer;
- (void)layoutViews;
- (void)requestFeedInfoByMaxId:(id)arg1;
- (void)requestLiveInfo;
- (void)requestNeededInfo;
- (void)openImage:(id)arg1;
- (void)handleViewerViewDidDisappearEvent;
- (void)handleViewerViewWillDisappearEvent;
- (void)handleViewerViewDidAppearEvent;
- (void)handleViewerViewWillAppearEvent;
- (void)handleDataViewDidLoadEvent;
@property(retain, nonatomic) NSMutableArray *giftsArray;
@property(retain, nonatomic) WBMLImageTextGiftShowCardViewAssistanter *showAssistanter;
- (id)createSenderModelWithGiftModel:(id)arg1;
- (void)showGiftWithGiftMessage:(id)arg1 msg:(id)arg2;
- (void)sendGiftWithModel:(id)arg1;
- (void)wrapperDidSelectChannelsBar:(id)arg1 toIndex:(long long)arg2;
- (void)cardView:(id)arg1 finishEndWithModel:(id)arg2 senderUserModel:(id)arg3;
- (void)imageTextGiftListView:(id)arg1 selectModel:(id)arg2;
- (void)updateGiftNumberWithGiftID:(id)arg1 incNumber:(long long)arg2;
- (void)giftBtnActionWithSender:(id)arg1;
- (void)requestGiftData;
- (void)updateImageTextGiftData;
- (void)layoutGiftUI;
- (void)configFreeGiftUI;
- (void)handleGiftViewDidDisappearEvent;
- (void)handleGiftViewWillDisappearEvent;
- (void)handleGiftViewDidAppearEvent;
- (void)handleGiftViewWillAppearEvent;
- (void)handleGiftViewDidLoadEvent;
- (void)sendTestMsg:(id)arg1;
- (id)getRealTimeCommentViewController;
- (id)getMessageViewController;
- (void)addShareMessage;
- (_Bool)isSelf:(long long)arg1;
- (void)updateCurrentUser:(id)arg1;
- (void)updateLiveModel:(id)arg1;
- (void)onRealTimeCommentMessage:(id)arg1 msg:(id)arg2;
- (void)onWBMLImageTextMaskHeaderInfoMessage:(id)arg1 msg:(id)arg2;
- (void)onUserPolicyChanged:(id)arg1 msg:(id)arg2;
- (void)onStickyMessage:(id)arg1;
- (void)onAdminChangedMessage:(id)arg1 msg:(id)arg2;
- (void)onShutupMessage:(id)arg1 msg:(id)arg2;
- (void)onNotificationMessage:(id)arg1 msg:(id)arg2;
- (void)onJoinOrExitRoomMessage:(id)arg1 msg:(id)arg2;
- (void)onPopAlertBtn:(long long)arg1 link:(id)arg2 type:(long long)arg3;
- (void)onPopMessage:(id)arg1 msg:(id)arg2;
- (void)showAuthPopMessage:(id)arg1;
- (void)onAnchorCoinsChangeMessage:(id)arg1 msg:(id)arg2;
- (void)onUserListMessage:(id)arg1 msg:(id)arg2;
- (void)onActivityMarkMessage:(id)arg1 msg:(id)arg2;
- (void)onReviewMessage:(id)arg1 msg:(id)arg2;
- (void)onDepositIssueMessage:(id)arg1 msg:(id)arg2;
- (void)onShowCaseMessage:(id)arg1 msg:(id)arg2;
- (void)onLiveStatusChangedMessage:(id)arg1 msg:(id)arg2;
- (void)onFollowAnchorMessage:(id)arg1 msg:(id)arg2;
- (void)onShareLiveRoomMessage:(id)arg1 msg:(id)arg2;
- (void)onGiftMessage:(id)arg1 msg:(id)arg2;
- (void)onPraiseMessage:(id)arg1 msg:(id)arg2;
- (void)onCommentMessage:(id)arg1 msg:(id)arg2;
- (void)onDisconnected:(id)arg1;
- (void)onRewardFinish:(id)arg1 error:(id)arg2;
- (void)requestRepostInfo;
- (void)share:(id)arg1;
- (void)followUser:(id)arg1;
- (void)praiseComment:(long long)arg1 mid:(long long)arg2;
- (void)sendGift:(id)arg1 giftPrice:(id)arg2 giftNum:(long long)arg3 finish:(long long)arg4 offset:(long long)arg5 extension:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (void)sendComment:(id)arg1 isBarrage:(_Bool)arg2 needShareToWeibo:(_Bool)arg3;
- (void)sendShare:(id)arg1 extension:(id)arg2;
- (void)sendPraise;
- (void)exitRoom;
- (void)joinRoom;
- (void)handleInteractiveViewDidDisappearEvent;
- (void)handleInteractiveViewWillDisappearEvent;
- (void)handleInteractiveViewDidAppearEvent;
- (void)handleInteractiveViewWillAppearEvent;
- (void)handleInteractiveViewDidLoadEvent;
- (void)changeViewToLive;
- (void)removeEventNotify:(id)arg1;
- (void)removeEvent;
- (void)showFailView;
- (void)showSuccessView;
- (void)addEventNotify:(id)arg1 title:(id)arg2;
- (void)didPressReservation:(id)arg1;
- (void)coundDownTime;
- (void)startTimer;
- (void)buildViewWhenLiveNotStart;
- (_Bool)getEventIsOrder;
- (_Bool)getTimeFromStartTime:(id)arg1;
- (void)handleNotStartViewDidDisappearEvent;
- (void)handleNotStartViewWillDisappearEvent;
- (void)handleINotStartViewDidAppearEvent;
- (void)handleNotStartViewWillAppearEvent;
- (void)handleNotStartViewDidLoadEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

