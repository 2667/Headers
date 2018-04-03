//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

#import "WSVideoPlayerViewDelegate-Protocol.h"

@class MMBrandHeadImageView, MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, UIView, WSStreamPlayerView, WSVideoModel;
@protocol WSVideoFlowTableViewCellDelegate;

@interface WSVideoFlowTableViewCell : MMTableViewCell <WSVideoPlayerViewDelegate>
{
    UIView *_sourceContainerView;
    MMBrandHeadImageView *_sourceHeadImgView;
    MMUILabel *_sourceLabel;
    UIImageView *_sourceArrow;
    UIButton *_shareButton;
    MMUILabel *_titleLabel;
    MMUILabel *_countLabel;
    NSMutableArray *_arrTagButton;
    UIView *_divLine;
    UIView *_shareButtonDivLine;
    UIView *_videoMaskView;
    UIView *_videoTopMaskView;
    UIView *_videoBottomMaskView;
    _Bool _needIPhoneXLayout;
    id <WSVideoFlowTableViewCellDelegate> _delegate;
    WSStreamPlayerView *_videoPlayerView;
    WSVideoModel *_videoModel;
}

+ (double)HeightForBottomTagPanel:(id)arg1;
+ (double)HeightBottomCountLabel:(id)arg1;
+ (double)HeightForDescLabel:(id)arg1 maxWidth:(double)arg2;
+ (double)HeightForBottomPanel:(id)arg1 maxWidth:(double)arg2;
+ (double)HeightForVideoModel:(id)arg1 maxWidth:(double)arg2;
+ (double)EstimatedCellHeight;
+ (double)HeightForVideoPlayerView;
+ (double)OffsetYForVideoPlayerView;
@property(nonatomic) _Bool needIPhoneXLayout; // @synthesize needIPhoneXLayout=_needIPhoneXLayout;
@property(retain, nonatomic) WSVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(readonly, nonatomic) WSStreamPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(nonatomic) __weak id <WSVideoFlowTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)weakenCell:(_Bool)arg1 animated:(_Bool)arg2;
- (void)resetSurroundMask;
- (void)weakenSurrounds:(_Bool)arg1;
- (void)onMaskPlayButtonClick:(id)arg1;
- (void)onDelayToHideControlViews;
- (void)onShowControlViews;
- (_Bool)hasPlayAnyVideo;
- (_Bool)isInteractiveVideo;
- (id)onPlayNextVideo:(_Bool)arg1 currentVideo:(id)arg2;
- (_Bool)canPlayNextVideo;
- (void)onOperateShare:(id)arg1;
- (void)onDelayPlayVideo;
- (_Bool)onVideoPlayEnd;
- (void)onVideoStateChange:(long long)arg1;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(id)arg3;
- (void)resumePlayerView:(id)arg1;
- (void)removePlayerView;
- (void)layoutDivLine;
- (void)layoutMaskView;
- (void)layoutTag;
- (void)layoutCountLabel;
- (void)layoutDescLabel;
- (void)layoutVideoPlayerView;
- (void)layoutShareDivLine;
- (void)layoutShareButton;
- (void)layoutSource;
- (void)layoutViews;
- (void)layoutSubviews;
- (void)onTapSurroundings:(id)arg1;
- (void)onTapMaskView:(id)arg1;
- (void)delayTapTag:(id)arg1;
- (void)onTapTag:(id)arg1;
- (void)onTapTitle:(id)arg1;
- (void)onTapSource:(id)arg1;
- (void)onShare:(id)arg1;
- (void)playVideoForce:(_Bool)arg1;
- (void)forcePlayVideo;
- (void)playVideo;
- (void)showAsPreparePlay;
- (void)updateVideoThumb;
- (void)setVideoInfo:(id)arg1;
- (void)reset;
- (id)getPlayCountLabelText;
- (void)initDivLine;
- (void)initMaskView;
- (void)initCountLabel;
- (void)initTagButton;
- (id)genTagButton;
- (void)initDescLabel;
- (void)initShareDivLine;
- (void)initShareButton;
- (void)initSource;
- (void)initView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

