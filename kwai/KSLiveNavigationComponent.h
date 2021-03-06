//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSLiveBaseComponent.h"

@class KSLiveAudienceListViewController, KSLiveInfoView, UIButton, UILabel, UIView;

@interface KSLiveNavigationComponent : KSLiveBaseComponent
{
    KSLiveInfoView *_infoView;
    UIView *_navigationView;
    CDUnknownBlockType _closePageAction;
    CDUnknownBlockType _tapAnchorAvatarAction;
    CDUnknownBlockType _followAnchorAction;
    CDUnknownBlockType _didSelectAudienceAction;
    UIButton *_closeButton;
    KSLiveAudienceListViewController *_audienceListViewController;
    UILabel *_likeCountLabel;
    long long _currentLikeCount;
    UILabel *_watchingCountLabel;
    long long _currentWatchingCount;
}

+ (id)componentWithContainer:(id)arg1 isAnchor:(_Bool)arg2;
@property(nonatomic) long long currentWatchingCount; // @synthesize currentWatchingCount=_currentWatchingCount;
@property(retain, nonatomic) UILabel *watchingCountLabel; // @synthesize watchingCountLabel=_watchingCountLabel;
@property(nonatomic) long long currentLikeCount; // @synthesize currentLikeCount=_currentLikeCount;
@property(retain, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) KSLiveAudienceListViewController *audienceListViewController; // @synthesize audienceListViewController=_audienceListViewController;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(copy, nonatomic) CDUnknownBlockType didSelectAudienceAction; // @synthesize didSelectAudienceAction=_didSelectAudienceAction;
@property(copy, nonatomic) CDUnknownBlockType followAnchorAction; // @synthesize followAnchorAction=_followAnchorAction;
@property(copy, nonatomic) CDUnknownBlockType tapAnchorAvatarAction; // @synthesize tapAnchorAvatarAction=_tapAnchorAvatarAction;
@property(copy, nonatomic) CDUnknownBlockType closePageAction; // @synthesize closePageAction=_closePageAction;
@property(retain, nonatomic) UIView *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) KSLiveInfoView *infoView; // @synthesize infoView=_infoView;
- (void).cxx_destruct;
- (void)didTapAnchorHead:(id)arg1;
- (void)didClickClose:(id)arg1;
- (void)setCloseHidden:(_Bool)arg1;
- (void)hideFollowActionViewAnimated:(_Bool)arg1;
- (void)showFollowViewAnimated:(_Bool)arg1;
- (struct CGRect)closeButtonBounds;
- (void)updateWatchingCountDisplay;
- (void)updateLikeCountDisplay;
- (void)bindViewModel:(id)arg1;
- (id)initWithContainer:(id)arg1;

@end

