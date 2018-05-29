//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "WBSegmentChannelViewControllerProtocol-Protocol.h"

@class NSString, WBMLImageTextLiveViewController, WBMLImageTextSegmentItemModel;
@protocol WBHotWeiboSquareBottomViewDelegate;

@interface WBMLImageTextSegementCardVeiwController : WBTableViewController <WBSegmentChannelViewControllerProtocol>
{
    _Bool _isFullScreenMode;
    WBMLImageTextSegmentItemModel *_model;
    id <WBHotWeiboSquareBottomViewDelegate> _scrollEventCallBack;
    CDUnknownBlockType _unreadHintTouchHandle;
    unsigned long long _analysisOwnerOption;
    WBMLImageTextLiveViewController *_rootVc;
    struct CGPoint _currentOffset;
}

+ (id)segmentViewControllerWithSegmentChannel:(id)arg1 baseViewController:(id)arg2 userInfo:(id)arg3;
@property(nonatomic) __weak WBMLImageTextLiveViewController *rootVc; // @synthesize rootVc=_rootVc;
@property(nonatomic) unsigned long long analysisOwnerOption; // @synthesize analysisOwnerOption=_analysisOwnerOption;
@property(copy, nonatomic) CDUnknownBlockType unreadHintTouchHandle; // @synthesize unreadHintTouchHandle=_unreadHintTouchHandle;
@property(nonatomic) __weak id <WBHotWeiboSquareBottomViewDelegate> scrollEventCallBack; // @synthesize scrollEventCallBack=_scrollEventCallBack;
@property(nonatomic) struct CGPoint currentOffset; // @synthesize currentOffset=_currentOffset;
@property(nonatomic) _Bool isFullScreenMode; // @synthesize isFullScreenMode=_isFullScreenMode;
@property(retain, nonatomic) WBMLImageTextSegmentItemModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)initViewControllerWithSegmentChannel:(id)arg1 baseViewController:(id)arg2 userInfo:(id)arg3;
- (void)showUnreadRemindHintBoardWithContent:(id)arg1 withAnimationDurationTime:(double)arg2 withTouchHandle:(CDUnknownBlockType)arg3;
- (void)configSelfWhenSwitchToMode:(unsigned long long)arg1 withChannelModel:(id)arg2;
- (void)doReloadViews;
- (void)rightMoreItemPressed:(id)arg1;
- (_Bool)dataLoaded;
- (id)prlmWrapper;
- (id)segmentID;
- (_Bool)refresh:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

