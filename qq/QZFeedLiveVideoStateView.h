//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZVideoFeedCommStateView.h>

@class UIImageView;

@interface QZFeedLiveVideoStateView : QZVideoFeedCommStateView
{
    UIImageView *_liveEndBgView;
    unsigned long long _currentState;
    _Bool _alwaysHideDurationLabel;
    _Bool _isPanoramaLive;
}

@property(nonatomic) _Bool isPanoramaLive; // @synthesize isPanoramaLive=_isPanoramaLive;
@property(nonatomic) _Bool alwaysHideDurationLabel; // @synthesize alwaysHideDurationLabel=_alwaysHideDurationLabel;
- (void).cxx_destruct;
- (void)showPlayIcon:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)setFeedLiveInfoViewsHidden:(_Bool)arg1;
- (void)dealView:(id)arg1 Animated:(_Bool)arg2 isShow:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)hideLiveEndView;
- (void)deleteLiveEndBgView;
- (void)setLiveEndView:(_Bool)arg1;
- (void)createLiveEndView;
- (void)setDurationLabelHidden:(_Bool)arg1;
- (void)setState:(unsigned long long)arg1;

@end

