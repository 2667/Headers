//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WSStreamPlayerView, WSVideoFlowTableViewCell, WSVideoModel, WSVideoTagInfo;

@protocol WSVideoFlowTableViewCellDelegate <NSObject>

@optional
- (void)onPlayerViewMaskPlayButtonClick:(WSVideoFlowTableViewCell *)arg1;
- (void)onDelayToHideControlViews:(WSVideoFlowTableViewCell *)arg1;
- (void)onShowControlViews:(WSVideoFlowTableViewCell *)arg1;
- (_Bool)hasPlayAnyVideo;
- (_Bool)isInteractiveCell:(WSVideoFlowTableViewCell *)arg1;
- (unsigned int)getCachedPlayTimeForVideo:(WSVideoModel *)arg1;
- (WSVideoModel *)onTryPlayNext:(_Bool)arg1 currentVideo:(WSVideoModel *)arg2;
- (_Bool)canLoadNextWithCurrent:(WSVideoFlowTableViewCell *)arg1;
- (void)onRealBeginPlay:(WSVideoFlowTableViewCell *)arg1 autoPlay:(_Bool)arg2;
- (void)onClickCellTag:(WSVideoTagInfo *)arg1 sender:(WSVideoFlowTableViewCell *)arg2;
- (void)onClickCellSource:(WSVideoModel *)arg1;
- (void)onClickCellTitle:(WSVideoModel *)arg1;
- (void)onClickShare:(WSVideoModel *)arg1;
- (_Bool)onVideoPlayEnd:(WSStreamPlayerView *)arg1;
- (void)onTapSurroundings:(WSVideoFlowTableViewCell *)arg1;
- (void)onTapMaskView:(WSVideoFlowTableViewCell *)arg1;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 cell:(WSVideoFlowTableViewCell *)arg3 video:(WSStreamPlayerView *)arg4;
@end

