//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "YXLiveGiftRepeatSendViewDelegate-Protocol.h"
#import "YXLiveGiftShortcutViewDelegate-Protocol.h"
#import "YXLiveRechargeServiceDelegate-Protocol.h"

@class NSArray, NSDate, NSMutableArray, NSString, UIImageView, UIView, UIViewController, YXFrameAnimationPop, YXGiftModel, YXGiftPopView, YXGiftStyle1, YXGiftTypeModel, YXLiveGiftRepeatSendView, YXLiveGiftShortcutModel, YXLiveGiftShortcutView, YXLiveGuardGiftAnimationView, YXLiveModel, YXLiveRechargeService, YXLiveRechargeView, YYLiveAnimatedImageView;
@protocol YXGiftManagerDelegate;

@interface YXGiftManager : NSObject <YXLiveRechargeServiceDelegate, YXLiveGiftRepeatSendViewDelegate, YXLiveGiftShortcutViewDelegate>
{
    _Bool _isPlayBack;
    _Bool _isAnchor;
    _Bool _isShowingFrameAnimation;
    _Bool _isFromStory;
    _Bool _needReloadGiftPopViewDataSource;
    _Bool _isShowGiftView;
    _Bool _coinTenThousandFirstShow;
    CDUnknownBlockType _increaseNumBlock;
    CDUnknownBlockType _decreaseNumBlock;
    YXLiveGiftShortcutModel *_giftShortcutModel;
    id <YXGiftManagerDelegate> _delegate;
    YXLiveModel *_liveModel;
    YXGiftTypeModel *_currentAnchorRedEnvelopModel;
    YXGiftTypeModel *_currentRedEnvelopCouponModel;
    CDUnknownBlockType _couponBlock;
    CDUnknownBlockType _buyGiftFeedBackToLive;
    CDUnknownBlockType _sensitiveWordsBackToLive;
    CDUnknownBlockType _buyGiftFeedBackToLiveByBarrageWorld;
    NSString *_source;
    YXGiftPopView *_giftPopView;
    YXLiveGiftShortcutView *_giftShortcutView;
    YXLiveGuardGiftAnimationView *_guardGiftAnimationView;
    CDUnknownBlockType _privateChatBuygift;
    NSString *_scid;
    CDUnknownBlockType _coinTenThousandBlock;
    YXGiftStyle1 *_giftView2;
    YXGiftStyle1 *_giftView3;
    YYLiveAnimatedImageView *_bigFrameAnimationView;
    YXFrameAnimationPop *_frameAnimationPopView;
    UIImageView *_bigImageView;
    YXGiftModel *_frameAnimationGiftModel;
    YXLiveGiftRepeatSendView *_repeatSendView;
    long long _goldcoin;
    long long _popcoin;
    YXLiveRechargeView *_rechargeView;
    YXLiveRechargeService *_rechargeService;
    UIView *_rechargeActiveView;
    NSDate *_giftPanelShowDate;
    UIViewController *_viewController;
    UIView *_animationView;
    NSArray *_giftListArray;
    NSArray *_noDisplayArray;
    NSMutableArray *_receiveArray;
    unsigned long long _continuouslyHit;
    NSMutableArray *_animIndexArray;
    long long _coin_count;
}

+ (void)getChatGiftTypeFromNetWithSuccessBlcok:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
+ (void)loadChatGiftData;
+ (void)set_ChatGiftVersion_Local:(int)arg1;
+ (long long)get_ChatGiftVerion_Local;
+ (id)getChatGiftTypeFromLocal;
+ (id)getDanmuTypeFromLocal;
+ (id)loadArrayWithFilePath:(id)arg1;
+ (void)getGiftListFromNetworkWithSuccBlcok:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool coinTenThousandFirstShow; // @synthesize coinTenThousandFirstShow=_coinTenThousandFirstShow;
@property(nonatomic) long long coin_count; // @synthesize coin_count=_coin_count;
@property(retain, nonatomic) NSMutableArray *animIndexArray; // @synthesize animIndexArray=_animIndexArray;
@property(nonatomic) _Bool isShowGiftView; // @synthesize isShowGiftView=_isShowGiftView;
@property(nonatomic) unsigned long long continuouslyHit; // @synthesize continuouslyHit=_continuouslyHit;
@property(retain, nonatomic) NSMutableArray *receiveArray; // @synthesize receiveArray=_receiveArray;
@property(retain, nonatomic) NSArray *noDisplayArray; // @synthesize noDisplayArray=_noDisplayArray;
@property(retain, nonatomic) NSArray *giftListArray; // @synthesize giftListArray=_giftListArray;
@property(nonatomic) __weak UIView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSDate *giftPanelShowDate; // @synthesize giftPanelShowDate=_giftPanelShowDate;
@property(nonatomic) _Bool needReloadGiftPopViewDataSource; // @synthesize needReloadGiftPopViewDataSource=_needReloadGiftPopViewDataSource;
@property(nonatomic) __weak UIView *rechargeActiveView; // @synthesize rechargeActiveView=_rechargeActiveView;
@property(retain, nonatomic) YXLiveRechargeService *rechargeService; // @synthesize rechargeService=_rechargeService;
@property(nonatomic) __weak YXLiveRechargeView *rechargeView; // @synthesize rechargeView=_rechargeView;
@property(nonatomic) long long popcoin; // @synthesize popcoin=_popcoin;
@property(nonatomic) long long goldcoin; // @synthesize goldcoin=_goldcoin;
@property(nonatomic) __weak YXLiveGiftRepeatSendView *repeatSendView; // @synthesize repeatSendView=_repeatSendView;
@property(retain, nonatomic) YXGiftModel *frameAnimationGiftModel; // @synthesize frameAnimationGiftModel=_frameAnimationGiftModel;
@property(nonatomic) __weak UIImageView *bigImageView; // @synthesize bigImageView=_bigImageView;
@property(nonatomic) __weak YXFrameAnimationPop *frameAnimationPopView; // @synthesize frameAnimationPopView=_frameAnimationPopView;
@property(nonatomic) __weak YYLiveAnimatedImageView *bigFrameAnimationView; // @synthesize bigFrameAnimationView=_bigFrameAnimationView;
@property(nonatomic) __weak YXGiftStyle1 *giftView3; // @synthesize giftView3=_giftView3;
@property(nonatomic) __weak YXGiftStyle1 *giftView2; // @synthesize giftView2=_giftView2;
@property(copy, nonatomic) CDUnknownBlockType coinTenThousandBlock; // @synthesize coinTenThousandBlock=_coinTenThousandBlock;
@property(copy, nonatomic) NSString *scid; // @synthesize scid=_scid;
@property(nonatomic) _Bool isFromStory; // @synthesize isFromStory=_isFromStory;
@property(copy, nonatomic) CDUnknownBlockType privateChatBuygift; // @synthesize privateChatBuygift=_privateChatBuygift;
@property(nonatomic) __weak YXLiveGuardGiftAnimationView *guardGiftAnimationView; // @synthesize guardGiftAnimationView=_guardGiftAnimationView;
@property(retain, nonatomic) YXLiveGiftShortcutView *giftShortcutView; // @synthesize giftShortcutView=_giftShortcutView;
@property(retain, nonatomic) YXGiftPopView *giftPopView; // @synthesize giftPopView=_giftPopView;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) CDUnknownBlockType buyGiftFeedBackToLiveByBarrageWorld; // @synthesize buyGiftFeedBackToLiveByBarrageWorld=_buyGiftFeedBackToLiveByBarrageWorld;
@property(copy, nonatomic) CDUnknownBlockType sensitiveWordsBackToLive; // @synthesize sensitiveWordsBackToLive=_sensitiveWordsBackToLive;
@property(copy, nonatomic) CDUnknownBlockType buyGiftFeedBackToLive; // @synthesize buyGiftFeedBackToLive=_buyGiftFeedBackToLive;
@property(copy, nonatomic) CDUnknownBlockType couponBlock; // @synthesize couponBlock=_couponBlock;
@property(retain, nonatomic) YXGiftTypeModel *currentRedEnvelopCouponModel; // @synthesize currentRedEnvelopCouponModel=_currentRedEnvelopCouponModel;
@property(retain, nonatomic) YXGiftTypeModel *currentAnchorRedEnvelopModel; // @synthesize currentAnchorRedEnvelopModel=_currentAnchorRedEnvelopModel;
@property(nonatomic) _Bool isShowingFrameAnimation; // @synthesize isShowingFrameAnimation=_isShowingFrameAnimation;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(nonatomic) _Bool isPlayBack; // @synthesize isPlayBack=_isPlayBack;
@property(retain, nonatomic) YXLiveModel *liveModel; // @synthesize liveModel=_liveModel;
@property(nonatomic) __weak id <YXGiftManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YXLiveGiftShortcutModel *giftShortcutModel; // @synthesize giftShortcutModel=_giftShortcutModel;
@property(copy, nonatomic) CDUnknownBlockType decreaseNumBlock; // @synthesize decreaseNumBlock=_decreaseNumBlock;
@property(copy, nonatomic) CDUnknownBlockType increaseNumBlock; // @synthesize increaseNumBlock=_increaseNumBlock;
- (void).cxx_destruct;
- (void)buyGiftwithGiftModel_fromChat:(id)arg1 Success:(CDUnknownBlockType)arg2 Failure:(CDUnknownBlockType)arg3;
- (void)initPopViewInPrivateMessage:(double)arg1;
- (id)initWithAnchorID:(id)arg1 popMaxHeight:(double)arg2 viewController:(id)arg3;
- (void)buyWorldMsgWithMsg:(id)arg1;
- (void)buyDanmuWithMsg:(id)arg1;
- (void)clearGiftShortcutView;
- (void)reloadGiftShortcut;
- (void)shortCutViewStopLoading;
- (void)shortCutBtnOnClick;
- (void)pathItemBtnOnClick:(id)arg1 amount:(long long)arg2;
- (void)buyGiftInShortcut;
- (void)click:(id)arg1;
- (void)buyFreeGift:(id)arg1 isFrom:(id)arg2 success:(CDUnknownBlockType)arg3;
- (void)updateFreeGiftCount:(long long)arg1 forGiftID:(long long)arg2;
- (id)getGiftLocalImagePathsByGiftId:(long long)arg1 subFolderName:(id)arg2 comboValue:(long long)arg3 downloadIfNoExists:(_Bool)arg4 frameIndex:(int)arg5;
- (id)getGiftTypeModelByGiftID:(long long)arg1;
- (void)emptyGiftPopViewDataSource;
- (void)reloadGiftPopViewDataSource;
- (void)didFinish:(_Bool)arg1;
- (void)didStart;
- (void)goRecharge:(id)arg1;
- (void)showNoMoneyTips;
- (void)removeRechargeView;
- (void)getPersionWealth;
- (void)requestTransformStatus;
- (void)showStarInWithModel:(id)arg1;
- (void)cleanQueue;
- (void)addModelToQueue:(id)arg1;
- (void)addAndSortGiftNumArray:(long long)arg1;
- (id)getGiftNumArray;
- (void)addSingleModelToQueue:(id)arg1;
- (void)showGuardFrameAnimationWithModel:(id)arg1;
- (void)showGuardFrameAnimation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)showFrameAnimationWithModel:(id)arg1;
- (void)updateGiftAnimations;
- (void)didDismissGiftRepeatSendView;
- (void)didTapGiftRepeatSendView:(id)arg1;
- (void)tenThousandAlert:(id)arg1 amount:(long long)arg2;
- (void)buyGift:(id)arg1 amount:(long long)arg2 message:(id)arg3 isFrom:(id)arg4;
- (void)showSurpriseWithResponseData:(id)arg1 andTrueLoveLevel:(long long)arg2 trueLoveName:(id)arg3 priority:(long long)arg4;
- (id)localModelWithResponseData:(id)arg1 andModel:(id)arg2 andAmount:(long long)arg3 andTrueLoveLevel:(long long)arg4 trueLoveName:(id)arg5;
- (void)buyNormal:(id)arg1 amount:(long long)arg2 message:(id)arg3 isFrom:(id)arg4;
- (void)buyBonus:(id)arg1 amount:(long long)arg2 message:(id)arg3 isFrom:(id)arg4;
- (void)buyBarrage:(id)arg1 amount:(long long)arg2 message:(id)arg3 isFrom:(id)arg4 isWorldMessage:(_Bool)arg5;
- (void)dismissGiftPanel:(CDUnknownBlockType)arg1 animation:(_Bool)arg2;
- (void)showGiftPanel:(CDUnknownBlockType)arg1 animation:(_Bool)arg2;
- (void)handleSwipeFrom:(id)arg1;
- (void)initPopView:(id)arg1;
- (void)umeng_YXChargeEventFromGift;
- (void)umeng_BuyGift:(id)arg1 amount:(long long)arg2;
- (void)clean;
- (void)showNewGiftGuideView;
- (void)dealloc;
- (id)initWithLiveModel:(id)arg1 animationView:(id)arg2 viewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

